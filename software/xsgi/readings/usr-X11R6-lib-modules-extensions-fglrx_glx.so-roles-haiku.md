# Role readings: `usr/X11R6/lib/modules/extensions/fglrx_glx.so`

Routine roles, each read from the routine's own body. Calls through GOT slots are named by the slot's offset from gp where the symbol table does not name them.

- `dummy_5` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b8d40
  **Inferred.** Builds a base as t9 plus 0x6dca58 and loads the pointer at +0xb78 from it. The word behind that pointer is read, reduced by 2, and stored through the pointer at +0xb84 of the same base. It makes no calls and returns through ra with the store in the delay slot.

- `dummy_6` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b8d80
  **Inferred.** Uses the base t9 plus 0x6dca18. It reads the word behind the pointer at +0xb7c, subtracts 2, and writes the difference through the pointer at +0xb78. Apart from those two pointers it touches no memory.

- `getDrawableInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b8e40
  **Inferred.** Calls the routine in slot gp+0x6d0 with a zero first argument. A zero result stores zero through the pointer in stack argument +0x8c and returns 0. Otherwise it reads the count through that pointer. A zero count stores zero through the pointer in stack argument +0x94 and returns 1. A nonzero count is multiplied by 8, passed to the allocator in slot gp+0x6d4, and the block is stored through the +0x94 pointer. The routine in slot gp+0x6d8 then receives the block, the word at frame offset 0x20 and the byte size, and the function returns 1.

- `FGLX11_DRM_UNLOCK` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9580
  **Inferred.** Drops one level of the drawable lock that the tag in a1 holds. The lock count is the word at +0x80 of the first argument and the owning tag is the word at +0x7c. A zero count, or a tag that differs from the owner, reports through the slot at gp+0x634 with a message pointer and returns. Otherwise the count is decremented and stored. When it reaches zero, the owner word is cleared and the hardware word reached through the pointer at +0x2c, then +0x64, is swapped from tag|0x80000000 back to the tag with ll/sc. If the word does not hold the expected value and the value read is not 1, the routine calls slot gp+0x654 with the word read through the pointer at +0x78 and the tag.

- `fglX11GLDRMLock` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9640
  **Inferred.** Takes the drawable lock for the object whose block pointer sits at +0x64 of its argument. It calls FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM at 0x4b9300 with the word at +0xb4 of the pointer at +0x1c of the object at +4 of the block, the word at +4 of that object, and the word at +0x78 of the block. Afterwards, if bit 0 of the block's first word was set, the bit is cleared. If bit 0 of the context word at +0x46c78 is also set, the function pointer at +0x7c of the argument is called with the argument.

- `fglX11GLDRMUnlock` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9700
  **Inferred.** Releases what fglX11GLDRMLock took. It takes the object Y at +4 of the block at +0x64 of its argument, then calls FGLX11_DRM_UNLOCK at 0x4b9580 with the word at +0xb4 of the pointer at +0x1c of Y as the first argument and the word at +4 of Y as the tag.

- `fglX11DRMLockScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9780
  **Inferred.** Wraps FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM at 0x4b9300. The second argument moves to the third position, and the word at +0xf0 of the first argument becomes the second. The callee's result is returned unchanged.

- `fglX11DRMLock` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b97c0
  **Inferred.** Forwards its three arguments unchanged to FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM at 0x4b9300 and returns that call's result.

- `fglX11DRMUnlockScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9800
  **Inferred.** Calls FGLX11_DRM_UNLOCK at 0x4b9580 with its first argument and the word at +0xf0 of that argument as the second, then returns the result.

- `fglX11DRMUnlock` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9840
  **Inferred.** Passes its two arguments straight to FGLX11_DRM_UNLOCK at 0x4b9580 and returns that call's result.

- `fglX11GLLockDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9a00
  **Inferred.** Locks a drawable through the block at +0x64 of its second argument. The first call is FGLX11_DRM_LOCK_AND_UPDATE_WINGEOM at 0x4b9300, with the third argument taken from the word at +0x2d0 of the first argument. The lock-bit clearing and the context flag test at +0x46c78 follow the same pattern as fglX11GLDRMLock. Last, the word at +4 of Y, where Y is the word at +4 of the block, is stored at +0x144 of the first argument. That stored value is the tag that fglX11GLUnlockDrawable later passes to the unlock.

- `fglX11GLUnlockDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9ac0
  **Inferred.** Reads the tag from +0x144 of its argument, then reads the lock count at +0x80 of the object at +0x10 of the block at +0x2d0. When that count is 1, the +0x144 word is zeroed after the tag is saved. In both cases FGLX11_DRM_UNLOCK at 0x4b9580 runs on that object with the saved tag.

- `fglx11Warning` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9880
  **Inferred.** Formats a diagnostic into a 248-byte stack buffer and then passes the buffer to slot gp+0x6e4. The routine in slot gp+0x688 is called on the message, and its result is the length. A result of 248 or more is capped at 248, otherwise the message is measured again through the same slot. The routine in slot gp+0x6e0 fills the buffer from the message with that length, and the 8-byte word at gp+0xb98 is copied to the buffer start and passed as the fourth argument. A zero byte is then written at buffer offset length+7 before the call through gp+0x6e4.

- `fglx11Fatal` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9940
  **Inferred.** Calls fglx11Warning at 0x4b9880 with the same arguments, then calls slot gp+0x6e8 with -1. The function has no return path of its own after that call.

- `fglx11Malloc` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9c80
  **Inferred.** Passes a count of 1 and the requested size to the routine in slot gp+0x68c and returns its result.

- `fglx11Calloc` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9cc0
  **Inferred.** Raises a zero count to 1, then passes the count and the element size to slot gp+0x68c and returns that result.

- `fglx11Realloc` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9d40
  **Inferred.** Passes the pointer and the size to slot gp+0x690. A zero size is raised to 1 first. The slot's result is returned.

- `fglx11Free` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9dc0
  **Inferred.** Passes its pointer argument unchanged to slot gp+0x6dc and returns that result.

- `fglx11AlignedMalloc` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9e00
  **Inferred.** Requests size plus alignment plus 4 bytes from slot gp+0x6d4 and keeps the raw pointer. It returns the first address above the raw block that is a multiple of the alignment, computed as the raw block plus alignment, minus the remainder of (raw block plus alignment plus 4) divided by the alignment. The raw pointer is stored in the word just below the returned address. A zero alignment traps on the divide instruction.

- `fglx11AlignedFree` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9e80
  **Inferred.** Reads the raw pointer from the word just below its argument and passes it to slot gp+0x6dc, the same free slot that fglx11Free uses.

- `fglX11CompareGLModes` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4b9ec0
  **Inferred.** Calls slot gp+0x6ec with its two arguments and a length of 108 bytes. It returns 1 when that routine returns a nonzero value and 0 when it returns zero.

- `QueryCRTCInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ba3c0
  **Inferred.** Reads two words from the object at +4 of the block at +0x78 of its first argument. The word at +0x228 is stored at output offsets 0 and 8 every time. When the second argument is nonzero, the word at +0x328 of the same object is also stored at output offsets 4 and 0xc.

- `PackPitchOffset` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bc000
  **Inferred.** Packs two fields into one word. Bits 6 to 13 of the first argument move to bits 22 to 29 and are masked to that range, and the second argument shifted right by 10 is ORed into bits 0 to 21.

