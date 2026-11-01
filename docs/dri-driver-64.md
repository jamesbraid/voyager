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
