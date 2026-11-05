#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt7925_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt7925_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt7925_rx_check, "_gpl", "");
KSYMTAB_FUNC(mt7925_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt7925_usb_sdio_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt7925_usb_sdio_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt7925_usb_sdio_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_regval, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_thermal_protect, "_gpl", "");
KSYMTAB_FUNC(mt7925_run_firmware, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_eeprom, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt7925_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(__mt7925_start, "_gpl", "");
KSYMTAB_FUNC(mt7925_roc_abort_sync, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_sta_event, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_sta_remove, "_gpl", "");
KSYMTAB_DATA(mt7925_ops, "_gpl", "");
KSYMTAB_FUNC(mt7925_regd_update, "_gpl", "");
KSYMTAB_FUNC(mt7925_mac_init, "_gpl", "");
KSYMTAB_FUNC(mt7925_register_device, "_gpl", "");

SYMBOL_CRC(mt7925_mac_write_txwi, 0xd328f5c9, "_gpl");
SYMBOL_CRC(mt7925_txwi_free, 0x9843ddc3, "_gpl");
SYMBOL_CRC(mt7925_rx_check, 0x6b85ac5d, "_gpl");
SYMBOL_CRC(mt7925_queue_rx_skb, 0x3c9ee8c0, "_gpl");
SYMBOL_CRC(mt7925_usb_sdio_tx_prepare_skb, 0xe42ca9a1, "_gpl");
SYMBOL_CRC(mt7925_usb_sdio_tx_complete_skb, 0xbf39151c, "_gpl");
SYMBOL_CRC(mt7925_usb_sdio_tx_status_data, 0x6520f6de, "_gpl");
SYMBOL_CRC(mt7925_mcu_parse_response, 0x1105d81f, "_gpl");
SYMBOL_CRC(mt7925_mcu_regval, 0xf4058241, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_deep_sleep, 0x3ed9069e, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_thermal_protect, 0xf8ee26de, "_gpl");
SYMBOL_CRC(mt7925_run_firmware, 0x96421d73, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_eeprom, 0x278bf900, "_gpl");
SYMBOL_CRC(mt7925_mcu_hw_scan, 0xba2b87c7, "_gpl");
SYMBOL_CRC(mt7925_mcu_sched_scan_req, 0x88b07922, "_gpl");
SYMBOL_CRC(mt7925_mcu_cancel_hw_scan, 0x62cbff9d, "_gpl");
SYMBOL_CRC(mt7925_mcu_set_channel_domain, 0xceb87be7, "_gpl");
SYMBOL_CRC(mt7925_mcu_fill_message, 0x7afef930, "_gpl");
SYMBOL_CRC(__mt7925_start, 0xbb57fd77, "_gpl");
SYMBOL_CRC(mt7925_roc_abort_sync, 0xee580275, "_gpl");
SYMBOL_CRC(mt7925_mac_sta_add, 0xc3c58dfc, "_gpl");
SYMBOL_CRC(mt7925_mac_sta_event, 0x99a1aa1a, "_gpl");
SYMBOL_CRC(mt7925_mac_sta_remove, 0xf0c45d15, "_gpl");
SYMBOL_CRC(mt7925_ops, 0x23e079d9, "_gpl");
SYMBOL_CRC(mt7925_regd_update, 0x38d53375, "_gpl");
SYMBOL_CRC(mt7925_mac_init, 0x8360524b, "_gpl");
SYMBOL_CRC(mt7925_register_device, 0x912e75b7, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf7df27bd, "mt76_connac_mcu_update_gtk_rekey" },
	{ 0x4ae8caa7, "ieee80211_sta_register_airtime" },
	{ 0x15b0f6c3, "mt792x_init_wcid" },
	{ 0x62fe9253, "mt76_init_sar_power" },
	{ 0xad68421f, "ieee80211_connection_loss" },
	{ 0xb86b3ca2, "mt76_tx_status_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x5cf2651b, "simple_attr_open" },
	{ 0xf5323ecd, "ieee80211_iterate_interfaces" },
	{ 0x241601c6, "mt792x_stop" },
	{ 0x47e718fa, "mt76_connac_get_ch_power" },
	{ 0xb114a07, "debugfs_attr_write" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0xcbc221d, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x2ef15638, "mt76_connac_get_phy_mode_v2" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x80f7d434, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd1625678, "mt76_tx_status_skb_get" },
	{ 0x7714bbc1, "mt792x_tx_worker" },
	{ 0x528d58be, "mt792x_flush" },
	{ 0xa2a21843, "mt76_tx_status_lock" },
	{ 0x6bf57de2, "mt792x_rx_get_wcid" },
	{ 0xc06c5a35, "skb_dequeue" },
	{ 0xa25337f, "mt76_connac_gen_ppe_thresh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x997baa9a, "mt76_connac_mcu_uni_add_dev" },
	{ 0xd1247972, "mt76_release_buffered_frames" },
	{ 0xf0403a7a, "request_firmware" },
	{ 0x4ee62959, "mt76_get_txpower" },
	{ 0x59fcc0ac, "mt76_connac_mcu_sta_uapsd" },
	{ 0x387abd95, "mt76_tx_status_skb_add" },
	{ 0xa9bd2fef, "mt76_connac_pm_wake" },
	{ 0x594c7205, "mt76_get_rate" },
	{ 0xdf73a34, "mt792x_pm_wake_work" },
	{ 0xddbdd551, "mt76_wake_tx_queue" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6ff53d39, "mt76_get_antenna" },
	{ 0xfe2d4dde, "mt792x_set_coverage_class" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xd1a73f0c, "__mt76_tx_complete_skb" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0x3c21181b, "seq_lseek" },
	{ 0xa2d4e68e, "mt76_set_stream_caps" },
	{ 0x51b45145, "mt792x_mac_assoc_rssi" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0x30c996eb, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0xe731fec5, "mt792x_mac_work" },
	{ 0xc9675a91, "mt76_mcu_rx_event" },
	{ 0xdea43a9, "pskb_expand_head" },
	{ 0xb1967219, "mt76_wcid_init" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x1f54af6e, "mt76_connac_free_pending_tx_skbs" },
	{ 0x50c7507a, "mt792x_sta_statistics" },
	{ 0x1ff3e13e, "skb_queue_purge_reason" },
	{ 0xc8848ced, "mt76_connac_power_save_sched" },
	{ 0xc5126650, "__alloc_pages_noprof" },
	{ 0xea59fa3d, "mt76_connac_txp_skb_unmap" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf22d596b, "debugfs_create_devm_seqfile" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9d75cad3, "mt792x_get_et_sset_count" },
	{ 0x7ffacfa6, "mt792x_set_tsf" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x618911fc, "numa_node" },
	{ 0x90f849ea, "mt792x_set_wakeup" },
	{ 0x83e9efa0, "mt76_wcid_key_setup" },
	{ 0xa1bfecd3, "mt76_connac_mcu_set_gtk_rekey" },
	{ 0x480e4fba, "_dev_info" },
	{ 0x8f6ad050, "skb_queue_tail" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x39f2936a, "mt76_rx" },
	{ 0xd2499acf, "mt792x_load_firmware" },
	{ 0x8ca72889, "mt792x_get_et_stats" },
	{ 0xddb4aa2f, "mt76_connac_mcu_uni_add_bss" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x90c321f5, "wiphy_to_ieee80211_hw" },
	{ 0xe5ba12f8, "debugfs_attr_read" },
	{ 0xe6bd2dfa, "mt792x_mac_link_bss_remove" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa02b4488, "mt76_tx_status_skb_done" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0x9e027cf9, "devm_kmemdup" },
	{ 0xf7581011, "devm_kfree" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x737fa50, "skb_pull" },
	{ 0xddeb9e9c, "mt76_register_device" },
	{ 0xb6792956, "mt792x_get_stats" },
	{ 0xdb86ed9a, "mt76_mcu_skb_send_and_get_msg" },
	{ 0x5f14e1f2, "simple_attr_release" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe780076a, "ieee80211_remain_on_channel_expired" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a9c073b, "skb_push" },
	{ 0xe55596c, "seq_putc" },
	{ 0xbcf4bf68, "ieee80211_wake_queues" },
	{ 0x364fbd8, "mt76_mcu_send_and_get_msg" },
	{ 0xb5d9c0a5, "ieee80211_beacon_get_template" },
	{ 0x94e007d1, "mt792x_pm_stats" },
	{ 0xdc0f64c7, "mt76_eeprom_override" },
	{ 0xf5962d02, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6da45a1a, "__mt76_mcu_msg_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x6894a051, "mt76_connac_get_he_phy_cap" },
	{ 0x11089ac7, "_ctype" },
	{ 0x9bb83e43, "mt76_get_survey" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xd079250b, "devm_hwmon_device_register_with_groups" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x58cfce5f, "mt76_token_release" },
	{ 0x86ad9235, "mt792x_get_tsf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7793354d, "__pskb_pull_tail" },
	{ 0x5a7b5c38, "mt792x_pm_idle_timeout_set" },
	{ 0xc8e38b1f, "mt792x_tx" },
	{ 0x3c81e6ce, "mt792x_get_et_strings" },
	{ 0x22f9e2dd, "mt76_sta_state" },
	{ 0x9c0a7171, "ieee80211_ready_on_channel" },
	{ 0xc1f2bae, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6066c332, "devm_kasprintf" },
	{ 0x68e181d8, "mt792x_remove_interface" },
	{ 0x37a64b43, "seq_read" },
	{ 0x8bb57194, "mt76_connac3_mac_decode_he_radiotap" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa40e8103, "mt76_connac2_mac_tx_rate_val" },
	{ 0x5b4c4a08, "mt76_connac_mcu_add_nested_tlv" },
	{ 0x17f568e9, "mt76_rates" },
	{ 0x3e4dcddd, "mt792x_queues_read" },
	{ 0x4784f010, "debugfs_create_file" },
	{ 0xddfe2747, "mt792x_queues_acq" },
	{ 0xa283f5b1, "mt76_get_rate_power_limits" },
	{ 0x8964def9, "ieee80211_sched_scan_results" },
	{ 0xd6b7c767, "ieee80211_scan_completed" },
	{ 0x3fc54db5, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xd5cc5451, "mt76_insert_ccmp_hdr" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xadfadfd8, "param_ops_bool" },
	{ 0x50edacd8, "mt792x_tx_stats_show" },
	{ 0xe81aad91, "mt76_connac_mcu_set_suspend_mode" },
	{ 0x790e9010, "mt76_rx_aggr_start" },
	{ 0x3ffb70db, "__folio_put" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x61be9375, "seq_printf" },
	{ 0x8cbc73ec, "ieee80211_set_active_links_async" },
	{ 0xc3a0fb62, "mt792x_pm_idle_timeout_get" },
	{ 0x9c06d4d5, "mt792x_roc_timer" },
	{ 0xb20adf6e, "mt76_connac_mcu_coredump_event" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9b0618a8, "mt76_get_sar_power" },
	{ 0x8625b14f, "mt76_connac_mcu_sta_he_tlv_v2" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x7bc79ac1, "mt792x_mac_init_band" },
	{ 0x783cba7b, "mt76_skb_adjust_pad" },
	{ 0xdaa53b61, "mt76_put_txwi" },
	{ 0xae60070c, "mt76_wcid_cleanup" },
	{ 0x3ff22b1, "mt792x_init_wiphy" },
	{ 0x125942af, "__mt76_connac_mcu_alloc_sta_req" },
	{ 0x6020d921, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x627021d4, "mt76_connac3_mac_decode_eht_radiotap" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x80d8d67c, "mt76_queues_read" },
	{ 0x28020a2b, "mt76_sta_pre_rcu_remove" },
	{ 0x4d24e568, "mt76_register_debugfs_fops" },
	{ 0xb36b3782, "cfg80211_get_iftype_ext_capa" },
	{ 0x7b5e54e1, "mt792x_reset" },
	{ 0x327a9822, "mt76_rx_signal" },
	{ 0xb34dd2a8, "__mt76_set_tx_blocked" },
	{ 0x6adf9aae, "ieee80211_queue_work" },
	{ 0x1b63820e, "mt792x_mac_reset_counters" },
	{ 0x8775d9bc, "napi_consume_skb" },
	{ 0x98cf60b3, "strlen" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0x7b03bd39, "mt76_rx_aggr_stop" },
	{ 0x7b229cc2, "single_open" },
	{ 0x571369ed, "mt76_connac_get_phy_mode" },
	{ 0xf7087906, "mt76_connac_mcu_sta_basic_tlv" },
	{ 0xef7f1f41, "ieee80211_disconnect" },
	{ 0xe4ccb149, "mt792x_pm_power_save_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76-connac-lib,mac80211,mt792x-lib,mt76,cfg80211");


MODULE_INFO(srcversion, "D6B0E1D19A63C9F7AAE84C9");
