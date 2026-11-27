# Readings: `usr/cpu/sysgen/IP35boot/fglrx.o`

One entry per routine, filed here from the reading batches by binary.

- `fglrx_invalid_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x31dc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x31dc-0x3230 (84 bytes).
  It occupies 84 bytes.
  The `jalr` at 0x3218 calls cmn_err with a0=0x5, a1=sym(.rodata), a2=sym(cmn_err), a3=sym(.rodata).
  The return at 0x3228 has v0 = 0x16.

- `fglrx_invalid_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x31dc
  **Established.** Fallback for an ioctl number that has no handler. It calls `cmn_err` at 0x3218 with level 5 and the text "fglrx: Unknown ioctl" from `.rodata` +0xa40, and returns 22 at 0x3228, so the caller sees an invalid-argument error. It reads no argument and touches no hardware; ten pointers in `.data` between +0x180 and +0x240 fill unused slots of a handler table with it.

- `fglrx_test_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3230 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x3230-0x3238 (8 bytes).
  It occupies 8 bytes.
  The return at 0x3230 has v0 = 0x0.

- `fglrx_test_ioctl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3230
  **Established.** An 8-byte routine that returns 0 and makes no calls, loads or stores. It does nothing
  beyond reporting success. The render does not show which request codes reach it.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_drm_map` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x335c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x335c-0x336c (16 bytes).
  It occupies 16 bytes.
  The `sw` at 0x3368 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The return at 0x3364 has v0 = 0xe.

- `fglrx_drm_map` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x335c
  **Inferred.** Returns the constant 0xe at 0x3364. The store at 0x3368 sits after that return and writes a word through the pointer in a3, so it runs on the way out. The stored value is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_drm_unmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x336c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x336c-0x337c (16 bytes).
  It occupies 16 bytes.
  The `sw` at 0x3378 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The return at 0x3374 has v0 = 0xe.

- `fglrx_drm_unmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x336c
  **Established.** Four-instruction hook that reports failure for a DRM unmap request: it loads 14 into v0 at 0x336c and -1 at 0x3370, and the delay slot of the return at 0x3374 stores the -1 through the result pointer in a3 (0x3378). It unmaps nothing and reads nothing.

