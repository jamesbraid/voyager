# DRI driver, o32 and n32 build

`usr/X11R6/lib/modules/dri/fglrx_dri.so` is the ATI direct-rendering module that the X server loads for the FireGL cards. It is an unstripped n32 MIPS shared object with a `.dynsym` table and DWARF function names. Each entry names the routine, its address in this build, and what the routine does with its arguments and the kernel.

Addresses are virtual addresses in this file. A request is the ioctl number a routine passes to `ioctl`. Its direction and size decode under the MIPS `_IOC` layout: `0x80000000` is in-only (data goes to the kernel), `0x40000000` is out-only, `0xc0000000` is in and out, and the size field sits in bits 16 to 28. Labels follow `AGENTS.md` section 5: **established** means the whole routine was read.

## The ioctl wrappers

These routines are thin wrappers. Most of them build a request block on the stack, and all of them call `ioctl` through the GOT slot at `gp+1724`.

Where an entry reads `errno`, it does so through the GOT slot at `gp+1728`.

- `firegl_QueryVersion` (`fglrx_dri.so`, address 0x4bd540): **established.** The whole routine is read.
  It stores 3 through a0 at 0x4bd550.
  It stores 4 through a1 at 0x4bd55c.
  It stores 1 through a2 at 0x4bd568.
  Each store is skipped when its pointer is zero.
  The routine returns 0 on both exits, 0x4bd56c and 0x4bd574.
  It makes no call.

- `firegl_GetMemInfo` (`fglrx_dri.so`, address 0x4bd580): **established.** Every instruction is read.
  It zeroes the eight words at offsets 0 to 28 of the caller's a1 buffer.
  It calls `ioctl` with request 0xc0206456, an in-and-out request of 32 bytes.
  The data argument is the same buffer, copied into a2 at 0x4bd5b4.
  Success returns 0.
  On failure it returns the negated errno, read through `gp+1728`.

- `firegl_AllocBuffer` (`fglrx_dri.so`, address 0x4bd600): **established.** All of its words are read.
  It accepts a1 values 0 to 3.
  It returns -22 for any other a1 value.
  It also returns -22 for a zero a2.
  The request block holds a zero dword at offset 0 and the kind as a word at offset 8.
  It holds a2 as a word at offset 12, zero at offset 16 and -1 at offset 20.
  The call is `ioctl` with request 0xc0186440, and a0 reaches it unchanged.
  On success the low word at offset 20, zero-extended, is stored as a dword through a3 at 0x4bd6dc.
  The routine then returns the dword at offset 0.
  On failure it stores -1 as a dword through a3 at 0x4bd6a8 and returns 0.

- `firegl_AllocCache` (`fglrx_dri.so`, address 0x4bd700): **established.** Its full instruction list is read.
  It accepts kinds 4 through 6 in a1.
  It returns -22 for other values of a1 at 0x4bd748.
  It returns -22 for a zero a2 at 0x4bd7b0.
  Its request block layout matches the one in `firegl_AllocBuffer`.
  The call is `ioctl` with request 0xc0186440.
  On success the low word at offset 20 is stored as a 4-byte word through a3 at 0x4bd7c8.
  On failure -1 is stored as a word through a3 at 0x4bd7a0.
  The routine returns the dword at offset 0 on success and 0 on failure.

- `firegl_AllocBufferAtPhysicalAddress` (`fglrx_dri.so`, address 0x4bd800): **established.** Each of its instructions is read.
  It accepts a1 values 1 to 3 and returns -22 for other values.
  It also returns -22 for a zero a2.
  Its request block holds a zero dword at offset 0, the kind as a word at offset 8 and a2 as a word at offset 12.
  The word at offset 20 is the caller's a3, stored unchanged, with no -1 preset.
  The call is `ioctl` with request 0xc0186440.
  On success it returns the dword at offset 0.
  On failure it returns 0 and does not read errno.

