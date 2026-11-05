#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76x2_read_rx_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_rate_power, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_power_info, "_gpl", "");
KSYMTAB_FUNC(mt76x2_get_temp_comp, "_gpl", "");
KSYMTAB_FUNC(mt76x2_eeprom_init, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mac_stop, "_gpl", "");
KSYMTAB_FUNC(mt76x2_set_sar_specs, "_gpl", "");
KSYMTAB_FUNC(mt76x2_reset_wlan, "_gpl", "");
KSYMTAB_FUNC(mt76_write_mac_initvals, "_gpl", "");
KSYMTAB_FUNC(mt76x2_init_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x2_apply_gain_adj, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_set_txpower_regs, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_set_txpower, "_gpl", "");
KSYMTAB_FUNC(mt76x2_configure_tx_delay, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_tssi_compensate, "_gpl", "");
KSYMTAB_FUNC(mt76x2_phy_update_channel_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_load_cr, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_init_gain, "_gpl", "");
KSYMTAB_FUNC(mt76x2_mcu_tssi_comp, "_gpl", "");

SYMBOL_CRC(mt76x2_read_rx_gain, 0x5e056485, "_gpl");
SYMBOL_CRC(mt76x2_get_rate_power, 0x98ff0ee0, "_gpl");
SYMBOL_CRC(mt76x2_get_power_info, 0xaa731082, "_gpl");
SYMBOL_CRC(mt76x2_get_temp_comp, 0x89bcf233, "_gpl");
SYMBOL_CRC(mt76x2_eeprom_init, 0xa415dd25, "_gpl");
SYMBOL_CRC(mt76x2_mac_stop, 0x50864a48, "_gpl");
SYMBOL_CRC(mt76x2_set_sar_specs, 0xbff0e709, "_gpl");
SYMBOL_CRC(mt76x2_reset_wlan, 0x5d1413c9, "_gpl");
SYMBOL_CRC(mt76_write_mac_initvals, 0x93c7d7e5, "_gpl");
SYMBOL_CRC(mt76x2_init_txpower, 0x65847577, "_gpl");
SYMBOL_CRC(mt76x2_apply_gain_adj, 0x5750d0a7, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower_regs, 0x56465694, "_gpl");
SYMBOL_CRC(mt76x2_phy_set_txpower, 0x40d9cab3, "_gpl");
SYMBOL_CRC(mt76x2_configure_tx_delay, 0x5dbde307, "_gpl");
SYMBOL_CRC(mt76x2_phy_tssi_compensate, 0xf310fac2, "_gpl");
SYMBOL_CRC(mt76x2_phy_update_channel_gain, 0x2c958f9f, "_gpl");
SYMBOL_CRC(mt76x2_mcu_set_channel, 0x53cd5062, "_gpl");
SYMBOL_CRC(mt76x2_mcu_load_cr, 0x9448e22f, "_gpl");
SYMBOL_CRC(mt76x2_mcu_init_gain, 0x6879ddd0, "_gpl");
SYMBOL_CRC(mt76x2_mcu_tssi_comp, 0x3e388c96, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x62fe9253, "mt76_init_sar_power" },
	{ 0xdd8396a0, "mt76x02_phy_adjust_vga_gain" },
	{ 0x5c7ddbf9, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x538f32f2, "cfg80211_chandef_valid" },
	{ 0x82bdb768, "mt76x02_ext_pa_enabled" },
	{ 0xa9ada6ba, "mt76x02_get_efuse_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xc3b5c9f7, "mt76x02_get_rx_gain" },
	{ 0x75fef85d, "mt76x02_add_rate_power_offset" },
	{ 0x4a4c3114, "mt76_eeprom_init" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x22d82095, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x364fbd8, "mt76_mcu_send_and_get_msg" },
	{ 0xc7b66c59, "of_find_property" },
	{ 0xdc0f64c7, "mt76_eeprom_override" },
	{ 0xe640a3f9, "mt76x02_get_lna_gain" },
	{ 0xdcb764ad, "memset" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9b0618a8, "mt76_get_sar_power" },
	{ 0x9bd4540c, "mt76x02_eeprom_copy" },
	{ 0xfe8734c9, "mt76x02_mcu_calibrate" },
	{ 0x3a03905a, "mt76x02_phy_set_txpower" },
	{ 0xad5d3ba8, "mt76x02_get_max_rate_power" },
	{ 0x93c479bc, "mt76x02_limit_rate_power" },
	{ 0x9dfec4e3, "mt76_get_min_avg_rssi" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211");


MODULE_INFO(srcversion, "0C7A594B9C9DD662AE3789D");