- `fglrx_give_up_privdev` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x337c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x337c-0x33e8 (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x3380 loads 4 bytes from a0 (arg0 at entry) +0x30.
  The `sw` at 0x33d0 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x33e4 stores 4 bytes to a0 (arg0 at entry) +0x30.
  The `jalr` at 0x33b8 calls firegl_release with a0=0x0, a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x3394 targets 0x33c8, is taken when at(=[a0+48]) == 0, and falls through when at(=[a0+48]) != 0.
  The `beq` branch at 0x33c0 targets 0x33e0, is taken when v0(=ret(firegl_release)) == 0, and falls through when v0(=ret(firegl_release)) != 0.
  The `beq` branch at 0x33e0 targets 0x33c8 and is always taken.
  The return at 0x33d8 has v0 = 0x0.

- `fglrx_give_up_privdev` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x337c
  **Inferred.** Reads the word at +0x30 of its first argument. When that word is non-zero, the `jalr` at 0x33b8 passes the object as the second argument to `firegl_release`, with a0 set to 0. The branch at 0x33c0 tests that call's result. A word is stored at +0x30 at 0x33e4, and another store at 0x33d0 writes at +0x0 of a base the render does not name. The routine returns 0 at 0x33d8. The stored values are not recovered by the render.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_dma_flush` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x39f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x39f0-0x3a44 (84 bytes).
  It occupies 84 bytes.
  The `sw` at 0x3a34 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x3a20 calls copyin with a0=a2 at entry (arg2), a1=sp-32, a2=0x10, a3=a3 at entry (arg3).
  The return at 0x3a3c has v0 = 0x0.

- `fglrx_dma_flush` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x39f0
  **Inferred.** The `jalr` at 0x3a20 calls `copyin` with the user address from a2, a stack buffer at sp-32 and a length of 0x10, so the routine pulls a 16-byte record from user space. A 4-byte store through a3 at 0x3a34 follows, and the return at 0x3a3c yields 0. The render does not show whether the copyin result controls the store or the return, so any error path is unresolved.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_swapbuf_stat` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3b34 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x3b34-0x3b74 (64 bytes).
  It occupies 64 bytes.
  The `lh` at 0x3b4c loads 2 bytes from abs 0xffffffffffffc428.
  The `ld` at 0x3b50 loads 8 bytes from sym(gfxinfo) +0x0.
  The `lw` at 0x3b5c loads 4 bytes from ([sym(gfxinfo)]:8 + ([-0x3bd8]:2 << 0x5)) +0x14.
  The `sw` at 0x3b64 stores 4 bytes to ([sym(gfxinfo)]:8 + ([-0x3bd8]:2 << 0x5)) +0x14.
  The `sw` at 0x3b68 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The return at 0x3b6c has v0 = 0x0.

- `fglrx_swapbuf_stat` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x3b34
  **Inferred.** Counts one swap-buffer request: it takes the `gfxinfo` pointer, indexes it by the halfword at the absolute address -15320 scaled by 32 (0x3b4c to 0x3b58), adds 1 to the word at +20 of that record (0x3b5c to 0x3b64), stores 0 through the result pointer in a3 (0x3b68) and returns 0. Reading the halfword at that fixed kernel address as the processor number is inferred from its use as a record index.

- `fglrx_add_exit_callback` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x45a4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x45a4-0x4658 (180 bytes).
  It occupies 180 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0x45b4, `ld` at 0x4630.
  The `sw` at 0x464c stores 4 bytes to [a0]:8 +0xdc.
  The `jalr` at 0x45d0 calls curproc with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x45f4 calls proc_pid with a0=ret(curproc), a1=sym(proc_pid), a2=?, a3=?.
  The `jalr` at 0x4634 calls add_exit_callback with a0=ret(proc_pid), a1=0x1, a2=sym(fglrx_exit), a3=[a0]:8, a4=sym(fglrx_exit), a5=sym(add_exit_callback), a6=sym(add_exit_callback).
  The return at 0x4650 has v0 = ret(add_exit_callback).

- `fglrx_add_exit_callback` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x45a4
  **Inferred.** Calls `curproc` at 0x45d0, then `proc_pid` at 0x45f4 with that result in a0, then
  `add_exit_callback` at 0x4634 with the pid in a0, the constant 1 in a1 and `fglrx_exit` in a2. It stores a
  4-byte word at offset 0xdc (store at 0x464c) before returning the result of `add_exit_callback`. The facts do
  not show which register the store's base comes from or the value stored.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_thread_exit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4860 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4860-0x4908 (168 bytes).
  It occupies 168 bytes.
  The `jalr` at 0x489c calls mutex_lock with a0=sym(.bss)+524288, a1=0x19, a2=sym(mutex_lock), a3=sym(.bss)+524288.
  The `jalr` at 0x48bc calls firegl_unlock_unbind_all_clients with a0=?, a1=?, a2=?, a3=sym(firegl_unlock_unbind_all_clients), a4=sym(firegl_unlock_unbind_all_clients).
  The `jalr` at 0x48f4 calls mutex_unlock with a0=sym(.bss)+524288, a1=sym(mutex_unlock), a2=sym(.bss)+524288, a3=sym(mutex_unlock).
  The return at 0x4900 has v0 = ret(mutex_unlock).

- `fglrx_thread_exit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4860
  **Inferred.** Takes the mutex at `.bss+0x80000` with `mutex_lock` at 0x489c (a1 = 0x19), calls `firegl_unlock_unbind_all_clients` at 0x48bc, releases the same mutex with `mutex_unlock` at 0x48f4, and returns that unlock's result at 0x4900. The callee name suggests the thread's exit path drops its client bindings under the lock.
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXReadRegister` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4908 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4908-0x4950 (72 bytes).
  It occupies 72 bytes.
  The `ld` at 0x4924 loads 8 bytes from sym(.data) +0x148.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x4930, `ld` at 0x4934.
  The `lwu` at 0x4944 loads 4 bytes from ?.
  The `beq` branch at 0x4938 targets 0x4948, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The return at 0x4948 has v0 = one of 0x5, ?.

- `FGLRXReadRegister` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4908
  **Established.** Reads one 32-bit chip register for a board. The board number in a0 (zero-extended, scaled by 8 at 0x4920 to 0x4928) indexes the pointer table at `.data` +328; the register window is the doubleword at +656 of that board record (0x4934). A null window returns 5 (0x493c); otherwise it loads the word at window plus the offset in a1 with `lwu` (0x4944) and returns it.

- `FGLRXWriteRegister` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4950 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4950-0x49a0 (80 bytes).
  It occupies 80 bytes.
  The `ld` at 0x496c loads 8 bytes from sym(.data) +0x148.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x4978, `ld` at 0x497c.
  The `sw` at 0x4990 stores 4 bytes to ?.
  The `beq` branch at 0x4980 targets 0x4998, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The return at 0x4998 has v0 = one of 0x5, ?.

- `FGLRXWriteRegister` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4950
  **Established.** Writes one 32-bit chip register for a board, the store counterpart of the register read at 0x4908. The board table at `.data` +328 is indexed by a0 and the register window is the doubleword at +656 of the record (0x497c). A null window returns 5 (0x4984); otherwise the word in a2 is stored at window plus the offset in a1 (`sw` at 0x4990) and the value zero-extended is returned (0x4994).

- `FGLRXWriteRegister8` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x49a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x49a0-0x49f0 (80 bytes).
  It occupies 80 bytes.
  The `ld` at 0x49bc loads 8 bytes from sym(.data) +0x148.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x49c8, `ld` at 0x49cc.
  The `sw` at 0x49dc stores 4 bytes to ?.
  The `beq` branch at 0x49d0 targets 0x49e8, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The return at 0x49e0 has v0 = a2.
  The return at 0x49e8 has v0 = 0x5.

- `FGLRXWriteRegister8` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x49a0
  **Established.** Same board-table walk as the 32-bit write (`.data` +328, then record +656) but the store at 0x49dc is `sw`, a full 32-bit word, not a byte; the 8 in the name is not a byte-wide access. It returns the unmodified a2 (delay slot at 0x49d4) or 5 when the window pointer is null (0x49ec). `FGLRXINPLL` calls it.

- `FGLRXinfo` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4b00-0x4b68 (104 bytes).
  It occupies 104 bytes.
  The `sw` at 0x4b5c stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x4b38 calls copyout with a0=a0+224, a1=a1 at entry (arg1), a2=?, a3=?.
  The `beq` branch at 0x4b40 targets 0x4b54, is taken when v0(=ret(copyout)) == 0, and falls through when v0(=ret(copyout)) != 0.
  The `beq` branch at 0x4b60 targets 0x4b4c and is always taken.
  The return at 0x4b4c has v0 = one of 0x0, 0xe.

- `FGLRXinfo` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b00
  **Established.** Copies the board's information block to a caller buffer. It calls `copyout` at 0x4b38 with source a0 plus 224, destination a1 and a length of 184 or the caller's a2 when that is smaller (`sltiu` and `movn` at 0x4b24 to 0x4b30). A non-zero `copyout` result returns 14; otherwise the copied length is stored through the pointer in a3 (0x4b5c) and 0 is returned. Its pointer is the first slot, at `.data` +0x0, of the table that holds `FGLRXattach` next.

- `FGLRXinit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b68 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4b68-0x4b70 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4b68 has v0 = -0x1.

- `FGLRXinit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b68
  **Established.** An 8-byte routine that returns -1 and makes no calls, loads or stores. The facts do not
  show what the caller does with the value.
  Reviewed: 2026-11-12 (sonnet)

- `FGLRXattach` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4b70-0x4b78 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4b70 has v0 = -0x1.

- `FGLRXattach` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b70
  **Established.** Attach entry that always fails: it returns -1 from the delay slot of the return at 0x4b70 without reading its arguments or calling anything. Its pointer is the second slot, at `.data` +0x8, of the table that starts with `FGLRXinfo`; the real attach work is done by `fglrx_attach`.

- `FGLRXmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b78 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x4b78-0x4b80 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4b78 has v0 = -0x1.

- `FGLRXmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x4b78
  **Inferred.** Stub. It returns -1 and does nothing else. The routine is 8 bytes, a return and its
  delay slot.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hpipe_log` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53b8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x53b8-0x53e4 (44 bytes).
  It occupies 44 bytes.
  The return at 0x53dc has v0 = ?.

- `fglrx_hpipe_log` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53b8
  **Established.** Disabled hyperpipe log sink: it spills the eight argument registers a0 to a7 to the stack words at sp+0 to sp+56 (0x53bc to 0x53d8) and returns at 0x53dc after popping the 64-byte frame. It formats and prints nothing, and no code in `.text` loads its address.

- `fglrx_usb_comp_update_tiles` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53e4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x53e4-0x5430 (76 bytes).
  It occupies 76 bytes.
  The `jalr` at 0x5418 calls printf with a0=sym(.rodata)+3408, a1=sym(.rodata)+3408, a2=sym(printf), a3=sym(printf).
  The return at 0x5428 has v0 = -0x1.

- `fglrx_usb_comp_update_tiles` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x53e4
  **Established.** Placeholder for the USB compositor tile update when that driver is absent from the kernel: it calls `printf` at 0x5418 with "usb_comp driver not in kernel!" from `.rodata` +0xd50 and returns -1 at 0x5424. The same bytes carry the name `usb_comp_update_tiles`, and neither touches hardware.

- `fglrx_usb_comp_readwrite_register` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x5430 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x5430-0x5480 (80 bytes).
  It occupies 80 bytes.
  The `jalr` at 0x5468 calls printf with a0=sym(.rodata)+3408, a1=sym(printf), a2=sym(.rodata)+3408, a3=sym(printf).
  The return at 0x5478 has v0 = -0x1.

- `fglrx_usb_comp_readwrite_register` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x5430
  **Inferred.** Passes one fixed string to `printf` at 0x5468 and returns -1. It makes no memory access
  besides that call. Role (from name): a USB component register read/write path; the facts show only the
  print and the -1 return, so whether this build implements it is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_usb_comp_readwrite_register` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x5430
  **Inferred.** The one call shown is `printf` at 0x5468, with a fixed string at `.rodata+3408`, and the return at 0x5478 gives -1. The name suggests a register access, but the shown path only logs and fails, so this reads as an unsupported-operation stub.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hp_get_topology` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6e28 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x6e28-0x6ecc (164 bytes).
  It occupies 164 bytes.
  The `sw` at 0x6e68 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `ld` at 0x6ea8 loads 8 bytes from sym(.data) +0x248.
  The `jalr` at 0x6e4c calls .text+24032 with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x6eb4 calls copyout with a0=[sym(.data)+584]:8+8200, a1=a2 at entry (arg2), a2=0x604, a3=sym(copyout), a4=sym(copyout), a5=ret(.text+24032).
  The `beq` branch at 0x6e58 targets 0x6e78, is taken when v0(=ret(.text+24032)) == 0, and falls through when v0(=ret(.text+24032)) != 0.
  The `beq` branch at 0x6ec4 targets 0x6e60 and is always taken.
  The return at 0x6e70 has v0 = one of ret(.text+24032), ?.

- `fglrx_hp_get_topology` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6e28
  **Inferred.** Calls .text+24032 (jalr at 0x6e4c) with its four arguments
  unchanged. The result of that call (beq at 0x6e58) decides the path. On one path it copies 0x604 bytes from
  the kernel table at [.data+584]+8200 to the user buffer in arg2 (copyout at 0x6eb4). It also stores a word at
  offset 0 of a register base (sw at 0x6e68); the facts do not show which register. The render does not show
  which path returns which value.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hp_invalid_hpId` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6ecc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x6ecc-0x6f78 (172 bytes).
  It occupies 172 bytes.
  The `ld` at 0x6ee4 loads 8 bytes from sym(.data) +0x248.
  The `lw` at 0x6efc loads 4 bytes from [sym(.data)+584]:8 +0x0.
  The `jalr` at 0x6f60 calls printf with a0=sym(.rodata)+3408, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=0x80, a4=sym(printf), a5=sym(.rodata)+3408, a6=a0 at entry (arg0).
  The `beq` branch at 0x6ef4 targets 0x6f70, is taken when v0(=[sym(.data)+584]:8) == 0, and falls through when v0(=[sym(.data)+584]:8) != 0.
  The `beq` branch at 0x6f04 targets 0x6f70, is taken when v1(=[[sym(.data)+584]:8]) == 0, and falls through when v1(=[[sym(.data)+584]:8]) != 0.
  The `bltz` branch at 0x6f0c targets 0x6f2c, is taken when a1 < 0 (signed), and falls through when a1 >= 0 (signed).
  The `beq` branch at 0x6f14 targets 0x6f2c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x6f68 targets 0x6f1c and is always taken.
  The `beq` branch at 0x6f70 targets 0x6f1c and is always taken.
  The return at 0x6f20 has v0 = one of -0x2, -0x1, 0x0.
  The instructions from 0x6f28 to 0x6f28 are not reached by any path from the entry, and their branches are not listed.

- `fglrx_hp_invalid_hpId` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x6ecc
  **Inferred.** Loads the pointer at `.data`+584 and the word it points to, and branches to a common exit when either is zero (0x6ef4 and 0x6f04). It then branches on its second argument (a1) at 0x6f0c and again at 0x6f14, and both branches target 0x6f2c. The `jalr` at 0x6f60 calls `printf` with a `.rodata` pointer as its first argument and the entry values of a0 and a1 as its second and third. The return at 0x6f20 gives one of -2, -1 or 0. The render does not map each return value to its path.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_hp_qry_bestattrib` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8374 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x8374-0x8380 (12 bytes).
  It occupies 12 bytes.
  The `sw` at 0x8374 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The return at 0x8378 has v0 = 0x0.

- `fglrx_hp_qry_bestattrib` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8374
  **Inferred.** The only memory operation is a 4-byte `sw` at 0x8374 into the word at a3, the fourth argument, at offset 0. The return at 0x8378 yields 0. The render does not show which register holds the stored word, so the routine's output is known only as the word it writes and the zero it returns.
  Reviewed: 2026-11-12 (sonnet)

- `set_showconfig` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8f14 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x8f14-0x8fc0 (172 bytes).
  It occupies 172 bytes.
  The `lw` at 0x8fa4 loads 4 bytes from sym(.data) +0x258.
  The `sw` at 0x8fb0 stores 4 bytes to sym(.data) +0x258.
  The `jalr` at 0x8f48 calls is_specified with a0=sym(arg_showconfig), a1=sym(arg_showconfig), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x8f80 calls atoi with a0=sym(arg_showconfig), a1=sym(atoi), a2=sym(arg_showconfig), a3=?.
  The `beq` branch at 0x8f50 targets 0x8fb4, is taken when v0(=ret(is_specified)) == 0, and falls through when v0(=ret(is_specified)) != 0.
  The return at 0x8fb8 has v0 = one of ret(is_specified), ret(atoi).

- `set_showconfig` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8f14
  **Established.** Reads the boot argument `arg_showconfig` into a driver flag. It calls `is_specified` at 0x8f48 on that name; when the result is non-zero it calls `atoi` at 0x8f80 on the same string and, when the value is exactly 1 (`xor` and `movz` at 0x8fa8 to 0x8fac), stores 1 into the word at `.data` +0x258 (0x8fb0). Any other value leaves the stored word as it was. `fglrxProbeCompositor` references it.

- `fglrx_hpipe_add_log` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8fc0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x8fc0-0x9040 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x8fd8 loads 4 bytes from sym(.data) +0x260.
  The `sw` at 0x8ff0 stores 4 bytes to sym(.data) +0x260.
  The `jalr` at 0x9030 calls cmn_err with a0=0x4, a1=sym(.rodata)+3408, a2=sym(cmn_err), a3=sym(.rodata)+3408.
  The `beq` branch at 0x8fec targets 0x8ffc, is taken when at(=[sym(.data)+608]+1) == v0(=0x1), and falls through when at(=[sym(.data)+608]+1) != v0(=0x1).
  The `beq` branch at 0x9038 targets 0x8ff4 and is always taken.
  The return at 0x8ff4 has v0 = one of 0x1, ret(cmn_err).

- `fglrx_hpipe_add_log` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x8fc0
  **Inferred.** Loads the word at .data+0x260 (0x8fd8), compares the loaded word plus one with 1 at 0x8fec,
  and stores to the same word at 0x8ff0. The branch at 0x8fec is taken when that sum equals 1. The routine
  calls `cmn_err` at 0x9030 with level 4 and the string at .rodata+3408 on one path and returns on the other.
  The facts do not show the value stored at 0x8ff0 or which side of the branch reaches the call, so they do
  not establish what the word counts.
  Reviewed: 2026-11-12 (sonnet)

- `__KE_ERROR` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9040 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9040-0x90d8 (152 bytes).
  It occupies 152 bytes.
  The `jalr` at 0x909c calls cmn_err with a0=0x4, a1=sym(__ke_LINUX_VERSION_CODE), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x90c4 calls icmn_err with a0=0x6, a1=a0 at entry (arg0), a2=sp-56, a3=?.
  The return at 0x90d0 has v0 = ret(icmn_err).

- `__KE_ERROR` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9040
  **Inferred.** Calls `cmn_err` at 0x909c with level 4, a fixed second argument and the entry's a2 and a3, then calls `icmn_err` at 0x90c4 with level 6, the entry's a0 and the stack address sp-56 as its third argument. The return at 0x90d0 gives `icmn_err`'s result. The two message routines suggest an error reporter for the kernel-emulation layer; what the fixed argument points at is unknown, and so is the size of the stack area.
  Reviewed: 2026-11-12 (sonnet)

- `__KE_INFO` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x90d8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x90d8-0x9104 (44 bytes).
  It occupies 44 bytes.
  The return at 0x90fc has v0 = ?.

- `__KE_INFO` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x90d8
  **Established.** Info-level log macro with its output compiled out: it spills a0 to a7 into the 64-byte frame (0x90dc to 0x90f8), then returns at 0x90fc. `firegl_init_module` is the only caller of this address; no message is formatted or printed.

- `__KE_DEBUG` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9104 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9104-0x9130 (44 bytes).
  It occupies 44 bytes.
  The return at 0x9128 has v0 = ?.

- `__KE_DEBUG` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9104
  **Established.** Debug-level log macro with its output compiled out. Its body at 0x9104 to 0x912c saves a0 to a7 at sp+0 to sp+56 and pops the frame, with no call. The module teardown routine `firegl_cleanup_module` is the one routine that calls this address.

- `__ke_down` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x98c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x98c0-0x98f4 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x98e0 calls psema with a0=a0 at entry (arg0), a1=0x19, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x98ec has v0 = ret(psema).

- `__ke_up` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x98f4
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9914 passes its four argument registers unchanged to `vsema` and the return at 0x9920 hands back that callee's v0. The name points to a semaphore release, but the body does no work of its own.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_inc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9928 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9928-0x9948 (32 bytes).
  It occupies 32 bytes.
  The `ll` at 0x9928 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sc` at 0x9934 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `beql` branch at 0x9938 targets 0x9928, is taken when v0(=[a0]+1) == 0, and falls through when v0(=[a0]+1) != 0; its branch-likely delay slot `nop` at 0x993c runs only when taken and is annulled on fall-through.
  The return at 0x9940 has v0 = [a0]+1.

- `__ke_atomic_inc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9928
  **Established.** This is a load-linked, store-conditional loop on the 32-bit word at a0. The `ll` at 0x9928 loads the word, the `sc` at 0x9934 stores the incremented value back, and the `beql` at 0x9938 branches to 0x9928 when the `sc` result in v0 is 0, meaning the store failed and must be retried. The return at 0x9940 yields the incremented value, [a0]+1. The routine adds one to a 32-bit word atomically and returns the new count.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_dec` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9948 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9948-0x9968 (32 bytes).
  It occupies 32 bytes.
  The `ll` at 0x9948 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sc` at 0x9954 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `beql` branch at 0x9958 targets 0x9948, is taken when v0(=[a0]-1) == 0, and falls through when v0(=[a0]-1) != 0; its branch-likely delay slot `nop` at 0x995c runs only when taken and is annulled on fall-through.
  The return at 0x9960 has v0 = [a0]-1.

- `__ke_atomic_dec` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9948
  **Inferred.** Atomically decrements the 32-bit word at a0 and returns the new value. It uses a load-linked and store-conditional pair at 0x9948 and 0x9954. The branch-likely at 0x9958 retries the loop when the store-conditional fails, and the return at 0x9960 gives [a0]-1.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_add` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9968 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9968-0x9988 (32 bytes).
  It occupies 32 bytes.
  The `ll` at 0x9968 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sc` at 0x9974 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `beql` branch at 0x9978 targets 0x9968, is taken when v0(=([a1] + a0)) == 0, and falls through when v0(=([a1] + a0)) != 0; its branch-likely delay slot `nop` at 0x997c runs only when taken and is annulled on fall-through.
  The return at 0x9980 has v0 = ([a1] + a0).

- `__ke_atomic_add` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9968
  **Inferred.** A load-linked and store-conditional loop (ll at 0x9968, sc at 0x9974) that adds a0 to the
  word at a1. The branch at 0x9978 goes back to 0x9968 when v0 is 0, which is the retry on a failed store. The
  render lists the return value as the sum, but the sc at 0x9974 writes v0 and the loop leaves only when v0 is
  nonzero, so the facts do not establish that the sum is what comes back.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_sub` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9988 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9988-0x99ac (36 bytes).
  It occupies 36 bytes.
  The `ll` at 0x998c loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `sc` at 0x9998 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `beql` branch at 0x999c targets 0x998c, is taken when v1(?) == 0, and falls through when v1(?) != 0; its branch-likely delay slot `nop` at 0x99a0 runs only when taken and is annulled on fall-through.
  The return at 0x99a4 has v0 = ?.

- `__ke_atomic_sub` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9988
  **Inferred.** An ll/sc retry loop on the word at a1: the `ll` at 0x998c reads it, the `sc` at 0x9998 stores back, and the `beql` at 0x999c returns to the `ll` while the store fails. The loop makes the update atomic. The amount subtracted and the return value are unknown in this render.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_read` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x99ac-0x99b4 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x99b0 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The return at 0x99ac has v0 = [a0].

- `__ke_atomic_read` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99ac
  **Inferred.** Returns the 32-bit word at the address in arg0 (lw at 0x99b0 and return at 0x99ac with
  v0 = [a0]). It does not write the word.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_set` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99b4
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x99d4 forwards the argument registers unchanged to `test_and_set_int`, and the return at 0x99e0 returns its v0. The name suggests an atomic set, but the body only relays the call.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_atomic_set` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99b4
  **Inferred.** Its one call is a `jalr` at 0x99d4 into `test_and_set_int`, with a0 through a3 handed over as they arrived. The return at 0x99e0 yields that callee's v0, so the value is whatever the test-and-set reports, not something this body computes.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_spin_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99e8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x99e8-0x9a28 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0x9a14 calls mutex_lock with a0=(a0 + (a1 << 0x4))+80, a1=0x19, a2=sym(mutex_lock), a3=(a1 << 0x4).
  The return at 0x9a20 has v0 = ret(mutex_lock).

- `__ke_spin_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99e8
  **Inferred.** Locks one entry of a table of 16-byte records that starts at +80 of its first argument, indexed by its second argument (`a0 + (a1 << 4) + 80`). The `jalr` at 0x9a14 calls `mutex_lock` with 0x19 as the second argument, and the routine returns that call's result at 0x9a20.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_spin_unlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a28 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9a28-0x9a64 (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x9a50 calls mutex_unlock with a0=(a0 + (a1 << 0x4))+80, a1=sym(mutex_unlock), a2=(a1 << 0x4), a3=sym(mutex_unlock), a4=sym(mutex_unlock).
  The return at 0x9a5c has v0 = ret(mutex_unlock).

- `__ke_spin_unlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a28
  **Inferred.** The `jalr` at 0x9a50 calls `mutex_unlock` with a0 set to a0 + (a1 << 4) + 80. That address is 80 bytes into the object at a0, offset by a1 times 16, so it may be an entry in an array of 16-byte elements; the render does not show the array. The return at 0x9a5c passes back the result of `mutex_unlock`.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_sys_mlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a64 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9a64-0x9a9c (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x9a88 calls useracc with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x110, a3=0x0.
  The return at 0x9a94 has v0 = ret(useracc).

- `__ke_sys_munlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a9c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9a9c-0x9ad4 (56 bytes).
  It occupies 56 bytes.
  The `jalr` at 0x9abc calls unuseracc with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x110, a3=a3 at entry (arg3).
  The return at 0x9acc has v0 = 0x0.

- `__ke_sys_munlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9a9c
  **Inferred.** Thin wrapper around `unuseracc`. The call at 0x9abc passes arg0 and arg1 unchanged, the constant 0x110 as the third argument, and arg3 unchanged. The routine returns 0 at 0x9acc. The render shows no test of the `unuseracc` result, so the 0 does not depend on it on the path shown.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_capable` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ad4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9ad4-0x9adc (8 bytes).
  It occupies 8 bytes.
  The return at 0x9ad4 has v0 = ?.

- `__ke_capable` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ad4
  **Established.** Capability test with no body: `jr ra` at 0x9ad4 and a `nop` at 0x9ad8, so v0 is left as the caller had it. Six routines call it (`firegl_alloc_bufs`, `firegl_ioctl`, `firegl_lock_memory`, `firegl_mmap`, `firegl_free_memlock`, `firegl_set_cap_ipc_lock`), so their privilege branches act on whatever value v0 holds.

- `__ke_cap_effective_raise` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9adc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9adc-0x9ae4 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9adc has v0 = ?.

- `__ke_cap_effective_raise` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9adc
  **Established.** Empty shim for raising a process capability: a bare `jr ra` at 0x9adc with a `nop` at 0x9ae0. It changes no state and sets no result; it is called from `firegl_lock_memory`, `firegl_free_memlock` and `firegl_set_cap_ipc_lock`.

- `__ke_get_cap_effective` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ae4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9ae4-0x9aec (8 bytes).
  It occupies 8 bytes.
  The return at 0x9ae4 has v0 = 0x0.

- `__ke_get_cap_effective` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ae4
  **Established.** Returns 0 as the saved capability mask: the delay slot of the return at 0x9ae4 is `move v0,zero` at 0x9ae8. The three routines that save and restore the mask (`firegl_lock_memory`, `firegl_free_memlock`, `firegl_set_cap_ipc_lock`) therefore always save 0.

- `__ke_set_cap_effective` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9aec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9aec-0x9af4 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9aec has v0 = ?.

- `__ke_set_cap_effective` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9aec
  **Established.** Restore half of the capability save and restore pair, with no body: `jr ra` at 0x9aec and `nop` at 0x9af0. The mask passed in a0 is dropped. `firegl_restore_cap`, `firegl_lock_memory` and `firegl_free_memlock` call it.

- `__ke_copy_from_user` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9af4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9af4-0x9b34 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0x9b20 calls copyin with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=(a2 << 0x0), a3=a3 at entry (arg3).
  The return at 0x9b2c has v0 = ret(copyin).

- `__ke_copy_to_user` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9b34 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9b34-0x9b74 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0x9b60 calls copyout with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=(a2 << 0x0), a3=a3 at entry (arg3).
  The return at 0x9b6c has v0 = ret(copyout).

- `__ke_verify_area` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9b74 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9b74-0x9bc4 (80 bytes).
  It occupies 80 bytes.
  The `jalr` at 0x9bac calls printf with a0=sym(__ke_LINUX_VERSION_CODE), a1=sym(printf), a2=sym(__ke_LINUX_VERSION_CODE), a3=sym(printf).
  The return at 0x9bbc has v0 = 0x0.

- `__ke_verify_area` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9b74
  **Established.** User-pointer range check that was never filled in: it calls `printf` at 0x9bac with the text "__ke_verify_area NOT IMPLEMENTED !!!!" from `.rodata` +0x17c0 and returns 0 (0x9bb8), which reads as success. No code in `.text` loads its address.

- `__ke_get_pci_device_info` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bc4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9bc4-0x9bf4 (48 bytes).
  It occupies 48 bytes.
  The `lhu` at 0x9bcc loads 2 bytes from a0 (arg0 at entry) +0xc.
  The `sh` at 0x9bd0 stores 2 bytes to a1 (arg1 at entry) +0x0.
  The `lhu` at 0x9bd4 loads 2 bytes from a0 (arg0 at entry) +0xe.
  The `sh` at 0x9bd8 stores 2 bytes to a1 (arg1 at entry) +0x2.
  The `lhu` at 0x9bdc loads 2 bytes from a0 (arg0 at entry) +0x10.
  The `sh` at 0x9be0 stores 2 bytes to a1 (arg1 at entry) +0x4.
  The `lhu` at 0x9be4 loads 2 bytes from a0 (arg0 at entry) +0x12.
  The `sh` at 0x9be8 stores 2 bytes to a1 (arg1 at entry) +0x6.
  The `beq` branch at 0x9bc4 targets 0x9bec, is taken when a0 == 0, and falls through when a0 != 0.
  The return at 0x9bec has v0 = -0x16.

- `__ke_get_pci_device_info` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bc4
  **Inferred.** Copies four 16-bit fields between two records. A zero a0 takes the branch at 0x9bc4 to the return at 0x9bec, which gives -0x16 (EINVAL). Otherwise the halfwords at a0+0xc, +0xe, +0x10 and +0x12 are copied to a1+0, +0x2, +0x4 and +0x6 at 0x9bd0 through 0x9be8.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_check_pci` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bf4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9bf4-0x9ca8 (180 bytes).
  It occupies 180 bytes.
  The `lhu` at 0x9c50 loads 2 bytes from ret(pci_find_slot) +0xc.
  The `sh` at 0x9c58 stores 2 bytes to a3 (arg3 at entry) +0x0.
  The `lw` at 0x9c64 loads 4 bytes from ret(pci_find_slot) +0x20.
  The `sw` at 0x9c68 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `lhu` at 0x9c8c loads 2 bytes from ret(pci_find_slot) +0xe.
  The `sh` at 0x9c94 stores 2 bytes to a4 (arg4 at entry) +0x0.
  The `jalr` at 0x9c38 calls pci_find_slot with a0=a0 at entry (arg0), a1=?, a2=?, a3=a3 at entry (arg3), a6=sym(pci_find_slot).
  The `beq` branch at 0x9c40 targets 0x9ca0, is taken when v0(=ret(pci_find_slot)) == 0, and falls through when v0(=ret(pci_find_slot)) != 0.
  The `beq` branch at 0x9c48 targets 0x9c84, is taken when s2(=a3) == 0, and falls through when s2(=a3) != 0.
  The `bne` branch at 0x9c54 targets 0x9c8c, is taken when s1(=a4) != 0, and falls through when s1(=a4) == 0.
  The `beq` branch at 0x9c5c targets 0x9c6c, is taken when s0(=a5) == 0, and falls through when s0(=a5) != 0.
  The `beq` branch at 0x9c84 targets 0x9c5c, is taken when s1(=a4) == 0, and falls through when s1(=a4) != 0.
  The `bne` branch at 0x9c90 targets 0x9c64, is taken when s0(=a5) != 0, and falls through when s0(=a5) == 0.
  The `beq` branch at 0x9c98 targets 0x9c70 and is always taken.
  The `beq` branch at 0x9ca0 targets 0x9c70 and is always taken.
  The return at 0x9c7c has v0 = one of 0x0, 0x1.

- `__ke_check_pci` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9bf4
  **Inferred.** Calls `pci_find_slot` at 0x9c38 and, when the call returns a record, copies a halfword
  from offset 0xc, a halfword from offset 0xe and a word from offset 0x20 of that record into the
  caller's pointers in a3, a4 and a5. Each copy is skipped when its pointer is null, as the tests at
  0x9c48, 0x9c54 and 0x9c5c show. The routine returns 0 or 1. The facts do not show which value means
  that a device was found, and do not name the record fields.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_get_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ca8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9ca8-0x9cd4 (44 bytes).
  It occupies 44 bytes.
  The `lw` at 0x9cb8 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `sw` at 0x9cc0 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `beq` branch at 0x9ca8 targets 0x9ccc, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x9cb0 targets 0x9cc4, is taken when a1 == 0, and falls through when a1 != 0.
  The return at 0x9cc4 has v0 = one of 0x0, 0x1.
  The return at 0x9ccc has v0 = 0x0.

- `__ke_pci_get_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ca8
  **Inferred.** Returns 0 at 0x9ccc when a0 is null. Otherwise, only when a1 is non-null (the branch at 0x9cb0 skips the rest when a1 is null), it loads the word at a0+0x20 at 0x9cb8 and stores it through a1 at 0x9cc0. Both non-null-a0 paths return at 0x9cc4 with 0 or 1; which path gives which value is unknown. The name suggests the loaded field is the PCI interrupt line.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_find_device` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9cd4
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9cf4 forwards the argument registers unchanged to `pci_find_device`, and the return at 0x9d00 returns that callee's v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_malloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d08 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9d08-0x9d3c (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x9d28 calls fglrx_irix_kmem_alloc with a0=a0 at entry (arg0), a1=0x100, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x9d34 has v0 = ret(fglrx_irix_kmem_alloc).

- `__ke_malloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d08
  **Inferred.** Calls fglrx_irix_kmem_alloc (jalr at 0x9d28) with arg0, arg2 and arg3 passed through and
  the constant 0x100 in arg1, then returns that result (return at 0x9d34). The render does not show whether
  0x100 is a size or a flag for the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_free_s` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d3c
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9d5c forwards the argument registers unchanged to `fglrx_irix_kmem_free`, and the return at 0x9d68 returns its v0. The name suggests a sized free, and the callee name a kernel memory free, but no size handling appears in the body.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_free_s` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d3c
  **Inferred.** The `jalr` at 0x9d5c enters `fglrx_irix_kmem_free` and passes the entry registers a0 to a3 along unchanged. Control leaves through the return at 0x9d68 with v0 taken from that free routine.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vmalloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d70 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9d70-0x9dac (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0x9d98 calls fglrx_irix_kern_malloc_node with a0=?, a1=a1 at entry (arg1), a2=0x1, a3=a3 at entry (arg3).
  The return at 0x9da4 has v0 = ret(fglrx_irix_kern_malloc_node).

- `__ke_vmalloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d70
  **Inferred.** Allocates memory through `fglrx_irix_kern_malloc_node`. The `jalr` at 0x9d98 passes the second argument unchanged, passes 1 as the third, and passes the fourth argument unchanged. The routine returns that callee's pointer at 0x9da4.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vfree` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9dac
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9dcc forwards the argument registers unchanged to `fglrx_irix_kern_free`, and the return at 0x9dd8 returns its v0. The name suggests a virtual-memory free, but the body only relays the call to the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vfree` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9dac
  **Inferred.** A single `jalr` at 0x9dcc reaches `fglrx_irix_kern_free`, with the four argument registers left untouched on the way in. The return at 0x9dd8 passes back the v0 of that callee and nothing else.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_get_free_page` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9de0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9de0-0x9de8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9de0 has v0 = ?.

- `__ke_get_free_page` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9de0
  **Established.** Linux page-allocator shim that is an empty body: `jr ra` at 0x9de0 and `nop` at 0x9de4. It allocates nothing and leaves v0 as it was; no relocation in the object points at it.

- `__ke_get_free_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9de8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9de8-0x9df0 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9de8 has v0 = ?.

- `__ke_get_free_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9de8
  **Established.** Multi-page counterpart of the single-page allocator shim, equally empty: the two instructions at 0x9de8 and 0x9dec are a return and a `nop`. The order argument in a1 is never read, and no relocation in the object points at it.

- `__ke_free_page` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9df0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9df0-0x9df8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9df0 has v0 = ?.

- `__ke_free_page` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9df0
  **Established.** Page release shim with no body, only `jr ra` at 0x9df0 and `nop` at 0x9df4. With the allocators at 0x9de0 and 0x9de8 also empty, this pair never moves a page; no relocation in the object points at it.

- `__ke_free_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9df8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9df8-0x9e00 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9df8 has v0 = ?.

- `__ke_free_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9df8
  **Established.** Multi-page release shim, an empty return at 0x9df8 and `nop` at 0x9dfc. `drm_free_pages` calls it after its own bookkeeping, so that call frees no memory.

- `__ke_mem_map_reserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e00-0x9e08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e00 has v0 = ?.

- `__ke_mem_map_reserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e00
  **Established.** Page-reservation shim whose body is only a return at 0x9e00 and a `nop` at 0x9e04, so no page flag is set. `drm_alloc_pages` and `drm_alloc_pages_consistent` call it after allocating, and gain nothing from it.

- `__ke_mem_map_unreserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e08 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e08-0x9e10 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e08 has v0 = ?.

- `__ke_mem_map_unreserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e08
  **Established.** Mirror of the reserve shim at 0x9e00: the return at 0x9e08 and the `nop` at 0x9e0c are the whole routine, so no page flag is cleared. It is called from `drm_free_pages` and `drm_free_pages_consistent`.

- `__ke_virt_reserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e10-0x9e18 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e10 has v0 = ?.

- `__ke_virt_reserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e10
  **Established.** Virtual-address reservation shim with an empty body (`jr ra` at 0x9e10, `nop` at 0x9e14); it neither marks nor records anything and no relocation in the object points at it.

- `__ke_virt_unreserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e18 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e18-0x9e20 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e18 has v0 = ?.

- `__ke_virt_unreserve` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e18
  **Established.** Empty counterpart of the virtual reservation shim at 0x9e10, consisting of only a return at 0x9e18 and a `nop` at 0x9e1c. No relocation in the object points at it.

- `__ke_ioremap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e20 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e20-0x9e28 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e20 has v0 = a0.

- `__ke_ioremap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e20
  **Established.** Identity mapping: the delay slot of the return at 0x9e20 is `move v0,a0` at 0x9e24, so the physical address argument comes back as the usable pointer with no mapping work. `drm_ioremap` is its caller, and `firegl_addmap` reaches it through that routine for the register map and the other mapped types.

- `__ke_ioremap_nocache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e28 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e28-0x9e30 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e28 has v0 = a0.

- `__ke_ioremap_nocache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e28
  **Inferred.** Returns its first argument unchanged, since v0 = a0 at the return at 0x9e28. The routine is 8 bytes and makes no mapping, so the caller gets back the address it passed.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_iounmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e30-0x9e38 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e30 has v0 = ?.

- `__ke_iounmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e30
  **Established.** Undo of the identity mapping above, with nothing to undo: `jr ra` at 0x9e30 and `nop` at 0x9e34. `drm_ioremapfree` calls it.

- `__ke_verify_read_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e38 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e38-0x9e40 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e38 has v0 = 0x0.

- `__ke_verify_read_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e38
  **Established.** Read-access check that always succeeds: `move v0,zero` in the return delay slot at 0x9e3c. The address and length arguments are not examined. `firegl_verify_area` is its only caller.

- `__ke_verify_write_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e40-0x9e48 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9e40 has v0 = 0x0.

- `__ke_verify_write_access` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e40
  **Established.** Write-access check that always reports success: v0 is cleared at 0x9e44 in the delay slot of the return at 0x9e40 and the arguments are ignored. It is called by `firegl_verify_area` and `firegl_lock_memory`, whose failure branches are therefore never taken here.

- `__ke_init_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e48 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9e48-0x9ea0 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x9e88 calls cmn_err with a0=0x4, a1=sym(__ke_LINUX_VERSION_CODE), a2=sym(__ke_LINUX_VERSION_CODE), a3=sym(cmn_err), a4=sym(__ke_LINUX_VERSION_CODE), a5=sym(cmn_err).
  The return at 0x9e98 has v0 = 0x0.

- `__ke_init_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9e48
  **Inferred.** Logs a message and returns 0. The only call is `cmn_err` at 0x9e88 with level 4 and a format string from `__ke_LINUX_VERSION_CODE`. The return at 0x9e98 gives 0. The name suggests memory-map setup, but the render shows no memory-map state touched on this path.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_current_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ea0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9ea0-0x9ef8 (88 bytes).
  It occupies 88 bytes.
  The `jalr` at 0x9ee0 calls cmn_err with a0=0x4, a1=sym(__ke_LINUX_VERSION_CODE), a2=sym(__ke_LINUX_VERSION_CODE), a3=sym(cmn_err), a4=sym(__ke_LINUX_VERSION_CODE), a5=sym(cmn_err).
  The return at 0x9ef0 has v0 = 0x0.

- `__ke_current_mm` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ea0
  **Inferred.** An 88-byte routine with no branches that makes one call to `cmn_err` at 0x9ee0 and then
  returns 0. The render shows no loads and returns no pointer, so the name does not match what the code
  does.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_get_vm_phys_addr` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ef8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9ef8-0x9f00 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9ef8 has v0 = ?.

- `__ke_get_vm_phys_addr` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9ef8
  **Established.** Virtual-to-physical translation shim with no body (`jr ra` at 0x9ef8, `nop` at 0x9efc), so it returns whatever v0 held. `firegl_lock_memory` calls it per page to fill the physical-address list it copies to the user.

- `__ke_get_vm_phys_addr_list` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f00 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9f00-0x9f08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x9f00 has v0 = ?.

- `__ke_get_vm_phys_addr_list` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f00
  **Established.** List-form translation shim, empty like the single-address one at 0x9ef8: the only instructions are the return at 0x9f00 and a `nop` at 0x9f04. No relocation in the object points at it.

- `__ke_memset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f08
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9f28 forwards the argument registers unchanged to `memset`, and the return at 0x9f34 returns its v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_memset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f08
  **Inferred.** The `jalr` at 0x9f28 calls `memset` with a0 to a3 as they arrived at entry. The return at 0x9f34 hands back the v0 of `memset`. Role (from name): a memory fill, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_memset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f08
  **Inferred.** It calls memset with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x9f34]. Role (from facts): a pass-through to memset [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f3c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x9f3c-0x9f84 (72 bytes).
  It occupies 72 bytes.
  The `jalr` at 0x9f68 calls bcopy with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x9f7c has v0 = a0.

- `__ke_memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f3c
  **Inferred.** Copies bytes with `bcopy`. The `jalr` at 0x9f68 passes the second argument as the source and the first as the destination, with the third argument as the length. The return at 0x9f7c hands back the first argument, the destination, as v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strlen` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f84
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9fa4 forwards the argument registers unchanged to `strlen`, and the return at 0x9fb0 returns its v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strlen` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f84
  **Inferred.** A `jalr` at 0x9fa4 calls `strlen`, and the entry registers reach it unmodified. The return at 0x9fb0 gives v0 from `strlen`. Role (from name): a string length, computed by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strlen` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f84
  **Inferred.** It calls strlen with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x9fb0]. Role (from facts): a pass-through to strlen [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fb8
  **Inferred.** A 52-byte wrapper. The `jalr` at 0x9fd8 forwards the argument registers unchanged to `strcpy`, and the return at 0x9fe4 returns its v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fb8
  **Inferred.** The `jalr` at 0x9fd8 transfers to `strcpy` with a0 through a3 still holding the caller's values. The return at 0x9fe4 reports the v0 of `strcpy`. Role (from name): a string copy, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fb8
  **Inferred.** It calls strcpy with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x9fe4]. Role (from facts): a pass-through to strcpy [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strncpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fec
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa00c forwards the argument registers unchanged to `strncpy`, and the return at 0xa018 returns its v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strncpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fec
  **Inferred.** A `jalr` at 0xa00c calls `strncpy` and leaves a0 to a3 as they were on entry. The return at 0xa018 yields the v0 that `strncpy` produced. Role (from name): a bounded string copy, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strncpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fec
  **Inferred.** It calls strncpy with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xa018]. Role (from facts): a pass-through to strncpy [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strcmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa020
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa040 forwards the argument registers unchanged to `strcmp`, and the return at 0xa04c returns its v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strcmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa020
  **Inferred.** The body calls `strcmp` through a `jalr` at 0xa040, passing the entry registers without alteration. The return at 0xa04c gives back v0 from `strcmp`. Role (from name): a string comparison, with the result produced by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strcmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa020
  **Inferred.** It calls strcmp with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xa04c]. Role (from facts): a pass-through to strcmp [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strncmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa054
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa074 forwards the argument registers unchanged to `strncmp`, and the return at 0xa080 returns its v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strncmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa054
  **Inferred.** A `jalr` at 0xa074 reaches `strncmp` with the argument registers unchanged, length included. The return at 0xa080 hands back the comparison result from that routine as v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_sprintf` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa088 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa088-0xa0b8 (48 bytes).
  It occupies 48 bytes.
  The return at 0xa0b0 has v0 = 0x0.

- `__ke_sprintf` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa088
  **Established.** Formatting shim that formats nothing: it spills a0 to a7 to a 64-byte frame (0xa08c to 0xa0ac), sets v0 to 0 at 0xa0a4 and returns at 0xa0b0, so the destination buffer in a0 is untouched and the reported length is 0. `drm_setunique` calls it.

- `__ke_set_bit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa0b8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa0b8-0xa0f4 (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0xa0e0 calls bset with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xa0ec has v0 = ret(bset).

- `__ke_clear_bit` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa0f4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa0f4-0xa130 (60 bytes).
  It occupies 60 bytes.
  The `jalr` at 0xa11c calls bclr with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xa128 has v0 = ret(bclr).

- `__ke_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa130 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa130-0xa180 (80 bytes).
  It occupies 80 bytes.
  The `jalr` at 0xa168 calls printf with a0=sym(__ke_LINUX_VERSION_CODE), a1=sym(printf), a2=sym(__ke_LINUX_VERSION_CODE), a3=sym(printf).
  The return at 0xa178 has v0 = 0x0.

- `__ke_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa130
  **Inferred.** Logs a message and returns 0. The only call is `printf` at 0xa168 with a format string from `__ke_LINUX_VERSION_CODE`, and the return at 0xa178 gives 0. The render shows no cache operation on this path.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_config_mtrr` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa180 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa180-0xa188 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa180 has v0 = 0x0.

- `__ke_config_mtrr` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa180
  **Established.** An 8-byte routine that returns 0 and makes no calls, loads or stores. It sets no
  memory-type range, so as built it does nothing.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_mtrr_add_wc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa188 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa188-0xa190 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa188 has v0 = -0x1.

- `__ke_mtrr_add_wc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa188
  **Established.** Write-combining region request that always fails: the delay slot of the return at 0xa188 loads -1 into v0 (0xa18c). `firegl_addmap` is the only caller and treats a failed reservation as non-fatal, so no write-combining range is ever set up on this build.

- `__ke_mtrr_del` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa190 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa190-0xa198 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa190 has v0 = -0x1.

- `__ke_mtrr_del` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa190
  **Established.** Write-combining region removal that only reports -1 (`li v0,-1` at 0xa194, in the delay slot of the return at 0xa190). `firegl_rmmap` and `firegl_takedown` call it; nothing was reserved to remove.

- `__ke_pci_read_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa198
  **Established.** Thin forwarder to the PCI configuration read of the same shape: it builds the address of `pci_read_config_byte` (0xa19c to 0xa1ac), saves ra, calls it with `jalr` at 0xa1b8 without changing a0 to a3 and returns its result. It adds no check of its own.

- `__ke_pci_read_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa1cc
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa1ec forwards the argument registers unchanged to `pci_read_config_word`, and the return at 0xa1f8 returns its v0. The body performs no configuration-space access of its own.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_read_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa1cc
  **Inferred.** A `jalr` at 0xa1ec transfers to `pci_read_config_word` with the entry registers intact. The return at 0xa1f8 gives the callee's v0, and the 16-bit width comes from that callee's name rather than from any masking here.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_read_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa200
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa220 forwards the argument registers unchanged to `pci_read_config_dword`, and the return at 0xa22c returns its v0. The body performs no configuration-space access of its own.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_read_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa200
  **Inferred.** The `jalr` at 0xa220 enters `pci_read_config_dword` with a0 through a3 forwarded as received. The return at 0xa22c yields that routine's v0. The 32-bit width comes from the callee's name, not from anything shown in this body.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa234
  **Established.** Forwarder for the PCI configuration byte write, laid out like the read forwarder at 0xa198: it loads the address of `pci_write_config_byte` (0xa238 to 0xa248), calls it with `jalr` at 0xa254 and returns that call's value, leaving the device, offset and value arguments untouched.

- `__ke_pci_write_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa268
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa288 forwards the argument registers unchanged to `pci_write_config_word`, and the return at 0xa294 returns its v0. The body performs no configuration-space access of its own.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa268
  **Inferred.** A `jalr` at 0xa288 calls `pci_write_config_word`, and the entry registers pass through as received. The return at 0xa294 yields the v0 of the callee. The 16-bit width comes from the callee's name.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa29c
  **Inferred.** A 52-byte wrapper. The `jalr` at 0xa2bc forwards the argument registers unchanged to `pci_write_config_dword`, and the return at 0xa2c8 returns its v0. The body performs no configuration-space access of its own.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa29c
  **Inferred.** The `jalr` at 0xa2bc hands the entry registers to `pci_write_config_dword`. The return at 0xa2c8 reports that routine's v0. The 32-bit width comes from the callee's name.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_outb` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa2d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa2d0-0xa348 (120 bytes).
  It occupies 120 bytes.
  2 such `lw` accesses load 4 bytes from sym(GfxBoardLimit) +0x0, including `lw` at 0xa2e8, `lw` at 0xa32c.
  2 such `ld` accesses load 8 bytes from sym(fglrx_boards) +0x0, including `ld` at 0xa30c, `ld` at 0xa33c.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0xa31c, `ld` at 0xa320.
  The `sb` at 0xa328 stores 1 byte to ?.
  The `beq` branch at 0xa2f8 targets 0xa340, is taken when at(=[sym(GfxBoardLimit)]) == 0, and falls through when at(=[sym(GfxBoardLimit)]) != 0.
  The `bne` branch at 0xa338 targets 0xa310, is taken when a3(?) < t1(=[sym(GfxBoardLimit)]) (unsigned), and falls through when a3(?) >= t1(=[sym(GfxBoardLimit)]) (unsigned).
  The return at 0xa340 has v0 = ?.

- `__ke_outb` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa2d0
  **Established.** Byte write to the legacy I/O window of every attached board. It loops from 0 to the word at `GfxBoardLimit` (0xa2e8, 0xa32c) over the pointer table `fglrx_boards` (0xa30c) and, for each board record, stores the byte in a0 with `sb` at 0xa328 to the address window pointer at record +584 plus the port offset in a1 (0xa320 to 0xa324). With a limit of zero it stores nothing.

- `__ke_outw` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa348 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa348-0xa3c0 (120 bytes).
  It occupies 120 bytes.
  2 such `lw` accesses load 4 bytes from sym(GfxBoardLimit) +0x0, including `lw` at 0xa360, `lw` at 0xa3a4.
  2 such `ld` accesses load 8 bytes from sym(fglrx_boards) +0x0, including `ld` at 0xa384, `ld` at 0xa3b4.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0xa394, `ld` at 0xa398.
  The `sh` at 0xa3a0 stores 2 bytes to ?.
  The `beq` branch at 0xa370 targets 0xa3b8, is taken when at(=[sym(GfxBoardLimit)]) == 0, and falls through when at(=[sym(GfxBoardLimit)]) != 0.
  The `bne` branch at 0xa3b0 targets 0xa388, is taken when a3(?) < t1(=[sym(GfxBoardLimit)]) (unsigned), and falls through when a3(?) >= t1(=[sym(GfxBoardLimit)]) (unsigned).
  The return at 0xa3b8 has v0 = ?.

- `__ke_outw` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa348
  **Inferred.** The routine loads the 32-bit global GfxBoardLimit at 0xa360 and returns at 0xa3b8 without further memory access when it is zero (the `beq` at 0xa370). Otherwise it reads the table of 8-byte pointers at fglrx_boards (the `ld` at 0xa384 and 0xa3b4) and loops back to 0xa388 while the index in a3 is below GfxBoardLimit (the `bne` at 0xa3b0). Inside the loop the 2-byte `sh` at 0xa3a0 writes a halfword. The render does not resolve the address that store reaches, so the board or register it targets is unknown. The halfword width matches a 16-bit port write, and that is the only support for the name.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_outl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa3c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa3c0-0xa438 (120 bytes).
  It occupies 120 bytes.
  2 such `lw` accesses load 4 bytes from sym(GfxBoardLimit) +0x0, including `lw` at 0xa3d8, `lw` at 0xa41c.
  2 such `ld` accesses load 8 bytes from sym(fglrx_boards) +0x0, including `ld` at 0xa3fc, `ld` at 0xa42c.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0xa40c, `ld` at 0xa410.
  The `sw` at 0xa418 stores 4 bytes to ?.
  The `beq` branch at 0xa3e8 targets 0xa430, is taken when at(=[sym(GfxBoardLimit)]) == 0, and falls through when at(=[sym(GfxBoardLimit)]) != 0.
  The `bne` branch at 0xa428 targets 0xa400, is taken when a3(?) < t1(=[sym(GfxBoardLimit)]) (unsigned), and falls through when a3(?) >= t1(=[sym(GfxBoardLimit)]) (unsigned).
  The return at 0xa430 has v0 = ?.

- `__ke_outl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa3c0
  **Established.** 32-bit write to the legacy I/O window of each attached board: the same loop over `GfxBoardLimit` boards of `fglrx_boards` as the byte write at 0xa2d0, but the store at 0xa418 is `sw` of a0 at record +584 plus the port offset in a1 (0xa410 to 0xa414). The return carries no value.

- `__ke_inb` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa438 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa438-0xa468 (48 bytes).
  It occupies 48 bytes.
  The `ld` at 0xa450 loads 8 bytes from sym(fglrx_boards) +0x0.
  The `ld` at 0xa454 loads 8 bytes from [sym(fglrx_boards)]:8 +0x0.
  The `ld` at 0xa458 loads 8 bytes from [[sym(fglrx_boards)]:8]:8 +0x248.
  The `lbu` at 0xa464 loads 1 byte from (a0 + [[[sym(fglrx_boards)]:8]:8+584]:8) +0x0.
  The return at 0xa460 has v0 = [(a0 + [[[sym(fglrx_boards)]:8]:8+584]:8)]:1.

- `__ke_inb` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa438
  **Established.** Byte read from the legacy I/O window of the first board only: it loads `fglrx_boards` (0xa450), takes the first entry (0xa454), adds the port offset in a0 to the window pointer at record +584 (0xa458 to 0xa45c) and returns the `lbu` of that address at 0xa464. It does not look at `GfxBoardLimit`.

- `__ke_inw` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa468 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa468-0xa498 (48 bytes).
  It occupies 48 bytes.
  The `ld` at 0xa480 loads 8 bytes from sym(fglrx_boards) +0x0.
  The `ld` at 0xa484 loads 8 bytes from [sym(fglrx_boards)]:8 +0x0.
  The `ld` at 0xa488 loads 8 bytes from [[sym(fglrx_boards)]:8]:8 +0x248.
  The `lh` at 0xa494 loads 2 bytes from (a0 + [[[sym(fglrx_boards)]:8]:8+584]:8) +0x0.
  The return at 0xa490 has v0 = [(a0 + [[[sym(fglrx_boards)]:8]:8+584]:8)]:2.

- `__ke_inw` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa468
  **Inferred.** Reads a signed 16-bit value at a0 plus a base. The base is a pointer read at offset 0x248 (584) of a record reached through two 8-byte loads from `fglrx_boards`, as the loads at 0xa480 to 0xa488 show. The `lh` at 0xa494 loads the halfword at a0 plus that base, and the return at 0xa490 yields it. The name suggests a port read, so a0 is an offset into the board's mapped register space.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_inl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa498 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa498-0xa4c8 (48 bytes).
  It occupies 48 bytes.
  The `ld` at 0xa4b0 loads 8 bytes from sym(fglrx_boards) +0x0.
  The `ld` at 0xa4b4 loads 8 bytes from [sym(fglrx_boards)]:8 +0x0.
  The `ld` at 0xa4b8 loads 8 bytes from [[sym(fglrx_boards)]:8]:8 +0x248.
  The `lw` at 0xa4c4 loads 4 bytes from (a0 + [[[sym(fglrx_boards)]:8]:8+584]:8) +0x0.
  The return at 0xa4c0 has v0 = [(a0 + [[[sym(fglrx_boards)]:8]:8+584]:8)].

- `__ke_inl` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa498
  **Inferred.** Reads a 4-byte word at a0 plus a base (lw at 0xa4c4) and returns it in v0 (return at 0xa4c0). The base comes from a
  pointer chain that starts at fglrx_boards (8-byte loads at 0xa4b0, 0xa4b4 and 0xa4b8, the last at offset
  0x248 = 584 of that record). The base is itself an 8-byte value, not a 32-bit one.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_enable_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4c8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4c8-0xa4d0 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4c8 has v0 = ?.

- `__ke_enable_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4c8
  **Established.** Interrupt-enable shim with no body, just `jr ra` at 0xa4c8 and `nop` at 0xa4cc. Its only caller is `firegl_wait_for_vertical_retrace`, so the vertical-retrace wait does not re-arm any interrupt through this call.

- `__ke_disable_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4d0-0xa4d8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4d0 has v0 = ?.

- `__ke_disable_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4d0
  **Established.** Interrupt-mask shim whose body is a return at 0xa4d0 and a `nop` at 0xa4d4, so it masks nothing. `firegl_wait_for_vertical_retrace`, `_r6x_vs_stereo_swap` and `_r6x_vs_validate` call it with an IRQ number.

- `__ke_request_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4d8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4d8-0xa4e0 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4d8 has v0 = 0x1.

- `__ke_request_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4d8
  **Inferred.** Does nothing and returns 1. The routine is 8 bytes and the render shows no call and no memory access, only the return at 0xa4d8 with v0 = 1. The name suggests an interrupt request, but the body does not register a handler.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_free_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4e0-0xa4e8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4e0 has v0 = ?.

- `__ke_free_irq` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4e0
  **Established.** IRQ release shim, empty (`jr ra` at 0xa4e0, `nop` at 0xa4e4). `_r6x_close_irq` calls it, but no handler was registered through a Linux-style request so nothing is released.

- `vm_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4e8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4e8-0xa4f0 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4e8 has v0 = 0x0.

- `vm_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4e8
  **Inferred.** Returns 0 in its 8 bytes and does nothing else. As a fault hook, that supplies no page for the fault.
  Reviewed: 2026-11-12 (sonnet)

- `vm_shm_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4f0-0xa4f8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4f0 has v0 = ?.

- `vm_shm_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4f0
  **Established.** Page-fault handler for shared-memory maps with no body: a return at 0xa4f0 and a `nop` at 0xa4f4. No relocation in the object points at it, so no fault reaches it.

- `vm_dma_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4f8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa4f8-0xa500 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa4f8 has v0 = ?.

- `vm_dma_nopage` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa4f8
  **Established.** Page-fault handler for DMA-buffer maps, also empty (return at 0xa4f8, `nop` at 0xa4fc); like the shared-memory one at 0xa4f0 no relocation in the object points at it.

- `__ke_vma_file_priv` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa500 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa500-0xa50c (12 bytes).
  It occupies 12 bytes.
  The `ld` at 0xa500 loads 8 bytes from a0 (arg0 at entry) +0x20.
  The `ld` at 0xa508 loads 8 bytes from [a0+32]:8 +0x8.
  The return at 0xa504 has v0 = [[a0+32]:8+8]:8.

- `__ke_vma_file_priv` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa500
  **Inferred.** Two dependent loads: the 8-byte pointer at +0x20 of a0 is followed (the `ld` at 0xa500), and the 8-byte word at +0x8 of the object it points to is returned (the `ld` at 0xa508 and the return at 0xa504). The render shows no null test on the intermediate pointer, so a null field at +0x20 would fault.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa50c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa50c-0xa514 (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0xa510 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The return at 0xa50c has v0 = [a0]:8.

- `__ke_vm_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa50c
  **Inferred.** Returns the 64-bit word at offset 0 of its argument. The doubleword load at 0xa510 is in the delay slot of the return at 0xa50c, so the returned value is [a0]. The name suggests the start address of a memory region, which matches the field read.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa514 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa514-0xa51c (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0xa518 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The return at 0xa514 has v0 = [a0+8]:8.

- `__ke_vm_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa514
  **Established.** Returns the end address of a memory-map descriptor: the delay slot of the return at 0xa514 loads the doubleword at a0 +8 into v0 (0xa518). `drm_vm_open`, `drm_vm_close` and `firegl_mmap` call it.

- `__ke_vm_offset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa51c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa51c-0xa528 (12 bytes).
  It occupies 12 bytes.
  The `ld` at 0xa51c loads 8 bytes from a0 (arg0 at entry) +0x10.
  The return at 0xa520 has v0 = ([a0+16]:8 << 0xe).

- `__ke_vm_offset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa51c
  **Inferred.** Loads the 8-byte field at a0+0x10 and returns it shifted left by 14 bits, so v0 = [a0+16] << 14 at the return at 0xa520. If that field is a page index, the shift turns it into a byte offset for 16 KiB pages.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_flags_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa528 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa528-0xa5c8 (160 bytes).
  It occupies 160 bytes.
  6 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x30, including `ld` at 0xa528, `ld` at 0xa544, `ld` at 0xa55c.
  The `sb` at 0xa540 stores 1 byte to a1 (arg1 at entry) +0x0.
  The `sb` at 0xa558 stores 1 byte to a1 (arg1 at entry) +0x1.
  The `sb` at 0xa570 stores 1 byte to a1 (arg1 at entry) +0x2.
  The `sb` at 0xa588 stores 1 byte to a1 (arg1 at entry) +0x3.
  The `sb` at 0xa5a0 stores 1 byte to a1 (arg1 at entry) +0x4.
  The `sb` at 0xa5b4 stores 1 byte to a1 (arg1 at entry) +0x6.
  The `sb` at 0xa5c4 stores 1 byte to a1 (arg1 at entry) +0x5.
  The return at 0xa5c0 has v0 = a1.

- `__ke_vm_flags_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa528
  **Established.** Writes a seven-byte flag string to the buffer in a1 from the doubleword at a0 +48: bit 0 chooses `r` or `-` at byte 0, bit 1 `w` or `-` at byte 1, bit 2 `x` or `-` at byte 2, bit 2 again `s` or `p` at byte 3, bit 0 `l` or `-` at byte 4 and `i` or `-` at byte 5, and byte 6 is the terminating zero (0xa5b4). It returns a1, and no relocation in the object points at it.

- `__ke_vm_page_prot_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa5c8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa5c8-0xa5d4 (12 bytes).
  It occupies 12 bytes.
  The `sb` at 0xa5c8 stores 1 byte to a1 (arg1 at entry) +0x0.
  The return at 0xa5cc has v0 = a1.

- `__ke_vm_page_prot_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa5c8
  **Inferred.** Writes one byte through its second argument at 0xa5c8 and returns that pointer at 0xa5cc. The byte value is not recovered by the render, so the content written is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vm_phys_addr_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa5d4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa5d4-0xa5dc (8 bytes).
  It occupies 8 bytes.
  The return at 0xa5d4 has v0 = ?.

- `__ke_vm_phys_addr_str` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa5d4
  **Established.** Debug string shim for a mapping's physical address, with an empty body (return at 0xa5d4, `nop` at 0xa5d8). It writes nothing to the buffer and no relocation in the object points at it.

- `memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa720 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa720-0xa768 (72 bytes).
  It occupies 72 bytes.
  The `jalr` at 0xa74c calls bcopy with a0=a1 at entry (arg1), a1=a0 at entry (arg0), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xa760 has v0 = a0.

- `memcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa720
  **Established.** Copies memory through `bcopy` and returns the destination. The call at 0xa74c passes arg1 as the source (bcopy's first argument) and arg0 as the destination (bcopy's second), with arg2 as the length. The routine returns a0 at 0xa760. The public BSD manual defines `bcopy` as copying from its first argument to its second.
  Reviewed: 2026-11-12 (sonnet)

- `get_queue_mutex` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa768 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa768-0xa770 (8 bytes).
  It occupies 8 bytes.
  The return at 0xa768 has v0 = a0+24.

- `get_queue_mutex` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa768
  **Established.** Accessor returning the address of the mutex embedded in a wait-queue record: a0 plus 24 in the delay slot at 0xa76c. `init_waitqueue_head` initialises the same offset, and `__ke_get_queue_mutex` is the wrapper that calls this.

- `wake_up_interruptible` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa770 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa770-0xa804 (148 bytes).
  It occupies 148 bytes.
  The `ld` at 0xa7c8 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0xa7e4 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `jalr` at 0xa7a4 calls mutex_lock with a0=a0+24, a1=0x19, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xa7c4 calls sv_broadcast_bounded with a0=[a0]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0xa7e8 calls mutex_unlock with a0=a0+24, a1=?, a2=?, a3=?.
  The return at 0xa7fc has v0 = ret(mutex_unlock).

- `wake_up_interruptible` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa770
  **Inferred.** Under the mutex at a0+0x18 (`mutex_lock` at 0xa7a4, a1 = 0x19), it calls `sv_broadcast_bounded` at 0xa7c4 on the pointer loaded from a0, stores a word at a0+0x10 at 0xa7e4, and releases the mutex with `mutex_unlock` at 0xa7e8, returning that result at 0xa7fc. The broadcast and the name suggest it wakes the queue's sleepers. The stored value is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `init_waitqueue_head` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa804 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa804-0xa898 (148 bytes).
  It occupies 148 bytes.
  The `ld` at 0xa838 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `sd` at 0xa870 stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0xa87c stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `jalr` at 0xa834 calls sv_alloc with a0=0x0, a1=0x0, a2=[a0+8]:8, a3=a3 at entry (arg3).
  The `jalr` at 0xa880 calls init_mutex with a0=a0+24, a1=0x0, a2=sym(.rodata)+6416, a3=-0x1, a4=sym(init_mutex), a5=sym(.rodata)+6416.
  The return at 0xa890 has v0 = ret(init_mutex).

- `init_waitqueue_head` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa804
  **Established.** Builds a wait-queue record: it calls `sv_alloc` at 0xa834 with 0, 0 and the doubleword at a0 +8 and stores the result at record +0 (0xa870), clears the word at +16 (0xa87c), and calls `init_mutex` at 0xa880 on record +24 with name "wq mutex" from `.rodata` +0x1930 and a last argument of -1. It is called by `__ke_alloc_wait_queue_head_struct`.

- `sleep_on_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa964 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xa964-0xaa18 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0xa9a8 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `sw` at 0xa9b8 stores 4 bytes to a0 (arg0 at entry) +0x10.
  The `ld` at 0xa9dc loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0xa98c calls hold_nonfatalsig with a0=sp-48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xa9d8 calls sv_timedwait_sig_notify with a0=[a0]:8, a1=0x1e, a2=a0+24, a3=0x0, a4=0x0, a5=sp-40, a6=0x0.
  The `jalr` at 0xa9fc calls release_nonfatalsig with a0=sp-48, a1=sym(release_nonfatalsig), a2=?, a3=?.
  The return at 0xaa10 has v0 = ret(sv_timedwait_sig_notify).

- `sleep_on_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa964
  **Established.** Sleeps on a wait-queue record with signals allowed: it brackets the wait with `hold_nonfatalsig` at 0xa98c and `release_nonfatalsig` at 0xa9fc, adds 1 to the count word at +16 (0xa9b8), and calls `sv_timedwait_sig_notify` at 0xa9d8 on the synchronisation variable at +0 with the mutex at +24 and the value 30 as its second argument. It returns the wait's own result; `__ke_sleep_on_queue` calls it.

- `fglrx_add_thread_exit_callback` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xabd4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xabd4-0xac7c (168 bytes).
  It occupies 168 bytes.
  The `ld` at 0xabd8 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0xabdc loads 4 bytes from [a0]:8 +0xdc.
  The `jalr` at 0xac08 calls curproc with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xac28 calls proc_pid with a0=ret(curproc), a1=sym(proc_pid), a2=?, a3=?.
  The `jalr` at 0xac68 calls add_exit_callback with a0=ret(proc_pid), a1=0x1, a2=sym(fglrx_thread_exit), a3=a0 at entry (arg0), a4=sym(fglrx_thread_exit), a5=sym(add_exit_callback), a6=sym(add_exit_callback).
  The `beq` branch at 0xabe8 targets 0xac74, is taken when at(=[[a0]:8+220]) == 0, and falls through when at(=[[a0]:8+220]) != 0.
  The return at 0xac74 has v0 = one of 0x0, ret(add_exit_callback).

- `fglrx_add_thread_exit_callback` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xabd4
  **Inferred.** The object at a0 is reached through its first word, and the 4-byte field at +0xdc of that object is read (the `lw` at 0xabdc). When that field is zero, the `beq` at 0xabe8 skips to the return at 0xac74. Otherwise the routine calls `curproc` at 0xac08, passes its result to `proc_pid` at 0xac28, and calls `add_exit_callback` at 0xac68 with that pid, the value 1, the callback `fglrx_thread_exit` and the entry argument a0 as the callback's argument. The return gives 0 on the skip path and `add_exit_callback`'s result on the other.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_avl_mem_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac7c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xac7c-0xac84 (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0xac80 loads 8 bytes from a0 (arg0 at entry) +0x28.
  The return at 0xac7c has v0 = [a0+40]:8.

- `fglrx_avl_mem_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac7c
  **Inferred.** Returns the 64-bit field at offset 0x28 (40) of its argument. The routine is 8 bytes: the doubleword load at 0xac80 is in the delay slot of the return at 0xac7c. The name suggests the start of available memory, but the render does not show that field's use.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_avl_mem_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac84 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xac84-0xac94 (16 bytes).
  It occupies 16 bytes.
  The `ld` at 0xac84 loads 8 bytes from a0 (arg0 at entry) +0x30.
  The `ld` at 0xac88 loads 8 bytes from a0 (arg0 at entry) +0x28.
  The return at 0xac8c has v0 = ([a0+40]:8 + [a0+48]:8).

- `fglrx_avl_mem_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac84
  **Established.** Computes the end of an available-memory range: it loads the doublewords at a0 +48 and a0 +40 and returns their sum in the delay slot of the return (0xac84 to 0xac90). It makes no calls and no relocation in the object points at it.

- `fglrx_avl_map_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac94 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xac94-0xac9c (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0xac98 loads 8 bytes from a0 (arg0 at entry) +0x28.
  The return at 0xac94 has v0 = [a0+40]:8.

- `fglrx_avl_map_start` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac94
  **Inferred.** Returns the 8-byte field at a0+0x28 in v0 and does nothing else. The name suggests that field is the start address of a mapping held in an AVL tree. The field's type is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_avl_map_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac9c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xac9c-0xacac (16 bytes).
  It occupies 16 bytes.
  The `ld` at 0xac9c loads 8 bytes from a0 (arg0 at entry) +0x30.
  The `ld` at 0xaca0 loads 8 bytes from a0 (arg0 at entry) +0x28.
  The return at 0xaca4 has v0 = ([a0+40]:8 + [a0+48]:8).

- `fglrx_avl_map_end` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xac9c
  **Inferred.** Returns the sum of the 8-byte fields at offsets 40 and 48 of arg0 (loads at 0xac9c and
  0xaca0, return at 0xaca4). If those fields hold a mapping's start and length, this is its end address.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_irix_avl_init` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xacac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xacac-0xad68 (188 bytes).
  It occupies 188 bytes.
  The `jalr` at 0xad00 calls avl_init_tree with a0=sym(fglrx_irixMapLock), a1=sym(fglrx_QCL_zone), a2=sym(avl_init_tree), a3=sym(fglrx_QCL_zone).
  The `jalr` at 0xad54 calls avl_init_tree with a0=sym(fglrx_irixMapLock), a1=sym(fglrx_QCL_zone), a2=sym(avl_init_tree), a3=sym(fglrx_QCL_zone).
  The return at 0xad60 has v0 = ret(avl_init_tree).

- `fglrx_irix_avl_init` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xacac
  **Inferred.** Initialises AVL trees by calling `avl_init_tree` twice, at 0xad00 and 0xad54. Both calls pass the same two symbols, `fglrx_irixMapLock` and `fglrx_QCL_zone`, so the render does not show whether they initialise one tree or two. The return at 0xad60 hands back the second call's result.
  Reviewed: 2026-11-12 (sonnet)

- `fglrx_irix_kern_findmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb624 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xb624-0xb6d4 (176 bytes).
  It occupies 176 bytes.
  The `ld` at 0xb6b0 loads 8 bytes from ret(avl_find) +0x48.
  The `jalr` at 0xb66c calls mraccessf with a0=sym(fglrx_irixMapLock), a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xb690 calls avl_find with a0=sym(fglrx_irixMapLock), a1=a0 at entry (arg0), a2=?, a3=?.
  The `jalr` at 0xb6b4 calls mrunlock with a0=sym(fglrx_irixMapLock), a1=?, a2=?, a3=?.
  The return at 0xb6cc has v0 = [ret(avl_find)+72]:8.

- `fglrx_irix_kern_findmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb624
  **Inferred.** The routine brackets a lookup with `mraccessf` at 0xb66c and `mrunlock` at 0xb6b4, with the render giving `fglrx_irixMapLock` as a0 for both (and a1 of 0 for `mraccessf`). Between them, `avl_find` at 0xb690 is called with a0 given as `fglrx_irixMapLock` and a1 equal to a0 at entry. The 8-byte word at +0x48 of the value `avl_find` returns is loaded at 0xb6b0 and returned at 0xb6cc. The render shows no null test on the value `avl_find` returns, so if it returned null the load would read through a null pointer.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_free_consistent` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb9f8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xb9f8-0xba2c (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0xba18 calls fglrx_irix_kern_freemap with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xba24 has v0 = ret(fglrx_irix_kern_freemap).

- `__ke_pci_free_consistent` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xb9f8
  **Inferred.** Forwards a free request to `fglrx_irix_kern_freemap`. The call at 0xba18 passes arg2 as its first argument, arg1 as its second, and arg2 and arg3 unchanged after that, and the routine returns that call's result at 0xba24. The name suggests freeing consistent PCI memory, but the render shows no PCI-side work in this routine.
  Reviewed: 2026-11-12 (sonnet)

- `__KE_DEBUG3` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xbaec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xbaec-0xbb18 (44 bytes).
  It occupies 44 bytes.
  The return at 0xbb10 has v0 = ?.

- `__KE_DEBUG3` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xbaec
  **Established.** Third debug log macro whose output is compiled out: it spills a0 to a7 at sp+0 to sp+56 (0xbaf0 to 0xbb0c) and returns at 0xbb10. `drm_vm_open` and `drm_vm_close` call this address and so get no log line.

- `drm_mem_dec_locked_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xd034 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xd034-0xd0ec (184 bytes).
  It occupies 184 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0xd054, `ld` at 0xd0d8.
  The `lld` at 0xd090 loads 8 bytes from sym(high_memory) +0x80168.
  The `scd` at 0xd09c stores 8 bytes to sym(high_memory) +0x80168.
  The `ld` at 0xd0ac loads 8 bytes from a0 (arg0 at entry) +0x2d98.
  The `lw` at 0xd0c0 loads 4 bytes from [a0+11672]:8 +0x10.
  The `sw` at 0xd0cc stores 4 bytes to [a0+11672]:8 +0x10.
  The `jalr` at 0xd064 calls __ke_spin_lock with a0=[a0]:8, a1=0x1, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xd0d4 calls __ke_spin_unlock with a0=[a0]:8, a1=0x1, a2=?, a3=?.
  The `beql` branch at 0xd0a0 targets 0xd090, is taken when a2(?) == 0, and falls through when a2(?) != 0; its branch-likely delay slot `nop` at 0xd0a4 runs only when taken and is annulled on fall-through.
  The return at 0xd0e4 has v0 = ret(__ke_spin_unlock).

- `drm_mem_dec_locked_pages` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xd034
  **Inferred.** Takes the spinlock at the pointer loaded from a0 with `__ke_spin_lock` at 0xd064, updates a 64-bit word at `sym(high_memory)+0x80168` with an lld/scd pair retried by the `beql` at 0xd0a0, updates the 32-bit word at `[a0+11672]+0x10` with lw/sw at 0xd0c0 and 0xd0cc, releases the lock with `__ke_spin_unlock` at 0xd0d4, and returns that unlock's result at 0xd0e4. The name says a locked-page count is decreased; the facts do not show the direction or amount of either update. The symbol name for the 64-bit word is the render's label and may not be the kernel's variable.
  Reviewed: 2026-11-12 (sonnet)

- `drm_strfree` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xdac4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0xdac4-0xdb4c (136 bytes).
  It occupies 136 bytes.
  The `jalr` at 0xdb04 calls __ke_strlen with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0xdb3c calls drm_free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=a2 at entry (arg2), a4=sym(drm_free), a5=sym(drm_free).
  The `bne` branch at 0xdad8 targets 0xdaec, is taken when a1 != 0, and falls through when a1 == 0.
  The `beq` branch at 0xdb44 targets 0xdae0 and is always taken.
  The return at 0xdae4 has v0 = one of ?, ret(drm_free).

- `drm_strfree` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xdac4
  **Established.** Frees a string allocated through the driver's allocator: a null pointer in a1 returns at once (0xdad8); otherwise it calls `__ke_strlen` at 0xdb04 and then `drm_free` at 0xdb3c with the device in a0, the string in a1, a size of length plus 1 (0xdb20) and the type taken from the caller's a2.

- `firegl_modify_ldt` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x10278
  **Inferred.** An 8-byte stub. The only rendered fact is that the return at 0x10278 leaves v0 at 0x0, with no calls, memory accesses or branches. The name suggests an LDT edit, which this build does not perform, so the stub may stand in for an unsupported call.
  Reviewed: 2026-11-12 (sonnet)

- `__fglDRMPM4Alloc` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x11808
  **Inferred.** A 152-byte routine that loads an 8-byte field at +0x10 and later loads at +0x10, +0x4, +0x8, +0x14 and +0x18 (the facts do not show every base register; the fifth load operand a6 and the call's a5 are read through the pointer loaded from a0+16). The `blez` at 0x11810 branches to 0x11898 when a1 <= 0. Two forward unsigned compares at 0x11840 and 0x11850 branch to 0x11870 and 0x11874; the facts show no backward branch, so no loop is established. The `jalr` at 0x11888 calls `firegl_PM4Alloc`. The return at 0x11868 yields one of an unresolved value, the callee's v0 or 0x0. The meaning of the fields cannot be settled from the facts, so the role is only an allocation call guarded by field checks.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_release_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x14230 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x14230-0x142b0 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x14248 loads 4 bytes from sym(.data) +0x99c.
  The `sw` at 0x14260 stores 4 bytes to sym(.data) +0x99c.
  The `jalr` at 0x142a0 calls cmn_err with a0=0x4, a1=sym(.rodata)+13048, a2=sym(cmn_err), a3=sym(.rodata)+13048.
  The `beq` branch at 0x1425c targets 0x1426c, is taken when at(=[sym(.data)+2460]+1) == v0(=0x1), and falls through when at(=[sym(.data)+2460]+1) != v0(=0x1).
  The `beq` branch at 0x142a8 targets 0x14264 and is always taken.
  The return at 0x14264 has v0 = one of 0x1, ret(cmn_err).

- `firegl_release_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x14230
  **Inferred.** Loads the word at `.data`+0x99c at 0x14248, adds 1 to it, and compares the sum with 1 at the branch at 0x1425c. A word is stored at `.data`+0x99c at 0x14260, and the stored value is not recovered by the render. When the compared values are equal, the branch is taken and the `jalr` at 0x142a0 calls `cmn_err` with 4 as its first argument and a `.rodata` pointer as its second. Otherwise the routine returns at 0x14264. The return value is one of 0x1 or the result of `cmn_err`.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x142b0-0x14330 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x142c8 loads 4 bytes from sym(.data) +0x9a0.
  The `sw` at 0x142e0 stores 4 bytes to sym(.data) +0x9a0.
  The `jalr` at 0x14320 calls cmn_err with a0=0x4, a1=sym(.rodata)+13048, a2=sym(cmn_err), a3=sym(.rodata)+13048.
  The `beq` branch at 0x142dc targets 0x142ec, is taken when at(=[sym(.data)+2464]+1) == v0(=0x1), and falls through when at(=[sym(.data)+2464]+1) != v0(=0x1).
  The `beq` branch at 0x14328 targets 0x142e4 and is always taken.
  The return at 0x142e4 has v0 = one of 0x1, ret(cmn_err).

- `firegl_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Role (from name): signal that a swap is ready. It loads the word at `.data+0x9a0` at 0x142c8 and stores a word at the same offset at 0x142e0. The branch at 0x142dc is taken when that word plus one equals 1, to 0x142ec. When it is not taken, the routine calls `cmn_err` at 0x14320 with level 4 and a format string from `.rodata`. The common return at 0x142e4 gives 1 or the `cmn_err` result. The render does not show which path performs the store at 0x142e0 or what value is stored.
  Reviewed: 2026-11-12 (sonnet)

- `is1_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Loads the word at .data+0x9a0 (0x142c8), compares the loaded word plus one with 1 at
  0x142dc, and stores to the same word at 0x142e0. The branch at 0x142dc is taken when that sum equals 1. The
  routine calls `cmn_err` at 0x14320 with level 4 and the string at .rodata+13048 on one path and returns on
  the other. The facts do not show the value stored at 0x142e0, which side of the branch reaches the call, or
  what the word counts.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Warns through `cmn_err` when the word at `.data+2464` is zero: the branch at 0x142dc is taken when that word plus one equals 1, and the taken arm reaches the `jalr` at 0x14320, which calls `cmn_err` with a0 = 4 and a fixed message at `.rodata+13048`. The store at 0x142e0 sits in the branch's delay slot, so it runs on both arms, and the value stored at `.data+0x9a0` is unknown. The return at 0x142e4 is shared by both arms: the other arm returns 1 there, and the warning arm jumps back to it with `cmn_err`'s result.
  Reviewed: 2026-11-12 (sonnet)

- `is1_fire_swapready` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x142b0
  **Inferred.** Loads a 4-byte word at .data+0x9a0 (lw at 0x142c8) and stores a word to the same offset
  (sw at 0x142e0); the facts do not show the stored value. When the loaded value plus 1 equals 1 (beq at
  0x142dc), it calls cmn_err at 0x14320 with level 4 and a fixed string from .rodata. Otherwise it returns 1 at
  0x142e4. On the log path the return is whatever cmn_err returns.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_unbind` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x14330 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x14330-0x143b0 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x14348 loads 4 bytes from sym(.data) +0x9a4.
  The `sw` at 0x14360 stores 4 bytes to sym(.data) +0x9a4.
  The `jalr` at 0x143a0 calls cmn_err with a0=0x4, a1=sym(.rodata)+13048, a2=sym(cmn_err), a3=sym(.rodata)+13048.
  The `beq` branch at 0x1435c targets 0x1436c, is taken when at(=[sym(.data)+2468]+1) == v0(=0x1), and falls through when at(=[sym(.data)+2468]+1) != v0(=0x1).
  The `beq` branch at 0x143a8 targets 0x14364 and is always taken.
  The return at 0x14364 has v0 = one of 0x1, ret(cmn_err).

- `firegl_unbind` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x14330
  **Established.** Unbind hook used when the image-sync driver is not in the kernel; the same bytes carry the name `is1_unbind`. It adds 1 to the word at `.data` +0x9a4 (0x14348 to 0x14360) and only when the new value is exactly 1 calls `cmn_err` at 0x143a0 with level 4 and "fops: is1_unbind not present in kernel?". `firegl_release_helper` calls it.

- `firegl_hash_mutex` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x15054 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x15054-0x1505c (8 bytes).
  It occupies 8 bytes.
  The return at 0x15054 has v0 = ?.

- `firegl_hash_mutex` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x15054
  **Established.** Hash for the mutex identifier table: it masks a0 with 0xf in the delay slot of the return (0x15058), giving a slot from 0 to 15. `_firegl_add_mutex`, `_firegl_find_file` and `firegl_remove_mutex` call it.

- `_firegl_find_file` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1505c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1505c-0x150e0 (132 bytes).
  It occupies 132 bytes.
  The `ld` at 0x1509c loads 8 bytes from (a0 + (ret(.text+86100) << 0x4)) +0x90.
  The `lw` at 0x150ac loads 4 bytes from ?.
  The `ld` at 0x150b8 loads 8 bytes from ?.
  The `jalr` at 0x1508c calls .text+86100 with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x150a4 targets 0x150c4, is taken when a3(=[(a0 + (ret(.text+86100) << 0x4))+144]:8) == 0, and falls through when a3(=[(a0 + (ret(.text+86100) << 0x4))+144]:8) != 0.
  The `beq` branch at 0x150b0 targets 0x150d8, is taken when a4(?) == s0(=a1), and falls through when a4(?) != s0(=a1).
  The `bne` branch at 0x150bc targets 0x150ac, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x150d8 targets 0x150cc and is always taken.
  The return at 0x150d0 has v0 = one of 0x0, ?.

- `_firegl_find_file` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1505c
  **Established.** Looks up an identifier in the 16-slot chain table at +144 of the record in a0. The slot is the identifier in a1 hashed by the routine at 0x15054 (call at 0x1508c); the chain head is the doubleword at a0 +144 plus 16 times the slot (0x15094 to 0x1509c). It walks nodes by the next pointer at +8 (0x150b8) until the word at +0 equals the identifier (0x150b0), and returns the node or 0. `firegl_new_mutex` calls it.

- `firegl_get_lockid` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17484 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x17484-0x17540 (188 bytes).
  It occupies 188 bytes.
  The `lw` at 0x174e4 loads 4 bytes from ret(__ke_get_file_priv) +0x1c.
  The `jalr` at 0x174ac calls __ke_get_file_priv with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x174f0 calls .text+90428 with a0=sym(.rodata)+15136, a1=[ret(__ke_get_file_priv)+28], a2=sym(.text)+90428, a3=[ret(__ke_get_file_priv)+28], a4=sym(.rodata)+15136.
  The `jalr` at 0x17518 calls __ke_copy_to_user with a0=a3 at entry (arg3), a1=sp-32, a2=0x4, a3=sym(__ke_copy_to_user), a4=sym(__ke_copy_to_user).
  The `beq` branch at 0x17520 targets 0x17538, is taken when v0(=ret(__ke_copy_to_user)) == 0, and falls through when v0(=ret(__ke_copy_to_user)) != 0.
  The `beq` branch at 0x17538 targets 0x1752c and is always taken.
  The return at 0x17530 has v0 = one of -0xe, 0x0.

- `firegl_get_lockid` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17484
  **Established.** Returns the lock identifier of a file to user space. It calls `__ke_get_file_priv` at 0x174ac on the file in a1, logs "lockid = %d" with the word at +28 of the private record (call at 0x174f0), then `__ke_copy_to_user` at 0x17518 writes that 4-byte word to the pointer in a3. A failed copy returns -14; otherwise 0. Its pointer sits at `.data` +0x8b8.

- `firegl_cp_resume` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17cc8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x17cc8-0x17d58 (144 bytes).
  It occupies 144 bytes.
  The `jalr` at 0x17cf0 calls __ke_get_file_priv with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x17d28 calls .text+95700 with a0=sym(.rodata)+16448, a1=?, a2=?, a3=?.
  The `jalr` at 0x17d30 calls .text+95700 with a0=sym(.rodata)+16448, a1=?, a2=?, a3=?.
  The `jalr` at 0x17d38 calls .text+95700 with a0=sym(.rodata)+16448, a1=?, a2=?, a3=?.
  The return at 0x17d50 has v0 = 0x0.

- `firegl_cp_resume` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17cc8
  **Established.** Command-processor resume request that only logs. It calls `__ke_get_file_priv` at 0x17cf0, then the argument-spilling log stub at 0x175d4 three times (0x17d28, 0x17d30, 0x17d38) with the text "\n", "Starting firegl_cp_resume()" and "done!" from `.rodata` +0x4068, +0x4288 and +0x4280, and returns 0. It writes no register and starts no engine. Its pointer sits at `.data` +0x988.

- `drm_hash_magic` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17e18 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x17e18-0x17e20 (8 bytes).
  It occupies 8 bytes.
  The return at 0x17e18 has v0 = ?.

- `drm_hash_magic` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x17e18
  **Established.** Hash for the DRM authentication magic table: the delay slot of the return at 0x17e18 masks a0 with 0xf (0x17e1c), choosing one of 16 slots. Called by `drm_add_magic`, `drm_find_file` and `drm_remove_magic`.

- `__KE_DEBUG2` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1883c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1883c-0x18868 (44 bytes).
  It occupies 44 bytes.
  The return at 0x18860 has v0 = ?.

- `__KE_DEBUG2` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1883c
  **Established.** Second debug macro of the object with its output removed: it spills a0 to a7 at 0x18840 to 0x1885c and pops its 64-byte frame at 0x18864. Only `_r6x_switch_context` calls this address.

- `add_buffer_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x18da0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x18da0-0x18e60 (192 bytes).
  It occupies 192 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x60, including `ld` at 0x18e0c, `ld` at 0x18e48.
  The `ld` at 0x18e10 loads 8 bytes from a0 (arg0 at entry) +0xd0.
  The `sd` at 0x18e14 stores 8 bytes to a1 (arg1 at entry) +0x68.
  The `ld` at 0x18e1c loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `sd` at 0x18e28 stores 8 bytes to a0 (arg0 at entry) +0xd0.
  The `ld` at 0x18e34 loads 8 bytes from [a0+72]:8 +0x490.
  The `sd` at 0x18e40 stores 8 bytes to [a0+72]:8 +0x490.
  The `jalr` at 0x18de8 calls .text+101448 with a0=sym(.rodata)+17848, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x18e08 calls __ke_down with a0=[a0+96]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x18e44 calls __ke_up with a0=[a0+96]:8, a1=[[a0+72]:8+1168]:8+1, a2=[a0+72]:8, a3=sym(__ke_up).
  The return at 0x18e58 has v0 = ret(__ke_up).

- `add_buffer_queue` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x18da0
  **Established.** Pushes a new buffer queue on the front of the list at +208 of the record in a0. It logs "bufs 0x%08lx" with the queue address (call at 0x18de8), takes the semaphore pointed to by +96 with `__ke_down` (0x18e08), sets queue +104 to the old head (0x18e10 to 0x18e14) and the head to the queue (0x18e28), adds 1 to the doubleword at +1168 of the structure at record +72 (0x18e34 to 0x18e40) and releases with `__ke_up` (0x18e44). `firegl_alloc_bufs` calls it.

- `firegl_aperture_size` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b034 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1b034-0x1b0e0 (172 bytes).
  It occupies 172 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x0, including `ld` at 0x1b0a0, `ld` at 0x1b0c4.
  The `lw` at 0x1b0bc loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `jalr` at 0x1b07c calls .text+108452 with a0=sym(.rodata)+20600, a1=a0 at entry (arg0), a2=sym(.text)+108452, a3=sym(.rodata)+20600, a4=sym(.rodata)+20600.
  The `jalr` at 0x1b09c calls __ke_down with a0=[a0]:8, a1=?, a2=?, a3=sym(__ke_down), a4=sym(__ke_down).
  The `jalr` at 0x1b0c0 calls __ke_up with a0=[a0]:8, a1=?, a2=?, a3=?, a4=sym(__ke_up), a5=sym(__ke_up).
  The return at 0x1b0d8 has v0 = [a0+24].

- `firegl_aperture_size` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b034
  **Inferred.** Reports the size of a unified-memory pool. It logs "request max. free blocksize from pool=0x%08lx" with the pool pointer (call at 0x1b07c), takes the semaphore at pool +0 with `__ke_down` (0x1b0a0), reads the word at pool +24 (0x1b0bc), releases with `__ke_up` (0x1b0c4) and returns the word. `firegl_init_aperture` stores the pool's page count at that offset when the pool is created.

- `firegl_aperture_slot_size_in_elements` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b8f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1b8f0-0x1b8f8 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x1b8f4 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The return at 0x1b8f0 has v0 = [a0+32].

- `firegl_aperture_slot_size_in_elements` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b8f0
  **Inferred.** Returns the 32-bit field at offset 0x20 (32) of its argument. The routine is 8 bytes: the word load at 0x1b8f4 is in the delay slot of the return at 0x1b8f0. The name suggests the aperture slot size in elements, which matches the field read.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_aperture_slot_size_in_elements` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1b8f0
  **Inferred.** A leaf accessor: it loads the 4-byte word at offset 0x20 of the structure in a0 and returns it in v0 at 0x1b8f0. The structure's type is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_addmap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1bc50
  **Established.** Registers one memory map on the device record in a0 from the request in a1, allocating its backing store by map type. An offset or size that is not a multiple of 0x4000 (the `andi` tests at 0x1bc6c and 0x1bccc) prints "map offset ... not page aligned" or "map size ... not page aligned" and returns -22. Under the semaphore at record +0 (`__ke_down_struct_sem` at 0x1bd50) a flag bit 0x20 in the word at request +20 marks the shared-area map; when a SAREA already sits at record +104 the request's offset is replaced by it. The offset is then recomputed from the type word at +16 by the routine at 0x1bb6c, and the list at +848 is searched for it: an identical offset, size, type and flags returns the old map's address at +24 with 0 (0x1bf3c), a mismatch returns -22.
  A new map is dispatched through the 14-entry jump table at `.rodata` +0x59f0 on the type word. Type 1 refuses a second register map when record +1000 is non-zero (0x1c054). Types 0 and 1 call `__ke_config_mtrr` and then `__ke_mtrr_add_wc` at 0x1c0e0 (a negative result is logged and ignored, a positive one is stored at map +32). Type 0 takes its address from the doubleword at +632 of the structure that record +11656 points to (0x1c10c). Type 1 maps with `drm_ioremap` (call at 0x1bf88), stores the address at record +1000 and stores the word at register offset 0xf18 masked with 0xffff0000 at record +1008 (0x1c2bc to 0x1c2cc). Type 2 calls `drm_vmalloc` (0x1c1e0); with the 0x20 flag it also stores the address at record +104, address +64 at +400 and address +2200 at +992. Types 10 to 13 only log; any other type logs "type = UNKNOWN" and returns -22. The map is linked after the tail at record +928 (0x1bfa8 to 0x1bfc8), the semaphore is released and the result is 0, -12 or -22.

- `firegl_noop` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1eec0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1eec0-0x1ef0c (76 bytes).
  It occupies 76 bytes.
  The `jalr` at 0x1eef4 calls .text+126612 with a0=sym(.rodata)+26112, a1=sym(.rodata)+26112, a2=sym(.text)+126612, a3=sym(.text)+126612.
  The return at 0x1ef04 has v0 = 0x0.

- `firegl_noop` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1eec0
  **Inferred.** Makes one call, at 0x1eef4, to an unnamed routine (.text+126612), with .rodata+26112 in a0
  and a1, and returns 0. The name says it does nothing, but the code makes that call. The callee decides what
  happens, and the render does not name it or show what is at .rodata+26112.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_noop` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1eec0
  **Inferred.** Makes one call to .text+126612 (jalr at 0x1eef4) with the same .rodata address
  (.rodata+26112) in a0 and a1, then returns 0 at 0x1ef04. The facts show no other instructions with effects.
  The name says no-op, but the body calls a routine, so whether that call does anything is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_irq_vsync` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f024 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1f024-0x1f058 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x1f044 calls _r6x_service_irq_vsync_handler with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1f050 has v0 = ret(_r6x_service_irq_vsync_handler).

- `firegl_irq_vsync` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f024
  **Established.** Vertical-sync interrupt entry that forwards to the R6xx-named service handler: it moves the board pointer from a1 into a0 and calls `_r6x_service_irq_vsync_handler` with `jalr` at 0x1f044, returning that call's result. It adds no work of its own.

- `firegl_irq_framelock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f058 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1f058-0x1f08c (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x1f078 calls _r6x_service_irq_framelock_handler with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1f084 has v0 = ret(_r6x_service_irq_framelock_handler).

- `firegl_irq_framelock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f058
  **Established.** Frame-lock interrupt entry laid out like the vertical-sync one at 0x1f024: the board pointer a1 becomes a0 and `_r6x_service_irq_framelock_handler` is called at 0x1f078; its result is returned. No state is kept here.

- `add_memlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f940 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x1f940-0x1f9f0 (176 bytes).
  It occupies 176 bytes.
  2 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x60, including `ld` at 0x1f9ac, `ld` at 0x1f9d8.
  The `ld` at 0x1f9bc loads 8 bytes from a0 (arg0 at entry) +0xf0.
  The `sd` at 0x1f9c8 stores 8 bytes to a1 (arg1 at entry) +0x18.
  The `sd` at 0x1f9d0 stores 8 bytes to a0 (arg0 at entry) +0xf0.
  The `jalr` at 0x1f988 calls .text+128900 with a0=sym(.rodata)+26400, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x1f9a8 calls __ke_down with a0=[a0+96]:8, a1=?, a2=?, a3=?.
  The `jalr` at 0x1f9d4 calls __ke_up with a0=[a0+96]:8, a1=sym(__ke_up), a2=[a0+240]:8, a3=?.
  The return at 0x1f9e8 has v0 = ret(__ke_up).

- `add_memlock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x1f940
  **Established.** Pushes a locked-memory record on the list at +240 of the record in a0. It logs "memlock 0x%08lx" with the record address (call at 0x1f988), takes the semaphore at +96 with `__ke_down` (0x1f9a8), sets record +24 to the old list head at +240 (0x1f9bc to 0x1f9c8), makes the new record the head (0x1f9d0) and releases with `__ke_up` (0x1f9d4). `firegl_lock_memory` calls it.

- `firegl_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x202d4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x202d4-0x20344 (112 bytes).
  It occupies 112 bytes.
  The `jalr` at 0x2030c calls .text+128900 with a0=sym(.rodata)+26400, a1=sym(.text)+128900, a2=sym(.rodata)+26400, a3=sym(.text)+128900.
  The `jalr` at 0x2032c calls __ke_flush_cache with a0=?, a1=?, a2=sym(__ke_flush_cache), a3=sym(__ke_flush_cache).
  The return at 0x2033c has v0 = 0x0.

- `firegl_flush_cache` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x202d4
  **Inferred.** The routine calls a helper at .text+128900 at 0x2030c with a .rodata address as its first argument, then calls `__ke_flush_cache` at 0x2032c with arguments the render does not resolve, and returns 0 at 0x2033c. The render does not show what the helper does, and no branch appears between the calls.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_set_cap_ipc_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20344 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x20344-0x20408 (196 bytes).
  It occupies 196 bytes.
  The `jalr` at 0x20368 calls __ke_get_cap_effective with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2038c calls __ke_capable with a0=0x1, a1=?, a2=?, a3=?.
  The `jalr` at 0x203b8 calls __ke_copy_to_user with a0=a3 at entry (arg3), a1=sp-32, a2=0x4, a3=sym(__ke_copy_to_user), a4=sym(__ke_copy_to_user).
  The `jalr` at 0x203f8 calls __ke_cap_effective_raise with a0=0x1, a1=?, a2=?, a3=sym(__ke_copy_to_user), a4=sym(__ke_cap_effective_raise), a5=sym(__ke_cap_effective_raise).
  The `beq` branch at 0x20394 targets 0x203e0, is taken when v0(=ret(__ke_capable)) == 0, and falls through when v0(=ret(__ke_capable)) != 0.
  The `beq` branch at 0x203c0 targets 0x203d8, is taken when v0(=ret(__ke_copy_to_user)) == 0, and falls through when v0(=ret(__ke_copy_to_user)) != 0.
  The `beq` branch at 0x203d8 targets 0x203cc and is always taken.
  The `beq` branch at 0x20400 targets 0x2039c and is always taken.
  The return at 0x203d0 has v0 = one of -0xe, 0x0.

- `firegl_set_cap_ipc_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20344
  **Inferred.** Role (from name): set the IPC_LOCK capability for the caller. It calls `__ke_get_cap_effective` at 0x20368 and `__ke_capable` with 0x1 at 0x2038c, and a zero `__ke_capable` result takes the branch at 0x20394 to 0x203e0. It copies 4 bytes to arg3 with `__ke_copy_to_user` at 0x203b8, and calls `__ke_cap_effective_raise` with 0x1 at 0x203f8. The routine returns 0 or -14 (EFAULT) at 0x203d0. The render does not show which path leads to the raise call or the order of the copy and the raise, so that order is not settled.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_set_cap_ipc_lock` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20344
  **Inferred.** Reads the effective capability set through `__ke_get_cap_effective` at 0x20368, tests capability 1 with `__ke_capable` at 0x2038c, and can raise capability 1 with `__ke_cap_effective_raise` at 0x203f8. A 4-byte value is copied to the caller through `__ke_copy_to_user` at 0x203b8. The branches at 0x20394 (on the capability test) and 0x203c0 (on the copy) choose the path, and the return at 0x203d0 gives 0 or -0xe. Which path raises the capability is unknown. The name points at the IPC_LOCK capability, which the arguments do not confirm.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_restore_cap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20408 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x20408-0x20474 (108 bytes).
  It occupies 108 bytes.
  The `jalr` at 0x20430 calls __ke_copy_from_user with a0=sp-16, a1=a3 at entry (arg3), a2=0x4, a3=a3 at entry (arg3).
  The `jalr` at 0x20464 calls __ke_set_cap_effective with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x20438 targets 0x2044c, is taken when v0(=ret(__ke_copy_from_user)) == 0, and falls through when v0(=ret(__ke_copy_from_user)) != 0.
  The `beq` branch at 0x2046c targets 0x20440 and is always taken.
  The return at 0x20444 has v0 = one of -0xe, 0x0.

- `firegl_restore_cap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20408
  **Inferred.** Copies 4 bytes from the user address in a3 onto the stack at sp-16 with
  `__ke_copy_from_user` at 0x20430. If the copy returns 0, it calls `__ke_set_cap_effective` at 0x20464
  and returns 0. If the copy fails, it returns -14, which is -EFAULT in the usual numbering.
  Reviewed: 2026-11-12 (sonnet)

- `firegl_restore_cap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20408
  **Inferred.** Copies 4 bytes from the user pointer in arg3 into a stack slot with __ke_copy_from_user
  (jalr at 0x20430). On success (beq at 0x20438) it calls __ke_set_cap_effective (jalr at 0x20464) and
  returns 0. On failure it returns -14 (-0xe).
  Reviewed: 2026-11-12 (sonnet)

- `_r6x_vs_stereo_swap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20a84 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x20a84-0x20ac4 (64 bytes).
  It occupies 64 bytes.
  The `ld` at 0x20a88 loads 8 bytes from a0 (arg0 at entry) +0x2d70.
  The `lw` at 0x20ab4 loads 4 bytes from a0 (arg0 at entry) +0x2d6c.
  The `jalr` at 0x20ab0 calls __ke_disable_irq with a0=[a0+11628], a1=a1 at entry (arg1), a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0x20a90 targets 0x20abc, is taken when at(=[a0+11632]:8) == 0, and falls through when at(=[a0+11632]:8) != 0.
  The return at 0x20abc has v0 = one of ?, ret(__ke_disable_irq).

- `_r6x_vs_stereo_swap` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20a84
  **Established.** Stereo swap step of the vertical-sync service. When the doubleword at +11632 of the device record is non-zero (0x20a88 to 0x20a90) it calls `__ke_disable_irq` at 0x20ab0 with the IRQ number in the word at +11628; otherwise it does nothing. `firegl_vs_stereo_swap` calls it.

- `_r6x_vs_validate` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20ac4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x20ac4-0x20b08 (68 bytes).
  It occupies 68 bytes.
  The `ld` at 0x20ac8 loads 8 bytes from a0 (arg0 at entry) +0x2d70.
  The `lw` at 0x20af4 loads 4 bytes from a0 (arg0 at entry) +0x2d6c.
  The `jalr` at 0x20af0 calls __ke_disable_irq with a0=[a0+11628], a1=a1 at entry (arg1), a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0x20ad0 targets 0x20afc, is taken when at(=[a0+11632]:8) == 0, and falls through when at(=[a0+11632]:8) != 0.
  The return at 0x20b00 has v0 = 0x0.

- `_r6x_vs_validate` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x20ac4
  **Established.** Vertical-sync validation step with the same guard as the stereo swap at 0x20a84: a non-zero doubleword at device +11632 leads to `__ke_disable_irq` at 0x20af0 on the IRQ number at +11628. Unlike the swap, it always returns 0 (0x20afc). `firegl_vs_validate` calls it.
