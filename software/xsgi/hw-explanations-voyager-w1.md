# Hardware-facing routine explanations, voyager (ATI Radeon R200 X module), wave 1

Each entry says what one routine does to the hardware and cites the instruction addresses it rests on. The facts come from the routine bodies in the shipped binaries and from the linked register and ioctl rows of the inventory. Meanings that come from a datasheet or a callee are marked Inferred, and open points are marked Unknown with the route that would settle them.

- `ATITVODispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446240 (n32).
  Inferred: a dispatcher that routes one request to a TV-output handler, going by the `ATITVO`
  prefix that all six callee symbols carry, with no committed callee notes linked to say more. It
  reads the pointer at +0x8 of its first argument (`lw` at 0x446244) and then the byte at +0x1 of the record it points to (`lbu` at 0x446250), then compares that byte with 0 through 5 in turn
  (the `beq` instructions at 0x44626c, 0x446278, 0x446280, 0x446288, 0x446290 and 0x446298). A
  byte of 0 calls `ProcATITVOEnableDisable` (0x4462e8), 1 calls `ProcATITVOSetStandard`
  (0x446308), 2 calls `ProcATITVOGetData` (0x446320), 3 calls `ProcATITVOAdjustPosition`
  (0x446338), 4 calls `ProcATITVOAdjustSize` (0x446350) and 5 calls `ProcATITVOAdjustColor`
  (0x4462c8). Each call passes a0 to a2 unchanged, the byte as a3, the constants 3, 4 and 5 in a4
  to a6 (set at 0x44625c, 0x446248 and 0x446254), and 1 in a7 for every handler except
  `ProcATITVOEnableDisable`. A byte outside 0 to 5 returns 1 at 0x4462a4 without a call, and a
  handler's v0 is returned as this routine's v0 (0x4462b4, 0x4462d8, 0x4462f8), with f0 also set
  on the `ProcATITVOAdjustColor` and `ProcATITVOEnableDisable` returns. The routine's own
  accesses are limited to its frame and its argument record: the saves of ra and gp at sp-0x8 and
  sp-0x10 (0x446260, 0x446268), and the callee addresses it loads from the word at 0x46710c (the
  `lw` at 0x446284, among others), so this routine itself accesses no device register. Unknown:
  the device-side accesses of the six handlers at 0x445700, 0x445840, 0x445a00, 0x445b80,
  0x445d80 and 0x446040 are not recorded here; a reviewed entry for each handler address would
  settle it. Unknown: the handling in each handler of the constants 3, 4, 5 and 1 passed in a4 to
  a7; the handler entries would settle it.
  Evidence grade: inferred.
- `AtomicUpdateLock` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a4c0 (n32).
  Sets the 0x1 bit of the word at +0x410 in the block reached through a0+0xf8 and then +0x30, and then
  polls the 0x8 bit of that word until it is set. The word is read at 0x43a4d0, OR'd with 0x1
  (immediate at 0x43a4d4) and stored back by the `sw` at 0x43a4d8, then reloaded at 0x43a4dc and tested
  against 0x8 (immediate at 0x43a4e0) by the `beq` at 0x43a4e4. Inferred: the word at +0x410 is a device
  register, since the linked mmio row for offset 0x410 lists 4-byte reads and writes at 6 sites. While
  the 0x8 bit is clear, the loop at 0x43a500 calls FGLMDelay with a0 set to 0xa (the delay slot at
  0x43a504), reloads the word at 0x43a508 and tests the bit again at 0x43a510. Inferred: FGLMDelay
  busy-waits for a count scaled by the measured CPU speed, per the committed callee note for FGLMDelay.
  Once the 0x8 bit is set, the first test returns the word with 0x1 set (`jr ra` at 0x43a4f0), and a
  return after one or more delays hands back the value FGLMDelay last returned (path from 0x43a518).
  Unknown: which field the 0x1 bit at +0x410 sets and which field the 0x8 bit tests; a datasheet field
  table for the register at +0x410 would settle it, since the linked row gives only the offset and access
  widths. Unknown: the time one count of 0xa takes on the machine; the callee note gives only the scaling,
  so a timed run of the delay would settle it.
  Evidence grade: inferred.
- `FGLRXDispatch` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42fa40 (n32).
  Inferred: a request dispatcher that routes one selector to one of eleven handlers, going by the
  `ProcFGL` prefix that all eleven callee symbols carry, with no committed callee notes linked to
  say more. It reads the pointer at +0x8 of its first argument (`lw` at 0x42fa44) and then the byte at +0x1 of the record it points to (`lbu` at 0x42fa4c), and returns 1 at once when that
  byte is 0xb or more (0x42fa6c, 0x42fa88). Below 0xb it indexes the table at 0x460d00 with the
  byte (the byte is scaled by 4 at 0x42fa64 and the `addu` at 0x42fa70 adds it to the table base, the `lw` at 0x42fa74 loads the
  word there and the `jr` at 0x42fa78 jumps through it), and each of the table's eleven targets
  is a block that calls one callee: `ProcFGLGetDriverData` (0x42faa8), `ProcFGLCheckBuffers`
  (0x42fac8), `ProcFGLGetPLLValue` (0x42fae4), `ProcFGLSetRegisterValue` (0x42fb08),
  `ProcFGLGetRegisterValue` (0x42fb24), `ProcFGLVidModeGetGammaRampSize` (0x42fb48),
  `ProcFGLVidModeGetGammaRamp` (0x42fb64), `ProcFGLVidModeSetGammaRamp` (0x42fb88),
  `ProcFGLVidModePanelSetGammaData` (0x42fba8), `ProcFGLSetDisplaySettings` (0x42fbc8) and
  `ProcFGLGetDisplaySettings` (0x42fbe4), each with a0 unchanged and a3 from the entry. The nine
  callees other than `ProcFGLVidModeSetGammaRamp` and `ProcFGLVidModePanelSetGammaData` return to
  the common exit at 0x42fa98 with their v0; those two return directly at 0x42fb98 and 0x42fbb8,
  with f0 also set. The routine's own accesses are its request record, its frame saves of gp and
  ra at sp-0x10 and sp-0x8 (0x42fa54, 0x42fa7c), the table global at 0x467144 (the `lw` at
  0x42fa5c), and the callee addresses it loads through gp from 0x467108 (the `lw` at 0x42faa0,
  among others), so it accesses no device register itself. The words of the table at 0x460d00 in index order send selector 0 to the block that calls
  `ProcFGLGetDriverData`, 1 to `ProcFGLGetDisplaySettings`, 2 to `ProcFGLSetDisplaySettings`, 3 to
  `ProcFGLVidModePanelSetGammaData`, 4 to `ProcFGLVidModeSetGammaRamp`, 5 to `ProcFGLVidModeGetGammaRamp`, 6
  to `ProcFGLVidModeGetGammaRampSize`, 7 to `ProcFGLGetRegisterValue`, 8 to `ProcFGLSetRegisterValue`, 9 to
  `ProcFGLGetPLLValue` and the last index to `ProcFGLCheckBuffers`; each table word is the address of the block's
  first instruction, which sits 8 bytes before the call listed above.
  Unknown: whether any of the eleven
  callees at 0x42eb00, 0x42f700, 0x42f600, 0x42f500, 0x42f400, 0x42f340, 0x42f280, 0x42f100,
  0x42ef00, 0x42edc0 and 0x42ecc0 reaches a device register; a reviewed entry for each of those
  eleven addresses would settle it.
  Evidence grade: inferred.
- `FrameLockSyncronize` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x421080 (n32).
  Returns at once when the word at +0x2460 of the block reached through a0+0xf8 is zero; otherwise it edits
  the words at +0x1ac and +0x50 of the sub-block at +0x30 of that block, then waits on the word at +0x1a4 of
  the sub-block for the 0x10000 bit. The 0x8 bit of the word at +0x48 of the outer block picks the +0x1ac edit:
  when it is set, the `sw` at 0x4210b0 stores the word at +0x1ac OR'd with the 0x400 bit (immediate at
  0x4210ac); when it is clear, the word is loaded at 0x421178, ANDed with -0x401 (immediate at 0x42117c),
  which clears the 0x400 bit, and stored back by the `sw` at 0x421188. The word at +0x50 is loaded at
  0x4210b4; the `sw` at 0x4210c0 writes it back with the 0x2000000 bit cleared (the AND mask is built from
  the constant at 0x4210b8), and the `sw` at 0x42116c writes it back on return with the 0x2000000 bit set
  instead. The wait has two loops: the first repeats while the five reads at 0x4210c8 through 0x421108 all have
  the 0x10000 bit set, and the second repeats while the five reads at 0x421118 through 0x421158 all have it
  clear, returning at the first read that has it set; neither loop has a bound. Inferred: the words at +0x50,
  +0x1a4 and +0x1ac are device registers, since the linked mmio rows list 0x50 (read and write, 52 sites),
  0x1a4 (read, 11 sites) and 0x1ac (read and write, 16 sites). Unknown: which field the 0x8 bit at +0x48,
  the 0x400 bit at +0x1ac, the 0x2000000 bit at +0x50 and the 0x10000 bit at +0x1a4 each stand for; a
  datasheet field table for these registers would settle it. Unknown: the device-side condition that a zero
  word at +0x2460 of the outer block stands for; the bundle has no caller, so a caller's test of that word or
  a datasheet field table would settle it.
  Evidence grade: inferred.
- `InTVFifo` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x440040 (n32).
  Loads a value into the low bits of the word at +0x848 in the block reached through a0+0xf8 and then +0x30,
  polls the 0x2000 bit of that word for at most 0x64 steps, then zeroes it and returns the word at +0x840.
  The first store, the `sw` at 0x440060, writes the old +0x848 word with its low 9 bits replaced by the low 9
  bits of the second argument (mask -0x200 at 0x44004c, mask 0x1ff at 0x440054); the `sw` at 0x44006c
  writes the same value with the 0x1000 bit added (immediate at 0x440068). The poll reads +0x848 at 0x440070
  and again at 0x440088 on each pass, tests the 0x2000 bit (immediates at 0x440074 and 0x44008c), and counts up
  from zero by one in each of the two delay slots, ending when the count reaches 0x64 (the `beq` at 0x440080
  and the `bne` at 0x440098). A set 0x2000 bit exits at the `bne` at 0x440078 or the `bne` at 0x440090, and
  every exit runs the `sw` at 0x4400a0, which stores zero to +0x848. The return at 0x4400a4 loads +0x840 in its
  delay slot (`lw` at 0x4400a8), so the word returned is read after the zeroing store. Inferred: the linked
  mmio rows for 0x840 (one 4-byte read, 1 site) and 0x848 (reads and writes, 12 sites) place these two words
  in a device register block. Unknown: which field the 0x2000 bit of +0x848 and the word at +0x840 stand for;
  a datasheet field table for these two registers would settle it.
  Evidence grade: inferred.
- `OutTVFifo` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43ffc0 (n32).
  Takes two values from its arguments, writes them to two words of the block reached through a0+0xf8 and
  then +0x30, and polls for a completion bit. The `sw` at 0x43ffd4 stores the third argument masked with 0xfffffff
  (built at 0x43ffc4 and 0x43ffcc) at +0x844. The stores to +0x848 are the second argument
  masked with 0x1ff (at 0x43ffdc, `sw` at 0x43ffe0), then the same value with the 0x4000 bit
  added (immediate at 0x43ffe8, `sw` at 0x43ffec). It then polls the 0x8000 bit of the word at +0x848 for at
  most 0x64 steps: the poll reads +0x848 at 0x43fff0 and again at 0x440008 on each pass, tests the 0x8000 bit
  (immediates at 0x43fff4 and 0x44000c), and counts up from zero in the delay slots at 0x43fffc and 0x440014,
  ending when the count reaches 0x64 (the `beq` at 0x440000 and the `bne` at 0x440018). A set 0x8000 bit exits
  at the `bne` at 0x43fff8 or at 0x440010, and every exit runs the `sw` in the return's delay slot (0x440024,
  after the `jr ra` at 0x440020), which stores zero to +0x848. The value left in v0 at the return is the
  masked third argument stored at +0x844, since nothing writes v0 afterwards. Inferred: offsets 0x844 and
  0x848 carry device-register traffic, since the linked rows list a 4-byte write at 0x844 (1 site) and reads
  and writes at 0x848 (12 sites). Unknown: the field layout of the word at +0x844 and which field the 0x8000
  bit of +0x848 tests; a datasheet field table for those registers would settle it.
  Evidence grade: inferred.
- `ProcATITVOEnableDisable` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x445700 (n32).
  Reads the pointer at +0x8 of the structure passed in a0, takes an index from +0x4 and a selector from +0x8
  of that pointer, and returns the word at +0x28 of a0 on every path. An index at or above the word at
  `screenInfo`+0x30 returns at once (`beq` at 0x44572c); otherwise the block is reached through `screenInfo`
  at index times 4 plus 0x34, then the `xf86Screens` entry whose index is the word found there, then the words
  at +0xf8 and +0x30 (loads at 0x44574c through 0x44576c). A selector of 0 or 1 rewrites the word at +0x800 of
  that block: selector 1 sets the top bit and clears the next one down (upper halfwords 0x8000 at 0x445720 and 0xbfff at
  0x445718, low halfword 0xffff at 0x445744), selector 0 clears the top bit and sets the next one down (upper
  halfwords 0x7fff at 0x445810 and 0x4000 at 0x44581c). The new word is saved in the frame (`sd` at
  0x445788 or 0x44582c), passed to ErrorF as the argument for the format text at 0x461480 along with the
  string at 0x4614a0, and then written to +0x800 (`sw` at 0x4457b0). Other selectors skip that path
  (`bltz` at 0x445734, `beq` at 0x445740), and the record that follows gets 1 at +0xc (`sw` at 0x4457c0)
  instead of 0 (`sw` at 0x4457bc, ErrorF path). The record gets a byte 1 at +0x0 (`sb` at 0x4457cc), a
  halfword from a0+0x1c at +0x2 (`lw` at 0x4457dc, `sh` at 0x4457e8), and a word 1 at +0x4 (`sw` at 0x4457d0),
  then WriteToClient is called with a0, length 0x24 and the record (`jalr` at 0x4457e4), after which the
  return reads a0+0x28 (`lw` at 0x4457f0). Inferred: the word at +0x800 is a device register, since the
  linked mmio row lists 4-byte reads and writes at 0x800 across 41 sites, and the format text
  '[%s] we do something 0x%x\n' reads as a development trace line. Unknown: the handling by WriteToClient of
  the record passed with length 0x24, and the device-side condition that selectors 0 and 1 stand for; the
  bundle has no callee note for WriteToClient and no datasheet excerpt for either.
  Evidence grade: inferred.
- `ProcFGLCheckBuffers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f700 (n32).
  Inferred: a per-screen request that turns the overlay and stereo switches on or off for one buffer
  choice, because the committed entries for `QBS_EnableOverlay` and `QBS_EnableStereo` describe those
  switches and the labels at 0x460cf0 to 0x460cc0 name four buffers.
  The index at +0x4 of the body, compared unsigned with the word at +0x30 of `screenInfo` (`bne` at
  0x42f724), sends a bad index to `ErrorF` with the text at 0x460b20 (`jalr` at 0x42f73c); a valid index
  prints the body's words at +0x8 and +0xc through the text at 0x460c88 (`jalr` at 0x42f7e4), which
  names `ulSwitchCount` and `ulReserve`.
  The record reached from `xf86Screens` gives a private pointer at +0xf8 and then the word at +0x30 of
  that pointer (`lw` at 0x42f7b4 and 0x42f7bc), and `xf86GetEntityPrivate` is called with
  `gR200EntityIndex` as its second argument (`jalr` at 0x42f794).
  The low two bits of the body's word at +0x8 (mask 3 at 0x42f7f0) pick the path: 0 goes to the path at
  0x42f850, and 1, 2 and 3 are compared at 0x42f7fc, 0x42f804 and 0x42f80c; the compare with 4 at 0x42f814
  cannot match a two-bit value.
  Each path computes one value for the register stored at +0x224 of the pointer at +0x30: the low 32 bits of
  a doubleword of the private pointer minus the doubleword at +0xb0 of the word read through the entity
  private pointer. The doubleword is the one at +0x1b88 for selectors 0 and 1, +0x1ca8 for selector 2 and
  +0x1bb8 for selector 3. The `sw` at 0x42f834 stores that value, or zero on the selector 3 path that skips the
  calls, in the delay slot of the `WriteToClient` call with length 0x20 (`jalr` at 0x42f830).
  On selector 0, the word at +0x23f8 of the private pointer is tested (`lw` at 0x42f858); when it is
  nonzero, `QBS_EnableOverlay` and `QBS_EnableStereo` are called with the screen record and a1 set to 1
  (`jalr` at 0x42f880 and 0x42f890). Selectors 1 and 2 always call both with a1 set to 0 (`jalr` at
  0x42f920, 0x42f930, 0x42f970 and 0x42f980). Selector 3 tests bit 1 of the word at +0x1b2c of the private
  pointer (mask 2 at 0x42f8c8): when it is clear, the path at 0x42f9a0 calls both with a1 set to 0; when it
  is set, the routine stores zero and skips the calls and the label.
  The paths that make the calls print one buffer label through `ErrorF`: 0x460cf0 ('0: front left') for
  selectors 0 and 1 (`jalr` at 0x42f8a4 and 0x42f940), 0x460ce0 for selector 2 (0x42f990) and 0x460cd0
  for selector 3 (0x42f9e0). Every path returns the word at +0x28 of the context.
  Unknown: whether the word stored at +0x224 of the pointer at +0x30 of the +0xf8 record (`sw` at
  0x42f834) is the register that the committed entry for `QBS_EnableStereo` writes at 0x228, since the
  linked row lists offset 0x224 with four-byte reads and writes at six sites and names no window or
  register.
  Evidence grade: inferred.
