# The X driver's register programming: PreInit, ScreenInit, mode set, cursor, palette, 2D acceleration and the hand-off of the CP

What the XFree86 video driver `fglrx_drv.so` (IRIX 6.5.22, patch SG0005448, N32, 700156 bytes) does to the chip, in the order the
server calls it, with the values it writes. It sits under the GL module's use of the same card
([r300-stream-pm4-packets.md](r300-stream-pm4-packets.md), [r300-stream-kernel-contract.md](r300-stream-kernel-contract.md)).
Routine-by-routine readings of the **6.5.30** build of this module (same routine names, same register sequences where spot-checked,
addresses a constant amount higher: for example `R200PreInit` is at 0x4189c0 there and 0x418fc0 here) are in
[fglrx-drv-functions.md](../xsgi/fglrx-drv-functions.md) and [x-driver-functions.md](../xsgi/x-driver-functions.md); this page adds what
they leave: the order across routines, the values, the routines they left unread (cursor hooks, palette, CP set-up, mode-set
writers) and the changes in 6.5.22. Grades follow `AGENTS.md` section 5.

Method: Ghidra decompiler listings of all 947 functions its analysis recognised (every named routine) plus the six cursor hook routines that have no
symbol (added by address), with an `objdump` listing of `.text` as the check for the cursor hooks. A routine called **established** here
was read whole in the listing. Register names are AMD's where AMD gives them (the display and CP registers are in the R5xx guide; the R3xx
guide covers only the 3D block) and otherwise the public Linux and X.Org `radeon` names (**software expectation**), flagged `(L)`.
The module's routines are all named `R200...` whatever the chip; the chip code at driver record +0x80 (160 in 6.5.30) selects behaviour: codes 44, 45 and
52 are the R300 family cards of the Onyx4 ([x-video-driver.md](../xsgi/x-video-driver.md)).

## 1. PreInit (`R200PreInit`, 0x418fc0): what touches the chip

PreInit is mostly configuration (options, modules, PCI entity); the 6.5.30 page reads its control flow and messages. The hardware
accesses it makes are all in its chain of helper routines, and are **probing**, not programming:

- **EDID by DDC** (`FUN_00411980`, **established**): for the DDC line selected by an argument of 1 to 4 it uses the GPIO register at
  0x68 (`GPIO_MONID`, L), 0x64 (`GPIO_DVI_DDC`, L), 0x60 (`GPIO_VGA_DDC`, L) or 0x6c (`GPIO_CRT2_DDC`, L); it clears bits 1:0, then toggles bits 16 and 17
  with waits of 13 ms and 15 ms, polls bit 9 up to six times for a response, and calls the server's EDID reader (`xf86DoEDID_DDC2`).
- **Option ROM scratch** (`FUN_00412d00`, **established** for the register reads): reads `BIOS_4..7_SCRATCH` (0x20, 0x24, 0x28, 0x2c) to learn what the
  option ROM left (the TV standard in bits 19:16 of 0x28, among others) and walks the ROM's TV table (`$TV` signature) for the standard names
  (PAL-B, NTSC-M ...).
- **DAC and TV load detection** (`FUN_00411dc0`, `FUN_004123c0`, `FUN_004122c0`, **established** for the register sequences; the purpose is **inferred** from
  the pattern in Linux `radeon_legacy_encoders.c`): saves and restores a set of registers (0x7c, 0x280, 0x800, 0xd64, 0x3f8, 0x54, 0x58, 0x888 and 0x88c), writes `TV_DAC_CNTL` (0x88c, L) with
  0x880213 or 0x770213 and sets bits in 0x888, writes the PLL-indexed registers at index 0xa2 and 0xad through 0x8/0xc with a write-enable of 0x80, then reads back the comparator bits. The
  GPIO registers 0x198 to 0x1b0 are used in the same helpers for the monitor-ID pins.