- `FreeSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bd080
  **Inferred.** Builds a 56-byte request on the stack with 0x38 as its first word and zeroes the rest. It copies the doubleword at the surface's +0x8 into request +0x8, and the words at +0x10 and +0x14 into request +0x28 and +0x2c. It then calls the function pointer in GOT slot gp+0x880 with the object at (second argument +0x2d0, then +0x10, then +0x88) and the request as its arguments. Last, it calls the helper at gp+0x6dc with the surface.

- `FreeBufIfNecessary` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bdc00
  **Inferred.** Tests the byte at +0x88 of the buffer in a0. If that byte is set and the words at +0 and +4 do not match the pair in a2 and a3, it tail-jumps through the pointer at +0x44 with the arguments unchanged. In every other case it returns without storing anything.

- `FreeBuf` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c1080
  **Inferred.** Releases the buffer in a0 only when the word at +0x2c and the byte at +0x88 are both nonzero, by tail-jumping through the function pointer at +0x44. If either is zero it returns at once.

- `UpdateBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bdd00
  **Inferred.** Recomputes the size fields of the buffer record in a1 and sets the byte at +0x64 to 1. The scale in t4 is 1 unless the byte at +0x65 is set, and then it is the truncated float read through the pointer at t2+0x770. With the byte at +0x88 set, the record gets t4 times t0 at +0 and t1 at +4. With that byte clear, the word at +0xc becomes t4 times the word at +0x18 times a2, plus the word at +0x10, plus the word at +0x28 times a3.

- `InitLazyMemBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bf300
  **Inferred.** Saves the buffer pointer, calls the function pointer in gp+0xa58 with that pointer as its only argument, and then stores the word at gp-0x7fe8 minus 0x1580 into +0x30 of the buffer.

- `FreePrivateFrameBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bec00
  **Inferred.** When the word at +0x2c is zero it returns 1 at once. Otherwise it takes the sub-object at +0xd8. If the doubleword at sub-object +0x68 is nonzero, it calls the function in gp+0x698 with that doubleword and with the value reached from the second argument through +0x2d0, +0x10 and +0x78, read one more time. It then calls FreeSurface (0x4bd080) with the sub-object and the second argument, clears the words at +0x2c, +0xd8 and +0xd4, and returns 1.

- `FreeDepthBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4becc0
  **Inferred.** Returns 1 at once when the pointer at +0xd8 is null. Otherwise it reads the doubleword at +0 of that sub-object and calls gp+0x698 with it, then calls gp+0x698 again with the doubleword at +0x18 if that is nonzero. The first argument of both calls is the word reached from the second argument through +0x2d0, +0x10 and +0x78. It then calls the helper gp+0x6dc on the pointer at +0xd8 and clears that pointer. If the pointer at +0x60 is set, its +0xd8 word is cleared too, and the routine returns 1.

- `FreePrivateDepthBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bedc0
  **Inferred.** Returns 1 when the word at +0x2c is zero. Otherwise, for the sub-object at +0xd8, it passes the doubleword at +0x38 and then the doubleword at +0x50 to gp+0x698, skipping each when zero. It calls FreeSurface (0x4bd080) with the sub-object and the second argument. The buffer's +0x2c, +0xd8 and +0xd4 words are cleared, the object linked at +0x60 has its +0x2c word and its +0xd8 word cleared, and the routine returns 1.

- `msf_is_power_of_two` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c2c00
  **Inferred.** Adds -1 to the argument in a0, ANDs the sum back with a0, and sets the result to 1 when that AND is 0 (sltiu against 1). It returns 0x1 for zero and for every power of two, and 0x0 for all other values.

- `TileFlagsToTilingMode` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c2b80
  **Inferred.** Maps the low three bits of the flags in a0 to a mode code. Bit 0 with bit 1 gives 4. Bit 0 without bit 1 gives 8 when bit 2 is set and 2 otherwise. Bit 1 without bit 0 gives 3 whatever bit 2 holds. With neither bit 0 nor bit 1, the result is 7 when bit 2 is set and 1 otherwise.

- `fglX11CMMAllocObjectBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c26c0
  **Inferred.** Reads the word at +4 of the request in a1. A value of 0 passes 2 as the mode and a value of 2 passes 1; any other value returns 0 without a call. For those two, the function calls gp+0x840 with the first argument loaded from a0+0x40000+0x6a14 and then from the address that load yields, the first request word as its second argument, a pointer to request +8 as its fourth, and the mode as its third. The 64-bit result goes to request +0x18, and the return value is whether that result is nonzero.

- `fglX11VerifyDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c2600
  **Inferred.** Calls gp+0x7f0 with the drawable in a1. It then calls the pointer at +0x278 of the first argument with four stack slots as out-parameters, and passes those four values as arguments two to five to __fglX11UpdateBuffers (0x4c10c0), together with the first argument and 0x80000000 as its sixth. Last, it stores a flag that is 1 when the byte at +0x304 of the first argument is zero, calls gp+0x7f4 with the drawable, and returns that flag.

- `InitPrivateDepthBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bf140
  **Inferred.** Calls gp+0x6f0 with the object, zero and 0xdc. It then sets the byte at +0x88 to 1, the words at +0x54 and +0x58 to zero, and the byte at +0x65 to the low byte of the caller's third argument. The word at +0x40 is loaded from gp-0x7d84. The words at +0x30, +0x34, +0x38 and +0x44 are set from the word at gp-0x7fe8 minus 0x1c40, 0x23c0, 0x2380 and 0x1240.

- `InitPrivateFrameBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bf040
  **Inferred.** Passes a stack block at sp+4 with length 0x7c to gp+0x700, and then calls gp+0x6f0 on the object with zero and 0xdc. The words at +0x54 and +0x58 are set to zero, the byte at +0x88 to 1, and the byte at +0x65 to the low byte of the caller's fourth argument. The word at +0x40 comes from gp-0x7d84, and the words at +0x34, +0x38, +0x44 and +0x30 come from gp-0x7fe8 minus 0x23c0, 0x2380, 0x1400 and 0x1f00. Last it calls FillInDrawableBufInfo (0x4bd840) with the object, the stack block, the second argument, zero, and the caller's third argument stored at sp+0x1c.

- `calcInclusiveClipRect` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c1740
  **Inferred.** Calls the pointer at +0x3664 of the first argument, passing first-argument+0x33e8 as the object and two stack slots as out-values, and then computes four bounds. The left bound is the word at +0x88 and the bottom is the word at +0x8c. The right bound is the left plus the word at +0x90, and the top is the bottom plus the word at +0x3094. Any negative bound becomes 0. The left and right bounds are capped at the first out-value, and the bottom and top at the second. The four results are stored as halfwords at the second argument's +0, +2, +4 and +6.

- `FillInZMaskInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4bd7c0
  **Inferred.** Copies fields from a 0x28-byte record in a1 into the object in a0 without any calls. The byte at +0x67 is set when the word at +0xc of the record is nonzero, and the word at +0xc8 of the object is set to 2 in that case and 0 otherwise. Words at +0x6c, +0x70, +0x74 and +0x9c come from record +0x8, +0xc, +0x14 and +0x10. The byte at +0xa2 is set when the record's +0x24 word is nonzero, and only then are +0x20 and +0x24 of the record copied to +0xa4 and +0xa8.

- `MSF_get_total_bytes` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c2c40
  **Inferred.** Sizes a two-dimensional buffer and returns its byte total. The pitch is the width in a0 times a2 (with a2 = 15 replaced by 16 at 0x4c2d0c), shifted right by three, plus the alignment in a3 less one, rounded down to a multiple of a3; the helper at 0x4c2c00 chooses between a mask and a divide form. The row count is the value in a1 plus the alignment in t0 less one, rounded down to a multiple of t0. The pitch is stored through t1, the row count through t2, and the routine returns pitch times rows. Either alignment being zero traps through the teq instructions at 0x4c2d34 and 0x4c2d70.

- `fglX11CMMAllocBltSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c2dc0
  **Inferred.** Allocates a blit surface from a descriptor in a1, with the third argument choosing the mode. Mode 0 stores 2 and mode 2 stores 1 for the allocation call; any other mode returns 0. The element width starts at 16 bits and a switch on the descriptor's +0x18 word can change it: the case blocks at 0x4c2f9c, 0x4c2fa8, 0x4c2fb4 and 0x4c2fc0 set 8, 128, 64 and 32 bits, and indices of 0x17 and up take 32 bits. The helpers at 0x4c2b80 and 0x4c2ac0 run first, with 0x600 as the second helper's first argument, and MSF_get_total_bytes at 0x4c2c40 sizes the surface. The total goes to +0x7c, the allocation goes through slot 0x6f8 and then slot 0xb44, and slot 0x698 frees the first allocation when the second fails. Success stores the total at +0xc, the total over the element size in bytes at +0x10, and keeps the allocation outputs at +0x48, +0x4c and +0x50, then returns 1.

