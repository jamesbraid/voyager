# Routine readings, voyager fglrx.o batch 4

Role statements for the located routines of `usr/cpu/sysgen/IP35boot/fglrx.o` taken every sixth from index 4 in address order. Each statement uses only the rendered facts: registers, calls, constants, branch targets and sizes. Routines whose render shows no body facts, or whose store target or return value never resolves, are left out.

- `fglrx_give_up_privdev` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x337c
  **Inferred.** Reads the word at +0x30 of its first argument. When that word is non-zero, the `jalr` at 0x33b8 passes the object as the second argument to `firegl_release`, with a0 set to 0. The branch at 0x33c0 tests that call's result. A word is stored at +0x30 at 0x33e4, and another store at 0x33d0 writes at +0x0 of a base the render does not name. The routine returns 0 at 0x33d8. The stored values are not recovered by the render.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_spin_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99e8
  **Inferred.** Locks one entry of a table of 16-byte records that starts at +80 of its first argument, indexed by its second argument (`a0 + (a1 << 4) + 80`). The `jalr` at 0x9a14 calls `mutex_lock` with 0x19 as the second argument, and the routine returns that call's result at 0x9a20.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vmalloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d70
  **Inferred.** Allocates memory through `fglrx_irix_kern_malloc_node`. The `jalr` at 0x9d98 passes the second argument unchanged, passes 1 as the third, and passes the fourth argument unchanged. The routine returns that callee's pointer at 0x9da4.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_verify_read_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e38
  **Established.** The routine is 8 bytes and its only effect is the return at 0x9e38 with v0 = 0. It reads no argument and makes no check. Role (from name): a read-access verifier; whether 0 means valid is not shown by the facts.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f3c
  **Inferred.** Copies bytes with `bcopy`. The `jalr` at 0x9f68 passes the second argument as the source and the first as the destination, with the third argument as the length. The return at 0x9f7c hands back the first argument, the destination, as v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_page_prot_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa5c8
  **Inferred.** Writes one byte through its second argument at 0xa5c8 and returns that pointer at 0xa5cc. The byte value is not recovered by the render, so the content written is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `sleep_on_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa964
  **Inferred.** Role (from name): blocks the caller on a wait object. It calls `hold_nonfatalsig` at 0xa98c, then `sv_timedwait_sig_notify` at 0xa9d8 with the pointer loaded from `*a0` as its first argument, 0x1e as its second and `a0+24` as its third. It calls `release_nonfatalsig` at 0xa9fc and returns the wait's result at 0xaa10. A word at +0x10 of a base the render does not name is loaded at 0xa9a8 and a word is stored at +0x10 at 0xa9b8. The meaning of the arguments and of that word is not recovered.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_irix_avl_init` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xacac
  **Inferred.** Initialises AVL trees by calling `avl_init_tree` twice, at 0xad00 and 0xad54. Both calls pass the same two symbols, `fglrx_irixMapLock` and `fglrx_QCL_zone`, so the render does not show whether they initialise one tree or two. The return at 0xad60 hands back the second call's result.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_release_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x14230
  **Inferred.** Loads the word at `.data`+0x99c at 0x14248, adds 1 to it, and compares the sum with 1 at the branch at 0x1425c. A word is stored at `.data`+0x99c at 0x14260, and the stored value is not recovered by the render. When the compared values are equal, the branch is taken and the `jalr` at 0x142a0 calls `cmn_err` with 4 as its first argument and a `.rodata` pointer as its second. Otherwise the routine returns at 0x14264. The return value is one of 0x1 or the result of `cmn_err`.
  Reviewed: 2026-11-12 (sonnet)

- `add_buffer_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x18da0
  **Inferred.** Role (from name): adds a buffer to a queue. It calls an unnamed routine at `.text`+101448 at 0x18de8, then `__ke_down` at 0x18e08 and `__ke_up` at 0x18e44, both with a0 loaded from `[a0+96]`. The word at `a0+0xd0` is copied to `a1+0x68` at 0x18e10 to 0x18e14, and a word is stored at `a0+0xd0` at 0x18e28, with the stored value not recovered. The word at +0x490 of the object at `[a0+72]` is loaded at 0x18e34 and a word is stored there at 0x18e40. The words at `a0+0x60` and `a0+0x48` are loaded at 0x18e0c, 0x18e1c and 0x18e48. The routine returns `__ke_up`'s result at 0x18e58.
  Reviewed: 2026-11-12 (sonnet)

- `add_memlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f940
  **Inferred.** Role (from name): adds a record to a list. The `jalr` at 0x1f988 calls an unnamed routine at `.text`+128900 with a `.rodata` pointer as its first argument. It then calls `__ke_down` at 0x1f9a8 and `__ke_up` at 0x1f9d4, both with a0 loaded from `[a0+96]`. The word at `a0+0xf0` is copied to `a1+0x18` at 0x1f9bc to 0x1f9c8, and a word is stored at `a0+0xf0` at 0x1f9d0, with the stored value not recovered. It has the same shape as `add_buffer_queue` around its lock calls. The routine returns `__ke_up`'s result at 0x1f9e8.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hp_invalid_hpId` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6ecc
  **Inferred.** Loads the pointer at `.data`+584 and the word it points to, and branches to a common exit when either is zero (0x6ef4 and 0x6f04). It then branches on its second argument (a1) at 0x6f0c and again at 0x6f14, and both branches target 0x6f2c. The `jalr` at 0x6f60 calls `printf` with a `.rodata` pointer as its first argument and the entry values of a0 and a1 as its second and third. The return at 0x6f20 gives one of -2, -1 or 0. The render does not map each return value to its path.
  Reviewed: 2026-11-12 (sonnet)
