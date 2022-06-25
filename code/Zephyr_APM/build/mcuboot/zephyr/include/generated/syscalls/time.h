/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_TIME_H
#define Z_INCLUDE_SYSCALLS_TIME_H


#include <tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#include <linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern int z_impl_clock_gettime(clockid_t clock_id, struct timespec * ts);

__pinned_func
static inline int clock_gettime(clockid_t clock_id, struct timespec * ts)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; clockid_t val; } parm0 = { .val = clock_id };
		union { uintptr_t x; struct timespec * val; } parm1 = { .val = ts };
		return (int) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_CLOCK_GETTIME);
	}
#endif
	compiler_barrier();
	return z_impl_clock_gettime(clock_id, ts);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define clock_gettime(clock_id, ts) ({ 	int retval; 	sys_port_trace_syscall_enter(K_SYSCALL_CLOCK_GETTIME, clock_gettime, clock_id, ts); 	retval = clock_gettime(clock_id, ts); 	sys_port_trace_syscall_exit(K_SYSCALL_CLOCK_GETTIME, clock_gettime, clock_id, ts, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
