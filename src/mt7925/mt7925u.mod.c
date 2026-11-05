#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xa699a0b8, "__mt76u_init" },
	{ 0x80f7d434, "consume_skb" },
	{ 0xae399071, "mt792xu_copy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa3cc1c05, "mt792xu_stop" },
	{ 0x174283c2, "usb_register_driver" },
	{ 0xbf39151c, "mt7925_usb_sdio_tx_complete_skb" },
	{ 0x8360524b, "mt7925_mac_init" },
	{ 0xf8759d9e, "mt792xu_rmw" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9e3d3b3b, "mt76u_resume_rx" },
	{ 0xc2a1281, "kthread_park" },
	{ 0xefefd0d1, "mt76_alloc_device" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x1ff3e13e, "skb_queue_purge_reason" },
	{ 0xcef52fe2, "mt792xu_mcu_power_on" },
	{ 0xf0c45d15, "mt7925_mac_sta_remove" },
	{ 0x23e079d9, "mt7925_ops" },
	{ 0xbb57fd77, "__mt7925_start" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x80f7c87e, "usb_put_dev" },
	{ 0x5753f11, "usb_bulk_msg" },
	{ 0x11d59538, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4d088ca, "usb_get_dev" },
	{ 0x59c01bd9, "mt76u_alloc_mcu_queue" },
	{ 0xf7bf6eba, "mt76_free_device" },
	{ 0x2145ed57, "kthread_unpark" },
	{ 0x6e2f60f8, "mt76u_queues_deinit" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4a9c073b, "skb_push" },
	{ 0x91ab1934, "mt792xu_wfsys_reset" },
	{ 0x99a1aa1a, "mt7925_mac_sta_event" },
	{ 0x96421d73, "mt7925_run_firmware" },
	{ 0xbcab6728, "mt792xu_disconnect" },
	{ 0xc3c58dfc, "mt7925_mac_sta_add" },
	{ 0xebc5390f, "mt792xu_wr" },
	{ 0x80f436bb, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x278bf900, "mt7925_mcu_set_eeprom" },
	{ 0xd47a9a6b, "mt76u_read_copy" },
	{ 0xe42ca9a1, "mt7925_usb_sdio_tx_prepare_skb" },
	{ 0x912e75b7, "mt7925_register_device" },
	{ 0x3275073b, "mt76_txq_schedule_all" },
	{ 0x66a10ec7, "mt76u_alloc_queues" },
	{ 0x6520f6de, "mt7925_usb_sdio_tx_status_data" },
	{ 0x334a08ef, "mt76u_stop_tx" },
	{ 0x25182c, "mt792xu_init_reset" },
	{ 0xafeb05dc, "mt792xu_dma_init" },
	{ 0xd14f29d1, "mt792x_update_channel" },
	{ 0x6beb0ca1, "mt792x_get_mac80211_ops" },
	{ 0x1105d81f, "mt7925_mcu_parse_response" },
	{ 0x7afef930, "mt7925_mcu_fill_message" },
	{ 0x6664a51a, "mt76u_stop_rx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7748d35d, "mt76_connac_mcu_set_hif_suspend" },
	{ 0x7b5e54e1, "mt792x_reset" },
	{ 0xe769e61f, "mt792xu_rr" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b85ac5d, "mt7925_rx_check" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3c9ee8c0, "mt7925_queue_rx_skb" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76-usb,mt792x-usb,mt7925-common,mt76,mt792x-lib,mt76-connac-lib");

MODULE_ALIAS("usb:v0E8Dp7925d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9072d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "D73FF77672BBE93AA37D1DB");
