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
	{ 0xa3cc1c05, "mt792xu_stop" },
	{ 0x174283c2, "usb_register_driver" },
	{ 0x60122e28, "mt7921_mcu_set_eeprom" },
	{ 0xf8dcbcaf, "mt7921_usb_sdio_tx_complete_skb" },
	{ 0xf8759d9e, "mt792xu_rmw" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9e3d3b3b, "mt76u_resume_rx" },
	{ 0xc2a1281, "kthread_park" },
	{ 0xa0c50845, "mt7921_mac_init" },
	{ 0xefefd0d1, "mt76_alloc_device" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x1ff3e13e, "skb_queue_purge_reason" },
	{ 0xcef52fe2, "mt792xu_mcu_power_on" },
	{ 0x6644354d, "mt7921_register_device" },
	{ 0x249cff21, "__mt7921_start" },
	{ 0x7e21ce9f, "mt7921_run_firmware" },
	{ 0x80f7c87e, "usb_put_dev" },
	{ 0x5753f11, "usb_bulk_msg" },
	{ 0x11d59538, "usb_reset_device" },
	{ 0xca3e4bc5, "mt7921_usb_sdio_tx_status_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x4d088ca, "usb_get_dev" },
	{ 0x59c01bd9, "mt76u_alloc_mcu_queue" },
	{ 0xf7bf6eba, "mt76_free_device" },
	{ 0x2145ed57, "kthread_unpark" },
	{ 0xb8713bcf, "mt7921_ops" },
	{ 0x6e2f60f8, "mt76u_queues_deinit" },
	{ 0x4a9c073b, "skb_push" },
	{ 0x91ab1934, "mt792xu_wfsys_reset" },
	{ 0xbcab6728, "mt792xu_disconnect" },
	{ 0xebc5390f, "mt792xu_wr" },
	{ 0x80f436bb, "usb_deregister" },
	{ 0xdcb764ad, "memset" },
	{ 0x24ff5bd, "mt7921_mac_sta_remove" },
	{ 0x4f6e7141, "mt7921_usb_sdio_tx_prepare_skb" },
	{ 0xd47a9a6b, "mt76u_read_copy" },
	{ 0x3c87b206, "mt76_connac2_mcu_fill_message" },
	{ 0xdaa60b06, "mt7921_mcu_parse_response" },
	{ 0x3275073b, "mt76_txq_schedule_all" },
	{ 0x66a10ec7, "mt76u_alloc_queues" },
	{ 0x334a08ef, "mt76u_stop_tx" },
	{ 0x25182c, "mt792xu_init_reset" },
	{ 0xafeb05dc, "mt792xu_dma_init" },
	{ 0xe110074c, "mt7921_mac_sta_add" },
	{ 0xd14f29d1, "mt792x_update_channel" },
	{ 0x6beb0ca1, "mt792x_get_mac80211_ops" },
	{ 0x49835eb3, "mt7921_queue_rx_skb" },
	{ 0x6664a51a, "mt76u_stop_rx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x7748d35d, "mt76_connac_mcu_set_hif_suspend" },
	{ 0x7b5e54e1, "mt792x_reset" },
	{ 0xa7cf87b4, "mt7921_mac_sta_event" },
	{ 0xf92ae5b0, "mt7921_rx_check" },
	{ 0xe769e61f, "mt792xu_rr" },
	{ 0xc669b266, "mt7921_set_channel" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76-usb,mt792x-usb,mt7921-common,mt76,mt76-connac-lib,mt792x-lib");

MODULE_ALIAS("usb:v0E8Dp7961d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v3574p6211d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9060d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0846p9065d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v35BCp0107d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "1D1DF3B1D6A9DC07260F523");