- `fglX11CMMAllocGeneralSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3140
  **Established.** Allocates a general surface through the slot at gp+0x840. The kind word at +4 of the descriptor in a1 picks the mode argument: kind 0 passes 2, kind 2 passes 1, and any other kind returns 0 with no call. The call receives the word the first argument points to, the first word of the descriptor and the descriptor plus eight. The 64-bit result is stored at the descriptor's +0x18, and the return value is whether that result is nonzero.

- `fglX11CMMAllocSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3200
  **Inferred.** Allocates a surface from a descriptor and returns 0 on success and 1 on every early exit or failure. A null first or second argument returns 1. The low four bits of the descriptor's +4 word must be 1 or 2 for the routine to continue. It calls the slot at gp-0x7dd4 with the first argument's +8 word shifted into the high half, then reads a per-format word from the table at gp+0x448 indexed by the descriptor's +0x10 word. The routine calls 0x4c2ac0 when the descriptor's +0x20 is zero and 0x4c2840 when its +0x1c is zero, and then sizes the surface with MSF_get_total_bytes from the +0x14 and +0x18 words and the table word. It allocates through the slots at gp+0x6f8 and gp+0xb44, frees through gp+0x698 when the second step fails, and on success zeroes the 0x80-byte output and copies descriptor words +0xc, +0x10, +0x14 and +0x18 into it.

- `fglX11CMMAllocTexSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3880
  **Established.** Allocates a texture surface through the slot at gp+0x840, with the mode taken from the kind word at +4 of the descriptor in a1. Kind 0 passes 2, kind 1 passes 3 and kind 2 passes 1, and any other kind returns 0. The call receives the word the first argument points to, the first word of the descriptor and the descriptor plus eight. The 64-bit result goes to the descriptor's +0x18 word, and the return value is whether that result is nonzero.

- `__glXShowBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3600
  **Established.** Reads the word at absolute address 0x1010 and adds it to 0x40000, then loads the word 0x7260 below that sum and uses it as a record pointer. Mode 0 copies the word at +0x28 of that record into its +0x60 word. Mode 1 copies the word at +0x48 into +0x60. Any other mode returns without a store.

- `fglX11DrawableBufToBltSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3640
  **Established.** Fills the surface record in the third argument from the buffer record in the second argument. Nine words are copied: +0 and +4 from the buffer's +0 and +4, +0xc from +0x28, +0x10 from +0x98, +0x14 from +0x9c, +0x18 from +0xcc, +0x1c from +0x78, +0x48 from +0xc and +0x4c from +0x80. The byte at +0x34 is 1 when the buffer's byte at +0x88 is zero. The bytes at +0x35 and +0x36 come from comparisons of the first argument's +0x1c and +0x20 words with the buffer pointer. The routine writes format words at +0x70 and +0x80 chosen from the constants 0x80e0, 0x80e1, 0x81a5, 0x81a7, 0x8000, 0x8363, 0x1401, 0x1403, 0x1405, 0x1406 and 0x1903.

- `fglX11GetAsicInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3a00
  **Inferred.** Fills a 0x48-byte capability block from the device record in the first argument. It zeroes the block through the slot at gp+0x6f0 with a2 = 0x48. It then calls the slot at gp+0x704 with the device's +0x60 word and a stack buffer, and returns 0 when that call gives a nonzero result. Otherwise it copies the sub-record at device +0x88 into the block: its +0x84 and +0x8c words go to +0 and +4, and its +0x74 word to +0xc. A +0x74 value of 0xff takes a separate path through the slots at gp+0x694 and gp+0x634. Block +8 is the halfword at buffer+6 XORed with 0xfa3c89b5, byte-permuted and XORed with that constant again. The bits of the buffer's first word fill single bytes: bit 0 to +0x30, bit 1 to +0x37, bit 2 to +0x32, bit 3 to +0x38, bit 4 to +0x3a and bit 5 to +0x39. The routine calls the slot at gp-0x7dd4 on the sub-record, stores the result at +0x2c, and when that result is 3 it sets the bytes from +0x3d to +0x45 to a fixed pattern. It then calls the slot at gp-0x7dd0 on the block and returns 1.

- `driFeatureOn` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3dc0
  **Established.** Returns 0 when the call through the slot at gp+0x694 gives 0. Otherwise it makes seven calls through the slot at gp+0x6a4, passing the returned pointer as a0 and the data addresses gp+0xba0, gp+0xba8, gp+0xbac, gp+0xbb0, gp+0xbb8, gp+0xbbc and gp+0xbc0 in that order. It returns 1 at the first of those calls that gives 0, and returns 0 when all seven give nonzero results.

- `fglX11TilingModeToTileFlags` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3980
  **Established.** Maps a tiling mode in a0 to a flag value. Modes 9 and up return 0 at once. Modes 0 to 8 dispatch through a word table that sits at the base held in gp-0x7e0c less 0x3830, indexed by four times the mode. The dispatch sets 3 in its delay slot, and the case blocks from 0x4c39b8 to 0x4c39ec then return 0, 5, 4, 1, the 3 already set, 2 and 1 in block order.

- `__driGLAddDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3fc0
  **Established.** Calls the slot at gp+0xb5c with the first argument unchanged, the second argument as a2, and the word at +8 of the pointer found at +0xc of the second argument as a1. It returns 1 when that call gives 0 and 0 otherwise.

- `__driGLFindDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4000
  **Established.** Calls the slot at gp+0xb58 with its first two arguments unchanged and the address of a local word as the third. When that call returns 0, the routine returns the local word. Otherwise it returns 0.

- `__driGLMessage` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c3f40
  **Established.** Calls the slot at gp+0x694 with one fixed address derived from the word at gp-0x7e0c. When that call gives a nonzero result it calls the slot at gp+0x634 with a second address taken from the same gp-0x7e0c word, the pointer stored at gp+0x640 plus 0x20 as a0, and the original first argument as a2. Otherwise it returns straight away.

