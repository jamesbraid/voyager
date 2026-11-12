# fglrx_drv.so routine readings, batch 3

Readings for routines in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` that the function table
did not show as understood. The picks are every 15th entry from index 3 in address order (24
picks). Each entry comes from a render of its code (`retools/tools/render_reading.py`): the
callees, constant arguments, register offsets and branch and return points. The renders are
partial reads of each body, so every entry is graded inferred. One pick is dropped (see the
end of the file).

- `__fglDRMPM4Queue` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x409fc0
  **Inferred.** Works on a PM4 queue record passed in a0. It reads the ring state through the
  pointer at +8 and a slot table at +16 (offset 512), compares a slot word with the write index
  at [a0+8]+4, and yields the processor with `sginap` (0x40a15c) while the comparison says the
  slot is not free. The mask 0x10000000 is tested against a3 at 0x40a05c and 0x40a074 before the
  wait decision. When the argument a1 is zero the routine returns early at 0x40a110. A separate
  path prints a message through `xf86fprintf` to `xf86stderr` (0x40a194). The meaning of the
  slot and mask values beyond these comparisons is unknown.

- `R200CPSetupForDashedLine` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40c600
  **Inferred.** Builds the command packets for a dashed-line draw on the R200 and submits them
  to the PM4 ring. It allocates packet buffers with `__fglDRMPM4Alloc` (0x40c6d4, 0x40c7cc and
  0x40c8bc, with counts 0x12, 0xc and 0x10), writes packet words at offsets 0x0 through 0x34 of
  each returned buffer, and submits with `__fglDRMPM4Submit` (0x40c7a0 and 0x40c858). The
  raster-operation word is read from the 8-byte entries of `R200_ROP` indexed by a3 (0x40c6ec,
  0x40c8d4). The constants 0x51f and 0x5b3 written into the second submit are passed as-is, and
  their meaning is unknown. The return at 0x40c870 yields the submit result.

- `R200I2cInit` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4159c0
  **Inferred.** Sets up the I2C bus for the R200. It creates a bus record with
  `xf86CreateI2CBusRec` (0x4159d4) and stores it in the driver state at [a0+248]+412 (0x415a08).
  It writes four fields of that record at offsets 0x4, 0xc, 0x10 and 0x34 (0x415a18 to 0x415a44)
  and calls `xf86I2CBusInit` on it (0x415a48). The routine returns 1 when the bus init reports
  success (0x415a64) and 0 otherwise (0x415a78). The creation failure path returns 0 at 0x4159f0.

- `R200ProbeDDC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x418940
  **Inferred.** Reads the monitor's EDID over DDC through VBE. It loads the VBE submodule with
  `xf86LoadSubModule` (0x418950). When the load returns 0 the routine returns that 0 at 0x418960.
  Otherwise it calls `VBEInit` (0x418970) and `vbeDoEDID` (0x418980), stores the result in
  `ConfiguredMonitor` (0x418998), and returns the `vbeDoEDID` value (0x418994).

- `R200InitCrtcRegisters` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x41e280
  **Inferred.** Fills two register save blocks for the CRTC from the mode and driver state. The
  first block is a1 and the second is a2, both filled from the state in a3, through about two
  hundred field copies. It branches on a variant word at [a3+6544] (compared with 4, 8, 0xf,
  0x10, 0x18 and 0x20, 0x41e2bc to 0x41e2e8) and on the CRTC-type words at [a3+76] and
  [[a3+136]+16]. It calls `R200InitCenterMode` (0x41e420) for centred timing and
  `R200InitFPRegisters` (0x41e804, 0x41e8b4, 0x41e984, 0x41ea2c) for the flat-panel set. It
  reports through `xf86DrvMsg` (0x41e304). The returns are 0 at 0x41e324 and 1 at 0x41e5c0. The
  meaning of the individual saved fields is unknown.

- `FGL_check_kernel_module` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x425100
  **Inferred.** Checks that the loaded kernel module matches this driver. It gets the entity
  private with `xf86GetEntityPrivate` (0x42512c) and the module version with `drmGetVersion`
  (0x425144). It compares the module name with the string at 0x467c68 by `xf86strcmp`
  (0x42520c), and compares the major version with 3 and the minor version with 4 (0x42522c,
  0x425234). Mismatches are logged with `xf86DrvMsg`. It then fetches the kernel info with
  `firegl_GetKernelInfo` (0x42529c), frees it with `firegl_FreeKernelInfo` (0x425394) on the
  failure path, and sets module parameters with `firegl_ModuleParm` (0x4253a4). The returns are
  0 at 0x4253ec and 0x425448.

- `FIREGL_DRITreeTraversal` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x429480
  **Inferred.** Adds a region into the clip set held at a0+44. The only call is
  `miUnion(arg1, arg1, a0+44)` at 0x4294a4, and the routine returns 1 (0x4294b8). The routine
  shows no traversal beyond that one union, so the name is not borne out by the code.