- `ProcFGLGetDriverData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42eb00 (n32).
  Inferred: a client request that replies with a 0x38-byte block of header bytes and fields copied from
  one screen's private record and from the entity-private object for that screen, because the reply
  length is 0x38 and the error text names the extension and a wrong screen number.
  An index at +0x4 of the body that is at or above the word at +0x30 of `screenInfo` (`beq` at
  0x42eb28) calls `ErrorF` with the text at 0x460b20 (`jalr` at 0x42ec94) and returns the word at +0x28
  of the context.
  A valid index reaches the screen record through `xf86Screens`, takes its private pointer at +0xf8
  (`lw` at 0x42eb50), and follows the word at +0x30 of that pointer (`lw` at 0x42eb54) and then its
  word at +0xf8 (`lw` at 0x42eba8).
  The reply starts with fixed bytes 1, 3, 4 and 1 at +0x0, +0x8, +0x9 and +0xa, the word 6 at +0x4 (`sw`
  at 0x42eb64) and the halfword from +0x1c of the context at +0x2 (`sh` at 0x42eb80), and then copies
  bytes at the private pointer's +0x1fd0 to +0x1fd2, three halfwords (`sh` at 0x42eb9c, 0x42eba4 and
  0x42ebb0) taken from the word at +0x10 of the pointer at its +0x4, from its +0xc word, and from the top
  half of the word at +0xf8 of the +0x30 pointer (shift at 0x42ebac), and words at +0x1a18, +0x1a1c, +0x1a20,
  +0x1fd4, +0x1fd8, +0x1e8c and +0x1e90 (`sw` from 0x42ec08 to 0x42ec68); the routine returns the word at +0x28
  of the context after the reply.
  Every valid path calls `xf86GetEntityPrivate` with `gR200EntityIndex` as its second argument and with
  the word loaded through the record's +0xdc word as its first (`lw` at 0x42ec2c and the delay-slot
  `lw` at 0x42ec38), then stores a byte taken through the returned pointer at +0xd of the reply
  (`lw` at 0x42ec3c and 0x42ec44, `sb` at 0x42ec48).
  The low three bits of the word at +0x1a20 (immediate 0x7 at 0x42ebc0) are stored as the byte at +0x17 of the reply
  by the `sb` at 0x42ebc8. The `sb` at 0x42ebf8 overwrites the byte at +0x17 with the three-bit value shifted left by 2 (`sll` at 0x42ebdc), but only when the 4-bit field starting at bit 20 of the word at +0x1a18 is 3 or more (shift 0x14 at 0x42ebd0, mask 0xf at 0x42ebd8) and bit 3 of the word at +0x1a1c is set (shift 3 at 0x42ebe4, mask 1 at 0x42ebec); the word at +0x1a18 is reloaded at 0x42ebfc on that path.
  Unknown: whether the linked row for offset 0xf8 (a four-byte read at two sites, with no window or
  name) is the same field as the word at +0xf8 of the screen record that the `lw` at 0x42eb50 follows,
  since the row names no window and the bundle does not tie the two together.
  Evidence grade: inferred.
- `ProcFGLGetRegisterValue` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f400 (n32).
  Inferred: a client request that replies with one 32-bit word read at a client-chosen offset from the block
  at the end of a screen record's pointer chain, because the reply is a 0x20-byte block sent by `WriteToClient`
  and the error text names the extension and a wrong screen number.
  The screen index is the word at +0x4 of the request body, reached through the body pointer at +0x8
  of the context (`lw` at 0x42f410 after `lw` at 0x42f408), and it is compared unsigned with the word
  at +0x30 of `screenInfo` (`bne` at 0x42f420); an index at or above that bound calls `ErrorF` with the
  text at 0x460b20 (`jalr` at 0x42f438) and returns the word at +0x28 of the context.
  On the valid path, the word at +0x34 of the `screenInfo` slot for that index is a pointer, the word it
  points to indexes the array that `xf86Screens` points to (`lw` at 0x42f464, 0x42f468, 0x42f474), and
  that entry's word at +0xf8 is followed to its word at +0x30 (`lw` at 0x42f478 and 0x42f47c).
  The body's word at +0x8 is ANDed with -4 (constant at 0x42f498) and added to that
  block pointer, and the word at the sum is loaded (`lw` at 0x42f4ac) and goes to the reply at +0x8 (`sw` at
  0x42f4b8, in the delay slot of the `jalr` at 0x42f4b4). The reply also has a byte 1 at +0x0 (`sb` at 0x42f484),
  the halfword from +0x1c of the context at +0x2 (`sh` at 0x42f490) and a zero word at +0x4 (`sw` at
  0x42f488), and `WriteToClient` gets length 0x20.
  Unknown: whether the block at the end of the chain is device register space, since no linked register row,
  datasheet excerpt or callee note covers the word at +0x30 of the record at +0xf8; a linked row or a
  callee note for that record's layout would settle it.
  Evidence grade: inferred.
- `ProcFGLSetRegisterValue` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f500 (n32).
  Inferred: a client request that writes one word from its body at a client-chosen offset into the block at
  the end of a screen record's pointer chain and then acknowledges with a 0x20-byte reply, because the
  written value comes from the body at +0xc and the error text names the extension and a wrong screen number.
  The body's index at +0x4 (through the body pointer at +0x8) is checked unsigned against the word at
  +0x30 of `screenInfo` (`bne` at 0x42f520); a bad index calls `ErrorF` with the text at 0x460b20
  (`jalr` at 0x42f538).
  A good index follows the same table to the record at +0xf8 and then to the word at +0x30 of that
  record. The body's word at +0x8 is ANDed with -4 (constant at 0x42f5a0) and added to that
  pointer, and the `sw` at 0x42f5bc, in the delay slot of the `jalr` at 0x42f5b8,
  stores the body's word at +0xc (`lw` at 0x42f5ac) at the sum, so the write happens as the reply call
  is made.
  The reply has a byte 1 at +0x0 (`sb` at 0x42f584), the halfword from +0x1c of the context at +0x2
  (`sh` at 0x42f594) and the word 6 at +0x4 (`sw` at 0x42f58c), and `WriteToClient` receives length 0x20.
  Both paths return the word at +0x28 of the context.
  Unknown: which device register, if any, the store at 0x42f5bc writes, because its pointer is the word
  at +0x30 of the +0xf8 record plus the client's offset and the bundle gives no linked row, datasheet excerpt
  or callee note for either.
  Evidence grade: inferred.
- `R200Blank` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410ec0 (n32).
  Inferred: the blank-control step for one display device, because its exits tail-jump to `is1Unblank`
  with the word at +0xc of the first argument as that callee's first argument and 0 as its second, and the
  register edits before the jump depend on mode words in the device record.
  The device record is the pointer at +0xf8 of the first argument (`lw` at 0x410ed0); the pointer at +0x30
  of that record is saved in the frame as the base for the later stores (`lw` at 0x410edc, `sd` at 0x410ee8). The `bgezall` at 0x410ee4 tests the zero register, so it always calls the unnamed routine at
  0x40f740 with the device record as its argument. The byte at +0x5a is then read (`lbu` at 0x410eec), and the word at +0x4c (`lw` at 0x410f00).
  With the byte at +0x5a nonzero, the word at +0x4c picks one edit: 4 or 5 clears bit 0 of the word at +0x88c
  (mask -0x2 at 0x411010, `sw` at 0x41101c); 1 or 3 sets the 0x800000 bit of the word at +0x3f8 (`lui` at
  0x410fd4, `sw` at 0x410fe0); any other value makes no edit. Each of these reaches the tail jump.
  With the byte at +0x5a zero, the word at +0x4c is compared with 4, 5, 2, 1 and 3 (`beq` at 0x410f48 through
  0x410f68): 4 or 5 clears bit 0 of the word at +0x88c (`sw` at 0x411064); 2 sets bit 1 of the word at +0x2d0
  (`sw` at 0x41103c) and then, like 1 and 3, sets the 0x400 bit of the word at +0x54 (`sw` at 0x41104c). All
  of these then reach 0x410f70, as does any other value. There the byte at +0x5d is read (`lbu` at 0x410f70) and the word at +0x60 (`lw` at 0x410f7c); a zero byte goes straight to the tail jump, otherwise the word at
  +0x60 chooses 4 or 5 (clear bit 0 of +0x88c, `sw` at 0x41107c), 1 or 3 (set the 0x800000 bit of +0x3f8, `sw`
  at 0x410fbc) or no edit (`beq` at 0x410f88 through 0x410fa0).
  Every path ends by tail-jumping to `is1Unblank` with a0 loaded from the word at +0xc of the first argument and
  a1 set to 0 (`jr` at 0x410f40, 0x410fec and 0x411028).
  Inferred: the words at +0x54, +0x2d0, +0x3f8 and +0x88c are device registers, since the linked rows give
  four-byte reads and writes at 29, 25, 102 and 51 sites.
  Unknown: which field each edited bit stands for, and the handling by `is1Unblank` of the zero it receives; no
  linked row names a window or register and no committed entry covers the unnamed routine at 0x40f740 or
  `is1Unblank`.
  Evidence grade: inferred.
- `R200CloseScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4231c0 (n32).
  Inferred: it tears down one R200 screen's records, since the committed notes say
  `R200DRICloseScreen` is the direct-rendering screen-close hook and `R200SGIVCDetach` detaches
  compositor support from a screen. After it loads the screen record from the `xf86Screens` entry
  at the index in a0 (0x4231e4, 0x4231f8) and takes the driver record from its +0xf8 word
  (0x42320c), it calls `R200SGIVCDetach` with the second argument (0x423208), calls
  `QBS_EnableOverlay` with 0 and `QBS_EnableStereo` with 1 on the screen record when the driver
  record's +0x23f8 word is nonzero (0x42322c, 0x42323c), calls `R200UnmapFB` on the screen record
  (0x42324c), and calls `R200DRICloseScreen` with the second argument (0x423260) when the driver
  record's +0x19a4 word is nonzero, zeroing that word afterwards (0x423268). When the byte at
  +0x5a of the driver record is zero and the screen's +0x10c word is nonzero and its +0x48 word
  is 0x20, it calls `Xfree` (0x423424) on the driver record's +0x2084 word if that word is
  nonzero, with the +0x10c word, the +0x48 word and 0x20 as the other arguments, and zeroes
  +0x2084 (0x423430); it calls `R200RestoreConsoleModeRegs` on the screen record when the
  screen's +0x368 word is nonzero (0x423288), and `R200UnmapMMIO` on the screen record when the
  driver record's +0x30 word is nonzero (0x423378). It destroys four records in turn, each only
  when its word is nonzero, and zeroes each word afterwards: `XAADestroyInfoRec` on the +0x18f4
  word (0x4232a8), `Xfree` on +0x192c (0x4232c0), `xf86DestroyCursorInfoRec` on +0x18fc
  (0x4232d8) and `Xfree` on +0x194c (0x4232f0), with the zeroing at 0x4232b8, 0x4232d0, 0x4232e8
  and 0x423300. When the driver record's +0x68 word is nonzero and `xf86ServerIsExiting` returns
  nonzero (0x42338c, 0x423394), it calls `xf86DeleteMode` on that word in a loop until the word
  is zero (0x4233b0, 0x4233bc); it then zeroes the screen's +0x368 word (0x42330c), calls
  `xf86ClearPrimInitDone` on the first word of the pointer stored at the screen's +0xdc
  (0x423310), stores the driver record's +0x18e8 word into +0x158 of the second argument
  (0x42331c), stores the +0x18e4 word into +0x80 of the second argument (0x423330), calls through
  the +0x18e4 pointer with the screen index (0x42332c), and calls `StopFrameLock` on the screen
  record (0x423350) only when the +0x2458 and +0x2460 words are both nonzero. Unknown: the value
  left in v0 at the return at 0x423370, which is whatever the last call on the path left, since
  `StopFrameLock`, `xf86ServerIsExiting` and the callee at the +0x18e4 pointer have no committed
  entries linked; those entries would settle it. Unknown: whether `R200UnmapFB`,
  `R200RestoreConsoleModeRegs`, `XAADestroyInfoRec`, `xf86DestroyCursorInfoRec`,
  `xf86ClearPrimInitDone` and `xf86DeleteMode` touch device registers; committed notes for those
  six routines would settle it. Unknown: whether the second argument is the screen number that
  `R200DRICloseScreen` takes, as its committed note describes, or the server screen pointer that
  `R200SGIVCDetach` takes, since this routine passes the same second argument to both.
  Evidence grade: inferred.
- `R200CrtIsPhysicallyConnected` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x411740 (n32).
  Acts on the device block at +0xf8 of arg0 and the mmio block at its +0x30 pointer, reading the word
  at +0xa0 of the device block and choosing from it which PLL reads and register writes run.
  With arg1 zero, a word at +0xa0 equal to 0x8 returns 0 at 0x411bfc (the `beq` at 0x4118e4). Any
  other value calls `R200INPLL` with 0x2d (the `jalr` at 0x4118ec) and then loops on a byte write of 0xad (the `sb`
  at 0x411930) and a reread (the `bne` at 0x411954).
  With arg1 nonzero, it reads PLL register 0x8 twice through `R200INPLL` (the `jalr` at 0x41176c and
  0x411784), then writes 0x88 to the byte at +0xb of the mmio block (the `sb` at 0x4117ac) and rereads the word at +0x8 (the `lw`
  at 0x4117b0) until its value masked with 0xbf (immediates at 0x4117b4 and 0x4117c8) equals 0x88 (the `bne` at
  0x4117cc).
  Inferred: the byte at +0xb and the word at +0x8 are the index byte and its word for each PLL access,
  because the callee note for `R200INPLL` puts its index into the last byte of the word at +0x8 and
  returns the word at +0xc, and the linked mmio rows give offsets 0x8, 0xb and 0xc.
  The routine stores 0x880213 and 0x880203 into the word at +0x88c (the `sw` at 0x411a00 and 0x411a60,
  with 0x411ad8 storing 0x880213 again), and it calls `xf86usleep` with 0xc350 (the `jalr` at 0x4119fc),
  0x3e8 (the `jalr` at 0x411850 and 0x411a40), and 0x1388 (the `jalr` at 0x411ad4).
  A loop branches on bit 0x20 of the word at +0x88c at each of several reads (the `beq` and `bne` tests
  at 0x411a6c through 0x411abc), sleeps 0x1388 (0x411ad4) and then tests s4, and repeats while s3
  differs from 0x4 (the `bne` at 0x411af8).
  Unknown: the device-side result for each of the word values 0x2f, 0x31, 0x2c, 0x34 and 0x2d at +0xa0,
  since the bundle shows only the branches that send them to the blocks at 0x411ba4, 0x411bc0 and
  0x411bc8; a datasheet table of those values would settle it.
  The loop counter s3 starts at zero (0x411a50) and gains 1 per pass (the immediate 0x1 at 0x411ae4). The
  routine returns 1 when bit 0x20 of the last word it read from +0x88c was set and 0 otherwise (the `sltu`
  just before the return at 0x411b9c), apart from the early return of 0 at 0x411bfc.
  Evidence grade: inferred.
- `R200DisplayDDCConnected` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x411300 (n32).
  Acts on the device block at +0xf8 of arg0, with the mmio block at its +0x30 pointer, and on the
  record at arg2 that receives a result word; arg1 selects a register offset, the routine polls that
  register, and on one path it calls `xf86DoEDID_DDC2`.
  For arg1 1, 2, 3 and 4 it writes 0x68, 0x64, 0x60 and 0x6c to the word at +0x1a0 of the block (the
  `sw` at 0x4116cc, 0x4116d8, 0x4116e4 and 0x411414); for any other arg1 it writes back the word it
  read there (the `sw` at 0x411370) and returns 0 at 0x411380.
  The offset word at +0x1a0 is added to the base at +0x30 for the polls: a first loop of up to five
  passes reads that register, tests bit 0x200 (the `bne` at 0x4114d0), and sleeps 0x3a98 each pass
  (the `jalr` at 0x4114b4); a second loop of up to 0xa passes makes the same test (the `bne` at 0x41161c
  and 0x411624) with a sleep at 0x411600.
  On the paths that reach 0x41150c, the stores at 0x411534, 0x411558, 0x4115b4 and 0x4115d8 OR bit
  0x10000 or 0x20000 into that register, and the first, second and fourth sit in the delay slots of
  the sleep calls at 0x411530, 0x411554 and 0x4115d4; the stores at 0x411674 and 0x41168c do the same
  after the second loop.
  The call at 0x411590 to `xf86DoEDID_DDC2` takes the word at +0xc of arg0's sub-record as its first
  argument (the `lw` in its delay slot at 0x411594), the word at +0x19c of the block as its second (the
  `lw` at 0x41158c), and the `sw` at 0x41159c stores its return to the word at arg2+0.
  Inferred: the routine reports a DDC detection, because the format string at 0x45cf38 reads 'DDC
  detected on DDCType %d with Monitor Type %d' and the call to `xf86DrvMsg` at 0x4113e4 passes it with
  a3 set to arg1 and a4 to that monitor type.
  The stores that precede the polls clear bits: the `sw` at 0x411438 writes the register at the offset just
  written to +0x1a0 with its low two bits cleared (mask -0x4 at 0x411430); the `sw` at 0x411460 clears the
  0x20000 bit and the `sw` at 0x411488 clears the 0x10000 bit of the register at the +0x1a0 offset, the
  latter in the delay slot of a sleep call with 0x32c8; the `sw` at 0x4114a8 clears the 0x20000 bit again.
  The return value is chosen from the record at arg2+0 (`lw` at 0x411388): 0 when that pointer is zero
  (0x4116ec), 1 when bit 0x80 of the byte at +0x14 of the record at +0x230 behind it is clear (0x4116f4), and
  otherwise 3, or 2 when bit 0 of the mmio word at +0x2d0 is set and arg1 is 2 (`beq` at 0x4113b8). That
  value is passed to `xf86DrvMsg` as the monitor type to the call at 0x4113e4 and returned in v0.
  Unknown: which signal each cleared or set bit of the polled register stands for; no linked row or datasheet
  excerpt names the register, so a register map for the device block would settle it.
  Evidence grade: inferred.