- `firegl_FreeBuffer` (`fglrx_dri.so`, address 0x4bd8c0): **established.** Every word of the routine is read.
  It stores the caller's a1 as the dword at offset 0 of its request block.
  It calls `ioctl` with request 0x80186441, an in-only request declared at 24 bytes.
  No other word of the block is written.
  A successful call returns 0.
  On failure it returns the negated errno.

- `firegl_FreeBufferAdvanced` (`fglrx_dri.so`, address 0x4bd940): **established.** The routine is read through its last word.
  It zero-extends a1 from 32 bits into the dword at offset 0 of its block.
  It saves a2 at sp+24 and calls `ioctl` with request 0x80186441.
  When ioctl succeeds the routine returns 0.
  When errno is 16, the saved a2 decides the result.
  Its low bit clear gives -16, and its low bit set gives 0.
  Any other errno returns that errno negated.

- `firegl_ModifyBuffer` (`fglrx_dri.so`, address 0x4bda00): **established.** The body is read word by word.
  It writes the caller's a1 as the dword at offset 0 of a 16-byte block.
  It writes a2 as the word at offset 8.
  It calls `ioctl` with request 0x80106460, an in-only request of 16 bytes.
  On success it returns 0 and on failure the negated errno.

- `firegl_GetLockID` (`fglrx_dri.so`, address 0x4bda80): **established.** The whole routine is read.
  It zeroes the word at offset 0 of its block.
  It keeps the caller's a1 in the dword at offset 8.
  It calls `ioctl` with request 0x40046457, an out-only request of 4 bytes.
  On success it loads the word at offset 0 and stores it as a word through the saved a1 pointer.
  It then returns 0; on failure it returns the negated errno and stores nothing.

- `firegl_SetCapIpcLock` (`fglrx_dri.so`, address 0x4bdb00): **established.** Every instruction is read.
  It keeps the caller's a1 in the dword at offset 8 of its block.
  It does not zero the word at offset 0 before the call.
  It calls `ioctl` with request 0x40046458, an out-only request of 4 bytes.
  On success the word the kernel left at offset 0 is stored through the saved a1 pointer, and the routine returns 0.
  On failure it returns the negated errno with no store.

- `firegl_RestoreCap` (`fglrx_dri.so`, address 0x4bdb80): **established.** All of its words are read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  The one kernel call is `ioctl` with request 0x80046459, data in only, 4 bytes.
  A zero ioctl result gives 0, and a non-zero one gives the negated errno.

- `firegl_SetBlockMode` (`fglrx_dri.so`, address 0x4bdc00): **established.** Its full instruction list is read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Request 0x8004645a goes to `ioctl` as an in-only block of 4 bytes.
  It returns 0 on success.
  A non-zero ioctl result becomes the negated errno.

- `firegl_UnlockHardware` (`fglrx_dri.so`, address 0x4bdd80): **established.** Each of its instructions is read.
  It writes the caller's a1 as a word at offset 0 of an 8-byte block.
  It writes zero as a word at offset 4 of the same block.
  The `ioctl` request is 0x8008642b, declared in-only at 8 bytes.
  On success it returns the ioctl result, which is 0.
  On failure it calls `exit` through the GOT slot at `gp+1768` with -1 as the argument.
  Nothing follows that call on the failure path.

- `firegl_AllocMutex` (`fglrx_dri.so`, address 0x4bde00): **established.** Every word of the routine is read.
  It zeroes the word at the caller's a1 pointer at 0x4bde18 before the call.
  It saves a1 at sp+8 and calls `ioctl` with request 0x40046446, an out-only request of 4 bytes.
  On success it copies the word at offset 0 of the block through the saved a1 pointer and returns 0.
  On failure it returns the negated errno and leaves the zeroed word in place.

- `firegl_FreeMutex` (`fglrx_dri.so`, address 0x4bde80): **established.** The routine is read through its last word.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Its only `ioctl` call uses 0x80046447, an in-only request of 4 bytes.
  Success returns 0, and failure returns the errno value negated.