- `__driGLRemoveDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4040
  **Established.** Calls the slot at gp+0xb58 with the first argument, the word at +8 of the pointer found at +0xc of the second argument, and the address of a stack slot holding the second argument. A nonzero result is returned as it is. A zero result sends the same first argument and the same +8 word to the slot at gp+0xb60, and that call's result is returned.

- `driGLInitAPI` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4100
  **Established.** Copies thirteen words from gp-relative slots into the table at its first argument. The slot at gp+0xabc goes to +0, gp+0xac0 to +4, gp+0xac4 to +8, gp+0xad0 to +0xc, gp+0xad4 to +0x10, gp+0xadc to +0x14, gp+0xae0 to +0x18, gp+0xb04 to +0x1c, gp+0xb08 to +0x20, gp+0xb0c to +0x24, gp+0xb10 to +0x28, gp+0xb14 to +0x2c, and gp+0xae8 to +0x30.

- `driGLUpdateDrawableInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4ac0
  **Inferred.** Refreshes a drawable's geometry fields. It returns at once when the drawable's +0x48 record is null or that record's +0x14 word is not the drawable. It frees the pointers at +0x30 and +0x44 when they are set. When the word at +0x40 of the object at the context's +0x64 pointer equals the context's +0x5c word, it spins with load-linked and store-conditional until it can clear that word. It then calls the slot at gp+0x718 with the first and second arguments, the drawable's +8 word, and pointers to the drawable's fields at +0x10, +0x18, +0x1c, +0x20, +0x24, +0x28, +0x2c, +0x30, +0x34, +0x38, +0x40 and +0x44, the last several passed on the stack. A zero result clears +0x2c, +0x30, +0x40 and +0x44. On either path the +0x5c word is written back into the +0x40 word of the +0x64 object when that word reads zero, again with load-linked and store-conditional. Last, +0x14 is set to the +0x64 table plus the count at +0x10 times 8, plus 0x80.

- `driGLCreateDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4d00
  **Inferred.** Builds a drawable record of 0x50 bytes and returns 0 when that allocation through the slot at gp+0x6d4 fails. The record goes to the slot at gp+0x71c with the first three arguments, and is freed if that call returns zero. Twelve words are zeroed and the third argument is stored at +8. The slot at gp+0x708 gives a lookup record, whose +0x10 pointer is a table. The routine scans the table's 8-byte entries at +8, looking for an entry whose second word equals the fourth argument, and passes the first word of that entry, or 0, as a3 to the table function at +0x24. Failure paths free the record. On success the fifth argument receives three function addresses: 0x4c51c0 at +0, 0x4c4f80 at +4 and 0x4c4fc0 at +8.

- `driGLGetDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4f40
  **Established.** Calls `__driGLFindDrawable` at 0x4c4000 with its first argument taken from the word at +0xb0 of the third argument, and the second and third arguments unchanged. It returns that call's result.

- `driGLSwapBuffers` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4f80
  **Established.** Calls the function at +0x2c of the object at the second argument's +0x4c pointer, passing the second argument as its first argument. The routine returns that function's result.

- `driGLBindSwapBarrier` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c4fc0
  **Established.** Calls the function at +0x40 of the object at the second argument's +0x4c pointer. The second argument is passed as the first parameter and the third argument as the second.

- `driGLGetVideoSyncSGI` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5000
  **Established.** Entry gp comes from 0x4c5000 plus 0x6d0798. A call through the slot at gp+0xaec takes the word at +0x57c of the first argument; the routine passes back that result.

- `driGLWaitVideoSyncSGI` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5040
  **Established.** gp is derived from the entry point plus 0x6d0758. The slot at gp+0xaf0 is invoked with the first argument's +0x57c word, and its return value becomes the routine's own.

- `driGLBindHyperpipe` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5080
  **Established.** Here gp equals the entry point plus 0x6d0718. Dispatch goes to gp+0xaf4 with the +0x57c word of argument one, and the result is forwarded unchanged.

- `driGLQueryHyperpipeBestAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c50c0
  **Established.** The module pointer is rebuilt as the entry address plus 0x6d06d8. It jumps to the slot at gp+0xaf8 with the word at +0x57c of its first argument and returns whatever comes back.

- `driGLQueryHyperpipeAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5100
  **Established.** After gp is rebuilt from the entry address plus 0x6d0698, the code loads the word at +0x57c of argument one into a0, calls the slot at gp+0xafc, and returns that value.

- `driGLHyperpipeAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5140
  **Established.** gp becomes the entry address plus 0x6d0658. The slot at gp+0xb00 receives the first argument's +0x57c word, and the routine's return value is that slot's result.

- `driGLCopyContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5180
  **Established.** Calls the slot at gp+0xad8 with the word at +0x57c of its first argument as a0 and the word at +0x57c of its second argument as a1. It returns that call's result.

- `driGLDestroyDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c51c0
  **Established.** Returns at once when the second argument is null. Otherwise it calls the slot at gp+0x89c with the word at +4 of the drawable, then calls the slot at gp+0x720 with the first argument, the word at +4 of the object held at the drawable's +0x4c pointer, and the drawable's +8 word. It frees the pointer at +0x30 through the slot at gp+0x6dc when that pointer is set, and then frees the drawable itself through the same slot.

- `driGLCreateContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5280
  **Inferred.** Creates a context record and fills a dispatch table. A lookup through the slot at gp+0x708 uses the word at +8 of the second argument. The lookup's +0x10 pointer is checked for a nonzero word at +0xb0, and a 0x20-byte block is allocated through the slot at gp+0x6d4. The block holds the first argument at +0x10 and the lookup record at +0x1c. A zero result from the slot at gp+0x724 frees the block and returns 0. When the block's +8 word is nonzero afterwards, the fourth argument receives ten function addresses: 0x4c5580 at +0, 0x4c4340 at +4, 0x4c4180 at +8, 0x4c5180 at +0xc, 0x4c5000 at +0x18, 0x4c5040 at +0x1c, 0x4c5080 at +0x20, 0x4c50c0 at +0x24, 0x4c5100 at +0x28 and 0x4c5140 at +0x2c.

- `driGLDestroyContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5580
  **Inferred.** Tears down a context record and returns at once for a null context. When the context's +0x14 pointer has a +0x4c object whose +0xb8 word is nonzero, that object's +0x3c function is called with the context, then the slot at gp+0x70c is called with the first and second arguments and the +8 word of the +0x14 pointer, and the +0xb8 word is cleared. Next the local routine at 0x4c40c0 runs on the +0xb0 word of the +0x1c object. The function at +0x20 of the +0x1c object is called with the context, the slot at gp+0x898 runs on the context's +8 word, the slot at gp+0x728 gets the first and second arguments and the context's first word, and the context is freed through the slot at gp+0x6dc.

- `driGLDestroyScreen` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c5e00
  **Inferred.** Destroys a screen record and returns at once for a null argument. It calls the function at +0x14 of the record when that pointer is set. It then calls the slot at gp+0x8a8 on the first word of each 8-byte entry in the array at +8, counting the +0xc word down from its value to -1, and frees the array through the slot at gp+0x6dc. Next it calls the slot at gp+0xb48 on the +0x64 pointer with a1 = 0x10000, and on the +0x68 pointer with a1 = the word at +0x70, each only when the pointer is set. It frees the +0x88 pointer when set and clears that word, calls the slot at gp+0xb40 on the +0x60 word, and frees the record itself through the slot at gp+0x6dc.

- `fglX11_mesa_destroy_visual` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6840
  **Established.** Passes its first argument to the slot at gp+0x6dc and returns that call's result.

- `fglAddDRIVisuals` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c6880
  **Inferred.** Appends visual records to the list in the first argument. A zero count in the second argument returns 1. Otherwise it allocates a new array of 8-byte pairs sized for the old count plus the new count, through the slot at gp+0x6d4, and returns 0 if that allocation fails. It copies the old pairs, then for each new entry of 0x94 bytes it stores the entry's +0x28 word in the pair's second word and the result of the list's +0x18 function in the first word. That function is called with the list's first word, the list, 0 and the entry. If one such call returns zero, the routine calls the slot at gp+0x8ac on the first word of each pair added before the failure, newest first, then frees the new array. On success it frees the old array through the slot at gp+0x6dc, and stores the new count at +0xc and the new array at +8.

- `Free` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c8b80
  **Established.** Returns 1 in every case. When the first argument's +0x2c word is nonzero, the routine calls the function at +0x264 of its second argument with that word. Then it clears the first argument's +0x2c and +0xd4 words.

- `fglX11InitMemBuffer` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c8c00
  **Inferred.** Initialises a memory-buffer record in the first argument. The third argument is stored at +8, and it is used as the count after a third argument of 0x18 is treated as 0x20. The routine zeroes 0xdc bytes through the slot at gp+0x6f0 and sets the byte at +0x88 to 1. Four addresses computed from the gp-0x7fe4 word less fixed offsets go to +0x30, +0x34, +0x38 and +0x44. The count goes to +0x18 as ((count - 1) / 8) + 1, with the signed divide rounding toward zero, and the result of a call through the slot at gp-0x6f24 with that count goes to +0x1c.

- `GetTargetIndex` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4c9200
  **Established.** Maps one of three target enumerants to a small index. 0x9809 gives 0, 0x980a gives 1 and 0x9808
  gives 6. Any other argument gives -1. The routine is a leaf with no stores and no calls.

- `fglX11PBufferSetMipMapLevel` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cae80
  **Inferred.** Forwards a mipmap-level request for the object held at +0x3c98 of its first argument to
  `PBufferSetMipMapLevel` at 0x4ca980. The forward is skipped when the word at +0x1518 of that object equals
  0x9807, and in that case the routine returns 0x9807. Otherwise it returns what the callee returns.

- `fglX11PBufferBindTexImage` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4caf00
  **Inferred.** Binds a pbuffer to a texture for the current context. The current context pointer is the global word
  at 0x1010. When it is null the routine returns 0. Otherwise it calls `PBufferBindToTexture` at 0x4c9780 with the
  context as first argument, and passes the original first and second arguments on as second and third.

- `fglX11PBufferReleaseTexImage` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4caf80
  **Inferred.** Undoes that binding for the current context, found at the global word 0x1010. When the context is
  null the routine returns without writing v0. Otherwise it passes the context, the original first argument and
  the word at +0xf70 of the context to `PBufferReleaseFromTexture` at 0x4c9280, and returns that call's result.

- `fglX11LockSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cba00
  **Inferred.** Brackets a surface update with the GLX drawable lock. It calls `fglX11GLDRMLock` on the first
  argument, then, if the second argument is non-null and its 64-bit word at +0x28 is nonzero, it adds 0x100 to the
  word at +0x1c. The 0x100 unit is a count kept above the low byte. It finishes with `fglX11GLDRMUnlock` on the
  first argument.

