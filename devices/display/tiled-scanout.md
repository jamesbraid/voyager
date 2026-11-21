# Tiled front buffer layout and scan-out (R300 and R350)

How a pixel at (x, y) of a macro-tiled front buffer maps to a video-memory byte address, and how the first display controller (CRTC) is programmed to scan such a buffer out. The IRIX X server on the Onyx4 programs `CRTC_OFFSET_CNTL` with 0x8e00 (macro tiling, no micro tiling, X/Y start mode) and `CRTC_TILE_X0_Y0` (0x350); this page is what a model of the display controller needs to read that buffer.

Grades, as defined in the repository's evidence rules and the QEMU manual-page convention: **established** (read in full from a published document or public source, or the whole routine in a shipped binary), **observed** (seen on hardware; none here, no hardware is available), **software expectation** (what shipped or public software assumes; not proof of the silicon), **inferred**, **approximation**, **unknown**. Every fact below carries one.

## Summary

- A tiled surface is built from 2048-byte macro tiles, each an 8 by 8 grid of 32-byte micro blocks. The 64 micro blocks are not stored in raster order: the six bits of a block's index are the grid coordinates XOR-mixed (a bank swizzle that also uses the parity of the macro tile's column and row). Software expectation, with the exact mixing verified by running the shipped routine, see [Address formula](#address-formula).
- For the 0x8e00 case (macro tiled, micro linear) a macro tile is 256 bytes wide by 8 rows: 64 by 8 pixels at 32 bits per pixel.
- The CRTC takes the surface base from `CRTC_OFFSET` (2 KB aligned), the pitch from `CRTC_PITCH`, and the pixel at the top left of the display from `CRTC_TILE_X0_Y0` (x in bits 15:0, y in bits 31:16). The pixel shown at display position (cx, cy) is the surface pixel (x0 + cx, y0 + cy), fetched with the formula below.

## Address formula

Terms: `B` is bytes per pixel (1, 2, 4, 8 or 16), `pitch_px` the surface pitch in pixels, `base` the surface start (a multiple of 2048), `x` and `y` the surface pixel coordinates. `bit(v, i)` is bit `i` of `v`.

A micro block is 32 bytes. Its size in pixels, `mw` by `mh`, depends on whether micro tiling is on:

| Bytes per pixel | Micro linear (`mw` x `mh`) | Micro tiled (`mw` x `mh`) |
|---|---|---|
| 1 | 32 x 1 | 8 x 4 |
| 2 | 16 x 1 | 8 x 2 (a 4 x 4 "square" form also exists) |
| 4 | 8 x 1 | 4 x 2 |
| 8 | 4 x 1 | 2 x 2 |
| 16 | 2 x 1 | none |

Macro tiled, micro linear (the 0x8e00 case): a macro tile is 8 micro blocks wide and 8 high, so 256 bytes by 8 rows. Macro tiled and micro tiled (0xa600): `8 * mw` by `8 * mh` pixels, for example 32 by 16 at 32 bits. Both tables are established: AMD's R5xx Acceleration reference, revision 1.5, chapter 2 (printed pages 9 and 10), and Mesa 20.3.5 `src/gallium/drivers/r300/r300_texture_desc.c` (the pixel-alignment table) agree with each other and with the shipped routine.

```
mbx  = x / mw                       # micro block column
mby  = y / mh                       # micro block row
tile = (mby >> 3) * (pitch_px / (8 * mw)) + (mbx >> 3)    # macro tiles in raster order
blk  =   bit(mbx,0)            << 0     # micro block index inside the tile, 6 bits
       | bit(mby,0)            << 1
       | (bit(mbx,1) ^ bit(mby,2)) << 2
       | (bit(mbx,2) ^ bit(mby,1)) << 3
       | (bit(mbx,2) ^ bit(mby,3)) << 4
       | (bit(mbx,3) ^ bit(mby,2)) << 5
in   = micro linear: (x % mw) * B
       micro tiled : ((y % mh) * mw + (x % mw)) * B
addr = base + tile * 2048 + blk * 32 + in
```

Notes on the formula:

- `bit(mby,3)` and `bit(mbx,3)` look past the 8 by 8 grid. They are the low bits of the macro tile's own row and column index, so the swizzle alternates between neighbouring macro tiles (a bank swizzle). A model must use the absolute surface coordinates, not coordinates reduced inside the tile. Software expectation.
- Spelled out for 32 bits per pixel, micro linear, offset inside the 2048-byte tile (bit numbers of the byte offset): bits 4:2 are x[2:0], bit 5 is x[3], bit 6 is y[0], bit 7 is x[4] ^ y[2], bit 8 is x[5] ^ y[1], bit 9 is x[5] ^ y[3], bit 10 is x[6] ^ y[2]. The tile index is `(y >> 3) * (pitch_px / 64) + (x >> 6)`. Bits 1:0 of the offset are the byte within the pixel.
- In the micro-linear case, a pixel's byte column `x * B` plays the role of `mbx`: the same mixing is written with `bc = x * B` as offset bits 5:0 = bc[5:0], bit 6 = y[0], bit 7 = bc[6] ^ y[2], bit 8 = bc[7] ^ y[1], bit 9 = bc[7] ^ y[3], bit 10 = bc[8] ^ y[2], and tile column `bc >> 8`. This is the same formula for every pixel size.
- Eight consecutive pixels along a scan line at 32 bits per pixel share one 32-byte micro block. The next eight (x[3] flips) are in the block whose index differs in bit 0, at +32 bytes inside the tile, so a scan line is a sequence of 32-byte chunks and a tile is not a raster.
- The formula is bijective over a tile, so every address is used once.
- The older 256-byte-row layout (address = tile * 2048 + (y % 8) * 256 + (x * B) % 256, with the tile index counted over the 2 KB rows) is what the public X driver writes for the pre-R300 chips (R100 and R200 families). It is not the R300 layout: for 32 bits per pixel it puts (0, 1) at +0x100 where the R300 routine puts it at +0x40. The IRIX X driver contains the same older arithmetic but does not use it for the chip codes it assigns to the R300 and R350.

Grade of the formula: **software expectation**. Source: the shipped GL driver's software tiled-address routine (below). It is the only published statement of the exact block order: the AMD reference says only that micro tiles are "re-ordered within a Macro-Tile to improve dram locality", and Linux, Mesa and the X driver leave the reorder to hardware (they never compute CPU-side addresses for macro-tiled R300 surfaces; they let the memory-controller surface registers or a blit do it). It was not checked against a scan-out, a DMA or any silicon, so it is not established or observed. That the display controller uses the same order as the 3D pipe and the host surface aperture is inferred: the GL driver's software drawing to the front buffer with this routine would corrupt the picture otherwise.

### Where the formula comes from (shipped binary)

The IRIX GL driver does software drawing into tiled buffers, and computes each address itself.

- `usr/X11R6/lib/modules/dri/fglrx_dri64.so` (n64): the tiled-address routine `__R300ComputeTiledAddr`, 2720 bytes at 0x7da320, whole routine read. Its caller `__R300FBAddressMacrotiled` (264 bytes at 0x7da210) passes the surface record's tiling flags (record +0xbc), bytes per pixel (+0x24), pitch in pixels (+0x2c) and the surface base plus offset, and the pixel coordinates relative to the window origin (context words +0x7600 and +0x7604).
- `usr/X11R6/lib/modules/dri/fglrx_dri.so` (n32): the same routine at 0x78bcc0 (2600 bytes) and caller at 0x78bb80.
- Arguments: base (low 11 bits dropped, added as `base >> 11` to the tile index), bytes per pixel, pitch in pixels (not bytes: the linear path computes `B * (x + pitch * y)`), tiling flags, x, y. The result is a byte address.
- Tiling flags: bit 0 macro tiled, bit 1 micro tiled, bit 2 square 4 by 4 micro block (16 bits per pixel only; any other pixel size returns 0). Value 0 is plain linear. The routine reads bit 2 only when bit 1 is clear, so the square form is flags 5 (macro tiled plus square) and flags 7 behaves exactly like 3 (running it showed identical results). The routine returns 0 for 24 bits per pixel and for micro tiled 16 bytes per pixel. **Inferred**: the meaning of the bits comes from the block geometry each branch implements, matching the AMD table; the flag names are not in the binary.
- The routine switches on bytes per pixel (1, 2, 4, 8 and, for micro-linear, 16) and the flag bits, and computes the six block-index bits as XORs of coordinate bits exactly as in the formula above. The tile index uses 6-bit and 8-bit masks on the macro tile column and the pitch term, so coordinates above 4095 pixels at 32 bits per pixel are not supported by this routine. Not a hardware limit.

Method and check: both builds of the routine were run in a CPU emulator on random inputs (6000 inputs, 1, 2, 4, 8 and 16 bytes per pixel, flags 0 to 3, random pitch and base) and gave identical results; the formula above was then fitted to the routine's output and agrees with it on 2500 random inputs across ten configurations (micro linear at 1, 2, 4, 8 and 16 bytes per pixel; micro tiled at 1, 2, 4 and 8; the square form at 2, flags 5) with no mismatch. The emulation shows what the shipped code computes, not what hardware does.

## Worked examples

32 bits per pixel, `pitch_px` 1280 (5120 bytes, 20 macro tiles per tile row), `base` 0. Each result was computed twice, by the formula and by running the shipped routine; they agree.

| (x, y) | Micro linear, macro tiled (0x8e00): address | tile index, offset in tile | Micro tiled, macro tiled (0xa600): address |
|---|---|---|---|
| (0, 0) | 0x0 | 0, 0x000 | 0x0 |
| (7, 0) | 0x1c | 0, 0x01c | 0x2c |
| (8, 0) | 0x20 | 0, 0x020 | 0x80 |
| (0, 1) | 0x40 | 0, 0x040 | 0x10 |
| (0, 8) | 0xa200 | 20, 0x200 | 0x480 |
| (31, 15) | 0xa77c | 20, 0x77c | 0x67c |
| (64, 0) | 0xc00 | 1, 0x400 | 0x1000 |
| (100, 37) | 0x28bd0 | 81, 0x3d0 | 0x29d30 |
| (1279, 1023) | 0x4ff87c | 2559, 0x07c | not computed |

Reading the micro-linear column by hand for (100, 37): `mbx = 12`, `mby = 37`; `tile = (37 >> 3) * 20 + (12 >> 3) = 4 * 20 + 1 = 81`; block bits: bit0 = 0, bit1 = 1, bit2 = bit(12,1)=0 ^ bit(37,2)=1 -> 1, bit3 = bit(12,2)=1 ^ bit(37,1)=0 -> 1, bit4 = 1 ^ bit(37,3)=0 -> 1, bit5 = bit(12,3)=1 ^ bit(37,2)=1 -> 0; `blk` = 0b011110 = 30; in-block offset = (100 % 8) * 4 = 16. Address = 81 * 2048 + 30 * 32 + 16 = 0x28bd0. Matches.

## Pitch, alignment and size rules

- Pitch: a multiple of 256 bytes for macro tiled and micro linear (64 pixels at 32 bits, 128 at 16, 256 at 8). Software expectation: the public X driver aligns pitches of tiled pre-R600 surfaces to 256 bytes (`drmmode_get_pitch_align` in xf86-video-ati 6.14.6, `src/drmmode_display.c`), and AMD's M56 register reference (a later chip, revision 0.03o) states the same multiples for macro-tiled, micro-linear display surfaces under `D1GRPH_PITCH`. For macro and micro tiled, a multiple of `8 * mw` pixels follows from the tile size (inferred).
- Height: the public X driver rounds the allocated height up to 16 rows for any tiled surface, which covers the 8-row and 16-row tiles (software expectation, same function).
- Base: 2048-byte aligned (the macro tile size; AMD Acceleration reference chapter 2.3). The public drivers mask the CRTC base with `~0x7ff`. The IRIX X driver does not mask it (it takes the buffer's offset as allocated). Behaviour of the CRTC with a base whose low 11 bits are set is unknown.
- Small surfaces: the 3D samplers and the colour buffer switch back to macro-linear when an image is smaller than one macro tile (AMD Acceleration reference chapter 4.5, and a note in xf86-video-ati's `radeon_exa.c`). A front buffer is always larger, so not a concern for scan-out.
- 24 bits per pixel has no tiled form in the shipped routine (no case for 3 bytes per pixel). Unknown for the CRTC.

## How the CRTC reads it

### `CRTC_OFFSET_CNTL` (0x228)

Bit meanings are the public names (`R300_CRTC_*` in Linux `drivers/gpu/drm/radeon/radeon_reg.h`, v6.6, lines 506 to 528, and xf86-video-ati 6.14.6 `src/radeon_reg.h`): **established** as names and positions, **software expectation** as behaviour.

| Bit | Name | In 0x8e00 | Meaning |
|---|---|---|---|
| 3:0 | tile line | 0 | R100/R200-family start line inside the tile (y % 16). Not used with X/Y mode. |
| 6 | `X_Y_MODE_EN_RIGHT` | 0 | X/Y start mode for the right-eye (stereo) buffer |
| 8:7 | `MICRO_TILE_BUFFER_RIGHT` | 0 | micro-tile line buffer mode for the right eye (0 auto, 1 single, 2 double, 3 disabled) |
| 9 | `X_Y_MODE_EN` | 1 | the first pixel comes from `CRTC_TILE_X0_Y0` instead of from the low bits of the offset |
| 11:10 | `MICRO_TILE_BUFFER` | 3 (disabled) | micro-tile line buffer mode (0 auto, 1 single, 2 double, 3 disabled) |
| 12 | `MICRO_TILE_EN_RIGHT` | 0 | micro tiling for the right eye |
| 13 | `MICRO_TILE_EN` | 0 | the surface is micro tiled |
| 14 | `MACRO_TILE_EN_RIGHT` (same position as `TILE_EN_RIGHT`) | 0 | macro tiling for the right eye |
| 15 | `MACRO_TILE_EN` (same position as `TILE_EN`) | 1 | the surface is macro tiled |
| 16 | `OFFSET_FLIP_CNTL` | 0 | page-flip control (not set by the value) |
| 17 | `STEREO_OFFSET_EN` | 0 | stereo offsets (see the existing 0x228 entry) |

So 0x8e00 means: macro tiled (bit 15), micro tiling off (bit 13 clear), X/Y start mode on (bit 9), micro-tile line buffer disabled (bits 11:10 = 3). It is the combination the public Linux and X drivers write for a macro-tiled R300-family scan-out buffer (`radeon_crtc_do_set_base` in `drivers/gpu/drm/radeon/radeon_legacy_crtc.c`, v6.6, about lines 484 to 497; `src/legacy_crtc.c` and `src/radeon_driver.c` in xf86-video-ati 6.14.6): software expectation. The kernel also ORs the left-eye trigger bit `GUI_TRIG_OFFSET_LEFT_EN`; the IRIX value has no such bit.

The IRIX driver's four tiling values for the first CRTC on the chip codes it gives to the R300 and R350 (codes 44, 45 and 52; the FireGL X1 is 44, the X2 is 52):

| Tiling mode (driver word) | `CRTC_OFFSET_CNTL` OR-ed after clearing bits 15, 13, 11, 10, 9 | Reading |
|---|---|---|
| 2 | 0x8e00 | macro tiled, micro linear |
| 3 | 0x2600 | micro tiled only, X/Y mode, micro-tile buffer single (0x2000 + 0x200 + 0x400) |
| 4 | 0xa600 | macro and micro tiled, X/Y mode, micro-tile buffer single |
| none | 0xc00 | linear, micro-tile buffer disabled, X/Y mode off |

Software expectation. Evidence: `fglrx_drv.so` (`usr/X11R6/lib/modules/drivers/`), the stores of the masks 0xffff51ff and the constants at 0x4313f8, 0x431404 and 0x43140c in `bR200SetTilingMode` (0x430dc0, 1616 bytes; the routine is read in full in [x-driver-functions.md](../../software/xsgi/x-driver-functions.md)), and a second site with the same constants (0x421fb8, 0x421fe0, 0x421ff0, mask at 0x421e4c) in an unnamed static routine that was not read as a whole. The second CRTC uses 0x8200, 0x2200 and 0xa200 under the mask 0xffff5dff, which clears bits 15, 13 and 9 only: macro or micro bit plus X/Y mode, no micro-tile buffer field (the same routine; that CRTC2 has no such field is inferred).

### `CRTC_OFFSET` (0x224), `CRTC_PITCH` (0x22c), `CRTC_TILE_X0_Y0` (0x350)

- `CRTC_OFFSET`: byte address of the start of the surface in the frame buffer, relative to `DISPLAY_BASE_ADDR`; with X/Y mode on it is the surface base and carries no x or y. Software expectation: Linux sets it to the buffer address with the low 11 bits masked off for macro tiling, then clears the low 3 bits (`base &= ~7`); the IRIX X driver writes the buffer's offset (its helper at 0x422540, called with x = y = 0 for the codes above, from `R200AdjustFrame` at 0x422680).
- `CRTC_TILE_X0_Y0` (0x350; the second CRTC's is 0x358): x in bits 15:0, y in bits 31:16 (`x | (y << 16)`). Software expectation. Linux writes it in `radeon_crtc_do_set_base` and xf86-video-ati in `RADEONDoAdjustFrame` (`src/radeon_driver.c`, lines 6122 to 6130, 6.14.6), both from the panning origin; the IRIX driver builds the same word from the frame position at 0x422760 to 0x42276c and writes it at 0x4229f4 (first head; the stereo right-eye copy at 0x354 is inferred, [bit-layouts.md](bit-layouts.md)). Public comment, in xf86-video-ati: "the x/y offsets are handled by the X_Y tile reg for each crtc". Field widths (x 14 or 16 bits) are unknown.
- `CRTC_PITCH` (0x22c): the public drivers write the pitch in units of 8 pixels (pitch in pixels / 8) into both 16-bit halves of the register. Software expectation (public only). The IRIX driver restores a saved word to this register at 0x41bd6c (`sw` of the word at record +0x70); how that saved word is computed was not traced, so the IRIX unit is not read.
- Pixel size comes from `CRTC_GEN_CNTL` bits 11:8 (public: 2 = 8, 3 = 15, 4 = 16, 5 = 24, 6 = 32 bits per pixel); with the 0x8e00 case at 32 bits per pixel the micro block is 8 by 1 pixels, tile 64 by 8.

### Scan-out algorithm for a model

For display pixel (cx, cy) with `x0 = TILE_X0_Y0[15:0]`, `y0 = TILE_X0_Y0[31:16]`:

1. surface pixel `(x, y) = (x0 + cx, y0 + cy)`;
2. byte address `= CRTC_OFFSET (with the low 11 bits cleared) + tiled(x, y)` using the formula above with `pitch_px = CRTC_PITCH * 8`;
3. in practice read each 8-pixel (32-bit case) run as one 32-byte chunk.

Software expectation as a whole: step 1 and the use of the pitch in step 2 follow the public drivers' intent, the order inside the tile follows the shipped GL driver. No source states hardware behaviour for a surface that wraps the pitch, goes beyond the surface, or pans so that `x0 + cx` passes `pitch_px`.

## Unknowns and what would settle them

| Unknown | Why it matters | What would settle it |
|---|---|---|
| Whether the CRTC's scan-out order is the same as the order the GL driver's routine computes | The model's picture depends on it. Inferred from the GL driver drawing to the displayed buffer with it. | A scan-out capture of a tiled buffer with known contents, or a published AMD description of the R3xx display fetch (the R5xx display chapter describes the macro-tiled micro-linear mode but not the order). |
| Whether pipe count or the R350 differs from the R300 | The routine takes no pipe parameter; one routine serves all codes. | The same capture on a FireGL X2, or the AMD R3xx/R350 memory-controller chapter. |
| `CRTC_PITCH` unit in the IRIX driver | Public unit is 8 pixels. | Trace the mode-set routine that fills the saved record (+0x70 of the record restored at 0x41bd00). Software-only step, not done here. |
| Low 11 bits of `CRTC_OFFSET` with macro tiling; panning past the surface; widths of the `TILE_X0_Y0` fields; 24 bits per pixel | Model corner cases. | Not in any public source read; the AMD R3xx display chapter if it exists. |
| Square micro tile (flag bit 2) mapping in the CRTC | The CRTC supports macro, micro and neither in its public bits only. AMD's R5xx table lists the 4 by 4 16-bit micro tile as supported by texture, colour buffer, depth and host path but not display (the 8 by 2 form and the 4 by 2 32-bit form are the display-supported ones). | Same capture. |
| Micro-tile line buffer behaviour (bits 11:10) | The model can ignore it for 0x8e00 (disabled). | AMD display chapter. |

## Sources

- Linux v6.6 `drivers/gpu/drm/radeon/radeon_legacy_crtc.c` (`radeon_crtc_do_set_base`), `radeon_reg.h` (lines 506 to 533), `r100.c` (`r100_set_surface_reg`), `radeon_gem.c` (`radeon_align_pitch`): public, GPL; facts stated in my own words.
- xf86-video-ati 6.14.6: `src/radeon_driver.c` (`RADEONDoAdjustFrame`, surface set-up around lines 4319 to 4450), `src/legacy_crtc.c`, `src/drmmode_display.c` (alignment functions), `src/radeon_exa.c`.
- Mesa 20.3.5 `src/gallium/drivers/r300/r300_texture_desc.c` (pixel-alignment table), Mesa 10.6.9 `src/mesa/drivers/dri/radeon/radeon_tile.c` (micro tiling only, no macro reorder).
- AMD Radeon R5xx Acceleration, revision 1.5, chapters 2 and 4; AMD R3xx 3D Register Reference Guide, revision 1.0 (`RB3D_COLORPITCH`, `TX_OFFSET`: tile bit names only); M56 Register Reference Guide, revision 0.03o (`D1GRPH_PITCH`, `D1GRPH_MACRO_ADDRESS_MODE`). Listed in [references/documents/INDEX.md](../../references/documents/INDEX.md).
- Shipped binaries of the Onyx4 install set (paths are under `usr/X11R6/lib/modules/` of the IRIX 6.5.30 set listed in [references/irix-files.md](../../references/irix-files.md)): `dri/fglrx_dri64.so`, `dri/fglrx_dri.so`, `drivers/fglrx_drv.so`. The addresses are virtual addresses in the file. Whether SGI patch 5448 changes these routines was not checked: only the 6.5.30 install set was read.

## Review note

Independent review of this page against the shipped binaries and the public sources it cites. Checked: the routine in both builds (n64 at 0x7da320, n32 at 0x78bcc0) was run in a CPU emulator on the page's worked examples (every entry of both columns except the "not computed" cell) and on about 3900 random inputs per build over pixel sizes 1 to 16 bytes, micro linear and micro tiled, several pitches and bases; the formula matched every one. The square 4 by 4 form was checked separately (2000 inputs) and matches with flags 5, not 7: the page originally implied bit 2 combines with bit 1, which the routine ignores (fixed above). Base low bits are dropped (checked: base 0x123 gives the same address as 0), and the 4096-pixel limit at 32 bits per pixel is real (x = 4096 wraps to column 0). In `fglrx_drv.so`, `bR200SetTilingMode` at 0x430dc0 does contain the constants 0x8e00, 0x2600, 0xa600 and 0xc00 under mask 0xffff51ff for the first head (chip codes 44, 45 and 52, tiling words 2, 3, 4) and 0x8200, 0x2200, 0xa200 under 0xffff5dff for the second; the `CRTC_TILE_X0_Y0` store at 0x4229f4 writes `x | (y << 16)` built from the `R200AdjustFrame` arguments (x in the second argument, y in the third). Public claims re-read: Linux `radeon_reg.h` and `radeon_legacy_crtc.c` (current Library copy; the line numbers differ a little from v6.6, the content matches), xf86-video-ati 6.14.6 `drmmode_get_pitch_align` (256 bytes for tiled pre-R600) and `drmmode_get_height_align` (16 rows), `RADEONDoAdjustFrame`, Mesa 20.3.5's alignment table, and the AMD R5xx Acceleration reference chapter 2 (printed pages 9 and 10): all confirmed. Not checked: the AMD M56 reference, the second-head register numbers beyond 0x328 and 0x358, and the unnamed second site at 0x421fb8.
