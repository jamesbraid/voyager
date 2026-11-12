# fglrx.o routines, sample 3

Routines of `usr/cpu/sysgen/IP35boot/fglrx.o` that `docs/inventory/functions.tsv` does not yet show as
understood. The sample is every sixth row of that list, starting at the fourth, sorted by address. Where
two names share an address, the row chosen is named in the header. Each role comes from a render of the
routine's own code; callees are named as the binary names them.

- `is1_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Loads a 4-byte word at .data+0x9a0 (lw at 0x142c8) and stores a word to the same offset
  (sw at 0x142e0); the facts do not show the stored value. When the loaded value plus 1 equals 1 (beq at
  0x142dc), it calls cmn_err at 0x14320 with level 4 and a fixed string from .rodata. Otherwise it returns 1 at
  0x142e4. On the log path the return is whatever cmn_err returns.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_cp_resume` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17cc8
  **Inferred.** Calls __ke_get_file_priv (jalr at 0x17cf0) with its second argument in both a0 and a1 and
  its third and fourth arguments in a2 and a3. It then calls one helper at .text+95700 three times (at
  0x17d28, 0x17d30 and 0x17d38) with the same .rodata string as its first argument, and returns 0 at 0x17d50.
  Role (from name): resume entry point of a command-processor driver; the facts do not show what it resumes.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_noop` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1eec0
  **Inferred.** Makes one call to .text+126612 (jalr at 0x1eef4) with the same .rodata address
  (.rodata+26112) in a0 and a1, then returns 0 at 0x1ef04. The facts show no other instructions with effects.
  The name says no-op, but the body calls a routine, so whether that call does anything is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_restore_cap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20408
  **Inferred.** Copies 4 bytes from the user pointer in arg3 into a stack slot with __ke_copy_from_user
  (jalr at 0x20430). On success (beq at 0x20438) it calls __ke_set_cap_effective (jalr at 0x20464) and
  returns 0. On failure it returns -14 (-0xe).
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_drm_unmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x336c
  **Inferred.** Returns the constant 14 (0xe) at 0x3374, and executes a word store at offset 0 of some
  register base in the return's delay slot (sw at 0x3378); the facts do not show which register or value.
  Role (from name): an unmap hook; the body shows no mapping work.
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b78
  **Inferred.** Stub. It returns -1 and does nothing else. The routine is 8 bytes, a return and its
  delay slot.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hp_get_topology` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6e28
  **Inferred.** Calls .text+24032 (jalr at 0x6e4c) with its four arguments
  unchanged. The result of that call (beq at 0x6e58) decides the path. On one path it copies 0x604 bytes from
  the kernel table at [.data+584]+8200 to the user buffer in arg2 (copyout at 0x6eb4). It also stores a word at
  offset 0 of a register base (sw at 0x6e68); the facts do not show which register. The render does not show
  which path returns which value.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_read` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99ac
  **Inferred.** Returns the 32-bit word at the address in arg0 (lw at 0x99b0 and return at 0x99ac with
  v0 = [a0]). It does not write the word.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_get_cap_effective` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ae4
  **Inferred.** Returns the constant 0 and does nothing else. The routine is 8 bytes.
  Role (from name): reports the effective capability set; the constant 0 would mean an empty set.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_malloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d08
  **Inferred.** Calls fglrx_irix_kmem_alloc (jalr at 0x9d28) with arg0, arg2 and arg3 passed through and
  the constant 0x100 in arg1, then returns that result (return at 0x9d34). The render does not show whether
  0x100 is a size or a flag for the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_mtrr_del` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa190
  **Inferred.** Stub. It returns -1 and does nothing else. The routine is 8 bytes.
  Role (from name): removes a memory-type range; this body removes none.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_inl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa498
  **Inferred.** Reads a 4-byte word at a0 plus a base (lw at 0xa4c4) and returns it in v0 (return at 0xa4c0). The base comes from a
  pointer chain that starts at fglrx_boards (8-byte loads at 0xa4b0, 0xa4b4 and 0xa4b8, the last at offset
  0x248 = 584 of that record). The base is itself an 8-byte value, not a 32-bit one.
  Reviewed: 2026-11-12 (sonnet)

- `init_waitqueue_head` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa804
  **Inferred.** Calls sv_alloc with the 8-byte field at a0+8 as its third argument (jalr at 0xa834),
  stores an 8-byte value at offset 0 (sd at 0xa870) and a 4-byte value at offset 16 (sw at 0xa87c) of a
  register base the facts do not name, and calls init_mutex with a0+24 as its first argument (jalr at 0xa880).
  Role (from name): initialises a wait queue head at arg0.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_avl_map_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac9c
  **Inferred.** Returns the sum of the 8-byte fields at offsets 40 and 48 of arg0 (loads at 0xac9c and
  0xaca0, return at 0xaca4). If those fields hold a mapping's start and length, this is its end address.
  Reviewed: 2026-11-12 (sonnet)
