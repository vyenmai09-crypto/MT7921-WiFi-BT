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
	{ 0x4827f112, "mt76_update_channel" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0x939e1964, "mt76x02_set_ethtool_fwver" },
	{ 0xafb92988, "mt76x02_set_key" },
	{ 0xd1247972, "mt76_release_buffered_frames" },
	{ 0xf0403a7a, "request_firmware" },
	{ 0x174283c2, "usb_register_driver" },
	{ 0x4ee62959, "mt76_get_txpower" },
	{ 0x93c7d7e5, "mt76_write_mac_initvals" },
	{ 0x5d1413c9, "mt76x2_reset_wlan" },
	{ 0x53cd5062, "mt76x2_mcu_set_channel" },
	{ 0x12ea7c16, "mt76x02_mcu_set_radio_state" },
	{ 0xddbdd551, "mt76_wake_tx_queue" },
	{ 0x6ff53d39, "mt76_get_antenna" },
	{ 0x5750d0a7, "mt76x2_apply_gain_adj" },
	{ 0x640c5985, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xfcc5db40, "mt76x02_sta_ps" },
	{ 0xbff0e709, "mt76x2_set_sar_specs" },
	{ 0x9e3d3b3b, "mt76u_resume_rx" },
	{ 0x3a7d3ad6, "mt76x02_sta_rate_tbl_update" },
	{ 0xefefd0d1, "mt76_alloc_device" },
	{ 0x7aa946cf, "mt76x02_mac_shared_key_setup" },
	{ 0x82bdb768, "mt76x02_ext_pa_enabled" },
	{ 0x50864a48, "mt76x2_mac_stop" },
	{ 0x80f7c87e, "usb_put_dev" },
	{ 0x11d59538, "usb_reset_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7fb41cd5, "mt76x02_update_channel" },
	{ 0x5dbde307, "mt76x2_configure_tx_delay" },
	{ 0x4d088ca, "usb_get_dev" },
	{ 0x480e4fba, "_dev_info" },
	{ 0x50fe6e34, "mt76x02_configure_filter" },
	{ 0xf7bf6eba, "mt76_free_device" },
	{ 0xd853f529, "mt76x02_queue_rx_skb" },
	{ 0x6e2f60f8, "mt76u_queues_deinit" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x28a677d, "mt76x02u_mcu_fw_reset" },
	{ 0x8674b2d4, "mt76x02_mac_setaddr" },
	{ 0xddeb9e9c, "mt76_register_device" },
	{ 0x88aefc19, "mt76_set_tim" },
	{ 0xebf1f441, "mt76x02_sw_scan_complete" },
	{ 0xfdf8d6ea, "mt76x02_phy_set_bw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8d57e3f3, "mt76x02_phy_set_band" },
	{ 0xfc108c33, "mt76x02_init_device" },
	{ 0xa84be91a, "mt76x02_tx" },
	{ 0x22d82095, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x2db0def5, "mt76x02_sta_remove" },
	{ 0x4d2f3a20, "mt76x02_phy_set_rxpath" },
	{ 0x1295f8cd, "mt76x02_edcca_init" },
	{ 0x80f436bb, "usb_deregister" },
	{ 0x367d7633, "mt76x02_tx_status_data" },
	{ 0x5cb0de44, "mt76x02_sta_add" },
	{ 0x9448e22f, "mt76x2_mcu_load_cr" },
	{ 0x65847577, "mt76x2_init_txpower" },
	{ 0x12d480b1, "mt76x02u_mcu_fw_send_data" },
	{ 0xad199930, "mt76u_init" },
	{ 0x9bb83e43, "mt76_get_survey" },
	{ 0xcb10f2a3, "mt76x02_init_debugfs" },
	{ 0x2df2099, "_dev_warn" },
	{ 0x8740abfb, "ieee80211_emulate_add_chanctx" },
	{ 0x74808997, "mt76x02u_init_mcu" },
	{ 0xfe3bf199, "mt76x02u_tx_prepare_skb" },
	{ 0x5f9da5f8, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x6879ddd0, "mt76x2_mcu_init_gain" },
	{ 0x22f9e2dd, "mt76_sta_state" },
	{ 0xf310fac2, "mt76x2_phy_tssi_compensate" },
	{ 0x7c685ad7, "mt76x02_mac_cc_reset" },
	{ 0xab51f671, "mt76x02u_mac_start" },
	{ 0x3e95a4cc, "mt76x02_bss_info_changed" },
	{ 0x4c97ef40, "mt76x02_init_agc_gain" },
	{ 0x2c958f9f, "mt76x2_phy_update_channel_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x66a10ec7, "mt76u_alloc_queues" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x334a08ef, "mt76u_stop_tx" },
	{ 0x88e36d03, "mt76x02u_init_beacon_config" },
	{ 0x448cd2db, "ieee80211_unregister_hw" },
	{ 0x71d53e87, "mt76u_vendor_request" },
	{ 0xb22adbfd, "mt76x02_add_interface" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9b0618a8, "mt76_get_sar_power" },
	{ 0x6664a51a, "mt76u_stop_rx" },
	{ 0x27dc88a2, "mt76x02_ampdu_action" },
	{ 0xfe8734c9, "mt76x02_mcu_calibrate" },
	{ 0xcc80c1ad, "mt76x02_conf_tx" },
	{ 0x518b8405, "mt76x02_mcu_function_select" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x8737da06, "mt76_sw_scan" },
	{ 0x28020a2b, "mt76_sta_pre_rcu_remove" },
	{ 0xde32260, "mt76x02_mac_wcid_setup" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0x5e056485, "mt76x2_read_rx_gain" },
	{ 0x56465694, "mt76x2_phy_set_txpower_regs" },
	{ 0x40d9cab3, "mt76x2_phy_set_txpower" },
	{ 0x3449e6b7, "mt76x02_phy_set_txdac" },
	{ 0x10e2b56, "ieee80211_emulate_remove_chanctx" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1cfe7973, "mt76x02_remove_interface" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76x02-usb,mt76,mt76x02-lib,mt76x2-common,mac80211,mt76-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2126d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p7600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02FEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0137d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA588A9E18C69D5F4718955");
