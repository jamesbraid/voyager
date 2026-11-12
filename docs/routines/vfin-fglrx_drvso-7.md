# Routine role readings, fglrx_drv.so, batch 7

Role statements for sixteen routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the inventory does not yet show as understood. The routines are every fifteenth non-understood row from index 7, sorted by address. Each statement uses only the rendered facts: the call sites and callees, the argument and private-block offsets, the constants, and the return values. All entries are inferred, because the render shows what a routine does with its inputs but not what its callers expect from it.

- `R200RestoreAccelState` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40a980
  **Inferred.** Reads the pointer at +0xf8 of its argument block, then calls `R200SelectBuffer` at 0x40a9a8 with the address of the private field at offset 0x2428 (9256) and the constant 0x64768. It then calls `R200WaitForIdle` at 0x40a9b4 and returns that call's value at 0x40a9c8. The routine re-selects the buffer and waits for the engine to go idle.

- `R200MapFB` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x410bc0
  **Inferred.** Maps the framebuffer for the R200 driver using the private block at +0xf8 of the argument. The branch at 0x410bd8 chooses between two paths on the word at [priv+52]. The call to `fbdevHWMapVidmem` at 0x410bf0 passes the value at [priv+68]. The call to `drmMap` at 0x410c28 takes the DRM handle at [priv+6572] and the 8-byte value at [priv+9256] as arguments. On the path where the word at [priv+52] is nonzero, `xf86DrvMsg` at 0x410c7c is followed by a call to `xf86exit` with status 1 at 0x410c88. On the zero path, a nonzero `drmMap` result leads to an `xf86DrvMsg` call at 0x410c44 and the routine returns 0. The final call, `xf86MapPciMem` at 0x410cd0, maps PCI memory using the values at [priv+8] and [priv+36].

- `R200SetSyncRangeFromEdid` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x415c80
  **Inferred.** Works on the monitor data block at [[a0+212]+180], reading bytes at offsets 0x54 and 0x55 and testing their bits (branches at 0x415cb8, 0x415ce0, 0x415d10, 0x415d44 and 0x415d74). The byte compared with 0xfd at 0x415c9c is the tag of a monitor range-limits descriptor in the public EDID layout, which is the one outside source in this entry. Float values are stored at +0x10, +0x14, +0x54 and +0x58 of the block at a0+212 (stores at 0x415cc4, 0x415ccc, 0x415ec0 and 0x415ec8). The returns at 0x415e30, 0x415e74, 0x415f84 and 0x415fc0 carry values the render does not name.

- `addFormat` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x419ec0
  **Inferred.** Scans a table at a0 of 8-byte records, up to a1 entries (the branch at 0x419efc skips the scan when a1 is zero or less). It compares the word read at 0x419edc with a2 and the byte read at 0x419ee0 with a3 (branches at 0x419ee4 and 0x419eec). On a match it returns the entry count a1 at 0x419ef4. Otherwise it writes a word and a byte into the slot at index a1, at (a1 << 3) + a0 (stores at 0x419f04 and 0x419f10), and returns a1+1 at 0x419f0c. The caller therefore learns that one record was appended.

- `R200InitTVRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41f880
  **Inferred.** Sets up TV-out timing from the `std_tv_timing` table. An `xf86memcpy` at 0x41f930 copies 0x54 bytes from the table entry at index [a5+184] (the table stride is 0x54, computed at 0x41f930) into the block at a5+272. Clock setup goes to `SetClk` at 0x41fa20 with a3 = 0x10 and a4 = 0xc845880 among its arguments. The CRT M and N divider values go to `SetCrtMN` at 0x41fb3c, with the reference clock read from `RefClkPrecise` indexed by [a5+220]. A later call to `VTMaster` at 0x420120 sets the vertical timing. Words at a5+0xf8 to a5+0x108 are written along the way (stores at 0x41f8d8 to 0x41f8f8), and the routine returns at 0x420518 and 0x420800.

- `ProcFIREGL_DRIGetVisualConfigPrivates` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42b500
  **Inferred.** An X protocol request handler, identified by its calls to `WriteToClient`. It writes an 8-byte reply at 0x42b580 and a 0x20-byte reply at 0x42b61c, the latter with a3 taken from [a0+28] and a4 set to 1. It bounds a loop by comparing the word at `screenInfo`+0x30 with [[a0+8]+4] (branch at 0x42b520). It reads the active-screen table `__glXActiveScreens` at 0x42b5d8. The return at 0x42b5c0 gives [a0+40] and the return at 0x42b530 gives 0x2.

- `FIREGL_OverlayPolySegment` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433840
  **Inferred.** The overlay entry for poly-segment drawing. It calls `VALIDATE_DRAWABLE` through the pointer at 0x432d40 (bgezall at 0x4338f4), then picks a private block from `xf86Screens` indexed by the value at [a1] (loads at 0x433888 to 0x4338a0). It compares a byte at a1+4 with 0x8 at 0x4338dc and with 0x18 at 0x4338e4. The 0x8 path calls `R200CPAccelInitFuncs` at 0x43396c with a2 = 1, and the 0x18 path calls it at 0x433954 with a2 = 0. Any other value falls through to the indirect call at 0x433910 with the entry arguments. The return at 0x433940 gives [a1+68].

- `FIREGL_OverlayCopyGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434e00
  **Inferred.** Moves words between the argument at a2 (+0x44 and +0x48) and the record at [a2+76] + (0x467ecc << 2), whose two words are read at 0x434e34 and 0x434e6c and written at 0x434e60 and 0x434e84. It then calls the indirect function at 0x434e50 with the four entry registers and the two record words as a4 and a5. The branches at 0x434e40 and 0x434e78 test those words for zero. The returns at 0x434e94 and 0x434ea8 give the callee's value.

