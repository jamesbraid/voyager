# fglrx_drv.so routine readings, batch 3

Readings for routines in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the function table
did not show as understood. The picks are every 15th entry from index 3 in address order (24
picks). Each entry comes from a render of its code (`retools/tools/render_reading.py`): the
callees, constant arguments, register offsets and branch and return points. The renders are
partial reads of each body, so every entry is graded inferred. One pick is dropped (see the
end of the file).

- `__fglDRMPM4Queue` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x409fc0
  **Inferred.** Role (from name): works on a PM4 queue record passed in a0. It loads a pointer from [a0+8] and a slot-table pointer from +16, and compares a word at offset 512 of the slot table with the word at [a0+8]+4. When a1 is zero the branch at 0x409ff8 goes to 0x40a110. `sginap` (0x40a15c, a0 = 0) is called inside a loop that repeats while the slot word differs from [a0+8]+4 (0x40a174), on the fall-through of an unsigned compare of a register against 0x10000000 (0x40a14c; the register is not shown to be the entry a1). The constant 0x10000000 is also compared with a3 at 0x40a05c, 0x40a074 (unsigned, greater or equal) and 0x40a088 (equal); the facts show comparisons, not a bit test. A separate path calls `xf86fprintf` with `xf86stderr` (0x40a194). The meaning of the slot values and the threshold is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `R200CPSetupForDashedLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c600
  **Inferred.** Role (from name): builds command packets for a dashed-line draw on the R200 and submits them to the PM4 ring. It allocates with `__fglDRMPM4Alloc` (0x40c6d4, 0x40c7cc and 0x40c8bc, with counts 0x12, 0xc and 0x10; a2 is a3 << 3 and a3 is `R200_ROP`). It stores words into the first returned buffer at offsets up to 0x3c (0x40c6e0 to 0x40c780) and into the second at offsets up to 0x1c (0x40c7e8 to 0x40c850). It calls `__fglDRMPM4Submit` at 0x40c7a0 and 0x40c858. The facts show `R200_ROP` with an index of a3 << 3 at each allocation, and a word load at +4 follows at 0x40c6ec and 0x40c8d4; the base of that load is not shown. The second submit receives the constants 0x51f and 0x5b3 as a2 and a3; their meaning is unknown. The return at 0x40c870 yields the result of the second submit.
  Reviewed: 2026-11-12 (sonnet)

- `R200I2cInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4159c0
  **Inferred.** Role (from name): sets up the I2C bus for the R200. It calls `xf86CreateI2CBusRec` (0x4159d4) and stores the result at [a0+248]+412 (0x4159e0, in the branch delay slot, so the store happens before the null test). When the result is zero it returns 0 at 0x4159f0. Otherwise it stores a word at offset 0 of the new record (0x415a08) and words at offsets 0x4, 0xc, 0x10 and 0x34 (0x415a18 to 0x415a44), then calls `xf86I2CBusInit` on [a0+248]+412 (0x415a48). It returns 1 at 0x415a64 when the init result is nonzero and 0 at 0x415a78 when it is zero.
  Reviewed: 2026-11-12 (sonnet)

