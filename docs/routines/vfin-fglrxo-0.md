- `fglrx_invalid_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x31dc
  **Inferred.** Rejects an ioctl it does not handle. Its only work is a `cmn_err` call at 0x3218 with level argument 0x5 and a format string from `.rodata`, then it returns 0x16 (22, the Linux EINVAL value) at 0x3228.

- `fglrx_swapbuf_stat` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3b34
  **Inferred.** Reads a per-board 32-bit swap-buffer field and returns it through arg3. The halfword at the fixed address 0xffffffffffffc428 (load at 0x3b4c) selects a 32-byte record in the table that the pointer at `gfxinfo` (load at 0x3b50) points to. The field at offset 0x14 of that record is loaded at 0x3b5c and written back at 0x3b64, and a 32-bit word is stored to arg3 at 0x3b68. The routine returns 0 at 0x3b6c. The name suggests a swap counter; the render does not give the value written back at 0x3b64.

- `FGLRXinfo` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b00
  **Inferred.** Copies a block from the object at a0+224 (0xe0) out to the caller's buffer at a1 and reports the result. The `copyout` call at 0x4b38 supplies the source and destination. On success (branch at 0x4b40 to 0x4b54) it stores a 32-bit word to arg3 at 0x4b5c and returns 0. On failure it returns 0xe (14, the Linux EFAULT value).

- `usb_comp_update_tiles` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53e4
  **Inferred.** Stub for a USB companion tile update. The only call is `printf` at 0x5418 with a fixed format string from `.rodata`, and the routine returns -1 at 0x5428. The name suggests an operation this build does not support, which fits the constant failure return.

- `set_showconfig` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8f14
  **Inferred.** Parses the showconfig command-line option. `is_specified` is called on `arg_showconfig` at 0x8f48. If it returns nonzero, `atoi` converts the option string at 0x8f80 and a word at `.data+0x258` is loaded at 0x8fa4 and stored at 0x8fb0. If it returns zero, the branch at 0x8f50 jumps to 0x8fb4. The routine returns the `is_specified` or `atoi` result at 0x8fb8.

- `__ke_atomic_dec` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9948
  **Inferred.** Atomically decrements the 32-bit word at a0 and returns the new value. It uses a load-linked and store-conditional pair at 0x9948 and 0x9954. The branch-likely at 0x9958 retries the loop when the store-conditional fails, and the return at 0x9960 gives [a0]-1.

- `__ke_sys_munlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a9c
  **Inferred.** Thin wrapper around `unuseracc`. The call at 0x9abc passes arg0 and arg1 unchanged, the constant 0x110 as the third argument, and arg3 unchanged. The routine returns 0 at 0x9acc. The render shows no test of the `unuseracc` result, so the 0 does not depend on it on the path shown.

- `__ke_get_pci_device_info` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bc4
  **Inferred.** Copies four 16-bit fields between two records. A zero a0 takes the branch at 0x9bc4 to the return at 0x9bec, which gives -0x16 (EINVAL). Otherwise the halfwords at a0+0xc, +0xe, +0x10 and +0x12 are copied to a1+0, +0x2, +0x4 and +0x6 at 0x9bd0 through 0x9be8.

- `__ke_init_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e48
  **Inferred.** Logs a message and returns 0. The only call is `cmn_err` at 0x9e88 with level 4 and a format string from `__ke_LINUX_VERSION_CODE`. The return at 0x9e98 gives 0. The name suggests memory-map setup, but the render shows no memory-map state touched on this path.

- `__ke_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa130
  **Inferred.** Logs a message and returns 0. The only call is `printf` at 0xa168 with a format string from `__ke_LINUX_VERSION_CODE`, and the return at 0xa178 gives 0. The render shows no cache operation on this path.

- `__ke_request_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4d8
  **Inferred.** Does nothing and returns 1. The routine is 8 bytes and the render shows no call and no memory access, only the return at 0xa4d8 with v0 = 1. The name suggests an interrupt request, but the body does not register a handler.

- `__ke_vm_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa50c
  **Inferred.** Returns the 64-bit word at offset 0 of its argument. The doubleword load at 0xa510 is in the delay slot of the return at 0xa50c, so the returned value is [a0]. The name suggests the start address of a memory region, which matches the field read.

- `memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa720
  **Established.** Copies memory through `bcopy` and returns the destination. The call at 0xa74c passes arg1 as the source (bcopy's first argument) and arg0 as the destination (bcopy's second), with arg2 as the length. The routine returns a0 at 0xa760. The public BSD manual defines `bcopy` as copying from its first argument to its second.

- `fglrx_avl_mem_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac7c
  **Inferred.** Returns the 64-bit field at offset 0x28 (40) of its argument. The routine is 8 bytes: the doubleword load at 0xac80 is in the delay slot of the return at 0xac7c. The name suggests the start of available memory, but the render does not show that field's use.

- `__ke_pci_free_consistent` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb9f8
  **Inferred.** Forwards a free request to `fglrx_irix_kern_freemap`. The call at 0xba18 passes arg2 as its first argument, arg1 as its second, and arg2 and arg3 unchanged after that, and the routine returns that call's result at 0xba24. The name suggests freeing consistent PCI memory, but the render shows no PCI-side work in this routine.

- `firegl_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Checks a swap-ready state word and logs when the word is in the wrong state. It loads the word at `.data+0x9a0` (load at 0x142c8, store at 0x142e0). The branch at 0x142dc compares the word plus one with 1. On the mismatch path it calls `cmn_err` at 0x14320 with level 4 and a format string from `.rodata`. The common return at 0x142e4 gives 1 or the `cmn_err` result. The render does not show which branch performs the store at 0x142e0.

- `firegl_get_lockid` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17484
  **Inferred.** Returns a 32-bit identifier to user space. It finds the per-file private record with `__ke_get_file_priv` at 0x174ac and reads the word at offset 28 (0x1c) of that record at 0x174e4. A logging call at 0x174f0 sits between the two. `__ke_copy_to_user` copies 4 bytes from sp-32 to arg3 at 0x17518. A zero copy result branches to 0x17538, and the routine returns 0 or -14 (EFAULT) at 0x17530. The name and the 4-byte copy suggest a lock identifier.

- `firegl_aperture_slot_size_in_elements` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b8f0
  **Inferred.** Returns the 32-bit field at offset 0x20 (32) of its argument. The routine is 8 bytes: the word load at 0x1b8f4 is in the delay slot of the return at 0x1b8f0. The name suggests the aperture slot size in elements, which matches the field read.

- `firegl_set_cap_ipc_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20344
  **Inferred.** Checks and raises a capability for the caller, then copies a 4-byte result to user space. It reads the effective capability set with `__ke_get_cap_effective` at 0x20368 and tests capability number 1 with `__ke_capable` at 0x2038c. It copies 4 bytes to arg3 with `__ke_copy_to_user` at 0x203b8, and raises capability number 1 in the effective set with `__ke_cap_effective_raise` at 0x203f8. The routine returns 0 or -14 (EFAULT) at 0x203d0. The name suggests the IPC_LOCK capability. The render does not show which capability branch leads to the raise call, so the order of these steps is not settled.
