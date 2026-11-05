#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76x02u_mcu_fw_reset, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_mcu_fw_send_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_init_mcu, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_mac_start, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_init_beacon_config, "_gpl", "");
KSYMTAB_FUNC(mt76x02u_exit_beacon_config, "_gpl", "");

SYMBOL_CRC(mt76x02u_mcu_fw_reset, 0x028a677d, "_gpl");
SYMBOL_CRC(mt76x02u_mcu_fw_send_data, 0x12d480b1, "_gpl");
SYMBOL_CRC(mt76x02u_init_mcu, 0x74808997, "_gpl");
SYMBOL_CRC(mt76x02u_tx_complete_skb, 0xd9610f00, "_gpl");
SYMBOL_CRC(mt76x02u_mac_start, 0xab51f671, "_gpl");
SYMBOL_CRC(mt76x02u_tx_prepare_skb, 0xfe3bf199, "_gpl");
SYMBOL_CRC(mt76x02u_init_beacon_config, 0x88e36d03, "_gpl");
SYMBOL_CRC(mt76x02u_exit_beacon_config, 0xd466c82b, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x291a65c2, "mt76x02_update_beacon_iter" },
	{ 0x14338939, "mt76x02_enqueue_buffered_bc" },
	{ 0xd309dd67, "mt76x02_remove_hdr_pad" },
	{ 0xcbc221d, "skb_put" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x80f7d434, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xf5e6b102, "mt76x02_resync_beacon_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3757ff95, "mt76x02_mcu_parse_response" },
	{ 0x651bf37c, "mt76_csa_check" },
	{ 0x387abd95, "mt76_tx_status_skb_add" },
	{ 0xea82d349, "hrtimer_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb9961ed, "mt76u_single_wr" },
	{ 0xd1a73f0c, "__mt76_tx_complete_skb" },
	{ 0xa3106500, "mt76x02_mac_reset_counters" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x30c996eb, "ieee80211_get_hdrlen_from_skb" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x5753f11, "usb_bulk_msg" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd50943ef, "mt76_csa_finish" },
	{ 0x9c41cbe, "__alloc_skb" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x737fa50, "skb_pull" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a9c073b, "skb_push" },
	{ 0xb7167664, "mt76x02_init_beacon_config" },
	{ 0x6da45a1a, "__mt76_mcu_msg_alloc" },
	{ 0x627d0447, "mt76x02_mac_write_txwi" },
	{ 0xdcb764ad, "memset" },
	{ 0xc0b7c197, "hrtimer_start_range_ns" },
	{ 0x3fc54db5, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x71d53e87, "mt76u_vendor_request" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x783cba7b, "mt76_skb_adjust_pad" },
	{ 0x102fe6de, "hrtimer_cancel" },
	{ 0xef344e3e, "mt76x02_mac_set_beacon" },
	{ 0xcb2e80c6, "hrtimer_active" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,cfg80211,mac80211");


MODULE_INFO(srcversion, "B14D3C67485E4830C76149A");