- `R200ProbeDDC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x418940
  **Inferred.** Role (from name): reads the monitor's EDID over DDC through VBE. It calls `xf86LoadSubModule` (0x418950). When that returns 0 the routine returns it at 0x418960. Otherwise it calls `VBEInit` (0x418970) and `vbeDoEDID` (0x418980), stores the `vbeDoEDID` result through a pointer loaded from the global table (0x418998, in the return's delay slot; the target's name, `ConfiguredMonitor`, comes from the symbol and is not in the facts), and returns the `vbeDoEDID` result (0x418994).
  Reviewed: 2026-11-12 (sonnet)

- `R200InitCrtcRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41e280
  **Inferred.** Role (from name): fills two CRTC register save blocks, a1 and a2, from the state in a3, with a long run of field loads and stores whose count was not measured. It compares the word at [a3+6544] with 4, 8, 0xf, 0x10, 0x18 and 0x20 (0x41e2bc to 0x41e2e8). When none matches (the 0x20 compare falls through) it calls `xf86DrvMsg` (0x41e304) and returns 0 (0x41e324). Other branches test the words at [a3+76], [a3+160] and [[a3+136]+16]. `R200InitCenterMode` is called at 0x41e420, when the sign test at 0x41e40c on [a2+64] shifted left by 0x21 does not skip it, and `R200InitFPRegisters` at 0x41e804, 0x41e8b4, 0x41e984 and 0x41ea2c, each behind branches on those words; by name they handle centred timing and the flat-panel set. The return of 1 is at 0x41e5c0. The meaning of the individual saved fields is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `FGL_check_kernel_module` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x425100
  **Inferred.** Role (from name): checks that the loaded kernel module matches this driver. It calls `xf86GetEntityPrivate` (0x42512c) and `drmGetVersion` (0x425144), and logs with `xf86DrvMsg` (0x42516c to 0x4251fc). It compares the field at +16 of the version record with the string at 0x467c68 by `xf86strcmp` (0x42520c) and compares the major version with 3 and the minor version with 4 (0x42522c, 0x425234). `xf86DrvMsg` is called again at 0x425250 (with the version fields and the constant 3) and 0x425270, and `drmFreeVersion` at 0x425284. `firegl_GetKernelInfo` is called at 0x42529c. A nonzero result branches to 0x4253c0 (0x4252a4); the fall-through logs with `xf86DrvMsg` (0x4252b8 to 0x425374). `firegl_FreeKernelInfo` (0x425394), `firegl_ModuleParm` (0x4253a4) and a log at 0x4253d0 follow in address order; which paths reach them was not traced. A return of 0 is at 0x4253ec. A second path logs at 0x42542c and returns 0 at 0x425448. A third return at 0x425418 has a value the facts do not resolve.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_DRITreeTraversal` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x429480
  **Inferred.** Adds a region into the clip set held at a0+44. The only call is
  `miUnion(arg1, arg1, a0+44)` at 0x4294a4, and the routine returns 1 (0x4294b8). The routine
  shows no traversal beyond that one union, so the name is not borne out by the code.
  Reviewed: 2026-11-12 (sonnet)

- `r200_SetPm4OperationMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42c100
  **Inferred.** Role (from name): works on the record reached through [[a0+7660]+4]. It loads a word at offset 0x740 of that record (0x42c118), stores a word at the same offset (0x42c134) and calls `r200_EnableCommonBusMaster` with a0 to a3 as passed in (0x42c13c). It then reloads the word at offset 3648 (0xe40) five times (0x42c150 to 0x42c190) and tests it against the mask 0x10200 after each load (0x42c158 to 0x42c198). The first four tests branch to 0x42c1a0 when the masked value is zero. The fifth branches back to 0x42c150 when it is nonzero. The routine returns the result of `r200_EnableCommonBusMaster` (0x42c1a4). The reason for the repeated reads is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `ProcFGLGetPLLValue` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f600
  **Inferred.** Role (from name): protocol request handler that returns a PLL register value to a client. It compares the screen index at [[a0+8]+4] with the word at `sym(screenInfo)`+48 (0x42f620). An index not below that word goes to `ErrorF` (0x42f638) and returns the word at [a0+40] (0x42f64c). Otherwise it calls `R200INPLL` (0x42f690) with an `xf86Screens` entry chosen through `screenInfo` as a0, the word at [[a0+8]+8] as a1 and 1 as a2, then `WriteToClient` with length 0x20 and a stack buffer (0x42f6a8), and returns the word at [a0+40] (0x42f6c0). The facts do not show how the `R200INPLL` result reaches the reply.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayCopyArea` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4332c0
  **Inferred.** Overlay copy-area hook. It validates the drawables with `VALIDATE_DRAWABLE`
  (0x433384, 0x433398), then reads the screen's chip record through `xf86Screens` at offsets
  0x2078 and 0x18f4 (0x43332c, 0x43340c). It compares the byte at [a2+4] with 8 and 0x18
  (0x43336c, 0x433374), values consistent with a depth in bits. It calls `R200CPAccelInitFuncs`
  with 0 or 1 on the two paths (0x433410, 0x433428), and calls a saved fallback through a pointer
  the render does not resolve (0x4333cc). The return at 0x4333fc yields that fallback's result.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayPolyGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434780
  **Inferred.** The same shape as `FIREGL_OverlayCopyArea` at 0x4332c0, applied to glyph
  drawing. It validates the drawable with `VALIDATE_DRAWABLE` (0x434844), compares the byte at
  [a1+4] with 8 and 0x18 (0x43482c, 0x434834), calls `R200CPAccelInitFuncs` on the two paths
  (0x4348b4, 0x4348cc), and calls a saved fallback through an unresolved pointer (0x43486c). The
  return value is the word at [a1+68] (0x4348a0).
  Reviewed: 2026-11-12 (sonnet)

- `CMapAllocateColormapPrivate` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435bc0
  **Inferred.** Role (from name): allocates a per-colormap private block. It reads a word at +0x28 of the record reached through [[a0+12]+360] indexed by the word at 0x467ed0 (0x435be0 to 0x435bec) and compares it with a value the render does not trace (0x435bfc). It calls `Xalloc` at 0x435c24 (a zero result returns 0 at 0x435c40), at 0x435c4c with size 0xc and at 0x435c88 with size 8, and loads [a0+72] at 0x435c60. `Xfree` (0x435ccc) frees an `Xalloc` result on a failure path; the facts do not say which of the three. Returns are 0 at 0x435c40 and 1 at 0x435cbc.
  Reviewed: 2026-11-12 (sonnet)

- `FIREGL_OverlayCreateWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437c40
  **Inferred.** Role (from name): creates the overlay private for a window. It tests the word at [a0+24] (0x437ca4), calls `InOverlay` (0x437cb4) and branches on its result (0x437cbc), and tests a word at +8280 of the driver record (load at 0x437cc4, branch at 0x437cc8). It calls `Xcalloc` with size 0x38 (0x437d70) and an unresolved function at 0x437cd8. When that function returns 0 the code reaches `Xfree` (0x437e04) and returns 0 at 0x437e2c. `RebuildTree` is called at 0x437df4 with four 16-bit fields of `miEmptyBox` as a1 to a4 (loads at 0x437da8 to 0x437de8). The other return is 1 at 0x437d60.
  Reviewed: 2026-11-12 (sonnet)

