# Routine readings for fglrx_drv.so, batch 2

Role entries for the non-understood routines of `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at every
15th position from index 2 in address order, as ranked in `evidence/inventory/functions.tsv`. Each entry was
rendered from the install path shown in its header. Targets whose render did not support a role were
dropped; they are listed at the end of this file.

- `__fglDRMPM4Alloc` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x409f40
  **Inferred.** The routine loads a0+0x8 and a0+0xc, and further words at +0x4, +0x8 and +0x14 that appear to belong to the record at a0+0x8 (the render does not give the base registers of the loads at 0x409f4c and 0x409f6c). It tail-calls `firegl_PM4Alloc` through the GOT (`jr` at 0x409f98) with a0, a1 and a2 as received, a3 = `[a0+8]` and a5 = `[[a0+8]+4]`. The branch at 0x409f44 returns 0 (0x409fa0) when a1 is zero or negative. The return at 0x409f8c yields `[a0+12] + ([[a0+8]+4] << 2)`; it is reached when the unsigned compare at 0x409f78 of a7 with `[[a0+8]+8]` falls through (a7 below it) and the branch at 0x409f80 is not taken (a4 is 0). Role (from name): the callee's name points to a PM4 command-ring allocation.
  Reviewed: 2026-11-12 (sonnet)

- `R200CPSubsequentSolidHorVertLineOverlay` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c500
  **Inferred.** It reads the device record at a0+0xf8 and the word at +0x1dec, then calls `__fglDRMPM4Alloc` at 0x40c540 with a1 = 6. Six words are stored either way: two at 0x40c558 and 0x40c568 before the branch at 0x40c56c (taken when a4 is 0), then four more at +0x8, +0xc, +0x10 and +0x14 (0x40c578 to 0x40c594) on the fall-through path, or four at +0x10, +0xc, +0x8 and +0x14 (0x40c5c0 to 0x40c5e0) on the taken path; the render does not give the base register of the stores or where the taken path rejoins. It calls `__fglDRMPM4Submit` at 0x40c5a4 with a1 = the `__fglDRMPM4Alloc` result + 24, a6 = `(a1 | (a2 << 0x10))` and a7 = 0x566, and returns that call's result at 0x40c5b4. Role (from name): a solid horizontal or vertical line drawn through the command stream. The values that set the line's start and length are not in the render.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x414bc0
  **Inferred.** Role (from name): pre-initialisation probe for one R200-family device. It reads the device record at a0+0xf8. When the word `[[[[a0+248]]+32]+12]` and the byte it points to are both non-zero, it calls `xf86StringToToken` (0x414bfc) with the `R200Chipsets` table; it later calls `xf86TokenToString` (0x414c34) with the same table. It calls `xf86GetEntityPrivate` (0x414d9c, 0x415034), `ENCODE_DEVICE_ID` (0x414db0, 0x414ea8) on `[[a0+248]+12]`, `R200MapMMIO` (0x414e38; the name suggests mapping the register aperture), `asicHwRevID2chipRev` (0x414ec8) with the words at +164 and +168 of that record, and `xf86ReturnOptValBool` with option 4 (0x4150f0). `fbdevHWGetVidmem` (0x414ee0) is called only when the word at `[a0+248]+24` is non-zero. The word `[[a0+248]+4]+12` is compared with 0x1002 and 0xe11, which look like PCI vendor ids (0x1002 is ATI's), and `[a0+248]+12` is compared with many 16-bit constants (such as 0x4c65 and 0x5961) in a branch chain that stores fields at +0xa0, +0xb4, +0x58, +0x59 and +0x1e78. Messages go through `xf86DrvMsg` at 35 call sites, such as 0x414c6c and 0x414df8. The words at +580, +588, +592 and +596 of the config record are logged and also loaded and stored on (for example 0x415168 stores the +592 word with `sd`). The returns listed in the render are 0 at 0x4153cc, 0x415404, 0x415470, 0x415688 and 0x41585c, 1 at 0x4156c0, and one of 0 or 1 at 0x415098.
  Reviewed: 2026-11-12 (sonnet)

- `R200PreInitFSAA` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x418180
  **Inferred.** Role (from name): reads anti-aliasing options during pre-initialisation. Each option is first tested with `xf86IsOptionSet` on the `R200Options` table. Option 0x28 is read as a boolean with `xf86GetOptValBool` (0x41820c), options 0x2a and 0x2b likewise (0x4182d8, 0x41834c), and twelve options 0x2c to 0x37 as reals with `xf86GetOptValReal` (0x4183c0 to 0x4187e0). Each real is stored as a single-precision word at +0x1d7c through +0x1da8 of the device record at a0+0xf8, but only when two double-precision compares pass: one against a lower bound held in an FP register and one against 1.0 (0x3ff0000000000000). The render does not settle the lower bound or the exact range. The chip number at +0xa0 (`[a0+248]+160`) is tested against 0x2c (0x4181b4), 0x34 (0x4181c0) and 0x32 (0x4181d4); each equal case branches to its own code (0x418880, 0x418884, 0x4188d0) and the fall-through continues to the option reads. Four `xf86DrvMsg` calls (0x4182b0, 0x418320, 0x418390, 0x418928) are in the render; it does not show which options each one covers. The routine returns 1 at 0x41882c and 0x418858. The option names live in the `R200Options` table, which the render does not expand.
  Reviewed: 2026-11-12 (sonnet)

- `FGLQueryTickCount` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x424540
  **Inferred.** The 12 bytes are a tail call. The `jr` at 0x424544 reaches `rdrtc` through the GOT with the four argument registers as received, so the routine returns whatever `rdrtc` returns. The callee's name suggests a clock read, which the routine does not compute itself.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFGLVidModeGetGammaRampSize` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f340
  **Inferred.** An X protocol request handler for a gamma-ramp size query. It reads the request record at a0+0x8 and compares its word at +0x4 with the screen count at `screenInfo`+48, branching at 0x42f360. On the out-of-range path it reports through `ErrorF` (0x42f378). The reply is a 16-byte block sent with `WriteToClient` (0x42f3b0, length 0x10), and the routine returns the word at a0+0x28. The name points to the VidMode gamma-ramp size request, and the render does not show the size value itself.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPutImage` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x433140
  **Inferred.** Role (from name): puts an image onto an overlay drawable. It takes the screen index from the word at a1+0, indexes `xf86Screens` with it, and reads the device record at +0xf8 and the word at +0x2078. It stores the format byte at a1+4 into that word (0x4331e0, in the delay slot of the branch at 0x4331d8). If the word already equalled the byte, the branch at 0x4331d8 jumps to 0x4331f4, past the two format compares; otherwise the byte is compared with 8 (0x4331e8) and 0x18 (0x4331f0). Format 0x18 goes to 0x433270, which reaches the `R200CPAccelInitFuncs` call at 0x433280 (a2 is 0 there); format 8 goes to 0x433290, which reaches the call at 0x433298 (a2 is 1 there). The path that does not take those branches calls `VALIDATE_DRAWABLE` (0x432d40, call at 0x433200, with a0 and a1 swapped), then an unnamed function at 0x43323c with a0 to a3 as received, and the return at 0x433268 gives 0x465ca8. The render does not show where the two init-call paths go next. The format values most likely mean bits per pixel, but the render does not say so.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayImageGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434600
  **Inferred.** Role (from name): the glyph-blit counterpart of `FIREGL_OverlayPutImage`; the facts show the same shape. It takes the screen index at a1+0, indexes `xf86Screens`, and reads the device record at +0xf8 and the word at +0x2078. It stores the format byte at a1+4 into that word (0x4346a4, in the delay slot of the branch at 0x43469c). If the word already equalled the byte, that branch jumps to 0x4346b8, past the two format compares; otherwise the byte is compared with 8 (0x4346ac) and 0x18 (0x4346b4). Format 0x18 goes to 0x434728, which reaches the `R200CPAccelInitFuncs` call at 0x434734 (a2 is 0 there); format 8 goes to 0x434744, which reaches the call at 0x43474c (a2 is 1 there). The remaining path calls `VALIDATE_DRAWABLE` (0x4346c4, with a0 and a1 swapped), then an unnamed function at 0x4346ec with a0 to a3 as received, and the return at 0x434720 gives the word at a1+68.
  Reviewed: 2026-11-12 (sonnet)

- `CMapCloseScreen` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435b40
  **Inferred.** Role (from name): the close-screen hook of the colormap layer. It calls `CMapUnwrapScreen` (0x4373c0) with a1 as both of its first two arguments, then loads the word at a1+0x80 (0x435b7c) and makes an indirect call at 0x435b80 with a0 and a1 as received; the render does not name its target. The return at 0x435b94 gives that call's result. The unwrap-then-chain shape is what the render shows.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_EnableDisableFBAccess` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437b00
  **Inferred.** Role (from name): per-screen switch for framebuffer access. It loads the word at `screenInfo`+0x34+4*a0 and passes it as a0 to `FIREGL_OverlaySetRootClip` (0x43cbc0, call at 0x437b5c), with a1 and a3 as received and a2 = 0x375e8. It reads a record at +0xf8 and the word at +0x2070, and makes a second, indirect call at 0x437b70 with a0 and a1 as received; the render does not name its target. The return at 0x437b84 gives that call's result. The render shows no branches, so there is no bounds test on a0.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayMoveWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a580
  **Inferred.** Role (from name): the overlay window move-and-resize hook. When `[a0+24]` is non-zero (branch at 0x43a5f0) it reads the device record at +0xf8. On one path it calls `miRegionCopy` (0x43a67c, 0x43a690, 0x43a6a4) and `CollectUnderlayChildrenRegions` (0x43a6b8). After that it stores 16-bit values to +0x60 and +0x62 (0x43a6e8, 0x43a6f0) and +0x8 (0x43a708), calls `SetWinSize` (0x43a728), stores a 16-bit value to +0xa (0x43a72c), then calls `SetBorderSize` (0x43a734), an unnamed function (0x43a748), `MoveWindowInStack` (0x43a758) and `ResizeChildrenWinSize` (0x43a780). `WindowsRestructured` (0x43a8dc) is called only when the word tested at 0x43a8d4 is non-zero. On one path it calls `FIREGL_OverlayChangeCRTC` (0x438080) at 0x43a8f4. The return at 0x43a910 is one of a word loaded through `a0+128` and the result of that call. The stored values are not visible in the render.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATITVOAdjustPosition` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x445d80
  **Inferred.** Role (from name): an X protocol request handler for the TV-out position adjustment. It reads the request record at a0+0x8 and, when the screen index at its +0x4 is at or past the screen count at `screenInfo`+48 (branch at 0x445da0), returns `[a0+40]` at 0x445e70. It range-tests three request words: +0x8 against -30 (0x445dd4) and 31 (0x445de0), +0xc against -6 (0x445df0), and +0x10 against -30 (0x445e08); the branch at 0x445df8 tests a value the render does not resolve. One path sends a 0x20-byte reply with `WriteToClient` (0x445e44) and returns `[a0+40]` at 0x445e5c. Another path (from 0x445e80) calls `getXF86ConfigFileName` (0x445ea0), then three pairs of `xf86sprintf` and `UpdateFile` calls (0x445eb8 to 0x445f80), each `UpdateFile` result tested for negative, then `R200SwitchMode` (0x445f9c) with `[[a0+8]+4]` and a2 = 0. `ErrorF` is called at 0x445fc0, 0x445fdc and 0x445ff8 with the `UpdateFile` result, reached from those negative-result branches.
  Reviewed: 2026-11-12 (sonnet)

- `R200StrGamma8` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447200
  **Inferred.** Role (from name): widens an 8-bit gamma table into 16-bit ramps and applies it; the render does not show the widening arithmetic. It allocates three buffers of a3 + a3 bytes with `Xalloc` (0x447240, 0x447254, 0x447264) and calls `VidModeGetGammaRamp` (0x447284) with `[a0]`, a3 and the three buffers. The branch at 0x44728c skips to 0x4473a8 when a3 is zero or negative. The code stores halfwords (`sh`) after byte loads (`lbu`), each of the three channels guarded by its own test (0x4472c0, 0x4472d4, 0x4472e8), repeated in a loop at 0x44731c to 0x4473a0 that ends on a compare of an index with a3. The base registers and stored values of those loads and stores are not in the render. The buffers are passed to `xf86ChangeGammaRamp` (0x4473bc) with a0 and a3 as received and freed with `Xfree` (0x4473d0, 0x4473e0, 0x4473f0), and the return at 0x447404 gives the last `Xfree` result.
  Reviewed: 2026-11-12 (sonnet)

- `R200QryMonitor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449340
  **Inferred.** Role (from name): fills in a monitor-name string. The destination of both `xf86strncpy` calls is 72 x a1 bytes past the word reached through the array at `[a0+0x168]`, indexed by `vcScreenPrivateIndex`. When a1 is above zero (branch at 0x449384) it calls `xf86strncpy` (0x449398) with source address 0x467d18 and length 0x40, and returns that call's result at 0x4493a8. When a1 is zero or below it loads the first word of a0 and calls `xf86strncpy` at 0x4493d8 with length 0x40; the render shows `[a0]` in a5 but not the source argument, and no return on that path.
  Reviewed: 2026-11-12 (sonnet)

