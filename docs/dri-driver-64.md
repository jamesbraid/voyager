# Direct-rendering driver, 64-bit build (fglrx_dri64.so)

The 64-bit direct-rendering module `usr/X11R6/lib/modules/dri/fglrx_dri64.so` is the user-side half of the FireGL driver. Most of its `firegl_*` routines are thin wrappers: each packs its arguments into a block and sends one `ioctl` request to the kernel driver (`fglrx.o`, see [kernel attach](kernel-attach.md)). Each entry names the request, the block layout and the return value, read from the module's `.text`.

Request numbers use the encoding of the shipped binary. Bits 16 to 28 hold the byte size of the block, the low byte is the request number, and the group byte is 0x64. The top bits carry the copy direction; the usual layout reads 0x80000000 as copy in and 0x40000000 as copy out. Which kernel handler serves each request is open: the route is the request table in `fglrx.o`.

Labels follow `AGENTS.md` section 5. **Established** means the whole routine was read in the shipped body, with its addresses cited.

## Buffer and memory requests

- `firegl_QueryVersion` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 60 bytes at 0x5160c0): **established.**
  All 15 instructions were read, and the routine makes no call.
  A zero pointer argument is skipped by the branch at 0x5160c8, 0x5160d4 or 0x5160e0, one for each of the three pointers.
  The word 3 goes through the first argument (store at 0x5160d0), 4 through the second (0x5160dc) and 1 through the third (0x5160e8).
  The return value 0 is set at 0x5160c4 and kept on both exits.
- `firegl_GetMemInfo` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 128 bytes at 0x516100): **established.**
  Its 32 instructions were read against the one `ioctl` call at 0x516144.
  Eight zero words fill the caller's buffer at offsets 0x0 to 0x1c (stores from 0x516118 to 0x516138).
  The buffer is the third `ioctl` argument, and request 0xc0206456 covers its 32 bytes in both directions.
  A zero result branches at 0x51614c to 0x51616c, which returns 0.
  Any other result loads `errno` from its GOT slot and returns the negated value; the negation sits in the delay slot at 0x516168.
- `firegl_AllocBuffer` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 228 bytes at 0x516180): **established.**
  The 57-instruction body was read to both return paths.
  A second argument of 0, 1, 2 or 3 passes; any other value returns -22 at 0x5161d0.
  A zero third argument returns -22 by the branch at 0x5161a8.
  The 24-byte block holds a zero doubleword at offset 0x0, the second argument as a word at 0x8, the third as a word at 0xc, zero at 0x10 and -1 at 0x14.
  Request 0xc0186440, which covers 24 bytes in both directions, goes to `ioctl` with the block as its third argument.
  On success the word at 0x14 is widened and stored as a doubleword through the fourth argument (0x516254 to 0x516258), and the doubleword at offset 0x0 is the return value.
  On failure the fourth argument receives the doubleword -1 and the return value is 0.
- `firegl_AllocCache` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 216 bytes at 0x516270): **established.**
  Its body was read through every path, 54 instructions in all.
  The second argument must be 4, 5 or 6; any other value returns -22 at 0x5162b8.
  A zero third argument returns -22 at 0x516320, reached through the branch at 0x516298.
  The block layout is the same as in `firegl_AllocBuffer`, and the request is 0xc0186440.
  On success the word at 0x14 is stored as a 32-bit word through the fourth argument (0x516330 to 0x516338), and the return is the doubleword at offset 0x0.
  On failure the fourth argument receives the 32-bit word -1 (0x516310) and the return is 0.
- `firegl_AllocBufferAtPhysicalAddress` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 196 bytes at 0x516350): **established.**
  Its 49 instructions were read end to end.
  Second arguments 1, 2 and 3 pass (branches at 0x516388, 0x516390 and 0x516398); any other value gives -22.
  A zero third argument (branch at 0x516380) also gives -22, loaded into the return register at 0x5163ac.
  The block has a zero doubleword at 0x0, the second argument as a word at 0x8, the third as a word at 0xc, zero at 0x10 and the fourth argument itself as a word at 0x14.
  Request 0xc0186440 goes to `ioctl` with the block as its third argument.
  The return is the doubleword at offset 0x0 on success (loaded in the delay slot at 0x516410) and 0 on failure.
  No pointer argument is written on any path.
