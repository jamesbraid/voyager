# Routine role readings, fglrx_drv.so, batch 7

Role statements for sixteen routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the inventory does not yet show as understood. The routines are every fifteenth non-understood row from index 7, sorted by address. Each statement uses only the rendered facts: the call sites and callees, the argument and private-block offsets, the constants, and the return values. All entries are inferred, because the render shows what a routine does with its inputs but not what its callers expect from it.

- `R200RestoreAccelState` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a980
  **Inferred.** Reads the pointer at +0xf8 of its argument block, then calls `R200SelectBuffer` at 0x40a9a8 with a1 = the address at offset 0x2428 (9256) of that block and a2 = the constant 0x64768. It then calls `R200WaitForIdle` at 0x40a9b4 and returns that call's value at 0x40a9c8. Role (from name): re-selects the buffer and waits for the engine to go idle.
  Reviewed: 2026-11-12 (sonnet)

- `R200MapFB` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410bc0
  **Inferred.** Role (from name): maps the framebuffer for the R200 driver. Reads the private block at +0xf8 of the argument and branches at 0x410bd8 on the word at [priv+52]. When that word is nonzero, `xf86DrvMsg` at 0x410c7c is followed by `xf86exit` with status 1 at 0x410c88. When it is zero and the word at [priv+24] is nonzero (branch at 0x410be4), `fbdevHWMapVidmem` at 0x410bf0 is called with the value at [priv+68] as its fifth argument (a4). When both are zero, the 8-byte value at [priv+9256] is tested at 0x410c18. If it is nonzero, `drmMap` at 0x410c28 is called with [priv+6572] as a0, that 8-byte value as a1 and the address priv+52 as a3, and a nonzero `drmMap` result leads to an `xf86DrvMsg` call at 0x410c44 and a return of 0 at 0x410c64. If it is zero, `xf86MapPciMem` at 0x410cd0 is called with a1 = 1 and the values at [priv+8] (a2), [priv+36] (a3) and [priv+68] (a4).
  Reviewed: 2026-11-12 (sonnet)

- `R200SetSyncRangeFromEdid` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415c80
  **Inferred.** Works on the monitor data block at [[a0+212]+180] (loads at 0x415c80 and 0x415c84). The branch at 0x415ca8 loops back to 0x415c98 until a pointer, advanced by 0x54 each pass, reaches the block address plus 336. Each pass compares a word loaded at 0x415c98 with 0xfd (branch at 0x415c9c). In the public EDID layout 0xfd is the tag of a monitor range-limits descriptor, which is the one outside source in this entry; the render does not show that this block is EDID data. The routine also reads bytes at offsets 0x54 and 0x55 of the block and tests their bits (branches at 0x415cb8, 0x415ce0, 0x415d10, 0x415d44 and 0x415d74). Float values are stored at +0x10, +0x14, +0x54 and +0x58 of the block at [a0+212] (stores at 0x415cc4, 0x415ccc, 0x415ec0 and 0x415ec8). The returns at 0x415e30, 0x415e74, 0x415f84 and 0x415fc0 carry values the render does not name.
  Reviewed: 2026-11-12 (sonnet)

- `addFormat` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419ec0
  **Inferred.** Scans a table at a0 of 8-byte records, up to a1 entries (the branch at 0x419ec0 jumps to 0x419efc, skipping the scan, when a1 is zero or less). It compares the word read at 0x419edc with a2 and the byte read at 0x419ee0 with a3 (branches at 0x419ee4 and 0x419eec). On a match it returns the entry count a1 at 0x419ef4. Otherwise it writes a word and a byte into the slot at index a1, at (a1 << 3) + a0 (stores at 0x419f04 and 0x419f10), and returns a1+1 at 0x419f0c.
  Reviewed: 2026-11-12 (sonnet)