- `r200_SetPm4OperationMode` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42c100
  **Inferred.** Works on the chip record reached through [a0+7660]+4. It stores a value at
  offset 0x740 of that record (0x42c134) and calls `r200_EnableCommonBusMaster` with its four
  arguments (0x42c13c). It then tests the mask 0x10200 against four status words at offset 3648
  of the chip record (0x42c158 to 0x42c198), and returns the bus-master result (0x42c1a4). The
  reason the mask is tested four times is unknown.

- `ProcFGLGetPLLValue` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x42f600
  **Inferred.** Protocol request handler that returns one PLL register value to a client. It
  checks the screen index from the request at [a0+8]+4 against the screen count at
  `sym(screenInfo)`+48 (0x42f620). An out-of-range index is reported with `ErrorF` (0x42f638).
  A valid index reads the PLL register at offset [a0+8]+8 with `R200INPLL` on that screen's
  chip record (0x42f690), and the reply is sent as 32 bytes through `WriteToClient` (0x42f6a8).
  The return value is the word at [a0+40].

- `FIREGL_OverlayCopyArea` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4332c0
  **Inferred.** Overlay copy-area hook. It validates the drawables with `VALIDATE_DRAWABLE`
  (0x433384, 0x433398), then reads the screen's chip record through `xf86Screens` at offsets
  0x2078 and 0x18f4 (0x43332c, 0x43340c). It compares the byte at [a2+4] with 8 and 0x18
  (0x43336c, 0x433374), values consistent with a depth in bits. It calls `R200CPAccelInitFuncs`
  with 0 or 1 on the two paths (0x433410, 0x433428), and calls a saved fallback through a pointer
  the render does not resolve (0x4333cc). The return at 0x4333fc yields that fallback's result.

- `FIREGL_OverlayPolyGlyphBlt` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x434780
  **Inferred.** The same shape as `FIREGL_OverlayCopyArea` at 0x4332c0, applied to glyph
  drawing. It validates the drawable with `VALIDATE_DRAWABLE` (0x434844), compares the byte at
  [a1+4] with 8 and 0x18 (0x43482c, 0x434834), calls `R200CPAccelInitFuncs` on the two paths
  (0x4348b4, 0x4348cc), and calls a saved fallback through an unresolved pointer (0x43486c). The
  return value is the word at [a1+68] (0x4348a0).

- `CMapAllocateColormapPrivate` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x435bc0
  **Inferred.** Allocates a per-colormap private block. It reads the screen's entry count from
  [[a0+12]+360] indexed by the word at 0x467ed0 (0x435be0 to 0x435bec), compares it with the
  requested size (0x435bfc), and allocates with `Xalloc` (0x435c24, 0x435c4c, 0x435c88). It
  stores the pointers into the colormap record at [a0+72] (0x435c74) and frees the first block
  with `Xfree` (0x435ccc) on the failure path. The return is 0 at 0x435c40 and 1 at 0x435cbc.

- `FIREGL_OverlayCreateWindow` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x437c40
  **Inferred.** Creates the overlay private for a window. It checks the window's screen with
  `InOverlay` (0x437cb4) and reads the flag at [a0+24] and the chip-record byte at +8280
  (0x437ca4, 0x437cc8). It allocates a 56-byte record with `Xcalloc` (0x437d70, size 0x38). On
  success it calls `RebuildTree` (0x437df4) with the four bounds words of `miEmptyBox`
  (0x437da8 to 0x437de8) to set the window's clip tree. The failure path frees with `Xfree`
  (0x437e04). The returns are 1 at 0x437d60 and 0 at 0x437e2c.

- `sendExposures` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43a940
  **Inferred.** Sends Expose events for a region. It returns early when the rectangle count at
  [a1+8] is zero (0x43a95c). It allocates an event array with `Xalloc` (0x43a988), fills 2-byte
  fields for each rectangle (`sh` stores at 0x43a9d4 to 0x43a9f0) while the count is positive
  (0x43a9a8), and sends the array with `DeliverEvents` (0x43aa28). It frees the array with
  `Xfree` (0x43aa50) and returns the allocated pointer (0x43aa70). The comparison at 0x43aa10
  decides when a record is emitted, and its exact rule is unknown.

- `DstColorkey` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x43d700
  **Inferred.** Writes the destination colorkey state into the chip record. It reads the record
  at [a0+248] and its word at +48 (0x43d704, 0x43d708), then stores one of two values into the
  word at +0x4f4 (0x43d720, 0x43d72c). A zero a1 (0x43d710) selects which of the two stores is
  taken. The values stored are not visible in the render, so what each one turns on is unknown.

