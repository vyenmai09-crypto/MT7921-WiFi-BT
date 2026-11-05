# MT7921 PCIe Wi-Fi Driver — Complete Build & Install Guide

> **Platform:** Raspberry Pi CM5 / Pi 5 (BCM2712) + MT7921 PCIe card
> **OS:** Raspberry Pi OS (Debian 12 bookworm), aarch64
> **Method:** Manual build + manual install (**no DKMS**)
> Every command is copy-paste ready and includes expected output plus a verification step.

---

## Table of Contents

1. [Background: Why You Must Build It Yourself](#1-background-why-you-must-build-it-yourself)
2. [Step 1 — Confirm the Hardware](#2-step-1--confirm-the-hardware)
3. [Step 2 — Check the Kernel Config](#3-step-2--check-the-kernel-config)
4. [Step 3 — Upgrade the Kernel (required for Bluetooth)](#4-step-3--upgrade-the-kernel-required-for-bluetooth)
5. [Step 4 — Install Kernel Headers](#5-step-4--install-kernel-headers)
6. [Step 5 — Install the Toolchain](#6-step-5--install-the-toolchain)
7. [Step 6 — Get Matching Kernel Source](#7-step-6--get-matching-kernel-source)
8. [Step 7 — Build the mt7921e Module](#8-step-7--build-the-mt7921e-module)
9. [Step 8 — Install the Module](#9-step-8--install-the-module)
10. [Step 9 — CRITICAL: Configure PCIe 32-bit DMA](#10-step-9--critical-configure-pcie-32-bit-dma)
11. [Step 10 — Reboot and Verify](#11-step-10--reboot-and-verify)
12. [Step 11 — Pin the Kernel Version (important)](#12-step-11--pin-the-kernel-version-important)
13. [Troubleshooting](#13-troubleshooting)
14. [Uninstall](#14-uninstall)
15. [Appendix: All-in-One Script](#15-appendix-all-in-one-script)

---

## 1. Background: Why You Must Build It Yourself

The official Raspberry Pi kernel is compiled **without** the MT7921 PCIe driver option.

| Kernel option | Purpose | Status in official kernel |
|---|---|---|
| `CONFIG_MT7921E` | MT7921 **PCIe** Wi-Fi driver | ❌ Not enabled (still today) |
| `CONFIG_MT7921U` | MT7921 USB Wi-Fi driver | ✅ Enabled |
| `CONFIG_MT7921_COMMON` | MT7921 shared code | ✅ Enabled |
| `CONFIG_BT_HCIBTUSB_MTK` | MediaTek Bluetooth support in btusb | 6.12.25 ❌ / 6.12.109 ✅ |
| `CONFIG_BT_MTK` | `btmtk.ko` Bluetooth module | 6.12.25 ❌ / 6.12.109 ✅ |

**Conclusion:**

* **Bluetooth** — just upgrade to kernel 6.12.109 or newer. No compilation needed.
* **Wi-Fi** — `mt7921e.ko` does not exist in the kernel at all. **You must build it.**

Verify that your kernel is also missing the module:

```bash
# No output means mt7921e.ko is absent and you need this guide
find /lib/modules/$(uname -r) -name 'mt7921e*'
```

---

## 2. Step 1 — Confirm the Hardware

```bash
# Confirm the PCIe card is present (look for 14c3:7961)
lspci -nn | grep -i mediatek
```

Expected:

```
0001:01:00.0 Network controller [0280]: MEDIATEK Corp. MT7921 802.11ax PCI Express Wireless Network Adapter [14c3:7961]
```

```bash
# Confirm Bluetooth — on MT7921 the BT side is USB, not PCIe
lsusb | grep -iE '0489|mediatek'
```

Expected (product ID may be e0cd / e0c8 / e0e0 etc.):

```
Bus 001 Device 002: ID 0489:e0cd Foxconn / Hon Hai MediaTek Bluetooth Adapter
```

```bash
# Confirm firmware is present (normally shipped with the OS)
ls -1 /lib/firmware/mediatek/ | grep -iE '7961|7922'
```

Expected:

```
BT_RAM_CODE_MT7961_1_2_hdr.bin      <- Bluetooth firmware
WIFI_MT7961_patch_mcu_1_2_hdr.bin   <- Wi-Fi patch
WIFI_RAM_CODE_MT7961_1.bin          <- Wi-Fi main firmware
```

> **Note:** The MT7921's internal codename is **MT7961**, which is why the firmware files
> say 7961 instead of 7921. This is correct, not a mismatch.

If firmware is missing:

```bash
sudo apt update && sudo apt install -y firmware-mediatek
```

---

## 3. Step 2 — Check the Kernel Config

```bash
uname -r
grep -E 'CONFIG_MT7921|CONFIG_BT_HCIBTUSB_MTK|CONFIG_BT_MTK' /boot/config-$(uname -r)
```

Typical output showing the problem:

```
CONFIG_MT7921_COMMON=m
# CONFIG_MT7921E is not set      <-- no Wi-Fi driver; this is what we fix
CONFIG_MT7921U=m
```

Also confirm module signing is **not** enforced (otherwise self-built modules won't load):

```bash
grep CONFIG_MODULE_SIG /boot/config-$(uname -r)
```

Seeing `# CONFIG_MODULE_SIG is not set` means you are good to continue.

---

## 4. Step 3 — Upgrade the Kernel (required for Bluetooth)

If your kernel is older than 6.12.109, `btmtk.ko` does not exist and Bluetooth will show:

* MAC address `00:00:00:00:00:00` in `hciconfig`
* `Bluetooth: hci0: Opcode 0x0c03 failed: -110` in `dmesg`

Upgrade:

```bash
sudo apt update
sudo apt install -y linux-image-rpi-2712 linux-headers-rpi-2712
```

> For CM4 / Pi 4 (BCM2711) replace `-2712` with `-v8`.
> Check your platform with `cat /proc/device-tree/model`.

After the upgrade you **must reboot immediately** so the system actually runs the new kernel:

```bash
sudo reboot
```

> **Why reboot first?**
> Everything that follows must match the **currently running** kernel. Raspberry Pi OS
> installs two kernel flavours side by side: `6.12.109+rpt-rpi-2712` (Pi 5 / CM5) and
> `6.12.109+rpt-rpi-v8` (Pi 3 / Pi 4). Only `uname -r` tells you which one is actually running.

After rebooting, verify the kernel version and Bluetooth support:

```bash
uname -r                                        # e.g. 6.12.109+rpt-rpi-2712
find /lib/modules/$(uname -r) -name 'btmtk*'    # must return a path
```

> **If you are already on 6.12.109 or newer, skip this step.**
> Because this guide installs manually (no DKMS), **upgrading the kernel will break the
> Wi-Fi driver**. So either upgrade once now, or don't upgrade at all.
> See [Step 11](#12-step-11--pin-the-kernel-version-important).

---

## 5. Step 4 — Install Kernel Headers

Kernel headers provide the `Makefile`, `Module.symvers` and `.config` needed to build
out-of-tree modules.

```bash
sudo apt install -y linux-headers-rpi-2712
```

The header version **must** match the kernel you are running:

```bash
dpkg -l | grep linux-headers

KV=$(uname -r)
echo "Target kernel: $KV"
ls -l /lib/modules/$KV/build
```

Expected: `/lib/modules/<version>/build` is a symlink to `/usr/src/linux-headers-<version>`.

> **Pitfall: why always use `uname -r` instead of "pick the newest"?**
>
> 1. Raspberry Pi installs two kernels. `ls /lib/modules/ | sort -V | tail -1` returns
>    `6.12.109+rpt-rpi-v8` (alphabetically after `-2712`), but CM5 actually runs `-2712`.
>    A module built for the wrong flavour **will not load**.
> 2. Some systems have stray third-party `.ko` files dropped directly into
>    `/lib/modules/` (e.g. `ch9344.ko`), so name sorting returns a filename, not a version.
>
> So: **reboot into the target kernel first, then use `KV=$(uname -r)`.**
> Sanity check: `echo $KV` must exactly equal `uname -r`.

Confirm the symbol table exists (needed to resolve dependencies at build time):

```bash
ls -lh /lib/modules/$KV/build/Module.symvers
grep -c 'mt76' /lib/modules/$KV/build/Module.symvers
```

The count should be in the hundreds (e.g. 433), meaning all mt76 exported symbols are present.

> **Why this matters:** `mt7921e.ko` depends on symbols exported by `mt76.ko`,
> `mt792x-lib.ko` and `mt7921-common.ko`. Those modules already ship with the OS — we only
> build the missing `mt7921e.ko`, so the symbols must match exactly.

---

## 6. Step 5 — Install the Toolchain

```bash
sudo apt install -y build-essential bc flex bison libssl-dev
```

Verify:

```bash
for t in gcc make bc flex bison; do printf '%-8s: ' $t; command -v $t || echo MISSING; done
```

---

## 7. Step 6 — Get Matching Kernel Source

**The source version must exactly match the kernel version**, otherwise the modversions
CRC check will fail.

> If the `src/` directory shipped alongside this guide already matches your kernel,
> skip straight to [Step 7](#8-step-7--build-the-mt7921e-module).

### 7.1 Enable the source repository

```bash
echo "deb-src http://archive.raspberrypi.com/debian/ bookworm main" \
  | sudo tee /etc/apt/sources.list.d/raspi-src.list
sudo apt update
```

### 7.2 Find the exact version string

```bash
apt-cache policy linux-image-rpi-2712 | head -n 5
```

The `Candidate:` line is the version you need, e.g. `1:6.12.109-1+rpt1`.

### 7.3 Download and extract

```bash
mkdir -p ~/ksrc && cd ~/ksrc
apt-get source linux=1:6.12.109-1+rpt1      # use the version from the previous step
```

> Download is ~151 MB and expands to ~1.8 GB. Check free space with `df -h /`.
> Do **not** use sudo here.

Verify the source tree and the mt7921 code:

```bash
ls -d ~/ksrc/linux-*/
ls ~/ksrc/linux-*/drivers/net/wireless/mediatek/mt76/mt7921/
```

You should see `pci.c  pci_mac.c  pci_mcu.c  Makefile ...`.

### 7.4 Keep only the mt76 directory (optional, saves space)

The full kernel source is 1.8 GB, but building mt7921e only needs the mt76 directory:

```bash
cp -a ~/ksrc/linux-*/drivers/net/wireless/mediatek/mt76 ~/mt76-src
rm -rf ~/ksrc          # free the other 1.8 GB
du -sh ~/mt76-src      # about 3 MB
```

---

## 8. Step 7 — Build the mt7921e Module

Look at the mt7921 Makefile to understand which switch we need to flip:

```bash
cat ~/mt76-src/mt7921/Makefile
```

```makefile
obj-$(CONFIG_MT7921_COMMON) += mt7921-common.o
obj-$(CONFIG_MT7921E)       += mt7921e.o     # <-- this line, disabled by default
obj-$(CONFIG_MT7921S)       += mt7921s.o
obj-$(CONFIG_MT7921U)       += mt7921u.o
mt7921e-y := pci.o pci_mac.o pci_mcu.o
```

**Build** (pass `CONFIG_MT7921E=m` on the command line to override the kernel `.config`):

```bash
KV=$(uname -r)
MDIR=~/mt76-src                     # or ~/MT7921-WiFi-BT/src if using the bundled source

echo "Kernel:     $KV"
echo "Source dir: $MDIR"

make -C /lib/modules/$KV/build M=$MDIR CONFIG_MT7921E=m modules -j$(nproc)
```

> **Parameter breakdown**
> * `-C /lib/modules/$KV/build` — use the kernel header build system
> * `M=$MDIR` — build the mt76 directory as an external module
> * `CONFIG_MT7921E=m` — command-line variables have the highest precedence, forcing
>   mt7921e to be built as a module
> * `-j$(nproc)` — parallel build (~2-4 minutes on a 4-core CM5)

Success looks like:

```
  LD [M]  .../mt76/mt7921/mt7921e.ko
```

Confirm the artefact:

```bash
ls -lh $MDIR/mt7921/mt7921e.ko
```

---

## 9. Step 8 — Install the Module

### 9.1 Self-check the build (very important)

```bash
KV=$(uname -r)
MDIR=~/mt76-src

modinfo $MDIR/mt7921/mt7921e.ko | grep -E 'vermagic|depends'
modinfo /lib/modules/$KV/kernel/drivers/net/wireless/mediatek/mt76/mt7921/mt7921-common.ko.xz | grep vermagic
```

**Both `vermagic` strings must be identical**, e.g.:

```
vermagic: 6.12.109+rpt-rpi-2712 SMP preempt mod_unload modversions aarch64
```

If they differ, your source or header version is wrong — go back to Step 6.

Also confirm the device ID is in the driver's table:

```bash
modinfo $MDIR/mt7921/mt7921e.ko | grep 7961
# expected: alias: pci:v000014C3d00007961sv*sd*bc*sc*i*
```

### 9.2 Install into `updates/`

```bash
sudo mkdir -p /lib/modules/$KV/updates
sudo install -m 644 $MDIR/mt7921/mt7921e.ko /lib/modules/$KV/updates/mt7921e.ko
sudo depmod -a $KV
```

> **Why `updates/` instead of `kernel/`:**
> `depmod` gives `updates/` higher priority, and the directory is not owned by any deb
> package, so `apt` file-conflict checks never interfere.

### 9.3 Verify the installation

```bash
# Confirm the system picks up the module we installed
modinfo mt7921e | grep ^filename
```

Expected:

```
filename: /lib/modules/6.12.109+rpt-rpi-2712/updates/mt7921e.ko
```

```bash
# Confirm the dependency chain resolves
sudo modprobe -S $KV --dry-run --show-depends mt7921e
```

Expected (loaded bottom-up; the last line is the module you built):

```
insmod .../cfg80211.ko.xz
insmod .../mac80211.ko.xz
insmod .../mt76.ko.xz
insmod .../mt76-connac-lib.ko.xz
insmod .../mt792x-lib.ko.xz
insmod .../mt7921-common.ko.xz
insmod /lib/modules/6.12.109+rpt-rpi-2712/updates/mt7921e.ko
```

### 9.4 About automatic loading at boot

**No extra configuration is required.** Once the module is in `updates/` and you have run
`depmod -a`:

* When the kernel enumerates PCI device `14c3:7961`, it auto-`modprobe`s `mt7921e`
  via the module alias
* This **persists across reboots** — no `/etc/modules` entry and no DKMS needed

The only thing that breaks it is a **kernel upgrade** (the new kernel directory has no such
module). See the next step for how to handle that.

---

## 10. Step 9 — CRITICAL: Configure PCIe 32-bit DMA

> **Skip this and the driver will install but never work.** This is the step people get stuck on.

### The symptom

```
mt7921e 0001:01:00.0: ASIC revision: 79610010
mt7921e 0001:01:00.0: probe with driver mt7921e failed with error -12
```

`-12` is `ENOMEM`, but the system has plenty of free memory — that is misleading.

### The actual root cause

On CM5 / Pi 5 the PCIe controller maps system RAM to **PCIe bus address 0x10_0000_0000 (64 GiB)**:

```bash
sudo dmesg | grep 'IB MEM'
# brcm-pcie 1000110000.pcie:  IB MEM 0x0000000000..0x0fffffffff -> 0x1000000000
#                                    ^^^ CPU physical address     ^^^ PCIe bus address
```

The `mt7921e` driver hard-codes `dma_set_mask(DMA_BIT_MASK(32))` during probe.
**A 32-bit mask can only address 4 GiB and therefore cannot reach a 64 GiB bus address**,
so `dma_alloc_coherent()` inside `mt7921_dma_init()` fails immediately with `-ENOMEM`.

### The fix

Raspberry Pi ships a dedicated overlay for exactly this:

```bash
awk '/^Name:[[:space:]]*pcie-32bit-dma-pi5/,/^$/' /boot/firmware/overlays/README
```

```
Name:   pcie-32bit-dma-pi5
Info:   Force PCIe config to support 32bit DMA addresses at the expense of
        having to bounce buffers (on the Pi 5).
```

**Add it to config.txt:**

```bash
sudo cp /boot/firmware/config.txt /boot/firmware/config.txt.bak   # back up first!

sudo tee -a /boot/firmware/config.txt >/dev/null <<'EOF'

# Required by the MT7921 PCIe Wi-Fi card: CM5 maps RAM at PCIe bus address
# 0x10_0000_0000, which the 32-bit DMA mask used by mt7921e cannot reach.
dtoverlay=pcie-32bit-dma-pi5
EOF
```

> * On Pi 4 / CM4 use `dtoverlay=pcie-32bit-dma` (without `-pi5`).
> * The overlay only affects the external PCIe slot (`pcie1`). It does **not** touch the
>   RP1 south bridge, so onboard Gigabit Ethernet and USB are unaffected.
> * Cost: high memory needs bounce buffers. Measured impact is negligible.

---

## 11. Step 10 — Reboot and Verify

```bash
sudo reboot
```

### 11.1 Driver loaded

```bash
lsmod | grep mt7921
```

Expected:

```
mt7921e                49152  0
mt7921_common          98304  1 mt7921e
mt792x_lib             98304  2 mt7921e,mt7921_common
mt76_connac_lib       114688  3 mt792x_lib,mt7921e,mt7921_common
mt76                  131072  4 mt792x_lib,mt7921e,mt7921_common,mt76_connac_lib
```

### 11.2 Firmware loaded

```bash
sudo dmesg | grep -i mt7921
```

**Success** — the key part is the last two lines showing firmware versions:

```
mt7921e 0001:01:00.0: ASIC revision: 79610010
mt7921e 0001:01:00.0: HW/SW Version: 0x8a108a10, Build Time: 20240219110958a
mt7921e 0001:01:00.0: WM Firmware Version: ____010000, Build Time: 20240219111038
```

### 11.3 Network interface created

```bash
for i in /sys/class/net/wlan*; do
  echo "$(basename $i) -> $(basename $(readlink -f $i/device/driver))"
done
```

You should see a line like `wlan1 -> mt7921e`.

### 11.4 Scanning works

```bash
sudo ip link set wlan1 up          # replace wlan1 with the name found above
sudo iw dev wlan1 scan | grep -c 'SSID:'
```

Any number greater than 0 means it works.

### 11.5 Wi-Fi 6 capability

```bash
PHY=$(basename $(readlink -f /sys/class/net/wlan1/phy80211))
iw phy $PHY info | grep -E 'Band [0-9]:|HE Iftypes'
```

Seeing `Band 1` (2.4 GHz) / `Band 2` (5 GHz) / `Band 4` (6 GHz) plus `HE Iftypes`
confirms 802.11ax support.

### 11.6 Connect

```bash
sudo nmcli device wifi connect "YOUR_SSID" password "YOUR_PASSWORD" ifname wlan1
iw dev wlan1 link
```

Look for `HE-MCS` in `rx bitrate` / `tx bitrate` — that confirms Wi-Fi 6 mode.

### 11.7 Bluetooth

```bash
lsmod | grep btmtk                 # btmtk must be present
hciconfig -a | grep -A3 'Bus: USB' # MAC must not be all zeros; state should be UP RUNNING

# If soft-blocked by rfkill:
sudo rfkill unblock bluetooth
sudo hciconfig hci0 up

# Scan test
sudo timeout 15 btmgmt --index 0 find -l
```

---

## 12. Step 11 — Pin the Kernel Version (important)

A manually installed module is only valid for the **current kernel version**. Once the
kernel is upgraded, `/lib/modules/<new-version>/` has no `mt7921e.ko` and
**Wi-Fi disappears**.

Since we are not using DKMS to rebuild automatically, the safest approach is to
**pin the kernel so it never gets upgraded**:

```bash
sudo apt-mark hold linux-image-rpi-2712 linux-headers-rpi-2712 \
                   linux-image-$(uname -r) linux-headers-$(uname -r)
```

Verify:

```bash
apt-mark showhold
```

The packages above should be listed. From then on `apt upgrade` skips the kernel:

```
The following packages have been kept back:
  linux-image-rpi-2712 linux-headers-rpi-2712
```

### If you ever do need to upgrade the kernel

```bash
# 1) Release the hold
sudo apt-mark unhold linux-image-rpi-2712 linux-headers-rpi-2712

# 2) Upgrade and reboot
sudo apt update && sudo apt upgrade -y
sudo reboot

# 3) After rebooting, redo steps 4-9 for the new kernel
#    (headers upgrade with the kernel; re-download source if the version no longer matches)
KV=$(uname -r)
make -C /lib/modules/$KV/build M=~/mt76-src CONFIG_MT7921E=m modules -j$(nproc)
sudo mkdir -p /lib/modules/$KV/updates
sudo install -m 644 ~/mt76-src/mt7921/mt7921e.ko /lib/modules/$KV/updates/mt7921e.ko
sudo depmod -a $KV
sudo reboot

# 4) Re-apply the hold
sudo apt-mark hold linux-image-rpi-2712 linux-headers-rpi-2712
```

> **Tip:** If the source version no longer matches the new kernel, the `vermagic` check
> will fail. Re-download the matching source as described in Step 6.

---

## 13. Troubleshooting

### 13.1 `probe with driver mt7921e failed with error -12`

The most common issue — **Step 9 (PCIe DMA overlay) was skipped.**

```bash
# Check whether the overlay took effect: the bus address must be 0x0, not 0x1000000000
sudo dmesg | grep 'IB MEM' | head -n 1
```

* Before the fix: `IB MEM 0x0000000000..0x0fffffffff -> 0x1000000000` ❌
* After the fix:  `IB MEM 0x0000000000..0x007fffffff -> 0x0000000000` ✅

Make sure `dtoverlay=pcie-32bit-dma-pi5` is in config.txt and that you rebooted.

### 13.2 `Invalid module format` / version magic mismatch

Source version does not match the running kernel.

```bash
uname -r
modinfo ~/mt76-src/mt7921/mt7921e.ko | grep vermagic
```

Most common cause: you upgraded the kernel but did not reboot, so `uname -r` is still the
old version. Fix: reboot, then rebuild against the version reported by `uname -r`.

### 13.3 `Unknown symbol mt76_xxx`

`Module.symvers` mismatch, or the mt76 modules are not loaded.

```bash
sudo modprobe mt76 mt76-connac-lib mt792x-lib mt7921-common
sudo depmod -a && sudo modprobe mt7921e
```

### 13.4 Build fails with `flex: command not found` etc.

Incomplete toolchain — go back to Step 5 and install
`build-essential bc flex bison libssl-dev`.

### 13.5 Bluetooth MAC is all zeros / `Opcode 0x0c03 failed: -110`

The kernel lacks `btmtk` — go back to Step 3 and upgrade the kernel.

```bash
find /lib/modules/$(uname -r) -name 'btmtk*'   # no output = kernel too old
```

### 13.6 Interface exists but no APs are found

Check rfkill and the regulatory domain:

```bash
rfkill list
sudo rfkill unblock wifi
iw reg get
```

### 13.7 Wi-Fi disappears after a kernel upgrade

This is expected behaviour with a manual install. Two ways out:

```bash
# Option 1: go back to the old kernel (fastest)
ls /lib/modules/                                  # see which kernels remain
sudo apt install --reinstall linux-image-6.12.109+rpt-rpi-2712
sudo reboot

# Option 2: rebuild and install for the new kernel (see Step 11)
```

**Prevention:** pin the kernel with `apt-mark hold` as described in Step 11.

### 13.8 Wrong `KV` value / module installs but won't load

Raspberry Pi has multiple kernels installed at once:

```
/lib/modules/6.12.109+rpt-rpi-2712    <- Pi 5 / CM5 uses this
/lib/modules/6.12.109+rpt-rpi-v8      <- Pi 3 / Pi 4 uses this
```

`ls /lib/modules/ | sort -V | tail -1` returns `-v8` (sorts last alphabetically), so on CM5
you would build a module that cannot load:

```
modprobe: FATAL: Module mt7921e not found in directory /lib/modules/6.12.109+rpt-rpi-v8
```

**Correct approach** — reboot into the target kernel, then:

```bash
KV=$(uname -r)
echo $KV            # must exactly match uname -r
```

Note that `/lib/modules/` may also contain stray third-party `.ko` files (e.g. `ch9344.ko`)
which break name sorting. `uname -r` is immune to both problems.

### 13.9 Module does not load automatically after reboot

```bash
# 1) Confirm the file is in place
ls -l /lib/modules/$(uname -r)/updates/mt7921e.ko

# 2) Confirm depmod ran (the module must appear in the dependency table)
grep mt7921e /lib/modules/$(uname -r)/modules.dep

# 3) If not, run it again
sudo depmod -a

# 4) As a last resort, force it to load at boot
echo mt7921e | sudo tee /etc/modules-load.d/mt7921e.conf
```

---

## 14. Uninstall

```bash
# 1) Unload and delete the module
sudo modprobe -r mt7921e
sudo rm -f /lib/modules/$(uname -r)/updates/mt7921e.ko
sudo depmod -a

# 2) Remove the PCIe overlay (only if nothing else needs it)
sudo sed -i '/pcie-32bit-dma-pi5/d' /boot/firmware/config.txt

# 3) Release the kernel hold
sudo apt-mark unhold linux-image-rpi-2712 linux-headers-rpi-2712

# 4) Clean up source and repo config
rm -rf ~/mt76-src ~/ksrc
sudo rm -f /etc/apt/sources.list.d/raspi-src.list
sudo apt update

sudo reboot
```

---

## 15. Appendix: All-in-One Script

Save as `build-mt7921e.sh`, then `chmod +x` and run.

```bash
#!/usr/bin/env bash
# MT7921 PCIe Wi-Fi driver: build + manual install (no DKMS)
set -euo pipefail

echo "==> [1/6] Checking hardware"
lspci -nn | grep -qi '14c3:7961' || { echo "No MT7921 PCIe card detected"; exit 1; }

echo "==> [2/6] Checking kernel headers"
KV=$(uname -r)
echo "    Running kernel: $KV"
if [ ! -e "/lib/modules/$KV/build" ]; then
  echo "ERROR: /lib/modules/$KV/build not found"
  echo "Run first: sudo apt install -y linux-headers-rpi-2712"
  echo "If you just upgraded the kernel, reboot and re-run this script."
  exit 1
fi

echo "==> [3/6] Installing toolchain"
sudo apt-get install -y -qq build-essential bc flex bison libssl-dev

echo "==> [4/6] Locating source"
# Prefer a src/ directory next to this script, otherwise ~/mt76-src
SCRIPT_DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
if [ -d "$SCRIPT_DIR/src/mt7921" ]; then
  MDIR="$SCRIPT_DIR/src"
elif [ -d "$HOME/mt76-src/mt7921" ]; then
  MDIR="$HOME/mt76-src"
else
  echo "ERROR: cannot find the mt76 source directory"
  echo "Download the kernel source as described in Step 6, or place mt76 at $SCRIPT_DIR/src"
  exit 1
fi
echo "    Source dir: $MDIR"

echo "==> [5/6] Building and installing the module"
make -C "/lib/modules/$KV/build" M="$MDIR" CONFIG_MT7921E=m modules -j"$(nproc)"

# Verify vermagic
BUILT_VM=$(modinfo "$MDIR/mt7921/mt7921e.ko" | awk '/^vermagic/{print $2}')
if [ "$BUILT_VM" != "$KV" ]; then
  echo "ERROR: vermagic mismatch (built=$BUILT_VM, running=$KV)"
  echo "The source does not match the running kernel. Download the matching version."
  exit 1
fi

sudo mkdir -p "/lib/modules/$KV/updates"
sudo install -m 644 "$MDIR/mt7921/mt7921e.ko" "/lib/modules/$KV/updates/mt7921e.ko"
sudo depmod -a "$KV"
echo "    Installed: $(modinfo mt7921e | awk '/^filename/{print $2}')"

echo "==> [6/6] Adding PCIe 32-bit DMA overlay"
if ! grep -q 'pcie-32bit-dma-pi5' /boot/firmware/config.txt; then
  sudo cp /boot/firmware/config.txt /boot/firmware/config.txt.bak
  printf '\n# MT7921 PCIe Wi-Fi required\ndtoverlay=pcie-32bit-dma-pi5\n' \
    | sudo tee -a /boot/firmware/config.txt >/dev/null
  echo "    added"
else
  echo "    already present, skipping"
fi

echo
echo "Done. Pin the kernel so an upgrade doesn't break the driver:"
echo "  sudo apt-mark hold linux-image-rpi-2712 linux-headers-rpi-2712"
echo
echo "Then reboot: sudo reboot"
```

---

## Quick Reference

| Goal | Command |
|---|---|
| Confirm the card | `lspci -nn \| grep 14c3:7961` |
| Confirm module missing | `find /lib/modules/$(uname -r) -name 'mt7921e*'` |
| Kernel version | `uname -r` |
| Headers dir | `ls -l /lib/modules/$(uname -r)/build` |
| Build | `make -C /lib/modules/$KV/build M=$MDIR CONFIG_MT7921E=m modules` |
| Install | `sudo install -m 644 ... /lib/modules/$KV/updates/ && sudo depmod -a $KV` |
| Critical overlay | `dtoverlay=pcie-32bit-dma-pi5` |
| Where the driver came from | `modinfo mt7921e \| grep filename` |
| Firmware loaded | `sudo dmesg \| grep -i mt7921` |
| Debug `-12` | `sudo dmesg \| grep 'IB MEM'` |
| Pin the kernel | `sudo apt-mark hold linux-image-rpi-2712 linux-headers-rpi-2712` |
| Show pinned | `apt-mark showhold` |