- `fglX11UnlockSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cba80
  **Inferred.** Ends a surface update under the same lock. Once the lock is held it subtracts 0x100 from the word
  at +0x1c of the surface, but only when bits above the low byte are set. It then calls
  `__FGLTexMgrSurfaceTimeStampUpdate` (GOT slot gp-0x7d9c) with the surface and the second argument, and releases
  the lock.

- `fglX11UpdatePriority` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cbb00
  **Inferred.** Changes the texture-manager priority of a context. The routine takes the lock on its first
  argument, loads the manager record from +0x44b70 of that context, and calls `__FGLTexMgrSetLRU` (GOT slot
  gp-0x7dc4) with the record and the second argument. The lock is released after the call.

- `fglX11FreeManagedSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cbe40
  **Inferred.** Frees one managed surface under the drawable lock. It calls `__FGLTexMgrFree` (GOT slot gp-0x7dbc)
  with the context, the manager record at +0x44b70 and the surface given as second argument, then releases the lock.

- `fglX11SurfaceTimeStampUpdate` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cbec0
  **Inferred.** Refreshes a surface's time stamp. A zero second argument returns at once. Otherwise the routine
  takes the lock on the first argument, calls `__FGLTexMgrSurfaceTimeStampUpdate` with the first and second
  arguments, and releases the lock.

- `fglX11SurfaceQueuedForOwner` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cbf40
  **Inferred.** Asks whether a surface is queued for its owner. It takes the lock on the second argument, calls
  `__FGLTexMgrSurfaceQueuedForOwner` (GOT slot gp-0x7d98) with the context and that surface, releases the lock on
  the surface, and returns the query result.

- `fglX11WaitForSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cbfc0
  **Inferred.** Blocks until a surface is ready. Under the context lock it calls `__FGLTexMgrWaitForSurface`
  (GOT slot gp-0x7d94) with the manager record at +0x44b70 and the surface, then releases the lock and returns
  the callee's result.

- `FreeBltSurfSys` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc1c0
  **Inferred.** Releases a system-memory blit surface. It builds a three-field block from the record, the word at
  +0 into block offset 4, the word at +0x10 into offset 0 and the 64-bit word at +8 into offset 8, and passes it
  with the context to `fgl_x11_VmmUnlockMemory`. When that call returns zero, it frees the pointer at +0x14 of the
  record and returns 1. When the call returns nonzero, it returns 0 and frees nothing.

- `AllocBltSurfSys` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc080
  **Inferred.** Allocates a system-memory blit surface. The row pitch is the word at +8 doubled and rounded up to
  256 bytes, and the total size is that pitch times the word at +0xc. It stores the pitch at +0x14, half the pitch
  at +0x1c and the size at +0, then calls `malloc` with the size plus 0x4000. If malloc returns null it clears the
  output word and returns 0. Otherwise it rounds the pointer up to a 16 KiB boundary and passes it to
  `fgl_x11_VmmLockMemory`. A failed lock frees the raw malloc pointer and clears the output.

- `fgl_x11_VmmMapSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc840
  **Inferred.** Maps a surface through the DRM. The file descriptor comes from a pointer chain that starts at +0x39c
  of the context. The routine calls `drmMap` (GOT slot gp+0xb44) with that descriptor, the 64-bit word at +8 and the
  word at +0x10 of the surface record, and the record itself as the fourth argument. It returns 1 when `drmMap`
  returns 0 and 0 otherwise.