- `R200QueryHyperpipeConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d000
  **Inferred.** Role (from name): queries the hyperpipe configuration of a device through the DRM. It indexes `xf86Screens` by a0 and calls `checkdrmFD` (0x44d050) with the word at +12 of the screen record and `[[screen+248]+6572]`. When that call returns non-zero the routine takes an early path whose returns are 0 (0x44d068) and 0 or the constant 0x46f480 (0x44d078). When it returns 0 the code continues at 0x44d080 and calls `R200QueryHyperpipeNetwork` (0x44d08c) with a1 = 0, then issues ioctl request 0x66670015 with `xf86ioctl` (0x44d0c4). If the ioctl result is negative it calls `xf86strerror` and `ErrorF` (0x44d1f0, 0x44d20c). A further `ErrorF` is at 0x44d140, and `xf86strncpy` is called at 0x44d1cc with the table at 0x46c880 and a length of 0x50. The render does not show a return on the ioctl path.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockValidateTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e440
  **Inferred.** Role (from name): a lock wrapper around the validate-tree hook. It loads words at +0x10, +0x168 and +0x70 through a chain of loads; the render does not name the symbol that supplies the index. It calls `DRILock` (0x44e49c) with a0 = `[a0+16]`, a1 = 0 and a2 and a3 as received, stores a word at +0xb4 (0x44e4a0), makes an indirect call (0x44e4b0) with a0 to a2 as received, calls `DRIUnlock` (0x44e4c4) with `[a0+16]`, stores a word at +0xb4 again (0x44e4e4), and returns the indirect call's result at 0x44e4ec. The render does not give the base register of the +0xb4 stores.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockChangeGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f040
  **Inferred.** Role (from name): a lock wrapper around the GC change hook. Before locking it loads words at +0x0 and +0x4 and stores them at +0x48 (0x44f084) and +0x44 (0x44f094) respectively, with base registers the render does not give. It calls `DRILock` (0x44f09c) with `[a0]`, a1 = 0 and a2 and a3 as received, makes an indirect call (0x44f0b0) with a0 and a1 as received, then calls `DRIUnlock` (0x44f0c0) with `[a0]`. Afterwards it loads +0x48 and +0x44 and stores them at +0x0 and +0x4 (0x44f0e0, 0x44f0e8), then stores to +0x48 and +0x44 again (0x44f0ec, 0x44f0f0). The return at 0x44f0f8 gives the address of the `R200_lockGCOps` table.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockFillPolygon` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44ffc0
  **Inferred.** Role (from name): the same lock-and-chain shape as `R200_lockChangeGC`, for the fill-polygon hook. Before locking it loads words at +0x0 and +0x4 and stores them at +0x48 (0x45001c) and +0x44 (0x45002c), with base registers the render does not give. It calls `DRILock` (0x450030) with a0 = `[a1]`, a1 = 0 and a2 and a3 as received, makes an indirect call (0x450054) with a0 to a3 as received, then calls `DRIUnlock` (0x450068) with `[a1]`. Afterwards it loads +0x48 and +0x44 and stores them at +0x0 and +0x4, then stores to +0x48 and +0x44 again (0x450084 to 0x450098). The return at 0x4500a0 gives the address of `R200_lockGCOps`.
  Reviewed: 2026-11-12 (sonnet)