- `R200EnableDisplay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41dec0 (n32).
  Rewrites bit masks in register words of the device block at +0xf8 of arg0 and of its mmio block at
  +0x30, choosing the words and masks from the selector word at +0x10 of the sub-record at +0xc of
  arg1 and from the flag in a2.
  Every return stores a2 to the word at +0x4 of arg1 (the `sw` in each return's delay slot, such as
  0x41df04 and 0x41e0fc), so the arg1 record keeps the flag whichever case runs.
  With a2 nonzero and the selector equal to 1, the word at +0x4 of the sub-record decides the case:
  zero ORs 0x8000 into the mmio word at +0x54 and the block word at +0xd9c (the stores at 0x41e108
  and 0x41e114), and one, with the block word at +0xa0 equal to 0x8, ORs 0x80 into the mmio word at
  +0x3f8 and the block word at +0xdcc (the stores at 0x41e128 and 0x41e134).
  Selector 1 with the +0x4 word equal to one and the +0xa0 word not 0x8 ORs 0x2000004 into the mmio
  word at +0x288 and the block word at +0xe14 (the stores at 0x41df90 and 0x41df9c), and selector 3
  with the word at +0x8 equal to one ORs the same value into the same two words (0x41dfcc and
  0x41dfd8).
  With a2 nonzero, selector 3 and the word at +0x8 equal to zero ORs 0x5 into the mmio word at +0x284
  and the block word at +0xe10 (the stores at 0x41e148 and 0x41e154) and returns 0x2 at 0x41e158.
  With a2 nonzero and selector 4 or 5, the block word at +0xe48 gets 0x3 ORed in (the `sw` at
  0x41dfec) and the routine returns 0x2 at 0x41dff0.
  With a2 nonzero and selector 2, the mmio word at +0x2d0 and the block word at +0xe34 get 0x80001 ORed in and
  bit 1 cleared (the stores at 0x41e0e4 and 0x41e0f4, using the mask built at 0x41e0d4 and the constant -0x3
  at 0x41e0d8). Selector 3 with the word at +0x8 neither 0 nor 1, and selector 1 with the word at +0x4 neither
  0 nor 1, make no edit.
  With a2 zero the routine undoes these edits and checks the selector word in turn against 1 (or 0), 3 (or 0)
  and 2 (or 0) and then against 5 and 4, reloading the selector after each edit (the reloads at 0x41e040,
  0x41e080 and 0x41e0c0). Selector 0 or 1 with the word at +0x4 zero clears the 0x8000 bit in the mmio word at
  +0x54 and the block word at +0xd9c (the stores at 0x41e170 and 0x41e17c); with it equal to 1, a block word at
  +0xa0 equal to 0x8 clears the 0x2000004 bits in +0x288 and +0xe14 (0x41e1b4), and any other value clears bit
  0x80 in the mmio word at +0x3f8 and the block word at +0xdcc (the stores at 0x41e030 and 0x41e03c).
  Selector 3 (or 0) with the word at +0x8 zero clears the 0x5 bits in +0x284 and +0xe10 (mask -0x6 at
  0x41e190), and with it equal to 1 clears the 0x2000004 bits in +0x288 and +0xe14. Selector 2 (or 0, when
  the sub-record word at +0xc is 1) sets 0x3 and clears the 0x80000 bit in +0x2d0 and +0xe34 (the stores at
  0x41e0ac and 0x41e0bc). Selector 4 or 5 clears the low two bits of the block word at +0xe48 (mask -0x4 at
  0x41df4c, `sw` at 0x41df54).
  Unknown: which display output each selector value names, and which registers the mmio words at
  +0x54, +0x284, +0x288, +0x2d0 and +0x3f8 and the block words at +0xd9c, +0xdcc, +0xe10, +0xe14, +0xe34 and
  +0xe48 are; the linked mmio rows give those offsets without register names and no datasheet excerpt
  covers them, so a register map for the block would settle it.
  Evidence grade: established.
- `R200EnterVTFBDev` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x423080 (n32).
  Inferred: a per-screen restore step that calls `fbdevHWEnterVT` first, then reprograms the
  palette and the 2D engine default state, the engine part going by the committed note for
  `R200EngineRestore`. It loads the screen record from the `xf86Screens` entry at the index in a0
  (the `lw` at 0x42309c and the `lw` at 0x4230b0), and takes the driver record from the word at
  +0xf8 of that screen record (0x4230bc). It calls `fbdevHWEnterVT` (0x4230b8) with its four
  argument registers unchanged, then calls `R200RestorePalette` (0x4230cc) with the screen record
  and the address of the driver record's +0x1bc word. It then reads the word at +0x18f8 of the
  driver record (0x4230d4) and, when that word is nonzero, calls `R200EngineRestore` with the
  screen record (0x4230e0); otherwise it skips the call, and it returns 1 at 0x4230fc either way.
  Inferred: the committed note for `R200EngineRestore` says it programs the 2D engine's default
  state, starting with register 0x3428 (`RB2D_DSTCACHE_MODE`), so the call at 0x4230e0 reprograms
  that state. Unknown: the register writes made by `fbdevHWEnterVT` at 0x4230b8 and by
  `R200RestorePalette` at 0x4230cc, which the committed notes do not cover; a note for each of
  those two routines would settle it. Unknown: what the word at +0x18f8 of the driver record
  holds beyond its nonzero test here, since no field table is linked; the code that stores that
  word would settle it.
  Evidence grade: inferred.
- `R200HideCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40e200 (n32).
  Updates register words of the device block reached from arg0, after first calling
  `xf86EnableAccess` with the same four arguments.
  It loads the block pointer at +0xf8 of arg0 (the `lw` at 0x40e220), the pointer at +0x30 of that
  block (the `lw` at 0x40e22c), and the byte at +0x5a of the block (the `lbu` at 0x40e230).
  A nonzero byte at +0x5a reads the word at +0x3f8 of the +0x30 pointer, clears one bit of it with a mask
  built from the immediates 0xfffe at 0x40e238 and 0xffff at 0x40e244 (bit 16 only), and stores it back (the
  `lw` at 0x40e248 and the `sw` at 0x40e250); a zero byte does the same with the word at +0x50 (the `lw` at
  0x40e29c and the `sw` at 0x40e2a8).
  Both paths then test the byte at +0x5d (the `lbu` at 0x40e254 and the `beq` at 0x40e258): a nonzero
  byte repeats the +0x3f8 read, bit clear and store (0x40e260 and 0x40e268), and both exits store zero to the
  word at +0x1908 of the block (the `sw` at 0x40e26c and 0x40e288).
  Both returns pass back the value that the call returned (the `jr ra` at 0x40e278 and 0x40e294).
  Unknown: the device-side result of the call to `xf86EnableAccess` at 0x40e228, for which the bundle
  has no callee note; a committed entry for that routine would settle it.
  Unknown: which field the bytes at +0x5a and +0x5d select, and which registers the words at +0x50 and
  +0x3f8 are; the linked mmio rows give offsets 0x50 and 0x3f8 with 4-byte reads and writes and no
  register name, so a register map for the device block would settle it.
  Evidence grade: established.
- `R200I2CGetBits` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4158c0 (n32).
  Samples one device word and hands back two of its bits as 0 or 1 through the pointers in a1 and a2 of
  the caller.
  The screen record is picked by indexing the array that `xf86Screens` points to with the word at
  +0x4 of a0, four bytes per entry, and the device block is the word at +0xf8 of that record (the
  `lw` at 0x4158e0 and 0x4158e4).
  Two more loads read the words at +0x30 and +0x1a0 of that block (the `lw` at 0x4158e8 and
  0x4158ec), and the `lw` at 0x4158f4 reads the word at the sum of those two values.
  Inferred: the word at +0x1a0 is a register offset, because the load at 0x4158f4 adds it to the
  word at +0x30 to form the address it reads.
  The word read is masked with 0x200 and, separately, with 0x100 (immediates at 0x4158f8 and 0x4158fc); each
  masked result is turned into 1 when nonzero and 0 otherwise. The `sw` at 0x415904 stores the 0x200 result
  to a1+0, and the `sw` at 0x415910, in the delay slot of the return at 0x41590c, stores the 0x100 result to
  a2+0, which also leaves it in v0. The routine has no calls and no branches.
  Unknown: which device register the sum at 0x4158f4 addresses and which signals bits 0x200 and 0x100 carry,
  since no linked row or datasheet excerpt covers offset 0x1a0 or the word at +0x30; a register map for the
  device block would settle it.
  Evidence grade: inferred.
- `R200I2CPutBits` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415940 (n32).
  Rewrites two bits of one 32-bit word, each set when its argument is zero, that the first argument leads to: the word at +0x4 of that
  argument, shifted left by 0x2, indexes the table `xf86Screens` (the `lw` at 0x415960), the pointer
  at +0xf8 of the selected entry is loaded (0x415964), and the target address is the sum of the words
  at +0x1a0 and +0x30 of that pointer's record (0x415968, 0x41596c, 0x415978).
  The target word is loaded at 0x415978, then the `and` at 0x415988 clears bits 0x10000 and 0x20000
  of it (the mask is built at 0x415974 and 0x415980).
  The second argument sets bit 0x20000: when it is zero, the `beq` at 0x415984 jumps to 0x4159a0, and the
  0x20000 loaded into a3 at 0x41597c is ORed in at 0x415994; when it is non-zero, the routine clears a3 at
  0x41598c and the OR adds nothing. The third argument sets bit 0x10000 the same way: when it is non-zero
  (the `beq` at 0x415990 falls through), the word is stored as it stands at 0x41599c; when it is zero, the
  branch goes to 0x4159a8, which ORs 0x10000 (the `lui` at 0x4159a8) into the word, and that sum is stored to
  the same address by the `sw` at 0x4159b4.
  The routine makes no call, and each return (`jr ra` at 0x415998 and 0x4159b0) has one of those
  two stores in its delay slot.
  Unknown: the device register that holds the target word, and the field that bits 0x10000 and
  0x20000 select in it; the bundle has no linked row or datasheet excerpt for that word, so a field
  table for the register at the computed address would settle it.
  Unknown: the value in v0 at the returns at 0x415998 and 0x4159b0, which the bundle prints as `?`;
  a trace of v0 on those two paths would settle it.
  Evidence grade: established.
- `R200LeaveVTFBDev` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x423140 (n32).
  Inferred: it is the adapter-side step for giving up the display, because it calls `R200SavePalette`
  on the screen record and then hands its entry arguments to the framebuffer leave call
  `fbdevHWLeaveVT`, and those two calls are the only calls in the body.
  It reads the screen record pointer from `xf86Screens` at the index in a0 (`lw` at 0x423158 and
  0x423168), then reads the driver block pointer from that record at +0xf8 (`lw` at 0x423174).
  It calls `R200SavePalette` through `bgezall` at 0x423188 with the screen record as a0 and the driver
  block pointer plus 0x1bc as a1, the addition sitting in the delay slot at 0x42318c.
  It then calls `fbdevHWLeaveVT` through the GOT at 0x423198 with the entry a0 and a1, and returns that
  call's result in v0 at 0x4231ac.
  Unknown: the register writes made by the routine at 0x41d6c0 (`R200SavePalette`) to the screen record
  and to the block at +0x1bc, which that routine's own entry would settle.
  Unknown: the device-side work of `fbdevHWLeaveVT`, which a note for that routine would settle.
  Evidence grade: inferred.
- `R200LoadCursorImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40dc00 (n32).
  Copies bytes from the buffer that the second argument points to into a destination at the sum of
  the words at +0x34 and +0x1900 of the record at +0xf8 of the first argument, after calling
  `xf86EnableAccess` with the four arguments passed through (`jalr` at 0x40dc40).
  The word at +0x1fe0 of that record decides whether a guard runs: when it is non-zero (the `beq` at
  0x40dc50 falls through), bit 0x100 is ORed into the word at +0xb00 of the block at +0x30 (`sw` at
  0x40dc60), and the word at +0x1fe4 is stored back with one bit cleared (mask -0x4001 at 0x40dc54, `sw` at
  0x40dc6c). The byte at +0x5a then picks a register word: when it is non-zero the word at +0x3f8 is saved and
  stored back with one bit cleared (mask built from 0xfffe at 0x40dc74 and 0xffff at 0x40dc7c, `sw`
  at 0x40dc88); when it is zero the same is done to the word at +0x50 (`sw` at 0x40dff0), with the saved
  value of +0x3f8 taken as zero.
  The word at +0x1994 of that record then picks the copy: 0x3 and 0x4 (`beq` at 0x40dcc0 and 0x40dcc8)
  go to the copy at 0x40dd5c, 0x2 (`beq` at 0x40dcd0) goes to the copy at 0x40e018, and any other value
  runs a word loop at 0x40dce8 that ends when its pointer reaches the second argument plus 0x3f0
  (`bne` at 0x40dd34).
  The 0x3 and 0x4 copy moves the source byte at +0x0 to destination +0x3 (`lbu` at 0x40ddc4, `sb` at
  0x40ddc8) and the source byte at +0xf to destination +0xc (`lbu` at 0x40dd5c, `sb` at 0x40dd60), so
  bytes move within each group of four.
  The 0x2 copy uses another order: the source byte at +0x1 goes to destination +0x0 (`lbu` at 0x40e098,
  `sb` at 0x40e0a4), and the source byte at +0x3 goes to destination +0x2 (`lbu` at 0x40e078, `sb` at
  0x40e07c).
  All modes then store -1 at destination +0x400 (`sw` at 0x40df04) and run a loop that writes -1 and 0
  words, advancing 0x20 per pass, until the pointer reaches the destination plus 0x3e0 (`bne` at
  0x40df30).
  After the copy the saved word is stored back unchanged. The `sw` at 0x40df60 stores it to +0x3f8 when the byte at +0x5a is non-zero. The `sw` at 0x40df78 stores it to +0x3f8 again when the byte at +0x5d is non-zero. The `sw` at 0x40e000 stores it to +0x50 otherwise. When the word at +0x1fe0 is non-zero, the 0x100 bit of the word at +0xb00 is cleared again (mask
  -0x101 at 0x40df6c, `sw` at 0x40df94) and the 0x4000 bit of the word at +0x1fe4 is set (`sw` at 0x40dfa4).
  The routine returns the byte at +0x5d of the record (`jr ra` at 0x40dfac and 0x40dfd8).
  Unknown: the field that the mode word at +0x1994 selects, the field of the bit it clears in +0x3f8 and +0x50 and the
  register that the destination sum addresses; the bundle has no field table or linked row for either, so a datasheet field table for
  the record would settle the first.
  Evidence grade: established.
- `R200ModeInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x422040 (n32).
  Inferred: it is the per-screen mode-set step of the adapter driver, acting on the screen record and
  its driver block, because it runs init, blank, restore-mode, unblank, frame-lock and DAC-sync calls
  on that record in that order.
  It loads the driver block pointer from the screen record at +0xf8 (`lw` at 0x422054) and calls
  `R200Init` through `bgezall` at 0x422068 with the entry a0, a1 and a3 and the driver block pointer
  plus 0xd50 as a2; if `R200Init` returns 0, the routine returns 0 at 0x422110 (`beq` at 0x422070).
  Otherwise it writes 1 to the screen record at +0x368 (`sw` at 0x422080), then calls `R200Blank`
  (`jalr` at 0x422084), `R200RestoreMode` (`bgezall` at 0x422098) and `R200Unblank` (`jalr` at
  0x4220a8), each with the screen record as a0.
  It then reads the word at +0x1e8c of the driver block (`lw` at 0x4220b0); when that word is 2 or
  more, unsigned, the branch at 0x4220b8 goes to the `firegl_SyncDacs` path at 0x422118, and below 2 it
  goes to the check at 0x4220c0.
  The check at 0x4220c0 reads the words at +0x2458 and +0x2460 (`lw` at 0x4220c0 and 0x4220d0) and
  calls `FrameLockSyncronize` through `bgezall` at 0x4220e0 only when both are nonzero (branches at
  0x4220c8 and 0x4220d4); the `sw` in the delay slot at 0x4220cc stores the entry a1 at +0x1998 each
  time the check is reached.
  The `firegl_SyncDacs` path loads the word at +0x19ac of the driver block as its argument (`lw` at
  0x422120); a zero return goes back to the check at 0x4220c0 (branch at 0x422124), and a nonzero
  return ends the routine with 0 at 0x422138.
  Inferred: the committed note for `firegl_SyncDacs` gives its ioctl request as 0x20006461 with no
  payload and a return of 0 on success or the negated errno on failure, so the zero test at 0x422124
  tests that ioctl's result.
  Unknown: the device-side work of `R200Init`, `R200Blank`, `R200RestoreMode`, `R200Unblank` and
  `FrameLockSyncronize`, and the field that each driver-block word at +0x1e8c, +0x1998, +0x2458,
  +0x2460 and +0x19ac holds, which notes for each callee and a layout of the driver block would settle.
  Evidence grade: inferred.