- `R200InitTVRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41f880
  **Inferred.** Role (from name): sets up TV-out timing from the `std_tv_timing` table. The branch at 0x41f8c4 goes to 0x42054c when [a5+184] is zero. An `xf86memcpy` at 0x41f930 copies 0x54 bytes from the `std_tv_timing` entry at index [a5+184] (the index is multiplied by 0x54 with a shift-and-add sequence to form the source address) into the block at a5+272. `SetClk` at 0x41fa20 is called with a2 = [a5+180], a3 = 0x10 and a4 = 0xc845880. `SetCrtMN` at 0x41fb3c is called with a2 and a4 read from `RefClkPrecise` indexed by [a5+220]. `VTMaster` at 0x420120 is called later. Words at a5+0xf8 to a5+0x108 are written along the way (stores at 0x41f8d8 to 0x41f8f8), and the routine returns at 0x420518 and 0x420800.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFIREGL_DRIGetVisualConfigPrivates` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b500
  **Inferred.** An X protocol request handler, identified by its calls to `WriteToClient`. It writes an 8-byte reply at 0x42b580 and a 0x20-byte reply at 0x42b61c, the latter with a3 taken from [a0+28] and a4 set to 1. At the branch at 0x42b520 it compares the word at `screenInfo`+0x30 with [[a0+8]+4] (signed). The store of [[a0+8]+4] to a0+0x18 sits in that branch's delay slot, so it happens on both paths. When `screenInfo`+0x30 is the smaller, the branch falls through to the return of 0x2 at 0x42b530. Otherwise it continues to the reply code, and the return at 0x42b5c0 gives [a0+40]. A word is loaded at 0x42b5d8 through a global-table slot; the render shows no symbol for it.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolySegment` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433840
  **Inferred.** Role (from name): the overlay entry for poly-segment drawing. It picks a private block from `xf86Screens` indexed by the value at [a1] (loads at 0x433888 to 0x4338a0), then compares a byte at a1+4 with 0x8 at 0x4338dc and with 0x18 at 0x4338e4. The 0x8 path calls `R200CPAccelInitFuncs` at 0x43396c with a2 = 1, and the 0x18 path calls it at 0x433954 with a2 = 0; both then jump to 0x4338ec. Every path reaches the call to `VALIDATE_DRAWABLE` through the pointer at 0x432d40 (bgezall at 0x4338f4, a0 and a1 swapped from the entry values), followed by the indirect call at 0x433910 with the entry arguments. The return at 0x433940 gives [a1+68].
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayCopyGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434e00
  **Inferred.** Moves words between the argument at a2 (+0x44 and +0x48) and a record found at [[a2+76] + ([0x467ecc] << 2)], where [0x467ecc] is a word loaded from address 0x467ecc and used as an index. The record's second word (+4) is read at 0x434e34 and again at 0x434e6c, and the record's words at +0 and +4 are written at 0x434e60 and 0x434e84. It calls the indirect function at 0x434e50 with the four entry registers, a4 = the record's first word and a5 = its second word. Both branches, at 0x434e40 and 0x434e78, test the record's second word (+4) against zero. The returns at 0x434e94 and 0x434ea8 give the callee's value.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayRealizeWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438380
  **Inferred.** Role (from name): realizes an overlay window. It loads [a0+16] and tests the state word at offset 0x2060 of the screen's private block (branch at 0x4383c4). When that word is nonzero, it makes the indirect call at 0x4383d0 with the four entry registers, and stores to the word at +0xac of [a0+16] at 0x4383d4 (in the call's delay slot) and again at 0x4383e8. When the call's result is nonzero and the word at [a0+24] is zero (branches at 0x4383e4 and 0x4383f0), it calls `InOverlay` at 0x438400 with a2 = [a0+24]. `FIREGL_OverlayChangeCRTC` at 0x438418 follows on its path, and `FIREGL_MakeTrans` at 0x438474 takes the value at [a0+16] and the constant 1. The return at 0x438430 carries a value the render does not name.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayChangeBorderWidth` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43c980
  **Inferred.** Role (from name): changes an overlay window's border width. It stores a 16-bit value at a0+0x64 (sh at 0x43c9e8) and calls `SetBorderSize` at 0x43c9ec with a0 as received (the render does not show a1 to a3). On some paths it calls `miRegionCreate` at 0x43cacc and 0x43cb1c and `miSubtract` at 0x43cae8 and 0x43cb34, with a0+72 as the third argument of `miSubtract`. `WindowsRestructured` at 0x43ca7c is called on one path. The return at 0x43caa0 gives that call's value or a value the render does not trace.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATIHPVGetData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446480
  **Inferred.** An X protocol request handler, identified by its call to `WriteToClient`. It loads the word at `screenInfo`+0x30 and compares it with [[a0+8]+4] at the branch at 0x44649c (an unsigned compare). When [[a0+8]+4] is not below it, the routine returns [a0+40] at 0x4464ac without replying. Otherwise it sends a 0x20-byte reply through `WriteToClient` at 0x4464e0 with a3 as received on entry, and returns [a0+40] at 0x4464f4. It makes one `WriteToClient` call where the handler at 0x42b500 makes two.
  Reviewed: 2026-11-12 (sonnet)