- `fgl_x11_VmmUnmapSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cc8c0
  **Inferred.** Unmaps a surface. A zero word at +0 of the record returns 1 at once. Otherwise it calls `drmUnmap`
  (GOT slot gp+0xb48) with the word at +0 and the word at +0x10. A zero result clears the word at +0 of the record and
  returns 0. A nonzero result returns 1.

- `ACQUIRE_PROCESS_SPINLOCK` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ccc00
  **Inferred.** Takes the per-process spinlock for the calling thread. The thread id comes from `_mplib_get_thread_id`
  (GOT slot gp+0x74c). The lock base is the address in GOT slot gp-0x7e00, which is 0xbe0000 in this build. When the
  owner word at base-0x2220 already equals the thread id, the routine increments the count word at base-0x21e0 and
  returns. Otherwise it retries an ll/sc loop until the owner word is zero, stores its id with sc and sets the
  count to 1.

- `RELEASE_PROCESS_SPINLOCK` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ccc80
  **Inferred.** Drops one level of the process spinlock taken by `ACQUIRE_PROCESS_SPINLOCK`. A zero count word, or
  an owner word that differs from the thread id, sends the routine to a fprintf on the stream at __iob+0x20 with
  one of two format strings at 0xb6cc20 or 0xb6cc60, followed by `exit(-1)`. Otherwise it decrements the count. When
  the count reaches zero it clears the owner word with an ll/sc loop.

- `fglX11InitSurfaceManager` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cb800
  **Inferred.** Creates the surface manager record for a context. It first calls the allocator pointer stored at
  context +4 with sizes 0x14 and 1. A null result stores zero through that null pointer and returns. On success it
  fills the record from the chain of pointers at context +0x64, +4, +0x1c and +0xb4 and from the word at +0xe4, sets
  the count word at +8 to 1 and stores 0x3ffff8 at +0xc. The record is published at context +0x44b70 under
  `fglX11GLDRMLock`. Then it calls `__FGLTexMgrCreateSharedMemory` (GOT slot gp-0x7dcc) on the record and loops over
  `firegl_RegisterTexture`, calling `__FGLTexMgrDeleteAllOfProcess` (GOT slot gp-0x7db0) on each positive result.
  The routine ends with `fglX11GLDRMUnlock`.

- `fglX11ReleaseSurfaceManager` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cb940
  **Inferred.** Drops one reference to the surface manager record at context +0x44b70 under the drawable lock. The
  count word at +8 of the record is decremented. When it reaches zero the routine calls `__FGLTexMgrDeleteAll` (GOT
  slot gp-0x7db4) on the context, `firegl_UnregisterTexture` on the two fields at +0x78 and +0xec of the chain
  struct, and then the function pointer at context +0xc with the record. In both cases it clears the record pointer
  at +0x44b70 before releasing the lock.

- `fglX11RemovePBufferTexReferences` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cb280
  **Inferred.** Removes every pbuffer texture reference that names this context. It takes the process spinlock,
  then walks the hash table at +0x118 of the chain struct with `drmHashFirst` and `drmHashNext`. For each entry it
  calls `RemovePBufferTexReferences` at 0x4c8d00 with the original first argument and the entry's value. It
  releases the spinlock at the end.

- `fglX11TermQSConnection` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cb5c0
  **Inferred.** Tears down three queue-service pointers stored at +0xac, +0xb0 and +0xb4 of its argument. For each
  non-null pointer it spins in an ll/sc loop that stores zero to the word the pointer refers to, then clears the
  pointer field.

- `__glapiInitialize` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ccd80
  **Inferred.** Compares the first word of its argument with the magic 0x42020003. On a match it copies seven words, offsets 0 through 0x18 of the argument, into the object whose address sits in the GOT slot at gp+0xb80, which the symbol table names `fgl_glapi`. On a mismatch it calls getenv (GOT slot gp+0x694) on a string at the GOT-slot address at gp-0x7e0c minus 0x3358; when that call returns a non-null pointer it calls fprintf (GOT slot gp+0x634) with a stream built from `__iob` plus 0x20. Both mismatch branches then store 0x42020003 into the first word of `fgl_glapi` and return.

- `fglX11GetAssociatedVisInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cd840
  **Inferred.** Passes both of its arguments to __getAssociatedVisualId at 0x4cd500 and takes the visual id it returns. It then calls __getVisualInfo at 0x4cd700 with the original first argument and that id, and returns the result of that call unchanged. The first argument is kept in fp across the first call.

- `__getVisualInfo` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cd700
  **Inferred.** First calls XGetVisualInfo with mask 3. The template on the stack holds the second argument at offset 4 and the word at offset 4 of the first argument at offset 8, so the lookup filters on visual id and screen. A non-null array from that call is returned as it stands. Otherwise it mallocs a 0x28-byte record, zeroes its first ten words, and calls XGetVisualInfo again with mask 2, which filters on screen only. When that second call finds a visual, the record receives the Visual pointer, the Visual words at offsets 4, 8, 0xc, 0x10, 0x14, 0x18 and 0x1c, and the depth word at 0xc of the array's first element, and the array is freed. The record is returned in both cases; a malloc failure returns null.

- `__getAssociatedVisualId` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cd500
  **Inferred.** Walks the table of 0x94-byte entries reached through the word at +0xb4 of the first argument. The table count is the word at +0x24 of that object and the table base is the word at +0x28. Each entry is matched against the second argument, whose fields sit 0x20 bytes past the entry's: the low bit at +0x2c, the bytes at +0x2d, +0x2e, +0x2f, +0x30 and +0x31, and the words at +0x34, +0x38, +0x3c, +0x40, +0x6c, +0x70, +0x74, +0x78, +0x7c, +0x80 and +0x84. The first entry that matches all of them returns its word at +0x28. Zero entries, or no match, return zero.

- `fglX11BindTexImage` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cd940
  **Inferred.** Holds the lock routine at 0x4ccc00 across a drmHashLookup. The handle passed is the word at +0x118 of the object at the first argument's +0xb4, and the key is the second argument. An empty lookup sends the pointer it produced, plus the third argument, to fglX11PBufferBindTexImage (GOT slot 0xa60), and the routine returns the byte that call produced. A successful lookup leaves that byte at zero. Both paths release the lock at 0x4ccc80 before returning.

- `fglX11ReleaseTexImage` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cda00
  **Inferred.** Looks up the second argument through drmHashLookup, with the handle taken from the +0x118 word of the first argument's +0xb4 object and the output pointer at sp+0. When the lookup returns null it forwards the stored pointer and the third argument to fglX11PBufferReleaseTexImage (GOT slot 0xa64). The lock from 0x4ccc00 brackets the whole sequence and is dropped through 0x4ccc80. The routine writes no return value of its own.

- `fglX11DrawableAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cdac0
  **Inferred.** Takes the lock at 0x4ccc00 and runs drmHashLookup on the second argument, using the 0x118 field of the object behind the first argument's 0xb4 word. A null result passes the pointer kept at sp+0 and the third argument to fglX11PBufferDrawableAttrib (GOT slot 0xa68). The lock is released at 0x4ccc80 on both branches. It sets no return value of its own.

- `fglX11QueryDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cdb80
  **Inferred.** Holds the lock through a drmHashLookup keyed by the second argument; the handle comes from the 0x118 word of the object at the first argument's +0xb4. When the lookup is empty it calls fglX11PBufferQueryDrawable (GOT slot 0xa6c) with the stored pointer, the second argument, and the fourth argument, which is parked at sp+0x20 for that call. The release at 0x4ccc80 follows either path.

- `fglX11GetCurrentReadDrawable` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cdc40
  **Inferred.** Takes the lock at 0x4ccc00 and reads the pointer at +0xc of its argument. A null pointer produces zero. Otherwise it follows the pointer at +0x7c of that object and returns the word at +8 of the object it reaches. The value goes through sp+0x10, so it reaches the 32-bit return register after the release at 0x4ccc80.

- `fglX11GetGLVersionNumberString` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cea80
  **Inferred.** Rebuilds gp from t9 with the constant 0x6c6d18 and returns the word in the GOT at gp+0x15a0. The dynamic symbol table gives that slot's target no name, so the routine is a pointer fetch and nothing more.

- `XGLGetVideoSyncSGI` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cff40
  **Inferred.** Follows the pointer chain from the first argument: the word at +0x1c, then +0xb4, then +0x78, then the word at offset 0 of the result. That word is the file descriptor. The routine calls ioctl with that descriptor, request 0x6667000d and the second argument as the data pointer, inside the lock at 0x4ccc00 and the release at 0x4ccc80, and returns the ioctl result.

- `XGLWaitVideoSyncSGI` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4cffc0
  **Inferred.** Reads its descriptor through the same chain as XGLGetVideoSyncSGI: +0x1c, +0xb4, +0x78, then offset 0. It writes the second argument into word 0 of a stack block and the third into word 4, then calls ioctl with request 0x6667000e and the block address. The block's word at offset 8 is stored through the fourth argument's pointer, saved at sp+0x28. The lock at 0x4ccc00 and release at 0x4ccc80 bracket the call, and the ioctl result is returned.

- `XGLBindHyperpipe` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d0080
  **Inferred.** Routes the call through the function pointer at +0x90 of the object reached by the first argument's +0xc word and then its +8 word. Arguments one through three pass unchanged, and the callee's return value is handed back.

- `XGLQueryHyperpipeBestAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d00c0
  **Inferred.** Calls the pointer at +0x94 of the two-level object (+0xc, then +8) built from the first argument. The other three arguments are not touched, and the value the callee returns is the routine's return value.

- `XGLQueryHyperpipeAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d0100
  **Inferred.** Relays its call to the slot at +0x98 of the object at (first argument +0xc) +8. It keeps the frame at 0x10 bytes and saves only ra and gp around the indirect call.