- `R200PLL2WriteUpdate` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c4c0 (n32).
  Inferred: this routine writes one PLL register through the index and data pair that the callee note
  for `R200INPLL` describes, which places the index byte at +0xb of the word at +0x8 and the returned
  word at +0xc.
  It loads the window pointer from +0xf8 of the first argument's record and then from +0x30 of that
  record (`lw` at 0x41c4d4 and 0x41c4ec), then calls `R200INPLL` three times with 0x2b as the second
  argument (calls at 0x41c4e8, 0x41c504 and 0x41c520); the first call also receives the third and
  fourth arguments as they came in.
  A bit-0x8000 test after each call decides whether the call repeats: the call at 0x41c504 runs again
  while bit 0x8000 of its returned word is set (`bne` at 0x41c510), and the first test at 0x41c4f4
  skips that loop when the bit is clear.
  Next it writes the byte 0xab to +0xb of the window (`sb` at 0x41c548 and 0x41c55c), reading the word
  at +0x8 after each write (`lw` at 0x41c54c and 0x41c560), and loops until that word, masked with 0xbf
  (at 0x41c550 and 0x41c564), equals 0xab (`beq` at 0x41c554, `bne` at 0x41c568); a first read at 0x41c528
  that, masked the same way at 0x41c534, already equals 0xab (`beq` at 0x41c540) bypasses the write.
  Inferred: the low bits of the byte 0xab are 0x2b, the index the three calls pass, so the byte write
  carries that index in its low bits, as the callee note's index mask implies.
  After the masked word at +0x8 matches, the routine stores the returned word with 0x8000 ORed in at +0xc
  (`sw` at 0x41c570), and returns the returned word itself (`jr ra` at 0x41c578).
  Unknown: which field of the data word at +0xc bit 0x8000 belongs to, the field of the bit of 0xab outside the index mask, and why the compare ignores one
  bit of the word at +0x8; the bundle has no field table for the window, so a datasheet table for
  those offsets would settle both.
  Unknown: the values of the third and fourth arguments at the calls at 0x41c504 and 0x41c520, which
  the bundle prints as `?`; tracing a2 and a3 at those sites would close it.
  Evidence grade: inferred.
- `R200PLLWriteUpdate` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c380 (n32).
  Inferred: this routine writes one PLL register through an index and data pair, because the callee
  note for `R200INPLL` describes offsets +0x8, +0xb and +0xc as the word that holds the index byte,
  the index byte at +0xb, and the data word at +0xc of a PLL read.
  The routine loads the window pointer from +0xf8 and then +0x30 of its first argument's record
  (`lw` at 0x41c394 and 0x41c3ac), then calls `R200INPLL` three times with 0x3 as the second argument
  (calls at 0x41c3a8, 0x41c3c4 and 0x41c3e0), passing its own third and fourth arguments through on
  the first call.
  It repeats the call at 0x41c3c4 while bit 0x8000 of the returned word is set (`bne` at 0x41c3d0),
  and skips that loop when the bit is clear (`beq` at 0x41c3b4).
  Then it writes the byte 0x83 to +0xb of the window (`sb` at 0x41c408 and 0x41c41c) and reads the
  word at +0x8 after each write (`lw` at 0x41c40c and 0x41c420), repeating until that word, masked with 0xbf
  (at 0x41c410 and 0x41c424), equals 0x83 (`beq` at 0x41c414, `bne` at 0x41c428); if the first read at
  0x41c3e8, masked the same way at 0x41c3f4, already equals 0x83 (`beq` at 0x41c400), the write is skipped.
  Inferred: per the callee note, the byte at +0xb is the index byte, and the low bits of 0x83 are
  0x3, the index the calls pass, so the byte write selects that index before the data word is written.
  Once the masked word at +0x8 equals 0x83, the routine stores the word that `R200INPLL` returned, with
  0x8000 ORed in, at +0xc (`sw` at 0x41c430), and returns the returned word unchanged (`jr ra` at
  0x41c438).
  Unknown: the field that the bit of 0x83 outside the index mask controls, why the compare ignores
  one bit of the word at +0x8, and the field that
  bit 0x8000 controls in the word stored at +0xc; the bundle has no field table for the window, so a
  datasheet field table for those offsets would settle it.
  Unknown: the third and fourth argument values of the second and third calls (0x41c3c4 and
  0x41c3e0), which the bundle prints as `?`; a trace of registers a2 and a3 at those two calls
  would settle it.
  Evidence grade: inferred.
- `R200RestoreCommonRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41bc00 (n32).
  Copies ten words from the record that the second argument points to into the window whose pointer
  sits at +0x30 of the record at +0xf8 of the first argument, at window offsets +0x230, +0x234, +0x238,
  +0x420, +0x540, +0xc40, +0x94, +0x950, +0x9c0 and +0x30 (the `lw`/`sw` pairs from 0x41bc20 through
  0x41bc6c).
  Inferred: the window holds device registers, because the linked mmio rows record reads and writes
  at offsets +0x30, +0x7c, +0x94 and +0x230 through +0xc40.
  It calls `xf86GetEntityPrivate` (`jalr` at 0x41bc78) with the word that the pointer at +0xdc of the
  first argument leads to as its first argument, the value of the global `gR200EntityIndex` as its
  second, and the window pointer and four words of the record that the global names as the rest.
  The result is dereferenced twice (`lw` at 0x41bc80 and 0x41bc84), and a zero result sends control
  to the check of the byte at +0x5d of the record (`beq` at 0x41bc90, reaching `lbu` at 0x41bcb4).
  The word at +0xa0 of the record is tested against 0x2f and 0x31 (`beq` at 0x41bc9c and 0x41bca4)
  whenever the double-dereferenced word is non-zero or the byte at +0x5d is non-zero (`bne` at
  0x41bcb8); on a match the routine loads the word at +0x7c of the window and stores it back with bit 0 cleared
  (mask -0x2 at 0x41bcd8, `sw` at 0x41bcec), and tail-jumps to `xf86usleep` with 0x186a0 as its first argument (`jr` at
  0x41bcf0).
  On the exit through 0x41bcc0, v0 is the byte at +0x5d, which is zero; the other exit at 0x41bca4
  leaves v0 as the bundle prints `?`.
  Unknown: the words behind the pointer that `xf86GetEntityPrivate` returns, which the tests at
  0x41bc84 and 0x41bc90 read; the bundle has no committed entry for that callee, so its entry would
  settle it.
  Unknown: the fields at +0xa0 and +0x5d of the record, which the tests read, and the field that bit 0 of the
  register at +0x7c of the window selects; no field table in the bundle names them, so
  a layout for that record and a register table for the window would settle it.
  Evidence grade: inferred.
- `R200RestoreConsoleModeRegs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41dcc0 (n32).
  Inferred: it returns the R200 adapter at arg0 to a legacy display state, since it calls the VGA
  register helpers and `fbdevHWRestore` and brackets the restore with `R200Blank` and `R200Unblank`.
  It first calls `vgaHWGetIndex` with its own four arguments (the `jalr` at 0x41dce0), then reads the
  word at the address that arg0 +0xfc holds plus four times the returned value (the `lw` at
  0x41dcf8) and keeps it in the frame. If the driver-record word at +0x18 is nonzero (the `beq` at
  0x41dcfc), it tail-calls `fbdevHWRestore` (the `jr` at 0x41dd18) with arg0 and four times the index.
  Otherwise it sets the byte at driver +0x5b to 1 (the `sb` at 0x41dd2c) and calls `R200Blank`
  (0x410ec0) with arg0, four times the index and 1 as a2 (the `jalr` at 0x41dd30). If the byte at
  driver +0x5a is zero, it copies the driver words at +0x200, +0x1fc, +0x1f8, +0x1f4, +0x1f0 and +0x224
  into the block at +0x194, +0x1a8, +0x8, +0xf0, +0x16c4 and +0x228 (the `sw` at 0x41de58 through
  0x41de84), through the block pointer that the `ld` at 0x41de50 reloads from the frame slot the `sd`
  at 0x41dce4 filled. Both cases then call `R200RestoreMode` (0x41cf40) with arg0 and the address of
  driver +0x1bc (the `bgezall` at 0x41dd50). A nonzero byte at +0x5a runs a second round through
  `xf86GetEntityPrivate` (the `jalr` at 0x41dd70) and `vgaHWGetIndex` (the `jalr` at 0x41dd84), then
  reads through pointers taken from that result before the VGA calls below.
  Both paths then run `vgaHWUnlock`, `vgaHWRestore` with 1 in a2, and `vgaHWLock` (the `jalr`s at
  0x41dda4 through 0x41ddc4, or 0x41de1c through 0x41de40), call `R200Restore2ndTMDSRegisters`
  (0x41dc40) and `R200RestoreSurface` (0x41dc80) with arg0, and end with a tail call to `R200Unblank`
  (0x411080) at 0x41de10.
  Unknown: which driver fields the bytes at +0x5a and +0x5b and the word at +0x18 are, and what the
  values they hold select; a reviewed datasheet field table or the code that writes these fields
  would settle it.
  Unknown: the target of the pointer chain in the second round, since the loads at 0x41dd90 and
  0x41dda0 have an unresolved base and no note exists for the handling by `xf86GetEntityPrivate` of
  its arguments; a note for that callee or a field table for the entity record would settle it.
  Evidence grade: inferred.
- `R200RestoreCrtc2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41be00 (n32).
  Copies the saved words of the record at a1 into the block at the pointer stored at +0x30 of the
  driver record, which is the word at a0 +0xf8 (the `lw` at 0x41be00 and 0x41be04). The `sw` at
  0x41be1c writes a1 +0x7c to block +0x3f8 merged with the current word there, keeping only the bits
  selected by a mask built from the 0x3080 `lui` at 0x41be10. The
  stores then move a1 +0x80, +0x8c and +0x90 to block +0x7c, +0xd68 and +0xd64 (the `sw` at 0x41be24
  through 0x41be34), and a1 +0x98, +0x9c, +0xa0, +0xa4, +0xa8, +0xac and +0xb0 to block
  +0x300, +0x304, +0x308, +0x30c, +0x324, +0x328 and +0x32c (the `sw` at 0x41be68 through
  0x41be98). The word at a1 +0xf8 is stored to +0x88c (the `sw` at 0x41be60) unless the word at driver +0xa0 is 8 (the `beq` at 0x41be54), and the store of a1 +0x84 to +0xd14 (the `sw` at
  0x41bec8) runs only when that word is 0x2f or 0x31 (the `beq` at 0x41be44 and 0x41be4c). The
  `sw` at 0x41bea0 stores a1 +0xc4 at +0x288. The stores to +0x3c4 and +0x3c8 (0x41bed8 and
  0x41bee4) run only when the word at driver +0x4c or +0x60 is 3 (the `beq` at 0x41beac and
  0x41beb4); otherwise the routine returns at 0x41bebc with v0 = a1 +0x9c, the word it stored at
  +0x304.
  Inferred: the words at driver +0x4c, +0x60 and +0xa0 gate the optional stores, because the branches
  at 0x41be44 through 0x41beb4 compare only those words, against 0x2f, 0x31, 0x8 and 3.
  Unknown: the display head that the set belongs to, which the code paths that call this routine
  with a record would show.
  Unknown: the names and bit fields of the registers at +0x300 through +0x3f8 and +0xd14 through
  +0xd68, and whether the block is device register space or a driver copy; the reviewed datasheet
  field table and the block-mapping code would show both.
  Evidence grade: inferred.
- `R200RestoreCrtcRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41bd00 (n32).
  Writes a saved record of words from a1 back into the block at the pointer stored at +0x30 of
  the driver record, which is the word at a0 +0xf8 (the `lw` at 0x41bd00 and 0x41bd04). The first
  stores copy a1 +0x48 to block +0x50 (the `sw` at 0x41bd0c), then write a1 +0x4c to block +0x54 and a1 +0x50
  to block +0x58 each merged with the bits of the current block word kept by a mask, 0x700 for +0x54
  (`sw` at 0x41bd20) and 7 for +0x58 (`sw` at 0x41bd34), then a1 +0x54, +0x58, +0x5c, +0x60, +0x64, +0x68 and +0x70 to block
  +0x200, +0x204, +0x208, +0x20c, +0x224, +0x228 and +0x22c (the `sw` at 0x41bd3c through
  0x41bd6c), and a1 +0x88 and +0x74 to block +0xd60 and +0x27c (the `sw` at 0x41bd74 and
  0x41bd7c). The `bne` at 0x41bd84 returns at 0x41bdf0 with v0 = a1 +0x74, the word just stored
  at +0x27c, and skips the rest when the word at driver +0x8c is nonzero. The word at driver +0xa0
  gates two of the later stores: the `sw` at 0x41bd9c (a1 +0xf8 to +0x88c) runs only when that
  word is not 8, and the `sw` at 0x41bdc8 (a1 +0x84 to +0xd14) runs only when it is 0x2f or 0x31.
  The stores to +0x7c and +0xd64 (0x41bda4, 0x41bdac) and the last four, to +0x3f8, +0x288, +0x3c4
  and +0x3c8 (0x41bdd0 through 0x41bdec), run on every path that reaches them.
  Inferred: the optional stores follow the word at driver +0xa0, since the branches at 0x41bd90,
  0x41bdb8 and 0x41bdc0 test that word and no other against 0x8, 0x2f and 0x31.
  Unknown: which display head, if any, the set describes; the routines that call this one with a
  record would settle it.
  Unknown: the names and bit fields of the registers at the offsets stored here (+0x50 through
  +0x3c8 and +0xd60 through +0x88c), and whether the block is device register space or a driver
  copy; the datasheet table for those offsets, once reviewed, and the block-mapping code would show
  both.
  Evidence grade: inferred.
- `R200RestoreFPRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41bf00 (n32).
  Writes a saved record of words from a1 back into the block at the pointer stored at +0x30 of
  the driver record, which is the word at a0 +0xf8 (the `lw` at 0x41bf04 and 0x41bf0c), starting
  with nine stores of a1 +0xb8 through +0xf0 to block +0x250 through +0x2c8 (the `sw` at 0x41bf14
  through 0x41bf54). The word at driver +0x4c is compared with 3 at 0x41bf68: when it equals 3, the
  routine goes to the return at 0x41bfec with v0 = 3; otherwise it stores a1 +0xb90 at block +0x24
  (the `sw` at 0x41bf74) and continues. The routine
  then loads a1 +0xe4 and the current word at block +0x2d0 and keeps in each only the bits of a mask built from
  the 0x8 `lui` at 0x41bf7c and the `ori` of 1 at 0x41bf84 (the bit 0x80000 and bit 0). The `beq` at 0x41bf90
  compares the two masked values, and when they are equal the `sw` at 0x41c000 stores a1 +0xe4 at +0x2d0 and
  the routine returns 3 (the `jr` at 0x41c00c). When the masked saved value is nonzero and differs, the
  routine calls `xf86usleep` first (`jalr` at 0x41bfc0) and then stores a1 +0xe4 at +0x2d0 (the `sw` at
  0x41bfd4), returning the call's result. When the masked saved value is zero, the `beq` at 0x41bf98 goes
  to 0x41c014, which stores (a1 +0xe4) | 0x80000 at +0x2d0 (the `sw` at 0x41c018), calls `xf86usleep` at
  0x41c038, stores a1 +0xe4 at +0x2d0 again (the `sw` at 0x41c04c), and returns the call's result. The
  argument of both calls is the word at +0x184 of the record at +0xf8 of the first argument, scaled by
  shifts of 5, 2 and 3 with a subtract and an add (0x41bfa8 through 0x41bfc4, and 0x41c024 through 0x41c03c).
  Unknown: the handling by `xf86usleep` of its argument, since no note exists for that callee; a note for it
  would settle it.
  Inferred: the offsets stored are 0x24, 0x250, 0x254, 0x284, 0x28c, 0x290, 0x2a4, 0x2a8, 0x2c4, 0x2c8 and
  0x2d0 (an access listing of the whole routine). The register-access table in
  [registers.md](../../evidence/registers.md) gives the public names `BIOS_5_SCRATCH`, `FP_CRTC_H_TOTAL_DISP`,
  `FP_CRTC_V_TOTAL_DISP`, `FP_GEN_CNTL`, `FP_HORZ_STRETCH`, `FP_VERT_STRETCH`, `TMDS_TRANSMITTER_CNTL`,
  `TMDS_PLL_CNTL`, `FP_H_SYNC_STRT_WID`, `FP_V_SYNC_STRT_WID` and `LVDS_GEN_CNTL` for them, so the routine
  restores the flat-panel and LVDS block. The bit 0x80000 in 0x2d0 is bit 19 of `LVDS_GEN_CNTL`, which the
  public X.Org register header names `RADEON_LVDS_BLON` (backlight on): the routine sets it around the
  timed wait, which fits a backlight sequence but is the public layout's reading, not something the routine
  states. Public names describe public chips, not necessarily this board.
  Unknown: how long the panel needs after the backlight bit is set; the routine only passes a driver word to
  `xf86usleep`. The note on that callee, once written, would settle it.
  Evidence grade: established.
- `R200RestoreMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41cf40 (n32).
  Inferred: it replays a saved mode on one R200 adapter, since it calls the head, PLL, TV and timing
  restore routines in sequence and copies the caller's record into a static buffer that it later
  passes to those restores.
  A driver-record word at +0x4c or +0x60 equal to 4 or 5 (the `beq`s at 0x41cf64 through 0x41cf84)
  sends it to 0x41d014, which calls `R200RestoreTVRegisters` (0x41c080) with the word at +0x4c as a3
  and 5 in a4. The byte at +0xbf then decides `SaveTimingCode` (the `jalr` at 0x41d284, record at
  driver +0x1bc), which sets that byte to 1; the byte at +0x5c then decides `RestoreTimingCode` (the
  `jalr` at 0x41d218, same record, which clears the byte at +0xbf) or, when nonzero, `LoadTimingCode`
  and `Set_MV_Mode` (0x41d03c and 0x41d048). Either way the next test is the byte at +0x58.
  A zero byte at driver +0x58 (the `beq` at 0x41cf90) sends it to 0x41d1c0, which calls
  `R200RestoreCrtcRegisters` (0x41bd00) and `R200RestoreFPRegisters` (0x41bf00) with the caller's
  record and tail-calls `R200RestorePLLRegisters` (0x41c580).
  After the `R200RestoreCrtcRegisters` call at 0x41d08c, a nonzero word at +0x1908 of a pointer reloaded from the
  frame (`lw` at 0x41d098, `beq` at 0x41d09c) makes it OR the 0x10000 bit into the word at +0x50 of the block at +0x30
  (`sw` at 0x41d0b0).
  A nonzero byte at +0x58 first calls `xf86GetEntityPrivate` (the `jalr` at 0x41cfa8) with the word
  that the pointer at arg0 +0xdc points to and with `gR200EntityIndex`, and keeps in s3 the word at
  the pointer it returns. With a nonzero byte at +0x5a it then calls `R200RestoreCrtc2Registers`
  (0x41be00) and `R200RestorePLL2Registers` (0x41cac0) with the caller's records; if the byte at
  +0x5c is also zero and s3 +0xc is nonzero, it stores 1 at s3 +0x8 and 0 at s3 +0xc (the `sw` at
  0x41d064 and 0x41d080) and calls `R200RestoreFPRegisters` and `R200RestorePLLRegisters` with the
  static buffer at 0x468398.
  With a zero byte at +0x5a it instead tests the fields at s3 +0x0 and +0x8 and the bytes at +0x5c
  and +0x5d, and one path copies the caller's record into the static buffer at 0x468398 with
  `xf86memcpy` (0xb94 bytes, the `jalr` at 0x41d254).
  Inferred: `SaveTimingCode` and `RestoreTimingCode` are a pair, since the callee notes say the save
  reads indexes 401 to 511 into the record at +380 and the restore writes those words back.
  Unknown: which driver-record fields the bytes at +0x58, +0x5a, +0x5c, +0x5d and +0xbf and the words
  at +0x4c and +0x60 are, and what the values 4 and 5 select; a reviewed datasheet field table or
  the code that writes those fields would settle it.
  Unknown: the pointer in the frame slot that the load at 0x41d098 reads, which decides whether the OR into
  the block word at +0x50 runs.
  Evidence grade: inferred.
