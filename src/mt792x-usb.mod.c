#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(mt792xu_rr, "_gpl", "");
KSYMTAB_FUNC(mt792xu_wr, "_gpl", "");
KSYMTAB_FUNC(mt792xu_rmw, "_gpl", "");
KSYMTAB_FUNC(mt792xu_copy, "_gpl", "");
KSYMTAB_FUNC(mt792xu_mcu_power_on, "_gpl", "");
KSYMTAB_FUNC(mt792xu_dma_init, "_gpl", "");
KSYMTAB_FUNC(mt792xu_wfsys_reset, "_gpl", "");
KSYMTAB_FUNC(mt792xu_init_reset, "_gpl", "");
KSYMTAB_FUNC(mt792xu_stop, "_gpl", "");
KSYMTAB_FUNC(mt792xu_disconnect, "_gpl", "");

SYMBOL_CRC(mt792xu_rr, 0xe769e61f, "_gpl");
SYMBOL_CRC(mt792xu_wr, 0xebc5390f, "_gpl");
SYMBOL_CRC(mt792xu_rmw, 0xf8759d9e, "_gpl");
SYMBOL_CRC(mt792xu_copy, 0xae399071, "_gpl");
SYMBOL_CRC(mt792xu_mcu_power_on, 0xcef52fe2, "_gpl");
SYMBOL_CRC(mt792xu_dma_init, 0xafeb05dc, "_gpl");
SYMBOL_CRC(mt792xu_wfsys_reset, 0x91ab1934, "_gpl");
SYMBOL_CRC(mt792xu_init_reset, 0x0025182c, "_gpl");
SYMBOL_CRC(mt792xu_stop, 0xa3cc1c05, "_gpl");
SYMBOL_CRC(mt792xu_disconnect, 0xbcab6728, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x241601c6, "mt792x_stop" },
	{ 0xebf7a33f, "__mt76u_vendor_request" },
	{ 0x80c093fa, "___mt76u_wr" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xe2964344, "__wake_up" },
	{ 0x9e3d3b3b, "mt76u_resume_rx" },
	{ 0x1ff3e13e, "skb_queue_purge_reason" },
	{ 0x80f7c87e, "usb_put_dev" },
	{ 0xf7bf6eba, "mt76_free_device" },
	{ 0x6e2f60f8, "mt76u_queues_deinit" },
	{ 0xdb34963d, "_dev_err" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xb4b18f7, "mt76_unregister_device" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x334a08ef, "mt76u_stop_tx" },
	{ 0x71d53e87, "mt76u_vendor_request" },
	{ 0x9e622ed1, "____mt76_poll_msec" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6664a51a, "mt76u_stop_rx" },
	{ 0x4217fc1d, "___mt76u_rr" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x5dfe3dc7, "__mt76_poll" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt792x-lib,mt76-usb,mt76");


MODULE_INFO(srcversion, "10CAD0D79160C0695B522EF");
