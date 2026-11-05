#!/usr/bin/env bash
# MT7921 PCIe Wi-Fi driver: build + manual install (no DKMS)
# MT7921 PCIe Wi-Fi 驱动：编译 + 手动安装（不使用 DKMS）
set -euo pipefail

echo "==> [1/6] Checking hardware / 检查硬件"
lspci -nn | grep -qi '14c3:7961' || { echo "No MT7921 PCIe card detected / 未检测到网卡"; exit 1; }

echo "==> [2/6] Checking kernel headers / 检查内核头文件"
KV=$(uname -r)
echo "    Running kernel / 当前内核: $KV"
if [ ! -e "/lib/modules/$KV/build" ]; then
  echo "ERROR: /lib/modules/$KV/build not found"
  echo "Run first: sudo apt install -y linux-headers-rpi-2712"
  echo "If you just upgraded the kernel, reboot and re-run this script."
  exit 1
fi

echo "==> [3/6] Installing toolchain / 安装工具链"
sudo apt-get install -y -qq build-essential bc flex bison libssl-dev

echo "==> [4/6] Locating source / 定位源码"
SCRIPT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
if [ -d "$SCRIPT_DIR/src/mt7921" ]; then
  MDIR="$SCRIPT_DIR/src"
elif [ -d "$HOME/mt76-src/mt7921" ]; then
  MDIR="$HOME/mt76-src"
else
  echo "ERROR: cannot find the mt76 source directory"
  echo "Download the kernel source (guide step 6), or place mt76 at $SCRIPT_DIR/src"
  exit 1
fi
echo "    Source dir / 源码目录: $MDIR"

echo "==> [5/6] Building and installing / 编译并安装"
make -C "/lib/modules/$KV/build" M="$MDIR" CONFIG_MT7921E=m modules -j"$(nproc)"

BUILT_VM=$(modinfo "$MDIR/mt7921/mt7921e.ko" | awk '/^vermagic/{print $2}')
if [ "$BUILT_VM" != "$KV" ]; then
  echo "ERROR: vermagic mismatch (built=$BUILT_VM, running=$KV)"
  echo "The source does not match the running kernel."
  exit 1
fi

sudo mkdir -p "/lib/modules/$KV/updates"
sudo install -m 644 "$MDIR/mt7921/mt7921e.ko" "/lib/modules/$KV/updates/mt7921e.ko"
sudo depmod -a "$KV"
echo "    Installed / 已安装: $(modinfo mt7921e | awk '/^filename/{print $2}')"

echo "==> [6/6] Adding PCIe 32-bit DMA overlay / 添加 PCIe DMA overlay"
if ! grep -q 'pcie-32bit-dma-pi5' /boot/firmware/config.txt; then
  sudo cp /boot/firmware/config.txt /boot/firmware/config.txt.bak
  printf '\n# MT7921 PCIe Wi-Fi required\ndtoverlay=pcie-32bit-dma-pi5\n' \
    | sudo tee -a /boot/firmware/config.txt >/dev/null
  echo "    added / 已添加"
else
  echo "    already present / 已存在"
fi

echo
echo "Done. Pin the kernel to avoid breaking the driver on upgrade:"
echo "完成。建议锁定内核版本，防止升级后驱动失效："
echo "  sudo apt-mark hold linux-image-rpi-2712 linux-headers-rpi-2712"
echo
echo "Then reboot / 然后重启: sudo reboot"