- `firegl_AgpLockPages` (`fglrx_dri.so`, address 0x4bdf00): **established.** The body is read word by word.
  It copies the caller's a1 into a2 at 0x4bdf18.
  The call is `ioctl` with request 0x806c6445.
  The data argument is the caller's a1 itself, and no request block is built.
  The request is in-only and declared at 108 bytes.
  The result is 0 when ioctl succeeds and the negated errno when it fails.

- `firegl_EnableAuthentication` (`fglrx_dri.so`, address 0x4bdf80): **established.** The whole routine is read.
  It stores 1 as a word at offset 0 when a1 is non-zero and 0 when a1 is zero.
  The `sltu` at 0x4bdf98 computes that flag.
  It calls `ioctl` with request 0x8004644a, an in-only request of 4 bytes.
  It hands back 0 after a good call and the negated errno after a bad one.

- `firegl_RegisterTexture` (`fglrx_dri.so`, address 0x4be000): **established.** Every instruction is read.
  It stores the caller's a1 as a word at offset 0 of an 8-byte block.
  The one kernel call is `ioctl` with request 0x80086448, data in only, 8 bytes.
  On success it returns the word the kernel left at offset 4.
  On failure it returns the negated errno.

- `firegl_UnregisterTexture` (`fglrx_dri.so`, address 0x4be080): **established.** All of its words are read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Request 0x80046449 goes to `ioctl` as an in-only block of 4 bytes.
  ioctl success yields 0; failure yields the negated errno.

- `firegl_UnlockPages` (`fglrx_dri.so`, address 0x4be280): **established.** Its full instruction list is read.
  It loads the dword at the caller's a1 and stores its low word at offset 0 of its request block.
  It keeps a1 at sp+24 and calls `ioctl` with request 0x8014644c, an in-only request of 20 bytes.
  On success it calls `drmFree` on the word at a1 plus 20.
  It then calls `drmFree` on a1 itself, and returns 0.
  On failure it returns the negated errno.

- `firegl_FlushCache` (`fglrx_dri.so`, address 0x4be340): **established.** Each of its instructions is read.
  It calls `ioctl` with request 0x2000644d and a zero data argument.
  The request is void, with a declared size of 0.
  The success path returns 0.
  On failure it returns the negated errno, read through `gp+1728`.

- `firegl_InitIrq` (`fglrx_dri.so`, address 0x4be3c0): **established.** Every word of the routine is read.
  It passes the caller's a1 unchanged as the data argument of `ioctl`.
  The request is 0xc008645d, in and out with 8 bytes.
  Success returns 0.
  On failure it returns the negated errno, read through `gp+1728`.

- `firegl_ModuleParm` (`fglrx_dri.so`, address 0x4be440): **established.** The routine is read through its last word.
  It returns -22 when a1 is zero, without calling anything.
  Otherwise it copies up to 256 bytes from a1 into a stack buffer with `strncpy`.
  It clears the byte at offset 255 of that buffer.
  It passes the buffer to `ioctl` with request 0x8000644e.
  The request is in-only with no declared size.
  On success it returns 0; on failure it returns the negated errno.

- `firegl_RmMap` (`fglrx_dri.so`, address 0x4be500): **established.** The body is read word by word.
  It stores the caller's a1 as a dword at offset 24 of a 40-byte block.
  The other bytes of the block are not written.
  The `ioctl` request is 0x8028644f, declared in-only at 40 bytes.
  On success it returns 0; on failure it returns the negated errno.

- `firegl_FreeKernelInfo` (`fglrx_dri.so`, address 0x4be580): **established.** The whole routine is read.
  When its pointer argument a0 is zero, it returns the value v0 held on entry.
  Otherwise it calls `drmFree` on the word at offset 0 of the structure, if that word is non-zero.
  It then calls `drmFree` on the structure itself.
  A non-null pointer returns the value that the last `drmFree` returned.