- `sendExposures` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a940
  **Inferred.** Role (from name): sends Expose events for a region. It branches to 0x43aa78 when the count at [a1+8] is zero (0x43a95c). Otherwise it calls `Xalloc` (0x43a988) and, when the result is nonzero, runs a loop while a counter is positive (0x43a9a8) that makes 2-byte stores (0x43a9d4 to 0x43aa04), calls `DeliverEvents` with the allocated pointer as a1 and 0 as a3 (0x43aa28) and calls `Xfree` on that pointer as a tail call (0x43aa50). A return at 0x43aa70 yields the `Xalloc` result. A comparison of a6 with a3 at 0x43aa10 is on the loop path; its purpose is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `DstColorkey` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d700
  **Inferred.** Role (from name): writes the destination colorkey state into the driver record. It loads the record at [a0+248] (0x43d700), a word at +48 of it (0x43d704) and a word at +0x4f4 (0x43d708), then stores a word at +0x4f4 in one of two places (0x43d720, 0x43d72c). A zero a1 branches to 0x43d724 (0x43d710) and otherwise execution continues in line. The values stored are not visible in the render, so what each one turns on is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `ProcATITVOAdjustColor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446040
  **Inferred.** Role (from name): protocol request handler for a TV-output colour adjustment. It compares the screen index at [[a0+8]+4] with `sym(screenInfo)`+48 (0x44606c; an index not below it branches to 0x4460ec), branches on the sign of [[a0+8]+8] (0x446094), and calls `WriteToClient` with length 0x20 (0x4460d0). It returns the word at [a0+40] (0x4460e4, 0x4460f4). On a later path it calls `getXF86ConfigFileName` (0x44610c), `xf86sprintf` twice (0x446124, 0x446140) and `UpdateFile` with the three buffers (0x446154) and branches on its sign (0x44615c). When the result is negative `ErrorF` is called with it (0x446194); otherwise `R200SwitchMode` is called with a2 = 0 (0x446174).
  Reviewed: 2026-11-12 (sonnet)

- `R200StrGamma16` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447440
  **Inferred.** Role (from name): converts a 16-bit gamma ramp. It calls `Xalloc` three times with a0 = a3 + a3 (0x447480, 0x447494, 0x4474a4), then `VidModeGetGammaRamp` with a1 = a3 and the three allocations as a2 to a4 (0x4474c4). A loop bounded by a3 (0x4474cc, 0x4475c0) makes unrolled 16-bit loads and stores (`lh` and `sh`, 0x447508 to 0x4475ac); the facts do not show which arrays it reads and writes. It then calls `xf86ChangeGammaRamp` with a1 = a3 and the three arrays as a2 to a4 (0x4475dc), calls `Xfree` three times (0x4475f0, 0x447600, 0x447610) and returns the last `Xfree` result (0x447624).
  Reviewed: 2026-11-12 (sonnet)

- `R200SetScrnGlock` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449400
  **Inferred.** Role (from name): stores a genlock state for one screen. It loads `sym(vcScreenPrivateIndex)` and a pointer at [a0+360] (0x44941c to 0x44942c). It compares a2 with -2 (0x44943c, branching to 0x44949c) and with -1 (0x449444, branching to 0x449468); `ErrorF` at 0x449458 is on the fall-through of the -1 compare. It stores words at offsets 0x18 (0x449440) and 0x1c (0x449484) and calls `is1SetGenlock` with a0 = [a0] and a1 = 0 (0x449470); the facts show no other flag value. The returns are the `is1SetGenlock` result (0x449488) and the `ErrorF` result (0x449494).
  Reviewed: 2026-11-12 (sonnet)

- `R200DestroyHyperpipeConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d240
  **Inferred.** Role (from name): tears down the hyperpipe configuration for a screen. It loads the screen record from `xf86Screens` and a word at +0x19ac (6572) of the driver record and passes them to `checkdrmFD` (0x44d284). A nonzero result returns -1 (0x44d29c); zero continues to `xf86ioctl` with request 0x66670017 (0x44d2c0). A negative ioctl result calls `xf86strerror` and `ErrorF` (0x44d304) and returns -1 (0x44d318); otherwise the routine returns 0 (0x44d2d8). What the request asks the driver to do is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPostValidateTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e500
  **Inferred.** Lock wrapper around a saved hook. It reads the screen index in
  `sym(R200_lockScreenIndex)` (0x44e54c), takes the DRI lock with `DRILock` (0x44e570), calls the
  saved hook through a pointer the render does not resolve (0x44e584), and releases the lock with
  `DRIUnlock` (0x44e59c). The return is the result of `DRIUnlock` (0x44e5bc).
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockCopyGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f100
  **Inferred.** Role (from name): lock wrapper for the GC copy hook. It loads a word at +0x4c of a record and the word at `sym(R200_lockGCIndex)` (0x44f130 to 0x44f14c), stores words at +0x48 and +0x44 (0x44f150, 0x44f168), calls `DRILock` with a0 = [a2] and a1 = 0 (0x44f164), calls an unresolved function with a0 to a2 as passed in (0x44f17c), and calls `DRIUnlock` with a0 = [a2] (0x44f190). After the unlock it stores words at +0x0 and +0x4 (0x44f1b0, 0x44f1b8) and at +0x48 and +0x44 (0x44f1bc, 0x44f1c0), and returns the address of `sym(R200_lockGCOps)` (0x44f1c8). The facts do not show which object each store base is.
  Reviewed: 2026-11-12 (sonnet)