- `ProcATITVOAdjustColor` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x446040
  **Inferred.** Protocol request handler for a TV-output colour adjustment. It checks the screen
  index from the request at [a0+8]+4 against `sym(screenInfo)`+48 (0x44606c), tests the sign of
  the value at [a0+8]+8 (0x446094), and replies with 32 bytes through `WriteToClient` (0x4460d0).
  It builds the configuration file path with `getXF86ConfigFileName` (0x44610c), formats two
  strings with `xf86sprintf` (0x446124, 0x446140), and writes them with `UpdateFile` (0x446154).
  The result of `UpdateFile` is tested at 0x44615c. The routine calls `R200SwitchMode` (0x446174)
  and reports through `ErrorF` (0x446194) on its two paths.

- `R200StrGamma16` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x447440
  **Inferred.** Converts a 16-bit gamma ramp. It allocates three arrays of 2 times a3 bytes with
  `Xalloc` (0x447480, 0x447494, 0x4474a4). It reads the current ramp with `VidModeGetGammaRamp`
  (0x4474c4), copies 16-bit entries from the caller's array at a4 into the new arrays in a loop
  with `lh` and `sh` pairs (0x447508 to 0x44757c, loop bound a3 at 0x4475c0), applies the ramp
  through `xf86ChangeGammaRamp` (0x4475dc), and frees the three arrays with `Xfree` (0x4475f0,
  0x447600, 0x447610). The return is the `Xfree` result (0x447624).

- `R200SetScrnGlock` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x449400
  **Inferred.** Stores a genlock state for one screen. It reads the screen's private index
  `sym(vcScreenPrivateIndex)` and uses it to reach the record at [a0+360] (0x44941c to 0x44942c).
  It writes two words into that record at offsets 0x18 and 0x1c (0x449440, 0x449484), reports
  through `ErrorF` on one path (0x449458), and calls `is1SetGenlock` with the screen pointer and a
  flag of 0 or 1 chosen by the caller (0x449470). The return is the result of `is1SetGenlock`
  (0x449488).

- `R200DestroyHyperpipeConfig` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44d240
  **Inferred.** Tears down the hyperpipe configuration for a screen. It reads the screen record
  from `xf86Screens` and the chip record's word at +0x19ac (0x44d288), checks the DRM file
  descriptor with `checkdrmFD` (0x44d284), and issues an `xf86ioctl` with request 0x66670017
  (0x44d2c0). A negative result is logged with `ErrorF` and the `xf86strerror` text (0x44d304),
  and the routine returns -1. Success returns 0 (0x44d2d8). A bad descriptor returns -1
  (0x44d29c). The request number 0x66670017 is not a standard DRM value, and what it asks the
  driver to do is unknown.

- `R200_lockPostValidateTree` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44e500
  **Inferred.** Lock wrapper around a saved hook. It reads the screen index in
  `sym(R200_lockScreenIndex)` (0x44e54c), takes the DRI lock with `DRILock` (0x44e570), calls the
  saved hook through a pointer the render does not resolve (0x44e584), and releases the lock with
  `DRIUnlock` (0x44e59c). The return is the result of `DRIUnlock` (0x44e5bc).

- `R200_lockCopyGC` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x44f100
  **Inferred.** Lock wrapper for the GC copy hook. It saves the GC's operation pointer from the
  slot at +76 indexed by `sym(R200_lockGCIndex)` (0x44f144 to 0x44f14c), writes two words into
  that slot (0x44f1b0, 0x44f1b8), takes the DRI lock with `DRILock` (0x44f164), calls the saved
  operation through an unresolved pointer (0x44f17c), and releases the lock with `DRIUnlock`
  (0x44f190). The return is the address of `sym(R200_lockGCOps)` (0x44f1c8).

- `R200_lockPolyFillRect` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4500c0
  **Inferred.** The same lock-wrapper pattern as `R200_lockCopyGC` at 0x44f100, applied to the
  GC poly-fill-rectangle hook. It takes the GC from a1, uses the slot indexed by
  `sym(R200_lockGCIndex)` (0x450108 to 0x450120), takes and releases the DRI lock (0x450128,
  0x450158), calls the saved hook (0x450144), and returns the address of `sym(R200_lockGCOps)`
  (0x450190).

- `is1UpdateFramelockTiming` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x4523c0
  **Inferred.** Updates the framelock timing record of a board. It compares the name at a0+800
  with `xf86strcmp` (0x452428), reports through `xf86DrvMsg` (0x45245c), and stores about
  nineteen timing fields into the device record at offsets 0x118 through 0x2ec (0x4524f4 to
  0x452518, 0x45252c, 0x4525b4 to 0x452604, 0x452758) and byte flags at 0x2b4 through 0x2bc
  (0x452644 to 0x45266c). It tests a computed rate against the double constant 0x404df851eb851eb8,
  which decodes to 59.94 Hz (0x45261c). It returns -2 at 0x45248c, 0 at 0x452678 and -1 at
  0x4526a8. The meaning of the stored timing fields is unknown.

Dropped: `ENCODE_DEVICE_ID` in `usr/X11R6/lib/modules/drivers/fglrx_drv.so` at 0x40f6c0 (pick
index 33). The render shows 84 bytes with no loads, stores or calls and an unknown return value.
The name in the function table does not match anything the code does, so no role is supported.