- `firegl_VerifyArea` (`fglrx_dri.so`, address 0x4be800): **established.** Every instruction is read.
  When the word at 0xb9e390 is zero, the routine returns 0 without calling `ioctl`.
  Otherwise it fills a 16-byte block with a1 as a dword at offset 0.
  It puts a2 at offset 8 and a3 at offset 12, both as words.
  The call is `ioctl` with request 0x80106451, an in-only request.
  A zero result returns 0.
  A failed call reads errno through `gp+1728`.
  When that errno is 22, the routine clears the word at 0xb9e390 and returns 0.
  Any other errno returns minus that errno.

- `firegl_GetAGPCapPtr` (`fglrx_dri.so`, address 0x4be8c0): **established.** All of its words are read.
  A zero a1 makes the routine return -22 at 0x4be8e4.
  Otherwise it zeroes the word at offset 0 of its block.
  It calls `ioctl` with request 0x400c6452, an out-only block of 12 bytes.
  On success it stores word 0 through the saved a1 pointer and returns 0.
  A failed call returns minus errno, read through `gp+1728`.

- `firegl_GetAGPStatus` (`fglrx_dri.so`, address 0x4be980): **established.** Its full instruction list is read.
  A zero a1 makes the routine return -22 at 0x4be9a4.
  Otherwise it zeroes the word at offset 4 of its block.
  Its one `ioctl` call uses request 0x400c6452, the request of `firegl_GetAGPCapPtr`.
  On success it stores the word at offset 4 through the saved a1 pointer.
  Success gives 0.
  On failure the routine returns the errno from `gp+1728`, negated.

- `firegl_GetAGPCommand` (`fglrx_dri.so`, address 0x4bea40): **established.** Each of its instructions is read.
  A zero a1 makes the routine return -22 at 0x4bea64.
  Otherwise it zeroes the word at offset 8 of its block.
  It calls `ioctl` with request 0x400c6452, the request of `firegl_GetAGPStatus`.
  On success it stores the word at offset 8 through the saved a1 pointer.
  When ioctl succeeds the routine returns 0.
  A non-zero ioctl result returns the errno at `gp+1728`, negated.

- `firegl_InitCP` (`fglrx_dri.so`, address 0x4beb00): **established.** Every word of the routine is read.
  The caller's a1 is copied into a2 at 0x4beb18 and passed as the data argument.
  Its `ioctl` request is 0x80206453, declared in-only at 32 bytes.
  The return is 0 after a good call.
  Failure returns the negated errno, read through `gp+1728`.

- `firegl_InitUMM` (`fglrx_dri.so`, address 0x4beb80): **established.** The routine is read through its last word.
  The caller's a1 is the data argument, copied into a2 at 0x4beb98.
  The request is 0x8018645b, in-only and 24 bytes.
  A call that succeeds returns 0.
  If ioctl fails, the negated errno comes back, read through `gp+1728`.

- `firegl_modify_ldt` (`fglrx_dri.so`, address 0x4bec00): **established.** The body is read word by word.
  It builds a 16-byte block with a1 at offset 0, a2 at offset 4 and a3 at offset 8.
  Word 12 of the block is set to -1 before the call.
  The call is `ioctl` with request 0xc0106455, an in-and-out request.
  On success it returns the word at offset 12 that the kernel wrote.
  On failure it returns -1 and does not read errno.

- `firegl_QueryHwCaps` (`fglrx_dri.so`, address 0x4bec80): **established.** The whole routine is read.
  It zeroes the four words at offsets 0 to 12 of the caller's a1 buffer.
  The data argument is the same buffer, copied into a2 at 0x4beca4.
  Its `ioctl` request is 0x40106454, declared out-only at 16 bytes.
  A zero result returns 0.
  A failed call returns minus errno, read through `gp+1728`.

