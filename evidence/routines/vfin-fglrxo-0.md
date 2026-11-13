- `fglrx_invalid_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x31dc
  **Inferred.** Role (from name): handler for an ioctl that is not handled. Its only call is `cmn_err` at 0x3218 with level argument 0x5 and a format string from `.rodata`, then it returns 0x16 (22, the Linux EINVAL value) at 0x3228.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_swapbuf_stat` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3b34
  **Inferred.** Role (from name): reports a swap-buffer statistic. It loads a halfword at 0x3b4c and a doubleword at 0x3b50 (the entry names `gfxinfo` as the source of the latter), loads a word at offset 0x14 at 0x3b5c and stores a word at offset 0x14 at 0x3b64, then stores a word at offset 0 at 0x3b68 and returns 0 at 0x3b6c. The render does not give the base registers of these accesses, the value stored at either offset, or which argument receives the store at 0x3b68.
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXinfo` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b00
  **Inferred.** Copies a block out with `copyout` at 0x4b38, whose first argument is a0+224 (0xe0) and whose second is a1 (arg1); the length is not shown. A zero `copyout` result takes the branch at 0x4b40 to 0x4b54, where a 32-bit word is stored at offset 0 of a base register the render does not name (0x4b5c). The return at 0x4b4c gives 0 or 0xe (14, the Linux EFAULT value). The render does not show which path returns which value, though 0xe is on the path without the store.
  Reviewed: 2026-11-12 (sonnet)

- `usb_comp_update_tiles` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53e4
  **Inferred.** Role (from name): update tiles for a USB companion. The only call is `printf` at 0x5418 with a format string from `.rodata`, and the routine returns -1 at 0x5428. The constant -1 return is consistent with an operation this build does not support, but the render does not show that.
  Reviewed: 2026-11-12 (sonnet)

- `set_showconfig` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8f14
  **Inferred.** Role (from name): set the showconfig option. `is_specified` is called with `arg_showconfig` at 0x8f48. A zero result takes the branch at 0x8f50 to 0x8fb4. Otherwise `atoi` is called at 0x8f80, a word at offset 0x258 is loaded at 0x8fa4 and a word at offset 0x258 is stored at 0x8fb0. The render does not show the base register of those two accesses, the value stored, or what `atoi` converts. The routine returns the `is_specified` or `atoi` result at 0x8fb8.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_dec` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9948
  **Inferred.** Atomically decrements the 32-bit word at a0 and returns the new value. It uses a load-linked and store-conditional pair at 0x9948 and 0x9954. The branch-likely at 0x9958 retries the loop when the store-conditional fails, and the return at 0x9960 gives [a0]-1.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_sys_munlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a9c
  **Inferred.** Thin wrapper around `unuseracc`. The call at 0x9abc passes arg0 and arg1 unchanged, the constant 0x110 as the third argument, and arg3 unchanged. The routine returns 0 at 0x9acc. The render shows no test of the `unuseracc` result, so the 0 does not depend on it on the path shown.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_get_pci_device_info` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bc4
  **Inferred.** Copies four 16-bit fields between two records. A zero a0 takes the branch at 0x9bc4 to the return at 0x9bec, which gives -0x16 (EINVAL). Otherwise the halfwords at a0+0xc, +0xe, +0x10 and +0x12 are copied to a1+0, +0x2, +0x4 and +0x6 at 0x9bd0 through 0x9be8.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_init_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e48
  **Inferred.** Logs a message and returns 0. The only call is `cmn_err` at 0x9e88 with level 4 and a format string from `__ke_LINUX_VERSION_CODE`. The return at 0x9e98 gives 0. The name suggests memory-map setup, but the render shows no memory-map state touched on this path.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa130
  **Inferred.** Logs a message and returns 0. The only call is `printf` at 0xa168 with a format string from `__ke_LINUX_VERSION_CODE`, and the return at 0xa178 gives 0. The render shows no cache operation on this path.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_request_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4d8
  **Inferred.** Does nothing and returns 1. The routine is 8 bytes and the render shows no call and no memory access, only the return at 0xa4d8 with v0 = 1. The name suggests an interrupt request, but the body does not register a handler.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa50c
  **Inferred.** Returns the 64-bit word at offset 0 of its argument. The doubleword load at 0xa510 is in the delay slot of the return at 0xa50c, so the returned value is [a0]. The name suggests the start address of a memory region, which matches the field read.
  Reviewed: 2026-11-12 (sonnet)

- `memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa720
  **Established.** Copies memory through `bcopy` and returns the destination. The call at 0xa74c passes arg1 as the source (bcopy's first argument) and arg0 as the destination (bcopy's second), with arg2 as the length. The routine returns a0 at 0xa760. The public BSD manual defines `bcopy` as copying from its first argument to its second.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_avl_mem_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac7c
  **Inferred.** Returns the 64-bit field at offset 0x28 (40) of its argument. The routine is 8 bytes: the doubleword load at 0xac80 is in the delay slot of the return at 0xac7c. The name suggests the start of available memory, but the render does not show that field's use.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_free_consistent` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb9f8
  **Inferred.** Forwards a free request to `fglrx_irix_kern_freemap`. The call at 0xba18 passes arg2 as its first argument, arg1 as its second, and arg2 and arg3 unchanged after that, and the routine returns that call's result at 0xba24. The name suggests freeing consistent PCI memory, but the render shows no PCI-side work in this routine.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Role (from name): signal that a swap is ready. It loads the word at `.data+0x9a0` at 0x142c8 and stores a word at the same offset at 0x142e0. The branch at 0x142dc is taken when that word plus one equals 1, to 0x142ec. When it is not taken, the routine calls `cmn_err` at 0x14320 with level 4 and a format string from `.rodata`. The common return at 0x142e4 gives 1 or the `cmn_err` result. The render does not show which path performs the store at 0x142e0 or what value is stored.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_get_lockid` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17484
  **Inferred.** Role (from name): return a lock identifier to user space. It calls `__ke_get_file_priv` at 0x174ac with arg1 and loads a word at offset 28 (0x1c) of the returned pointer at 0x174e4. A call to `.text+90428` at 0x174f0 takes a `.rodata` string and that word as arguments. `__ke_copy_to_user` at 0x17518 copies 4 bytes from sp-32 to arg3. A zero copy result takes the branch at 0x17520 to 0x17538, and the routine returns 0 or -14 (EFAULT) at 0x17530. The render does not show what is stored at sp-32.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_aperture_slot_size_in_elements` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b8f0
  **Inferred.** Returns the 32-bit field at offset 0x20 (32) of its argument. The routine is 8 bytes: the word load at 0x1b8f4 is in the delay slot of the return at 0x1b8f0. The name suggests the aperture slot size in elements, which matches the field read.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_set_cap_ipc_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20344
  **Inferred.** Role (from name): set the IPC_LOCK capability for the caller. It calls `__ke_get_cap_effective` at 0x20368 and `__ke_capable` with 0x1 at 0x2038c, and a zero `__ke_capable` result takes the branch at 0x20394 to 0x203e0. It copies 4 bytes to arg3 with `__ke_copy_to_user` at 0x203b8, and calls `__ke_cap_effective_raise` with 0x1 at 0x203f8. The routine returns 0 or -14 (EFAULT) at 0x203d0. The render does not show which path leads to the raise call or the order of the copy and the raise, so that order is not settled.
  Reviewed: 2026-11-12 (sonnet)
