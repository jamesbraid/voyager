# The command-stream contract of the R300 GL module: every packet type and opcode it emits

What `fglrx_dri64.so` (IRIX 6.5.22, patch SG0005448, ELF64, symbols present) puts into the command stream on an R300 or R350,
packet by packet, with the argument layout of each. It extends
[r300-acceptance-set.md](r300-acceptance-set.md) section 4 and [r300-engine-facts.md](r300-engine-facts.md) section 2, whose packet
lists came from a constant scan, with reads of whole routines; where this page adds a body layout it says which routine gave it.
The state the packets program is in [r300-stream-3d-state.md](r300-stream-3d-state.md), the clip and scissor writers in
[r300-stream-clip-scissor.md](r300-stream-clip-scissor.md) and how a stream reaches the chip in
[r300-stream-kernel-contract.md](r300-stream-kernel-contract.md). Grades follow `AGENTS.md` section 5.

Method: the Ghidra decompiler over every `__R300*` routine (759 of them) and the shared submit and draw helpers, with an
`objdump` listing of the whole `.text` used to check the constants and to scan for every immediate of the form of a type-3
header (a constant-propagating scan over `lui`, `ori`, `addiu` and `li` sequences, which also covers routines the decompiler
export did not include). Opcode names are AMD's R5xx *Acceleration* guide rev 1.5 section 6.2.1 where it names the opcode, then
Linux and Mesa `r300`; names from neither AMD document are marked (software expectation).

## 1. Packet types

- **Type 0, register write.** Header bits 31:30 = 0, bits 29:16 the dword count minus one, bit 15 the one-register-write flag
  (all dwords go to the same register, used for table uploads), bits 14:0 the first register as a dword index (byte offset / 4).
  **Established** for the encoding the stream emits (hundreds of headers read; for example 0x000101cc, 0x10f4, 0x1057a,
  0x8882 | (n << 16)); AMD's R5xx guide 5.10 and Linux `radeon_drv.h` give the same layout.
- **Type 2, no operation.** The word 0x80000000. Used as padding: three of them align the start of `3D_DRAW_VBUF` to 16 bytes
  after a vertex-pointer packet (`__R300TCLProcessArrayPrimitive`), and the commit routine pads the ring to the ring's
  alignment mask with them. **Established.**
- **Type 3, opcode.** Header 0xc0000000 | (dwords after the header minus one) << 16 | opcode << 8. **Established** for every
  opcode in section 2.
- **Type 1** is never emitted (no header with bits 31:30 = 1 is built). **Established** as an absence in the scan, **inferred**
  because the constant scan cannot see headers built from variables.

## 2. Type-3 opcodes, one by one

"Count" is the header's count field, so the body has count + 1 dwords. AMD names are R5xx section 6.2.1; **Linux and Mesa** names are software
expectation.