- `R200RestorePLL2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41cac0 (n32).
  Inferred: it writes words from the record at a1 into the block at +0x30 of the pointer at +0xf8 of
  a0 through an index byte at +0xb and a data word at +0xc, because the committed callee note for
  `R200INPLL` describes that index and data pair at the same offsets.
  Each key group writes a key to +0xb and rereads the word at +0x8 until a read, masked with 0xbf (after each read), equals that key (the
  first `sb` is at 0x41cb10); the keys run in the order 0xad, 0xaa, 0xab, 0xac, 0xac, 0xae, 0xaa and
  0xad.
  Each key group comes after a call, in this order: `R200INPLL` with index 0x2d (0x41caf4), 0x2a
  (0x41cb58), 0x2b (0x41cbc0), 0x2c (0x41cc1c), 0x2c (0x41cc78) and 0x2a (0x41cd38); the two update
  calls at 0x41ccd4 and 0x41cce4 come before the 0xae group; and `xf86usleep` with 0x1388 (0x41cd98)
  comes before the last 0xad group.
  The eight `sw` stores to +0xc take values set up just before them: the `R200INPLL` return ANDed with
  -0x4 (0x41cb50, stored at 0x41cb5c), an earlier `R200INPLL` return ORed with 0x30001 (0x41cbc4), the record word at
  a1+0x368 ORed with a constant (0x41cc18), the record word at a1+0x36c ORed with a constant (0x41cc74
  and 0x41ccd0), the record word at a1+0x370 (0x41cd3c), the `R200INPLL` return ANDed with a mask built by the `ori` of 0xfffc at 0x41cd90 (stored at 0x41cd9c), and the record word at a1+0x374 (0x41cdf4).
  The loops have no counter or limit, so each one repeats until a read matches its key, and the
  routine ends with a tail jump to `sginap` with 0x1 at 0x41cdfc.
  Unknown: the register behind each index (0x2d, 0x2a, 0x2b and 0x2c) and the fields that the keys
  select; the datasheet excerpts name no register at +0x8, +0xb or +0xc, and a reviewed datasheet with
  an index table would settle it.
  Unknown: the device-side changes made by the two update calls at 0x41ccd4 and 0x41cce4 and by the
  `xf86usleep` call at 0x41cd98; no committed note covers those three callees.
  Evidence grade: inferred.
- `R200RestorePLLRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c580 (n32).
  Inferred: it writes the adapter's PLL registers from values in the caller's record at a1, because
  the committed note for `R200INPLL` gives an index and data pair as the way one PLL register is read,
  and this routine stores through that same aperture block with values taken from a1.
  It loads the driver block pointer from the screen record at +0xf8 (`lw` at 0x41c588), then the
  aperture block pointer from the driver block at +0x30 (`lw` at 0x41c5b8), and the stores that follow
  all go to that aperture block. Each write of a byte to +0xb is followed by a reread of the word at +0x8 until
  that word masked with 0xbf equals the byte written (the 0xbf immediates in the loops).
  It skips the first index read and its checks when the word at +0xa0 of the driver block (`lw` at
  0x41c58c) is 0x2c, 0x34 or 0x2d (branches at 0x41c5b4, 0x41c5c0 and 0x41c5c8).
  Otherwise it reads index 0x3 through `R200INPLL` (`jalr` at 0x41c5d4) and compares the result masked with
  0x3ff (at 0x41c5e0) against the word at +0x34c of the record at a1 (`bne` at 0x41c5e4); on a match it
  reads index 0x7 (`jalr` at 0x41c5f0), masks that result with a value built from 0x7 and 0x7ff (0x41c5fc and
  0x41c600) and compares it against the word at +0x350 (`bne` at 0x41c610). Only when both match does it return
  the second read's value at 0x41c624; when either test fails, it goes on to the write sequence.
  Inferred: the byte stores of 0x88, 0x82, 0x83, 0x87 and 0x89 to +0xb of the aperture block (`sb` at
  0x41c658, 0x41c6c0, 0x41c758, 0x41c810 and 0x41c8e4) select PLL indexes, because the `R200INPLL` note
  gives +0xb as the index byte; the word stores to +0xc at 0x41c780 and 0x41c920 take their values from
  a1 at +0x34c and +0x354 (`lw` at 0x41c728 and 0x41c914).
  It ORs the `R200INPLL` result with 0x30001 or 0x3 before storing it at +0xc (`sw` at 0x41c6f4 and
  0x41c9e4), and it reads the word at +0x8, ORs in 0x300 and stores it back there (`sw` at 0x41c704).
  Later it calls `R200PLLWriteUpdate` (`bgezall` at 0x41c8b8) and `R200PLLWaitForReadUpdateComplete`
  (`bgezall` at 0x41c8c8), calls `xf86usleep` with 0x1388 (`jalr` at 0x41c97c), and ends with a tail
  jump to `sginap` with 1 (`jr` at 0x41c9f8).
  Unknown: the device-side work of `R200PLLWriteUpdate`, `R200PLLWaitForReadUpdateComplete` and
  `xf86usleep`, and which PLL register each index value (0x2, 0x3, 0x7, 0x8, 0x82, 0x83, 0x87, 0x88 and
  0x89) selects, given that the `R200INPLL` note masks its index with 0x3f and these direct byte stores
  carry no such mask; a datasheet register table for the PLL index would settle it.
  Evidence grade: inferred.
- `R200RestorePalette` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41ce40 (n32).
  Inferred: it writes two runs of words to offset 0xb4 of the block at +0x30 of the pointer at +0xf8
  of a0, because the linked mmio rows list offsets 0x7c, 0xb3 and 0xb4 of that block as register
  accesses.
  It returns at once when the word at a1+0x384 is zero (the `beq` at 0x41ce58); otherwise it sets bit
  0x20 of the word at +0x7c (the `sw` at 0x41ce88) and clears the byte at +0xb3 (the `sb` at 0x41ce94).
  The first run starts with the pointer s3 equal to a1 and continues until s3 equals
  a1+0x400 (`s2`, set at 0x41ce90): each pass calls `FGLMDelay` with 0x32 (the `jalr`
  at 0x41ce9c), reads the word at s3+0x788 (the `lw` at 0x41cea4), keeps only its low 24 bits (mask built
  from 0xff and 0xffff at 0x41ce80 and 0x41ce8c), writes that to +0xb4 (the `sw` at 0x41ceb4) and adds 4 to s3.
  Inferred: `FGLMDelay` busy-waits for a count scaled by the measured CPU speed, per its committed
  callee note, so each pass waits before its write.
  After that run the word at +0x7c is reloaded (the `lw` at 0x41ceb8) and stored back with bit 0x20 cleared
  (mask -0x21 at 0x41cebc, the `sw` at 0x41cec4), s3 is set back to a1, the byte at +0xb3 is
  cleared again (the `sb` at 0x41cecc), and the second run repeats the pattern from 0x41ced0 with the word at
  s3+0x388 in place of s3+0x788, over the same range.
  The return at 0x41cf0c gives the value of the last `FGLMDelay` call on the loop path (v0 =
  ret(FGLMDelay) at 0x41cf00).
  Inferred: the access table in [registers.md](../../evidence/registers.md) names these offsets: 0x7c is the public
  `DAC_CNTL2`, where bit 5 (0x20) is `RADEON_DAC2_PALETTE_ACC_CTL` in the public X.Org register header, set
  here around the palette writes and cleared after; 0xb0 is `PALETTE_INDEX` and the byte at +0xb3 is its low
  lane (byte 3 of the big-endian word), so each run first zeroes the palette index and then streams words into
  0xb4, `PALETTE_DATA`. Public names describe public chips, not necessarily this board.
  Evidence grade: inferred.
- `R200RestoreTVRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41c080 (n32).
  Inferred: it copies words from the record at a1 into a register block at offset 0x30 of the structure
  at +0xf8 of a0, with PLL index writes between the copies, because the linked mmio rows list those
  offsets as register accesses and the committed callee note for `R200INPLL` describes the index byte
  at +0xb and the data word at +0xc.
  It returns at once unless the word at +0xb4 of that structure equals 3 (the `bne` at 0x41c094), and
  it also returns when bit 0x1 of the word at a1+0xfc is set (the `beq` at 0x41c0a8).
  After its `R300_Multiplex` call with 1 (0x41c0cc), it copies six record words into the block (the
  `sw` at 0x41c0dc through 0x41c10c), and the word at +0x800 receives the record word at a1+0xfc ORed
  with 0x3 (0x41c0ec).
  It then calls `R200INPLL` with index 0x21 (0x41c114) and runs a key loop that writes 0xa1 to +0xb
  (the `sb` at 0x41c140) and rereads +0x8 until a read, masked with 0xbf, equals 0xa1; then it calls `R200INPLL` with index
  0x22 (0x41c174) before a key loop with 0xa2 (the `sb` at 0x41c194), and with index 0x20 (0x41c1cc)
  before a key loop with 0xa0 (the `sb` at 0x41c1ec). The other two key loops compare the masked read the same way. Each key loop is skipped when its first read
  already matches.
  Three `sw` stores to +0xc carry record words: a1+0x100 (0x41c16c, before the 0x22 call), a1+0x154
  (0x41c1c4, before the 0x20 call) and a1+0x108 (0x41c218, after the last key loop).
  The second half stores seventeen record words into the block (the `sw` at 0x41c224 through 0x41c2bc),
  decreasing the words from a1+0x10c and a1+0x11c by one (0x41c224 and 0x41c244); it also writes +0x800
  a second time at 0x41c2bc with the unchanged word from a1+0xfc, so that write replaces the one at
  0x41c0ec.
  The routine ends by calling `xf86usleep` with 0xc350 (0x41c2a0) and returns its result in v0 (0x41c2c4),
  while the two early branches at 0x41c094 and 0x41c0a8 return at 0x41c0b4 without making these calls.
  Unknown: the device-side work of `R300_Multiplex` and of the `R200INPLL` calls with indices 0x21, 0x22
  and 0x20, since no committed note covers `R300_Multiplex` and the datasheet excerpts name no register
  for those indices.
  Evidence grade: inferred.
- `R200SaveCommonRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d2c0 (n32).
  It copies eleven four-byte words from the block at +0x30 of the pointer at +0xf8 of a0 into the
  record that the caller passes in a1.
  Inferred: that block holds device registers, because the linked mmio rows list offsets 0x30, 0x40,
  0x94, 0x230, 0x234, 0x238, 0x420, 0x540, 0x950, 0x9c0 and 0xc40 of it as four-byte register reads
  and writes.
  The block pointer comes from two loads, +0xf8 of a0 at 0x41d2c0 and then +0x30 of that pointer at
  0x41d2c4.
  Each of the eleven loads reads one word of the block, in the order offsets 0x230, 0x234, 0x238,
  0x420, 0x540, 0xc40, 0x94, 0x40, 0x950, 0x9c0 and 0x30, and the store right after it writes that
  word to the record at offsets 0x0, 0x4, 0x8, 0xc, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c and 0x30; the
  first pair is at 0x41d2c8 and 0x41d2cc, the last at 0x41d318 and 0x41d320.
  There is no branch, loop or call, every store goes to the record, and the return at 0x41d31c hands
  back the word at +0x9c0 of the block, the same word stored at record offset 0x2c by the `sw` at
  0x41d314.
  Unknown: which device or window the block belongs to, since the linked rows give offsets and access
  widths but no window name; the driver's window table would settle it.
  Unknown: the register names and field layout at offsets 0x230 through 0xc40, since the datasheet
  excerpts name no register at any of them; a reviewed datasheet with a register map for this chip
  would settle it.
  Evidence grade: inferred.
- `R200SaveConsoleModeRegs` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41da80 (n32).
  Inferred: the block at +0x30 of the structure at +0xf8 of a0 holds device registers, because the linked
  mmio rows list offsets 0x7c, 0x8, 0x3f8 and 0x88c among those it reads as register accesses, and the
  routine copies words out of it into offsets 0x1f0 to 0x530 of that same structure.
  It reads the word at +0x30 of that structure (the `lw` at 0x41da98) and stores it to the frame in the
  delay slot of the call to `vgaHWGetIndex` (0x41daa0), then loads from the table that the pointer at
  +0xfc of the entry a0 designates, at the index that call returned times 4 (the `lw` at 0x41dabc).
  If the word at +0x18 of the structure is nonzero, the routine tail-jumps to `fbdevHWSave` with the entry
  a0, the +0x18 word and the index times 4 (the `jr` at 0x41dad4), and does nothing else.
  Otherwise, when the byte at +0x5a of the structure is zero (the `beq` at 0x41dae0), it calls
  `vgaHWUnlock` (0x41dbb8), `vgaHWSave` with 1 (0x41dbd0) and `vgaHWLock` (0x41dbdc), then copies eight
  words from the block saved at 0x41daa4 into the structure at +0x1f0, +0x1f4, +0x1f8, +0x1fc, +0x200,
  +0x224, +0x280 and +0x2b4.
  On either path the routine then copies twelve words from the block saved at 0x41daa4 into the structure
  at +0x238 through +0x26c (the `sw` at 0x41daf4 through 0x41db58), calls `R200INPLL` with index 0x2d
  (0x41db54) and stores the result at +0x530 (the `sw` at 0x41db6c).
  It then calls `R200SaveMode` (0x41db70) with the entry a0 and the address of +0x1bc in the structure,
  calls `R200Save2ndTMDSRegs` (0x41db88), and ends with a tail jump to the routine at 0x41d380 (the `bgezl` at 0x41dbac), so it has no return of its own.
  Inferred: `R200INPLL` reads one PLL register through an index and data pair, per its committed callee
  note, so the value stored at +0x530 is a PLL register read.
  Unknown: the device-side work of the vgaHW routines (`vgaHWGetIndex`, `vgaHWUnlock`, `vgaHWSave` and
  `vgaHWLock`) and of `R200SaveMode` and `R200Save2ndTMDSRegs`, since no committed note covers any of
  these six callees.
  Evidence grade: inferred.
