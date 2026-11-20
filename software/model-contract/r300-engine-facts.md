# R300 and R350 engine facts for a model: command processor, GART, compression, display, interrupts, sync

What a model of the chip needs beyond the packet and register lists in [r300-acceptance-set.md](r300-acceptance-set.md),
with every statement graded and cited. The bus the chip sits on is in
[onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md); shader words and fp24 are in
[r300-shader-formats.md](../opengl/r300-shader-formats.md).

Grades follow `AGENTS.md` section 5. **Established** here means a published AMD document read for the statement
(title, revision and printed page given), or a whole shipped routine read (cited in the page that reads it).
**Software expectation** is public Linux `radeon` or Mesa r300 code. **Inferred** says why. **Unknown** lists the route.
AMD documents used: *Radeon R3xx 3D Register Reference Guide* rev 1.0 (2008-02-25), *R3xx*; *Radeon R5xx Acceleration*
rev 1.5 (2010-06-08), *R5xx*. The R5xx guide describes a later chip; it is used for the command processor, which its own
text presents as common to R3xx to R5xx (section 5.1), and each use is marked.

## 1. The second indirect buffer: 0x730 and 0x734 are CP_IB2_BASE and CP_IB2_BUFSZ

**Established** (R5xx, command processor register list, printed page 150: `CP_IB2_BASE` at 0x730, bits 31:2, and
`CP_IB2_BUFSZ` at 0x734, bits 22:0, size in dwords; the same document defines `CP_IB_BASE` 0x738 and `CP_IB_BUFSZ` 0x73c).
This closes the open question about `__R300TCLInsertIndirectBuffer`.

- R5xx section 5.6 (printed pages 21 to 22): the primary stream (the ring) can jump to indirect buffer 1; a stream in
  indirect buffer 1 can jump to indirect buffer 2; each returns to its caller when its size is used up.
- Section 5.10 (printed page 25): writing `*_BUFSZ` starts the fetch, so that write must be the last register of the type-0
  packet and the matching `*_BASE` must be written first. **Established that this matches what IRIX emits**: the
  routine's packet header 0x000101cc is a type-0 write of two registers starting at dword index 0x1cc (byte 0x730), base
  first, size last, and it is emitted from a draw stream reached through the 0x738 jump
  ([r300-command-stream.md](../opengl/r300-command-stream.md)), the only place the first indirect level can be nested.
- Packet `INDX_BUFFER` (type-3 opcode 0x33, section 6.2.3.11, printed page 52) is the packet form: its base and size words
  are written to `CP_IB2_BASE` and `CP_IB2_BUFSZ`. The IRIX routines that build 0x33 packets reach the same pair.
- A model therefore needs a depth-two indirect stack: ring to indirect 1 to indirect 2. That the R300 CP implements the
  second level is **inferred** from the command processor chapter being common to R3xx to R5xx plus IRIX using it on R300
  and Linux's `r300_packet3_check` accepting `INDX_BUFFER`.

## 2. Command processor: ring, packets, reset

- **Ring.** **Established** (R5xx 5.4, printed pages 19 to 21): a ring in host memory with base, size, a host write pointer
  the driver writes into the chip (`CP_RB_WPTR` 0x714) and a read pointer the chip writes back to a host address
  (`CP_RB_RPTR_ADDR` 0x70c) every programmable block of dwords and when it finds the ring empty. One free slot is always
  kept so empty and full differ. `CP_RB_RPTR_WR` (0x71c) preloads the read pointer for recovery (5.8, printed page 24).
  IRIX programs this sequence ([r300-acceptance-set.md](r300-acceptance-set.md) section 3, **established** for IRIX).
