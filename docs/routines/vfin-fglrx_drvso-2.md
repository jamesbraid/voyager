# Routine readings for fglrx_drv.so, batch 2

Role entries for the non-understood routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at every
15th position from index 2 in address order, as ranked in `docs/inventory/functions.tsv`. Each entry was
rendered from the install path shown in its header. Targets whose render did not support a role were
dropped; they are listed at the end of this file.

- `__fglDRMPM4Alloc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x409f40
  **Inferred.** The 104 bytes read a0+0x8 and a0+0xc, then four words of the record that a0+0x8 points to. They call `firegl_PM4Alloc` through the GOT (`jr` at 0x409f98), passing a0 to a2 as received, with a3 = `[a0+8]` and a5 = `[[a0+8]+4]`. The return at 0x409f8c yields `[a0+12] + ([[a0+8]+4] << 2)`, and the branch at 0x409f44 returns 0 when a1 is zero or negative. The callee's name points to a PM4 command-ring allocation.

- `R200CPSubsequentSolidHorVertLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c500
  **Inferred.** It reads the device record at a0+0xf8 and the word at +0x1dec, then calls `__fglDRMPM4Alloc` at 0x40c540 for a block of 6 units. Six words are written into that block between 0x40c558 and 0x40c5e0, with the stores guarded by a test of a4 (the branch at 0x40c56c). It then calls `__fglDRMPM4Submit` at 0x40c5a4 with the block at ret+24 and the tag 0x566 in a7, and returns that call's result from 0x40c5b4. The packet build and submit fit the name's reading, a solid horizontal or vertical line drawn through the command stream. The field values that set the line's start and length are not in the render.

- `R200PreInitConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x414bc0
  **Inferred.** Pre-initialisation probe for one R200-family device. It reads the device record at a0+0xf8, matches the chipset name against the `R200Chipsets` table with `xf86StringToToken` (0x414bfc), and fetches the entity private with `xf86GetEntityPrivate` (0x414d9c). It compares config words with 0x1002 and 0xe11, which look like PCI vendor ids (0x1002 is ATI's). It derives the device id with `ENCODE_DEVICE_ID` (0x414db0) and the chip revision with `asicHwRevID2chipRev` (0x414ec8), maps the register aperture with `R200MapMMIO` (0x414e38), asks `fbdevHWGetVidmem` for video memory (0x414ee0), and reads option 4 with `xf86ReturnOptValBool` (0x4150f0). Each step is logged through `xf86DrvMsg` at more than a dozen sites, such as 0x414c6c and 0x414df8. Words at +580, +588, +592 and +596 of the config record are only logged. The routine returns 1 on the path ending at 0x4156c0 and 0 on the others.

- `R200PreInitFSAA` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x418180
  **Inferred.** Reads anti-aliasing options during pre-initialisation. One boolean option is read at 0x28 with `xf86GetOptValBool` (0x41820c), two more at 0x2a and 0x2b, and twelve real-valued options at 0x2c to 0x37 with `xf86GetOptValReal` (0x4183c0 to 0x4187e0). Each real is stored as a single-precision word at +0x1d7c through +0x1da8 of the device record at a0+0xf8, but only after double-precision compares against two constants, one of them 1.0 (0x3ff0000000000000). The render does not settle the exact range those compares enforce. The chip number at +0xa0 selects one of three paths (tests against 0x2c, 0x32 and 0x34 at 0x4181b4, 0x4181c0 and 0x4181d4). Four `xf86DrvMsg` calls (0x4182b0, 0x418320, 0x418390, 0x418928) report results; the render does not show which options each one covers. The option names live in the `R200Options` table, which the render does not expand.

- `FGLQueryTickCount` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x424540
  **Inferred.** The 12 bytes are a tail call. The `jr` at 0x424544 reaches `rdrtc` through the GOT with the four argument registers as received, so the routine returns whatever `rdrtc` returns. The callee's name suggests a clock read, which the routine does not compute itself.

- `ProcFGLVidModeGetGammaRampSize` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f340
  **Inferred.** An X protocol request handler for a gamma-ramp size query. It reads the request record at a0+0x8 and compares its word at +0x4 with the screen count at `screenInfo`+48, branching at 0x42f360. On the out-of-range path it reports through `ErrorF` (0x42f378). The reply is a 16-byte block sent with `WriteToClient` (0x42f3b0, length 0x10), and the routine returns the word at a0+0x28. The name points to the VidMode gamma-ramp size request, and the render does not show the size value itself.

- `FIREGL_OverlayPutImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433140
  **Inferred.** Puts an image onto an overlay drawable. It takes the screen index from the word at a1+0, looks up the screen record in `xf86Screens`, and reads the device record at +0xf8 and the overlay state at +0x2078. It calls `VALIDATE_DRAWABLE` (0x432d40) on the drawable at 0x433200. It then branches on the format byte at a1+4 against 8 (0x4331e8) and 0x18 (0x4331f0), and on those paths calls `R200CPAccelInitFuncs` with flag 0 at 0x433280 and flag 1 at 0x433298. A call at 0x43323c passes its arguments through to an unnamed function, and the return at 0x433268 gives 0x465ca8. The format values most likely mean bits per pixel, but the render does not say so.

