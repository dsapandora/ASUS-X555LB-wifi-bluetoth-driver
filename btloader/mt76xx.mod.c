#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc0554ace, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x8b5a2298, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9298a84f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa7a87e30, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x24e9e0d1, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xae6cf6c4, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x849c6601, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xff0fc1, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x14f4c1bb, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xca603206, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x847bd342, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xfce9c1cd, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb126a983, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xffe88fb5, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E8Dp763Ed*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Ed*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0E8Dp7662d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp7632d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0489pE069d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0489pE069d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0489pE080d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v0489pE080d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "0F8BC23AD4290355A0CADA0");
