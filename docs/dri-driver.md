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

- `firegl_FreeBuffer` (`fglrx_dri.so`, address 0x4bd8c0): **established.** The whole routine is read.
  It stores the caller's a1 as the dword at offset 0 of its request block.
  It calls `ioctl` with request 0x80186441, an in-only request declared at 24 bytes.
  No other word of the block is written.
  A successful call returns 0.
  On failure it returns the negated errno.

- `firegl_FreeBufferAdvanced` (`fglrx_dri.so`, address 0x4bd940): **established.** Every instruction is read.
  It zero-extends a1 from 32 bits into the dword at offset 0 of its block.
  It saves a2 at sp+24 and calls `ioctl` with request 0x80186441.
  When ioctl succeeds the routine returns 0.
  When errno is 16, the saved a2 decides the result.
  Its low bit clear gives -16, and its low bit set gives 0.
  Any other errno returns that errno negated.

- `firegl_ModifyBuffer` (`fglrx_dri.so`, address 0x4bda00): **established.** All of its words are read.
  It writes the caller's a1 as the dword at offset 0 of a 16-byte block.
  It writes a2 as the word at offset 8.
  It calls `ioctl` with request 0x80106460, an in-only request of 16 bytes.
  On success it returns 0 and on failure the negated errno.

- `firegl_GetLockID` (`fglrx_dri.so`, address 0x4bda80): **established.** Its full instruction list is read.
  It zeroes the word at offset 0 of its block.
  It keeps the caller's a1 in the dword at offset 8.
  It calls `ioctl` with request 0x40046457, an out-only request of 4 bytes.
  On success it loads the word at offset 0 and stores it as a word through the saved a1 pointer.
  It then returns 0; on failure it returns the negated errno and stores nothing.

- `firegl_SetCapIpcLock` (`fglrx_dri.so`, address 0x4bdb00): **established.** Each of its instructions is read.
  It keeps the caller's a1 in the dword at offset 8 of its block.
  It does not zero the word at offset 0 before the call.
  It calls `ioctl` with request 0x40046458, an out-only request of 4 bytes.
  On success the word the kernel left at offset 0 is stored through the saved a1 pointer, and the routine returns 0.
  On failure it returns the negated errno with no store.

- `firegl_RestoreCap` (`fglrx_dri.so`, address 0x4bdb80): **established.** The whole routine is read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  The one kernel call is `ioctl` with request 0x80046459, data in only, 4 bytes.
  A zero ioctl result gives 0, and a non-zero one gives the negated errno.

- `firegl_SetBlockMode` (`fglrx_dri.so`, address 0x4bdc00): **established.** Every instruction is read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Request 0x8004645a goes to `ioctl` as an in-only block of 4 bytes.
  It returns 0 on success.
  A non-zero ioctl result becomes the negated errno.

- `firegl_UnlockHardware` (`fglrx_dri.so`, address 0x4bdd80): **established.** All of its words are read.
  It writes the caller's a1 as a word at offset 0 of an 8-byte block.
  It writes zero as a word at offset 4 of the same block.
  The `ioctl` request is 0x8008642b, declared in-only at 8 bytes.
  On success it returns the ioctl result, which is 0.
  On failure it calls `exit` through the GOT slot at `gp+1768` with -1 as the argument.
  Nothing follows that call on the failure path.

- `firegl_AllocMutex` (`fglrx_dri.so`, address 0x4bde00): **established.** Its full instruction list is read.
  It zeroes the word at the caller's a1 pointer at 0x4bde18 before the call.
  It saves a1 at sp+8 and calls `ioctl` with request 0x40046446, an out-only request of 4 bytes.
  On success it copies the word at offset 0 of the block through the saved a1 pointer and returns 0.
  On failure it returns the negated errno and leaves the zeroed word in place.

- `firegl_FreeMutex` (`fglrx_dri.so`, address 0x4bde80): **established.** Each of its instructions is read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Its only `ioctl` call uses 0x80046447, an in-only request of 4 bytes.
  Success returns 0, and failure returns the errno value negated.