- `XGLHyperpipeAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d0140
  **Inferred.** Hands off to the function pointer at +0x9c in the object reached by the first argument's +0xc and +8 words. Its own frame is the same 0x10 bytes, and the callee's result is its result.

- `fglX11AquireProcessSpinlock` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d2140
  **Inferred.** Calls the routine at 0x4ccc00 with no arguments of its own. That routine reads the thread id from _mplib_get_thread_id, compares it with the owner word at P-0x2220, and either raises the count at P-0x21e0 or claims the owner word with an ll/sc loop and sets the count to 1. P is the address in the GOT slot at gp-0x7e00.

- `fglX11ReleaseProcessSpinlock` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d2180
  **Inferred.** Calls the routine at 0x4ccc80 with no arguments. That routine calls _mplib_get_thread_id, checks the owner word at P-0x2220, and lowers the count at P-0x21e0 by one. A lowered count that is still nonzero branches to 0x4ccce8 without touching the owner word; a count that reaches zero goes on to clear the owner word with ll/sc.

- `init_shared_memory` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d6b00
  **Inferred.** Fills four words of the block at the address in the argument's +4 word. Words 0, 4 and 8 each receive 0xffffff00 OR-ed with the low byte of the argument's word at +0x10. Word 0xc receives the argument's word at +8 minus 0x10. The values written to the stack are spill copies and are not part of the result.

- `DetermineAsicFamily` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d4100
  **Inferred.** Passes the high word of its 64-bit argument, shifted into the upper half, to the class routine at 0x4d2580. The class result 0 gives family 0, 1 gives 5, 2 gives 8, and 3 gives 0x2c (44). Any other class returns 0.

- `__FGLTexMgrCreateSharedMemory` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d6bc0
  **Inferred.** Mallocs a 0x14-byte block through fglx11Malloc (GOT slot 0x808) and stores it at +0x10 of the argument. The block gets 0x3ffff8 at +8 and the argument's first word plus 8 at +4. When the word at the argument's first-word pointer is zero, the routine calls init_shared_memory at 0x4d6b00 on the block and stores 1 at that pointer. Every path that gets a block returns 1; a failed malloc returns 0.

- `__FGLTexMgrDeleteSharedMemory` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d6c80
  **Inferred.** Reads the pointer at +0x10 of its argument. When that pointer is non-null it passes it to fglx11Free (GOT slot 0x814) and then zeroes the word at +0x10. A null pointer returns with no call.

- `__FGLTexMgrFree` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d7680
  **Inferred.** Works on the texture object in its third argument. It returns at once when the word at +0x28 is zero or when the word at +0x1c has any bit above bit 7 set. Otherwise, when the word at +0x3c equals the word at +4 of the record that the second argument's +4 word points to, it calls the object's callback at +0x30 with the word at +0x44 as second argument. Then it calls fglX11FreeBuffer (GOT slot 0x844) with the buffer pointer from that record, the address of +0x28, the word at +0x18 and the address of +8, and clears the 8-byte word at +0x28 and the word at +0x20.

- `__glATIMakeResidentNoop` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db240
  **Established.** Calls `__glATIGenerateMipmaps` with the four incoming arguments before it does anything else. It then loads the pointer at +0x4 of a1 and the word at +0x20 of the object that pointer names, and compares that word with 7 (a3) and 6 (a4). It stores 1 at +0x54 of a1 unless the pointer is non-null and the word is 6 or 7. The routine returns 1 on every path, so it never reports a failure.

- `__glATIRemoveResidentNoop` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db300
  **Established.** Makes no calls. It reads the pointer at +0x4 of a1 and, when that is non-null, the word at +0x20 of its target. The routine writes zero to +0x54 of a1 only when the pointer is non-null and that word is neither 0 nor 6. It returns 1 on every path.

- `__glATIUpdateRegionNoop` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db340
  **Established.** Calls `__glATIValidateMipmapGeneration` with its four incoming arguments and ignores the result. The routine's own code stores nothing and returns the constant 1.

- `__glATIInvalidateTextures` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db400
  **Established.** Calls `fglX11GLDRMLock` through the GOT with the incoming arguments and keeps the a0 value in s0. It then calls `__FGLTexMgrFreeAllResident` with a0 set to s0 and a1 set to the word at +0x44b70 of that context, which is loaded through a0 + 0x40000 plus 0x4b70. Last, it calls `fglX11GLDRMUnlock` with s0 as its argument. The routine returns whatever the unlock call returned in v0.

- `RecoverTexObject` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db900
  **Established.** Loads the word at +0x11c of a0. If that word is non-null, it jumps to it with a0 through a3 unchanged and returns the callee's v0. If the word is null, no call is made and v0 is left as it was on entry.

- `__FGLTexMgrSurfaceQueuedForOwner` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d8340
  **Established.** Returns 0 when a0 is null or when the list head at +0x48 of a0 is null. Otherwise it walks that singly linked list, reading each node's item from word 0 and the next node from word 8. A node counts when its item's word at +0x8 equals a1 and the byte at +0x10 of the item is nonzero. The routine returns 1 if any node counts, and 0 otherwise.

- `__FGLTexMgrWaitForSurface` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4d8400
  **Established.** Returns 1 at once when a1 is null, or when the list head at +0x48 of a1 is null. Otherwise it walks that list. A node whose item is null is skipped. A node whose item has a nonzero byte at +0x10 makes the result 0 and is left alone. For a node whose item has a zero byte, the routine calls `__glATIWaitAndReleaseTimeStampTracker` with the word at +0x4 of the saved a0 as its argument, then clears the node's item word.

- `__glATILockRenderBuffers` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4da5c0
  **Established.** Forwards to `__glATILockBuffers` with a0 and a3 unchanged, a1 set to the word at +0x36ecc of a0, and a2 set to the constant 0x6bb1d8 (0x6c0000 minus 0x4e28). The routine returns that call's result unchanged.

- `__glATIUnlockRenderBuffers` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4da600
  **Established.** Forwards to `__glATIUnlockBuffers` with a0 and a3 unchanged, a1 taken from the word at +0x36ecc of a0, and a2 set to the constant 0x6bb198 (0x6c0000 minus 0x4e68). The callee's return value is passed back as the routine's own.

- `__glATITextureCreateObject` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4db940
  **Established.** Calls `fglX11GLDRMLock` with the incoming a0 and a1, and keeps a0 in s0. It then calls `__FGLTexMgrCreateObject` with a0 set to the word at +0x44b70 of the context and a1, a2 and a3 set to constant addresses formed from gp. After that it calls `fglX11GLDRMUnlock` with s0 as its argument. The routine returns 1 when the create call returned a nonzero value and 0 when it returned zero.

- `__fglDRMSubmit` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4dca00
  **Inferred.** Passes a buffer list to the indirect call at +0x30 of the object that a0 points to. The list pointer is the word at +4 of a1 and the count is the word at +0xc. An odd count gets the word 0x80000000 appended and the count goes up by one. The first list word and then the last list word are both stored at +0x18 of the structure whose pointer sits at +8 of the object a0 points to, so the second store wins. A count of zero returns 0 without making the call.

- `LockDevice` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ddd80
  **Inferred.** Calls the hook stored at a0 + 0xc6b8 with a0 unchanged, when that hook pointer is non-null. Nothing else happens in the routine, and the hook's result is not inspected.

- `NotifyDestroyBuffers` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4ddd40
  **Inferred.** A seven-instruction stub. It loads a word from its global table, subtracts 0x2480 from it for t9, and branches to 0x4ddb80, the entry of `NotifyChangeBufferSize`, with the caller's argument registers left as they were.

- `SoftwareFinish` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4de300
  **Inferred.** Does no work of its own. It loads a word from its global table, subtracts 0x1d40, and branches to 0x4de2c0 (`SoftwareWaitIdle`) with a0 unchanged.

- `SoftwareWaitIdle` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4de2c0
  **Inferred.** Sets up its global pointer, then calls `__glATIFlushToPrimary` at 0x4de000 with the same context in a0 and returns whatever v0 that call leaves. The frame is 16 bytes and holds only the return address and the global pointer.

- `SoftwareFlush` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4de340
  **Inferred.** Its instruction stream matches `SoftwareWaitIdle` at 0x4de2c0 except for the global-pointer base in the prologue, so it makes the same single call to `__glATIFlushToPrimary` at 0x4de000 and returns.

- `__glDRMReadRegister` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e2f00
  **Inferred.** Reads one word from the table whose base is the word at +0x4 of a0. The slot index in a1 is shifted left by 0x2, so each slot is 0x4 bytes, and the value is stored through the pointer in a2.

- `__glDRMWriteRegister` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e2f40
  **Inferred.** Writes the word in a2 into slot a1 of the table at +4 of a0, using a slot index scaled by four. A `sync` follows the store, so the write is ordered before the return.

- `CheckViewport` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4dd640
  **Inferred.** Computes a rectangle from context words at +0xd58 plus +0x745c for x and +0xd5c plus +0x7460 for y, extended by the sizes at +0xd60 and +0xd64. It then compares the rectangle with four bounds words at context +0x35ce0, +0x35ce4, +0x35ce8 and +0x35cec, and stores 1 or 0 in the byte at +0x35d70 to record whether it fits. When that flag changes and the pointer at +0xa0 is null, it sets +0xa4 and bit 0 of the word at context +0xc06c. When the pointer is set, it clears +0xa4, calls the hook at gp-0x3ef4 first if +0xa4 was set, and then always calls that hook. Either path ends by setting +0xa8 to 1.

- `ApplyScissor` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4dd980
  **Inferred.** Calls the getter at +0x278 of the device structure (the pointer at context +0x38da0) with four stack output pointers, then reads the words written to sp+8 and sp+0xc. It compares those with the cached pair at +0x7474 and +0x7478, and with the second pair at +0x747c and +0x7480. When the first pair changes and the byte at +0x7d00 is set, the difference is added to the float at +0x298 before the cache is replaced. It converts the words at +0x745c and +0x7460 to floats at +0x602c and +0x6030, calls the hook at gp-0x3e9c, sets bit 1 of the word at context +0xc070, and then calls `CheckViewport` at 0x4dd640.

- `ApplyViewport` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4dd780
  **Inferred.** The instruction stream is the same as `ApplyScissor` at 0x4dd980, so the body is described there. The two differ only in the global-pointer base in the prologue and in the branch targets that follow from their different start addresses.

- `WaitIdle` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4de0c0
  **Inferred.** Sets bit 2 (value 4) in the word at +0x308 of the device structure when the words at +0x46d58 and +0x46d64 are equal, and calls the hook at context +0xc698 if one is set. It stores 0x2000 at +0x46d50 and calls the global-table routine at gp-0x2218 with the context. It then calls `__glATIFlushToPrimary` at 0x4de000 and `__glATIWaitChipIdle` at 0x4e3000, and clears bit 2 of the device word before returning.

- `Flush` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4de180
  **Inferred.** Follows the same pattern as `WaitIdle` without the wait. It sets bit 2 of the device word at +0x308 under the same equal-counter test, calls the hook at context +0xc69c if set, and calls the global-table routine at gp-0x2218. It then calls `__glATIFlushToPrimary` and clears bit 2 of the device word before returning. It does not call `__glATIWaitChipIdle`.

- `Finish` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4de240
  **Inferred.** Returns at once when the word at context +0x6044 is nonzero, the words at +0x46d58 and +0x46d64 match, the device pointer at +0x38da0 is set, and the byte at +0x2f5 of that device is nonzero. Otherwise it branches to `WaitIdle` at 0x4de0c0 and gives that routine the context unchanged. A zero word at +0x6044 also goes straight to `WaitIdle`.

- `FlushHDPReadCache` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e2f80
  **Inferred.** Takes the device pointer at context +0x38da0. When the word at +0x1c of that device is set, the source is the word at +0x10 of it; otherwise the source is the word at +0xc of the word at +0x24. Two bytes are copied from the source, byte 0 to offset 0xe8 and byte 0x40 to offset 0xe9, of the structure whose pointer sits at +0xb4 of the object reached from context +0x64 through +4 and +0x1c.

- `__glATIWaitChipIdle` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e3000
  **Inferred.** Calls the routine in the global-table slot at gp+0x7f0 with the context. It then calls the routine in slot gp+0x6fc with the word that the pointer held at context +0x46a14 points to, and makes one more call through slot gp+0x7f4 with the context. When the byte at context +0x6064 is zero, it finishes by calling `FlushHDPReadCache` at 0x4e2f80.

- `BindHyperpipe` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e0b40
  **Inferred.** An index of -1 calls the routine at 0x4e7b80 with the value already stored at context +0x46c80. Any other index calls the routine at 0x4e7ac0 with the index, then stores the index in the word at +0x46c80. The context is in a0 for both paths.

- `QueryHyperpipeAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e0c40
  **Inferred.** Dispatches on the selector in a2: 1 goes to 0x4e7580, 2 to 0x4e7640, 3 to 0x4e7940 and 4 to 0x4e7a00, and the callee's v0 is returned. Any other selector returns 0x5c without a call. The stored word at context +0x46c80 is not read on this path.