- `firegl_FreeBuffer` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x516420): **established.**
  The 25 instructions form a single call with two exits, and all were read.
  Offset 0x0 of the block takes the second argument as a doubleword (store at 0x516440).
  ioctl gets 0x80186441, an input-only request with a 24-byte payload, and the first argument goes through as the descriptor.
  A zero result returns 0 at 0x516474.
  Otherwise the negated `errno` is returned, with the negation in the delay slot at 0x516470.
- `firegl_FreeBufferAdvanced` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 132 bytes at 0x516490): **established.**
  The 33 instructions were read, including the `errno` branch chain.
  The second argument becomes a doubleword at block offset 0x0 (store at 0x5164b4), and the third is kept at frame offset 0x18 (store at 0x5164a8).
  The request is 0x80186441, the same as `firegl_FreeBuffer`.
  A successful result reaches 0x516504, which sets 0, and returns at 0x51650c.
  After a failure, `errno` other than 16 gives its negation, computed at 0x5164f4.
  For errno 16, tested at 0x5164e0, bit 0 of the saved third argument decides: clear returns -16 (branch at 0x5164e8), set returns 0 (fall-through to 0x5164f8).
- `firegl_ModifyBuffer` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 104 bytes at 0x516520): **established.**
  Its 26 instructions were read, with one call.
  The second argument is written as a doubleword at block offset 0x0 (store at 0x516544), and the third as a word at offset 0x8 (store at 0x516538).
  The kernel sees request 0x80106460, sixteen bytes of input.
  Zero from `ioctl` returns 0; any failure returns the negated `errno`.

## Locks, mutexes and the AGP request

- `firegl_GetLockID` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 116 bytes at 0x516590): **established.**
  Every one of the 29 instructions was read.
  A zero word goes into the block at offset 0x0 before the call (store at 0x5165a8).
  The second argument, a pointer, is saved at frame offset 0x8 (store at 0x5165b4).
  The call uses request 0x40046457, which returns four bytes to the caller.
  On success the returned word is stored through the saved pointer (0x5165f4 to 0x5165f8), and the return is 0.
  On failure the return is the negated `errno`.
- `firegl_SetCapIpcLock` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 112 bytes at 0x516610): **established.**
  The 28 instructions were read, and the block word at offset 0x0 is never written by this routine.
  The second argument is saved at frame offset 0x8 (store at 0x516630).
  Request 0x40046458 is output-only, with a 4-byte payload.
  On success the kernel's word is stored through the saved pointer (0x516674), and the return is 0.
  On failure the negated `errno` is returned.
- `firegl_RestoreCap` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x516680): **established.**
  The word at block offset 0x0 holds the second argument (store at 0x5166a0).
  ioctl receives 0x80046459, an input-only request with a four-byte payload.
  A zero result returns 0; any other gives the negated `errno` (negation at 0x5166cc).
- `firegl_SetBlockMode` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x5166f0): **established.**
  Block offset 0x0 receives the second argument as a 32-bit word (store at 0x516710).
  The request, 0x8004645a, is input-only with four bytes.
  Return 0 on a zero result, and the negated `errno` otherwise (negation at 0x516740).
- `firegl_LockHardware` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 228 bytes at 0x516760): **established.**
  The 57 instructions were read, including the retry loop.
  The second argument is stored as the word at block offset 0x0 (store at 0x516798), and zero as the word at 0x4 (store at 0x51677c).
  The first call is `ioctl` with request 0x8008642a, eight bytes of input (call at 0x5167a4).
  A zero result passes through unchanged: the branch at 0x5167b8 leads to the return at 0x516808.
  On failure `errno` is read; 12, 19 or 22 end the attempt by calling `exit` with the negated value (0x516838 to 0x51683c), and that call does not return.
  Any other errno sends the same request again, repeating from 0x5167d4 until the call succeeds.