- **PLL reads** (`GetPLLParameters`): `R200INPLL` reads PLL registers through `CLOCK_CNTL_INDEX` (0x8, byte-wide write of the index into byte 3) and
  `CLOCK_CNTL_DATA` (0xc). **Established** for the access method (`R200INPLL`, 24 bytes: stores the index at aperture + 11 and returns the word at +12).

Nothing in PreInit writes the memory controller, the CRTC or the engine. **Established** for the routines listed (the other chain routines have no register
accesses: a scan of every store and load through the aperture pointer found register accesses only in the six helpers above).

## 2. ScreenInit (`R200ScreenInit`, 0x41ac80): the order, with the hardware effect of each step

The order is **established** from the whole routine's call sequence in 6.5.22. Writes are listed with the routine that makes them.

1. `R200SGIVCGetDefMode`, `R200MapMMIO` (maps the register aperture at the entity's base and size, **established**), visual and pixmap set-up. No register access.
2. `QBS_EnableStereo` when stereo is on: reads and writes `CRTC_OFFSET_CNTL` (0x228) twice. **Established.**
3. **`R200DRIScreenInit`** (0x429f00): version checks, then allocation of the front, back, depth, overlay and read buffers through the kernel, then **`FGLEnableCP`** when this is
   the primary screen (section 7). Hardware writes in this step are the CP programming of section 7.
4. **`bR200SetTilingMode`** (0x431240, whole routine, **established**): with no tiling (driver word +0x1fc0 zero; that it is the `BufferTiling` option is **inferred**) it clears bits 31:30 of
   `DEFAULT_OFFSET` (0x16e0, the tile mode), sets bit 8 of `SURFACE_CNTL` (0xb00, L) and clears bit 15 of `CRTC2_OFFSET_CNTL` (0x328) on a second head or the
   bits 15 and 3:0 of `CRTC_OFFSET_CNTL` (0x228, mask 0xffff7ff0). With tiling it clears bit 8 of 0xb00, programs the eight surface regions (the helper at 0x430dc0 zeroes surfaces 0 to 7, the helper at 0x430e40 sets one region per buffer: front, back, depth and the overlay and
   stereo buffers, each as a start and an end address of the form size - 0x800), writes the tile mode into `DEFAULT_OFFSET` bits 31:30 (the buffer-tiling value 2, 3 or 4 maps to 1, 2 or 3),
   and writes `CRTC_OFFSET_CNTL` (or the CRTC2 register) as follows, by chip code 44 (R300 FireGL), 45 or 52 or otherwise: base mask 0xffff51ff, then OR 0x8e00 (mode 2), 0x2600 (mode 3), 0xa600 (mode 4) or 0xc00
   (none); on other chips the low nibble is cleared and bit 15 set. On the second head the corresponding CRTC2 value is `& 0xffff5dff` OR 0x8200, 0x2200 or 0xa200.
5. **Mode set** through the screen's mode routine (`FUN_004224c0`, 0x4224c0; the same routine is `R200SwitchMode`'s core): see section 3.
6. `fbScreenInit` and the rest of the server layers (no register access), then **`R200EngineInit`** (0x40ab00, whole routine, **established**), see section 4.
7. **`R200CursorInit`** (section 5), colour-map and palette hooks (section 6), **`R200AccelInit`** (section 8), `R200DGAInit`, `R200DRIFinishScreenInit`, the extensions
   (`FGLRXAddExtension`, `ATIHPVAddExtension`, `ATITVoutAddExtension`), the compositor and hyperpipe attach (`R200SGIVCAttach`, `SGIGLXHyperpipeInit`) and the lock hook
   (`R200_driLockInit`, which wraps the screen and cursor hooks to take the DRI lock, **established** in the 6.5.30 page). With DRI up it also issues the X driver's one device ioctl,
   request 0x6667000a, which passes the screen's size and display name.

## 3. Mode set: CRTC, PLL and the display block

