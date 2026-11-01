# The FireGL X server module: one entry per routine

`usr/X11R6/lib/modules/drivers/fglrx_drv.so` is the XFree86 video driver ATI ships for the FireGL cards. It is an N32 shared object with a dynamic symbol table and no `.mdebug` section. Its routines are named `R200...` whichever chip is fitted. Each entry names a routine, its size and address in this build, what it reads and writes, and how every exit leaves it.

Addresses are virtual addresses in the file. The screen record is the XFree86 screen information record the server passes as the first argument: the word at +12 is the screen number the message routine takes, and the word at +248 leads to the driver's own record. The driver record holds the mapped register aperture as the word at +48, the chip code as the word at +160 and a cached count of free command-FIFO entries as the word at +6412 (see `R200WaitForFifoFunction`). A register offset below is a byte offset into that aperture; the public name beside it comes from the Linux and X.Org register headers and is inferred from the offset alone. Callee names come from the global offset table (gp is 0x46f0e8). A routine with no symbol is named by its address, `sub_<address>`. Labels follow `AGENTS.md` section 5: **established** means the whole body was read instruction by instruction.

## Command-FIFO accounting, engine reset and engine restore

- `R200WaitForFifoFunction` (`fglrx_drv.so`, 192 bytes at address 0x40a300): waits until the 2D engine has at least a requested number of free command-FIFO entries.
  The first argument (a0) is the screen record and the second (a1) is the entry count wanted.
  It loads the aperture through the screen record, then loops: it reads the word at register 0xe40 (the public `RBBM_STATUS`), masks it with 0x7f (the public `CMDFIFO_AVAIL` field), stores the masked count at driver record +6412 on every pass (the store at 0x40a35c sits in the delay slot of the exit branch), and leaves when the count is not below a1 (a signed compare).
  After 2000000 passes (0x1e8480) it calls `xf86DrvMsg` with the screen number, level 5 and the message "FIFO timed out, resetting engine...", then `R200EngineReset`, then `R200EngineRestore`, zeroes the pass counter and loops again, so the only way out is a large enough count.
  It sets no return value on its single exit at 0x40a3b8.
  `R200EngineRestore` decrements the stored count as it queues register writes, so +6412 is a cache of the free-entry count that this routine refreshes. **Established.**
- `R200WaitForIdle` (`fglrx_drv.so`, 200 bytes at address 0x40a3c0): waits for the 2D engine to go idle, then flushes it.
  It first calls `R200WaitForFifoFunction` with a0 unchanged and a1 equal to 64, so it waits for a count of at least 64 free entries before it looks at the busy bit.
  It then reads the word at register 0xe40 and tests bit 31 (the public `GUI_ACTIVE` bit), up to 2000000 times; the loop ends the first time the bit reads clear.
  When the 2000000th read still shows the bit set it calls `xf86DrvMsg` with level 5 and the message "Idle timed out, resetting engine...", then `R200EngineReset` and `R200EngineRestore`, zeroes the counter and polls again.
  Once idle it calls `R200EngineFlush` and returns without setting a value of its own, so v0 is whatever `R200EngineFlush` left. **Established.**
- `R200EngineFlush` (`fglrx_drv.so`, 92 bytes at address 0x40a540): flushes the 2D destination cache and waits for the flush to finish.
  It reads the word at register 0x342c (the public `RB2D_DSTCACHE_CTLSTAT`), sets its low four bits (0xf, the public `RB2D_DC_FLUSH_ALL` value) and writes it back at 0x40a560.
  It then reads the register again, unrolled twice per loop, and stops when bit 31 (the public `RB2D_DC_BUSY`) reads clear or when 2000000 reads have been made; the count-out case leaves silently, with no message.
  It makes no call and sets no return value. **Established.**