- `R200SaveCrtc2Registers` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d4c0 (n32).
  Copies words from the inner block into the caller's block at a1, where the outer block is the
  pointer at +0xf8 of a0 and the inner block is the pointer at +0x30 of the outer block. Each word is
  one `lw` from the inner block and one `sw` to a1, in a straight line: +0x7c goes to +0x80, +0xd64 to
  +0x90, +0xd14 to +0x84, +0x3f8 to +0x7c, +0x300 through +0x32c go to +0x98 through +0xb0 in order,
  +0x3c4 to +0xcc, +0x3c8 to +0xdc, and +0x288 to +0xc4. The return at 0x41d534 gives v0 the word
  loaded from the inner block at +0x3c8, the same word stored at a1 +0xdc, and the delay-slot store
  at 0x41d538 writes the +0x288 word to a1 +0xc4. Nothing in the routine branches or calls out.
  Inferred: the inner offsets are device registers, because the inventory links each of them to an
  mmio row with 4-byte reads and writes; those rows give offsets and widths but no window or register
  names. Unknown: the register names and the window behind those offsets, since the datasheet section
  of the bundle names none of them; the mmio table with window and name filled in would settle it.
  Unknown: the code that sets the outer and inner pointers, and the code that reads the copy at a1;
  the callers of this routine in the binary would settle it.
  Evidence grade: inferred.
- `R200SaveCrtcRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d3c0 (n32).
  Moves words from the inner block to the caller's block at a1, reaching the inner block through the
  pointer at +0xf8 of a0 and then the pointer at +0x30 of that block. Source +0x50 through +0x58 go to
  a1 +0x48 through +0x50, +0x200 through +0x20c go to +0x54 through +0x60, +0x224 and +0x228 go to +0x64
  and +0x68, +0x22c goes to +0x70, +0x27c to +0x74, +0xd60 to +0x88, and +0xd68 to +0x8c. The return at
  0x41d42c gives v0 the word loaded from +0xd60, the same word stored at a1 +0x88, and the delay-slot
  store at 0x41d430 writes the +0xd68 word to a1 +0x8c. The body has no branch and no call, so it runs
  once from entry to the return. Inferred: those inner offsets are device registers, since the
  inventory links all of them to mmio rows with 4-byte reads and writes, and the rows carry no window
  or register names. Unknown: the name of each register at those offsets and the window they sit in;
  a datasheet line per offset with the window would settle it. Unknown: who fills the two pointers and
  who reads the copy at a1, which the bundle does not list; the callers in the binary would settle it.
  Evidence grade: inferred.
- `R200SaveFPRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d440 (n32).
  Takes the inner block, which is the pointer at +0x30 of the word at +0xf8 of a0, and copies a run of
  its words into the caller's block at a1. The loads from +0x250 through +0x2a4 and the +0x24 load
  feed stores in load order to a1 +0xb8 through +0xf0, skipping some 4-byte slots, and the +0x24 word
  goes last, through the delay-slot store at 0x41d4a8, to a1 +0xb90. The return at 0x41d4a4 gives v0
  the word loaded from +0x2a4, the same word stored at a1 +0xf0. No branch and no call appears in the
  body, so the copy runs straight through. Inferred: the inner offsets are device registers; the
  evidence is the mmio rows the inventory ties to them (4-byte reads and writes, and a read-only row
  at +0x2d4), and those rows name no window or register. Unknown: which register and window each
  offset from +0x24 to +0x2d4 belongs to, and a datasheet line per offset would settle it.
  Unknown: the setup of the two pointers and the readers of the copy at a1; a list of callers in the
  binary would settle it.
  Evidence grade: inferred.
- `R200SaveMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d900 (n32).
  Inferred: it stages a 0xb94-byte block into the driver block at +0xd50, copying it from this block's
  +0x1bc or from the block that `xf86GetEntityPrivate` leads to, and when the flag is zero it calls a
  set of routines on the screen record first; the reason is the copy sites and the callee list, since
  the callees have no notes.
  It reads the driver block pointer from the screen record at +0xf8 (`lw` at 0x41d908) and the byte at
  +0x5a of that block (`lbu` at 0x41d90c), and that byte picks the path at the branch at 0x41d92c.
  When the byte is nonzero it calls `xf86GetEntityPrivate` (`jalr` at 0x41d944) with the entity index
  from `gR200EntityIndex` (`lw` at 0x41d948), follows three pointers from the returned pointer, at +0x0,
  +0x14 and +0xf8 (`lw` at 0x41d94c, 0x41d950 and 0x41d958), and copies 0xb94 bytes from that block's
  +0x1bc into this block's +0x1bc (`xf86memcpy` at 0x41d96c).
  It then tail-jumps to a second copy of 0xb94 bytes from that same source into this block's +0xd50
  (`jr` at 0x41d998).
  When the byte is zero it calls the routines at 0x41d540, 0x41d2c0, 0x41d3c0, 0x41d440, 0x41d4c0,
  0x41d600 and 0x41d7c0 in turn (`bgezall` at 0x41d9a8, 0x41d9c0, 0x41d9d4, 0x41d9e8, 0x41da00,
  0x41da14 and 0x41da28), each with the entry a0 and a1, and then tail-jumps to a copy of 0xb94 bytes
  from this block's +0x1bc into +0xd50 (`jr` at 0x41da54).
  The routines at 0x41d2c0, 0x41d3c0, 0x41d440, 0x41d4c0 and 0x41d7c0 each read words of the block at +0x30 of
  the driver record and store them into the record passed in a1.
  Unknown: the content of the routines at 0x41d540 and 0x41d600, which their own notes would settle.
  Unknown: the field at +0x5a of the driver block, and the layout of the 0xb94-byte block at +0x1bc,
  which a layout of the driver block would settle.
  Evidence grade: inferred.
- `R200SavePalette` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d6c0 (n32).
  Reads words out of the device into the caller's record a1 in two runs, and returns v0 = a1+0x400. The
  device block is the pointer at +0x30 of the structure that a0 reaches through +0xf8. The store at 0x41d6e0
  writes the word at +0x7c of the block with the 0x20 bit ORed in, and the store at 0x41d6ec zeroes the word
  at +0xb0. The first loop, from 0x41d6f0 to the `bne` at 0x41d734, takes eight reads of the word at +0xb4
  per pass, each stored to the next slot of the caller's record from a1+0x788 (the `sw` at 0x41d6f4 through
  0x41d738), advancing the base by one eight-word group per pass until it reaches a1+0x400, the value the routine returns. After the loop the word at +0x7c is
  loaded at 0x41d73c and stored again at 0x41d74c with the 0x20 bit cleared (mask -0x21 at 0x41d740), and
  +0xb0 is zeroed again at 0x41d758. The second loop, from 0x41d75c to the `bne` at 0x41d7a0, makes the same
  reads of +0xb4 into the record from a1+0x388, and the delay-slot store at 0x41d7ac writes 1 to a1+0x384.
  Inferred: the words at +0x7c, +0xb0 and +0xb4 of the block are device registers, the evidence being the
  inventory's mmio rows for those offsets, read and written at 4 bytes; those rows name no window or
  register.
  Inferred: by the same access table, 0x7c is the public `DAC_CNTL2` with bit 5 (0x20) the public
  `RADEON_DAC2_PALETTE_ACC_CTL`, 0xb0 is `PALETTE_INDEX` (zeroed before each read run) and 0xb4 is
  `PALETTE_DATA`, so the routine reads the palette out of the device from index zero. Public names describe
  public chips, not necessarily this board.
  Evidence grade: inferred.
- `R200SaveScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x422140 (n32).
  Inferred: it blanks or unblanks one screen, because it selects the screen record from `xf86Screens`
  by the index in its first argument and then calls `R200Unblank` or `R200Blank` on that record
  according to the result of `xf86IsUnblank`; the reason is those calls and the branch on that result.
  It reads the index word at the address in a0 (`lw` at 0x422160) and loads the screen record from
  `xf86Screens` at that index (`lw` at 0x422164 and 0x42217c).
  It calls `xf86IsUnblank` (`jalr` at 0x422178) with the entry a1 as both its first and second
  arguments, and when the result is nonzero it calls `SetTimeSinceLastInputEvent` (`jalr` at 0x422188)
  before the next test.
  It returns 1 at 0x4221cc without any blank or unblank call when the screen record pointer is zero
  (branch at 0x422194) or the word at +0x368 of the record is zero (`lw` at 0x42219c, branch at
  0x4221a0).
  Otherwise it calls `R200Unblank` (`jalr` at 0x4221b4) when the `xf86IsUnblank` result was nonzero, and
  `R200Blank` (`jalr` at 0x4221dc) when it was zero (branch at 0x4221a8), each with the screen record in
  a0; every path returns 1 (`jr` at 0x4221cc).
  Unknown: the content of the word at +0x368 of the screen record that gates these calls, which a
  layout of the screen record would settle.
  Unknown: the device-side work of `R200Blank`, `R200Unblank`, `xf86IsUnblank` and
  `SetTimeSinceLastInputEvent`, which notes for each of them would settle.
  Evidence grade: inferred.
- `R200SaveTVRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41d7c0 (n32).
  Copies words from the inner block and the results of two calls to `R200INPLL` into the caller's
  block at a1, and does so only when the word at +0xb4 of the outer block (the pointer at +0xf8 of a0)
  is 3; the inner block is the pointer at +0x30 of the outer block. Any other value falls through to
  the return at 0x41d7e4 after only the stack stores at 0x41d7cc, 0x41d7d0 and 0x41d7e0. When the word
  is 3, the loads at 0x41d7ec and 0x41d814 fetch the callee from the GOT, and the calls at 0x41d80c
  (second argument 0x21) and 0x41d824 (second argument 0x22) run in turn. The `sw` at 0x41d828 sits in
  the delay slot of the second call and so stores the first result to a1 +0x100, and the `sw` at
  0x41d834 stores the second result to a1 +0x154. Before the first call, the word at inner +0x20
  goes to a1 +0x108 (the `sw` at 0x41d810, a delay slot) and the word at inner +0x800 to a1 +0xfc.
  After the calls, 22 words read from inner offsets 0x804 through 0x8ac are stored at a1 +0x10c
  through +0x178, and the word at +0x88c goes to a1 +0xf8. Inferred: the 22 loads read the inner block,
  because the inner pointer is stored at 0x41d7e0 and reloaded into a7 at 0x41d830, and the inner
  offsets 0x20 and 0x800 through 0x8ac are device registers, since the inventory links them to mmio
  rows (0x20 as a read only, the others as 4-byte reads and writes) with no window or register names.
  Inferred: each `R200INPLL` call reads one register through an index and data pair, which the callee
  note gives as the byte at register 0x8 and the word at register 0xc, so the two calls use the
  indices 0x21 and 0x22 (the constants at 0x41d808 and 0x41d820). Unknown: which device registers the
  indices 0x21 and 0x22 address, since the bundle has no register name or datasheet line for them; a
  register table for that window and those indices would settle it. Unknown: the values of a2 and a3
  at the second call at 0x41d824 and of v0 at the return at 0x41d8f4, which the bundle gives as '?';
  tracing those registers through the first call would settle them.
  Evidence grade: inferred.
- `R200SetupForScreenToScreenCopy` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40b080 (n32).
  Saves the arguments a1 and a2 in the driver record at +0x1920 and +0x1924 (`sw` at 0x40b0cc and 0x40b0d0) and
  then writes its setup words into the block that the driver record points to at +0x30.
  The word at +0x146c is built from the entry of `R200_ROP` selected by a3 (index shifted left by 0x3, first word
  read at 0x40b108), ORed with the word at +0x191c of the driver record and 0x20030f0 (`sw` at 0x40b128); the
  second copy path at 0x40b244 ORs in 0x20030f3 instead.
  The routine writes a4 to +0x16cc and, to +0x16c0, a word it ORs together from a flag that is 1 when an earlier
  loaded value is not negative (at 0x40b10c and 0x40b120) and the 0x20030f0 constant (`or` at
  0x40b13c, `sw` at 0x40b144), before any wait call, and
  its later stores write a5 to +0x15c4, -1 to +0x15cc, 0x1000004 to +0x15c0 (`sw` at 0x40b17c, 0x40b18c and
  0x40b198) and the word at +0x202c to +0x1700 (`sw` at 0x40b2bc).
  When a5 is -1 (`beq` at 0x40b140 and 0x40b2b8), control goes to the return at 0x40b1c4 and skips the later
  stores of that route.
  Calls to `R200WaitForFifoFunction` sit at 0x40b158, 0x40b1dc and 0x40b2d0 with a1 = 3, and at 0x40b310 with
  a1 = 9; each runs only when the count at +0x190c is below 3, or below 9 for the last call.
  The stores of the count at +0x190c are minus 3 at 0x40b100, 0x40b174 and 0x40b2e0, and minus 9 at 0x40b21c on
  the path that skips the last call.
  Inferred: `R200WaitForFifoFunction`'s note calls the count at +6412 the free-entry count of the command FIFO,
  so the three-entry and nine-entry reservations above come out of that count.
  Inferred: the access table in [registers.md](../../evidence/registers.md) names +0x1404 `DST_OFFSET`, +0x1408 `DST_PITCH`,
  +0x146c `DP_GUI_MASTER_CNTL` and +0x1704 `FLUSH_1` (public names, so what the offsets are is settled to
  that grade); the fields inside each word are the public layout's and are not claimed here.
  Unknown: what the word stored at +0x1700 is. No public table in the repository names the offset (the
  registers.md entry and the open-questions entry for unnamed offsets list the routes tried), so the next route
  is the register tables of the AMD R5xx acceleration guide, looked up by offset 0x1700, and then the other
  callers of the stored word at driver record +0x202c.
  Evidence grade: inferred.
- `R200SetupForSolidFill` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40ac40 (n32).
  Writes four words into the block that the driver record points to at +0x30, after a count check at +0x190c
  that waits for FIFO room when the count is below 4.
  It branches on bit 0x4000 of the word at +0x1fe4 (`beq` at 0x40ac6c) and, when that bit is set, on the word
  at +0x23f8 (`beq` at 0x40ac78).
  On the main route the wait is called with a1 = 4 when the count is below 4 (`jalr` at 0x40aca4), then the
  count is re-read and stored minus 4 at +0x190c (`sw` at 0x40acd0).
  The routine then reads the word at +0x191c (`lw` at 0x40acd4) and takes the entry of `R200_ROP` that the
  routine's third argument selects, shifted left by 0x3 (`sll` at 0x40acc4), and loads its word at +4 (`lw` at
  0x40acd8).
  It writes that entry word ORed with the +0x191c word and 0x30d0 to +0x146c, the second argument to +0x147c,
  the fourth argument (a3) to +0x16cc, and the constant 0x3 to +0x16c0 of the block (`sw` at 0x40acec, 0x40acf0,
  0x40acf4 and 0x40acfc).
  When the bit is set and the word at +0x23f8 is zero, control goes to a second copy from 0x40ad0c with its
  own wait call (`jalr` at 0x40ad30), and that copy ends by writing the word at +0x202c shifted left by 0x3 and
  ORed with 0x3 to +0x16c0 (`sw` at 0x40ad9c).
  Inferred: the note on `R200WaitForFifoFunction` gives the count at driver record +6412 as the masked free
  command-FIFO count, so the four-entry check takes four free FIFO entries for the words written here.
  Unknown: the device-side fields of the words at +0x146c, +0x147c, +0x16c0 and +0x16cc, the content of the word
  at +0x191c that is ORed into the +0x146c word, and the value that `jr ra` at 0x40ad04 returns on the route that
  skips the wait; the linked rows give offsets only, and the bundle gives that return value as unresolved.
  Evidence grade: inferred.
- `R200ShowCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40e2c0 (n32).
  Acts on the block that the driver record points to at +0x30 and on the driver record itself: it sets bit
  0x10000 in one or both of two block words and writes 1 to the driver-record word at +0x1908 (`sw` at 0x40e360,
  0x40e38c and 0x40e3b8).
  It calls `xf86EnableAccess` first (`jalr` at 0x40e2e8), then reads the byte at +0x5a of the driver record
  (`lbu` at 0x40e2f0) and picks +0x3f8 when that byte is nonzero (`lw` at 0x40e308, `sw` at 0x40e310) or +0x50
  when it is zero (`lw` at 0x40e3cc, `sw` at 0x40e3d8).
  Both routes then read the byte at +0x5d (`lbu` at 0x40e314), and when that byte is zero they write 1 at
  +0x1908 and return (`beq` at 0x40e318, `sw` at 0x40e38c, `jr ra` at 0x40e398).
  Otherwise it reads the word at +0x1e8c (`lw` at 0x40e320), and when that word is below 2 unsigned it ORs 0x10000
  into +0x3f8, writes 1 at +0x1908 (`sw` at 0x40e3b0 and 0x40e3b8) and returns (`jr ra` at 0x40e3c4).
  Otherwise bit 0x1 of the global word at abs 0x467e88 (`beq` at 0x40e338) decides whether 0x10000 is ORed into
  +0x50 (`lw` at 0x40e340, `sw` at 0x40e348), and bit 0x2 of the same word (`andi` at 0x40e33c, `beq` at
  0x40e34c) decides whether 0x10000 is ORed into +0x3f8 and 1 is written at +0x1908 (`sw` at 0x40e35c and
  0x40e360); a clear bit 0x2 goes to the 1-write at 0x40e38c.
  Every route returns the byte at +0x5a in v0 (`jr ra` at 0x40e36c, 0x40e398 and 0x40e3c4), so the value that the
  call at 0x40e2e8 returns is replaced before the routine returns.
  Unknown: which device feature the registers at +0x50 and +0x3f8 of the block belong to, and which fields the
  bytes at +0x5a and +0x5d and the word at +0x1e8c carry; the linked rows give offsets and widths only, and no
  field table is linked for the driver record.
  Unknown: the handling by `xf86EnableAccess` of its four argument registers, since the bundle has no committed
  entry for that routine.
  Evidence grade: established.