- `FIREGL_OverlayImageGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434600
  **Inferred.** The glyph-blit counterpart of `FIREGL_OverlayPutImage`, with the same structure. It takes the screen index at a1+0, validates the drawable with `VALIDATE_DRAWABLE` (0x4346c4), and reads the overlay state at +0x2078 of the device record. The format byte at a1+4 is compared with 8 (0x4346ac) and 0x18 (0x4346b4), with `R200CPAccelInitFuncs` called at 0x434734 and 0x43474c on those paths. The routine returns the word at a1+68 (0x434720).

- `CMapCloseScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435b40
  **Inferred.** The close-screen hook of the colormap layer. It calls `CMapUnwrapScreen` (0x4373c0) with the screen record a1 as both arguments, then loads the word at a1+0x80 (0x435b7c) and calls through it at 0x435b80 with a0 and a1 as received. The return at 0x435b94 gives that callee's result. The unwrap-then-chain shape is what the render shows, and the pointer's target is not named in the render.

- `FIREGL_EnableDisableFBAccess` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437b00
  **Inferred.** Per-screen switch for framebuffer access. It maps the screen index a0 through `screenInfo` (+0x34) to a slot in `xf86Screens`, reads the device record at +0xf8, and reads the word at +0x2070. It calls `FIREGL_OverlaySetRootClip` (0x43cbc0) with the screen index, the caller's a1 unchanged, and the constant 0x375e8 as a2. A second call at 0x437b70 goes through a pointer taken from the device record and passes a0 and a1 as received. The return at 0x437b84 gives that call's result. The routine has no bounds test on a0 in the render.

- `FIREGL_OverlayMoveWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a580
  **Inferred.** The overlay window move-and-resize hook. It stores 16-bit values to the window record at +0x60, +0x62, +0x8 and +0xa, then computes the new clip region with `miRegionCopy` (0x43a67c, 0x43a6a4) and `CollectUnderlayChildrenRegions` (0x43d3c0). It then calls `SetWinSize` (0x43a728), `SetBorderSize` (0x43a734), `MoveWindowInStack` (0x43a758) and `ResizeChildrenWinSize` (0x43a780), and `WindowsRestructured` (0x43a8dc). On one path it calls `FIREGL_OverlayChangeCRTC` (0x438080) at 0x43a8f4. The return at 0x43a910 gives back that call's result or the value from the screen record. The window's field values are not visible in the render.

- `ProcATITVOAdjustPosition` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x445d80
  **Inferred.** An X protocol request handler for the TV-out position adjustment. It reads the request record at a0+0x8, rejects the screen index at its +0x4 when that index is at or past the screen count (branch at 0x445da0), and compares the words at its +0x8, +0xc and +0x10 against -30, 31 and -6 (branches at 0x445dd4, 0x445de0, 0x445df0 and 0x445e08). Accepted values are written out through three pairs of `xf86sprintf` and `UpdateFile` calls (0x445eb8 to 0x445f80), with the file name from `getXF86ConfigFileName` (0x445ea0). It then calls `R200SwitchMode` (0x445f9c) to apply the change. Failures are logged with `ErrorF` (0x445fc0, 0x445fdc, 0x445ff8), and the return at 0x445e5c gives the word at a0+40.

- `R200StrGamma8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447200
  **Inferred.** Widens a packed 8-bit gamma table into 16-bit ramps and applies it. It allocates three arrays of 2 x a3 bytes with `Xalloc` (0x447240, 0x447254, 0x447264). On one path it first reads the current ramp with `VidModeGetGammaRamp` (0x447284). Per entry, three byte channels are read from a4 with `lbu` (0x4472c8 to 0x4472f0) and stored as halfwords into the three arrays with `sh`. A loop at 0x44731c to 0x4473a0 repeats the widening and runs a3 times. The arrays are applied with `xf86ChangeGammaRamp` (0x4473bc) and freed with `Xfree` (0x4473d0 to 0x4473f0). The name suggests the 8-bit to 16-bit stretch that the loop performs.