- `firegl_UnlockHardware` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 84 bytes at 0x516850): **established.**
  Its 21 instructions were read.
  Offset 0x0 of the block takes the second argument (store at 0x516874), and offset 0x4 is zeroed (store at 0x516868).
  The request is 0x8008642b, which takes eight bytes of input.
  A zero result is returned unchanged, since the branch at 0x516884 leads to the return at 0x516894.
  A failure calls `exit` with -1 (call at 0x51688c), which does not return.
- `firegl_AllocMutex` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 116 bytes at 0x5168b0): **established.**
  Each of the 29 instructions was read.
  The word at the address in the second argument is zeroed before the call (store at 0x5168c8).
  That pointer is saved at frame offset 0x8 (store at 0x5168d4).
  Request 0x40046446 returns four bytes to the caller.
  On success the block word is stored through the saved pointer (0x516914 to 0x516918), and the return is 0; on failure the negated `errno`.
- `firegl_FreeMutex` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x516930): **established.**
  All 25 instructions were read.
  A 32-bit store puts the second argument at block offset 0x0 (0x516950).
  The call is `ioctl` with request 0x80046447, which carries a four-byte input.
  The return is 0 on success and the negated `errno` on failure (negation at 0x51697c).
- `firegl_AgpLockPages` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x5169a0): **established.**
  The 24 instructions were read in full.
  The second argument passes unchanged as the third `ioctl` argument (move at 0x5169b8).
  Request 0x80c86445 copies 200 bytes in from the caller's buffer.
  Return 0 on success and the negated `errno` on failure (negation at 0x5169e8).
- `firegl_EnableAuthentication` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 104 bytes at 0x516a00): **established.**
  The 26 instructions were read end to end.
  The word at block offset 0x0 is 1 when the second argument is non-zero and 0 otherwise (`sltu` at 0x516a18).
  Request 0x8004644a takes four bytes of input.
  The return is 0 on success and the negated `errno` on failure (negation at 0x516a50).
- `firegl_RegisterTexture` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x516a70): **established.**
  Its 25 instructions were read.
  The first word of the block takes the second argument (store at 0x516a90).
  Request 0x80086448 carries eight bytes of input.
  On success the return value is the word at block offset 0x4 (load at 0x516ac4).
  On failure it is the negated `errno` (negation at 0x516abc).
- `firegl_UnregisterTexture` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 104 bytes at 0x516ae0): **established.**
  All 26 instructions were read.
  Offset 0x0 of the block takes the second argument (store at 0x516b00).
  ioctl gets request 0x80046449, four bytes of input.
  The return is 0 on success (0x516b34) and the negated `errno` on failure (negation at 0x516b2c).

## Kernel-object, memory and AGP requests

- `firegl_LockPages` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 352 bytes at 0x516b50): **established.**
  The whole body was read, from the -22 preset at 0x516b50 to the return at 0x516cb0.
  A zero second argument (branch at 0x516b64) or a zero third argument (branch at 0x516b78) returns -22.
  Otherwise the routine allocates 32 bytes with `drmMalloc` (call at 0x516b8c, GOT slot 7092); a zero result returns -12.
  It then computes a page count from the length (the low 32 bits of the third argument) plus the offset of the address within a 0x4000-byte unit, and allocates 8 bytes per unit with a second `drmMalloc` (call at 0x516c00).
  A zero result there frees the first buffer with `drmFree` and returns -12.
  The request is 0xc020644b, a 32-byte block in both directions at the frame base. It takes the address doubleword, the length word, the page count word and the second buffer pointer, and the kernel's first block doubleword is copied back into the first buffer.
  On success the first buffer pointer is stored through the fourth argument (0x516cac), and the return is 0.
  On ioctl failure the negated `errno` is stored as the return, the second buffer is freed (call at 0x516c68), and the first buffer is freed before the return (call at 0x516c20).