- `R200CmpIoctl` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ab80
  **Inferred.** Issues an ioctl for one screen. It reads the screen index from the first word of the argument at a0, looks up that screen's private block in `xf86Screens`, and takes the file descriptor from [priv+6572]. `xf86ioctl` at 0x44abac gets that descriptor and the entry arguments a1 and a2. When the result is nonzero (branch at 0x44abb4 not taken), `oserror` at 0x44abc0 and `xf86strerror` at 0x44abcc feed an `ErrorF` message at 0x44abe4. The routine returns the ioctl result at 0x44abf8.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockGetImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44dc00
  **Inferred.** Role (from name): a lock wrapper for the GetImage path. It takes the DRI lock with `DRILock` at 0x44dc78 on the structure at [a0+16], then selects the per-screen record from the table at [a0+16]+360 indexed by `R200_lockScreenIndex`. It calls the function pointer at +0x8 of that record at 0x44dca0 with the entry arguments. `DRIUnlock` at 0x44dcbc releases the lock, and the routine returns `DRIUnlock`'s value at 0x44dcdc.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockRealizeCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e880
  **Inferred.** Role (from name): a lock wrapper for the cursor-realize path. It calls `DRILock` at 0x44e8d0 with a0, a2 and a3 as received on entry and a1 = 0, then calls the function pointer at +0x48 of the per-screen record (table at +0x168, indexed by `R200_lockScreenIndex`) at 0x44e8e0. It calls `DRIUnlock` at 0x44e8f0 last. The routine stores twice to the word at a0+0x120 (stores at 0x44e8d4 and 0x44e910) around that sequence.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockFillSpans` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f480
  **Inferred.** Role (from name): a lock wrapper for the FillSpans path, working on a GC record. `DRILock` at 0x44f4f0 takes the handle at [a1]. Words are moved between a1+0x44 and a1+0x48 and the record at [a1+76] indexed by `R200_lockGCIndex` on both sides of the call, which is made at 0x44f514 with the entry arguments. `DRIUnlock` at 0x44f528 releases the lock. The return at 0x44f560 gives the address of `R200_lockGCOps`.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockImageText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4504c0
  **Inferred.** Role (from name): a lock wrapper for the ImageText8 path, built like the FillSpans wrapper. `DRILock` at 0x450530 takes the handle at [a1]. Words are moved between a1+0x44 and a1+0x48 and the record at [a1+76] indexed by `R200_lockGCIndex` around the call at 0x450554, which is an indirect call with the entry arguments. The word at [[a1+72]+0x3c] is loaded at 0x45053c into the register that call jumps through. `DRIUnlock` at 0x450568 releases the lock. The return at 0x4505a0 gives the address of `R200_lockGCOps`.
  Reviewed: 2026-11-12 (sonnet)
