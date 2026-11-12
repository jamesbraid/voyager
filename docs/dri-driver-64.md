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
  Otherwise a 12-byte stack block is passed with request 0x400c6452, output only; only its word at offset 0 is cleared (store at 0x517214), the other eight bytes are left as they were on the stack, and on success the word at offset 0 is stored through the second argument (store at 0x517258).
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

## Startup, teardown and idle wait

- `firegl_GetKernelInfo` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 472 bytes at 0x516f60): **established.** The routine was read in full.
  A null second argument returns -22 (branch at 0x516f7c, value at 0x516f84).
  Otherwise it stores a zero pointer through the second argument (0x516fa4) and allocates a 56-byte block with `drmMalloc` (call at 0x516fa8, GOT slot 7092). A null result returns -12.
  The first `ioctl` (call at 0x516ff8, GOT slot 6757) sends request 0xc0286450, a 40-byte block read and written, zeroed beforehand. The kernel writes the count at block offset 8.
  A failed first request frees the 56-byte block (`drmFree` at 0x517020) and returns the negated `errno`.
  On success with a nonzero count, the routine allocates count+1 bytes (call at 0x517054), stores that buffer pointer at block offset 0 (0x517060), and repeats the same request (call at 0x517094).
  A failed allocation sets -12 (0x5170c0 to 0x5170c4) and frees the block on the same path.
  A successful repeat writes a zero byte at index count of the buffer (0x5170e4). It then copies the buffer pointer to offset 0 of the 56-byte block and the block words at offsets 12 to 32 to offsets 8 to 48 of it (0x5170f8 to 0x517128), stores that block's address through the second argument (0x517134), and returns 0.
  With a zero count the buffer pointer stays null, so the repeat request runs with no buffer and the NUL store is skipped.
- `firegl_TermDRM` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 216 bytes at 0x5178c0): **established.** The routine was read in full.
  It returns -22 when its argument is null (branch at 0x5178dc), when the pointer at offset 40 is null (0x5178ec), when the pointer at offset 32 is null (0x5178f4), or when the doubleword at offset 24 is zero (0x5178fc).
  Otherwise it calls `drmUnmap` (call at 0x517934, GOT slot 7102) on the address at offset 24 of the block at offset 40, with a size of the 32-bit word at that block's offset 0 times the doubleword at its offset 32.
  A second `drmUnmap` (call at 0x51794c) releases the address at offset 24 of the argument, with 4 times the word at offset 8 of the block at its offset 16.
  A third `drmUnmap` (call at 0x51795c) releases the address at offset 32 of the argument, with 16384 bytes.
  It then frees the block at offset 40 (`drmFree` at 0x51796c, GOT slot 7093) and the argument itself (`drmFree` at 0x517978). It returns 0 at 0x517984.
- `__fglQSQuietDown` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 248 bytes at 0x517b40): **established.** The whole body was read.
  The routine polls the 32-bit word at offset 3648 (0xe40, the offset the open-questions note calls RBBM_STATUS) of its argument. Bit 31 is the busy flag here.
  If that bit is clear at entry, it returns 0 at once (branch at 0x517b78).
  Otherwise it reads the word again up to 2,000,000 times (loop from 0x517b84 to 0x517b98) and returns 0 as soon as the bit clears (0x517b90).
  If the bit is still set after those polls, it runs rounds of 10,000 counts (0x517ba4 to 0x517bc4, 200 rounds). Each round checks the bit, then calls `sginap` with 0 (call at 0x517bb4, GOT slot 6795). A round that finds the bit clear returns 0 (0x517bac).
  After the 200th round the routine returns 1 (0x517bd8).

## Shared word helpers

- `dummy_5` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 36 bytes at 0x518640): **established.** All eight instructions were read.
  It loads the pointer in GOT entry gp+24160 and the word through it, subtracts 2, and stores the result through the pointer in GOT entry gp+24184 (0x51864c to 0x518660).
- `dummy_6` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 36 bytes at 0x518670): **established.** All eight instructions were read.
  It takes the word through the pointer in GOT entry gp+24168, subtracts 2, and stores it through the pointer in GOT entry gp+24160 (0x51867c to 0x518690).
  Together with `dummy_5`, this is the same copy-minus-two pattern with the two GOT cells swapped.

## Display and drawable helpers

- `find_display` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 156 bytes at 0x5186c0): **established.** The whole routine was read.
  The first argument is the display. The extension-info pointer is the doubleword at gp+24224.
  When that pointer is set, it calls `XextFindDisplay` with the pointer and the display (call at 0x5186e0, loaded from gp+21664). A nonzero result is returned.
  A null result calls `XextAddDisplay` (call at 0x518710, loaded from gp+21672) with the same pointer and display, the doubleword at gp+24232 as the third argument, and the value stored at gp-31784, plus 6904, as the fourth. Its value is returned.
  When the extension-info pointer is null, the routine calls `XextCreateExtension` (call at 0x518734, loaded from gp+21680) and stores the result at gp+24224 (0x51873c). A nonzero result retries the lookup at 0x5186d8. A zero result returns 0.