- `firegl_UnlockPages` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 140 bytes at 0x516cb0): **established.**
  Both `drmFree` calls and the ioctl call were read, and the whole body was read from the prologue to the return at 0x516d34.
  The first argument goes through as the ioctl descriptor, and the second argument's doubleword at offset 0 is copied into a 32-byte block (store at 0x516ccc).
  Request 0xc020644c covers that block in both directions.
  On failure the negated `errno` is returned at 0x516d08.
  On success the routine frees the pointer held at offset 24 of the caller's structure (`drmFree` call at 0x516d14, GOT slot 7093), then frees the structure itself (call at 0x516d20 with the second argument), and returns 0 (move at 0x516d2c).
- `firegl_FlushCache` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x516d40): **established.**
  The whole body was read; the routine makes one `ioctl` call at 0x516d64 and no other.
  The request is 0x2000644d with no payload (the size field is zero), and the third argument is zero (`move a2,zero` at 0x516d68, the delay slot of the call at 0x516d64).
  The return is 0 when the call succeeds and the negated `errno` otherwise (negation at 0x516d88).
- `firegl_InitIrq` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x516da0): **established.**
  The whole body was read in its single `ioctl` call at 0x516dc4.
  The second argument goes unchanged to `ioctl` as its third argument (move at 0x516db8), with request 0xc010645d, a 16-byte block in both directions.
  The return is 0 on success and the negated `errno` on failure (negation at 0x516de8).
- `firegl_ModuleParm` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 140 bytes at 0x516e00): **established.**
  Its whole body was read, with the `strncpy` call at 0x516e2c and the `ioctl` call at 0x516e48.
  A zero second argument returns -22 (branch at 0x516e18).
  Otherwise `strncpy` copies at most 256 bytes from the second argument into a 256-byte block on the stack, and the block's last byte (offset 255) is set to zero before the call (store at 0x516e44).
  The request is 0x8000644e, copy-in with no size field, and the first argument goes through as the descriptor.
  The return is 0 on success (0x516e84) and the negated `errno` on failure (negation at 0x516e6c).
- `firegl_RmMap` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x516e90): **established.**
  The whole body was read. The second argument is stored as a doubleword at offset 24 of a 40-byte block (store at 0x516eb0).
  The other bytes of that block are not written here, so the kernel receives whatever the stack held in them.
  Request 0x8028644f copies 40 bytes in, and the return is 0 on success and the negated `errno` on failure (negation at 0x516edc).
- `firegl_FreeKernelInfo` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 92 bytes at 0x516f00): **established.**
  The whole body was read, through the two `drmFree` calls at 0x516f30 and 0x516f40.
  A zero first argument returns at 0x516f18 with no call, and `v0` is not written on that path.
  Otherwise the doubleword at offset 0 of the structure is loaded (0x516f20), and if it is non-zero it is freed (call at 0x516f30).
  The structure pointer itself is then freed (call at 0x516f40), and the return is the value `drmFree` leaves in `v0`.
- `firegl_VerifyArea` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 156 bytes at 0x517140): **established.**
  The whole body was read, including the clear at 0x5171d0.
  The routine tests a global word at gp+24216 (load at 0x517154). A zero word returns 0 at 0x5171c0 with no call.
  Otherwise `ioctl` runs with request 0x80106451, a 16-byte input block: the second argument as a doubleword at offset 0 (store at 0x517174), the third argument as a word at offset 8 (store at 0x51716c), and the fourth as a word at offset 12 (store at 0x517168).
  On success the return is 0 (move at 0x517188).
  On failure the `errno` value is compared with 22 (branch at 0x5171a0). A match clears the global word (store at 0x5171d0) and returns 0; any other value returns the negated `errno` (negation at 0x5171a4).
- `firegl_GetAGPCapPtr` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 132 bytes at 0x5171e0): **established.**
  The whole body was read, with one `ioctl` call at 0x517220.
  A zero second argument returns -22 (branch at 0x5171f8 falls through to the return at 0x517204).
  Otherwise a zeroed 12-byte block is passed with request 0x400c6452, output only, and on success the word at offset 0 is stored through the second argument (store at 0x517258).
  The return is 0 on success and the negated `errno` on failure (negation at 0x517244).