- `firegl_SyncDacs` (`fglrx_dri.so`, address 0x4bf140): **established.** Every instruction is read.
  Its only `ioctl` call passes request 0x20006461 and a zero data argument.
  The request is void, with a declared size of 0.
  Success gives 0.
  On failure the routine returns the errno from `gp+1728`, negated.

- `firegl_EnableStereo` (`fglrx_dri.so`, address 0x4bf1c0): **established.** All of its words are read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Its request is 0x80046462, declared in-only at 4 bytes.
  When ioctl succeeds the routine returns 0.
  A non-zero ioctl result returns the errno at `gp+1728`, negated.

- `firegl_AGPAcquire` (`fglrx_dri.so`, address 0x4bf240): **established.** Its full instruction list is read.
  It writes the caller's a1 as a word at offset 0 of a 4-byte block.
  Its one `ioctl` call uses request 0x80046463, in-only with 4 bytes.
  The return is 0 after a good call.
  Failure returns the negated errno, read through `gp+1728`.

- `firegl_CPResume` (`fglrx_dri.so`, address 0x4bf2c0): **established.** Each of its instructions is read.
  Its only `ioctl` call passes request 0x20006464 and a zero data argument.
  The request is void, with a declared size of 0.
  A call that succeeds returns 0.
  If ioctl fails, the negated errno comes back, read through `gp+1728`.

## Locking, DRM handles and queue waits

- `firegl_LockHardware` (`fglrx_dri.so`, address 0x4bdc80, 220 bytes): **established.** Every instruction is read.
  It keeps a0 as the file descriptor and stores the caller's a1 as a word at offset 0 of an 8-byte block, with a zero word at offset 4.
  It calls `ioctl` with request 0x8008642a, an in-only request of 8 bytes, and passes the block as the data argument.
  A zero result returns 0.
  On a non-zero result it loads errno through `gp+1728`. Errno 12, 19 or 22 makes it call `exit` through `gp+1768` with the negated errno, and it does not return.
  For any other errno it calls `ioctl` again at once with the same arguments, and it rechecks errno after each failed repeat until one succeeds and it returns 0.
  The binary gives only the errno numbers. Which condition the repeat waits out is an open sub-fact: the route tried is this routine's own code, and the next route is a published errno list for the IRIX release.

- `firegl_LockPages` (`fglrx_dri.so`, address 0x4be100, 328 bytes): **established.** The body is read through its last word.
  It returns -22 when a1 or a2 is zero.
  It allocates 24 bytes with `drmMalloc` for a handle, and returns -12 when that fails.
  It computes a page count from a2 and a1: with x = a2 + (a1 & 0x3fff), the count is x >> 14, plus one when x & 0x3fff is non-zero.
  It allocates 4 times that count with `drmMalloc` for a table. When that fails it frees the handle and returns -12.
  It builds a 20-byte request with a1 at offset 4, a2 at offset 8, the page count at offset 12 and the table pointer at offset 16.
  It calls `ioctl` with request 0xc014644b, in and out, 20 bytes, and takes the kernel's word at offset 0 as an id.
  On success it fills the handle with the id as a dword at offset 0, a1 at offset 8, a2 at offset 12, the page count at offset 16 and the table pointer at offset 20. It stores the handle through the a3 argument and returns 0.
  On failure it frees the table, then the handle, and returns the negated errno.
  Why only the low 14 bits of a1 enter the count is an open sub-fact, and the only route so far is this routine's code.

- `firegl_TermDRM` (`fglrx_dri.so`, address 0x4bf040, 204 bytes): **established.** The routine is read through its last word.
  It returns -22 when the handle in a0 is zero, or when its word at offset 12, 16 or 20 is zero.
  The first `drmUnmap` takes the table's word at offset 12 as the address and the product of the table's word at offset 0 and its word at offset 16 as the size.
  The second `drmUnmap` takes the handle's word at offset 12 as the address and four times the word at offset 8 of the pointer stored at handle offset 8 as the size.
  The third `drmUnmap` takes the handle's word at offset 16 as the address and 16384 as the size.
  It frees the table at offset 20, then the handle, and returns 0.
  The layouts disagree: `firegl_LockPages` stores the byte size at handle offset 8 and the page count at offset 16, while this routine dereferences offset 8 and passes offset 16 as an address. Which layout a real handle has is an open sub-fact.