`FUN_004224c0` (256 bytes, **established**): builds the register image for the mode into the driver record at +0xd30 (`FUN_00421a80`, 2516 bytes), sets a flag, runs two
callbacks (one is the tiling routine above), writes the image to the chip (`FUN_0041d500`), and for stereo calls `FUN_00421640` (toggles bit 10 of 0x1ac and pulses bit 25 of `CRTC_GEN_CNTL`); with more than one head it calls `firegl_SyncDacs` (ioctl
0x20006461) first. `FUN_0041d500` (876 bytes, **established**) writes, in order:

- **First CRTC** (`FUN_0041c2c0`, whole routine): `CRTC_GEN_CNTL` (0x50) from image word +0x48; `CRTC_EXT_CNTL` (0x54) = image +0x4c OR (current & 0x700); `DAC_CNTL` (0x58) = image +0x50 OR (current & 7);
  `CRTC_H_TOTAL_DISP` (0x200), `CRTC_H_SYNC_STRT_WID` (0x204), `CRTC_V_TOTAL_DISP` (0x208), `CRTC_V_SYNC_STRT_WID` (0x20c); `CRTC_OFFSET` (0x224),
  `CRTC_OFFSET_CNTL` (0x228), `CRTC_PITCH` (0x22c); `DISP_MERGE_CNTL` (0xd60), `CRTC_MORE_CNTL` (0x27c), `TV_DAC_CNTL` (0x88c), `DAC_CNTL2` (0x7c), `DISP_OUTPUT_CNTL` (0xd64),
  0xd14, `CRTC2_GEN_CNTL` (0x3f8), `FP2_GEN_CNTL` (0x288), 0x3c4 and 0x3c8. **Established** for the registers and order; the values are fields of the image the mode routine fills.
- **Common block** (`FUN_0041c1c0`, once per card, by the first screen to be set): writes 0x230, 0x234, 0x238, 0x420 (`OV0_SCALE_CNTL`, L), 0x540, 0xc40, 0x94, 0x950, 0x9c0, 0x30 from the image and clears bit 0 of 0x7c
  (the overlay, capture and video registers are brought to a known state). **Established.**
- **Second CRTC** (`FUN_0041c3c0`, when this screen is the second head): `CRTC2_GEN_CNTL` (0x3f8) = image +0x7c OR (current & 0x30800000), `DAC_CNTL2` (0x7c), 0xd68, 0xd64, 0xd14, 0x88c,
  `CRTC2_H_TOTAL_DISP` .. `CRTC2_V_SYNC_STRT_WID` (0x300 to 0x30c), `CRTC2_OFFSET` (0x324), `CRTC2_OFFSET_CNTL` (0x328), `CRTC2_PITCH` (0x32c), 0x288, 0x3c4, 0x3c8. **Established.**
- **Flat-panel block** (`FUN_0041c4c0`): 0x250, 0x254, `FP_H_SYNC_STRT_WID` (0x2c4), `FP_V_SYNC_STRT_WID` (0x2c8), 0x2a8, 0x2a4, `FP_HORZ_STRETCH` (0x28c), `FP_VERT_STRETCH` (0x290), `FP_GEN_CNTL` (0x284),
  0x24, then 0x2d0 three times (a pulsed bit 19). **Established** (registers and order); function inferred from the (L) names.
- **Pixel clock** (the rest of `FUN_0041d500`, **established** for the access sequence): reads PLL registers 3 and 7 and skips the work when they already hold the mode's divider values (not for chip codes
  44, 45, 52 which always reprogram), then for each of PLL indices 8, 2, 3, 7, 9 writes the index (with bit 7, 0x80, set) to 0x8 (it re-writes until it reads back the index) and the value to 0xc:
  index 8 (`VCLK_ECP_CNTL`, L) with bits 1:0 cleared; index 2 (`PPLL_CNTL`, L) ORed with 0x30001 (reset and sleep); index 3 (`PPLL_REF_DIV`, L) low bits from the image
  word +0x34c with the field above bit 18 shifted by 18 for the R300 family; index 7 (`PPLL_DIV_3`, L) from +0x350 under masks 0xfffff800 and 0xfff8ffff; index 9 (`HTOTAL_CNTL`, L) from +0x354; then
  index 2 again with 0xfffcfffc applied (release reset and sleep), a **5 ms** wait, and index 8 ORed with 3. The calls before and after (`FUN_0041c940`, `FUN_0041c8c0`) and `FUN_0041c640`
  with the timing-code helpers (`SaveTimingCode`, `LoadTimingCode`, `Set_MV_Mode`) are used for the dual-view (multi-view) timing of the compositor boards (**inferred**).