- `close_display` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 56 bytes at 0x518760): **established.** All ten instructions were read.
  It calls `XextRemoveDisplay` (call at 0x518780, GOT slot 6805) with the extension-info doubleword from gp+24224 as the first argument and the display as the second, and returns the call's value.
- `fglx11GetDrawablePrivate` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 36 bytes at 0x519630): **established.** All nine instructions were read.
  It loads the pointer at offset 200 of its argument, then the doubleword at offset 136 of that. A zero value returns 0 (0x51964c). Otherwise it returns that value plus 17872 (0x45d0), at 0x519640.
- `fglx11GetReadDrawablePrivate` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 44 bytes at 0x519660): **established.** All eleven instructions were read.
  It follows the pointer at offset 200 of the argument, then the pointer at offset 8, then the pointer at offset 48. A null result returns 0 (0x519684). Otherwise it returns the doubleword at offset 8 of that pointer plus 17872 (0x519680).
- `fglX11DrawableGetSize` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 40 bytes at 0x5197c0): **established.** All ten instructions were read.
  The first argument's doubleword at offset 1128 points to a drawable record. The routine stores the words at record offsets 160, 164, 168 and 172 through the second, third, fourth and fifth arguments (0x5197c8 to 0x5197e4), each as a 32-bit store.
- `fglX11DrawableGetScreenSize` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 36 bytes at 0x5197f0): **established.** All nine instructions were read.
  It follows the record at offset 1128 of the first argument, then its doubleword at offset 32, then the doubleword at offset 88. The word at offset 200 of that record goes through the second argument (0x519800), and the word at offset 204 goes through the third (0x519810).
- `fglX11DrawableUpdate` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 8 bytes at 0x519820): **established.** Both instructions were read. It returns 1 and touches no memory.

## DRM lock wrappers

These routines pass the same lock-state structure to two helpers in the same object: the lock-and-update helper at 0x519030 (its symbol name is `FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM`) and the unlock helper at 0x5192a0 (`FGLX11_DRM_UNLOCK`). Both are reached by `bgezall` with the zero register, which is always taken and links the return address.

- `fglX11GLDRMLock` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 160 bytes at 0x519360): **established.** The whole body was read.
  The first argument's record at offset 200 gives a second record. The lock helper gets the doubleword at offset 304 of the record whose address is the doubleword at offset 56 of the second record (0x5193a8), the word at offset 8 of the second record, and the doubleword at offset 136 of the record at offset 200 (0x519390).
  After the helper returns, if bit 0 of the doubleword at offset 0 of the record at offset 200 is set, the routine clears that bit (0x5193c8).
  It then tests bit 0 of the word at 0x54964 past the first argument (the `lw` at 0x5193cc, with the base 0x50000 added to the argument). If that bit is set, it calls the function pointer at offset 248 of the first argument with the argument as its first argument (0x5193dc to 0x5193e0).
- `fglX11GLDRMUnlock` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 76 bytes at 0x519400): **established.** All nineteen instructions were read.
  It takes the record at offset 200 of its argument, then the record at offset 8 of that. It passes the doubleword at offset 304 of the record whose address is the doubleword at offset 56 of that record, as the first argument of `FGLX11_DRM_UNLOCK` (0x519434 and 0x519438). The second argument is the 32-bit word at offset 8 of the second record, and the third is the constant 0x71f778.
- `fglX11DRMLockScreen` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 64 bytes at 0x519450): **established.** All sixteen instructions were read.
  It passes its first argument through and sets the second argument to the word at offset 392 of the first argument. The old second argument goes to the third slot. Then it calls the lock helper at 0x519030 (0x519478).
- `fglX11DRMLock` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 60 bytes at 0x519490): **established.** All twelve instructions were read.
  It calls the lock helper at 0x519030 with its three argument registers unchanged (0x5194b4), then returns.
- `fglX11DRMUnlockScreen` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 60 bytes at 0x5194d0): **established.** All twelve instructions were read.
  It passes the word at offset 392 of its first argument as the second argument, then calls `FGLX11_DRM_UNLOCK` at 0x5192a0 (0x5194f4).
- `fglX11DRMUnlock` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 60 bytes at 0x519510): **established.** All twelve instructions were read.
  It calls `FGLX11_DRM_UNLOCK` at 0x5192a0 with its argument registers unchanged (0x519534), then returns.
