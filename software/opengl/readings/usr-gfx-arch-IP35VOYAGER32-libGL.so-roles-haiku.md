# Role readings: `usr/gfx/arch/IP35VOYAGER32/libGL.so`

Routine roles, each read from the routine's own body. Calls through GOT slots are named by the slot's offset from gp where the symbol table does not name them.

- `ColorScore` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd844a40
  **Established.** The beqz on $a0 sends a zero a0 to a path that leaves negu $v0, $a1, so the result is minus a1. Otherwise subu $v0 = $a1 - $a0 is shifted left by 2 (sll $v0, $v0, 2) before the return, which is the difference times four. Leaf routine with no calls and no memory access.

- `AccumScore` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd844a80
  **Established.** The beqz on $a0 sends a zero $a0 to negu $v0, $a1, giving minus $a1. Any other $a0 falls through to subu $v0, $a1, $a0, giving $a1 minus $a0. The beqz at 0xd844a80 takes its branch to 0xd844a90. Leaf routine with no calls and no memory access.

- `DepthScore` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd844b00
  **Established.** A zero $a0 gives negu $v0, $a1, minus $a1. Otherwise subu $v0 = $a1 - $a0 is followed by addu $v0, $v0, $v0 in the delay slot of the return, so the result is twice the difference. The branch target is 0xd844b10 and the doubling sits at 0xd844b0c. Leaf routine with no calls.

- `SampleScore` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd844b40
  **Established.** slt $at, $a0, $a1 compares the two as signed values. When $a0 is below $a1 the result is subu $v0 = $a0 - $a1 shifted left by 6 (sll $v0, $v0, 6). When bne $a0, $a1 finds them equal, the result is $a1 shifted left by 6. When $a0 is above $a1 the result is zero (move $v0, $zero). Leaf routine with no calls.

- `orderLarger` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd847440
  **Established.** beq $a0, $a1 returns 0 first. Then beqz $a0 returns -1 (addiu $v0, $zero, -1) and beqz $a1 returns 1 (addiu $v0, $zero, 1). Any other pair returns subu $v0 = $a1 - $a0. The branch targets are 0xd847460, 0xd847470 and 0xd847468. Leaf routine with no calls.