- `FIREGL_OverlayRealizeWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x438380
  **Inferred.** Realizes an overlay window. It sets two words at a0+0xac (stores at 0x4383d4 and 0x4383e8) and calls an indirect function at 0x4383d0 with the four entry registers. It tests the state word at offset 0x2060 of the screen's private block (branch at 0x4383c4). It calls `InOverlay` at 0x438400 with the value at [a0+24]. `FIREGL_OverlayChangeCRTC` at 0x438418 follows on its path, and `FIREGL_MakeTrans` at 0x438474 takes the value at [a0+16] and the constant 1. The return at 0x438430 carries a value the render does not name.

- `FIREGL_OverlayChangeBorderWidth` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43c980
  **Inferred.** Changes an overlay window's border width. It stores a 16-bit value at a0+0x64 (sh at 0x43c9e8) and calls `SetBorderSize` at 0x43c9ec with the entry arguments. It then rebuilds a clip region with `miRegionCreate` at 0x43cacc and 0x43cb1c and `miSubtract` at 0x43cae8 and 0x43cb34, using the region stored at a0+72. `WindowsRestructured` at 0x43ca7c is called on one path. The return at 0x43caa0 gives either that call's value or the value of an indirect callee.

- `ProcATIHPVGetData` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446480
  **Inferred.** An X protocol request handler with the same shape as the handler at 0x42b500. It loads the word at `screenInfo`+0x30, compares it with [[a0+8]+4] at the branch at 0x44649c, and sends a 0x20-byte reply through `WriteToClient` at 0x4464e0 with a3 taken from the entry argument. The returns at 0x4464ac and 0x4464f4 both give [a0+40].

- `R200CmpIoctl` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ab80
  **Inferred.** Issues an ioctl on the DRM device for one screen. It reads the screen index from the first word of the argument at a0, looks up that screen's private block in `xf86Screens`, and takes the file descriptor from [priv+6572]. `xf86ioctl` at 0x44abac gets that descriptor and the entry arguments a1 and a2. When the result is nonzero (branch at 0x44abb4 not taken), `oserror` at 0x44abc0 and `xf86strerror` at 0x44abcc feed an `ErrorF` message at 0x44abe4. The routine returns the ioctl result at 0x44abf8.

- `R200_lockGetImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44dc00
  **Inferred.** A lock wrapper for the GetImage path. It takes the DRI lock with `DRILock` at 0x44dc78 on the structure at [a0+16], then selects the per-screen record from the table at [a0+16]+360 indexed by `R200_lockScreenIndex`. It calls the function pointer at +0x8 of that record at 0x44dca0 with the entry arguments. `DRIUnlock` at 0x44dcbc releases the lock, and the routine returns that call's value at 0x44dcdc.

- `R200_lockRealizeCursor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e880
  **Inferred.** A lock wrapper for the cursor-realize path. It calls `DRILock` at 0x44e8d0 with the entry arguments, then calls the function pointer at +0x48 of the per-screen record (table at +0x168, indexed by `R200_lockScreenIndex`) at 0x44e8e0. It calls `DRIUnlock` at 0x44e8f0 last. The routine stores two words at a0+0x120 (stores at 0x44e8d4 and 0x44e910) around that sequence.

- `R200_lockFillSpans` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f480
  **Inferred.** A lock wrapper for the FillSpans path, working on a GC record. `DRILock` at 0x44f4f0 takes the handle at [a1]. Words are moved between a1+0x44 and a1+0x48 and the record at [a1+76] indexed by `R200_lockGCIndex` on both sides of the call, which is made at 0x44f514 with the entry arguments. `DRIUnlock` at 0x44f528 releases the lock. The return at 0x44f560 gives the address of `R200_lockGCOps`.

- `R200_lockImageText8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4504c0
  **Inferred.** A lock wrapper for the ImageText8 path, built like the FillSpans wrapper. `DRILock` at 0x450530 takes the handle at [a1]. Words are moved between a1+0x44 and a1+0x48 and the record at [a1+76] indexed by `R200_lockGCIndex` around the call at 0x450554, and the word at [a1+72]+0x3c feeds one of the stores. `DRIUnlock` at 0x450568 releases the lock. The return at 0x4505a0 gives the address of `R200_lockGCOps`.