- `R200EngineReset` (`fglrx_drv.so`, 436 bytes at address 0x40a5c0): resets the 2D and 3D engine blocks and waits for the memory controller.
  It calls `R200EngineFlush`, then the unlabelled `sub_409e40` with the aperture as its argument, reached through a `bgezall` at 0x40a600.
  `sub_409e40` polls register 0xe40 bit 31; it reads the register up to 2000000 times, then makes 200 more reads each followed by a `sginap` call with argument 0, and returns 0 as soon as the bit reads clear or 1 when it never does.
  A return of 1 makes `R200EngineReset` call `xf86DrvMsg` with level 5 and the message "Timeout at __fglQSQuietDown...", then `xf86exit` with 1.
  Otherwise it rewrites the word at register 0x8 (the public `CLOCK_CNTL_INDEX`) with the low six bits set to 0xd, writes it again with 0x8d (bit 7 set, the public write-enable bit), reads the word at 0xc (`CLOCK_CNTL_DATA`) into s2 and writes it back with 0x1fff8000 ORed in.
  It then writes 0 to register 0x740 (`CP_CSQ_CNTL`), 0x79 to 0xf0 (`RBBM_SOFT_RESET`; bits 0, 3, 4, 5 and 6, the public CP, RE, PP, E2 and RB blocks) and 0 to 0xf0 again, reading each register back after the write.
  It polls register 0xe40 bit 31 with no count limit until it clears (one read, then a loop of five reads).
  It then reads register 0x150 and, with no limit on the number of reads, calls `FGLMDelay` with 500 between reads until the wanted bit is set: when the chip code at driver record +160 is 44, 45 or 52 it waits for bit 4 of the register, and for any other code it waits for bit 2.
  Last it rewrites register 0x8 with the six index bits 0xd and bit 7 set, stores the saved word from s2 back to register 0xc and clears bit 7 of register 0x8.
  It returns without setting a value. The sequence reads as: force the engine clocks on through the PLL register at index 0xd, soft-reset the engine blocks, wait for the memory controller, restore the PLL data word. **Inferred:** the reading of index 0xd as the public `SCLK_CNTL` and of register 0x150 bits as memory-controller idle comes from the public register names; the code itself only shows the offsets, masks and order.
- `R200EngineRestore` (`fglrx_drv.so`, 468 bytes at address 0x40a780): programs the 2D engine's default state, spending cached FIFO entries as it goes.
  Before each write group it compares the cached count at driver record +6412 with what the group needs and, when the count is too small, calls `R200WaitForFifoFunction` (with 1, or 7 for the last group) to refresh it, then stores the reduced count back.
  The writes, in issue order: register 0x3428 (`RB2D_DSTCACHE_MODE`) set to 0, skipped when the chip code at +160 is 44, 52 or 45; then `R200SelectBuffer` is called with a0 the screen record and a1 the address driver record +9256, which writes register 0x16e0; the word at 0x16c4 (`DP_DATATYPE`) ANDed with 0xdfffffff (bit 29 cleared); 0x1fff1fff to 0x16e8 (`DEFAULT_SC_BOTTOM_RIGHT`); the word at driver record +6428 ORed with 0x30d0 to 0x146c (`DP_GUI_MASTER_CNTL`); then seven writes in this order: 0 to 0x1600, 0 to 0x1604, 0xffffffff to 0x147c, 0 to 0x1478, 0xffffffff to 0x15d8, 0 to 0x15dc and 0xffffffff to 0x16cc (`DST_LINE_START`, `DST_LINE_END`, `DP_BRUSH_FRGD_CLR`, `DP_BRUSH_BKGD_CLR`, `DP_SRC_FRGD_CLR`, `DP_SRC_BKGD_CLR`, `DP_WRITE_MASK`).
  It ends by calling `R200WaitForIdle` and returns with v0 as that call left it.
  The word ORed into 0x146c is the one `R200EngineInit` builds at +6428. **Established.**