- `__fglQSQuietDown` (`fglrx_dri.so`, address 0x4bf340, 244 bytes): **established.** The whole body is read.
  It returns 0 at once when the bit 0x80000000 of the word at a0+3648 is clear.
  Otherwise it reads that word up to 2,000,000 times and returns 0 as soon as the bit reads clear.
  If the bit stays set through those reads, it calls the function pointer in the GOT slot at `gp+1608` with argument 0, testing the bit before each call. Each call adds 10,000 to a counter, and the loop runs 200 calls in all. It returns 0 when the bit clears, and 1 when the 200 calls finish with the bit still set.
  The fact sheet labels the callee `sginap`. This build's symbol table does not name the slot, so that label is inferred.
  The queue-quiet role is inferred from the polling loop itself.

- `__fglDRMPM4Alloc` (`fglrx_dri.so`, address 0x4bf440, 104 bytes, the lowest of several definitions of this name): **established.** Every instruction is read.
  It returns 0 when a1 is zero or negative.
  Otherwise, with S the structure at a0+8, it computes an aligned count A = (a1 + [S+16] + 2) & ~[S+16].
  When [S+4] + A is below [S+8] (unsigned) and [S+20] is not below A (unsigned), it returns [a0+12] + 4 times [S+4] and stores nothing.
  Any other case tail-calls `firegl_PM4Alloc` through `gp+2096` with a0 and a1 as they arrived.
  The field meanings are inferred from how these checks use them: an index at +4, a limit at +8, a mask at +16 and a free count at +20.

- `__fglDRMPM4Submit` (`fglrx_dri.so`, address 0x4bf6c0, 72 bytes): **established.** Every instruction is read.
  It calls `__fglDRMPM4Queue` at 0x4bf4c0 with a0 unchanged.
  After that call it reads the word at a0+8 as P and the word at a0+4 as Q. It stores the word at P+4 into Q+1812, runs two SYNC instructions, and returns P.

- `dummy_5` (`fglrx_dri.so`, address 0x4bfec0, 36 bytes): **established.** Every instruction is read.
  It loads the word at gp+3024, reads the word at the address that holds, subtracts 2, and stores the result through the pointer at gp+3036.
  gp is t9 plus 0x6dd8e0. With t9 equal to the routine's own address, which is the usual MIPS PIC entry convention, gp is 0xb9d7a0. That value is inferred, and it matches the gp of the other routines in this build.

- `dummy_6` (`fglrx_dri.so`, address 0x4bff00, 36 bytes): **established.** Every instruction is read.
  It loads the word at gp+3028, reads the word at the address that holds, subtracts 2, and stores the result through the pointer at gp+3024.

## Display and drawable helpers

- `find_display` (`fglrx_dri.so`, address 0x4bff40, 152 bytes): **established.** The whole routine is read.
  The global at gp+3060 holds the X extension info. When it is null, the routine calls `XextCreateExtension` and stores the result there, and a null result returns 0.
  With the info in hand, it calls `XextFindDisplay` with the info and the display in a0. A non-null result is returned.
  When nothing is found, it calls `XextAddDisplay` with the info, the display, the extension name word at gp+3064, the hooks pointer 0xb827d8, and zero for the event count and the data argument. It returns that result.
  The argument order matches the public libXext prototypes, which is inferred from the call sites.

- `close_display` (`fglrx_dri.so`, address 0x4c0000, 56 bytes): **established.** The routine is read through its return.
  It calls `XextRemoveDisplay` with the info at gp+3060 as the first argument and its own a0, moved into a1, as the second. It returns the call's result.