- `FGLX11_DRM_UNLOCK` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 180 bytes at 0x5192a0): **established.** The whole body was read, including the atomic release.
  The first argument is the lock-state record and the second is the owner id the caller holds.
  A zero count at offset 212 sends the message path: it tail-calls `fprintf` on stderr (the `__iob` entry at +64) with the count and the file word as arguments (0x519334 to 0x51934c).
  An owner mismatch with the record's owner at offset 208 takes the same path with a different message (0x5192b8 to 0x51932c). The `fprintf` pointer for this path is loaded at 0x5192bc, so the call at 0x51932c runs `fprintf`, not the hardware helper.
  Otherwise it stores count minus 1 at offset 212 (0x5192c4). If the new count is nonzero, it returns.
  At count zero it clears the owner at offset 208 (0x5192d4) and reads the shared lock word at the address at offset 168 of the record at offset 88 (0x5192dc).
  It load-links that word and compares it with the owner id with bit 31 set. On a match it stores the owner id with `sc` and retries until the store succeeds (0x5192e4 to 0x5192f8, a branch-likely at 0x5192f8). On success it returns with no hardware call.
  On a mismatch (the delay slot at 0x5192ec has already set the stored value to 0), it tail-calls `firegl_UnlockHardware` (call at 0x519310, GOT slot 6871) with the word at offset 0 of the record at offset 200 as the first argument and the owner id as the second.

## Logging and memory wrappers

- `fglx11Warning` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 160 bytes at 0x519550): **established.** The whole body was read.
  It measures its message with `strlen` (call at 0x519574, GOT slot 6770). The copy length is the smaller of that length and 248 (0x51957c to 0x519588).
  It builds a 288-byte stack buffer holding the eight bytes at gp+24696, which are the text `fglrx: ` and a NUL, then appends the message with `strncat` (call at 0x5195a8, GOT slot 6811).
  It then calls `perror` on the buffer (call at 0x5195c0, GOT slot 6812). The message goes to standard error with the system error text after it.
- `fglx11Fatal` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 52 bytes at 0x5195f0): **established.** All thirteen instructions were read.
  It calls `fglx11Warning` with its argument unchanged (call at 0x519610), then calls `exit` with -1 (call at 0x51961c, GOT slot 6758). The `exit` call does not return.
- `fglx11Malloc` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 56 bytes at 0x519840): **established.** All eight instructions were read.
  It calls `calloc` with a count of 1 and the argument as the size (call at 0x519860, GOT slot 6769).
- `fglx11Calloc` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 68 bytes at 0x519880): **established.** All thirteen instructions were read.
  A zero count is replaced by 1 (0x5198b8). Then it calls `calloc` with the count and size (call at 0x5198a0, GOT slot 6769).
- `fglx11Realloc` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 68 bytes at 0x5198d0): **established.** All thirteen instructions were read.
  A zero size is replaced by 1 (0x519908). Then it calls `realloc` with the pointer and size (call at 0x5198f0, GOT slot 6771).
- `fglx11Free` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 52 bytes at 0x519920): **established.** All nine instructions were read.
  It passes its argument to `free` (call at 0x51993c, GOT slot 6809).
- `fglx11AlignedMalloc` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 112 bytes at 0x519960): **established.** The whole body was read.
  It calls `malloc` with the size plus the alignment plus 8 (call at 0x51998c, GOT slot 6810). It takes the pointer plus the alignment, subtracts the remainder of that sum plus 8 divided by the alignment (`ddivu` at 0x5199a0, `mfhi` at 0x5199a8), and returns that value plus 8, which is a multiple of the alignment (0x5199c0). The division traps when the alignment is zero (`teq` at 0x5199b8).
  It stores the raw `malloc` pointer in the eight bytes below the aligned result (0x5199bc) and returns the aligned pointer (0x5199c0).
- `fglx11AlignedFree` (`usr/X11R6/lib/modules/dri/fglrx_dri64.so`, 52 bytes at 0x5199d0): **established.** All nine instructions were read.
  It frees the raw pointer that `fglx11AlignedMalloc` stored eight bytes below its argument (`free` call at 0x5199ec, GOT slot 6809, argument loaded from -8 at 0x5199f0).

## Limits and extensions the vendor manual states

These come from a published SGI document, not from the shipped drivers, so they are what the vendor told programmers, not a reading of what `fglrx_dri64.so` sets. They are **established** as statements of the Silicon Graphics UltimateVision Graphics Porting Guide (007-4297-001), for the FireGL X2-256 pipe that guide describes. They say nothing of the FireGL X1, so the X1's limits stay **unknown**. The driver's own limit-setting code and extension-string builder are not read ([open-questions.md](open-questions.md#3d)).

- Vertex programs (the `ARB_vertex_program` interface): the maximum length is 64K instructions, and the length is also limited by the number of hardware registers; temporary storage cannot be virtualised (printed pages 13 and 14).
- Fragment programs (the `ARB_fragment_program` interface): the maximum length is 64 instructions (printed page 14).
- The guide lists the ATI vertex array extensions `ATI_vertex_array_object` and `ATI_element_array` for server-side vertex data (printed page 50) and says the GPU does not support `SGI_texture_color_table`, so texture lookup tables need a fragment program (printed page 52).
- Display resolution is limited to 2048x1536 per display, with two displays per pipe, and the second output analog only (printed page 5).

The guide gives no texture size limit and no extension list; an extension list per card remains open.