- `addToIS1BoardList` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x450f80
  **Inferred.** Role (from name): parses one board line and inserts it into a list. It allocates a 0x428-byte record with `XNFalloc` (0x450fb0; a zero result branches to 0x4513d0), zeroes it with `xf86bzero`, and copies the string in a2 into the record at +0x8 with `xf86strcpy` (0x450ff0). Fields are split with `xf86strtok` on the delimiter at 0x467d68 and read as numbers with `xf86strtol` (base 16 at 0x45104c, base 10 at the other four sites), with results stored at +0x128, +0x12c, +0x130 and +0x134. One token is compared with the string at 0x467d70 with `xf86strcmp` (0x4510b8); a zero result branches to 0x451408. The record's +0x108 area is formatted with `xf86snprintf` (0x45110c, size 0x18). The word at 0x468204 is read as the list head. `newIsBigger` (0x450e80) is called at 0x451370 with the record's eight 8-byte fields at +0x8 to +0x40 in a0 to a7; the render does not show how the existing entries are compared or linked. A tail call to `ErrorF` is at 0x451400, and the return at 0x4513c8 is one of the `newIsBigger` result or an unresolved value.
  Reviewed: 2026-11-12 (sonnet)

Dropped, with the reason. Each render showed control flow and calls but no stated operation or stored values that would support a role.

Dropped `R200_DGABlitTransRect` at 0x40f100 (284 bytes): the render shows rectangle comparisons and two indirect calls through the device record, and no operation that can be named.

Dropped `R200InitCommonRegisters` at 0x41e200 (80 bytes): eleven stores to a0 with no stored values in the render, and a return of a1+0x40 with bit 24 set.

Dropped `FIREGL_DRIPostValidateTree` at 0x429380 (220 bytes): a load-linked and store-conditional loop around an unnamed callee, with no validation step that can be stated.

Dropped `r200_EnableCommonBusMaster` at 0x42c080 (100 bytes): read-modify-write of the words at +0x30, +0x170 and +0x14c, with the stored values absent from the render, so a bus-master role would rest on the name alone.

Dropped `SrcColorkey` at 0x43d6c0 (44 bytes): two stores to +0x4f4 with the stored value absent from the render, so a colour-key role would rest on the name alone.