- **Three streams.** Ring, indirect 1, indirect 2, each pull (bus-master) or push (host writes into an aperture in the
  register window: `CP_CSQ_APER_PRIMARY` 0x1000, `_INDIRECT2` 0x1200, `_INDIRECT` 0x1300; R5xx 5.11, printed page 26).
  IRIX sets bus-master mode for the ring and indirect streams (`CP_CSQ_CNTL` top nibble 8). Push mode is
  **unknown** for IRIX: none of the accesses read touches the apertures.
- **Packet set the IRIX R300 routines emit.** Type-0 (also the one-register-write form), type-2 padding, and type-3
  opcodes 0x10 NOP, 0x1e SET_SCISSORS, 0x26 WAIT_FOR_IDLE, 0x28, 0x2f, 0x32 to 0x38 (draw, vertex-pointer, index and
  clear packets) and, in routines not read in full, 0x1b, 0x2b and 0x2d ([r300-acceptance-set.md](r300-acceptance-set.md)
  section 4, grades there: established for the routines read, **inferred** for the constant scan). Public names: 0x10,
  0x1e, 0x28, 0x29, 0x2a, 0x2f, 0x33 to 0x37 are in the R5xx packet summary (6.2.1, printed page 34); 0x26 is
  `WAIT_FOR_IDLE` in Linux `radeon_reg.h` (software expectation); 0x32 `3D_CLEAR_ZMASK` and 0x38 `3D_CLEAR_CMASK` are named
  by Linux `r300d.h` and Mesa `r300_reg.h` (software expectation) and by neither AMD document. **0x1b, 0x2b and 0x2d have
  no name in AMD's R5xx guide, Linux `radeon_reg.h`, `r100d.h` and `r300d.h`, or Mesa `r300_reg.h`:** **unknown**, accept
  and observe them.
- **CP DMA.** **Established** (R5xx 5.7, printed pages 22 to 23): two DMA engines in the CP (GUI and video capture) read a
  table of 4-dword descriptors from frame-buffer memory (source, destination, command word with end-of-list, interrupt
  disable, address-space and increment controls, source and destination endian-swap fields, byte count), or take one
  descriptor through three registers (`CP_GUI_SRC_ADDR` 0x720, `CP_GUI_DST_ADDR` 0x724, `CP_GUI_COMMAND` 0x728, and the
  `CP_VID_*` set at 0x7c4 to 0x7cc). **Unknown** whether IRIX uses it: none of the 440 offsets the kernel object and X
  module reach is in those ranges ([generated/inventory/mmio.tsv](../../generated/inventory/mmio.tsv)); the DRI driver's
  constant scan was not matched against them. The generated [cp](../../devices/cp/registers.md) table holds the registers.