- `firegl_AgpLockPages` (`fglrx_dri.so`, address 0x4bdf00): **established.** The whole routine is read.
  It copies the caller's a1 into a2 at 0x4bdf18.
  The call is `ioctl` with request 0x806c6445.
  The data argument is the caller's a1 itself, and no request block is built.
  The request is in-only and declared at 108 bytes.
  The result is 0 when ioctl succeeds and the negated errno when it fails.

- `firegl_EnableAuthentication` (`fglrx_dri.so`, address 0x4bdf80): **established.** Every instruction is read.
  It stores 1 as a word at offset 0 when a1 is non-zero and 0 when a1 is zero.
  The `sltu` at 0x4bdf98 computes that flag.
  It calls `ioctl` with request 0x8004644a, an in-only request of 4 bytes.
  It hands back 0 after a good call and the negated errno after a bad one.

- `firegl_RegisterTexture` (`fglrx_dri.so`, address 0x4be000): **established.** All of its words are read.
  It stores the caller's a1 as a word at offset 0 of an 8-byte block.
  The one kernel call is `ioctl` with request 0x80086448, data in only, 8 bytes.
  On success it returns the word the kernel left at offset 4.
  On failure it returns the negated errno.

- `firegl_UnregisterTexture` (`fglrx_dri.so`, address 0x4be080): **established.** Its full instruction list is read.
  It stores the caller's a1 as a word at offset 0 of a 4-byte block.
  Request 0x80046449 goes to `ioctl` as an in-only block of 4 bytes.
  ioctl success yields 0; failure yields the negated errno.

- `firegl_UnlockPages` (`fglrx_dri.so`, address 0x4be280): **established.** Each of its instructions is read.
  It loads the dword at the caller's a1 and stores its low word at offset 0 of its request block.
  It keeps a1 at sp+24 and calls `ioctl` with request 0x8014644c, an in-only request of 20 bytes.
  On success it calls `drmFree` on the word at a1 plus 20.
  It then calls `drmFree` on a1 itself, and returns 0.
  On failure it returns the negated errno.

- `firegl_FlushCache` (`fglrx_dri.so`, address 0x4be340): **established.** The whole routine is read.
  It calls `ioctl` with request 0x2000644d and a zero data argument.
  The request is void, with a declared size of 0.
  The success path returns 0.
  On failure it returns the negated errno, read through `gp+1728`.

- `firegl_InitIrq` (`fglrx_dri.so`, address 0x4be3c0): **established.** Every instruction is read.
  It passes the caller's a1 unchanged as the data argument of `ioctl`.
  The request is 0xc008645d, in and out with 8 bytes.
  Success returns 0.
  On failure it returns the negated errno, read through `gp+1728`.

- `firegl_ModuleParm` (`fglrx_dri.so`, address 0x4be440): **established.** All of its words are read.
  It returns -22 when a1 is zero, without calling anything.
  Otherwise it copies up to 256 bytes from a1 into a stack buffer with `strncpy`.
  It clears the byte at offset 255 of that buffer.
  It passes the buffer to `ioctl` with request 0x8000644e.
  The request is in-only with no declared size.
  On success it returns 0; on failure it returns the negated errno.

- `firegl_RmMap` (`fglrx_dri.so`, address 0x4be500): **established.** Its full instruction list is read.
  It stores the caller's a1 as a dword at offset 24 of a 40-byte block.
  The other bytes of the block are not written.
  The `ioctl` request is 0x8028644f, declared in-only at 40 bytes.
  On success it returns 0; on failure it returns the negated errno.

- `firegl_FreeKernelInfo` (`fglrx_dri.so`, address 0x4be580): **established.** Each of its instructions is read.
  When its pointer argument a0 is zero, it returns the value v0 held on entry.
  Otherwise it calls `drmFree` on the word at offset 0 of the structure, if that word is non-zero.
  It then calls `drmFree` on the structure itself.
  A non-null pointer returns the value that the last `drmFree` returned.
