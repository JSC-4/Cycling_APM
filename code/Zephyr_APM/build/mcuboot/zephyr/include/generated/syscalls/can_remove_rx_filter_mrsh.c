/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/can.h>

extern void z_vrfy_can_remove_rx_filter(const struct device * dev, int filter_id);
uintptr_t z_mrsh_can_remove_rx_filter(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg2;	/* unused */
	(void) arg3;	/* unused */
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	union { uintptr_t x; const struct device * val; } parm0;
	parm0.x = arg0;
	union { uintptr_t x; int val; } parm1;
	parm1.x = arg1;
	z_vrfy_can_remove_rx_filter(parm0.val, parm1.val);
	_current->syscall_frame = NULL;
	return 0;
}

