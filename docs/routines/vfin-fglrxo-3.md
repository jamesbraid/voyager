# fglrx.o routines, sample 3

Routines of `usr/cpu/sysgen/IP35boot/fglrx.o` that `docs/inventory/functions.tsv` does not yet show as
understood. The sample is every sixth row of that list, starting at the fourth, sorted by address. Where
two names share an address, the row chosen is named in the header. Each role comes from a render of the
routine's own code; callees are named as the binary names them.

- `is1_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Reads a 4-byte word at .data+0x9a0 (lw at 0x142c8) and writes it back (sw at 0x142e0).
  When the value at [.data+2464]+1 equals 1 (beq at 0x142dc), it calls cmn_err at 0x14320 with level 4 and
  a fixed string from .rodata. Otherwise it returns 1 at 0x142e4. On the log path the return is whatever
  cmn_err returns.

- `firegl_cp_resume` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17cc8
  **Inferred.** Looks up the file's private record with __ke_get_file_priv (jalr at 0x17cf0), passing its
  own arguments through. It then calls one helper at .text+95700 three times (at 0x17d28, 0x17d30 and
  0x17d38) with the same .rodata string as its first argument, and returns 0 at 0x17d50.

- `firegl_noop` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1eec0
  **Inferred.** Makes one call to .text+126612 (jalr at 0x1eef4) with two .rodata addresses as arguments,
  then returns 0 at 0x1ef04. Nothing else happens in the body, so whatever the callee does is the routine's
  whole effect.

- `firegl_restore_cap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20408
  **Inferred.** Copies 4 bytes from the user pointer in arg3 into a stack slot with __ke_copy_from_user
  (jalr at 0x20430). On success (beq at 0x20438) it calls __ke_set_cap_effective (jalr at 0x20464) and
  returns 0. On failure it returns -14 (-0xe).

- `fglrx_drm_unmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x336c
  **Inferred.** Stub. It returns the constant 14 (0xe) at 0x3374, and stores a word through arg3 in the
  return's delay slot (sw at 0x3378). It does no mapping work.

- `FGLRXmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b78
  **Inferred.** Stub. It returns -1 and does nothing else. The routine is 8 bytes, a return and its
  delay slot.

- `fglrx_hp_get_topology` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6e28
  **Inferred.** Calls .text+24032 (jalr at 0x6e4c) with its four arguments unchanged. The result of that
  call (beq at 0x6e58) decides the path. On one path it copies 0x604 bytes from the kernel table at
  [.data+584]+8200 to the user buffer in arg2 (copyout at 0x6eb4). It also stores a word through arg3
  (sw at 0x6e68). The render does not show which path returns which value.

- `__ke_atomic_read` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99ac
  **Inferred.** Returns the 32-bit word at the address in arg0 (lw at 0x99b0 and return at 0x99ac with
  v0 = [a0]). It does not write the word.

- `__ke_get_cap_effective` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ae4
  **Inferred.** Returns the constant 0 and does nothing else. The routine is 8 bytes, so callers get an
  empty effective capability value.

- `__ke_malloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d08
  **Inferred.** Calls fglrx_irix_kmem_alloc (jalr at 0x9d28) with arg0, arg2 and arg3 passed through and
  the constant 0x100 in arg1, then returns that result (return at 0x9d34). The render does not show whether
  0x100 is a size or a flag for the callee.

- `__ke_mtrr_del` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa190
  **Inferred.** Stub. It returns -1 and does nothing else, so no memory-type range is removed. The routine
  is 8 bytes.

- `__ke_inl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa498
  **Inferred.** Reads a 4-byte word at a0 plus a base. The base comes from a pointer chain that starts at
  fglrx_boards (loads at 0xa4b0, 0xa4b4 and 0xa4b8, the last at offset 0x248), with a 32-bit value at offset
  584 of that record (the lw at 0xa4c4 uses it). The word is returned in v0.

- `init_waitqueue_head` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa804
  **Inferred.** Initialises a wait queue head at arg0. It calls sv_alloc with the 8-byte field at a0+8 as
  its third argument (jalr at 0xa834), stores an 8-byte value at a0+0 (sd at 0xa870) and a 4-byte value at
  a0+16 (sw at 0xa87c), and initialises the mutex at a0+24 with init_mutex (jalr at 0xa880).

- `fglrx_avl_map_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac9c
  **Inferred.** Returns the sum of the 8-byte fields at offsets 40 and 48 of arg0 (loads at 0xac9c and
  0xaca0, return at 0xaca4). If those fields hold a mapping's start and length, this is its end address.
