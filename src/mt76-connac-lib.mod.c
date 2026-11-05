#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76_connac_mcu_start_firmware, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_patch_sem_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_start_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_init_download, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_channel_domain, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_mac_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_vif_ps, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rts_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_beacon_loss_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_nested_tlv, "_gpl", "");
KSYMTAB_FUNC(__mt76_connac_mcu_alloc_sta_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_alloc_wtbl_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_omac_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_uapsd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_hdr_trans_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_update_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_generic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_he_tlv_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_v2, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_smps_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ht_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_wtbl_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_dev, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_wed_update, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sta_ba, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_phy_mode_ext, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_he_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_eht_phy_cap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_set_chctx, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_uni_add_bss, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_cancel_hw_scan, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_req, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_sched_scan_enable, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_chip_config, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_deep_sleep, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_sta_state_dp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_coredump_event, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_get_ch_power, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_rate_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_arp_filter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_p2p_oppps, "_gpl", "");
KSYMTAB_DATA(mt76_connac_wowlan_support, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_update_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_gtk_rekey, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_mode, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_wow_ctrl, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_hif_suspend, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_suspend_iter, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_rr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_reg_wr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_add_key, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_ext_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_bss_basic_tlv, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_set_pm, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_restart, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_del_wtbl_all, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_mcu_rdd_cmd, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_load_ram, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_load_patch, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mcu_fill_message, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_gen_ppe_thresh, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_wake, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_power_save_sched, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_free_pending_tx_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_queue_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_pm_dequeue_skbs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_tx_complete_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_write_hw_txp, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_txp_skb_unmap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac_init_tx_queues, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_tx_rate_val, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_write_txwi, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_fill_txs, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_add_txs_skb, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_reverse_frag0_hdr_trans, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_mac_fill_rx_rate, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_tx_check_aggr, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_txwi_free, "_gpl", "");
KSYMTAB_FUNC(mt76_connac2_tx_token_put, "_gpl", "");
KSYMTAB_FUNC(mt76_connac3_mac_decode_he_radiotap, "_gpl", "");
KSYMTAB_FUNC(mt76_connac3_mac_decode_eht_radiotap, "_gpl", "");

