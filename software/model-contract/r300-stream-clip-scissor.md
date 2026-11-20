# Clip rectangles, the clip rule, the 3D scissor and the scissor bias, as the R300 GL module programs them

Every routine of the R300 user-space stream that writes `SC_CLIP_RULE`, the four clip rectangles or the 3D scissor, read in
full, with every value written and the answer to the 1440-versus-1088 question that
[engine facts section 8](r300-engine-facts.md#8-clip-rectangles-the-clip-rule-the-scissor-and-set_scissors) left open. This
page reads the IRIX **6.5.22** build (patch SG0005448) of `fglrx_dri64.so` (14482024 bytes); section 8 read the 6.5.30 build,
whose routine addresses differ (for example the submit routine is at 0x8c7f80 there and 0x8f1240 here). The behaviour
agrees where both were read, and section 6 says what was cross-checked. Register definitions: AMD *Radeon R3xx 3D Register
Reference* rev 1.0, `SC` block ([sc](../../devices/sc/registers.md)). Grades follow `AGENTS.md` section 5.

Method: Ghidra decompiler listings of each named routine, with the `objdump` instruction listing of the whole `.text` as
the check for every constant and for the stores that name a routine (an `objdump` scan for the register index of the rule,
4340, found each routine below and no other outside the `__R200*` and `__R100*` routines, which use a different register map). Routines are named by their shipped symbol; three of them have no symbol of
their own and are named by address and the symbol they sit next to.

## 1. Every writer of SC_CLIP_RULE

`SC_CLIP_RULE` is register 0x43d0, dword index 0x10f4; every write is a one-register type-0 packet. Bit n of the rule is
the visibility of a pixel whose four "inside" flags form the number n (AMD R3xx, printed page 36; R5xx printed page 203),
so 0xfffe (all but bit 0) is "inside at least one rectangle", 0xffff is "everything visible", and the 32-bit value
0xffffffff writes the same sixteen live bits plus reserved ones. The register is 16 bits wide in AMD's table.

| # | Routine (6.5.22 address) | Value | When | Read |
|---|---|---|---|---|
| 1 | `__R300DRMSubmitPM4` (0x8f1240) | 0xfffe | first word of a submit that has 1 or more rectangles | whole routine |
| 2 | `__R300DRMSubmitPM4` | 0xffff | a submit whose rectangle count is negative (instead of the list) | whole routine |
| 3 | `__R300DRMSubmitPM4` | 0xffff | last packet of every submit, followed by `SET_SCISSORS` | whole routine |
| 4 | `__R300AccumClear` (0x7d2000) | 0xffffffff | once, before the full-surface rectangle draw of an accumulation-buffer clear | whole routine |
| 5 | `__R300NoGCSetOverrideRendering` (0x7dc000) | 0xffffffff | only when bit 12 (0x1000) of the descriptor word at descriptor +0x18 is set | whole routine |
| 6 | `__R300ResolveMultisampledColorBuffer` (0x7cee80) | 0xffffffff | in both arms of the final state block (rule, scissor and `SC_SCREENDOOR` set open before the resolve rectangle) | the final state block and its set-up read; the long middle of the 5484-byte routine not read |
| 7 | unnamed routine at 0x86dec0, in the code that follows the symbol `__R300_Imaging_DrawTexRectDWords` | 0xffffffff | only when bit 12 (0x1000) of the descriptor word at +0x18 is set | whole routine |
| 8 | unnamed routine at 0x8a8a80, in the code that follows the symbol `__R300FastReadPixels` | 0xffff | always (the routine is a fixed state block for the read-back) | whole routine |

All of rows 1 to 8 are **established** for the value written and the condition shown. The `__R300SetOverrideRendering`
routine and the other routines the 6.5.30 page listed as holding the rule's register index by constant scan do **not** write the rule
in 6.5.22 as read here: `__R300SetOverrideRendering` writes, of the `SC` registers, only the two scissor registers (section 3), and the two symbols
`__R300_Imaging_DrawTexRectDWords` and `__R300FastReadPixels` are 92 and 752 byte stubs whose real bodies are the unnamed
routines of rows 7 and 8 (the symbol sizes in the file do not cover them). No other routine of the file holds the constant
4340 as an immediate. A model should expect exactly three values, 0xfffe, 0xffff and 0xffffffff; no value outside them is
written by the R300 stream.

The condition bit in rows 5 and 7 is bit 12 of a state descriptor that the callers build for "override rendering"
(copy, read-back and imaging draws, which want the clip rule open while they run). What the descriptor is called and who
sets the bit is **unknown**; both routines set the rule to "everything visible" under it and leave it alone otherwise, so the
bit means "the caller's rectangle list must not clip this draw" (**inferred**).

## 2. Clip rectangles: the submit routine

All of this is **established** (whole routine, 1012 bytes, 6.5.22). It is the same as the 6.5.30 reading in
[engine facts section 8](r300-engine-facts.md#8-clip-rectangles-the-clip-rule-the-scissor-and-set_scissors) except for the
addresses and the packet word values, which are repeated here so the page stands alone.

- **Input.** A submit record (layout in [r300-stream-kernel-contract.md](r300-stream-kernel-contract.md)): flags at +0, buffer
  bus address at +0x10, length in dwords at +0x14, rectangle count (signed) at +0x18, a pointer to the rectangles at +0x20.
  Each rectangle is four unsigned 16-bit values x0, y0, x1, y1; x1 and y1 are exclusive.
- **Count above or equal to 1.** One packet group per batch of four rectangles. The batch writes `SC_CLIPRECT_TL_n` and
  `SC_CLIPRECT_BR_n` for n = 0 to 3 as four type-0 two-register writes at byte offsets 0x43b0, 0x43b8, 0x43c0 and 0x43c8 (headers
  0x10ec, 0x10ee, 0x10f0, 0x10f2 ORed with 0x10000), then a flush (a one-register write of 0xf to byte 0x342c,
  `RB2D_DSTCACHE_CTLSTAT`), the indirect-buffer jump (two registers at byte 0x738, buffer address then length), and a
  one-register write of 0 to byte 0x4e4c (`RB3D_DSTCACHE_CTLSTAT`). Counts 1 to 3 fill the unused slots by **repeating the last
  rectangle** (the loop re-reads the last record because the pointer only advances while the count is positive and non-zero).
  A count above 4 repeats the whole group for the next four, so the draw is replayed once per batch.
- **Count 0.** One rectangle (0, 0, 0, 0) is synthesised, which becomes the inclusive one-pixel rectangle at the origin
  (see the arithmetic below): the empty list draws only pixel (0, 0).
- **Negative count.** No rectangles are written; the rule is set to 0xffff and the same flush, jump and 0x4e4c write follow.
- **Arithmetic (both axes).** TL = (x0 and 0x1fff) | (y0 << 13), plus 0x00b405a0, which adds 1440 to both fields. BR =
  ((x1 - 1) and 0x1fff) | ((y1 - 1) << 13), plus 0x00b405a0, after x1 and y1 are raised to at least 1. So the clip rectangles
  **always use the bias 1440**, no flip. This matches Mesa and Linux's `R300_CLIPRECT_OFFSET` of 1440 (software expectation).
  The unsigned-halfword guard on x0 and y0 never fires.
- **After the last batch.** The rule is written 0xffff, then the time stamp (see the kernel contract), the optional
  `WAIT_FOR_IDLE` packet 0xc0002600, and the closing group: rule 0xffff and `SET_SCISSORS`.
- **`SET_SCISSORS`.** Header 0xc0011e00 (type-3 opcode 0x1e, two body dwords) with the words 0 and 0x1fff1fff, once per submit
  on the normal path and once on the negative-count path. **Established** for what is emitted; which register the packet loads
  is **inferred** (AMD gives the packet no field list beyond x in bits 13:0 and y in bits 29:16, the layout of the 2D
  clip registers `SC_TOP_LEFT` and `SC_BOT_RITE`, R5xx printed page 37 and 47), as in section 8: the 3D scissor registers use a
  different layout (x in 12:0, y in 25:13, biased).
- **Return value.** 0x8000000 when the rectangle count is above 4 and bit 31 of the flags word is set, else 0; the caller uses
  it to learn that the draw was replayed. **Established** for the value; its use is **inferred**.

## 3. The 3D scissor registers

`SC_SCISSOR0` (0x43e0, top-left) and `SC_SCISSOR1` (0x43e4, bottom-right), x in bits 12:0 and y in bits 25:13, each loaded by a
one-register packet (headers 0x10f8 and 0x10f9). **Established** for the writers below.

- **`__R300WriteScissorRegisters` (0x7f3cc0, whole routine).** Emits the two packets with the values held in two shadow words
  of the GL context (offsets 0x54fbc and 0x54f70). Called from `__R300UpdateHWState`, `__R300LoadContext`,
  `__R300CompleteOverrideRendering` and `__R300ReenableGuardBandClipping`.
- **`__R300SetScissorStateNoGuardBand` (0x7fa200, whole routine) and `__R300UpdateScissorState` (0x7f9f40, whole routine)** compute
  the shadow words. With the drawable origin (context +0x7600, +0x7604) and the GL scissor rectangle (+0x3ee40 to +0x3ee4c):
  left = scissor x minus origin x, clamped at 0 (the guard-band variant also clamps against the guard rectangle at +0xea8 to
  +0xeb4); right = exclusive right edge minus origin minus 1 (inclusive), clamped to the drawable's width word at +0x7618;
  y likewise against the height word at +0x761c, with a one-row allowance and a flipped-y form when the byte at +0x7ea8 is set
  (a window whose y runs from the bottom). All four values then get the **bias** of section 4 added and are packed into the
  13-bit fields, **keeping the top six bits of each shadow word** (bits 31:26, mask 0xfc000000).
- **Wide-surface adjustment.** When the surface record's width word (its +8) is above 0xa60 (2656) and the first word of the
  record at its +0x20 is also above 0xa60, 0xa60 minus the width is added to both x fields (masked to 13 bits). **Established**
  for the arithmetic; the purpose (wrapping the x field for very wide surfaces) is **inferred**.
- **Empty scissor.** When the context word at +0x545f0 is nonzero, both shadow words become 0x2001 in their low 26 bits (x = 1,
  y = 1, **unbiased**) and `__R300UpdateScissorState` also sets bit 1 of the state-dirty word at +0x54bd0. With the biased
  coordinate system that is the point (1 - 1440, 1 - 1440), outside any drawable: nothing passes. **Inferred** reading of an
  **established** value; the word at +0x545f0 is **unknown** (set where all drawing is to be suppressed).
- **Open scissor.** The override-rendering routines open the scissor in raw coordinates without a bias: raw top-left 0 and raw
  bottom-right 0x3ffffff (x and y both 0x1fff). **Established** for `__R300NoGCSetOverrideRendering` (writes 0 and 0x3ffffff
  directly), `__R300SetOverrideRendering` (clears the shadow's low 26 bits and ORs in 0x3ffffff; its helper at 0x7dd840
  writes `RB3D_COLOR_CHANNEL_MASK`, 0x4e0c, and for some formats 0x4e48, not a scissor register),
  `__R300ResolveMultisampledColorBuffer`, the routine of row 7 (unless bit 19 of its fourth argument is set) and the routine of
  row 8, which keeps the top six bits and sets the low 26.
- **`SC_SCREENDOOR` (0x43e8, dword 0x10fa)** is set to 0xffffff by `__R300ResolveMultisampledColorBuffer` and by
  `__R300AccumClear`'s state block (value 0xffffff; the shadow at +0x54fc4 holds 0xffffff, written by `__R300LoadContext` and
  `__R300UpdateHWState`). **Established** for the value in those routines.

## 4. The bias: 1440 or 1088, and what the record word is

**Which bias.** `__R300SetScissorStateNoGuardBand` and `__R300UpdateScissorState` add **1440 (0x5a0)** when the word at +0xad8 of the
*hardware context* is 12 and **1088 (0x440)** for any other value. The hardware context is the record the GL context points
at through its word at +0x43790.

**What the word is.** `__R300InitRegs` (0x7fa600, called from `__R300MakeCurrent` each time the context is made current) copies
the hardware-context word at +0xac8 into the GL context's word at +0x54fb4 and sets the +0xad8 word to **12 when bit 16 of that
copy is clear and 16 when it is set**. **Established.** The +0xac8 word is a **copy of `GB_TILE_CONFIG` (register 0x4018)**:
`__R300InitDrawable` (0x75e580, whole tail read) reads it with `__glDRMReadRegister(handle, 0x1006, ...)`, a read at dword index
0x1006 of the mapped register aperture (byte offset 0x4018), straight into hardware-context +0xac8. **Established.** Bit 16 of
`GB_TILE_CONFIG` is the subpixel precision select: 0 = 1/12 pixel, 1 = 1/16 pixel (AMD R3xx 3D Register Reference rev 1.0,
printed page 31, **established**; Mesa and Linux call it `R300_GB_TILE_CONFIG_SUBPIXEL_1_12` / `_1_16`, software
expectation). So the stored 12 and 16 are the **subpixel denominators**
(and `__R300AccumClear` uses the stored word to scale the width and height it writes to `GA_POINT_SIZE` for its clear rectangle,
which only makes sense for a subpixel denominator; **established** in that routine), and the two biases are the two precisions' offsets of
the framebuffer origin in the scissor and clip coordinate space. (Mesa and Linux 2.6.30 use only the 1/12 precision and bias 1440.)

**What stops the 1088 arm.** Immediately after the read, `__R300InitDrawable` masks the stored copy with 0xfffeffff, which
**clears bit 16**, then sets the neighbouring words (+0xacc = 0x800, +0xad0 = 0x800, +0xad4 = 0x1000). **Established.** The same
masking and read are present in the 6.5.30 build's `__R300InitDrawable` (cross-checked in its instruction listing: the read of
index 4102 into +2784 and the 0xfffeffff mask before the store). `__R300LoadContext` programs `GB_TILE_CONFIG` (header
0x1006) from the GL context's copy at +0x54fb4, so the register the chip runs with is the copy with bit 16 clear
(**established** for the store from the copy; that the chip then has 1/12 precision follows from the AMD field and is
**inferred** only in that no other write to the register was found. The constant 0x1006 as a packet header also occurs in
`__R300ResolveMultisampledColorBuffer`, which loads the hardware-context copy at +0xac8 next to the header (**inferred**: the store of that value into the packet was not
traced), and in `__R300NoGCSetOverrideRendering` and the row-7 routine, which write a word
held in their own descriptor at +0x4c; the descriptor is filled by the routine at 0x7de140 from a context shadow whose meaning
was not resolved (**unknown**), so those two writers are not shown to preserve the clear bit. They are the restore packets of
the override-rendering sequences, which re-load state the module saved, so the likely value is the copy with bit 16 clear
(**inferred**). `__glSoftResetContext` also sets the +0xac8 word, to 0x901 (bit 16 clear), in both builds.

**Answer for an Onyx4.** On the R300 and R350 cards of an Onyx4 the GL module's copy of `GB_TILE_CONFIG` always has bit 16
clear, so `__R300InitRegs` always stores 12 and **both the clip rectangles and the 3D scissor use the bias 1440**. The
1088 arm and the "16" value are not reachable from any path of the 6.5.22 or 6.5.30 builds that was read, because the only code that
stores the +0xac8 word either takes the register value with bit 16 cleared (`__R300InitDrawable`) or stores a constant with the
bit clear (`__glSoftResetContext`). **Established** for the code read; **inferred** that no other writer of that word exists
(an `objdump` search of the whole `.text` for stores at that offset found only these two sites and unrelated stack stores).
Section 8's note that "an engine should take each bias as the programmed value" still holds in the sense that an engine
must accept the scissor and the clip rectangles being programmed with the same bias; for the shipped modules it is 1440 for
both.

What the *chip* does with the biased coordinates is **unknown** beyond AMD's field definitions: AMD does not document the
1440 offset (Mesa and Linux describe the framebuffer's top-left as appearing at (1440, 1440) "for some reason"). A model
implementing the scissor and clip registers should treat a programmed coordinate as framebuffer pixel plus 1440, as the
shipped stream does.

## 5. Other readings from the routines above

- **Guard band.** `__R300TemporarilyDisableGuardBandClipping` calls the no-guard-band scissor routine and writes the scissor
  registers; `__R300ReenableGuardBandClipping` restores the guard-band form with `__R300UpdateScissorState`. Both are
  **inferred** (callee names and call sites read; bodies are short wrappers).
- **`SC_CLIP_RULE` is 16 bits** in AMD's table; the stream's 32-bit 0xffffffff writes set the reserved upper half. A model
  should mask on write. **Inferred** (no read of the register is made by the stream).
- **What the stream never does:** it never writes `SC_CLIPRECT_*` outside the submit routine (an index scan for 0x10ec to 0x10f3 as
  headers found only `__R300DRMSubmitPM4`), and never reads any `SC` register back.

## 6. Cross-check against the 6.5.30 reading

| Fact | 6.5.30 (section 8) | 6.5.22 (this page) |
|---|---|---|
| Rule in submit | 0xfffe, then 0xffff | same |
| Bias for clip rectangles | 1440 | 1440 (constant 0x00b405a0) |
| Scissor bias selector | word at +2800 is 12 or 16 from the +2784 word's high half | word at +0xad8 is 12 or 16 from bit 16 of +0xac8; both are the same words 24 bytes further on |
| `+2784` / `+0xac8` word | unknown | copy of `GB_TILE_CONFIG`, bit 16 cleared |
| Clip rule users beyond submit | 4 routines by constant scan | 5 more rows read in full (rows 4 to 8) |

The offsets differ by 24 bytes (0xac8 = 2760, 0xad8 = 2776 here; 2784 and 2800 in 6.5.30) because the context structure grew; the
routines and the arithmetic are the same.
