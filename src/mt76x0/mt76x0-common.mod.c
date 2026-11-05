#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt76x0_chip_onoff, "_gpl", "");
KSYMTAB_FUNC(mt76x0_mac_stop, "_gpl", "");
KSYMTAB_FUNC(mt76x0_init_hardware, "_gpl", "");
KSYMTAB_FUNC(mt76x0_register_device, "_gpl", "");
KSYMTAB_FUNC(mt76x0_set_channel, "_gpl", "");
KSYMTAB_FUNC(mt76x0_set_sar_specs, "_gpl", "");
KSYMTAB_FUNC(mt76x0_config, "_gpl", "");
KSYMTAB_FUNC(mt76x0_phy_calibrate, "_gpl", "");

SYMBOL_CRC(mt76x0_chip_onoff, 0xa004c893, "_gpl");
SYMBOL_CRC(mt76x0_mac_stop, 0x9f4e1290, "_gpl");
SYMBOL_CRC(mt76x0_init_hardware, 0xfcff9c94, "_gpl");
SYMBOL_CRC(mt76x0_register_device, 0xae1a502b, "_gpl");
SYMBOL_CRC(mt76x0_set_channel, 0x6a4fbc2b, "_gpl");
SYMBOL_CRC(mt76x0_set_sar_specs, 0x4d10fdd5, "_gpl");
SYMBOL_CRC(mt76x0_config, 0xade52fc1, "_gpl");
SYMBOL_CRC(mt76x0_phy_calibrate, 0x4db62d53, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x4827f112, "mt76_update_channel" },
	{ 0x62fe9253, "mt76_init_sar_power" },
	{ 0xdd8396a0, "mt76x02_phy_adjust_vga_gain" },
	{ 0x5c7ddbf9, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x538f32f2, "cfg80211_chandef_valid" },
	{ 0x7aa946cf, "mt76x02_mac_shared_key_setup" },
	{ 0x82bdb768, "mt76x02_ext_pa_enabled" },
	{ 0xa9ada6ba, "mt76x02_get_efuse_data" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x480e4fba, "_dev_info" },
	{ 0xc3b5c9f7, "mt76x02_get_rx_gain" },
	{ 0x75fef85d, "mt76x02_add_rate_power_offset" },
	{ 0x6841219d, "ieee80211_queue_delayed_work" },
	{ 0x4a4c3114, "mt76_eeprom_init" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x8674b2d4, "mt76x02_mac_setaddr" },
	{ 0xddeb9e9c, "mt76_register_device" },
	{ 0xfdf8d6ea, "mt76x02_phy_set_bw" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8d57e3f3, "mt76x02_phy_set_band" },
	{ 0xfc108c33, "mt76x02_init_device" },
	{ 0x22d82095, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x4d2f3a20, "mt76x02_phy_set_rxpath" },
	{ 0x1295f8cd, "mt76x02_edcca_init" },
	{ 0xdc0f64c7, "mt76_eeprom_override" },
	{ 0xe640a3f9, "mt76x02_get_lna_gain" },
	{ 0xcb10f2a3, "mt76x02_init_debugfs" },
	{ 0xdcb764ad, "memset" },
	{ 0x2df2099, "_dev_warn" },
	{ 0x7c685ad7, "mt76x02_mac_cc_reset" },
	{ 0x4c97ef40, "mt76x02_init_agc_gain" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0x1de42e54, "mt76x02_dfs_init_params" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x17b81057, "mt76x02_config_mac_addr_list" },
	{ 0x9b0618a8, "mt76_get_sar_power" },
	{ 0x9bd4540c, "mt76x02_eeprom_copy" },
	{ 0xfe8734c9, "mt76x02_mcu_calibrate" },
	{ 0x518b8405, "mt76x02_mcu_function_select" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x3a03905a, "mt76x02_phy_set_txpower" },
	{ 0xad5d3ba8, "mt76x02_get_max_rate_power" },
	{ 0xde32260, "mt76x02_mac_wcid_setup" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0x350f6ce5, "tasklet_unlock_wait" },
	{ 0x3449e6b7, "mt76x02_phy_set_txdac" },
	{ 0x93c479bc, "mt76x02_limit_rate_power" },
	{ 0x9dfec4e3, "mt76_get_min_avg_rssi" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,cfg80211,mac80211");


MODULE_INFO(srcversion, "940B06A0913752CE94609B9");
