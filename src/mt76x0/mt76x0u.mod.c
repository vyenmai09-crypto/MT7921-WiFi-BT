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
	{ 0xd9610f00, "mt76x02u_tx_complete_skb" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0x4d10fdd5, "mt76x0_set_sar_specs" },
	{ 0x3fda5eec, "firmware_request_nowarn" },
	{ 0x939e1964, "mt76x02_set_ethtool_fwver" },
	{ 0xafb92988, "mt76x02_set_key" },
	{ 0xd1247972, "mt76_release_buffered_frames" },
	{ 0xf0403a7a, "request_firmware" },
	{ 0x174283c2, "usb_register_driver" },
	{ 0x4ee62959, "mt76_get_txpower" },
	{ 0xddbdd551, "mt76_wake_tx_queue" },
	{ 0x6ff53d39, "mt76_get_antenna" },
	{ 0x37a0cba, "kfree" },
	{ 0x640c5985, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcc5db40, "mt76x02_sta_ps" },
	{ 0x9e3d3b3b, "mt76u_resume_rx" },
	{ 0x3a7d3ad6, "mt76x02_sta_rate_tbl_update" },
	{ 0xefefd0d1, "mt76_alloc_device" },
	{ 0x80f7c87e, "usb_put_dev" },
	{ 0x11d59538, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7fb41cd5, "mt76x02_update_channel" },
	{ 0x4d088ca, "usb_get_dev" },
	{ 0x480e4fba, "_dev_info" },
	{ 0x50fe6e34, "mt76x02_configure_filter" },
	{ 0xf7bf6eba, "mt76_free_device" },
	{ 0xa004c893, "mt76x0_chip_onoff" },
	{ 0xd853f529, "mt76x02_queue_rx_skb" },
	{ 0x6e2f60f8, "mt76u_queues_deinit" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0xade52fc1, "mt76x0_config" },
	{ 0xae1a502b, "mt76x0_register_device" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x28a677d, "mt76x02u_mcu_fw_reset" },
	{ 0x4db62d53, "mt76x0_phy_calibrate" },
	{ 0x88aefc19, "mt76_set_tim" },
	{ 0xebf1f441, "mt76x02_sw_scan_complete" },
	{ 0xa84be91a, "mt76x02_tx" },
	{ 0x2db0def5, "mt76x02_sta_remove" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x80f436bb, "usb_deregister" },
	{ 0x367d7633, "mt76x02_tx_status_data" },
	{ 0x5cb0de44, "mt76x02_sta_add" },
	{ 0x9f4e1290, "mt76x0_mac_stop" },
	{ 0x12d480b1, "mt76x02u_mcu_fw_send_data" },
	{ 0xad199930, "mt76u_init" },
	{ 0x9bb83e43, "mt76_get_survey" },
	{ 0x2df2099, "_dev_warn" },
	{ 0x8740abfb, "ieee80211_emulate_add_chanctx" },
	{ 0x74808997, "mt76x02u_init_mcu" },
	{ 0x6a4fbc2b, "mt76x0_set_channel" },
	{ 0xfe3bf199, "mt76x02u_tx_prepare_skb" },
	{ 0xa8ade12b, "kmemdup_noprof" },
	{ 0x5f9da5f8, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0xa9770ee7, "mt76x02_set_rts_threshold" },
	{ 0x22f9e2dd, "mt76_sta_state" },
	{ 0xfcff9c94, "mt76x0_init_hardware" },
	{ 0xab51f671, "mt76x02u_mac_start" },
	{ 0x3e95a4cc, "mt76x02_bss_info_changed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x66a10ec7, "mt76u_alloc_queues" },
	{ 0x334a08ef, "mt76u_stop_tx" },
	{ 0x88e36d03, "mt76x02u_init_beacon_config" },
	{ 0x448cd2db, "ieee80211_unregister_hw" },
	{ 0x71d53e87, "mt76u_vendor_request" },
	{ 0xb22adbfd, "mt76x02_add_interface" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0xd466c82b, "mt76x02u_exit_beacon_config" },
	{ 0x6664a51a, "mt76u_stop_rx" },
	{ 0x27dc88a2, "mt76x02_ampdu_action" },
	{ 0xcc80c1ad, "mt76x02_conf_tx" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8737da06, "mt76_sw_scan" },
	{ 0x28020a2b, "mt76_sta_pre_rcu_remove" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0x10e2b56, "ieee80211_emulate_remove_chanctx" },
	{ 0x1cfe7973, "mt76x02_remove_interface" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-usb,mt76x0-common,mt76x02-lib,mt76,mac80211,mt76-usb");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "F10BBD90FBF5C8BD690829F");
