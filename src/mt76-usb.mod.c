#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(__mt76u_vendor_request, "_gpl", "");
KSYMTAB_FUNC(mt76u_vendor_request, "_gpl", "");
KSYMTAB_FUNC(___mt76u_rr, "_gpl", "");
KSYMTAB_FUNC(___mt76u_wr, "_gpl", "");
KSYMTAB_FUNC(mt76u_read_copy, "_gpl", "");
KSYMTAB_FUNC(mt76u_single_wr, "_gpl", "");
KSYMTAB_FUNC(mt76u_alloc_mcu_queue, "_gpl", "");
KSYMTAB_FUNC(mt76u_stop_rx, "_gpl", "");
KSYMTAB_FUNC(mt76u_resume_rx, "_gpl", "");
KSYMTAB_FUNC(mt76u_stop_tx, "_gpl", "");
KSYMTAB_FUNC(mt76u_queues_deinit, "_gpl", "");
KSYMTAB_FUNC(mt76u_alloc_queues, "_gpl", "");
KSYMTAB_FUNC(__mt76u_init, "_gpl", "");
KSYMTAB_FUNC(mt76u_init, "_gpl", "");

SYMBOL_CRC(__mt76u_vendor_request, 0xebf7a33f, "_gpl");
SYMBOL_CRC(mt76u_vendor_request, 0x71d53e87, "_gpl");
SYMBOL_CRC(___mt76u_rr, 0x4217fc1d, "_gpl");
SYMBOL_CRC(___mt76u_wr, 0x80c093fa, "_gpl");
SYMBOL_CRC(mt76u_read_copy, 0xd47a9a6b, "_gpl");
SYMBOL_CRC(mt76u_single_wr, 0xcb9961ed, "_gpl");
SYMBOL_CRC(mt76u_alloc_mcu_queue, 0x59c01bd9, "_gpl");
SYMBOL_CRC(mt76u_stop_rx, 0x6664a51a, "_gpl");
SYMBOL_CRC(mt76u_resume_rx, 0x9e3d3b3b, "_gpl");
SYMBOL_CRC(mt76u_stop_tx, 0x334a08ef, "_gpl");
SYMBOL_CRC(mt76u_queues_deinit, 0x6e2f60f8, "_gpl");
SYMBOL_CRC(mt76u_alloc_queues, 0x66a10ec7, "_gpl");
SYMBOL_CRC(__mt76u_init, 0xa699a0b8, "_gpl");
SYMBOL_CRC(mt76u_init, 0xad199930, "_gpl");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xad83872f, "usb_free_urb" },
	{ 0xf0a6418d, "devm_kmalloc" },
	{ 0xcbc221d, "skb_put" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x6f7f29a1, "page_pool_alloc_frag" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x10f4b85c, "trace_raw_output_prep" },
	{ 0x5f63619f, "__trace_trigger_soft_disabled" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3ea07da4, "trace_event_printf" },
	{ 0x7f3007e7, "trace_event_raw_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x12125b9c, "mt76_has_tx_pending" },
	{ 0xcdad2657, "page_pool_destroy" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0xf6ea85f8, "bpf_trace_run2" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc2a1281, "kthread_park" },
	{ 0x1a31f178, "sched_set_fifo_low" },
	{ 0x35f83303, "mt76_tx_status_check" },
	{ 0x8dbad84a, "wake_up_process" },
	{ 0xfeb81c39, "trace_event_buffer_commit" },
	{ 0xf5edea2e, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x9c41cbe, "__alloc_skb" },
	{ 0x18f773cf, "usb_submit_urb" },
	{ 0x476b165a, "sized_strscpy" },
	{ 0x2145ed57, "kthread_unpark" },
	{ 0xe9cee45d, "build_skb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2d2c902f, "perf_trace_buf_alloc" },
	{ 0xf846e36c, "perf_trace_run_bpf_submit" },
	{ 0xdb34963d, "_dev_err" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x4be416a0, "usb_control_msg" },
	{ 0x1c5fbf44, "usb_poison_urb" },
	{ 0x9c9c5b0d, "trace_event_reg" },
	{ 0x1fbb3637, "usb_unpoison_urb" },
	{ 0xc6634315, "mt76_ac_to_hwq" },
	{ 0x37a0e57a, "page_pool_put_unrefed_netmem" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x63814227, "kthread_stop" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0x3a10b662, "mt76_queue_tx_complete" },
	{ 0x7e210011, "kthread_create_on_node" },
	{ 0x715d6adf, "bpf_trace_run3" },
	{ 0x5856302a, "mt76_rx_poll_complete" },
	{ 0xaa9f2ab8, "trace_event_buffer_reserve" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xadfadfd8, "param_ops_bool" },
	{ 0x155addef, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1ec57b4f, "__mt76_worker_fn" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x4fb0097b, "usb_init_urb" },
	{ 0x6765f775, "skb_add_rx_frag_netmem" },
	{ 0x2dcc2dd7, "mt76_create_page_pool" },
	{ 0x85d120e3, "trace_handle_return" },
	{ 0x1396fa, "skb_to_sgvec" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x7cf6715, "module_layout" },
};

MODULE_INFO(depends, "mt76");


MODULE_INFO(srcversion, "E8A32C7700626D07CEAD066");
