/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/rand32.h>

extern uint32_t z_vrfy_sys_rand32_get();
uintptr_t z_mrsh_sys_rand32_get(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg0;	/* unused */
	(void) arg1;	/* unused */
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	uint32_t ret = z_vrfy_sys_rand32_get();
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}

