#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt792x_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_stop, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_link_bss_remove, "_gpl", "");
KSYMTAB_FUNC(mt792x_remove_interface, "_gpl", "");
KSYMTAB_FUNC(mt792x_conf_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_tsf, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_tsf, "_gpl", "");
KSYMTAB_FUNC(mt792x_tx_worker, "_gpl", "");
KSYMTAB_FUNC(mt792x_roc_timer, "_gpl", "");
KSYMTAB_FUNC(mt792x_flush, "_gpl", "");
KSYMTAB_FUNC(mt792x_assign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt792x_unassign_vif_chanctx, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_wakeup, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_strings, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_sset_count, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_et_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_sta_statistics, "_gpl", "");
KSYMTAB_FUNC(mt792x_set_coverage_class, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_wiphy, "_gpl", "");
KSYMTAB_FUNC(mt792x_get_mac80211_ops, "_gpl", "");
KSYMTAB_FUNC(mt792x_init_wcid, "_gpl", "");
KSYMTAB_FUNC(mt792x_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792x_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(__mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792xe_mcu_drv_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792xe_mcu_fw_pmctrl, "_gpl", "");
KSYMTAB_FUNC(mt792x_load_firmware, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_set_timeing, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_update_mib_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_rx_get_wcid, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_assoc_rssi, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_reset_counters, "_gpl", "");
KSYMTAB_FUNC(mt792x_update_channel, "_gpl", "");
KSYMTAB_FUNC(mt792x_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_mac_init_band, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_wake_work, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_power_save_work, "_gpl", "");
KSYMTAB_DATA(__tracepoint_lp_event, "_gpl", "");
KSYMTAB_FUNC(__traceiter_lp_event, "_gpl", "");
KSYMTAB_DATA(__SCK__tp_func_lp_event, "_gpl", "");
KSYMTAB_FUNC(mt792x_tx_stats_show, "_gpl", "");
KSYMTAB_FUNC(mt792x_queues_acq, "_gpl", "");
KSYMTAB_FUNC(mt792x_queues_read, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_stats, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_idle_timeout_set, "_gpl", "");
KSYMTAB_FUNC(mt792x_pm_idle_timeout_get, "_gpl", "");
KSYMTAB_FUNC(mt792x_irq_handler, "_gpl", "");
KSYMTAB_FUNC(mt792x_irq_tasklet, "_gpl", "");
KSYMTAB_FUNC(mt792x_rx_poll_complete, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_enable, "_gpl", "");
KSYMTAB_FUNC(mt792x_wpdma_reset, "_gpl", "");
KSYMTAB_FUNC(mt792x_wpdma_reinit_cond, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_disable, "_gpl", "");
KSYMTAB_FUNC(mt792x_dma_cleanup, "_gpl", "");
KSYMTAB_FUNC(mt792x_poll_tx, "_gpl", "");
KSYMTAB_FUNC(mt792x_poll_rx, "_gpl", "");
KSYMTAB_FUNC(mt792x_wfsys_reset, "_gpl", "");

SYMBOL_CRC(mt792x_tx, 0xc8e38b1f, "_gpl");
SYMBOL_CRC(mt792x_stop, 0x241601c6, "_gpl");
SYMBOL_CRC(mt792x_mac_link_bss_remove, 0xe6bd2dfa, "_gpl");
SYMBOL_CRC(mt792x_remove_interface, 0x68e181d8, "_gpl");
SYMBOL_CRC(mt792x_conf_tx, 0xd9af68ed, "_gpl");
SYMBOL_CRC(mt792x_get_stats, 0xb6792956, "_gpl");
SYMBOL_CRC(mt792x_get_tsf, 0x86ad9235, "_gpl");
SYMBOL_CRC(mt792x_set_tsf, 0x7ffacfa6, "_gpl");
SYMBOL_CRC(mt792x_tx_worker, 0x7714bbc1, "_gpl");
SYMBOL_CRC(mt792x_roc_timer, 0x9c06d4d5, "_gpl");
SYMBOL_CRC(mt792x_flush, 0x528d58be, "_gpl");
SYMBOL_CRC(mt792x_assign_vif_chanctx, 0x2d4c658f, "_gpl");
SYMBOL_CRC(mt792x_unassign_vif_chanctx, 0x469d8e23, "_gpl");
SYMBOL_CRC(mt792x_set_wakeup, 0x90f849ea, "_gpl");
SYMBOL_CRC(mt792x_get_et_strings, 0x3c81e6ce, "_gpl");
SYMBOL_CRC(mt792x_get_et_sset_count, 0x9d75cad3, "_gpl");
SYMBOL_CRC(mt792x_get_et_stats, 0x8ca72889, "_gpl");
SYMBOL_CRC(mt792x_sta_statistics, 0x50c7507a, "_gpl");
SYMBOL_CRC(mt792x_set_coverage_class, 0xfe2d4dde, "_gpl");
SYMBOL_CRC(mt792x_init_wiphy, 0x03ff22b1, "_gpl");
SYMBOL_CRC(mt792x_get_mac80211_ops, 0x6beb0ca1, "_gpl");
SYMBOL_CRC(mt792x_init_wcid, 0x15b0f6c3, "_gpl");
SYMBOL_CRC(mt792x_mcu_drv_pmctrl, 0xefc793b2, "_gpl");
SYMBOL_CRC(mt792x_mcu_fw_pmctrl, 0x7bf06be9, "_gpl");
SYMBOL_CRC(__mt792xe_mcu_drv_pmctrl, 0xd42e1564, "_gpl");
SYMBOL_CRC(mt792xe_mcu_drv_pmctrl, 0x48390bfe, "_gpl");
SYMBOL_CRC(mt792xe_mcu_fw_pmctrl, 0xe24e460d, "_gpl");
SYMBOL_CRC(mt792x_load_firmware, 0xd2499acf, "_gpl");
SYMBOL_CRC(mt792x_mac_work, 0xe731fec5, "_gpl");
SYMBOL_CRC(mt792x_mac_set_timeing, 0x98b2ac10, "_gpl");
SYMBOL_CRC(mt792x_mac_update_mib_stats, 0x7c8a76e9, "_gpl");
SYMBOL_CRC(mt792x_rx_get_wcid, 0x6bf57de2, "_gpl");
SYMBOL_CRC(mt792x_mac_assoc_rssi, 0x51b45145, "_gpl");
SYMBOL_CRC(mt792x_mac_reset_counters, 0x1b63820e, "_gpl");
SYMBOL_CRC(mt792x_update_channel, 0xd14f29d1, "_gpl");
SYMBOL_CRC(mt792x_reset, 0x7b5e54e1, "_gpl");
SYMBOL_CRC(mt792x_mac_init_band, 0x7bc79ac1, "_gpl");
SYMBOL_CRC(mt792x_pm_wake_work, 0x0df73a34, "_gpl");
SYMBOL_CRC(mt792x_pm_power_save_work, 0xe4ccb149, "_gpl");
SYMBOL_CRC(__tracepoint_lp_event, 0x5f2194f6, "_gpl");
SYMBOL_CRC(__traceiter_lp_event, 0x15201af1, "_gpl");
SYMBOL_CRC(__SCK__tp_func_lp_event, 0xb9749f8d, "_gpl");
SYMBOL_CRC(mt792x_tx_stats_show, 0x50edacd8, "_gpl");
SYMBOL_CRC(mt792x_queues_acq, 0xddfe2747, "_gpl");
SYMBOL_CRC(mt792x_queues_read, 0x3e4dcddd, "_gpl");
SYMBOL_CRC(mt792x_pm_stats, 0x94e007d1, "_gpl");
SYMBOL_CRC(mt792x_pm_idle_timeout_set, 0x5a7b5c38, "_gpl");
SYMBOL_CRC(mt792x_pm_idle_timeout_get, 0xc3a0fb62, "_gpl");
SYMBOL_CRC(mt792x_irq_handler, 0xbd22e98c, "_gpl");
SYMBOL_CRC(mt792x_irq_tasklet, 0x8e471e29, "_gpl");
SYMBOL_CRC(mt792x_rx_poll_complete, 0xe020a863, "_gpl");
SYMBOL_CRC(mt792x_dma_enable, 0x7d00a136, "_gpl");
SYMBOL_CRC(mt792x_wpdma_reset, 0x5821b560, "_gpl");
SYMBOL_CRC(mt792x_wpdma_reinit_cond, 0x907e2953, "_gpl");
SYMBOL_CRC(mt792x_dma_disable, 0x875733e1, "_gpl");
SYMBOL_CRC(mt792x_dma_cleanup, 0xdc458f11, "_gpl");
SYMBOL_CRC(mt792x_poll_tx, 0xb77b7931, "_gpl");
SYMBOL_CRC(mt792x_poll_rx, 0x8a792333, "_gpl");
SYMBOL_CRC(mt792x_wfsys_reset, 0x8a7f650d, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf4d40a4d, "mt76_dma_rx_poll" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x10f4b85c, "trace_raw_output_prep" },
	{ 0x5f63619f, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x997baa9a, "mt76_connac_mcu_uni_add_dev" },
	{ 0xf0403a7a, "request_firmware" },
	{ 0x3ea07da4, "trace_event_printf" },
	{ 0x33c068ef, "ieee80211_iterate_stations_atomic" },
	{ 0xa9bd2fef, "mt76_connac_pm_wake" },
	{ 0x58fcabbf, "__traceiter_dev_irq" },
	{ 0x7f3007e7, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12125b9c, "mt76_has_tx_pending" },
	{ 0x640c5985, "ieee80211_emulate_change_chanctx" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf6ea85f8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x63bd5c0e, "mt76_dma_cleanup" },
	{ 0x629e6570, "mt76_connac_pm_queue_skb" },
	{ 0x35f83303, "mt76_tx_status_check" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x1f54af6e, "mt76_connac_free_pending_tx_skbs" },
	{ 0xc8848ced, "mt76_connac_power_save_sched" },
	{ 0xfeb81c39, "trace_event_buffer_commit" },
	{ 0xb75d2f36, "napi_complete_done" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7545ffea, "mt76_tx" },
	{ 0x7692322a, "__napi_schedule" },
	{ 0xe1a842dd, "mt76_connac_mcu_set_mac_enable" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0x9e027cf9, "devm_kmemdup" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf846e36c, "perf_trace_run_bpf_submit" },
	{ 0xdb34963d, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb8e12238, "mt76_connac2_load_ram" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe55596c, "seq_putc" },
	{ 0x9c9c5b0d, "trace_event_reg" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x2c44a9d1, "mt76_update_survey" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xbcf4bf68, "ieee80211_wake_queues" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x908ca40c, "mt76_connac_wowlan_support" },
	{ 0x332891f2, "mt76_set_irq_mask" },
	{ 0xacd26de4, "mt76_connac_pm_dequeue_skbs" },
	{ 0xdcb764ad, "memset" },
	{ 0x8740abfb, "ieee80211_emulate_add_chanctx" },
	{ 0x5f9da5f8, "ieee80211_emulate_switch_vif_chanctx" },
	{ 0x9840c919, "mt76_ethtool_page_pool_stats" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb608bb75, "__tracepoint_dev_irq" },
	{ 0xaa9f2ab8, "trace_event_buffer_reserve" },
	{ 0x3fc54db5, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3275073b, "mt76_txq_schedule_all" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x186413b2, "mt76_connac2_load_patch" },
	{ 0x3cb9704b, "seq_write" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x61be9375, "seq_printf" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xae60070c, "mt76_wcid_cleanup" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x6adf9aae, "ieee80211_queue_work" },
	{ 0xc6600a2c, "napi_schedule_prep" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x10e2b56, "ieee80211_emulate_remove_chanctx" },
	{ 0xab9d88b8, "mt76_ethtool_worker" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76-connac-lib,mac80211");


MODULE_INFO(srcversion, "A0D099DC3D13E08351F7A81");