- **Reset.** **Software expectation** (Linux `r300_asic_reset`; the source warns the CP reset can lock the host) and
  **established** for the shape (R5xx 5.8, printed page 24: stop the queue, pulse the CP bit of the reset register, restore
  the pointers). IRIX resets through `GA_SOFT_RESET` (0x429c) and its CP-reset routine
  ([kernel-attach.md](../kernel/kernel-attach.md#command-processor-start-up-x-server-module)).
  R5xx 10.1.9 (printed pages 130 to 131) gives 0x32005 written to `RBBM_SOFTRESET` to reset GA, CP and VAP; for R5xx.
- **Microcode.** IRIX loads 256 pairs through `CP_ME_RAM_*`; the table differs from Linux's `R300_cp.bin` in 69 of 256
  pairs ([kernel-attach.md](../kernel/kernel-attach.md#command-processor-start-up-x-server-module)). No AMD
  document gives the microcode contents. A model that accepts the writes and ignores them satisfies both stacks.

## 3. GART layout

- **IRIX: none.** **Established** for the shipped software: the X module parks the AGP window and no routine of the kernel
  object or X module reaches `AIC_*` or `AGP_CNTL`; every buffer the card reads is made reachable with
  `pciio_dma_addr` and used by its bus address ([onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md)). The kernel's
  buffer queue has five regions by type (Z mask, Hi-Z, colour mask, visible and invisible frame buffer), a split of the
  card's own memory, not a GART.
- **Chip PCI GART, for a guest that wants it.** **Software expectation**, Linux `r100.c` (`r100_pci_gart_enable`,
  `r100_pci_gart_set_page`, valid for R100 to R300 class chips): `AIC_LO_ADDR` (0x1dc) and `AIC_HI_ADDR` (0x1e0) bound the
  GART address range; `AIC_PT_BASE` (0x1d8) is the bus address of a single-level table of 32-bit little-endian entries,
  one per 4 KB page, each entry the bus address of the page; `AIC_CNTL` (0x1d0) bit 0 enables translation and bit 1
  discards requests outside the range. The table is read by the chip; the driver flushes nothing (the code comments that
  the hardware seems to cache one entry). **Neither AMD document describes the GART or AIC registers** (searched both for
  GART, AIC and PCIGART; only CP apertures match). Registers: [gart](../../devices/gart/registers.md) (inferred).
- **AGP GART** on the chip side is the aperture words `MC_AGP_LOCATION` (0x14c) and `AGP_BASE` (0x170) (the display unit),
  with the bridge's own GART on Prism ([the inventory](../products/sgi-ati-inventory.md)). Not used by IRIX on Onyx4.
- **Endianness.** The chip is little-endian on a big-endian host. The swap fields the registers carry: the CP descriptor
  source and destination swap (R5xx 5.7, **established**), `CP_RB_CNTL` buffer and read-pointer swap (display unit,
  **inferred**) and the vertex-fetch swap `vc_swap` (display unit, **established** for the field); the bridge's
  byte-lane modes per window are in [kernel-attach.md](../kernel/kernel-attach.md#bus-and-bridge).

## 4. Compression: Hyper-Z, Z mask and colour mask

SGI's porting guide lists "Hyper-Z III" (8x8 depth blocks, lossless compression, fast Z clear; 007-4297-001, printed page
9, earlier reading not repeated: **inferred** for the page number).

- **Hierarchical Z (Hi-Z).** **Established** (R5xx chapter 9, printed pages 125 to 128; R3xx `ZB_HIZ_*` and `SC_HYPERZ_EN`):
  an 8-bit coarse Z per tile of a pixel region in a separate Hi-Z RAM, read by the scan converter to prune quads before
  the rasteriser; enabled in both `SC_HYPERZ_EN` (0x43a4, `HZ_EN`) and `ZB_BW_CNTL` (0x4f1c, `HIZ_ENABLE`); its minimum
  or maximum sense follows the depth function; the RAM is addressed through `ZB_HIZ_WRINDEX` (0x4f48), `_DWORD` (0x4f4c)
  and `_RDINDEX` (0x4f50), with `ZB_HIZ_OFFSET` and `_PITCH`. Cleared by type-3 `3D_CLEAR_HIZ` (0x37). Registers:
  [zb](../../devices/zb/registers.md), [sc](../../devices/sc/registers.md), [pipes](../../devices/pipes/README.md).
- **Z mask, fast clear and Z compression.** **Established** (R5xx 10.4.4, printed page 139): only in micro-tiled mode,
  fast fill (a block whose mask value is 0 reads as the clear value) combines with read and write compression in three
  legal ways; "all other combinations ... invalid"; compression hangs 16-bit integer buffers with one or two samples;
  and a 4x4 or 8x8 Z plane format must agree between GA and ZB (10.4.9, page 141; 8x8 from the RV350 on, `GB_Z_PEQ_CONFIG`,
  and `ZB_FORMAT.PEQ8` in R3xx). The Z-mask RAM registers (`ZB_ZMASK_OFFSET` 0x4f30 to `_RDINDEX` 0x4f40) are in **neither**
  AMD document: names and offsets are **software expectation** from Mesa's `r300_reg.h` (grade inferred in the table).
  Cleared by `3D_CLEAR_ZMASK` (0x32).
- **Colour compression.** **Established** that the R3xx colour buffer control has `AA_COMPRESSION_ENABLE` at bit 9 of
  `RB3D_CCTL` (0x4e00) (R3xx, printed page 12); the R5xx register chapter adds `CMASK_ENABLE` at bit 10 where R3xx marks
  bit 10 reserved (R5xx, printed pages 164 to 165). The colour-mask RAM registers `RB3D_CMASK_*` (0x4e54 to
  0x4e7c) are, like Z mask, only in Mesa (**software expectation**). Cleared by `3D_CLEAR_CMASK` (0x38). AA compression
  gives up to 6:1 and Z compression up to 48:1 by AMD's feature summary for the R5xx family (R5xx 1.2).
- **What IRIX does.** The kernel splits the card's memory into Z mask, Hi-Z, colour mask and visible and invisible
  regions (**established** as kernel behaviour, [r300-acceptance-set.md](r300-acceptance-set.md) section 5);
  `__R300FastZStencilClear` builds 0x32 and 0x37 and `__R300ClearCMask` builds 0x38 (**inferred**, a constant scan with
  the routine names). The chip behaviour is **unknown** where neither AMD document nor a read of a whole IRIX routine
  gives it.
- **What a model needs.** Compression may be skipped only if no guest-visible read can distinguish: a CPU read of the
  depth buffer through BAR 0 sees compressed data, and the Hi-Z RAM is readable through its index registers. Whether
  IRIX ever does either is **unknown**; until it is read, keep a logical-versus-raw view of Z or reproduce the mask RAMs.

## 5. Display: CRTC, DAC, dual-head set-up

All of this is from [devices/display](../../devices/display/README.md) and the X module readings; grades are per register
there. In short:

- **Two display controllers**, CRTC 1 and CRTC 2, with their own timing totals, sync start and width, offsets, pitch and
  general control: CRTC 1 at 0x200 to 0x22c and 0x50 to 0x5c, CRTC 2 at 0x300 to 0x32c and 0x3f8, status at 0x5c and
  0x3fc. The ones IRIX programs are graded in the display unit; the rest are in [crtc](../../devices/crtc/registers.md)
  (Linux names, inferred). A hardware cursor per head (0x260 and 0x360 families), a palette index and data port
  (0xb0, 0xb4), a video overlay (0x420), a TV block (0x800), a second panel link (`FP2_GEN_CNTL` 0x288; that it is the digital output of the second head is **inferred**) and surface tiling (0xb00). PLL timing is set through the index and data pair 0x8 and 0xc.
- **Established** for IRIX: attach clears the enable bit (25) and the cursor-enable bit (16) of `CRTC_GEN_CNTL` and
  `CRTC2_GEN_CNTL`; the option ROM then sets a VESA mode and the X module writes modes, PLL, palette, tiling and overlay
  ([kernel-attach.md](../kernel/kernel-attach.md), [x-driver-functions.md](../xsgi/x-driver-functions.md)).
- **Per brick:** two pipes, each driving two channels (SGI user's guide 007-4634-002; the SG2 board has two outputs that
  take analog or digital and two analog-only, the SG2.1 four that take either, per an earlier reading of its printed
  pages 64 to 67: **inferred** for the page numbers). Which channel is CRTC 1 and which CRTC 2, and which connector is
  DAC 1, DAC 2 or the panel link: **unknown**; routes in [questions/open-questions.md](../../questions/open-questions.md#memory-and-display).

## 6. Interrupts and fences

- **Interrupt controller.** `GEN_INT_CNTL` (0x40, enables) and `GEN_INT_STATUS` (0x44, status, write one to clear). IRIX
  masks everything at attach (0x40 = 0), enables vertical sync on demand by writing 4 (CRTC 1 vsync, bit 2) and clears
  bits 2 and 6 (CRTC 2 vsync) when it tears down; its handler reads 0x44, tests bit 2, writes 4 back and wakes the
  waiting processes ([kernel-ioctl-irq-functions.md](../kernel/kernel-ioctl-irq-functions.md#interrupt-control)).
  **Established** for bits 2 and 6. The same table names the CRTC 2 vblank (bit 9), the software interrupt (bit 25) and
  others as **inferred**. Linux `r100.c` uses bits 0 and 9 for the two vblanks and bit 25 for the software interrupt
  (**software expectation**; Linux 6.x names bits 2 and 6 as the vsync bits).
- **Delivery.** The interrupt is a PCI interrupt through the brick's bridge: `pciio_intr_alloc` with both lines A and B,
  one handler per card, level-sensitive until the status bit is cleared ([onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md)).
- **Fences.** **Established** that the chip's mechanism is the scratch registers: when the CP writes a scratch register
  (eight scratch registers, `SCRATCH_REG0` at 0x15e0 in the public headers) it copies the value to host memory at `SCRATCH_ADDR` (0x774) plus the
  register number, masked by `SCRATCH_UMSK` (0x770); the driver polls that memory (R5xx 5.9, printed pages 24 to 25).
  IRIX writes the scratch registers from the ring after each submit (the time stamp, **established** in
  `__R300DRMSubmitPM4`) and programs `SCRATCH_ADDR`/`SCRATCH_UMSK` at start ([r300-acceptance-set.md](r300-acceptance-set.md)).
  The R5xx guide adds a scratch interrupt (>= compare of a register pair), which is stated for R5xx only: unknown for R300.
  Whether IRIX waits on a stamp by polling or by an interrupt, and the user-side half (`glWaitTimestampATI` and its
  trackers) are **unknown** and already an open question.
- **Idle waits.** `WAIT_UNTIL` (0x1720) bits for 2D, 3D and host idle-clean (Linux names, software expectation) and
  `WAIT_FOR_IDLE` packets; the kernel polls `RBBM_STATUS` and `CP_STAT` with no timeout (the spike on the model contract
  already flags this: busy must clear on completion, not elapsed time).

## 7. What ImageSync and the compositor connect to

- **ImageSync** is a PCI card in the *host*, not in a brick (007-4634-002, **established** as the guide's statement; IS1
  and IS2 hardware revisions are told apart by bits 7:6 of the PCI revision byte, `is1_attach`). Its driver `is1.o` finds
  the sync master by switching graphics pipes one at a time: it clears the CRTC enable and cursor bits (25 and 16) in
  `CRTC_GEN_CNTL` (0x50) and `CRTC2_GEN_CNTL` (0x3f8), reads the two vertical-line counters (0x210 and 0x310), then
  re-enables each pipe in turn and watches a status bit of its own register block (offset 0x74, after writing 0x2a), with a
  2 ms wait, and logs "check DB9 cabling" when none gives sync (`is1_hsync_discovery`, **established** as code read in
  full; [image-sync-functions.md](../kernel/image-sync-functions.md)). So what it connects to, on the chip side, is each
  pipe's two CRTC enables and line counters, through the FireGL driver's register accessors; the external side is
  DB9 sync cabling. What bit 0 and 0x2a mean in its registers is **inferred** only (detect incoming sync) and its
  register offsets 0x1c to 0x74 are not decoded.
- **The compositor** (the scalable-graphics hyperpipe compositor) is reached from the graphics board, not from ImageSync:
  `fglrx_attach` probes an optional compositor from the board record's word at +328 (bits 15:8 compositor index,
  bits 1:0 port), `fglrx_hpipe_discover` matches boards to compositor slots and ports, and the kernel reads the
  compositor's identity and tile registers through a serial bus on the board's bus-controller registers
  (`fglrxCompositorI2cRegRead`, `fglrx_program_compositor_tiling`)
  ([kernel-drm-functions.md](../kernel/kernel-drm-functions.md)). **Established** as code read in full for those
  routines; the compositor's own registers and its wiring to the pipes' digital outputs are **unknown**. SGI
  multipipe software (`sgcombine`, `SGIOMPdmx_dri.so`) runs on top; its routines are stubs and wrappers as read, so the
  distribution of work between pipes is **inferred** to be in user space.

## 8. Clip rectangles, the clip rule, the scissor and SET_SCISSORS

Read from `fglrx_dri64.so` (IRIX 6.5.30, n64): `__R300DRMSubmitPM4` (0x8c7f80, whole routine),
`__R300WriteScissorRegisters` (0x7d1ab0) and `__R300SetScissorStateNoGuardBand` (0x7d7e20), both whole. Register
definitions: AMD R3xx 3D Register Reference rev 1.0 and R5xx Acceleration rev 1.5, the `SC` block
([sc](../../devices/sc/registers.md)).

**The rule bits (established, R3xx printed page 35 and R5xx register chapter printed page 203, same text).**
`SC_CLIP_RULE` (0x43d0, bits 15:0): "the `inside` flags for each of the four clip rectangles form a 4-bit binary number.
The corresponding bit in this 16-bit number specifies whether the pixel is visible." So bit n of the rule is the
visibility of pixels whose inside-flags equal n. Neither document says which rectangle is flag bit 0; Mesa's `r300_reg.h`
says rectangle k is bit k (software expectation), and it does not matter for the value below.

1. **Which rectangles, and the 0xfffe rule.** **Established** for `__R300DRMSubmitPM4`, per submit:
   - It writes `SC_CLIP_RULE` = **0xfffe** once, first (type-0 header 0x10f4). 0xfffe has every bit set except bit 0, so a
     pixel is visible if it is inside **at least one** of the four rectangles and hidden only when outside all four: the
     union of the rectangles.
   - The submit record holds a count (word +24) and a pointer (+32) to 8-byte rectangles of four unsigned halfwords
     `x0, y0, x1, y1` (x1 and y1 exclusive). For each batch of four it writes all four pairs, `SC_CLIPRECT_TL/BR_0` to
     `_3` (0x43b0 to 0x43cc, each pair one type-0 write of two registers), and then emits the draw: a flush
     (`RB2D_DSTCACHE_CTLSTAT` = 15), the indirect-buffer jump (0x738/0x73c) and a zero write to 0x4e4c. **A count of 1 to
     3 fills the unused slots by repeating the last rectangle**, which leaves the union unchanged. A count above 4 runs
     the whole group again for each further batch of four, so the draw is replayed per batch (pixels in rectangles
     of different batches are drawn once per batch they fall in).
   - **Count 0** uses one rectangle (0, 0, 0, 0), which becomes the one-pixel inclusive rectangle at the framebuffer
     origin: the empty list is not "draw nothing" but "draw only pixel (0, 0)" (intent **inferred**, arithmetic
     established). **A negative count** takes a separate path that writes rule **0xffff** with no rectangles (everything
     visible) and then the same flush and jump.
   - After the last batch it writes rule **0xffff** again and a `SET_SCISSORS` packet (below). A model must therefore
     keep the rule per submit, not as a one-time setting: it is 0xfffe only between the first write and the last.
   - Other R300 routines (`__R300ResolveMultisampledColorBuffer`, `__R300AccumClear`, `__R300SetOverrideRendering`,
     `__R300_Imaging_DrawTexRectDWords`, `__R300FastReadPixels`) also contain the rule's register index; those writes
     were found by constant scan only, values not read (**inferred**). The rectangle registers are written only by the
     submit routine.
2. **Coordinate convention.** **Established**: IRIX uses the **same bias of 1440 as Linux and Mesa, on both axes, with
   no flip**. The arithmetic for each rectangle, in the packed 13-bit fields (x in bits 12:0, y in bits 25:13):
   - `TL = (x0 | y0 << 13) + 0x00b405a0`, that is x0 + 1440 and y0 + 1440;
   - `BR = ((x1 - 1) | (y1 - 1) << 13) + 0x00b405a0`, where x1 and y1 are first raised to at least 1, so the edge is
     **inclusive** (exclusive extent minus one) and an empty or zero-size rectangle becomes the single pixel at x0 and y0.
   The constant 0x00b405a0 is 1440 in both fields (1440 = 0x5a0; 1440 << 13 = 0xb40000). Mesa does the same for
   non-R5xx chips (`r300_emit_scissor_state`, software expectation). The record's own origin (whether y is already
   measured from the top) is not changed by this routine: **inferred** to be top-left, as the registers are.
   (The routine's guard that clamps x0 and y0 at zero tests an unsigned halfword and never fires.)
3. **SET_SCISSORS and the 3D scissor.**
   - **What IRIX emits for SET_SCISSORS (established):** `__R300DRMSubmitPM4` writes the packet (header 0xc0011e00) at two
     sites (the normal and the negative-count path), each with the words **0 and 0x1fff1fff**, once at the end of each
     submit, to open the window fully. No other
     R300 routine builds that header (a constant scan found the rest of the 0x1e00 hits unrelated).
   - **What register it programs (inferred, not established):** AMD's packet definition (R5xx section 6.2.2.13, printed
     page 47) says only "set the scissors" and gives the fields as x in bits 13:0 and y in bits 29:16. Those are the field
     positions of the **2D engine** clip words `SC_TOP_LEFT` and `SC_BOT_RITE` that AMD gives for the 2D packets (R5xx
     printed page 37, same bits), and Linux names those registers 0x16ec and 0x16f0 (`radeon_reg.h`, software expectation).
     They are not the 3D scissor's layout (x in 12:0, y in 25:13, biased). So the packet is read as the 2D clip, and
     **an engine that treats it as the 3D scissor is wrong in layout and in effect**; for IRIX's only values (0 and
     0x1fff1fff) the difference is invisible, because both leave the 2D clip fully open.
   - **What IRIX uses for the 3D scissor instead (established):** `__R300WriteScissorRegisters` writes `SC_SCISSOR0` (0x43e0)
     and `SC_SCISSOR1` (0x43e4) as two separate type-0 single-register writes (headers 0x10f8 and 0x10f9) from state words
     that `__R300SetScissorStateNoGuardBand` builds: the GL scissor rectangle minus the drawable origin, clamped to the
     drawable, top-left as x and y, bottom-right as the exclusive edge minus one (inclusive), plus a **bias that is 1440 or
     1088**. The routine adds 1440 when the word at +2800 of the driver record is 12 and 1088 otherwise
     (`__R300UpdateScissorState` has the same split: **inferred** from its constants, not read in full). `__R300InitRegs`
     sets that word to 16 when the high half of the record word at +2784 is non-zero and to 12 when it is zero
     (**established**). What the +2784 word is, and which value an Onyx4 R300 or R350 ends up with, is **unknown**. The clip
     rectangles above always use 1440, so a scissor of 1088 and a rectangle of 1440 meet only if the origin of the
     visible area moves with it; an engine should take each bias as the programmed value, not assume 1440 everywhere.
     A further adjustment for drawables larger than 2656 pixels is present in the code and not decoded.
   - `SC_SCREENDOOR` (0x43e8) is not touched by SET_SCISSORS: constant scans put its writes in `__R300UpdateHWState`,
     `__R300LoadContext` and the multisample routines (**inferred**, values not read).

Open items (also in [open-questions.md](../../questions/open-questions.md)): the +2784 word and the 1440-or-1088 choice on
an Onyx4; the values of the other rule writers; and a direct confirmation, from a whole IRIX routine that uses 2D
registers, of which register SET_SCISSORS reaches.
