# Routine readings, voyager fglrx.o IP35boot, batch 5

Role statements for the fglrx.o routines that the inventory does not yet show as understood, taken in address order at every sixth routine from index 5. Each statement uses only the rendered facts: the calls and their argument registers, the branch targets, the memory accesses and the return value. Where the render leaves an input, a store value or a branch condition unresolved, the statement says so rather than filling it in.

- `fglrx_dma_flush` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x39f0
  **Inferred.** The `jalr` at 0x3a20 calls `copyin` with the user address from a2, a stack buffer at sp-32 and a length of 0x10, so the routine pulls a 16-byte record from user space. A 4-byte store through a3 at 0x3a34 follows, and the return at 0x3a3c yields 0. The render does not show whether the copyin result controls the store or the return, so any error path is unresolved.

- `fglrx_usb_comp_update_tiles` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53e4
  **Inferred.** The body makes one `jalr` to `printf` at 0x5418, passing an address in .rodata at offset 3408 as the format, and returns -1 at 0x5428. Nothing else in the render touches memory or the arguments, so the routine reports a message and fails. The render lists the same address for two printf argument registers, so the format string itself is not confirmed.

- `fglrx_hp_qry_bestattrib` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8374
  **Inferred.** The only memory operation is a 4-byte `sw` at 0x8374 into the word at a3, the fourth argument, at offset 0. The return at 0x8378 yields 0. The render does not show which register holds the stored word, so the routine's output is known only as the word it writes and the zero it returns.

- `__ke_atomic_inc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9928
  **Established.** This is a load-linked, store-conditional loop on the 32-bit word at a0. The `ll` at 0x9928 loads the word, the `sc` at 0x9934 stores the incremented value back, and the `beql` at 0x9938 branches to 0x9928 when the `sc` result in v0 is 0, meaning the store failed and must be retried. The return at 0x9940 yields the incremented value, [a0]+1. The routine adds one to a 32-bit word atomically and returns the new count.

- `__ke_spin_unlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a28
  **Inferred.** The `jalr` at 0x9a50 calls `mutex_unlock` with a0 set to a0 + (a1 << 4) + 80. The routine therefore indexes a table of 16-byte entries that starts 80 bytes into the object at a0, selects the entry numbered by a1, and releases its mutex. The return at 0x9a5c passes back the result of `mutex_unlock`.

- `__ke_verify_area` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9b74
  **Inferred.** One `jalr` at 0x9bac calls `printf` with an argument taken from the symbol `__ke_LINUX_VERSION_CODE`, and the return at 0x9bbc yields 0. The render shows no comparison of the requested area against anything, so the routine prints a message and reports success without checking the area.

- `__ke_verify_write_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e40
  **Inferred.** The body is 8 bytes, a single return at 0x9e40 with v0 = 0 and no loads, stores, calls or branches. It reports every access as permitted.

- `__ke_outw` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa348
  **Inferred.** The routine returns at 0xa3b8 without touching memory when the 32-bit global GfxBoardLimit is zero (the `beq` at 0xa370). Otherwise it reads the table of 8-byte pointers at fglrx_boards (the `ld` at 0xa384 and 0xa3b4) and loops back to 0xa388 while the index in a3 is below GfxBoardLimit (the `bne` at 0xa3b0). Inside the loop the 2-byte `sh` at 0xa3a0 writes a halfword. The render does not resolve the address that store reaches, so the board or register it targets is unknown. The halfword width matches a 16-bit port write, and that is the only support for the name.

- `__ke_vma_file_priv` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa500
  **Inferred.** Two dependent loads: the 8-byte pointer at +0x20 of a0 is followed (the `ld` at 0xa500), and the 8-byte word at +0x8 of the object it points to is returned (the `ld` at 0xa508 and the return at 0xa504). The render shows no null test on the intermediate pointer, so a null field at +0x20 would fault.

- `fglrx_add_thread_exit_callback` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xabd4
  **Inferred.** The object at a0 is reached through its first word, and the 4-byte field at +0xdc of that object is read (the `lw` at 0xabdc). When that field is zero, the `beq` at 0xabe8 skips to the return at 0xac74. Otherwise the routine calls `curproc` at 0xac08, passes its result to `proc_pid` at 0xac28, and calls `add_exit_callback` at 0xac68 with that pid, the value 1, the callback `fglrx_thread_exit` and the entry argument a0 as the callback's argument. The return gives 0 on the skip path and `add_exit_callback`'s result on the other.

- `fglrx_irix_kern_findmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb624
  **Inferred.** The routine brackets a lookup with `mraccessf` at 0xb66c and `mrunlock` at 0xb6b4, both on the lock `fglrx_irixMapLock` (with a1 of 0 for `mraccessf`). Between them, `avl_find` at 0xb690 searches that lock's tree for the key a0. The 8-byte word at +0x48 of the node it returns is loaded at 0xb6b0 and returned at 0xb6cc. The render shows no null test on the value `avl_find` returns, so a key that is not in the tree would read through a null pointer.

- `firegl_aperture_size` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b034
  **Inferred.** The object at a0 is reached through its first word, and that object's lock is taken with `__ke_down` at 0x1b09c and released with `__ke_up` at 0x1b0c0. A helper at .text+108452 is called at 0x1b07c before the lock, with a0 pointing into .rodata, and the render does not name it. The 4-byte field at +0x18 of a0 is read at 0x1b0bc and returned at 0x1b0d8. The render does not show what that field holds, so the value's meaning is unknown.

- `firegl_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x202d4
  **Inferred.** The routine calls a helper at .text+128900 at 0x2030c with a .rodata address as its first argument, then calls `__ke_flush_cache` at 0x2032c with arguments the render does not resolve, and returns 0 at 0x2033c. The render does not show what the helper does, and no branch appears between the calls.
