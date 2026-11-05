#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_DATA(mt76x02_rates, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_device, "_gpl", "");
KSYMTAB_FUNC(mt76x02_configure_filter, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_add, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76x02_add_interface, "_gpl", "");
KSYMTAB_FUNC(mt76x02_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt76x02_ampdu_action, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_key, "_gpl", "");
KSYMTAB_FUNC(mt76x02_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_tx_ackto, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_rts_threshold, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_rate_tbl_update, "_gpl", "");
KSYMTAB_FUNC(mt76x02_remove_hdr_pad, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_sta_ps, "_gpl", "");
KSYMTAB_FUNC(mt76x02_bss_info_changed, "_gpl", "");
KSYMTAB_FUNC(mt76x02_config_mac_addr_list, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_shared_key_setup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_wcid_setup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_setaddr, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x02_edcca_init, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_cc_reset, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_parse_response, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_msg_send, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_function_select, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_set_radio_state, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_calibrate, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mcu_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt76x02_set_ethtool_fwver, "_gpl", "");
KSYMTAB_FUNC(mt76x02_eeprom_copy, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_efuse_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02_eeprom_parse_hw_cap, "_gpl", "");
KSYMTAB_FUNC(mt76x02_ext_pa_enabled, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_rx_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_lna_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_rxpath, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_txdac, "_gpl", "");
KSYMTAB_FUNC(mt76x02_get_max_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x02_limit_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x02_add_rate_power_offset, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_bw, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_set_band, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_adjust_vga_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_agc_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x02e_init_beacon_config, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dma_init, "_gpl", "");
KSYMTAB_FUNC(mt76x02_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_start, "_gpl", "");
KSYMTAB_FUNC(mt76x02_reconfig_complete, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx, "_gpl", "");
KSYMTAB_FUNC(mt76x02_queue_rx_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_set_txpwr_auto, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_status_data, "_gpl", "");
KSYMTAB_FUNC(mt76x02_tx_prepare_skb, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_debugfs, "_gpl", "");
KSYMTAB_FUNC(mt76x02_phy_dfs_adjust_agc, "_gpl", "");
KSYMTAB_FUNC(mt76x02_dfs_init_params, "_gpl", "");
KSYMTAB_FUNC(mt76x02_mac_set_beacon, "_gpl", "");
KSYMTAB_FUNC(mt76x02_resync_beacon_timer, "_gpl", "");
KSYMTAB_FUNC(mt76x02_update_beacon_iter, "_gpl", "");
KSYMTAB_FUNC(mt76x02_enqueue_buffered_bc, "_gpl", "");
KSYMTAB_FUNC(mt76x02_init_beacon_config, "_gpl", "");