| Opcode | AMD name | Header values seen | Body (from the routine named) | Grade |
|---|---|---|---|---|
| 0x10 | `NOP` | 0xc0001000, 0xc0031000, and 0xfffd1000 in the ring wrap | one dword of 0 after the submit terminator in `__glATISubmitBM`; 4 dwords as placeholders in the fast draw-array paths, to be overwritten when a vertex-buffer-embedded packet is patched in (`__R300TCLProcessFast*`, `__R300TCLWriteNOPCmdCountTIMMO`); up to 0x3fff dwords per packet (header and 0x3ffe body dwords) as ring-wrap filler (`firegl_PM4Alloc`) | established |
| 0x1b | `BITBLT_MULTI` (0x9B) without its settings word (AMD, section 6.2 and 6.2.2.9) | 0xc0021b00 | **three dwords**: source position, destination position, width and height, with x and width in the high halves (`__R300BltData`) | established |
| 0x1e | `SET_SCISSORS` | 0xc0011e00 | the two words 0 and 0x1fff1fff (`__R300DRMSubmitPM4`) | established |
| 0x26 | `WAIT_FOR_IDLE` (Linux) | 0xc0002600 | one dword, 0 (`__R300DRMSubmitPM4`, when the submit's wait flag is set) | established |
| 0x28 | `3D_DRAW_VBUF` | 0xc0012800 and (n + 1) << 16 \| 0xc0002800 | the first body dword is the vertex format (0); the second is `VAP_VF_CNTL` (below); a longer form in `__R300TCLProcessNativePrimitive` | established |
| 0x2b | none in AMD, Linux or Mesa; the CP microcode dispatch table sends it to a routine that writes `VAP_VTX_ST_NORM_0_X/Y/Z` then `VAP_VTX_ST_POS_0_X/Y/Z_3` per vertex | (6n - 1) << 16 \| 0xc0002b00 | 6 dwords per vertex, interleaved position (3 floats) and normal (3 floats) (`__R300TCLDrawArraysV3FN3F`) | established layout, inferred meaning |
| 0x2d | none in AMD, Linux or Mesa; the microcode dispatch table sends it to a routine that writes `VAP_VTX_ST_POS_0_X/Y/Z_3` per vertex | (3n - 1) << 16 \| 0xc0002d00 | 3 dwords per vertex, three floats of position (`__R300TCLDrawArraysV3F`, `...V3FN3F`) | established layout, inferred meaning |
| 0x2f | `3D_LOAD_VBPNTR` | n << 16 \| 0xc0002f00 | see below | established |
| 0x32 | `3D_CLEAR_ZMASK` (Linux) | 0xc0023200 | three dwords: start, length in blocks, 0 (`__R300FastZStencilClear`) | established |
| 0x33 | `INDX_BUFFER` | 0xc0023300 | three dwords: destination and skip, buffer address, count (`__R300TCLProcessIndexBufferPrimitive`) | established |
| 0x34 | `3D_DRAW_VBUF_2` | 0xc0003400 | one dword, `VAP_VF_CNTL` (`__R300TCLProcessFastDrawArrays`, `__R300TCLSetupAOSTIMMO`) | established |
| 0x35 | `3D_DRAW_IMMD_2` | 0xc0003500 and 0xc0083500 and 0xc0023500 | `VAP_VF_CNTL` then inline vertices: 9 dwords for the clear and resolve rectangles (three vertices of three floats), variable for the `__R300DrawCached*` and `__R300DrawIndexed*` families and `__R300FillTriangle` | established for the clear rectangles, inferred for the variable forms |
| 0x36 | `3D_DRAW_INDX_2` | 0xc0003600 | one dword, `VAP_VF_CNTL` with the index width bit (`__R300TCLProcessIndexBufferPrimitive`) | established |
| 0x37 | `3D_CLEAR_HIZ` | 0xc0023700 | three dwords: start, length, a replicated 8-bit value (`__R300FastZStencilClear`) | established |
| 0x38 | `3D_CLEAR_CMASK` (Linux) | 0xc0023800 | three dwords: offset, length in blocks, 0 (`__R300ClearCMask`) | established |
| 0x30 | none | 0xc0003000 | built once in `__R300TCLSetupEmbeddedTIMMO`; not seen emitted by a routine read | inferred (the constant is built; its use was not traced) |

Absent: **0x29 `3D_DRAW_IMMD`, 0x2a `3D_DRAW_INDX`, 0x2c `LOAD_PALETTE`, 0x39 `3D_DRAW_128`, and every 2D opcode (0x91 to 0x9c, `BITBLT`, `PAINT_MULTI`, `NEXTCHAR`) from the R300 GL paths**: the immediates 0xc0002900 and
0xc0112900 occur only in `__R200*` routines, and 0xc0002500 only in `__R100*` ones. **Established** for the scan.
So a model of the R300 needs the opcodes of the table; the R200 and R100 opcodes are for other chips of the same library.

### `3D_LOAD_VBPNTR` (0x2f)

Header count = ceil(3n / 2) for n arrays, from `__R300CmdSpaceTable` (read from the file: n = 1 gives 2, 2 gives 3,
3 gives 5, 4 gives 6, and so on to 16 giving 24), so the body is the array-count word n followed by ceil(3n / 2) descriptor dwords:
three dwords for each pair of arrays (one carrying both arrays' size and stride, then the two addresses) and two for an odd last array,
as in Linux's `r300_emit_vbpntr` and AMD's vertex-array description (**software expectation** for the packing). The descriptor words are
prepared in the context (offsets 0x54cf0 and up) and copied verbatim by `__R300TCLProcessArrayPrimitive` and
`__R300TCLProcessIndexBufferPrimitive`; the **copy**, the **count** and the table are **established**, the packing of the words was not
read. Three type-2 words follow the body to align the draw
packet. Vertex-array pointers can instead be described in registers (see the next section).

### `3D_DRAW_VBUF` (0x28) and `3D_DRAW_INDX_2` (0x36): the VF_CNTL word

`VAP_VF_CNTL` (0x2084) layout (AMD R3xx printed page 81, **established**): bits 3:0 primitive type (1 point list, 2 line list, 3
line strip, 4 triangle list, 5 fan, 6 strip, 12 line loop, 13 quad list, 14 quad strip, 15 polygon), bits 5:4 `PRIM_WALK`
(0 state-based vertex data with data and tokens embedded in the command stream, 1 indices embedded and vertex data fetched from
memory, 2 vertex list fetched from memory, 3 vertex data embedded), bit 11 `INDEX_SIZE` (1 = 32-bit indices), bits 31:16 the vertex
count. The module builds it from a primitive-type table (the table at context +0x61f0, one word per GL primitive mode) with:

- walk **0x20** (list of vertices) and the count in bits 31:16 for `3D_DRAW_VBUF`: `table[mode] | count << 16 | 0x20`
  (`__R300TCLProcessArrayPrimitive`, `...FastDrawArrays`);
- walk **0x10** (indices) with bit 11 set when the index type is not GL_UNSIGNED_SHORT (0x1403): `table[mode] | count << 16 | 0x10 | (type != 0x1403) << 11`
  (`__R300TCLProcessIndexBufferPrimitive`).

**Established** for the values and for what AMD calls the walks (vertex list = 2, indices = 1).

### `INDX_BUFFER` (0x33)

Three body dwords. The first is `(skip << 16) | 0x80000810` where skip = bits 4:2 of the byte alignment of the buffer;
0x810 is the dword index of `VAP_PORT_IDX0` (0x2040) and bit 31 the one-register flag, so the index data are written to the VAP port
(**established** for the value, **software expectation** for the meaning, Linux `r300_cmdbuf.c`
`R300_INDX_BUFFER_ONE_REG_WR`). The second is the buffer address with the low alignment bits cleared (`& 0xffffffe3`); the third is the number
of index dwords plus skip. The packet follows a `3D_DRAW_INDX_2`. AMD section 6.2.3.11 states the packet loads indices from indirect
buffer 2 (R5xx, **established**); this packet's buffer is therefore read through `CP_IB2_BASE`/`CP_IB2_BUFSZ` (0x730/0x734), consistent with the type-0
write of those registers by `__R300TCLInsertIndirectBuffer`.

### Opcodes 0x1b, 0x2b and 0x2d

The stream emits these three opcodes and the R5xx guide's packet summary (6.2.1, printed pages 33 and 34) does not list them. The guide
and the CP microcode table the driver loads settle what they are.

- **0x1b is `BITBLT_MULTI` (0x9B) with the opcode's top bit clear.** Section 6.2 of the R5xx *Acceleration* guide rev 1.5 (printed page 33)
  says the most significant bit of IT_OPCODE tells whether the packet carries the GUI_CONTROL settings word (1) or omits it (0), and
  the summary lists `NEXTCHAR` (0x19), `PLY_NEXTSCAN` (0x1D) and `SET_SCISSORS` (0x1E) in their top-bit-clear form too.
  `BITBLT_MULTI` (6.2.2.9, printed pages 44 and 45) has a data block of three dwords per rectangle: source x and y, destination x and y
  (x in bits 31:16, y in bits 15:0) and the width and height (width in 29:16, height in 13:0). `__R300BltData` (`fglrx_dri64.so`, 0x901660) builds exactly three
  dwords after a register-programmed set-up. Which half holds what, from the routine: the in-row position `pos & 0x3ff` is shifted left by 16, so x is
  the high half and y the low half (y is 0 in the short form); the width `n` is `n << 16` with the height 1 in the low bits, and the
  long form is `0x4000000 | rows`, a width of 1024 in the high half and the row count in the low half. An earlier version of this page had the
  halves the other way round (y high, height and width swapped); the routine and the guide agree on x and width high.
  The set-up before the packet is the 2D register state the omitted settings word would have carried: `DP_GUI_MASTER_CNTL` (0x146c) = 0x52cc32fb,
  `SRC_OFFSET` and `SRC_PITCH` (0x15ac, 0x15b0), `DST_OFFSET` and `DST_PITCH` (0x1404, 0x1408), `SC_LEFT`, `SC_RIGHT`, `SC_TOP` and `SC_BOTTOM`
  (0x1640 to 0x164c; 0, 0x1fff, 0, 0x1fff) and zero to 0x1704 (`FLUSH_1`) and 0x1700; names from the public Linux `radeon_reg.h`.
  Read against the GUI_CONTROL field table of the guide (printed pages 35 and 36), the value 0x52cc32fb is: source and destination pitch-offset
  controls and destination clipping set (bits 0, 1 and 3), no brush (bits 7:4 = 15, the public header's `BRUSH_NONE`), destination type 2 (8 bpp
  pseudocolor), source type 3 (same as destination), ROP3 0xCC (source copy, bits 23:16), source loaded from video memory (bits 26:24 = 2) and
  bits 28 and 30 (clear-compare function and write-mask disable). So the packet is a byte-per-pixel linear copy through the 2D engine, 1024 bytes
  to a row, which is why the routine splits a copy at 1024 and sets both pitches to 0x400. **Established** (the guide's header rule and field
  tables, and the routine's body read in full); the guide describes the register through the packet field, the bit-for-bit match to the register is
  **inferred** from the field names the public driver also uses.
- **0x2b and 0x2d are not in any AMD, Linux or Mesa packet list; the CP microcode defines them.** The microcode image `fglrx_drv.so` loads
  for chip codes 44, 45 and 52 (`aPM4_Microcode_R300`, 256 entries of an 8-byte pair, see [kernel-attach.md](../kernel/kernel-attach.md)) starts with a
  byte table in words 4 to 14: 44 bytes, one per type-3 opcode from 0x10 to 0x3b (opcode with the top bit cleared, minus 0x10), read low byte of each
  word first. Each byte is the entry number of a handler. Read this way the table is consistent with everything the guide and the stream say
  about it: unsupported opcodes (0x20 to 0x23 `PRED_EXEC` to `WAIT_MEM`, and the gaps) all point at one do-nothing entry (0x4f); `BITBLT` (0x12)
  and `BITBLT_MULTI` (0x1b) share entry 0x5a; `3D_DRAW_VBUF` (0x28 to 0x2a) share 0x9c and the three `_2` draws (0x34 to 0x36) share 0x9d;
  the three clear packets (0x32 `3D_CLEAR_ZMASK`, 0x37 `3D_CLEAR_HIZ`, 0x38 `3D_CLEAR_CMASK`) go to entries 0xd1, 0xd6 and 0xdb, which have the same
  five-entry shape; `WAIT_FOR_IDLE` (0x26) goes to 0xe6 and `3D_LOAD_VBPNTR` (0x2f) to 0xe0. Under that reading 0x2b goes to entry 0xe9 and
  0x2d to entry 0xf0. Entry 0xe9 to 0xef is a loop of six register writes whose low 13 bits are the register dword indexes 0x8c4, 0x8c5 and 0x8c6
  (byte 0x2310 to 0x2318, `VAP_VTX_ST_NORM_0_X/Y/Z`) and 0x928, 0x929 and 0x92a (0x24a0 to 0x24a8, `VAP_VTX_ST_POS_0_X/Y/Z_3`); entry 0xf0 to 0xf3
  is the same loop with the three position writes only. The same reading gives a list of real R300 3D registers wherever the microcode names one: the every-other-entry list at entries 0x15 to 0x37 holds the dword indexes
  0x854 to 0x857 (byte 0x2150 to 0x215c, `VAP_PROG_STREAM_CNTL_0` and after), 0x824 and 0x825 (`VAP_OUT_VTX_FMT_0/1`), 0x830 (`VAP_VTX_NUM_ARRAYS`), 0x10c0 and 0x10c1
  (`RS_COUNT`, `RS_INST_COUNT`), 0x1041 (`TX_ENABLE`), 0x1184 to 0x1187 and 0x1180 (`US_CODE_ADDR_0..3`, `US_CONFIG`), and 0x1393, 0x138a and 0x138e
  (`RB3D_DSTCACHE_CTLSTAT`, `RB3D_COLOROFFSET0`, `RB3D_COLORPITCH0`). Eighteen out of eighteen decode to registers of the guide, which is what supports the
  decode. That gives: 0x2b delivers six dwords per vertex, three to the normal port and three to the position port; 0x2d
  delivers three, to the position port only, which matches what `__R300TCLDrawArraysV3FN3F` and `__R300TCLDrawArraysV3F` pack, and the
  `VF_CNTL` and `END_OF_PKT` type-0 writes around them in the stream. **Inferred**: the microcode's instruction format is unpublished (the guide
  describes only how it is loaded, section 5.12, printed page 27), so the instruction decode (register index in the low 13 bits) and
  the byte order of the dispatch table are read from structure, not from a document; the consistency checks above are what supports them. The
  R200 table `aPM4_Microcode_R6x` sends 0x2b and 0x2d to different entries (0xf2 and 0xf9), so neither is a packet that only the shipped R300 table has.
  The packets have no public name: a model accepts them, takes the count from the packet length and feeds the two ports as above. Their
  names stay **unknown**.

## 3. Type-0 registers written from the stream

The list below is the set of `R300` register blocks the module writes with type-0 headers, as found by scanning every constant in every
`__R300*` routine that decodes as a type-0 header for a register of the 3D block or the command processor (names from the
[register tables](../../devices/README.md)). It is **inferred** (a scan of constants and the routines' register stores; the whole
body was read only for the routines named in the other pages). Counts are the number of registers one packet writes; `*` marks the
one-register-write form (a table upload).

| Block | Registers (byte offsets) | Notes |
|---|---|---|
| CP | 0x730 (2 regs), 0x738 (2 regs) | indirect-buffer jumps; the second level only from a draw stream |
| 2D engine and cache | 0x146c, 0x1404, 0x1438, 0x342c, 0x4e4c | blit helper, the destination-cache flushes (0x342c = 15 in the submit and idle paths and 5 in the blit helper; 0x4e4c = 10) |
| Scratch | 0x15e0, 0x15e8 (2 regs), 0x15f0 (2 regs) | time stamp and idle marker |
| VAP control | 0x2080, 0x2084 `VF_CNTL` (164 routines), 0x2090/0x2094 `OUT_VTX_FMT`, 0x20b0 `VTE_CNTL`, 0x20b4 `VTX_SIZE`, 0x2134/0x2138 index limits, 0x2140, 0x2180, 0x21dc, 0x221c `CLIP_CNTL`, 0x2220 (4 regs), 0x2224 (5 regs) | |
| VAP streams | 0x2150, 0x21e0 (`PROG_STREAM_CNTL`, `_EXT`), 0x20c0 block (via 0x830 headers) | vertex-array programming through registers |
| PVS | 0x2200 (index), 0x2208 (data, one-register form, 4, 8 or 16 dwords per write), 0x2284 flush, 0x2288, 0x22d0 (3 regs) | code and constants upload |
| Vertex state | 0x2300 to 0x24ac (position, normal, colour, texture, fog, blend weights, edge flag, end of packet) | the "current attribute" ports; 0x24a0 (3 regs, 187 routines) and 0x2460 are the commonest |
| TX | 0x4100, 0x4104 (invalidate and enable), 0x4400 (16 regs), 0x4540 | texture state (the full 0x44xx to 0x45xx set is written by `__R300UpdateHWTexState`, not scanned in full) |
| GA/SU/RE | 0x4018, 0x4200 to 0x4298, 0x42a0 to 0x42c8 | tile, point, line, polygon, offset, fog, cull |
| RS | 0x4300 (1 or 2 regs), 0x4304, 0x4310 (1 or 8 regs), 0x4330 | interpolators |
| SC | 0x43a4, 0x43a8, 0x43b0, 0x43d0, 0x43e0, 0x43e4, 0x43e8 | scan converter, in the clip page |
| US | 0x4600 (1 or 3), 0x4604, 0x4608, 0x4610 (4), 0x4620 (1 or 32), 0x46a4 (1 or 4), 0x46b4, 0x46c0 (up to 256), 0x47c0, 0x48c0, 0x49c0, 0x4c00 (32 or 128) | fragment program, see the shader page |
| RB3D | 0x4e00 to 0x4e88 | colour buffer: control, blend, mask, clear value, ROP, offset, pitch, dither, cmask, AA resolve |
| ZB | 0x4f00 to 0x4f5c | depth buffer control, offset, pitch, clear value, Z mask, Hi-Z, z-pass |

Not written by the stream (nothing found): `GA_SOFT_RESET` (0x429c), the GB pipe-select and MSPOS registers other than through
`__R300LoadContext`, `RB3D_ZCACHE`/`RB3D_CCTL` combinations beyond those listed. (`GB_MSPOS0/1` at 0x4010/0x4014 are written from the
accumulation-clear and resolve routines with fixed sample positions 0x66666666 / 0x06666666 or 0x78888888 / 0x08888888; see the
state page.)

## 4. Which routine families emit which packets

| Family | Packets |
|---|---|
| Submit (`__R300DRMSubmitPM4`, `__glATISubmitBM`) | type-0 clip, flush, IB jump, scratch; 0x1e, 0x26, 0x10 |
| Array draws (`__R300TCLProcessArrayPrimitive`, `...WithIndices`, `...IndexBufferPrimitive`, `...Native`, `...Hos`) | 0x2f then 0x28, or 0x33 then 0x36 |
| Fast array draws (`__R300TCLProcessFastDrawArrays`, `...MultiDrawArrays`, `...FastDrawElements`) | registers 0x20c0 block, 0x34, 0x10 placeholders |
| Immediate-mode vertex paths (`__R300TCLDrawArraysV3F` and `V3FN3F`, `DrawElements`, `MultiDraw`) | 0x2b, 0x2d plus VAP state ports |
| Software-vertex paths (`__R300DrawCached*`, `__R300DrawIndexed*`, `__R300RenderPoint`, `__R300RenderLine`, `__R300FillTriangle`, `_Imaging_DrawTexRectDWords`) | 0x35 |
| Embedded immediate mode ("TIMMO": `__R300TCLSetupEmbeddedTIMMO`, `...SetupAOSTIMMO`) | register programming of the stream, 0x34, 0x35, 0x10, 0x30 |
| Clears (`__R300FastZStencilClear`, `__R300ClearCMask`, `__R300ClearColorBuffer3D`, `__R300AccumClear`, `__R300FlushZStencilBuffer`) | 0x32, 0x37, 0x38 and a 9-dword 0x35 rectangle |
| Resolve and flush (`__R300ResolveMultisampledColorBuffer`, `__R300FlushZStencilBuffer`) | 0x35 with 3 or 9 dwords |
| Blit (`__R300BltData`, `__R300BltBlock`, `__R300DepthFetch16`) | 2D registers and 0x1b |
| Indirect buffer (`__R300TCLInsertIndirectBuffer`) | type-0 write of 0x730/0x734 |

## 5. Reset, fences and padding in the stream

- Every submit ends with the `NOP` 0xc0001000 plus a zero word (`__glATISubmitBM`), padding to even length with type-2 words, then the
  submit routine's type-0 packets. **Established.**
- `__R300ZFillPassRecordDraw` is called before each draw packet (arguments 3 or 6 dwords) to record where the packet lies so a
  Z-fill pass can be replayed; it writes no packet itself. **Inferred** (name and call sites; callee not read).

## 6. What this settles and what it leaves

Settled: the full opcode set the R300 GL module emits; the body of every one of them except `3D_LOAD_VBPNTR`'s descriptor packing,
and the previously unknown 0x1b, 0x2b and 0x2d have layouts (not names). Open: the meaning of 0x1b, 0x2b, 0x2d and 0x30 in the CP microcode (the microcode
contents are in no document; routes tried: AMD R5xx and R3xx guides, Linux 2.6.30 `r300_cmdbuf.c`, Mesa 7.11.2 `r300_cmdbuf.c`,
all silent); the register-packed array descriptor words of `3D_LOAD_VBPNTR`; whether any routine builds a type-3 header from variables that the scan
cannot see (the draw paths that use `(n << 16)` forms were read; a full list of such builders is not made).