- `__glConvolutionParameterfv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82ce80
  **Established.** Maps the parameter enumerant in a0 to a value count. The enumerant 0x8013 returns 1, the enumerants 0x8014, 0x8015 and 0x8154 return 4, and any other value returns -1. Leaf routine with no calls and no memory access.

- `__glConvolutionParameteriv_size` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd82cf00
  **Inferred.** Builds a small stack frame, derives gp from t9 and a constant, and calls the GOT routine at slot -0x7d50 with the incoming a0 to a3 unchanged. It returns that routine's result in v0 and restores ra, gp and the stack pointer.

- `__glXIsDirect` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd843980
  **Inferred.** Returns zero early when the GOT routine at slot -0x6aa0 gives zero for a0, or when a1 is zero. Otherwise it reads the word at +0x4d0 of the object at a0 and calls its first function slot when that word is set, then checks the cursor at +0x6c against the limit at +0x70. When the limit is too small it calls the GOT routine at slot -0x7f60 and retries. It then writes an 8-byte request whose first byte is the value from the first call, whose second byte is 6, whose halfword at +2 is 2, and whose word at +4 is the value in a1. That request goes out through the GOT routine at slot -0x7ed8, and the function returns byte 8 of the reply buffer at sp.

- `__glXatExit` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd841ec0
  **Inferred.** Calls the GOT routine at slot -0x6b90 first, then loads the pointer stored at absolute address 0x1014 and reads a count from +0x114 of it. When the count is neither -1 nor zero or below, it walks the entries at +0x14. Each entry that is not negative goes to the GOT routine at slot -0x7f00, and the entry is then set to -1. Afterwards it calls the function at +0xc with the word at +8 as its argument when both are set, and finishes by passing the same pointer to the GOT routine at slot -0x7eac.

- `__glXErrorString` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84c180
  **Inferred.** Computes t1 as a1 minus the word at +0xc of a2. The routine returns 0 unless t1 lies between 0 and 11 inclusive. In that range it calls the GOT routine at slot -0x7e64 with a stack buffer, a constant address relative to gp, the word at gp-0x6724 and t1, then calls the GOT routine at slot -0x7e60 with the original a0, a gp-relative address, the stack buffer and a word from a table indexed by t1. On success it returns the incoming a3 unchanged.

- `__glXFreeDisplayPrivate` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84c7c0
  **Inferred.** Takes the pointer at +0xc of a0 as its private record. It calls the routine at FreeScreenConfigs, which sits at 0xd84c6c0, with that record. Then it releases the pointers at +0x18 and +0x1c through the GOT routine at slot -0x7eac, clearing each word after release. It calls the GOT routine at slot -0x7f04 with the word at +0x2a8, and finally passes the record itself to the GOT routine at slot -0x7eac. The function returns 0.

- `checkExtension` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd84f500
  **Inferred.** Calls the GOT routine at slot -0x7f28 with a1 as its first argument and a0 as its second, and returns 0 if that search finds nothing. At each match it adds the value the GOT routine at slot -0x7f6c returns for the name (a length, if that routine is strlen-like) to the match position and reads the byte there. A byte of 0x20 or 0 returns 1. Any other byte sends the search on from that point through the same routine. The function returns 0 when a later search fails.

- `__glx_TexImage3D4D` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd85d6c0
  **Inferred.** Encodes one 4-D texture image request into the GLX render buffer. The target in a1 is compared with 0x8070 and 0x8135, and the stack argument at 0xfc(sp) is tested for zero; for those cases no size is computed and the packet is only the 0x54-byte header. Otherwise `__glImageSize` is called through the GOT slot at gp-0x6a10, and its result gives the image length, which the packet length takes as 0x54 plus that length rounded up to four. The buffer is reached through the word at 0x1014 and the pointer at +0x11c, then the base at +0x518, the write pointer at +4, the end at +0xc and the limit at +0x54c. `__glXFlushRenderBuffer` (GOT slot gp-0x6a9c) starts a fresh buffer when the limit is below the length or the packet would pass the end, and it is tail-called after the header when the word at +8 falls below the new write pointer. The header holds the length halfword at +0, opcode 0x1012 at +2, the a1 argument at +0x28, a2 and a3 at +0x2c and +0x30, the t0 to t3 arguments at +0x34 to +0x40, and three stack arguments at +0x44 to +0x4c. The write pointer then advances by the header plus the image length rounded up to four.

- `__glXTypeSize` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd862600
  **Inferred.** Returns the byte size of a GL pixel data type. The enumerant in a0 minus 0x13ff is checked against 12, and the in-range value indexes a table of word-sized jump targets at 0xd87d1b0, reached through the GOT slot at gp-0x7fa4, so each case returns the value it sets in v0. The sizes are 1 for 0x13ff through 0x1401, 2 for 0x1402 and 0x1403, 4 for 0x1404 through 0x1406, 0 for 0x1407 through 0x1409, and 8 for 0x140a; every other value returns 0 through the default path. The 0x1400 to 0x140a range matches the GL data-type enumerants, so the routine reads as a size table for pixel types.

- `_init` in `usr/gfx/arch/IP35VOYAGER32/libGL.so` at 0xd876870
  **Inferred.** Library initializer stub. It saves gp and ra on the stack, rebuilds gp from t9 plus 0x1299c, and loads the GOT slot at gp-0x7fe4 (value 0xd840000) plus 0x1dc0 to get 0xd841dc0, which the symbol table names `__glXInitPageOne`. It calls that routine with jalr, restores gp and ra, pops the 16-byte frame and returns.