- `fglX11DRMLock` (`fglrx_dri.so`, address 0x4c0d80, 56 bytes): **established.** Every instruction is read.
  It calls `FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM` at 0x4c08c0 with its arguments unchanged, and returns what the callee returns.
  The `t9` value loaded before the call goes unused, because the call is a direct branch-and-link.

- `fglX11DRMUnlock` (`fglrx_dri.so`, address 0x4c0e00, 56 bytes): **established.** Every instruction is read.
  It calls `FGLX11_DRM_UNLOCK` at 0x4c0b40 with its arguments unchanged, and returns what the callee returns.

- `fglX11DRMLockScreen` (`fglrx_dri.so`, address 0x4c0d40, 60 bytes): **established.** Every instruction is read.
  It passes a0 unchanged, the caller's a1 as a2, and the word at a0+240 as a1 to `FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM` at 0x4c08c0, and returns that result.

- `fglX11DRMUnlockScreen` (`fglrx_dri.so`, address 0x4c0dc0, 56 bytes): **established.** Every instruction is read.
  It passes a0 unchanged and the word at a0+240 as a1 to `FGLX11_DRM_UNLOCK` at 0x4c0b40, and returns that result.

- `fglX11GLDRMLock` (`fglrx_dri.so`, address 0x4c0c00, 156 bytes): **established.** Every instruction is read.
  With s0 the word at a0+100, it calls `FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM` at 0x4c08c0 with a0 set to the word at [[[s0+4]+28]+180], a1 to the word at [s0+4]+4, and a2 to the word at s0+120.
  When bit 0 of the word at s0 is set, it stores that word back with bit 0 cleared.
  When bit 0 of the word at a0+0x46c78 (a0 plus 0x40000 plus 27768) is also set, it calls the function pointer at a0+124 with a0 as argument.
  The return value is whatever v0 holds at the epilogue: the lock call's result, 0 when the flag test fails, or the indirect call's result.

- `fglX11GLDRMUnlock` (`fglrx_dri.so`, address 0x4c0cc0, 72 bytes): **established.** Every instruction is read.
  It calls `FGLX11_DRM_UNLOCK` at 0x4c0b40 with a0 set to the word at [[[a0+100]+4]+28]+180 and a1 set to the word at [[a0+100]+4]+4, then returns the callee's result.

- `fglx11GetDrawablePrivate` (`fglrx_dri.so`, address 0x4c0f40, 32 bytes): **established.** Every instruction is read.
  It loads the word at a0+100, then the word at offset 120 of that record. A zero result returns 0; otherwise it returns that record plus 13288.

- `fglx11GetReadDrawablePrivate` (`fglrx_dri.so`, address 0x4c0f80, 40 bytes): **established.** Every instruction is read.
  It walks a0+100, then offset 4, then offset 24 of the record it reaches. A zero pointer there returns 0; otherwise it returns the word at offset 4 of that record plus 13288.

- `fglX11DrawableGetSize` (`fglrx_dri.so`, address 0x4c1140, 40 bytes): **established.** Every instruction is read.
  It takes the record at the word at a0+720 and stores its words at offsets 136, 140, 144 and 148 through the pointers a1, a2, a3 and a4, in that order.

- `fglX11DrawableGetScreenSize` (`fglrx_dri.so`, address 0x4c1180, 36 bytes): **established.** Every instruction is read.
  It follows a0+720 to a record R, offset 16 of R to Q, and offset 44 of Q to P. It stores the word at P+124 through a1 and the word at P+128 through a2.

- `fglX11SetCoreClipRect` (`fglrx_dri.so`, address 0x4c1100, 8 bytes): **established.** The routine is a return with an empty delay slot. It stores nothing and does nothing.

