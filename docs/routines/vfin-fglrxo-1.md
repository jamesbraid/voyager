# Routine readings for IP35boot fglrx.o, sample 1

Role statements for routines in `usr/cpu/sysgen/IP35boot/fglrx.o` that the inventory does not yet show
as understood. The routines are taken in address order, every sixth one from the second. Each statement
comes from the rendered facts: loads and stores, calls, branch targets and return values. Names come from
the binary's symbols and are only a hint. Where the facts do not show what a routine does, the entry says
so. Four routines in the sample had no return value or call that the render could resolve, so they are
left out.

- `fglrx_test_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3230
  **Established.** An 8-byte routine that returns 0 and makes no calls, loads or stores. It does nothing
  beyond reporting success. The render does not show which request codes reach it.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_add_exit_callback` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x45a4
  **Inferred.** Calls `curproc` at 0x45d0, then `proc_pid` at 0x45f4 with that result in a0, then
  `add_exit_callback` at 0x4634 with the pid in a0, the constant 1 in a1 and `fglrx_exit` in a2. It stores a
  4-byte word at offset 0xdc (store at 0x464c) before returning the result of `add_exit_callback`. The facts do
  not show which register the store's base comes from or the value stored.
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXinit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b68
  **Established.** An 8-byte routine that returns -1 and makes no calls, loads or stores. The facts do not
  show what the caller does with the value.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_usb_comp_readwrite_register` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x5430
  **Inferred.** Passes one fixed string to `printf` at 0x5468 and returns -1. It makes no memory access
  besides that call. Role (from name): a USB component register read/write path; the facts show only the
  print and the -1 return, so whether this build implements it is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hpipe_add_log` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8fc0
  **Inferred.** Loads the word at .data+0x260 (0x8fd8), compares the loaded word plus one with 1 at 0x8fec,
  and stores to the same word at 0x8ff0. The branch at 0x8fec is taken when that sum equals 1. The routine
  calls `cmn_err` at 0x9030 with level 4 and the string at .rodata+3408 on one path and returns on the other.
  The facts do not show the value stored at 0x8ff0 or which side of the branch reaches the call, so they do
  not establish what the word counts.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_add` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9968
  **Inferred.** A load-linked and store-conditional loop (ll at 0x9968, sc at 0x9974) that adds a0 to the
  word at a1. The branch at 0x9978 goes back to 0x9968 when v0 is 0, which is the retry on a failed store. The
  render lists the return value as the sum, but the sc at 0x9974 writes v0 and the loop leaves only when v0 is
  nonzero, so the facts do not establish that the sum is what comes back.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_check_pci` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bf4
  **Inferred.** Calls `pci_find_slot` at 0x9c38 and, when the call returns a record, copies a halfword
  from offset 0xc, a halfword from offset 0xe and a word from offset 0x20 of that record into the
  caller's pointers in a3, a4 and a5. Each copy is skipped when its pointer is null, as the tests at
  0x9c48, 0x9c54 and 0x9c5c show. The routine returns 0 or 1. The facts do not show which value means
  that a device was found, and do not name the record fields.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_ioremap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e20
  **Inferred.** An 8-byte routine that returns its first argument unchanged (v0 = a0) and makes no calls.
  Role (from name): a mapping routine that passes the address through; the facts show only the unchanged return.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_current_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ea0
  **Inferred.** An 88-byte routine with no branches that makes one call to `cmn_err` at 0x9ee0 and then
  returns 0. The render shows no loads and returns no pointer, so the name does not match what the code
  does.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_inb` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa438
  **Inferred.** Loads the pointer stored at `fglrx_boards`, loads the pointer at offset 0 of that record,
  loads the 8-byte word at offset 0x248 (584) of the next record, and returns the byte at that word plus a0
  (load at 0xa458, `lbu` at 0xa464, return at 0xa460). Role (from name): an 8-bit port read; the facts do not
  show that the address is an I/O address.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa514
  **Established.** Returns the 8-byte word at offset 8 of its argument (load at 0xa518, return at 0xa514).
  Role (from name): that word is the end address of a VM area record; the facts do not name the field.
  Reviewed: 2026-11-12 (sonnet)

- `get_queue_mutex` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa768
  **Established.** An 8-byte routine (0xa768 to 0xa770) that returns the address a0+24, which is offset
  0x18 of its argument, and makes no memory access. Role (from name): the object at that offset is a mutex;
  the facts do not show it.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_avl_mem_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac84
  **Inferred.** Returns the sum of the 8-byte words at offsets 0x28 and 0x30 of its argument (loads at
  0xac84 and 0xac88, return at 0xac8c). Role (from name): an end address formed from a start and a length;
  the render does not name the two fields.
  Reviewed: 2026-11-12 (sonnet)

- `is1_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Loads the word at .data+0x9a0 (0x142c8), compares the loaded word plus one with 1 at
  0x142dc, and stores to the same word at 0x142e0. The branch at 0x142dc is taken when that sum equals 1. The
  routine calls `cmn_err` at 0x14320 with level 4 and the string at .rodata+13048 on one path and returns on
  the other. The facts do not show the value stored at 0x142e0, which side of the branch reaches the call, or
  what the word counts.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_cp_resume` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17cc8
  **Inferred.** Calls `__ke_get_file_priv` at 0x17cf0 with its second argument in a0, then calls one unnamed
  routine (.text+95700) three times at 0x17d28, 0x17d30 and 0x17d38, each time with .rodata+16448 in a0. It
  returns 0. Role (from name): a resume hook; the facts show only this call sequence and do not confirm it.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_noop` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1eec0
  **Inferred.** Makes one call, at 0x1eef4, to an unnamed routine (.text+126612), with .rodata+26112 in a0
  and a1, and returns 0. The name says it does nothing, but the code makes that call. The callee decides what
  happens, and the render does not name it or show what is at .rodata+26112.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_restore_cap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20408
  **Inferred.** Copies 4 bytes from the user address in a3 onto the stack at sp-16 with
  `__ke_copy_from_user` at 0x20430. If the copy returns 0, it calls `__ke_set_cap_effective` at 0x20464
  and returns 0. If the copy fails, it returns -14, which is -EFAULT in the usual numbering.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_config_mtrr` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa180
  **Established.** An 8-byte routine that returns 0 and makes no calls, loads or stores. It sets no
  memory-type range, so as built it does nothing.
  Reviewed: 2026-11-12 (sonnet)
