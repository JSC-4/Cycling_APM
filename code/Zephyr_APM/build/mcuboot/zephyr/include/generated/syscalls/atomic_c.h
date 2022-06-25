/* auto-generated by gen_syscalls.py, don't edit */

#ifndef Z_INCLUDE_SYSCALLS_ATOMIC_C_H
#define Z_INCLUDE_SYSCALLS_ATOMIC_C_H


#include <tracing/tracing_syscall.h>

#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#include <linker/sections.h>


#ifdef __cplusplus
extern "C" {
#endif

extern bool z_impl_atomic_cas(atomic_t * target, atomic_val_t old_value, atomic_val_t new_value);

__pinned_func
static inline bool atomic_cas(atomic_t * target, atomic_val_t old_value, atomic_val_t new_value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = old_value };
		union { uintptr_t x; atomic_val_t val; } parm2 = { .val = new_value };
		return (bool) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_ATOMIC_CAS);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_cas(target, old_value, new_value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_cas(target, old_value, new_value) ({ 	bool retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_CAS, atomic_cas, target, old_value, new_value); 	retval = atomic_cas(target, old_value, new_value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_CAS, atomic_cas, target, old_value, new_value, retval); 	retval; })
#endif
#endif


extern bool z_impl_atomic_ptr_cas(atomic_ptr_t * target, atomic_ptr_val_t old_value, atomic_ptr_val_t new_value);

__pinned_func
static inline bool atomic_ptr_cas(atomic_ptr_t * target, atomic_ptr_val_t old_value, atomic_ptr_val_t new_value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_ptr_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_ptr_val_t val; } parm1 = { .val = old_value };
		union { uintptr_t x; atomic_ptr_val_t val; } parm2 = { .val = new_value };
		return (bool) arch_syscall_invoke3(parm0.x, parm1.x, parm2.x, K_SYSCALL_ATOMIC_PTR_CAS);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_ptr_cas(target, old_value, new_value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_ptr_cas(target, old_value, new_value) ({ 	bool retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_PTR_CAS, atomic_ptr_cas, target, old_value, new_value); 	retval = atomic_ptr_cas(target, old_value, new_value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_PTR_CAS, atomic_ptr_cas, target, old_value, new_value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_add(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_add(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_ADD);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_add(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_add(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_ADD, atomic_add, target, value); 	retval = atomic_add(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_ADD, atomic_add, target, value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_sub(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_sub(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_SUB);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_sub(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_sub(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_SUB, atomic_sub, target, value); 	retval = atomic_sub(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_SUB, atomic_sub, target, value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_set(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_set(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_SET);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_set(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_set(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_SET, atomic_set, target, value); 	retval = atomic_set(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_SET, atomic_set, target, value, retval); 	retval; })
#endif
#endif


extern atomic_ptr_val_t z_impl_atomic_ptr_set(atomic_ptr_t * target, atomic_ptr_val_t value);

__pinned_func
static inline atomic_ptr_val_t atomic_ptr_set(atomic_ptr_t * target, atomic_ptr_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_ptr_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_ptr_val_t val; } parm1 = { .val = value };
		return (atomic_ptr_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_PTR_SET);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_ptr_set(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_ptr_set(target, value) ({ 	atomic_ptr_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_PTR_SET, atomic_ptr_set, target, value); 	retval = atomic_ptr_set(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_PTR_SET, atomic_ptr_set, target, value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_or(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_or(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_OR);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_or(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_or(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_OR, atomic_or, target, value); 	retval = atomic_or(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_OR, atomic_or, target, value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_xor(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_xor(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_XOR);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_xor(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_xor(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_XOR, atomic_xor, target, value); 	retval = atomic_xor(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_XOR, atomic_xor, target, value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_and(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_and(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_AND);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_and(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_and(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_AND, atomic_and, target, value); 	retval = atomic_and(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_AND, atomic_and, target, value, retval); 	retval; })
#endif
#endif


extern atomic_val_t z_impl_atomic_nand(atomic_t * target, atomic_val_t value);

__pinned_func
static inline atomic_val_t atomic_nand(atomic_t * target, atomic_val_t value)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		union { uintptr_t x; atomic_t * val; } parm0 = { .val = target };
		union { uintptr_t x; atomic_val_t val; } parm1 = { .val = value };
		return (atomic_val_t) arch_syscall_invoke2(parm0.x, parm1.x, K_SYSCALL_ATOMIC_NAND);
	}
#endif
	compiler_barrier();
	return z_impl_atomic_nand(target, value);
}

#if (CONFIG_TRACING_SYSCALL == 1)
#ifndef DISABLE_SYSCALL_TRACING

#define atomic_nand(target, value) ({ 	atomic_val_t retval; 	sys_port_trace_syscall_enter(K_SYSCALL_ATOMIC_NAND, atomic_nand, target, value); 	retval = atomic_nand(target, value); 	sys_port_trace_syscall_exit(K_SYSCALL_ATOMIC_NAND, atomic_nand, target, value, retval); 	retval; })
#endif
#endif


#ifdef __cplusplus
}
#endif

#endif
#endif /* include guard */