- `R200EngineInit` (`fglrx_drv.so`, 452 bytes at address 0x40aa40): sets the engine's cached state at start-up and places the framebuffer in the memory controller's address range.
  It maps the word at driver record +6544 to a datatype code: 8 gives 2, 15 gives 3, 16 gives 4, 24 gives 5 and 32 gives 6; any other value calls `xf86exit` with 1 and the code continues with 6.
  It stores, in order, 0 at +6760, 8191 at +6764, 0 at +6768, 0x1fff0000 at +6772, 0 at +6776 and 0 at +6784, then the word (code << 8) | 0x10000000 at +6428; the last store, 0x07ff07ff at +6780, is in the delay slot of the branch that tests the byte at driver record +90.
  A nonzero byte at +90 returns there. With a zero byte it fetches the first entity index from the screen record's word at +220, calls `xf86GetEntityPrivate` with it and the value of `gR200EntityIndex`, writes 0 to register 0x1c3c (`RB3D_CNTL`) in the delay slot of the call to `R200EngineReset`, and then writes in order: 0xffff0000 to register 0x148 (`MC_FB_LOCATION`), the low word of the doubleword at +32 to register 0x23c (`DISPLAY_BASE_ADDR`), the same word to 0x33c (`CRTC2_DISPLAY_BASE_ADDR`), each followed by a `sync`.
  It then calls `FGLMDelay` with 5 and writes register 0x148 again with ((base + size - 1) & 0xffff0000) | (base >> 16), where base is the doubleword at +128 and size the word at +188 of the record whose address is the first word of what `xf86GetEntityPrivate` returned.
  It ends by calling `R200EngineRestore` and returns with v0 as that call left it. **Established.**
- `R200SelectBuffer` (`fglrx_drv.so`, 72 bytes at address 0x40ccc0): makes a buffer record the engine's default destination.
  It passes a0 and a1 unchanged to `sub_40cbc0`, reached through a `bgezall` at 0x40cce8, and stores the result at register 0x16e0 (the public `DEFAULT_OFFSET`) through the aperture word at driver record +48; the same value is left in v0.
  The aperture is loaded in the delay slot of that `bgezall`. **Established.**
- `sub_40cbc0` (`fglrx_drv.so`, 208 bytes at address 0x40cbc0, no symbol): packs a buffer record into the word `R200SelectBuffer` writes to register 0x16e0.
  The word at +8 of the record in a1 is a tile mode: 1, 2, 3 and 4 map to 0, 1, 2 and 3, which go into bits 31:30; any other value calls `xf86DrvMsg` with level 5, the message "%s - unknown primary tile mode" and the file name "R200_accel.c", and uses 0.
  Bits 29:22 of the result hold the word at +24 shifted right by 6 and bits 21:0 hold the doubleword at +40 shifted right by 10, which matches the public `DEFAULT_OFFSET` layout (pitch in 64-byte units, offset in 1 KB units, tile mode in the top two bits).
  It returns the packed word in v0 from the delay slot of its return at 0x40cc68. **Established.**
- `R200INPLL` (`fglrx_drv.so`, 24 bytes at address 0x410dc0): reads one PLL register through the index and data pair.
  It stores the second argument (a1) masked with 0x3f as a single byte at aperture +11, the last byte of the dword at register 0x8, then returns the word at aperture +12 (register 0xc), loaded in the delay slot of the return.
  It writes no other byte and makes no call. **Established.**
- `R200WaitForVerticalSync` (`fglrx_drv.so`, 140 bytes at address 0x410e00): waits for a vertical-blank event on one CRTC.
  A nonzero second argument (a1) selects the second CRTC: it writes 0x40 to register 0x44 (the public `GEN_INT_STATUS`) and polls for bit 6 of the same register; a zero argument writes 0x04 and polls bit 2, the first CRTC.
  The poll makes up to 2000000 reads (0x1e8480) and stops as soon as the bit is set; running out of reads returns silently.
  It makes no call and sets no return value. **Established.**

## Screen set-up

