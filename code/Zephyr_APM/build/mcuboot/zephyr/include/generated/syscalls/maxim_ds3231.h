/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_MAXIM_DS3231_H
#define Z_INCLUDE_SYSCALLS_MAXIM_DS3231_H


#include <tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#include <linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_maxim_ds3231_req_syncpoint(const struct device * dev, struct k_poll_signal * signal);

__pinned_func
static inline int maxim_ds3231_req_syncpoint(const struct device * dev, struct k_poll_signal * signal)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct k_poll_signal * val; } parm1 = { .val = signal };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT);
	}
#endif
	compiler_barrier();
	return z_impl_maxim_ds3231_req_syncpoint(dev, signal);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define maxim_ds3231_req_syncpoint(dev, signal) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT, maxim_ds3231_req_syncpoint, dev, signal); 	retval = maxim_ds3231_req_syncpoint(dev, signal); 	sys_port_trace_syscall_exit(K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT, maxim_ds3231_req_syncpoint, dev, signal, retval); 	retval; })
#endif
#endif


extern int z_impl_maxim_ds3231_get_syncpoint(const struct device * dev, struct maxim_ds3231_syncpoint * syncpoint);

__pinned_func
static inline int maxim_ds3231_get_syncpoint(const struct device * dev, struct maxim_ds3231_syncpoint * syncpoint)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; const struct device * val; } parm0 = { .val = dev };
		union { uintptr_t x; struct maxim_ds3231_syncpoint * val; } parm1 = { .val = syncpoint };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT);
	}
#endif
	compiler_barrier();
	return z_impl_maxim_ds3231_get_syncpoint(dev, syncpoint);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define maxim_ds3231_get_syncpoint(dev, syncpoint) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT, maxim_ds3231_get_syncpoint, dev, syncpoint); 	retval = maxim_ds3231_get_syncpoint(dev, syncpoint); 	sys_port_trace_syscall_exit(K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT, maxim_ds3231_get_syncpoint, dev, syncpoint, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