- `R200_lockPolyFillRect` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4500c0
  **Inferred.** The same lock-wrapper pattern as `R200_lockCopyGC` at 0x44f100, applied to the
  GC poly-fill-rectangle hook. It takes the GC from a1, uses the slot indexed by
  `sym(R200_lockGCIndex)` (0x450108 to 0x450120), takes and releases the DRI lock (0x450128,
  0x450158), calls the saved hook (0x450144), and returns the address of `sym(R200_lockGCOps)`
  (0x450190).
  Reviewed: 2026-11-12 (sonnet)

- `is1UpdateFramelockTiming` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4523c0
  **Inferred.** Role (from name): updates the framelock timing record of a board. It tests the byte at a0+800 (0x4523c4), calls `xf86strcmp` on a0+800 (0x452428) and again with [[a0+596]+8] as a1 (0x4526b8), and calls `xf86DrvMsg` (0x45245c, 0x452694) and `ErrorF` (0x452564). It stores words at offsets 0x118, 0x270, 0x2ec, 0x2e8, 0x29c, 0x2a0, 0x298, 0x2e4 and 0x2d0 (0x4524f4 to 0x452518, 0x45252c, 0x4525b4 to 0x452604, 0x452758), a doubleword at 0x278 (0x452630, 0x452634) and byte flags at 0x2b4 through 0x2bc (0x452644 to 0x45266c). It compares a floating-point value against the double 0x404df851eb851eb8, which is 59.94 (`c.eq.d` at 0x45261c). It returns -2 at 0x45248c, 0 at 0x452678 and -1 at 0x4526a8. The meaning of the stored fields is unknown.
  Reviewed: 2026-11-12 (sonnet)

Dropped: `ENCODE_DEVICE_ID` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f6c0 (pick
index 33). The render shows 84 bytes with no loads, stores or calls and an unknown return value.
The name in the function table does not match anything the code does, so no role is supported.