- `R200AdjustFrame` (`fglrx_drv.so`, 1048 bytes at address 0x422680): moves the displayed window to a new origin on one CRTC.
  The arguments are the screen number (a0), x (a1) and y (a2); the screen record comes from `xf86Screens`.
  If the word at driver record +7820 is 2 or more it zeroes the screen record words at +176 and +180 and copies +156 to +184 and +160 to +188.
  A value of 2 then sets y to 0 and x to the word at +8012 minus the word at +7828 (just +8012 when +7828 is zero), or both to 0 when the word at +7824 is zero; a value of 3 sets x to 0 and y to the word at +8032 minus +7828 under the same two conditions; larger values leave x and y alone.
  The start offset comes from the unlabelled `sub_422540`, called with the screen record, x, y and a result pointer through a `bgezall` at 0x4227a0, or with x and y both 0 through a `bgezall` at 0x422750 when the chip code at driver record +160 is 44, 45 or 52 and the word at +8160 is nonzero.
  `sub_422540` with the word at driver record +8160 zero returns bytes-per-pixel (the word at screen record +72 shifted right by 3) times (x plus y times the display width at screen record +172).
  With +8160 nonzero it uses 256-byte by 8-row tiles: 8 times bytes-per-pixel times display width times (y >> 3), plus 2048 for each whole tile of 256 divided by bytes-per-pixel pixels in x, plus 256 times (y and 7), plus bytes-per-pixel times the remaining x.
  At 24 bits per pixel it rounds the result down to a multiple of 24, then adds the screen record word at +816 and stores the sum through the pointer.
  The writes depend on the byte at driver record +90 and on which call was made.
  With the 0x422750 call (zero x and y) and +90 nonzero it writes the offset to register 0x324 (`CRTC2_OFFSET`), ORs 0x200 into 0x328 (`CRTC2_OFFSET_CNTL`) and, after a read, writes (y << 16) or x to register 0x358.
  With the 0x422750 call and +90 zero it writes the offset to 0x224 (`CRTC_OFFSET`), ORs 0x200 into 0x228 (`CRTC_OFFSET_CNTL`), adding 0x40 when the word at +9208 is nonzero, reads 0x350 and 0x354 once each, and writes the packed (y << 16) or x to 0x350; when +9208 is nonzero it also writes the offset plus (doubleword at +7336 minus doubleword at +7048) to 0x220 (`CRTC_OFFSET_RIGHT`), the packed value to 0x354, and ORs 0x108000 into register 0x428 under the mask 0xfe007fff.
  With the 0x4227a0 call and +90 nonzero it writes the offset to register 0x324; when +8160 is nonzero it first replaces the low four bits of 0x328 with the C remainder of y by 16, truncated to four bits.
  With the 0x4227a0 call and +90 zero, a nonzero +8160 puts the same remainder in the low four bits of 0x228; the offset then goes to 0x224, after adding the word at +7032 if the word at +9204 is nonzero and +9208 is nonzero, and when +9208 is nonzero 0x220 gets the offset plus (doubleword at +7336 minus doubleword at +7048).
  All paths then reach one tail, which returns at once (0x4228ac) unless the screen record word at +268 is nonzero, the word at +72 is 32 and the driver record word at +8332 is nonzero.
  The tail writes register 0x440 with the word at +8336 plus twice (x plus y times the screen record word at +156), register 0x400 with 0, and register 0x404 with ((height minus 1) << 16) or (width minus 1), where width and height are the words at +24 and +44 of the record at driver record +6552.
  For chip codes 47 and 49 the width-1 term is replaced by 0x5ff when the width is above 1536, and register 0x424 is written with 0x100000 when the word at driver record +9316 is nonzero, otherwise with ((height << 16) divided by the word at driver record +360) << 4; a zero divisor traps.
  The routine never sets v0; it returns at 0x42288c, 0x4228ac and 0x42293c. **Inferred:** the second-head reading of the byte at +90 and the overlay reading of registers 0x400 to 0x440 rest on the public register names for those offsets; the code shows only the offsets and the order.
