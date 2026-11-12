# Routine readings, voyager fglrx.o batch 4

Role statements for the located routines of `usr/cpu/sysgen/IP35boot/fglrx.o` taken every sixth from index 4 in address order. Each statement uses only the rendered facts: registers, calls, constants, branch targets and sizes. Routines whose render shows no body facts, or whose store target or return value never resolves, are left out.

- `fglrx_give_up_privdev` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x337c
  **Inferred.** Reads the word at +0x30 of its first argument. When that word is non-zero, the `jalr` at 0x33b8 passes the object to `firegl_release` with a0 set to 0. The branch at 0x33c0 tests that call's result, and the word at +0x30 is stored back at 0x33e4. The routine returns 0 at 0x33d8. The store at 0x33d0 targets the word at the fourth argument's +0x0, and neither stored value is recovered by the render.

- `__ke_spin_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99e8
  **Inferred.** Locks one entry of a table of 16-byte records that starts at +80 of its first argument, indexed by its second argument (`a0 + (a1 << 4) + 80`). The `jalr` at 0x9a14 calls `mutex_lock` with 0x19 as the second argument, and the routine returns that call's result at 0x9a20.

- `__ke_vmalloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d70
  **Inferred.** Allocates memory through `fglrx_irix_kern_malloc_node`. The `jalr` at 0x9d98 passes the second argument unchanged, passes 1 as the third, and passes the fourth argument unchanged. The routine returns that callee's pointer at 0x9da4.

- `__ke_verify_read_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e38
  **Established.** The routine is 8 bytes and its only effect is the return at 0x9e38 with v0 = 0. It makes no check, so every access passed to it is reported as valid.

- `__ke_memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f3c
  **Inferred.** Copies bytes with `bcopy`. The `jalr` at 0x9f68 passes the second argument as the source and the first as the destination, with the third argument as the length. The return at 0x9f7c hands back the first argument, the destination, as v0.

- `__ke_vm_page_prot_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa5c8
  **Inferred.** Writes one byte through its second argument at 0xa5c8 and returns that pointer at 0xa5cc. The byte value is not recovered by the render, so the content written is unknown.

- `sleep_on_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa964
  **Inferred.** Blocks the caller on a wait object. It calls `hold_nonfatalsig` at 0xa98c, then `sv_timedwait_sig_notify` at 0xa9d8 with the pointer loaded from `*a0` as the wait object, 0x1e as the timeout, and `a0+24` as the address waited on. It calls `release_nonfatalsig` at 0xa9fc and returns the wait's result at 0xaa10. The word at +0x10 of the first argument is read at 0xa9a8 and written at 0xa9b8, and its meaning is not recovered.

- `fglrx_irix_avl_init` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xacac
  **Inferred.** Initialises AVL trees by calling `avl_init_tree` twice, at 0xad00 and 0xad54. Both calls pass the same two symbols, `fglrx_irixMapLock` and `fglrx_QCL_zone`, so the render does not show whether they initialise one tree or two. The return at 0xad60 hands back the second call's result.

- `firegl_release_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x14230
  **Inferred.** Reads the pointer at `.data`+0x99c and tests the byte at offset 1 of the object it points to against 1 at 0x1425c. When that test fails, the `jalr` at 0x142a0 reports through `cmn_err` at severity 4, with a format string at `.rodata`+13048. The word at `.data`+0x99c is stored back at 0x14260, and the stored value is not recovered.

- `add_buffer_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x18da0
  **Inferred.** Links the buffer in its second argument into a queue owned by its first argument, under the lock at `[a0+96]`. It calls `__ke_down` at 0x18e08 on that lock and `__ke_up` at 0x18e44 to release it. The word at `a0+0xd0` is copied into `a1+0x68` at 0x18e10 to 0x18e14, and `a0+0xd0` is written again at 0x18e28, with the stored value not recovered. The word at +0x490 of the object at `[a0+72]` is read and written at 0x18e34 to 0x18e40, and the words at `a0+0x60` and `a0+0x48` are read at 0x18e0c, 0x18e1c and 0x18e48.

- `add_memlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f940
  **Inferred.** Adds a record to a list held at `a0+0xf0` of its first argument, with the same link-in pattern as `add_buffer_queue`: `a0+0xf0` is copied into `a1+0x18` at 0x1f9bc to 0x1f9c8, and `a0+0xf0` is written again at 0x1f9d0. It calls `__ke_down` at 0x1f9a8 and `__ke_up` at 0x1f9d4 on the lock at `[a0+96]`. Before the link step the `jalr` at 0x1f988 calls an unnamed routine at `.text`+128900 with a format string at `.rodata`+26400. The routine returns `__ke_up`'s result at 0x1f9e8.

- `fglrx_hp_invalid_hpId` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6ecc
  **Inferred.** Checks the pointer at `.data`+584 and the word it points to for zero (0x6ef4 and 0x6f04), and tests the sign of its second argument (a1) at 0x6f0c. On the failing path the `jalr` at 0x6f60 calls `printf` with a format string at `.rodata`+3408 and the entry arguments a0 and a1. The return at 0x6f20 gives one of -2, -1 or 0. The render does not map each return value to its path.
