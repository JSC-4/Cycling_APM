/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/kernel.h>

extern size_t z_vrfy_k_pipe_read_avail(struct k_pipe * pipe);
uintptr_t z_mrsh_k_pipe_read_avail(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg1;	/* unused */
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; struct k_pipe * val; } parm0;
	parm0.x = arg0;
	size_t ret = z_vrfy_k_pipe_read_avail(parm0.val);
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}