- `R200ScreenInit` (`fglrx_drv.so`, 5328 bytes at address 0x41a700): the server's screen-initialisation hook for one screen. It fetches the driver record, sizes the framebuffer, starts the engine and registers the framebuffer, cursor, colour-map, DRI and overlay layers.
  The first argument (a0) is the screen index passed on to the message routine and the second (a1) is the server's screen pointer, whose first word indexes `xf86Screens`.
  It stores the constant 0x0a3b043e at driver record +7796 and calls `R200SGIVCGetDefMode`; a nonzero result becomes the current mode (screen record +204), otherwise the existing one is kept.
  The virtual width (screen record +156, +172) is the larger of that mode's width (mode +24) and the driver record word at +9332, and the virtual height (+160) the larger of mode height (+44) and the word at +9336; the viewport origin (+176, +180) is centred and clamped inside the virtual area.
  When the aperture word at driver record +48 is zero it calls `R200MapMMIO`; a zero result logs "MapMMIO failed" at level 5 and returns 0.
  It calls `sub_41da80`, then `miClearVisualTypes`, `miGetDefaultVisualMask` and `miSetVisualTypes`, returning 0 if the last fails, and later `miSetPixmapDepths`.
  With the word at driver record +8160 nonzero it returns 0 after a level-5 "Screen width alignment requirement violated!" message when the low byte of (width times the word at +6548) is nonzero.
  It fills the DRI sizing words at +9264 to +9288, calls `R200DRIScreenInit` when the words at +6384 and +6556 are zero and logs "front overlay", "back overlay" and "video overlay" addresses on success; on failure it prints a block of star-bordered messages ("DRI initialization failed!", "2D acceleraton available (MMIO)", "no 3D acceleration available") and sets +6556.
  It then calls `R200EngineInit` when the word at +6384 is zero, and `fbdevHWModeInit` (or `sub_422040` when the word at +24 is zero), `R200CloneAdjustFrame` when a clone record exists at +108, `fbScreenInit`, `fbPictureInit` (after `sub_419f40`), `xf86SetBlackWhitePixels`, `xf86InitFBManager`, `miInitializeBackingStore`, `xf86SetBackingStore`, `xf86SetSilkenMouse`, `miDCInitialize`, `R200CursorInit` unless option 2 of `R200Options` is set, `miCreateDefColormap`, `xf86HandleColormaps` (or `FIREGL_OverlayHandleColormaps` for a 32-bit screen with an overlay), `xf86DPMSInit` and `R200AccelInit`.
  It then calls `R200DGAInit`, `R200DRIFinishScreenInit` when DRI is up, `QBS_FinishInit` when the word at +9208 is nonzero, `FGLRXAddExtension`, `ATIHPVAddExtension` when the word at +9324 is nonzero, `ATITVoutAddExtension`, `R200SGIVCAttach`, `R200ReadDisplayRegisterInfo`, `SGIGLXSwapBarrierInit` and `SGIGLXHyperpipeInit`, and `R200_driLockInit` when DRI is up.
  With DRI up it also calls `xf86ioctl` with request 0x6667000a, a string built by `xf86sprintf` from ":%s.%d" and the display name and screen number, and the screen size.
  It stores replacement function pointers into the server screen record (words at +128, +136 and +344, saving the previous values at driver record +6372 and +6376), then `xf86ShowUnusedOptions` runs on the first server generation.
  Exits: 0 on each failed step (for example at 0x41a9c0, 0x41b288 and 0x41b4c4), 1 at 0x41b124 when the whole sequence completes.
  The routine is 5328 bytes with about thirty failure paths; it was read through the call facts, the instruction listing and a decompiler listing, with the branch conditions between calls not all re-derived. **Inferred.**

## Timing, board lookup and small helpers

- `FGLMDelay` (`fglrx_drv.so`, 188 bytes at address 0x424640): busy-waits for a count scaled by the measured CPU speed.
  It reads the cycle counter through the stub at 0x424540, which jumps to the imported `rdrtc` (two reads, each a `bgezall` at 0x424674 and 0x4246b8), multiplies the zero-extended first argument (a0) by the word `gulCPUSpeedMHz` points to (the load is `lwu`), and polls the counter until the elapsed value is no longer below that product (a signed compare).
  The elapsed value is the new reading minus the first; when the new reading is smaller the code adds the doubleword at 0x467ea0 plus one, and that doubleword holds -1, so both branches compute the same 64-bit difference.
  `FGLCalculateCPUSpeed` at 0x424580 sets the speed word from a counter difference shifted right by 20, so a0 is a count of microseconds if the counter ticks at the CPU rate. **Inferred:** the unit rests on that shift and the name, not on a documented counter rate.
  It returns with no value set. **Established.**
- `R200GetBoardNumberFromScreen` (`fglrx_drv.so`, 132 bytes at address 0x447d40): returns the board number of a screen, scanning it from the device node name the first time.
  The argument (a0) is a screen index into `xf86Screens`; the driver record's word at +9340 points to a record whose word at +76 caches the number.
  A cached value that is not negative is returned at once (exit 0x447d84, with v0 loaded at 0x447d74).
  Otherwise it calls `xf86sscanf` with the string at +148 of the record the driver record's word at +4 points to, the format "/dev/dri/fglrx%d" and the address of a stack word, stores that word at +76 of the cache record and returns it (exit 0x447dbc).
  The result of `xf86sscanf` is not tested, so a name that does not match returns the stack word as it stood. **Established.**