- `fglX11DrawableUpdate` (`fglrx_dri.so`, address 0x4c11c0, 8 bytes): **established.** The routine is a single return. The delay slot at 0x4c11c4 sets v0 to 1, so every caller gets 1 back. It stores nothing and makes no call, so it leaves the drawable it is given as it found it.

- `fglX11InitPerformanceCounters` (`fglrx_dri.so`, address 0x4c1200, 8 bytes): **established.** The routine is a single return with an empty delay slot at 0x4c1204. It stores nothing, makes no call and returns no value.

- `FGLX11_DRM_UNLOCK` (`fglrx_dri.so`, address 0x4c0b40, 172 bytes): **established.** Every instruction is read.
  It reads the count at a0+128. With a zero count it tail-calls `fprintf` on stderr with the format at 0xb74070, and the format text is not read here.
  Otherwise it compares the word at a0+124 with its a1. On a mismatch it tail-calls `fprintf` on stderr with the format at 0xb740a8, passing the count minus one, the word at a0+124, the word at the pointer at a0+120 and the count.
  When the words match and the count is above one, it stores the count minus one at a0+128 and returns without setting v0.
  When the count is one, it clears the word at a0+124 and attempts a swap on the word at the pointer at offset 100 of the record at a0+44: from 0x80000000 OR the old holder value to the old holder value, using a load-linked and store-conditional loop.
  It returns without setting v0 when the register holding the swap result, or the word it loaded when the swap was skipped, equals 1. Otherwise it tail-calls `firegl_UnlockHardware` with the word at the pointer at a0+120 and the old holder value.
  The count is left at one on that path.

## Memory and logging helpers

- `fglx11Warning` (`fglrx_dri.so`, address 0x4c0e40, 148 bytes): **established.** Every instruction is read.
  It measures the message in a0 with `strlen` and caps the count at 248.
  It writes the 7-byte prefix "fglrx: " into a 288-byte frame buffer, appends up to that many message bytes with `strncat`, and writes a NUL at offset 7 plus the count.
  It passes the buffer to `perror` and returns what `perror` returns.

- `fglx11Fatal` (`fglrx_dri.so`, address 0x4c0f00, 48 bytes): **established.** Every instruction is read.
  It calls `fglx11Warning` at 0x4c0e40 with a0 unchanged, then calls `exit` through `gp+1768` with -1. It does not return.

- `fglx11Malloc` (`fglrx_dri.so`, address 0x4c1240, 56 bytes): **established.** Every instruction is read.
  It calls `calloc` through `gp+1592` with 1 as the element count and a0 as the size, and returns the pointer.

- `fglx11Calloc` (`fglrx_dri.so`, address 0x4c1280, 68 bytes): **established.** Every instruction is read.
  It substitutes 1 for a zero a0, then calls `calloc` through `gp+1592` with a0 and a1 as count and size, and returns the pointer.

- `fglx11Realloc` (`fglrx_dri.so`, address 0x4c1300, 68 bytes): **established.** Every instruction is read.
  When a1 is zero it substitutes 1, then calls `realloc` through `gp+1656` with a0 and a1 and returns the pointer.

- `fglx11Free` (`fglrx_dri.so`, address 0x4c1380, 52 bytes): **established.** Every instruction is read.
  It calls `free` through `gp+1804` with a0 unchanged and returns.

- `fglx11AlignedMalloc` (`fglrx_dri.so`, address 0x4c13c0, 100 bytes): **established.** Every instruction is read.
  It calls `malloc` through `gp+1808` with a0 + a1 + 4 bytes, where a1 is the alignment. A zero alignment traps in the divide check.
  With M the malloc result, it computes X = M + a1 + 4, rounds X down to a multiple of a1, and stores M in the word just below that address.
  It returns that aligned address.

- `fglx11AlignedFree` (`fglrx_dri.so`, address 0x4c1440, 52 bytes): **established.** Every instruction is read.
  It loads the word at a0-4, which holds the malloc pointer that `fglx11AlignedMalloc` stored, and calls `free` through `gp+1804` with it.
