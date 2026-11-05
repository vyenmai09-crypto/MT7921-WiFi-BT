#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76_set_irq_mask, "_gpl", "");
KSYMTAB_FUNC(mt76_mmio_init, "_gpl", "");
KSYMTAB_FUNC(__mt76_poll, "_gpl", "");
KSYMTAB_FUNC(____mt76_poll_msec, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_get_min_avg_rssi, "_gpl", "");
KSYMTAB_FUNC(__mt76_worker_fn, "_gpl", "");
KSYMTAB_DATA(__tracepoint_mac_txdone, "_gpl", "");
KSYMTAB_FUNC(__traceiter_mac_txdone, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_mac_txdone, "_gpl", "");
KSYMTAB_DATA(__tracepoint_dev_irq, "_gpl", "");
KSYMTAB_FUNC(__traceiter_dev_irq, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_dev_irq, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_put_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_put_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_free_pending_rxwi, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_rx_poll, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_attach, "_gpl", "");
KSYMTAB_FUNC(mt76_dma_cleanup, "_gpl", "");
KSYMTAB_DATA(mt76_rates, "_gpl", "");
KSYMTAB_FUNC(mt76_set_stream_caps, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_register_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_phy, "_gpl", "");
KSYMTAB_FUNC(mt76_create_page_pool, "_gpl", "");
KSYMTAB_FUNC(mt76_alloc_device, "_gpl", "");
KSYMTAB_FUNC(mt76_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76_unregister_device, "_gpl", "");
KSYMTAB_FUNC(mt76_free_device, "_gpl", "");
KSYMTAB_FUNC(mt76_rx, "_gpl", "");
KSYMTAB_FUNC(mt76_has_tx_pending, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey_active_time, "_gpl", "");
KSYMTAB_FUNC(mt76_update_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt76_get_survey, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_key_setup, "", "");
KSYMTAB_FUNC(mt76_rx_signal, "", "");
KSYMTAB_FUNC(mt76_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_sta_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_state, "_gpl", "");
KSYMTAB_FUNC(mt76_sta_pre_rcu_remove, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_init, "_gpl", "");
KSYMTAB_FUNC(mt76_wcid_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt76_get_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_init_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_get_sar_power, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_finish, "_gpl", "");
KSYMTAB_FUNC(mt76_csa_check, "_gpl", "");
KSYMTAB_FUNC(mt76_set_tim, "_gpl", "");
KSYMTAB_FUNC(mt76_insert_ccmp_hdr, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_sw_scan_complete, "_gpl", "");
KSYMTAB_FUNC(mt76_get_antenna, "_gpl", "");
KSYMTAB_FUNC(mt76_init_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_calculate_default_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_worker, "_gpl", "");
KSYMTAB_FUNC(mt76_ethtool_page_pool_stats, "_gpl", "");
KSYMTAB_FUNC(mt76_phy_dfs_state, "_gpl", "");
KSYMTAB_FUNC(mt76_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt76_seq_puts_array, "_gpl", "");
KSYMTAB_FUNC(mt76_register_debugfs_fops, "_gpl", "");
KSYMTAB_FUNC(mt76_get_of_data_from_mtd, "_gpl", "");
KSYMTAB_FUNC(mt76_get_of_data_from_nvmem, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_override, "_gpl", "");
KSYMTAB_FUNC(mt76_find_power_limits_node, "_gpl", "");
KSYMTAB_FUNC(mt76_find_channel_node, "_gpl", "");
KSYMTAB_FUNC(mt76_get_rate_power_limits, "_gpl", "");
KSYMTAB_FUNC(mt76_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_check_agg_ssn, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_lock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_unlock, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_done, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_add, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_skb_get, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_status_check, "_gpl", "");
KSYMTAB_FUNC(__mt76_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_tx, "_gpl", "");
KSYMTAB_FUNC(mt76_release_buffered_frames, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule, "_gpl", "");
KSYMTAB_FUNC(mt76_txq_schedule_all, "_gpl", "");
KSYMTAB_FUNC(mt76_tx_worker_run, "_gpl", "");
KSYMTAB_FUNC(mt76_stop_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_wake_tx_queue, "_gpl", "");
KSYMTAB_FUNC(mt76_ac_to_hwq, "_gpl", "");
KSYMTAB_FUNC(mt76_skb_adjust_pad, "_gpl", "");
KSYMTAB_FUNC(mt76_queue_tx_complete, "_gpl", "");
KSYMTAB_FUNC(__mt76_set_tx_blocked, "_gpl", "");
KSYMTAB_FUNC(mt76_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_token_consume, "_gpl", "");
KSYMTAB_FUNC(mt76_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_token_release, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_start, "_gpl", "");
KSYMTAB_FUNC(mt76_rx_aggr_stop, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_msg_alloc, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_get_response, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_rx_event, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(mt76_mcu_skb_send_and_get_msg, "_gpl", "");
KSYMTAB_FUNC(__mt76_mcu_send_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_release_rx_buf, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_offload_disable, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_reset_complete, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_net_setup_tc, "_gpl", "");
KSYMTAB_FUNC(mt76_wed_dma_reset, "_gpl", "");
KSYMTAB_FUNC(mt76_pci_disable_aspm, "_gpl", "");
KSYMTAB_FUNC(mt76_pci_aspm_supported, "_gpl", "");

SYMBOL_CRC(mt76_set_irq_mask, 0x332891f2, "_gpl");
SYMBOL_CRC(mt76_mmio_init, 0xe6c0b289, "_gpl");
SYMBOL_CRC(__mt76_poll, 0x5dfe3dc7, "_gpl");
SYMBOL_CRC(____mt76_poll_msec, 0x9e622ed1, "_gpl");
SYMBOL_CRC(mt76_wcid_alloc, 0xe40b66ef, "_gpl");
SYMBOL_CRC(mt76_get_min_avg_rssi, 0x9dfec4e3, "_gpl");
SYMBOL_CRC(__mt76_worker_fn, 0x1ec57b4f, "_gpl");
SYMBOL_CRC(__tracepoint_mac_txdone, 0x9d28c26e, "_gpl");
SYMBOL_CRC(__traceiter_mac_txdone, 0x20f748c8, "_gpl");
SYMBOL_CRC(__SCK__tp_func_mac_txdone, 0xc6315d8e, "_gpl");
SYMBOL_CRC(__tracepoint_dev_irq, 0xb608bb75, "_gpl");
SYMBOL_CRC(__traceiter_dev_irq, 0x58fcabbf, "_gpl");
SYMBOL_CRC(__SCK__tp_func_dev_irq, 0x805fc13a, "_gpl");
SYMBOL_CRC(mt76_get_rxwi, 0xecb0e12a, "_gpl");
SYMBOL_CRC(mt76_put_txwi, 0xdaa53b61, "_gpl");
SYMBOL_CRC(mt76_put_rxwi, 0xdc55cde1, "_gpl");
SYMBOL_CRC(mt76_free_pending_rxwi, 0x9959460b, "_gpl");
SYMBOL_CRC(mt76_dma_rx_poll, 0xf4d40a4d, "_gpl");
SYMBOL_CRC(mt76_dma_attach, 0x2d6edd51, "_gpl");
SYMBOL_CRC(mt76_dma_cleanup, 0x63bd5c0e, "_gpl");
SYMBOL_CRC(mt76_rates, 0x17f568e9, "_gpl");
SYMBOL_CRC(mt76_set_stream_caps, 0xa2d4e68e, "_gpl");
SYMBOL_CRC(mt76_alloc_phy, 0xb402f9d0, "_gpl");
SYMBOL_CRC(mt76_register_phy, 0x53ca0715, "_gpl");
SYMBOL_CRC(mt76_unregister_phy, 0x1c66b50c, "_gpl");
SYMBOL_CRC(mt76_create_page_pool, 0x2dcc2dd7, "_gpl");
SYMBOL_CRC(mt76_alloc_device, 0xefefd0d1, "_gpl");
SYMBOL_CRC(mt76_register_device, 0xddeb9e9c, "_gpl");
SYMBOL_CRC(mt76_unregister_device, 0x0b4b18f7, "_gpl");
SYMBOL_CRC(mt76_free_device, 0xf7bf6eba, "_gpl");
SYMBOL_CRC(mt76_rx, 0x39f2936a, "_gpl");
SYMBOL_CRC(mt76_has_tx_pending, 0x12125b9c, "_gpl");
SYMBOL_CRC(mt76_update_survey_active_time, 0x84a1d43b, "_gpl");
SYMBOL_CRC(mt76_update_survey, 0x2c44a9d1, "_gpl");
SYMBOL_CRC(mt76_update_channel, 0x4827f112, "_gpl");
SYMBOL_CRC(mt76_get_survey, 0x9bb83e43, "_gpl");
SYMBOL_CRC(mt76_wcid_key_setup, 0x83e9efa0, "");
SYMBOL_CRC(mt76_rx_signal, 0x327a9822, "");
SYMBOL_CRC(mt76_rx_poll_complete, 0x5856302a, "_gpl");
SYMBOL_CRC(__mt76_sta_remove, 0x32bec52d, "_gpl");
SYMBOL_CRC(mt76_sta_state, 0x22f9e2dd, "_gpl");
SYMBOL_CRC(mt76_sta_pre_rcu_remove, 0x28020a2b, "_gpl");
SYMBOL_CRC(mt76_wcid_init, 0xb1967219, "_gpl");
SYMBOL_CRC(mt76_wcid_cleanup, 0xae60070c, "_gpl");
SYMBOL_CRC(mt76_get_txpower, 0x4ee62959, "_gpl");
SYMBOL_CRC(mt76_init_sar_power, 0x62fe9253, "_gpl");
SYMBOL_CRC(mt76_get_sar_power, 0x9b0618a8, "_gpl");
SYMBOL_CRC(mt76_csa_finish, 0xd50943ef, "_gpl");
SYMBOL_CRC(mt76_csa_check, 0x651bf37c, "_gpl");
SYMBOL_CRC(mt76_set_tim, 0x88aefc19, "_gpl");
SYMBOL_CRC(mt76_insert_ccmp_hdr, 0xd5cc5451, "_gpl");
SYMBOL_CRC(mt76_get_rate, 0x594c7205, "_gpl");
SYMBOL_CRC(mt76_sw_scan, 0x8737da06, "_gpl");
SYMBOL_CRC(mt76_sw_scan_complete, 0x8a09f7bf, "_gpl");
SYMBOL_CRC(mt76_get_antenna, 0x6ff53d39, "_gpl");
SYMBOL_CRC(mt76_init_queue, 0x1432fb53, "_gpl");
SYMBOL_CRC(mt76_calculate_default_rate, 0xb5333ebd, "_gpl");
SYMBOL_CRC(mt76_ethtool_worker, 0xab9d88b8, "_gpl");
SYMBOL_CRC(mt76_ethtool_page_pool_stats, 0x9840c919, "_gpl");
SYMBOL_CRC(mt76_phy_dfs_state, 0x51c59cfe, "_gpl");
SYMBOL_CRC(mt76_queues_read, 0x80d8d67c, "_gpl");
SYMBOL_CRC(mt76_seq_puts_array, 0x9319f2db, "_gpl");
SYMBOL_CRC(mt76_register_debugfs_fops, 0x4d24e568, "_gpl");
SYMBOL_CRC(mt76_get_of_data_from_mtd, 0x61de9781, "_gpl");
SYMBOL_CRC(mt76_get_of_data_from_nvmem, 0x37d55b6c, "_gpl");
SYMBOL_CRC(mt76_eeprom_override, 0xdc0f64c7, "_gpl");
SYMBOL_CRC(mt76_find_power_limits_node, 0x3d7d915a, "_gpl");
SYMBOL_CRC(mt76_find_channel_node, 0x36885938, "_gpl");
SYMBOL_CRC(mt76_get_rate_power_limits, 0xa283f5b1, "_gpl");
SYMBOL_CRC(mt76_eeprom_init, 0x4a4c3114, "_gpl");
SYMBOL_CRC(mt76_tx_check_agg_ssn, 0x5c973cd6, "_gpl");
SYMBOL_CRC(mt76_tx_status_lock, 0xa2a21843, "_gpl");
SYMBOL_CRC(mt76_tx_status_unlock, 0xb86b3ca2, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_done, 0xa02b4488, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_add, 0x387abd95, "_gpl");
SYMBOL_CRC(mt76_tx_status_skb_get, 0xd1625678, "_gpl");
SYMBOL_CRC(mt76_tx_status_check, 0x35f83303, "_gpl");
SYMBOL_CRC(__mt76_tx_complete_skb, 0xd1a73f0c, "_gpl");
SYMBOL_CRC(mt76_tx, 0x7545ffea, "_gpl");
SYMBOL_CRC(mt76_release_buffered_frames, 0xd1247972, "_gpl");
SYMBOL_CRC(mt76_txq_schedule, 0x04607cf3, "_gpl");
SYMBOL_CRC(mt76_txq_schedule_all, 0x3275073b, "_gpl");
SYMBOL_CRC(mt76_tx_worker_run, 0x0c0e6ff0, "_gpl");
SYMBOL_CRC(mt76_stop_tx_queues, 0x75ef89f5, "_gpl");
SYMBOL_CRC(mt76_wake_tx_queue, 0xddbdd551, "_gpl");
SYMBOL_CRC(mt76_ac_to_hwq, 0xc6634315, "_gpl");
SYMBOL_CRC(mt76_skb_adjust_pad, 0x783cba7b, "_gpl");
SYMBOL_CRC(mt76_queue_tx_complete, 0x3a10b662, "_gpl");
SYMBOL_CRC(__mt76_set_tx_blocked, 0xb34dd2a8, "_gpl");
SYMBOL_CRC(mt76_token_consume, 0x77df9a6d, "_gpl");
SYMBOL_CRC(mt76_rx_token_consume, 0x140bad6d, "_gpl");
SYMBOL_CRC(mt76_token_release, 0x58cfce5f, "_gpl");
SYMBOL_CRC(mt76_rx_token_release, 0x3c393823, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_start, 0x790e9010, "_gpl");
SYMBOL_CRC(mt76_rx_aggr_stop, 0x7b03bd39, "_gpl");
SYMBOL_CRC(__mt76_mcu_msg_alloc, 0x6da45a1a, "_gpl");
SYMBOL_CRC(mt76_mcu_get_response, 0x619bd448, "_gpl");
SYMBOL_CRC(mt76_mcu_rx_event, 0xc9675a91, "_gpl");
SYMBOL_CRC(mt76_mcu_send_and_get_msg, 0x0364fbd8, "_gpl");
SYMBOL_CRC(mt76_mcu_skb_send_and_get_msg, 0xdb86ed9a, "_gpl");
SYMBOL_CRC(__mt76_mcu_send_firmware, 0x5278ab68, "_gpl");
SYMBOL_CRC(mt76_wed_release_rx_buf, 0x2a310631, "_gpl");
SYMBOL_CRC(mt76_wed_offload_disable, 0xda4fd8c4, "_gpl");
SYMBOL_CRC(mt76_wed_reset_complete, 0x4958cfc1, "_gpl");
SYMBOL_CRC(mt76_wed_net_setup_tc, 0x0f4fe625, "_gpl");
SYMBOL_CRC(mt76_wed_dma_reset, 0x5c0badac, "_gpl");
SYMBOL_CRC(mt76_pci_disable_aspm, 0x8a1b2134, "_gpl");
SYMBOL_CRC(mt76_pci_aspm_supported, 0xaa5656d9, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4ae8caa7, "ieee80211_sta_register_airtime" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x391130a1, "pcie_capability_read_word" },
	{ 0x22ad227d, "__skb_pad" },
	{ 0x5cf2651b, "simple_attr_open" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xd94982dc, "__ieee80211_schedule_txq" },
	{ 0xb114a07, "debugfs_attr_write" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0x6dd2cbca, "of_node_put" },
	{ 0xcbc221d, "skb_put" },
	{ 0xc62c59f5, "of_property_read_variable_u32_array" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6f7f29a1, "page_pool_alloc_frag" },
	{ 0x2d569990, "__iowrite32_copy_full" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x80f7d434, "consume_skb" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xa49feb2e, "netif_napi_add_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xfee25173, "dmam_alloc_attrs" },
	{ 0x10f4b85c, "trace_raw_output_prep" },
	{ 0x6b8bf149, "netif_receive_skb_list" },
	{ 0xc06c5a35, "skb_dequeue" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x5f63619f, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1decccf7, "ieee80211_free_hw" },
	{ 0x62e32843, "dma_unmap_page_attrs" },
	{ 0x4606f7c4, "ieee80211_txq_schedule_start" },
	{ 0x3ea07da4, "trace_event_printf" },
	{ 0x9db208e, "ieee80211_tx_status_ext" },
	{ 0xc976e3fc, "debugfs_create_blob" },
	{ 0x7f3007e7, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xf95322f4, "kthread_parkme" },
	{ 0xcdad2657, "page_pool_destroy" },
	{ 0x746d2f12, "ieee80211_register_hw" },
	{ 0x3b704815, "led_classdev_unregister" },
	{ 0x99253734, "__ieee80211_create_tpt_led_trigger" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x5b67576f, "ieee80211_sta_eosp" },
	{ 0x30c996eb, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe2964344, "__wake_up" },
	{ 0xd4ed6051, "__netif_napi_del" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc2a1281, "kthread_park" },
	{ 0x1a31f178, "sched_set_fifo_low" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x79defbe1, "kthread_should_park" },
	{ 0xd5e20eae, "of_get_property" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x890d6a85, "dev_driver_string" },
	{ 0xfeb81c39, "trace_event_buffer_commit" },
	{ 0xb67233e1, "dma_map_page_attrs" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0xb75d2f36, "napi_complete_done" },
	{ 0xf5f982d2, "ieee80211_get_tx_rates" },
	{ 0xf6060c12, "ieee80211_send_bar" },
	{ 0x70f96c62, "cfg80211_reg_check_beaconing" },
	{ 0xaeb9a917, "ieee80211_get_key_rx_seq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1569940e, "ieee80211_sta_uapsd_trigger" },
	{ 0xd9063777, "of_get_next_child" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf22d596b, "debugfs_create_devm_seqfile" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9c41cbe, "__alloc_skb" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6a85fccd, "pci_disable_link_state" },
	{ 0x480e4fba, "_dev_info" },
	{ 0x21e06da4, "napi_gro_receive" },
	{ 0x7b57bcb3, "of_get_mac_address" },
	{ 0x8f6ad050, "skb_queue_tail" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2145ed57, "kthread_unpark" },
	{ 0x2776c084, "dev_set_threaded" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x63fd77a7, "of_get_child_by_name" },
	{ 0xe5ba12f8, "debugfs_attr_read" },
	{ 0xe27e7083, "__dma_sync_single_for_cpu" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0x9e027cf9, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf846e36c, "perf_trace_run_bpf_submit" },
	{ 0xdb34963d, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7831386e, "of_prop_next_string" },
	{ 0xcecac164, "debugfs_create_file_unsafe" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5f14e1f2, "simple_attr_release" },
	{ 0x845fc72a, "ieee80211_calc_rx_airtime" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8dd05818, "ieee80211_find_sta_by_ifaddr" },
	{ 0x55c02441, "ieee80211_next_txq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf73c68cc, "pcie_capability_clear_and_set_word_locked" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4a9c073b, "skb_push" },
	{ 0xa0db0aed, "napi_enable" },
	{ 0x13c0013, "ieee80211_beacon_cntdwn_is_complete" },
	{ 0xe55596c, "seq_putc" },
	{ 0x9c9c5b0d, "trace_event_reg" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc3858fb3, "ieee80211_sta_pspoll" },
	{ 0xaf100599, "free_netdev" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0xb164b529, "wiphy_read_of_freq_limits" },
	{ 0xc7b66c59, "of_find_property" },
	{ 0x37a0e57a, "page_pool_put_unrefed_netmem" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x63814227, "kthread_stop" },
	{ 0xe1fc93ab, "ieee80211_free_txskb" },
	{ 0x8293c60f, "led_classdev_register_ext" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x2919ddd0, "of_device_is_available" },
	{ 0xb6357d27, "ieee80211_alloc_hw_nm" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xdd13f89e, "ieee80211_tx_dequeue" },
	{ 0x94561916, "ieee80211_rx_list" },
	{ 0xd7b72650, "page_pool_create" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x7d52f626, "debugfs_create_u32" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e210011, "kthread_create_on_node" },
	{ 0x715d6adf, "bpf_trace_run3" },
	{ 0x44c10a52, "kvfree_call_rcu" },
	{ 0xce24d917, "alloc_netdev_dummy" },
	{ 0xaa9f2ab8, "trace_event_buffer_reserve" },
	{ 0x3fc54db5, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x741b2d4c, "__dma_sync_single_for_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x448cd2db, "ieee80211_unregister_hw" },
	{ 0x9ce60fa0, "napi_build_skb" },
	{ 0x3cb9704b, "seq_write" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x1e680b39, "__kmalloc_cache_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfd590c6, "of_nvmem_cell_get" },
	{ 0x61be9375, "seq_printf" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x6765f775, "skb_add_rx_frag_netmem" },
	{ 0x63c607d1, "napi_disable" },
	{ 0x42c9a3f7, "ieee80211_sta_ps_transition" },
	{ 0xa7e61ca0, "debugfs_create_u8" },
	{ 0x4281e8ad, "debugfs_create_dir" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x5dcc0b54, "kmalloc_caches" },
	{ 0xd9eb2768, "ieee80211_csa_finish" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "DD9A64FC5DC89F1B4DA0D38");