- `HyperpipeAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e0d40
  **Inferred.** Returns 0x5c when the word at context +0x46c80 is negative. Otherwise a2 selects 1 for 0x4e7700, 3 for 0x4e77c0 and 4 for 0x4e7880, with the callee's v0 returned. Selector 2 and any other value return 0x5c.

- `QueryHyperpipeBestAttrib` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e0bc0
  **Inferred.** Returns 0x5c when the word at context +0x46c80 is negative or when a2 is not 1. For a2 equal to 1 it forwards a2, a3 and t0 to the routine at 0x4e74c0 and returns that routine's result.

- `ShareContext` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e0a00
  **Inferred.** Stores 1 in the word at +0xc99c of both context arguments, then calls eight indirect routines from the global table and one direct routine at 0x4e8080, passing the two contexts each time. It returns 1.

- `FindDefaultRec` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e3a80
  **Inferred.** Walks a table of 8-byte entries from a base computed as the word at gp-0x7e08 minus 0x5470, up to base plus 0x5d0. For each entry it calls the comparator held in the global-pointer slot at +0x628 with a0 and the entry's first word. It returns the entry where the comparator returns zero, or 0 when no entry matches.

- `FindDefaultStrRec` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4e3b40
  **Inferred.** Walks the 8-byte entries from base offset 0x5d0 up to 0x600 of the same table that `FindDefaultRec` scans, with the comparator from the global-pointer slot at +0x628. It returns the first entry the comparator accepts, or 0 when none does.

- `LoseCurrent` in `usr/X11R6/lib/modules/extensions/fglrx_glx.so` at 0x4dfb00
  **Inferred.** When the word at context +0xa0 is set it calls the function at +0x30 of the structure in context +0x44c98. When the second argument is zero it calls the hook at context +0xc668 if set, then calls `Flush` at 0x4de180. The routine then calls through the global-table slot at gp-0x569c with the value at gp+0x460, clears the absolute word at 0x1010, and returns 1. A nonzero device pointer at +0x38da0 adds a call through the function at +0x30 of the context and the global-table routine at gp-0x7444 before that tail.