- `R200SubsequentScreenToScreenCopy` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40b340 (n32).
  Writes three words into the block that the driver record points to at +0x30 and lowers the count at
  +0x190c by 3, after waiting for FIFO room when that count is below 3.
  It tests the words at +0x1920 and +0x1924 of the driver record (`lw` at 0x40b34c and 0x40b394). When the
  first is negative (`bltz` at 0x40b39c), it adds a5 to a1 and a3 and subtracts 1 from the a3 copy
  (0x40b424 through 0x40b42c), and the delay slot at 0x40b434 subtracts 1 from the a1 copy; when the second
  is negative (`bltz` at 0x40b3a4), it adds a6 to the copies of a4 and a2 and subtracts 1 from each
  (0x40b438 through 0x40b448). The adjusted copies are the ones packed below.
  When the count is below 3 (`slti` at 0x40b3a8, `bne` at 0x40b3ac), it calls `R200WaitForFifoFunction`
  with a1 = 3 (`jalr` at 0x40b410), then re-reads the count (`lw` at 0x40b420).
  Both paths then store the count minus 3 in its place (`sw` at 0x40b3cc, with the -0x3 immediate at
  0x40b3c8) and write three packed words: a1 ORed with a2 shifted left by 0x10 to +0x1434 (`sw` at 0x40b3f4),
  a3 ORed with a4 shifted left by 0x10 to +0x1438 (`sw` at 0x40b3f8), and a5 ORed with a6 shifted left by 0x10
  to +0x143c (`sw` at 0x40b3fc), each shift being the immediate 0x10 at 0x40b3b8, 0x40b3c0 and 0x40b3d4.
  The path that skips the wait returns the constant 0x63da8 in v0 (`jr ra` at 0x40b404), and the other
  path returns the wait's value.
  Inferred: by the note on `R200WaitForFifoFunction`, the count at driver record +6412 is the masked free
  command-FIFO count, so the three words here are paid for out of it.
  Inferred: the access table in [registers.md](../../evidence/registers.md) names +0x1434 `SRC_Y_X`, +0x1438 `DST_Y_X` and
  +0x143c `DST_HEIGHT_WIDTH` (exact in both public tables). The routine's own stores show each word packed
  as one value ORed with a second value shifted left by 16, so each is two 16-bit halves; the names put the
  first-named quantity (Y, or height) in the high half, which agrees with the shift but is the public
  layout's reading, not something the routine states.
  Evidence grade: inferred.
- `R200SubsequentSolidFillRect` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40adc0 (n32).
  Acts on the block that the driver record points to at +0x30: it packs argument pairs into two words of
  that block and, when the count kept at +0x190c of the driver record is below 2, waits for FIFO room first.
  It loads the count (`lw` at 0x40adcc) and branches when it is below 2 (`bne` at 0x40adec, taken on a
  signed compare with 0x2).
  When the count is not below 2, it stores the count minus 2 in its place (`sw` at 0x40adfc), writes
  `a1 | (a2 << 0x10)` to +0x1438 and `a4 | (a3 << 0x10)` to +0x1598 of the block (`sw` at 0x40ae0c and
  0x40ae14), and returns the second packed word in v0 (`jr ra` at 0x40ae18).
  When the count is below 2, it calls `R200WaitForFifoFunction` with a1 = 2 (`jalr` at 0x40ae38), re-reads
  the count (`lw` at 0x40ae54), stores the count minus 2 in its place (`sw` at 0x40ae60), and returns the
  wait's value (`jr ra` at 0x40ae84).
  Inferred: the note on `R200WaitForFifoFunction` says that routine waits until the engine has at least the
  requested number of free command-FIFO entries and stores the masked count at driver record +6412 on every
  pass, so the count here is the free command-FIFO count.
  On the wait path the arguments and the block pointer were saved in the frame before the call (`sd` at 0x40ae24
  through 0x40ae30, and a2 at 0x40add4) and are reloaded afterwards, so the stores at 0x40ae7c and 0x40ae80
  write the same two packed words to +0x1438 and +0x1598 of the same block as on the other path.
  Inferred: the access table in [registers.md](../../evidence/registers.md) names +0x1438 `DST_Y_X` and +0x1598
  `DST_WIDTH_HEIGHT` (exact in both public tables), the second being the destination size in the other
  half order than `DST_HEIGHT_WIDTH`. Both stores write a pair of 16-bit halves packed by a shift of 16; which
  half holds which quantity is the public names' reading of the order, not stated by the routine.
  Evidence grade: inferred.
- `R200Unblank` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x411080 (n32).
  Inferred: it writes words of a block in an X11R6 driver module, at offsets +0x2d0, +0x54,
  +0x3f8 and +0x88c, because the inventory links those four offsets to it as register rows.
  It first passes the structure at +0xf8 of its first argument to the unnamed routine at
  0x40f740 (the `bgezall` at 0x4110a4), after saving the block pointer at +0x30 of that
  structure in a frame word (the `sd` at 0x4110a8); then it reads the byte at +0x5a (`lbu` at 0x4110ac) and the word at +0x4c of the structure (`lw` at 0x4110c0). A nonzero byte at
  +0x5a switches on the word at +0x4c: 4 and 5 store the block word at +0x88c (the `sw` at
  0x4111e8), 1 and 3 store the block word at +0x3f8 (the `sw` at 0x4111b8), and any other value
  goes straight to a tail jump. A zero byte at +0x5a switches on the same word again: 4 and 5
  store the block word at +0x88c (the `sw` at 0x411234), 2 stores the block word at +0x2d0 (the
  `sw` at 0x411210) and then the word at +0x54 (the `sw` at 0x411220), and 1 and 3 store only
  the word at +0x54; each of these paths then tests the byte at +0x5d (the `lbu` at 0x411140).
  A zero byte at +0x5d goes to the tail jump, and a nonzero one switches on the word at +0x60
  (the `lw` at 0x41114c): 4 and 5 store the block word at +0x88c (the `sw` at 0x411248), 1 and 3
  store the block word at +0x3f8 (the `sw` at 0x411190), and any other value goes to the tail
  jump; every path ends in one of the tail jumps.
  Inferred: the stores at 0x411190, 0x4111b8, 0x4111e8, 0x411210, 0x411220, 0x411234 and 0x411248
  write through the block pointer, because each base register is reloaded from the frame word
  that the `sd` at 0x4110a8 wrote with that pointer, and no other store in the bundle writes
  that word.
  The stores change one mask each: the +0x3f8 stores (0x411190 and 0x4111b8) clear the bits outside a mask built
  from the `lui` of 0xff7f and the `ori` of 0xffff (0x41117c and 0x411184, 0x4111a4 and 0x4111b0); the +0x88c
  stores (0x4111e8, 0x411234 and 0x411248) set bit 0 (`ori` of 1 at 0x4111e4, 0x41122c and 0x411240); the
  +0x2d0 store (0x411210) clears the bit selected by the mask -0x3 set at 0x411208; and the +0x54 store
  (0x411220) clears the bit selected by the mask -0x401 set at 0x411120.
  The `bgezall` at 0x4110a4 tests the zero register, so the call to the unnamed routine at 0x40f740 is always made.
  Unknown: the content of the unnamed routine at 0x40f740 and of `is1Unblank` at
  0x453a80, which have no notes; the register names behind +0x2d0, +0x54, +0x3f8 and +0x88c are
  also outside the bundle.
  Evidence grade: inferred.
- `R200_DGABlank` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f300 (n32).
  Inferred: it writes device register words in an X11R6 driver module, reached through the
  structure at +0xf8 of its first argument and the block pointer at +0x30 of that structure,
  because the inventory links the offsets +0x54, +0x2d0 and +0x3f8 of that block to it as
  register rows. It first reads the byte at +0x5a of the structure (the `lbu` at 0x40f304); a
  nonzero byte ORs 0x30800000 into the block word at +0x3f8 (the `lw` at 0x40f344 and the `sw`
  at 0x40f350) and returns at 0x40f34c. With a zero byte at +0x5a, the word at +0x4c of the
  structure picks the next update: a value of 2 ORs 0x2 into the block word at +0x2d0 (the `sw`
  at 0x40f364), and 1, 2 and 3 all OR 0x700 into the block word at +0x54 (the `sw` at 0x40f370),
  so a value of 1 or 3 skips only the +0x2d0 step and any other value skips both. The byte at
  +0x5d of the structure is then tested (the `lbu` at 0x40f374); a nonzero byte ORs 0x30800000
  into the block word at +0x3f8 (the `sw` at 0x40f38c) and returns at 0x40f388, and a zero byte
  returns at 0x40f354 with no further store.
  Unknown: the value in v0 at the returns at 0x40f354 and 0x40f388, which the bundle gives no
  value for; a trace of v0 at those two returns, or the call sites of this routine in the
  module, would settle it.
  Unknown: which registers the block offsets +0x54, +0x2d0 and +0x3f8 are, and which window the
  block belongs to, since the register rows carry offsets and no names; the register table of a
  reviewed datasheet for that block would settle it.
  Evidence grade: inferred.
- `R200_DGAOpenFramebuffer` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f240 (n32).
  Its own accesses go through its arguments, its frame and a pointer loaded from +248 of `a0`, and
  the bundle links no device register row to any of them.
  It calls `R200_DGABlank` at 0x40f280 unconditionally (a `bgezall` on the zero register) with `a0` to `a3` still holding their entry values, then sets
  `v0` to 1 at 0x40f2c0 and returns it through `jr ra` at 0x40f2cc.
  The word at +248 of `a0` is saved to frame +0x18 (`sd` at 0x40f274) and reloaded into `v1` (`ld` at
  0x40f2a4), and the loads and stores below go through `v1`.
  It writes zero to the word at +0x0 of `a1` (`sw` at 0x40f290), `a4` (`sw` at 0x40f2bc) and `a5`
  (`sw` at 0x40f2c4).
  It stores the word at `v1` +0x1b80 to +0x0 of `a3` (`lw` at 0x40f2b4, `sw` at 0x40f2b8), stores
  the word at `v1` +0x1b88 to +0x0 of `a2` (`ld` at 0x40f2ac, `sw` at 0x40f2b0), and stores 1 at
  `v1` +0x1958 (`sw` at 0x40f2c8).
  Unknown: the values held in the fields at `v1` +0x1b80, +0x1b88 and +0x1958, which the bundle does
  not give and no datasheet excerpt or linked row names.
  Unknown: what the callee `R200_DGABlank` changes on the device, since the bundle has no note for
  it; its own bundle would settle that.
  Evidence grade: established.