- **Frame position** (`R200AdjustFrame`, 6.5.30 page, 1040 bytes in 6.5.22): the tiled-address arithmetic and the writes of `CRTC_OFFSET` (0x224), 0x228 bit 9 (0x200) and, with a clone, `CRTC2_OFFSET` (0x324) and
  the 0x350 to 0x358 cursor-side registers. **Established** in the 6.5.30 reading, same structure here.
- **Memory-controller-visible offsets** (`vCalcCRTCOffsetRegs`): reads `CRTC_OFFSET_CNTL` and `CRTC2_OFFSET_CNTL`. **Established.**
- **DPMS** (`FUN_00423940` and the helpers at 0x40f380 to 0x411700 that set and clear the sync-disable and display-enable bits of `CRTC_EXT_CNTL` bits 10:8, `CRTC2_GEN_CNTL` bits 23, 28:29 and
  `FP_GEN_CNTL`): written in a fixed order, 0x500, 0x600 and 0x700 in the 0x54 field for the three intermediate states. **Established** for the constants; that they are the DPMS states is **inferred**
  (the routine has no direct caller in the listing; it is reached through the server's DPMS hook table).

The numbers in the image (totals, sync positions, the PLL dividers) are computed from the server's mode record with the standard CRTC formulas (`vCalcCRTCOffsetRegs`, `SetClk`, `SetCrtMN`); their
formulas were read for the clock search (`SetClk`, `SetCrtMN`, the 6.5.30 page) and not here: **inferred**.

## 4. The memory controller and engine (`R200EngineInit`, `R200EngineReset`, `R200EngineRestore`)

All three are **established** (whole routines; the 6.5.30 page reads the same sequences with the same constants, verified here for `R200EngineInit` and `R200EngineRestore`).

- **`R200EngineInit`** (EngineInit, called once per primary screen): maps the depth to a data type (8 to 2, 15 to 3, 16 to 4, 24 to 5, 32 to 6, else `xf86exit(1)`), sets the cached 2D state, then **`RB3D_CNTL` (0x1c3c) = 0**,
  `R200EngineReset`, `MC_FB_LOCATION` (0x148) = **0xffff0000**, `DISPLAY_BASE_ADDR` (0x23c) and `CRTC2_DISPLAY_BASE_ADDR` (0x33c) = the low word of the framebuffer's card address, a 5 ms delay
  (`FGLMDelay(5)`) and `MC_FB_LOCATION` = `((base + size - 1) & 0xffff0000) | (base >> 16)` where base is the framebuffer's bus address (doubleword at +0x80 of the entity record) and size its size (word +0xbc); then
  `R200EngineRestore`. (In the 6.5.30 page the offsets are 128 and 188.)
- **`R200EngineReset`**: flush; poll `RBBM_STATUS` (0xe40) bit 31 (2,000,000 reads, then 200 reads with `sginap(0)`; failure "Timeout at __fglQSQuietDown" and `xf86exit(1)`); PLL index 0xd (`SCLK_CNTL`, L)
  read and 0x1fff8000 ORed in (clocks forced on); `CP_CSQ_CNTL` (0x740) = 0; `RBBM_SOFT_RESET` (0xf0) = **0x79** then 0; wait for 0xe40 bit 31; poll `MC_STATUS` (0x150) bit 4 (chip codes 44, 45, 52) or bit 2
  with 500-microsecond delays until set; restore the PLL word. The soft-reset value is the CP, RE, PP, E2 and RB bits (L).
- **`R200EngineRestore`**: `RB2D_DSTCACHE_MODE` (0x3428) = 0 (not on chip codes 44, 45, 52), `DEFAULT_OFFSET` (0x16e0 through `R200SelectBuffer`), `DP_DATATYPE` (0x16c4) with bit 29 cleared, `DEFAULT_SC_BOTTOM_RIGHT` (0x16e8) = **0x1fff1fff**,
  `DP_GUI_MASTER_CNTL` (0x146c) = cached word OR 0x30d0, `DST_LINE_START` (0x1600) = 0, `DST_LINE_END` (0x1604) = 0, `DP_BRUSH_FRGD_CLR` (0x147c) = 0xffffffff, `DP_BRUSH_BKGD_CLR` (0x1478) = 0,
  `DP_SRC_FRGD_CLR` (0x15d8) = 0xffffffff, `DP_SRC_BKGD_CLR` (0x15dc) = 0, `DP_WRITE_MASK` (0x16cc) = 0xffffffff. It then waits for idle.
- **Idle and flush helpers** (**established**): `R200WaitForFifoFunction` polls `RBBM_STATUS` bits 6:0 (free command-FIFO entries); `R200WaitForIdle` waits for 64 free entries and bit 31 clear (2,000,000 polls, then a message "Idle timed out, resetting engine..." and a reset);
  `R200EngineFlush` sets bits 3:0 of `RB2D_DSTCACHE_CTLSTAT` (0x342c) and waits for bit 31 to clear.

The 3D block is never programmed by the X module (`GA`/`SU`/`RS`/`US`/`RB3D`/`ZB` offsets appear only as the `RB3D_CNTL` write above and the CP and VAP init in section 7). **Established** by the register scan.

## 5. Hardware cursor

`R200CursorInit` (0x40e4c0, **established**): creates the server cursor record with flags 0x307 (64 by 64 pixels, with the ARGB, hardware-ARGB-pre-multiplied and 8-pixel-aligned bits; the flag meanings are **inferred**),
six hooks, and reserves one kilobyte of off-screen memory (rounded up to 8 rows when bit 14 of the tiling word is set; failure prints "Hardware cursor disabled due to insufficient offscreen memory"
and the hook set stays registered). The image area is at framebuffer offset `(x + y * width) * bytes_per_pixel` rounded up to 16 (driver word +0x18e0) and the second image 0x400 bytes on (+0x18e4). The six hooks are
unlabelled routines at 0x40d280 to 0x40e480, all **established** (read whole in the listing):

- **Set colours** (0x40d280): `CUR_CLR0` (0x26c) and `CUR_CLR1` (0x270) on the first head, 0x36c and 0x370 on the second (and both when the clone byte is set). (L names `CUR_CLR0/1`.)
- **Set position** (0x40d300, 2332 bytes): computes the hot-spot clipping across the two heads (a stereo and multi-head decision table), clears or sets bit 16 (`CRTC_CUR_EN`, L) of `CRTC_GEN_CNTL` (0x50) and
  `CRTC2_GEN_CNTL` (0x3f8) depending on which head contains the cursor, and writes `CUR_HORZ_VERT_OFF` (0x268, the hot-spot offset when the cursor is partly off-screen at left or top),
  `CUR_HORZ_VERT_POSN` (0x264) = `y | x << 16 | 0x80000000` (bit 31 = lock, L) and `CUR_OFFSET` (0x260) = start of image + the screen's offset + the driver cursor base; on the second head 0x368, 0x364 and 0x360.
- **Load image** (0x40dc80): clears bit 16 of 0x50 and 0x3f8 around the copy of the 64 by 64 image into the off-screen area, then restores them.
- **Hide** (0x40e280): clears bit 16 of 0x50 and 0x3f8. **Show** (0x40e340): sets bit 16 of 0x50 and 0x3f8. **Use-hardware-cursor** (0x40e480, 52 bytes): returns a flag.

## 6. Palette and gamma

`FGLSetGammaData` (0x430240, 1700 bytes) and `Rage6SetGamma16Correction` (0x42e7c0), **established**: select palette 0 or 1 by bit 5 of `DAC_CNTL2` (0x7c), set `DAC_CNTL` (0x58) bit 8 (8-bit DAC in 10-bit mode, L) and clear bit 14, write the
palette index byte (the low byte of `PALETTE_INDEX` at 0xb0, byte address 0xb3, value index * 4), then 256 entries of ten-bit red, green and blue packed as `r << 20 | g << 10 | b` into `PALETTE_30_DATA` (0xb8, L),
finally OR 0xff into 0xb0 and restore bit 5 of 0x7c. The ramp is interpolated from the gamma triple in the driver record (+0x1fb4 and +0x1fb8, ten-bit fields at bits 29:20, 19:10 and 9:0 divided by a constant), with
`FUN_004301c0` doing the exponent and the quantisation to 16.16. `FIREGL_OverlayLoadPalette` (0x43eb00) loads the overlay's 16-bit palette in the same way (6.5.30 page). **Established** for the register accesses; the ramp
arithmetic is **inferred**.

## 7. The 2D acceleration paths (XAA) and the commands they queue

The acceleration record is built by `R200AccelInit` and `R200CPAccelInitFuncs` (6.5.30 page); the hooks that touch the chip all **queue type-0 register writes on the CP ring** through the same two helpers as the GL module's
ring (reserve `FUN_0040a040`, commit `FUN_0040a2c0`, the equivalents of `firegl_PM4Alloc` and the commit of the kernel-contract page) and none of them touches the registers directly. **Established.** Every packet word below is a type-0 header (index = byte offset / 4) followed by a value:

| Hook (6.5.22 address) | Packet words (register: value) |
|---|---|
| `R200CPSetupForSolidFill` (0x40b540), short form | `DP_GUI_MASTER_CNTL` 0x146c: ROP word (table `R200_ROP`) OR cached word OR 0x30d0; `DP_BRUSH_FRGD_CLR` 0x147c: colour; `DP_WRITE_MASK` 0x16cc: mask; `DP_CNTL` 0x16c0: 3 (left to right, top to bottom); 0x1700: 0 |
| same, long form (tiled, no stereo) | master control OR 0x30d2; 0x16c0 and 0x1700 with the tile bit (driver +0x2000 word << 3, or 3); `DST_OFFSET` 0x1404 and `DST_PITCH` 0x1408 from the framebuffer offset and pitch |
| `R200CPSubsequentSolidFillRect` (0x40b700) | `DST_Y_X` 0x1438: x or y << 16; `DST_WIDTH_HEIGHT` 0x1598: height or width << 16 (4 dwords) |
| `R200CPSetupForScreenToScreenCopy` (0x40b980; values from the 6.5.30 page, not re-read) | 0x146c with 0x020030f0 or 0x020030f3; 0x16cc; 0x16c0 (direction bits); in the tiled form `SRC_OFFSET` 0x15ac, `SRC_PITCH` 0x15b0, 0x1704 = 1, `DST_OFFSET` 0x1404, `DST_PITCH` 0x1408, 0x1700; with a transparency colour `CLR_CMP_CLR_SRC` 0x15c4, `CLR_CMP_MASK` 0x15cc = -1, `CLR_CMP_CNTL` 0x15c0 = 0x01000004 |
| `R200CPSubsequentScreenToScreenCopy` (0x40bc80) | `SRC_Y_X` 0x1434, `DST_Y_X` 0x1438, `DST_HEIGHT_WIDTH` 0x143c (6 dwords; right-to-left and bottom-to-top copies start from the far edge) |
| Overlay forms (0x40b7c0, 0x40b8c0) | the same with `DST_PITCH_OFFSET` 0x142c from the overlay's buffer and master control OR 0x32d2 |
| `R200CPReadPixmap` (0x42dd40), `R200CPReadDisplay` (0x42e040) | blits from the screen into a host staging buffer (pull side: the card reads and writes system memory), then a copy to the client: **inferred** (6.5.30 page reads the 6.5.30 forms; not re-read) |
| `R200CPWritePixmap`, `R200CPWriteBitmap`, `...Overlay` | stubs (a log message): host-to-screen writes fall back to the server's software path. **Established** (72-byte routines) |
| `QBS_MakeTrans` (0x43f640) | one rectangle-fill packet per rectangle for the stereo "make transparent" operation |

`R200WaitForIdle` is the synchronisation hook the server calls (it polls registers, not the CP). That the ring is shared with the GL module and the lock keeps them apart is covered on the kernel-contract page. The first word
of each packet group is the raster-operation table's entry for the GX raster operation (for example 0xcc0000 for copy); the table `R200_ROP` has 16 entries of two words (6.5.30 page).

## 8. How the X driver hands the CP to the GL module

All **established** (`FGLInitCP`, `FGLEnableCP`, `FGLStartCP` and the four helpers read in full):

1. **`R200DRIScreenInit`** allocates the buffers through `firegl_AllocBuffer` and registers the screen with the DRI layer (`DRIScreenInit`, SAREA size 0x10000, bus id "PCI:%d:%d:%d"), after querying the kernel module
   (`firegl_QueryVersion` must report 3.4 with patch level at least 1).
2. **`FGLInitCP`** (0x42cd80) zeroes a 0xe78-byte CP record, sets the ring size from the entity record (size in dwords = bytes / 4, **minimum 0xd000 dwords**, else a "too small" message and failure; two more words of
   `(bytes / 16) - 1` capped at 0x3fff and the constant 0x1f whose use is **inferred** as the ring block-size fields), loads the CP microcode through one of two helpers by chip code (`FUN_0042c700` for codes 8, 47, 49, `FUN_0042c780` for 44, 45, 52; not read), then writes the
   registers of the ring (section 2 of the kernel-contract page): `CP_RB_WPTR_DELAY`, `CP_RB_CNTL`, `CP_RB_BASE`, `GEN_INT_STATUS` = 0x2000000, `SCRATCH_ADDR`, `SCRATCH_UMSK` = 0x3f, `CP_RB_RPTR_ADDR` = status page + 0x200 and clears
   the no-update bit; `ISYNC_CNTL` (0x1724) = 3 (R5xx **established** as register name, [rbbm](../../devices/rbbm/registers.md)); `0x26ac` OR 0x110 on the older R200-class codes only; `VAP_CNTL_STATUS`-block word 0x2140 = 0.
3. It then calls **`firegl_InitCP`** (ioctl 0x80206453) with four 64-bit handles and two words taken from the entity record (ring, status page, and two others): the kernel learns the same ring. A nonzero result prints
   the error name.
4. **`FGLEnableCP`** (0x42cbc0, called at the end of `R200DRIScreenInit` for the primary screen) calls three helpers (`FUN_0042c580`, `FUN_0042cb80`, `FUN_0042cb00`, not read) and sets four 64-bit words of the ring
   control block (its +0x228, +0x230, +0 and +8) to the value of a fifth (+0x238), the ring's start position.
5. **`FGLStartCP(drv, 1)`** (0x42cc80, used by `R200EnterVT` and at start): sets mode 8, clears the control block's +0x21c, reads `CP_RB_RPTR` (0x710) and stores it in the control block (+0x200 and +0x20c) and in
   **`CP_RB_WPTR` (0x714)** so the ring starts empty, `sync`, then sets bit 0 of the block's +0x208 (running). **`FGLStartCP(drv, 0)`** stops the CP (mode 0, clears bit 0 of +0x208). `R200LeaveVT` and `R200DRICloseScreen` call it with 0.
6. The server then takes `DRILock` around the CP restart, and the GL clients find the ring through the SAREA and the kernel mappings. The X module keeps issuing its own 2D packets through the same reserve and commit helpers.

**Open:** the microcode helpers (`FUN_0042c700`, `FUN_0042c780`), the two other handles passed to the ioctl, and the order of lock ownership between the server and clients during a VT switch.