- `R200QryMonitor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449340
  **Inferred.** Fills in a monitor-name string. The record it writes sits at 72 x a1 past a pointer reached through the array at a0+0x168, indexed by `vcScreenPrivateIndex`. For a1 above zero it copies a 64-byte constant at 0x467d18 with `xf86strncpy` (0x449398). For a1 zero or below, it copies from the string pointed to by the first word of a0 (0x4493d8). The routine returns the copy's result.

- `R200QueryHyperpipeConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d000
  **Inferred.** Queries the hyperpipe configuration of a device through the DRM. It reads the screen record from `xf86Screens` and calls `checkdrmFD` (0x44d050) with the device's file descriptor. It then calls `R200QueryHyperpipeNetwork` (0x44d08c) and issues ioctl request 0x66670015 with `xf86ioctl` (0x44d0c4). On ioctl failure it logs the error with `ErrorF` and `xf86strerror` (0x44d1f0, 0x44d20c). The routine copies a 0x50-byte name from the table at 0x46c880 with `xf86strncpy` (0x44d1cc). It returns 0 on the early path, and 0 or the constant pointer 0x46f480 on the other path (0x44d078).

- `R200_lockValidateTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e440
  **Inferred.** A lock wrapper around the validate-tree hook. It finds the screen's private pointer through the index `R200_lockScreenIndex` and reads the word at +0x70 of that private. It calls `DRILock` (0x44e49c) on the screen record with a1 = 0, stores a word at the screen record's +0xb4 before and after the wrapped call, then calls the wrapped function (0x44e4b0) with a0 to a2 as received. `DRIUnlock` (0x44e4c4) follows, and the return at 0x44e4ec gives the wrapped call's result.

- `R200_lockChangeGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f040
  **Inferred.** A lock wrapper around the GC change hook. The per-GC private is found through `R200_lockGCIndex`, and the function-pointer words at +0x0 and +0x4 of that private are saved in the GC record at +0x44 and +0x48 (stores at 0x44f084 to 0x44f0ec). It calls `DRILock` (0x44f09c) on `[a0]`, then the wrapped change function (0x44f0b0), then `DRIUnlock` (0x44f0c0). The return at 0x44f0f8 gives the address of the `R200_lockGCOps` table.

- `R200_lockFillPolygon` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ffc0
  **Inferred.** The same lock-and-chain pattern as `R200_lockChangeGC`, applied to the fill-polygon hook. The per-GC private is found through `R200_lockGCIndex` from the GC record a1, and the pointers are saved in that record at +0x44 and +0x48. It calls `DRILock` (0x450030) on `[a1]`, the wrapped fill function (0x450054) with a0 to a3 as received, and `DRIUnlock` (0x450068). The return at 0x4500a0 gives the address of `R200_lockGCOps`.

- `addToIS1BoardList` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450f80
  **Inferred.** Parses one board line from the configuration and inserts it into a list. It allocates a 0x428-byte record with `XNFalloc` (0x450fb0), zeroes it with `xf86bzero`, and copies the line into the record at +0x8 with `xf86strcpy`. Fields are split with `xf86strtok` on the delimiter at 0x467d68 and read as numbers with `xf86strtol` (bases 16 and 10), and one token is matched against the string at 0x467d70 with `xf86strcmp` (0x4510b8). The record is formatted into its +0x108 area with `xf86snprintf` (0x45110c). The list head is the pointer at 0x468204, and `newIsBigger` (0x450e80) orders the new record against the existing ones by eight 8-byte fields at +0x8 to +0x40. Failures are logged with `ErrorF` at 0x451400.

Dropped, with the reason. Each render showed control flow and calls but no stated operation or stored values that would support a role.

Dropped `R200_DGABlitTransRect` at 0x40f100 (284 bytes): the render shows rectangle comparisons and two indirect calls through the device record, and no operation that can be named.

Dropped `R200InitCommonRegisters` at 0x41e200 (80 bytes): eleven stores to a0 with no stored values in the render, and a return of a1+0x40 with bit 24 set.

Dropped `FIREGL_DRIPostValidateTree` at 0x429380 (220 bytes): a load-linked and store-conditional loop around an unnamed callee, with no validation step that can be stated.

Dropped `r200_EnableCommonBusMaster` at 0x42c080 (100 bytes): read-modify-write of the words at +0x30, +0x170 and +0x14c, with the stored values absent from the render, so a bus-master role would rest on the name alone.

Dropped `SrcColorkey` at 0x43d6c0 (44 bytes): two stores to +0x4f4 with the stored value absent from the render, so a colour-key role would rest on the name alone.