- `firegl_GetAGPStatus` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 132 bytes at 0x517270): **established.**
  The whole body was read; the routine is the same shape as `firegl_GetAGPCapPtr`.
  A zero second argument returns -22 at 0x517294. The block is zeroed at offset 4 (store at 0x5172a4), the request is 0x400c6452, and on success the word at offset 4 is stored through the second argument (store at 0x5172e8).
  The return is 0 on success and the negated `errno` on failure (negation at 0x5172d4).
- `firegl_GetAGPCommand` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 132 bytes at 0x517300): **established.**
  The whole body was read; the routine is the same shape as `firegl_GetAGPCapPtr`.
  A zero second argument returns -22 at 0x517324. The block is zeroed at offset 8 (store at 0x517334), the request is 0x400c6452, and on success the word at offset 8 is stored through the second argument (store at 0x517378).
  The return is 0 on success and the negated `errno` on failure (negation at 0x517364).
- `firegl_InitCP` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x517390): **established.**
  The whole body was read; it makes one `ioctl` call at 0x5173b4.
  The second argument goes unchanged to `ioctl` as its third argument (move at 0x5173a8), with request 0x80206453, a 32-byte copy-in block.
  The return is 0 on success and the negated `errno` on failure (negation at 0x5173d8).
- `firegl_InitUMM` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x5173f0): **established.**
  The whole body was read; it makes one `ioctl` call at 0x517414.
  The second argument goes unchanged to `ioctl` as its third argument (move at 0x517408), with request 0x8018645b, a 24-byte copy-in block.
  The return is 0 on success and the negated `errno` on failure (negation at 0x51743c).
- `firegl_modify_ldt` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 108 bytes at 0x517450): **established.**
  The whole body was read; it makes one `ioctl` call at 0x517488.
  The 32-byte block takes the second argument as a word at offset 0 (store at 0x517480), the third as a doubleword at offset 8 (store at 0x517474), the fourth as a doubleword at offset 16 (store at 0x517468), and -1 as a word at offset 24 (store at 0x517470).
  Request 0xc0206455 covers the block in both directions.
  On success the return is the word at offset 24 (load at 0x5174ac), which the kernel may have overwritten.
  On failure the return is -1 (`li` at 0x517498), not the negated `errno`.
- `firegl_QueryHwCaps` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 112 bytes at 0x5174c0): **established.**
  The whole body was read. Four zero words are written to the caller's 16-byte buffer at offsets 0, 4, 8 and 12 (stores from 0x5174d8 to 0x5174e8), and that buffer is the third `ioctl` argument.
  Request 0x40106454 is output only, with a 16-byte payload.
  The return is 0 on success and the negated `errno` on failure (negation at 0x517518).
- `firegl_SyncDacs` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x5179a0): **established.**
  The whole body was read; it makes one `ioctl` call at 0x5179c4 with a zero third argument (move in the delay slot).
  Request 0x20006461 has no payload.
  The return is 0 on success and the negated `errno` on failure (negation at 0x5179ec).
- `firegl_EnableStereo` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x517a00): **established.**
  The whole body was read; it makes one `ioctl` call at 0x517a28.
  The second argument is stored as a word at block offset 0 (store at 0x517a20), and the block is passed as the third argument.
  Request 0x80046462 takes four bytes of input.
  The return is 0 on success and the negated `errno` on failure (negation at 0x517a4c).
- `firegl_AGPAcquire` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 100 bytes at 0x517a70): **established.**
  The whole body was read; it makes one `ioctl` call at 0x517a98.
  The second argument is stored as a word at block offset 0 (store at 0x517a90), and the block is passed as the third argument.
  Request 0x80046463 takes four bytes of input.
  The return is 0 on success and the negated `errno` on failure (negation at 0x517abc).
- `firegl_CPResume` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 96 bytes at 0x517ae0): **established.**
  The whole body was read; it makes one `ioctl` call at 0x517b04 with a zero third argument.
  Request 0x20006464 has no payload.
  The return is 0 on success and the negated `errno` on failure (negation at 0x517b28).