SYMBOL_CRC(mt76_connac_mcu_start_firmware, 0x1fe6e5df, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_patch_sem_ctrl, 0x456cf0c6, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_start_patch, 0x973d3455, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_init_download, 0xe6c4bf3d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_channel_domain, 0xa867b40d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_mac_enable, 0xe1a842dd, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_vif_ps, 0xe52c30a8, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rts_thresh, 0x69a8f706, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_beacon_loss_iter, 0x55b64098, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_nested_tlv, 0x5b4c4a08, "_gpl");
SYMBOL_CRC(__mt76_connac_mcu_alloc_sta_req, 0x125942af, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_alloc_wtbl_req, 0x72025c1d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_omac_tlv, 0x6a4e4182, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_basic_tlv, 0xf7087906, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_uapsd, 0x59fcc0ac, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_hdr_trans_tlv, 0x43629664, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_update_hdr_trans, 0x31242962, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_update_hdr_trans, 0xe1655f7b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_generic_tlv, 0x5ac85778, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_he_tlv_v2, 0x8625b14f, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode_v2, 0x2ef15638, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_tlv, 0xfb6dc088, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_smps_tlv, 0x8302ee91, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ht_tlv, 0xa439176e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_cmd, 0xa20db449, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_wtbl_ba_tlv, 0xfb1a360a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_dev, 0x997baa9a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba_tlv, 0x5bf48b5b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_wed_update, 0xdfebc94a, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sta_ba, 0x475d0f09, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode, 0x571369ed, "_gpl");
SYMBOL_CRC(mt76_connac_get_phy_mode_ext, 0x25db524b, "_gpl");
SYMBOL_CRC(mt76_connac_get_he_phy_cap, 0x6894a051, "_gpl");
SYMBOL_CRC(mt76_connac_get_eht_phy_cap, 0x8e6ac062, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_set_chctx, 0xc95b7aed, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_uni_add_bss, 0xddb4aa2f, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_hw_scan, 0xdc2f116e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_cancel_hw_scan, 0xbe827f6e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_req, 0xd86115c2, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_sched_scan_enable, 0x1d41a7ef, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_chip_config, 0xa477864c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_deep_sleep, 0xd98b962b, "_gpl");
SYMBOL_CRC(mt76_connac_sta_state_dp, 0xa2479fa8, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_coredump_event, 0xb20adf6e, "_gpl");
SYMBOL_CRC(mt76_connac_get_ch_power, 0x47e718fa, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_rate_txpower, 0xa27a96c1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_arp_filter, 0x3ae1196d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_p2p_oppps, 0xd1449ea6, "_gpl");
SYMBOL_CRC(mt76_connac_wowlan_support, 0x908ca40c, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_update_gtk_rekey, 0xf7df27bd, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_gtk_rekey, 0xa1bfecd3, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_suspend_mode, 0xe81aad91, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_wow_ctrl, 0x583100d1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_hif_suspend, 0x7748d35d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_suspend_iter, 0xeea4feec, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_rr, 0xb5b11e5b, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_reg_wr, 0x7df9ddc6, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_add_key, 0x950da8d1, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_ext_tlv, 0x825b3d2e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_bss_basic_tlv, 0x0ef23f69, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_set_pm, 0xd374733e, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_restart, 0x88f8524d, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_del_wtbl_all, 0xd2f1a0b2, "_gpl");
SYMBOL_CRC(mt76_connac_mcu_rdd_cmd, 0x1acefbd9, "_gpl");
SYMBOL_CRC(mt76_connac2_load_ram, 0xb8e12238, "_gpl");
SYMBOL_CRC(mt76_connac2_load_patch, 0x186413b2, "_gpl");
SYMBOL_CRC(mt76_connac2_mcu_fill_message, 0x3c87b206, "_gpl");
SYMBOL_CRC(mt76_connac_gen_ppe_thresh, 0x0a25337f, "_gpl");
SYMBOL_CRC(mt76_connac_pm_wake, 0xa9bd2fef, "_gpl");
SYMBOL_CRC(mt76_connac_power_save_sched, 0xc8848ced, "_gpl");
SYMBOL_CRC(mt76_connac_free_pending_tx_skbs, 0x1f54af6e, "_gpl");
SYMBOL_CRC(mt76_connac_pm_queue_skb, 0x629e6570, "_gpl");
SYMBOL_CRC(mt76_connac_pm_dequeue_skbs, 0xacd26de4, "_gpl");
SYMBOL_CRC(mt76_connac_tx_complete_skb, 0x1352d8eb, "_gpl");
SYMBOL_CRC(mt76_connac_write_hw_txp, 0x67cf5aa8, "_gpl");
SYMBOL_CRC(mt76_connac_txp_skb_unmap, 0xea59fa3d, "_gpl");
SYMBOL_CRC(mt76_connac_init_tx_queues, 0xc6292be6, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_tx_rate_val, 0xa40e8103, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_write_txwi, 0xee4f3de0, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_fill_txs, 0x9b41f0d1, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_add_txs_skb, 0xb5465957, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_decode_he_radiotap, 0xe4ec5693, "_gpl");
SYMBOL_CRC(mt76_connac2_reverse_frag0_hdr_trans, 0xb49f5d75, "_gpl");
SYMBOL_CRC(mt76_connac2_mac_fill_rx_rate, 0x4e6781f6, "_gpl");
SYMBOL_CRC(mt76_connac2_tx_check_aggr, 0xe2eac78d, "_gpl");
SYMBOL_CRC(mt76_connac2_txwi_free, 0xacfa7f71, "_gpl");
SYMBOL_CRC(mt76_connac2_tx_token_put, 0x6a236b68, "_gpl");
SYMBOL_CRC(mt76_connac3_mac_decode_he_radiotap, 0x8bb57194, "_gpl");
SYMBOL_CRC(mt76_connac3_mac_decode_eht_radiotap, 0x627021d4, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb86b3ca2, "mt76_tx_status_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0xcbc221d, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x80f7d434, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd1625678, "mt76_tx_status_skb_get" },
	{ 0xa2a21843, "mt76_tx_status_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62e32843, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf0403a7a, "request_firmware" },
	{ 0x594c7205, "mt76_get_rate" },
	{ 0xaf9e534c, "ieee80211_start_tx_ba_session" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfb1f865e, "ieee80211_beacon_loss" },
	{ 0xd1a73f0c, "__mt76_tx_complete_skb" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x30c996eb, "ieee80211_get_hdrlen_from_skb" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x69509299, "ieee80211_find_sta" },
	{ 0xb5333ebd, "mt76_calculate_default_rate" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x7545ffea, "mt76_tx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x480e4fba, "_dev_info" },
	{ 0x1432fb53, "mt76_init_queue" },
	{ 0xa02b4488, "mt76_tx_status_skb_done" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf7581011, "devm_kfree" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x737fa50, "skb_pull" },
	{ 0xdb86ed9a, "mt76_mcu_skb_send_and_get_msg" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4a9c073b, "skb_push" },
	{ 0xbcf4bf68, "ieee80211_wake_queues" },
	{ 0x364fbd8, "mt76_mcu_send_and_get_msg" },
	{ 0xeb6ced96, "ieee80211_iter_keys_rcu" },
	{ 0x6da45a1a, "__mt76_mcu_msg_alloc" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x5278ab68, "__mt76_mcu_send_firmware" },
	{ 0xc1f2bae, "ieee80211_stop_queues" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa283f5b1, "mt76_get_rate_power_limits" },
	{ 0xd6b7c767, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9b0618a8, "mt76_get_sar_power" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdaa53b61, "mt76_put_txwi" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x967bc846, "dev_kfree_skb_any_reason" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76,mac80211,cfg80211");


MODULE_INFO(srcversion, "0891702895FC04AF8FFA093");