SYMBOL_CRC(mt76x02_rates, 0x5bd84fd5, "_gpl");
SYMBOL_CRC(mt76x02_init_device, 0xfc108c33, "_gpl");
SYMBOL_CRC(mt76x02_configure_filter, 0x50fe6e34, "_gpl");
SYMBOL_CRC(mt76x02_sta_add, 0x5cb0de44, "_gpl");
SYMBOL_CRC(mt76x02_sta_remove, 0x2db0def5, "_gpl");
SYMBOL_CRC(mt76x02_add_interface, 0xb22adbfd, "_gpl");
SYMBOL_CRC(mt76x02_remove_interface, 0x1cfe7973, "_gpl");
SYMBOL_CRC(mt76x02_ampdu_action, 0x27dc88a2, "_gpl");
SYMBOL_CRC(mt76x02_set_key, 0xafb92988, "_gpl");
SYMBOL_CRC(mt76x02_conf_tx, 0xcc80c1ad, "_gpl");
SYMBOL_CRC(mt76x02_set_tx_ackto, 0x70a61304, "_gpl");
SYMBOL_CRC(mt76x02_set_coverage_class, 0x13f4ac5e, "_gpl");
SYMBOL_CRC(mt76x02_set_rts_threshold, 0xa9770ee7, "_gpl");
SYMBOL_CRC(mt76x02_sta_rate_tbl_update, 0x3a7d3ad6, "_gpl");
SYMBOL_CRC(mt76x02_remove_hdr_pad, 0xd309dd67, "_gpl");
SYMBOL_CRC(mt76x02_sw_scan_complete, 0xebf1f441, "_gpl");
SYMBOL_CRC(mt76x02_sta_ps, 0xfcc5db40, "_gpl");
SYMBOL_CRC(mt76x02_bss_info_changed, 0x3e95a4cc, "_gpl");
SYMBOL_CRC(mt76x02_config_mac_addr_list, 0x17b81057, "_gpl");
SYMBOL_CRC(mt76x02_mac_reset_counters, 0xa3106500, "_gpl");
SYMBOL_CRC(mt76x02_mac_shared_key_setup, 0x7aa946cf, "_gpl");
SYMBOL_CRC(mt76x02_mac_wcid_setup, 0x0de32260, "_gpl");
SYMBOL_CRC(mt76x02_mac_write_txwi, 0x627d0447, "_gpl");
SYMBOL_CRC(mt76x02_mac_setaddr, 0x8674b2d4, "_gpl");
SYMBOL_CRC(mt76x02_tx_complete_skb, 0x4240bbc4, "_gpl");
SYMBOL_CRC(mt76x02_update_channel, 0x7fb41cd5, "_gpl");
SYMBOL_CRC(mt76x02_edcca_init, 0x1295f8cd, "_gpl");
SYMBOL_CRC(mt76x02_mac_cc_reset, 0x7c685ad7, "_gpl");
SYMBOL_CRC(mt76x02_mcu_parse_response, 0x3757ff95, "_gpl");
SYMBOL_CRC(mt76x02_mcu_msg_send, 0x72f9fcd6, "_gpl");
SYMBOL_CRC(mt76x02_mcu_function_select, 0x518b8405, "_gpl");
SYMBOL_CRC(mt76x02_mcu_set_radio_state, 0x12ea7c16, "_gpl");
SYMBOL_CRC(mt76x02_mcu_calibrate, 0xfe8734c9, "_gpl");
SYMBOL_CRC(mt76x02_mcu_cleanup, 0xccc5dc35, "_gpl");
SYMBOL_CRC(mt76x02_set_ethtool_fwver, 0x939e1964, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_copy, 0x9bd4540c, "_gpl");
SYMBOL_CRC(mt76x02_get_efuse_data, 0xa9ada6ba, "_gpl");
SYMBOL_CRC(mt76x02_eeprom_parse_hw_cap, 0x22d82095, "_gpl");
SYMBOL_CRC(mt76x02_ext_pa_enabled, 0x82bdb768, "_gpl");
SYMBOL_CRC(mt76x02_get_rx_gain, 0xc3b5c9f7, "_gpl");
SYMBOL_CRC(mt76x02_get_lna_gain, 0xe640a3f9, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_rxpath, 0x4d2f3a20, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txdac, 0x3449e6b7, "_gpl");
SYMBOL_CRC(mt76x02_get_max_rate_power, 0xad5d3ba8, "_gpl");
SYMBOL_CRC(mt76x02_limit_rate_power, 0x93c479bc, "_gpl");
SYMBOL_CRC(mt76x02_add_rate_power_offset, 0x75fef85d, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_txpower, 0x3a03905a, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_bw, 0xfdf8d6ea, "_gpl");
SYMBOL_CRC(mt76x02_phy_set_band, 0x8d57e3f3, "_gpl");
SYMBOL_CRC(mt76x02_phy_adjust_vga_gain, 0xdd8396a0, "_gpl");
SYMBOL_CRC(mt76x02_init_agc_gain, 0x4c97ef40, "_gpl");
SYMBOL_CRC(mt76x02e_init_beacon_config, 0x2b65a485, "_gpl");
SYMBOL_CRC(mt76x02_dma_init, 0x771c8851, "_gpl");
SYMBOL_CRC(mt76x02_rx_poll_complete, 0x2e7ecf32, "_gpl");
SYMBOL_CRC(mt76x02_irq_handler, 0x91d5b9ee, "_gpl");
SYMBOL_CRC(mt76x02_dma_disable, 0x3b541696, "_gpl");
SYMBOL_CRC(mt76x02_mac_start, 0x934236f0, "_gpl");
SYMBOL_CRC(mt76x02_reconfig_complete, 0xcfd8240a, "_gpl");
SYMBOL_CRC(mt76x02_tx, 0xa84be91a, "_gpl");
SYMBOL_CRC(mt76x02_queue_rx_skb, 0xd853f529, "_gpl");
SYMBOL_CRC(mt76x02_tx_set_txpwr_auto, 0x46fb74e8, "_gpl");
SYMBOL_CRC(mt76x02_tx_status_data, 0x367d7633, "_gpl");
SYMBOL_CRC(mt76x02_tx_prepare_skb, 0x01d442a8, "_gpl");
SYMBOL_CRC(mt76x02_init_debugfs, 0xcb10f2a3, "_gpl");
SYMBOL_CRC(mt76x02_phy_dfs_adjust_agc, 0x5c7ddbf9, "_gpl");
SYMBOL_CRC(mt76x02_dfs_init_params, 0x1de42e54, "_gpl");
SYMBOL_CRC(mt76x02_mac_set_beacon, 0xef344e3e, "_gpl");
SYMBOL_CRC(mt76x02_resync_beacon_timer, 0xf5e6b102, "_gpl");
SYMBOL_CRC(mt76x02_update_beacon_iter, 0x291a65c2, "_gpl");
SYMBOL_CRC(mt76x02_enqueue_buffered_bc, 0x14338939, "_gpl");
SYMBOL_CRC(mt76x02_init_beacon_config, 0xb7167664, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ae8caa7, "ieee80211_sta_register_airtime" },
	{ 0x20f748c8, "__traceiter_mac_txdone" },
	{ 0xf4d40a4d, "mt76_dma_rx_poll" },
	{ 0xb86b3ca2, "mt76_tx_status_unlock" },
	{ 0x5cf2651b, "simple_attr_open" },
	{ 0xb114a07, "debugfs_attr_write" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x80f7d434, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa49feb2e, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd1625678, "mt76_tx_status_skb_get" },
	{ 0x10f4b85c, "trace_raw_output_prep" },
	{ 0xa2a21843, "mt76_tx_status_lock" },
	{ 0xc06c5a35, "skb_dequeue" },
	{ 0x5f63619f, "__trace_trigger_soft_disabled" },
	{ 0x3ea07da4, "trace_event_printf" },
	{ 0x651bf37c, "mt76_csa_check" },
	{ 0x387abd95, "mt76_tx_status_skb_add" },
	{ 0x9d28c26e, "__tracepoint_mac_txdone" },
	{ 0x58fcabbf, "__traceiter_dev_irq" },
	{ 0x5c973cd6, "mt76_tx_check_agg_ssn" },
	{ 0x9db208e, "ieee80211_tx_status_ext" },
	{ 0x75ef89f5, "mt76_stop_tx_queues" },
	{ 0x8221ab8e, "___pskb_trim" },
	{ 0x7f3007e7, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd1a73f0c, "__mt76_tx_complete_skb" },
	{ 0x3c21181b, "seq_lseek" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xd376f180, "ieee80211_restart_hw" },
	{ 0xf6ea85f8, "bpf_trace_run2" },
	{ 0x30c996eb, "ieee80211_get_hdrlen_from_skb" },
	{ 0xc2a1281, "kthread_park" },
	{ 0xc9675a91, "mt76_mcu_rx_event" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb1967219, "mt76_wcid_init" },
	{ 0x35f83303, "mt76_tx_status_check" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0xfeb81c39, "trace_event_buffer_commit" },
	{ 0xe668a22c, "ieee80211_get_buffered_bc" },
	{ 0xb75d2f36, "napi_complete_done" },
	{ 0xf5f982d2, "ieee80211_get_tx_rates" },
	{ 0xf6060c12, "ieee80211_send_bar" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf22d596b, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7545ffea, "mt76_tx" },
	{ 0x7692322a, "__napi_schedule" },
	{ 0xd50943ef, "mt76_csa_finish" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x83e9efa0, "mt76_wcid_key_setup" },
	{ 0x480e4fba, "_dev_info" },
	{ 0xaeb98a5e, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x39f2936a, "mt76_rx" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2145ed57, "kthread_unpark" },
	{ 0x51c59cfe, "mt76_phy_dfs_state" },
	{ 0x90c321f5, "wiphy_to_ieee80211_hw" },
	{ 0x1432fb53, "mt76_init_queue" },
	{ 0xe5ba12f8, "debugfs_attr_read" },
	{ 0x32bec52d, "__mt76_sta_remove" },
	{ 0xa02b4488, "mt76_tx_status_skb_done" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf846e36c, "perf_trace_run_bpf_submit" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x2aeeec83, "debugfs_create_bool" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x737fa50, "skb_pull" },
	{ 0x5f14e1f2, "simple_attr_release" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a9c073b, "skb_push" },
	{ 0xa0db0aed, "napi_enable" },
	{ 0xe55596c, "seq_putc" },
	{ 0x9c9c5b0d, "trace_event_reg" },
	{ 0x2c44a9d1, "mt76_update_survey" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0xbcf4bf68, "ieee80211_wake_queues" },
	{ 0x364fbd8, "mt76_mcu_send_and_get_msg" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xeb6ced96, "ieee80211_iter_keys_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x6da45a1a, "__mt76_mcu_msg_alloc" },
	{ 0x332891f2, "mt76_set_irq_mask" },
	{ 0x80796761, "bpf_trace_run1" },
	{ 0xdcb764ad, "memset" },
	{ 0x85b7200d, "ieee80211_calc_tx_airtime" },
	{ 0x7d52f626, "debugfs_create_u32" },
	{ 0x9319f2db, "mt76_seq_puts_array" },
	{ 0xc1f2bae, "ieee80211_stop_queues" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb608bb75, "__tracepoint_dev_irq" },
	{ 0x37a64b43, "seq_read" },
	{ 0x619bd448, "mt76_mcu_get_response" },
	{ 0x4784f010, "debugfs_create_file" },
	{ 0xaa9f2ab8, "trace_event_buffer_reserve" },
	{ 0x3fc54db5, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3275073b, "mt76_txq_schedule_all" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x790e9010, "mt76_rx_aggr_start" },
	{ 0x3cb9704b, "seq_write" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0x61be9375, "seq_printf" },
	{ 0x865cb330, "ieee80211_beacon_get_tim" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xae60070c, "mt76_wcid_cleanup" },
	{ 0x8fded162, "ieee80211_radar_detected" },
	{ 0x6020d921, "single_release" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x80d8d67c, "mt76_queues_read" },
	{ 0x4d24e568, "mt76_register_debugfs_fops" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xc6600a2c, "napi_schedule_prep" },
	{ 0x63c607d1, "napi_disable" },
	{ 0x967bc846, "dev_kfree_skb_any_reason" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0x7b03bd39, "mt76_rx_aggr_stop" },
	{ 0xa7e61ca0, "debugfs_create_u8" },
	{ 0x7b229cc2, "single_open" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x2d6edd51, "mt76_dma_attach" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mac80211,mt76,cfg80211");


MODULE_INFO(srcversion, "2F271722BA210A2CECB1231");