- `R200_DGASetMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40eb00 (n32).
  Inferred: it switches the screen to a mode, because it works on the driver record at +248 of its
  screen argument `a0` (the `R200SwitchMode` note gives that record), on the mode record in `a1`
  (the same note calls `a1` the new mode record), and it calls routines whose notes describe a mode
  switch, a command-processor ring start or stop, an engine state setup and a frame-origin move.
  With `a1` nonzero (`bne` at 0x40eb3c), it copies the 0x18-byte block at driver +0x1984 into the
  table at 0x468218 only when the word at +0x1954 is zero (`jalr` at 0x40ed44) and sets that word
  to 1 (`sw` at 0x40ed54), then stores the mode record's +0x28 and +0x24 words at +0x1984 and +0x1988
  (`sw` at 0x40ebf8 and 0x40ec00), stores more words at +0x1990 and +0x1994 (`sw` at 0x40ec4c and
  0x40ec30), and calls `R200SwitchMode` with the mode record's +4 word as its mode (`jalr` at
  0x40ec54).
  With `a1` zero, it copies 0x18 bytes from the table at 0x468218 plus 0x18 times the word at +0x1954 (shift and
  subtract at 0x40eb54 through 0x40eb60) into the driver block at +0x1984 when that word is nonzero (`jalr` at 0x40eb68), calls `R200SwitchMode`
  with the word at driver +0x1998 as the mode and stores that word at screen +0xcc (`jalr` at
  0x40eb80, `sw` at 0x40eb84), and before returning calls `R200AdjustFrame` with zero in `a1` to
  `a3` (`jalr` at 0x40ebd8) and stores zero at +0x1954 (`sw` at 0x40ebe8).
  `DRILock` (with the word at +8 of `a0` as its first argument, `jalr` at 0x40ece8 and 0x40ed70) runs
  only when the word at +0x19a4 is nonzero and the byte at +0x5a is zero, `FGLStartCP` (with the
  driver pointer and 1 or 0 as its arguments, `jalr` at 0x40ebc0, 0x40ed00, 0x40ed18 and 0x40ed88)
  runs only when the word at +0x19a4 is nonzero, and `R200EngineInit` (`jalr` at 0x40ecd4 and
  0x40ed5c) runs whenever the word at +0x18f0 is zero.
  Every path ends in the block that calls `R200_DGAUnblank` (`bgezall` at 0x40eca8) and returns the
  constant 1 in `v0` (`jr ra` at 0x40ecc0).
  Unknown: whether `DRILock` and `R200_DGAUnblank` touch device registers, since the bundle has no
  callee note for either; their own bundles would settle that.
  The `bgezall` at 0x40eca8 tests the zero register, so `R200_DGAUnblank` is always called.
  The words at +0x198c, +0x1990 and +0x1994 are computed from the mode record: the `sw` at 0x40ec18 stores
  the mode record's +0x1c word divided by its +0x28 word shifted right by 3, the `sw` at 0x40ec4c stores the
  +0x28 word itself, and the `sw` at 0x40ec30 stores the +0x28 word divided by 8 with rounding toward zero
  (shifts of 2, 0x1d and 3 around an add).
  Unknown: the content of the table at 0x468218 and of the fields at +0x1954 and +0x1998, which no datasheet
  excerpt or linked row names.
  Evidence grade: inferred.
- `R200_DGAUnblank` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f3c0 (n32).
  Inferred: it updates three register words of a block in an X11R6 driver module, located
  through the structure at +0xf8 of its first argument and the block pointer at +0x30 of that
  structure, because the inventory lists the offsets +0x54, +0x2d0 and +0x3f8 of that block as
  register rows. A nonzero byte at +0x5a sends it to a single update: when the word at +0x4c is
  1, 2 or 3, it reads the block word at +0x3f8 (the `lw` at 0x40f400) and stores to that word
  (the `sw` at 0x40f414), then returns at 0x40f410; any other value returns at 0x40f3f8 with no
  store. A zero byte at +0x5a takes the other ladder on the same word: 2 reads the block word at
  +0x2d0 (the `lw` at 0x40f440) and stores to it (the `sw` at 0x40f44c), then 1, 2 and 3 all read
  and store the block word at +0x54 (the `lw` at 0x40f450 and the `sw` at 0x40f45c), and any
  other value goes past both. The byte at +0x5d of the structure is then tested (the `lbu` at
  0x40f460): a nonzero byte reads and stores the block word at +0x3f8 (the `lw` at 0x40f46c and
  the `sw` at 0x40f47c) and returns at 0x40f478, and a zero byte returns at 0x40f3f8.
  Each store writes the loaded word with bits cleared: the +0x3f8 stores (0x40f414 and 0x40f47c) clear the
  bits outside a mask built from the `lui` of 0xcf7f and the `ori` of 0xffff (0x40f404 and 0x40f408, and
  0x40f468 and 0x40f470), the +0x2d0 store (0x40f44c) clears the bit selected by the mask -0x3 set at
  0x40f444, and the +0x54 store (0x40f45c) clears the bits selected by -0x701 set at 0x40f454.
  Unknown: the register names behind +0x54, +0x2d0 and +0x3f8, and the window that the block
  belongs to, since the register rows carry no names; a reviewed datasheet register table for
  that block would settle them.
  Unknown: the content of v0 at the three returns, at 0x40f3f8, 0x40f410 and 0x40f478, since
  none of them has a value in the bundle.
  Evidence grade: inferred.
- `R200_DGAWaitForIdle` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40edc0 (n32).
  Inferred: it waits on a word in a block of an X11R6 driver module before the 2D destination
  cache flush, because the callee note for `R200EngineFlush` describes that flush and the
  inventory links offset 0xe40 of the block to this routine as a read row. It takes the
  structure at +0xf8 of its first argument and then the block pointer at +0x30 of that structure
  (the `lw` at 0x40ede0 and 0x40edf4), and calls `FGLMDelay` with 0x1f4 once on entry (the
  `jalr` at 0x40edf0). It then reads the block word at +0xe40 in five consecutive samples, at
  0x40edfc, 0x40ee0c, 0x40ee1c, 0x40ee2c and 0x40ee3c, and each sample leaves for 0x40ee4c as
  soon as bit 31 is clear (the `beq` at 0x40ee04, 0x40ee14, 0x40ee24 and 0x40ee34). The loop
  goes back to 0x40edfc only when the fifth sample also has bit 31 set (the `bne` at 0x40ee44),
  and that path updates no counter. On exit it calls `R200EngineFlush` with the entry value of
  its first argument (the `jalr` at 0x40ee4c) and returns the v0 that call leaves (the `jr` at
  0x40ee64).
  Inferred: the callee note for `FGLMDelay` describes a busy-wait scaled by the measured CPU
  speed, so the 0x1f4 call is a wait before the first sample, and the note for
  `R200EngineFlush` describes the exit call as a flush that waits for the cache to finish.
  Unknown: the register name and the bit 31 field at offset 0xe40, since the register row
  carries no name; the register table of a reviewed datasheet for the block would settle it.
  Unknown: whether the sampling can go on without end, because the loop back has no bound in
  the bundle; the device-side condition that clears bit 31 is not in the bundle, and a capture
  of the block word during the wait would settle it.
  Evidence grade: inferred.
- `R300_Multiplex` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x411c40 (n32).
  Inferred: it updates six register words, at offsets from +0x198 to +0x1b0, of a block in an
  X11R6 driver module, because the inventory links those six offsets to it as register rows
  with no names. It reads the structure at +0xf8 of its first argument, the word at +0xa0 of
  that structure (the `lw` at 0x411c48), and the block pointer at +0x30 (the `lw` at 0x411c68);
  a word of 0x2c or 0x34 takes one path, 0x2d, 0x31 or 0x2f takes a second, and any other value
  returns at 0x411d00 with no store. The first path reads the block words at +0x1a0, +0x198 and
  +0x19c (the `lw` at 0x411cd0, 0x411cd4 and 0x411cd8) and tests the second argument against
  zero (the `beq` at 0x411cdc); it stores the words at +0x198 and +0x1a0 ORed with 1 (the `sw`
  at 0x411cec and 0x411cf4) and the word at +0x19c (the `sw` at 0x411cfc) before it returns at
  0x411cf8, and when the second argument is zero it ORs 0x1 into the word at +0x19c first (the
  `ori` at 0x411d28). The second path reads the block words at +0x1b0, +0x1a8 and +0x1ac (the
  `lw` at 0x411c8c, 0x411c90 and 0x411c98); a zero byte at +0xbe skips the two selector tests
  (the `beq` at 0x411c94 jumps to 0x411ca8), and otherwise the selector 0x2f with a nonzero byte
  at +0x59 (the `lbu` at 0x411d08), or the selector 0x2d, sets the mask to 0x4000 (the `addiu` at
  0x411d18). The mask is 0x80000 (the `lui` at 0x411ca8) in every other case; it is ORed into
  the word stored at +0x1b0 (the `or` at 0x411cb8), and a zero second argument also ORs it into
  the word stored at +0x1ac (the `or` at 0x411d20) before the stores at 0x411cc0, 0x411cc4 and
  0x411ccc and the return at 0x411cc8.
  With a nonzero second argument the first path clears bit 0 of the word at +0x19c (mask -0x2 at 0x411ce0, `and`
  at 0x411ce4) before storing it; with a zero second argument it sets bit 0 instead. On the second path the
  mask ORed in at +0x1b0 (0x411cb8) is also ORed into the word stored at +0x1a8 (0x411cac, `sw` at 0x411cc0),
  and a nonzero second argument clears the mask bits from the word stored at +0x1ac (the `and` of the
  complemented mask at 0x411cbc, `sw` at 0x411ccc) where a zero one sets them (0x411d20).
  Unknown: which of 0x4000 and 0x80000 is stored with the second path's mask at a given run, since the
  bundle lists both mask values and the choice depends on the selector and the byte at +0x59; and the v0 at
  the returns at 0x411cc8, 0x411cf8 and 0x411d00, which have no value in the bundle.
  Unknown: the register names and bit fields behind the six offsets, since the register rows
  carry offsets only; a reviewed datasheet register table for the block would settle them.
  Evidence grade: inferred.
- `RADEONGetTVInfo` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x412680 (n32).
  Inferred: the routine fills TV settings into the record at [a0+0xf8], because the strings it
  logs name TV standards and TV size, position and colour adjustments (0x45d010 to 0x45d128). It
  returns 0 unless the word at +0xb4 of that record is 3 (`beq` at 0x412718) and the word at +0xb0
  is nonzero (`beq` at 0x412744); it then takes the block address as the word at +0xb0 plus the
  word at +0x38 (`lw` at 0x412740 and 0x41274c), reads a 16-bit little-endian value at +0x32 of
  that block (`lbu` at 0x412754 and 0x412758), and adds the word at +0x38 to get the address it
  checks. It logs `Failed to detect TV info using BIOS` (string at 0x45cfa8, `jalr` at 0x412b30)
  and returns 0 when that 16-bit value is zero (`beq` at 0x412764). It logs `Incorrect sig for
  BIOS TV Info block` (string at 0x45cfd0, `jalr` at 0x4127a8) and returns 0 unless the three
  bytes at the address are 0x24, 0x54 and 0x56 (`bne` at 0x412774 and 0x412784, `beq` at
  0x412794). On a matching block it takes the byte at +9 of the address, keeps its low four bits (mask 0xf at
  0x4127cc), shifts them right by 2 (`sra` at 0x4127d0) and stores the result to +0xdc of the record (`lbu` at
  0x4127c8, `sw` at 0x4127dc); a result of 6 or more, which the mask and shift cannot give, would take the path at 0x412ac0, which stores 3 there
  instead (`sw` at 0x412af0). It then sets +0xb8 from the four bits above bit 16 of the word at +0x28 of the pointer in a1
  (shift 0x10 at 0x4127e4, mask 0xf at 0x4127ec), which is the word at +0x30 of the record (`lw` at 0x4127e0):
  a field of 1 becomes 0, 2 becomes 1, 3 becomes 2, 4 becomes 5, 6 becomes 3 and 7 becomes 4, and any other
  value is stored unchanged (`sw` at 0x4127f4, then the stores at 0x412af4, 0x412b08, 0x412b14, 0x412b44,
  0x412b50 and 0x412b5c).
  The
  prologue copies the addresses of the TV standard name strings (NTSC-M through PAL-K1, 0x467a80
  to 0x467ae0) into its frame (`sw` at 0x412694 to 0x412710), then reads the option value with
  `xf86GetOptValString` (option 0x39, `jalr` at 0x412838) and compares it with each name using
  `xf86strcmp` (`jalr` at 0x412864); a match logs `Using TV stanadard %s from configure file`
  (`jalr` at 0x412a90), a loop that ends without a match logs `Invalid TV stanadard %s specified`
  (`jalr` at 0x4128a8), and the loop index then picks an entry of the 15-entry jump table at
  0x45d068 (`jr a0` at 0x412ab8), where three entries set +0xb8 to 0 (one also sets the byte at
  +0xbc to 1, `sb` at 0x412b6c), eight set it to 1, and one each set it to 2, 3, 4 and 5. The
  routine zeroes +0xf4, +0xe0, +0xf0, +0xe8, +0xec, +0xe4 and +0xc0 (`sw` at 0x4128e0 to 0x4128f8)
  and the byte at +0xbf (`sb` at 0x412900), then reads six integer options 0x3a to 0x3f from the
  `R200Options` symbol with `xf86GetOptValInteger` (calls at 0x412908, 0x412940, 0x412978,
  0x4129b0, 0x4129e8 and 0x412a20) into +0xe4, +0xec, +0xe8, +0xf0, +0xe0 and +0xf4, and logs each
  value when its call returns nonzero with `TV HSizeAdj: %d`, `TV VSizeAdj: %d`, `TV HPosAdj: %d`,
  `TV VPosAdj: %d`, `TV HStartAdj: %d` and `TV ColorAdj: %d` (`jalr` at 0x41292c, 0x412964,
  0x41299c, 0x4129d4, 0x412a0c and 0x412a44); it returns 1 after the last one (`jr ra` at
  0x412a58). Unknown: the content of the words at +0xb0, +0xb4 and +0x38 of the record and of the
  bytes at +0x32, +0x33 and +9 of the block; the code that fills that record and the layout of the
  BIOS block would settle it. Unknown: the value in a3 for the `TV stanadard %d` message call at
  0x4128d4; the code around that call would settle it. Unknown: whether the record at [a0+0xf8] is
  device-visible state, since the only linked mmio row, at +0x28, names no window or register; the
  readers of the record's fields in the driver would settle it.
  Evidence grade: inferred.
- `SGIVC_set_gui_vline` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41a680 (n32).
  Writes one packed value into one or both of the words at +0x218 and +0x318 of the block whose pointer is
  the word at +0x30 of the record at [a0+0xf8]; the second argument a1 chooses which. The block pointer is
  loaded from that record (`lw` at 0x41a680 and 0x41a68c), and the value comes from the word X at +0x6c of
  the record at [a0+0xcc] (`lw` at 0x41a684 and 0x41a698), stored as `X | ((X+1) << 0x10)` (`addiu` at 0x41a6a0
  gives X+1, shift 0x10 at 0x41a6a4). With a1 zero (`beq` at 0x41a694) both words are written, the +0x218 store
  (`sw` at 0x41a6b0) in the delay slot of the branch at 0x41a6ac and the +0x318 store (`sw` at 0x41a6c8) in
  the delay slot of the return. With a1 nonzero, bit 0 of a1 (mask 1 at 0x41a688) writes +0x218 and bit 1 of
  a1 (mask 2 at 0x41a690) writes +0x318, so a1 of 1 writes only +0x218 and a1 of 2 only +0x318. The two linked
  mmio rows for +0x218 and +0x318 are width 4 with one site each and name no window or register, so the
  bundle leaves open whether these words are device registers. The routine makes no calls and leaves through
  `jr ra` at 0x41a6c4 or 0x41a6cc.
  Unknown: which quantity the word X at +0x6c of the record at
  [a0+0xcc] holds; the writers of that field in the driver would settle it. Unknown: the v0 value
  left at the returns at 0x41a6c4 and 0x41a6cc; a listing of the caller that tests v0 would settle
  it.
  Evidence grade: established.
- `StartFrameLock` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x420f00 (n32).
  Updates six words at +0x198, +0x19c, +0x1a0, +0x1a8, +0x1ac and +0x1b0 of the block whose
  pointer is the word at +0x30 of the record at [a0+0xf8], and picks one of two update sequences
  by whether the word at +0x245c of that record is zero (`lw` at 0x420f04, `beq` at 0x420f0c). In
  the delay slot of that branch it stores zero to the word at +0x2460 of the same record (`sw` at
  0x420f10), so that word is zero on both paths. When the word at +0x245c is nonzero, it ORs
  0x3000 into +0x198 (`sw` at 0x420f1c), ORs 0x500 into +0x1a8 (`sw` at 0x420f4c) and into +0x1b0
  (`sw` at 0x420f6c), combines the words at +0x19c, +0x1a0 and +0x1ac with constants before
  storing them back (`sw` at 0x420f30, 0x420f40 and 0x420f5c), and returns the value stored to
  +0x1b0 (`jr ra` at 0x420f68). When it is zero, it ORs 0x13400 into +0x198 (`sw` at 0x420f80),
  0x3000 into +0x1a0 (`sw` at 0x420fa0), 0x500 into +0x1a8 (`sw` at 0x420fac) and +0x1b0 (`sw` at
  0x420fcc), combines +0x19c and +0x1ac with constants (`sw` at 0x420f94 and 0x420fc0), sets the
  word at +0x2460 to 1 (`sw` at 0x420fd8), and returns from 0x420fd4. The routine makes no calls,
  and the six linked mmio rows at these offsets read and write four bytes each with 10 to 18 sites
  apiece, but name no window or register, so the bundle leaves open which device block these words
  belong to. Unknown: which device condition the word at +0x245c of the record at [a0+0xf8]
  reflects; the code that writes that field in the driver would settle it. Unknown: who reads the
  word at +0x2460, which the routine sets to 0 on both paths and to 1 on the path that ends at
  0x420fd4; the readers of that record field in the driver would settle it. Unknown: the v0 value
  at the return at 0x420fd4; the test of v0 in each caller would settle it.
  Evidence grade: established.
- `StopFrameLock` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x421000 (n32).
  Clears bits in the words at +0x198, +0x19c, +0x1a0, +0x1ac and +0x1b0 of the block whose pointer is
  the word at +0x30 of the record at [a0+0xf8], then zeroes the word at +0x2460 of that record, with no branch
  in between. It first ORs 0x3000 into +0x198 (`sw` at 0x421010). It then ANDs the words at +0x19c (`sw` at
  0x421020) and +0x1a0 (`sw` at 0x42102c) with -0x3001, which clears the 0x3000 bits, and the words at +0x1ac
  (`sw` at 0x42103c) and +0x1b0 (`sw` at 0x421048) with -0x501, which clears the two bits of its complement. Last, the word at
  +0x198 is reloaded at 0x42104c, ANDed with the same -0x3001 and written back at 0x421054, so the 0x3000 bits
  set at 0x421010 are cleared again. The zero store to +0x2460 sits in the delay slot of the `jr ra` at
  0x421058 (`sw` at 0x42105c), so it runs on the way out. The routine makes no calls, and the five linked
  mmio rows for +0x198, +0x19c, +0x1a0, +0x1ac and +0x1b0 read and write four bytes each with 10 to 18 sites
  apiece, but name no window or register; no linked row covers +0x2460.
  Unknown: which fields the cleared bits select; the register map for the block would settle it.
  Unknown: the v0 value that the return at 0x421058 leaves, which is the +0x198 word written at 0x421054; the
  tests of v0 in its callers would settle how it is used.
  Evidence grade: established.
- `Switch_Table` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x443e40 (n32).
  Reads, then rewrites, the word at +0x8ac of the block whose pointer is the word at +0x30 of the
  record at [a0+0xf8], and the argument a1 chooses the constants set before that update. A1 of 0
  (`beq` at 0x443e58) sets t1 and t3 to 0 and a7 to 0xffffffffe0ffffff (0x443ea4 to 0x443eb4), and
  a1 of 1 (`beq` at 0x443e64) or 2 (`beq` at 0x443e6c) sets t1 to 0xb000000, t3 to 0 and a7 to
  0xffffffffebffffff (0x443f1c and 0x443f30). A1 of 3 (the `bne` at 0x443e74 falls through) tests
  the word at +0xb8 of the record at [a0+0xf8] against 1, 3 and 4 (`beq` at 0x443e80, 0x443e88 and
  0x443e90), sets t1 to 0x15000000 and a7 to 0xfffffffff5ffffff (0x443e98 and 0x443ea0), and any
  other a1 takes the `bne` at 0x443e74 to a return at 0x443f14 with no store. Each of the a1
  values 0 to 3 then reaches the shared update at 0x443ec0, in three read-modify-write stages on the word at
  +0x8ac. The first keeps only the low three bytes (mask from the `lui` of 0xff and `ori` of 0xffff at 0x443e50 and
  0x443e54, `sw` at 0x443ec8). The second reloads it, clears bits with the a1 path's
  mask (built from the `lui` of 0xe0ff for a1 of 0, 0xebff for 1 and 2, 0xf5ff for 3, with 0xffff ORed in) and
  ORs in the a1 path's value (0, 0xb000000 or 0x15000000; `sw` at 0x443ee0). The third
  runs only for a1 of 2 or 3 (`beq` at 0x443ee8 against 2, `bne` at 0x443ef0 against 3): it clears two
  bits of the reloaded word with the mask built from the `lui` of 0x9fff at 0x443ed8 and ORs in a flag that is 0
  for a1 of 2, 0x40000000 for a1 of 3, or 0x20000000 when the word at +0xb8 equals 1
  (`lui` at 0x443e94 and 0x443f4c; `sw` at 0x443f00). Every path ends by reloading the word, ORing in its top
  bit (`lui` of 0x8000 at 0x443ed0, `or` at 0x443ef4 and 0x443f08), storing it back at 0x443f10 and returning
  it in v0 (`jr ra` at 0x443f0c).
  The routine
  makes no calls, and the linked mmio row for +0x8ac is width 4, read and written, with 17 sites,
  but names no window or register. Unknown: the v0 value that the return at 0x443f14 leaves
  for an a1 outside 0 to 3; a caller that reads v0 back would settle it.
  Evidence grade: established.
- `r200_RegisterRingBufferLocation` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42bf80 (n32).
  It acts on the first argument's record at +0x44, +0x700, +0x704 and +0x718, the second
  argument's record at +0x48, +0xd4, +0xe0 and +0xe4, and the third argument's word at +0x210. The `ld` at 0x42c030
  reads a doubleword from the second argument at +0x48. The `sw` at 0x42c03c writes the low 32 bits of it to the
  first argument's +0x700 word. The `sw` at 0x42c044 writes 0x2000000 to the first argument's +0x44 word, with
  ordering barriers between these stores. The `sw` at 0x42bfb0 writes the first argument's +0x718 word as the second argument's +0xe0 word
  ORed with the top bits of the old +0x718 word kept by a mask built from the `lui` of 0xf000 at 0x42bf9c.
  The first argument's +0x704 word is loaded at 0x42bfbc, and the
  routine calls `LogBase2` (0x42bfc4) on every path with the third argument's +0x210 word, loaded in the delay
  slot at 0x42bfc8. The +0x704 word is then rebuilt: its old bits are masked with the value built from 0xfff3
  and 0xc0c0 (0x42bfd0, 0x42bfdc), the `LogBase2` result minus 1 limited to six bits (`addiu` at 0x42bfd8, mask
  0x3f at 0x42bfe0) and 0x3f00 (0x42bff8) are ORed in, and the word is stored at 0x42c024. When the second
  argument's +0xe4 word is not 4 (the `bne` at 0x42bff4 goes to 0x42c020), that word shifted left by 0x12 is
  also ORed in and the routine returns the `LogBase2` value. When +0xe4 is 4 the routine returns 2 (the constant
  at 0x42c000) and the +0xd4 word, limited to three bits (mask 7 at 0x42c004), picks the extra bit: 2 ORs in
  0x40000 (0x42c060), 1 adds nothing, and any other value ORs in 0x80000 (0x42c01c).
  Unknown: whether
  the first argument is a device register block, since the inventory links offsets 0x44, 0x700,
  0x704 and 0x718 to mmio rows that carry no register names; a committed entry for a caller that
  passes the record would settle it. Unknown: the value `LogBase2` returns for the third
  argument's +0x210 word, since no committed entry for `LogBase2` is linked; that entry would
  settle it.
  Evidence grade: established.