- `SDBsetHeader` (`fglrx_drv.so`, 120 bytes at address 0x4597a4): sets the version halfwords and the text field of a database handle's header.
  The record is the word at +8 of a0.
  A nonzero a1 points to two halfwords that are copied to record +8 and +10; a zero a1 stores 0 in both.
  A zero a2 is replaced by the address 0x467e7a, an empty string; the routine then calls `strncpy` with destination record +12, that source and a length of 100 (no terminator is forced), and returns its result. **Established.**
- `R200_driLockInit` (`fglrx_drv.so`, 872 bytes at address 0x44d540): wraps the server's screen and cursor hooks with versions that take the DRI hardware lock.
  The argument (a0) is the server's screen structure; the routine reads its first word as the index into `xf86Screens` and loads the pointer-handling private through `miPointerScreenIndex`.
  When `serverGeneration` differs from the word at 0x468200 it calls `AllocateScreenPrivateIndex` and `AllocateGCPrivateIndex`, stores the results in `R200_lockScreenIndex` and `R200_lockGCIndex`, returns 0 when either is negative and records the generation.
  It then calls `AllocateGCPrivate` with the stored GC index and size 8, and `Xalloc` with 124; a zero from either returns 0.
  It stores the 124-byte block in the screen's private array at `R200_lockScreenIndex`.
  For 21 function-pointer words of the screen structure it saves the old pointer in the block and installs a routine from the range 0x44d8c0 to 0x44ed00; the first word handled is at +128 (saved at block +4) and the last at +184 (saved at block +116).
  It does the same for five words of the screen information record at +1032 to +1048 (saved at block +88 to +104) and for the first word of the pointer private, saved at block +108 and replaced by the address of `R200_lockSpriteFuncs`.
  It returns 1 at 0x44d838.
  A failed allocation in either index path returns 0 at 0x44d84c. The installed routines take the lock according to their symbol names; their bodies lie outside this entry. **Established.**
