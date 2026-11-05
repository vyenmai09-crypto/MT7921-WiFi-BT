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
	{ 0xb77b7931, "mt792x_poll_tx" },
	{ 0xf63e2ca2, "devm_request_threaded_irq" },
	{ 0x875733e1, "mt792x_dma_disable" },
	{ 0xc2f22874, "pci_alloc_irq_vectors" },
	{ 0xa49feb2e, "netif_napi_add_weight" },
	{ 0xc6292be6, "mt76_connac_init_tx_queues" },
	{ 0x387abd95, "mt76_tx_status_skb_add" },
	{ 0x65cf9638, "__pci_register_driver" },
	{ 0x67cf5aa8, "mt76_connac_write_hw_txp" },
	{ 0x60122e28, "mt7921_mcu_set_eeprom" },
	{ 0xdc458f11, "mt792x_dma_cleanup" },
	{ 0xe2964344, "__wake_up" },
	{ 0x1352d8eb, "mt76_connac_tx_complete_skb" },
	{ 0xc2a1281, "kthread_park" },
	{ 0xa0c50845, "mt7921_mac_init" },
	{ 0x8f4bb3fa, "pci_unregister_driver" },
	{ 0xefefd0d1, "mt76_alloc_device" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0x1f54af6e, "mt76_connac_free_pending_tx_skbs" },
	{ 0x1ff3e13e, "skb_queue_purge_reason" },
	{ 0x6644354d, "mt7921_register_device" },
	{ 0x249cff21, "__mt7921_start" },
	{ 0x7e21ce9f, "mt7921_run_firmware" },
	{ 0x8a792333, "mt792x_poll_rx" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x5821b560, "mt792x_wpdma_reset" },
	{ 0xc3aefec2, "devm_free_irq" },
	{ 0x7692322a, "__napi_schedule" },
	{ 0xe24e460d, "mt792xe_mcu_fw_pmctrl" },
	{ 0xaa5656d9, "mt76_pci_aspm_supported" },
	{ 0x8a1b2134, "mt76_pci_disable_aspm" },
	{ 0x480e4fba, "_dev_info" },
	{ 0xf7bf6eba, "mt76_free_device" },
	{ 0x2145ed57, "kthread_unpark" },
	{ 0xb8713bcf, "mt7921_ops" },
	{ 0x1432fb53, "mt76_init_queue" },
	{ 0x368a70df, "pcim_iomap_regions" },
	{ 0x9e027cf9, "devm_kmemdup" },
	{ 0xbd22e98c, "mt792x_irq_handler" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x7d00a136, "mt792x_dma_enable" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xf0bc61c2, "pci_read_config_word" },
	{ 0xa0db0aed, "napi_enable" },
	{ 0xd42e1564, "__mt792xe_mcu_drv_pmctrl" },
	{ 0xe6c0b289, "mt76_mmio_init" },
	{ 0xc7b66c59, "of_find_property" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb4b18f7, "mt76_unregister_device" },
	{ 0x24ff5bd, "mt7921_mac_sta_remove" },
	{ 0xbe8df612, "pci_set_master" },
	{ 0x3c87b206, "mt76_connac2_mcu_fill_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdaa60b06, "mt7921_mcu_parse_response" },
	{ 0x8a7f650d, "mt792x_wfsys_reset" },
	{ 0x77df9a6d, "mt76_token_consume" },
	{ 0x48390bfe, "mt792xe_mcu_drv_pmctrl" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3275073b, "mt76_txq_schedule_all" },
	{ 0xadfadfd8, "param_ops_bool" },
	{ 0x8e471e29, "mt792x_irq_tasklet" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0xe110074c, "mt7921_mac_sta_add" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6a236b68, "mt76_connac2_tx_token_put" },
	{ 0xd14f29d1, "mt792x_update_channel" },
	{ 0xe020a863, "mt792x_rx_poll_complete" },
	{ 0x6beb0ca1, "mt792x_get_mac80211_ops" },
	{ 0x49835eb3, "mt7921_queue_rx_skb" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0xd2e5f742, "dma_set_mask" },
	{ 0x404ed620, "pcim_iomap_table" },
	{ 0xee4f3de0, "mt76_connac2_mac_write_txwi" },
	{ 0xa7cf87b4, "mt7921_mac_sta_event" },
	{ 0xc6600a2c, "napi_schedule_prep" },
	{ 0xf92ae5b0, "mt7921_rx_check" },
	{ 0x63c607d1, "napi_disable" },
	{ 0x80e178d8, "pcim_enable_device" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0xc669b266, "mt7921_set_channel" },
	{ 0xcf424f72, "pci_write_config_word" },
	{ 0x2d6edd51, "mt76_dma_attach" },
	{ 0x51857462, "pci_free_irq_vectors" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt792x-lib,mt76-connac-lib,mt76,mt7921-common");

MODULE_ALIAS("pci:v000014C3d00007961sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007922sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000B48d00007922sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00000608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00000616sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007920sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "348749CCB92B0CB41345F2E");