- `FIREGL_OverlayCollectUnderlayRegions` (`fglrx_drv.so`, 156 bytes at address 0x43d040): returns the region record for the overlay's underlay area, creating an empty one when none exists.
  It takes the pointer a0 (the server's screen structure) and a1 (where to put the result); the record is the first word of the private found at the word at a0 +128 plus four times the index at 0x467ec8.
  When that first word is nonzero it stores the address 24 bytes into the record at *a1 and returns 0.
  When it is zero it calls `miRegionCreate` with two zero arguments, stores the new region at *a1, passes the screen and the region to `sub_43d3c0` (a `bgezall` at 0x43d0bc) and returns 1. **Established.**
- `miRegionBreak` (`fglrx_drv.so`, 124 bytes at address 0x437bc0): empties a region record.
  When the word at +8 of a0 is nonzero and the word it points to is nonzero, it calls `Xfree` with that pointer.
  It then stores the address 0x4681c8 at +8 and copies four halfwords read from 0x4681c0, 0x4681c2, 0x4681c4 and 0x4681c6 to +0, +2, +4 and +6, in the order +8, +0, +2, +4, +6, and returns 0 on every path. **Established.**
- `FIREGL_EnableOverlay` (`fglrx_drv.so`, 244 bytes at address 0x43e680): shows or hides the colour overlay on one screen.
  A zero second argument calls `FIREGL_HideOverlay` with a0 unchanged and returns.
  Otherwise it fetches the entity private with `xf86GetEntityPrivate`; when the word at driver record +7820 is below 2 it calls `FIREGL_ShowOverlay` with zeros for the second and third arguments, the words at +7168 and +7172, the difference between the word at +6712 and the doubleword at +176 of the record the entity private's first word points to, and half the word at +7176.
  In every non-zero case it then stores 0xf81f in the halfword at a table address plus twice the screen word +264 (the store is in the delay slot of the call) and calls `FIREGL_OverlayLoadPalette` with three zero arguments, returning its result. **Established.**
- `QBS_EnableOverlay` (`fglrx_drv.so`, 200 bytes at address 0x43f0c0): the stereo-mode variant of the overlay switch.
  A zero second argument calls `FIREGL_HideOverlay`.
  Otherwise, when the word at driver record +7820 is below 2 and the first word of the record the entity private points to is zero, it calls `FIREGL_ShowOverlay` with zeros for the second, third and sixth arguments, the words at +9272 and +9276, and half the word at +9280.
  Nothing is loaded into the palette. It sets no return value of its own. **Established.**
- `XF86SerFGLDRIGetDrawableInfo` (`fglrx_drv.so`, 504 bytes at address 0x42b680): the server-side handler that returns a drawable's clip information to a direct-rendering client, with a correction for the colour overlay.
  The second argument (a1) is a screen number, the third (a2) a drawable ID; a3 to a7 and three stack words are passed on, and the last two stack words (at 236(sp) and 244(sp)) are pointers to the client's clip count and clip list.
  It calls `SecurityLookupDrawable` with the ID, 0 and 1; when that returns zero it calls `LookupIDByType` with the ID and `__glXWindowRes` and returns 0 if that fails too (exit 0x42b848), otherwise the drawable is the first word of the record found.
  It then calls `DRIGetDrawableInfo` with the screen, the drawable and the forwarded values, and returns 0 when that returns zero (exit 0x42b850).
  After a success it returns 1 on every path. Only when the screen information record has a nonzero word at +268 and a depth word at +72 equal to 32 does it adjust the answer: if the drawable's word at +52 is zero it requires the client's count to equal 1, else equal to the word at +4 of that record, and it requires the client's list pointer to equal the drawable address plus 44 (or the record plus 8); on a match it calls `FIREGL_OverlayGetPrivateClips` and, when that returns nonzero, overwrites the count with the word at +4 of the record at the clips structure's +8 (1 when that pointer is zero) and the list pointer with that record plus 8, or the clips structure itself when the pointer is zero. **Established.**
- `R200DGAInit` (`fglrx_drv.so`, 488 bytes at address 0x40e900): publishes the framebuffer's direct-access modes to the server.
  It looks up the screen record through the first word of a0 and calls the unlabelled `sub_40e640` twice through a `bgezall` (0x40e998 and 0x40e9e8).
  Both calls pass the screen record, a list head (0 the first time, the first call's result the second time), the address of a stack word that receives a count, 32, 24, a flag that is 1 only when the screen record's depth word at +72 is 32, the display width at +172 when the depth is 32 (0 otherwise), and the masks 0xff0000, 0xff00 and 0xff; the last argument is 4 on the first call and 5 on the second.
  It stores the final list at driver record +6476 and the count at +6480, zeroes +6500, +6516, +6520, +6524 and +6528, and stores the addresses 0x40f240, 0x40eb00, 0x40eec0 and 0x40ee80 at +6496, +6504, +6508 and +6512.
  When the word at driver record +6388 is nonzero it also stores 0x40edc0 at +6516, 0x40ef40 at +6520 when that record's words at +28 and +36 are both nonzero, and 0x40f100 and 0x40f000 at +6528 and +6524 when its words at +16 and +24 are both nonzero.
  It ends by calling `DGAInit` with a0, the address driver record +6496, the list and the count, and returns that call's value. **Inferred:** the stored addresses come from the decompiler's rendering of table-relative constants checked against the call facts, not instruction by instruction; `sub_40e640` itself was not read.

## Gamma, database and file helpers

- `R200SGIVCSetDefGamma` (`fglrx_drv.so`, 144 bytes at address 0x44aac0): loads a default gamma value from the system configuration file.
  It opens the file named "/etc/config/system.glGammaVal" with mode "r" through `xf86fopen` and returns if that fails.
  It reads one value with `xf86fscanf` using the format "%f\n" into a stack float; only when the call returns 1 does it store that float to the three floats at a0, in the order +0, +4, +8.
  It closes the file with `xf86fclose` on every path that opened it and sets no return value. **Established.**
- `SDBcloseReadDatabase` (`fglrx_drv.so`, 184 bytes at address 0x459b60): closes a read-only database handle and frees it.
  Three frees go through one indirect call: the function at +12 of the structure the global-table slot at gp-32436 addresses.
  If the handle's word at +172 is nonzero that function frees it and the word is zeroed.
  If the word at +0 is nonzero, the method at +28 of the table the object's word at +4 points to runs on the object, the object is freed and +0 is zeroed.
  A nonzero word at +4 is then compared with the address of `__iob` (the global-table slot at gp-31768); when it differs `fclose` is called on it, and in both cases +4 is zeroed, the zeroing for the `fclose` case being in the delay slot of the jump back.
  Last the handle itself is freed through the same indirect call; the routine returns what that call returns. **Established.**
- `tryexcept` (`fglrx_drv.so`, 504 bytes at address 0x42ccc0): writes a byte buffer to a temporary file, checks its size, makes it executable and runs it.
  The arguments are the buffer (a0), its length (a1) and a third value passed to the program (a2).
  It builds a file name with `xf86sprintf` from the format "/tmp/%s.%08x.%08x.%08x", the string "firegl1.isse", the address of `tryexcept` itself and the two words `xf86getsecs` returns, opens it with mode "wb" and writes the buffer one byte at a time with `xf86fputc`; a failed open returns 1 at 0x42cdd8.
  A nonzero result from `xf86fclose` returns 1; otherwise it reopens the file with mode "rb", seeks to the end with `xf86fseek`, reads the position with `xf86fgetpos` and closes it again.
  If the position differs from the length it removes the file with `xf86remove` and returns 1.
  Otherwise it calls `xf86chmod` with mode 0x49 (octal 111); on failure it removes the file and returns 1; on success it calls `xf86execl` with the path, the path again, the third argument and a null terminator, removes the file, and returns the value `xf86execl` returned (the return is made in the delay slot after the last `xf86remove`).
  A failed reopen returns 1 at 0x42ce6c. **Established.**
- `vfmtFindFormatFile` (`fglrx_drv.so`, 564 bytes at address 0x455da0): finds the file for a video format by name.
  The arguments are an output buffer (a0), the format name (a1) and a subdirectory (a2).
  The root is the value of the environment variable `GL_GRROOT`, or an empty string.
  It copies the name, appends ".vfo" through the unlabelled `sub_455d00` (which appends only when the string does not already end with it), and searches for a last '/'.
  With no '/' the output is "root + subdirectory + / + name" built by `sprintf`; with one, the part before the slash must equal "root + subdirectory" (`strcmp`), or the routine returns 3, and the output is the name as given.
  It then calls `stat` on the output (the call at 0x455f0c): success returns 0.
  On failure it reads `VFOPATH`: unset returns 1 with the output left as built; set, it builds "VFOPATH/name" and calls `stat` again (the call at 0x455f84), returning 0 if that succeeds and otherwise copying the name to the output and returning 1. **Inferred:** the role comes from the strings and the call pattern; the routine was read through the decompiler rendering and the call facts.
- `UpdateFile` (`fglrx_drv.so`, 1272 bytes at address 0x423f80): replaces the first line of a text file that contains a given string with a new line.
  The arguments are the file path (a0), the string to look for (a1) and the replacement line (a2).
  It sizes the file with the unlabelled `sub_423ec0` (reached through a `bgezall` at 0x423fb4, which counts bytes with `xf86fgetc` until it returns 0xff), reads the whole file into a `xf86malloc` buffer with `xf86fread` and splits it into an array of 12-byte records (length, a flag byte and a pointer) one per line.
  For each line it copies the text to a 1024-byte stack buffer with `xf86memcpy` and tests it with `xf86strstr`; on the first match it points that record at a2 with its length from `xf86strlen`.
  It reopens the path with mode "wb" and writes every record with `xf86fwrite`, then frees both buffers and closes the file.
  It returns 0 when a line matched and was written, -1 when the file cannot be opened or read in full or reopened, -2 when an allocation fails, -3 when a write is short and -4 when the file was rewritten with no line matching. **Inferred:** the record layout and the line-splitting loop were read through the decompiler rendering and the exit facts, not instruction by instruction.
