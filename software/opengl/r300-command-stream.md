# How the IRIX GL layer feeds the R300 command processor and shader units

What `usr/X11R6/lib/modules/dri/fglrx_dri64.so` (IRIX 6.5.30, n64; the n32 build has the same routine names) puts into the
command ring, which register blocks it writes, and how vertex and fragment programs reach the chip. Addresses are `.text`
offsets in `fglrx_dri64.so`. The routines are named in its symbol table (`__R300...`, `__R200...`, `__R100...`: one
generation-specific set per chip family, the R300 set serving chip codes 44, 45 and 52, see
[kernel-attach.md](../kernel/kernel-attach.md#command-processor-start-up-x-server-module)). Grades follow `AGENTS.md`
section 5: **established** only for a whole routine body read; call-list and constant-scan results are **inferred**.

Register names are the public Linux `r300_reg.h` and `radeon_reg.h` names where the offset matches; AMD's R3xx reference
and Mesa's r300 driver give the same blocks different names in places, noted where it matters. Packet field layouts
(type-0 header: bits 29:16 dword count minus one, bit 15 one-register-write, bits 14:0 first register as a dword index;
type-3 header: top bits 11, bits 29:16 dword count minus one, bits 15:8 opcode) are the public PM4 layout.

## Ring protocol

- **The CP is fed through a memory ring that user space writes directly.** `firegl_PM4Alloc` (kernel,
  [kernel-drm-functions.md](../kernel/kernel-drm-functions.md)) returns the address to write at; the driver stores the
  packet dwords there and the new write index goes to `CP_RB_WPTR` (0x714). **Established** (whole routine bodies read in
  both the kernel and `__R300DRMSubmitPM4`, 0x8c7f80, 1012 bytes).
- **Padding is a type-2 packet (0x80000000) or a type-3 NOP.** The kernel wrap code pads with type-3 NOP headers of the
  form (count << 16) | 0xc0001000, and the idle sequence pads with 0x80000000. **Established**
  ([kernel-drm-functions.md](../kernel/kernel-drm-functions.md), `firegl_PM4Alloc`, `firegl_PM4WaitForIdle`).
- **Idle sequence (kernel `firegl_PM4WaitForIdle`).** Type-0 write of 15 to register 0x342c (`RADEON_RB2D_DSTCACHE_CTLSTAT`),
  type-0 write of 0x70000 to 0x1720 (`RADEON_WAIT_UNTIL`, bits 18:16 are the 2D, 3D and host idle-clean waits in the public
  header), then a type-0 write of two words to 0x15f0 (scratch register 4). The read pointer is polled at +512 of the
  write-back area. **Established** from the kernel reading. That bits 18:16 of `WAIT_UNTIL` mean those waits is **software
  expectation** (Linux `radeon_reg.h`).
- **`__R300DRMSubmitPM4` (0x8c7f80, 1012 bytes), established** for every store listed (the routine body was read in full).
  Per clip rectangle it emits type-0 writes of the rectangle at 0x43b0 onwards (`R300_RE_CLIPRECT_TL_0`, two words per
  pair) and 0x43d0 (`R300_RE_CLIPRECT_CNTL`) = 0xfffe, a flush (15 to 0x342c, `RADEON_RB2D_DSTCACHE_CTLSTAT`), and the
  indirect-buffer jump: a type-0 write of two words at **0x738** (`RADEON_CP_IB_BASE`, then `CP_IB_BUFSZ` at 0x73c) with
  the buffer address and dword count taken from the submit record, then a write to 0x4e4c (3D destination-cache control).
  After the last rectangle: type-0 writes of two words at 0x15e0 and at 0x15e8 (scratch registers 0 to 3, the time-stamp
  words), a type-3 WAIT_FOR_IDLE (0xc0002600) when bit 0x1000 of the submit record's first word is set, and a type-3
  SET_SCISSORS (0xc0011e00) with the words 0 and 0x1fff1fff. This matches Linux's r100 indirect-buffer use
  (`PACKET0(RADEON_CP_IB_BASE, 1)` in `drivers/gpu/drm/radeon/r100.c`).
- **A second jump pair at 0x730: `CP_IB2_BASE` and `CP_IB2_BUFSZ`.** `__R300TCLInsertIndirectBuffer` (0x854320, 588 bytes,
  read in full) emits a three-dword packet with header 0x000101cc, a type-0 write of two registers starting at byte offset
  **0x730**, carrying a buffer address and a length in dwords (split into pieces of at most 0x7fffff dwords). AMD's R5xx
  Acceleration guide, rev 1.5, names them: 0x730 is `CP_IB2_BASE` (bits 31:2) and 0x734 is `CP_IB2_BUFSZ` (bits 22:0, size in
  dwords), printed page 150. **Established** as the public name and offset, and **established** that the routine follows
  the guide's rules for starting an indirect stream (base written first, the size write is the last register of the
  type-0 packet; section 5.10, printed page 25) and that the second level is reached only from the first (section 5.6),
  which is how the routine is used: it sits inside a draw stream that was reached through the 0x738 jump. Linux names
  only the first pair. [r300-engine-facts.md](../model-contract/r300-engine-facts.md#1-the-second-indirect-buffer-0x730-and-0x734-are-cp_ib2_base-and-cp_ib2_bufsz)
  has the model consequences (a ring, indirect 1, indirect 2 stack).
- **Type-3 opcodes in the R300 draw, clear and blit routines.** Constants of the form 0xc000XX00 are built in R300
  routines for opcodes 0x10 (NOP), 0x1e (SET_SCISSORS), 0x26 (WAIT_FOR_IDLE), 0x28 (3D_DRAW_VBUF), 0x2f
  (3D_LOAD_VBPNTR), 0x32 (3D_CLEAR_ZMASK), 0x33 (INDX_BUFFER), 0x34 (3D_DRAW_VBUF_2), 0x35 (3D_DRAW_IMMD_2), 0x36
  (3D_DRAW_INDX_2), 0x37 (3D_CLEAR_HIZ) and 0x38 (3D_CLEAR_CMASK); opcodes 0x1b, 0x2b and 0x2d also appear: 0x1b is `BITBLT_MULTI` without its settings word
  (AMD R5xx guide), 0x2b and 0x2d feed the vertex-state ports ([r300-stream-pm4-packets.md](../model-contract/r300-stream-pm4-packets.md)). **Inferred** from a constant scan of the whole `.text` (not whole-routine reads);
  the names are Linux's. Which routines build which is in the symbol names (`__R300TCLProcessIndexBufferPrimitive` with
  0x33/0x36, `__R300FastZStencilClear` with 0x32/0x37, `__R300ClearCMask` with 0x38).
- **Register writes use type-0 packets, many through the one-register-write form.** The vertex-program data upload uses the
  header form (count << 16) | 0x8000 | register, see below. **Established** for that routine.
- **No GL-level vertex path through the CP.** The vertex streams are described with 3D_LOAD_VBPNTR and fetched by the chip.
  Immediate-mode vertices are written inline into the ring (names with `TIMMO`, and DRAW_IMMD_2 above). **Inferred** from
  routine names and the opcode scan.

## Vertex programs: how they reach the PVS

- `__R300LoadProgram` (0x834b40, 548 bytes) **established**, read in full. It uploads vertex-program instructions to the
  programmable vertex shader (PVS) memory as: type-0 write of 0 to 0x2284 (`R300_VAP_PVS_STATE_FLUSH_REG`); a three-dword
  type-0 write at 0x22d0 (the three words come from shadow state; Linux names these `R300_VAP_PVS_CNTL_1`, `_2`, `_3`, Mesa
  `PVS_CODE_CNTL_0`, `PVS_CONST_CNTL`, `PVS_CODE_CNTL_1`); type-0 write of 0 to 0x2200 (`R300_VAP_PVS_UPLOAD_ADDRESS`,
  `PVS_VECTOR_INDX_REG` in Mesa and AMD's reference); then one one-register-write packet (header (4n-1) << 16 | 0x8882)
  to 0x2208 (`R300_VAP_PVS_UPLOAD_DATA`) with 4 dwords per instruction, n instructions copied from the compiled program.
  It then calls the routine that records state. The shadow words (instruction count, first and last instruction fields at
  bit offsets 0, 10 and 20 of the first word, constant base and limit in the second, the last vertex-source instruction in
  the third) are assembled in the routine from the program record, matching Mesa's `R300_PVS_FIRST_INST`,
  `XYZW_VALID_INST`, `LAST_INST` fields.
- **Constants** go to the same index space at offset 0x200: `__R300LoadConstants`, `__R300TCLVSSetConstantVectorFast`
  and the material and point-sprite writers store a 0x2200 write (value 0x200 for parameters, as in the public
  `R300_PVS_UPLOAD_PARAMETERS`) and a one-register-write packet of 4n dwords to 0x2208. **Inferred** from the constant scan
  (names `__R300LoadConstants`, `__R300LoadMatrixFast`, `__R300TCLVSSetConstantVectorFast` carry 0x2200 and 0x2208 headers;
  not read in full).
- `__R300TCLVSLoadProgram` (0x7ac600, 1264 bytes) loads a vertex program only while the cached instruction count plus the
  new one stays within 256 (it compares against 0x100) and otherwise reloads from instruction 0: `0x100` and a `0x200`
  second word are visible in the routine. **Inferred** (read except the callees).
- **Where the program comes from.** `__glVertexProgramString` and `ParseProgram` (ARB text, `!!ARBvp1.0` is a string of the
  library) feed the vertex-shader compiler `__glVertexShaderCompileProgram`, `__glVertexShaderGenericOptimizeProgram`,
  and the chip stage `__R300TCLVSCompileProgram`, `__R300TCLVSPostOptimizeProgram`, `__R300TCLVSLoadProgram`,
  `__R300TCLVSRunProgram`. A software fallback exists: `v_vs_Mul`, `v_vs_Add`, `v_Dot3_ARB` and the other `v_*` routines
  and the `...Punt` entry points are a CPU vertex-program interpreter. So a program the PVS cannot hold is run on the host
  CPU, which is how the vendor manual's 64K-instruction vertex-program limit can coexist with a 256-entry code memory.
  **Inferred** (symbol names; the call chain from the ARB entry point to the upload routine was not traced, and the
  64K-instruction explanation is a hypothesis).
- **Fixed-function vertex processing is also run as a PVS program.** `__R300TCLFFXGeneratePassthroughProgram`,
  `__R300TCLFFXProgramNullShader` (0x2200/0x2208/0x22d0 headers in its body) and the `__R300TCLFFXOpcode*` routines
  generate PVS instructions for lighting, fog and vertex blending (`__ATITCLFFXGenerateProgram`). **Inferred** (names and
  constant scan).

## Fragment programs: how they reach the US block

- **Register blocks written.** `__R300InitRegs` (an initialiser; constants only) carries headers for 32 dwords at 0x4620,
  256 dwords at 0x46c0 and 128 dwords at 0x4c00. In `r300_reg.h` these are `R300_PFS_TEXI_0` (texture instructions, 32),
  `R300_PFS_INSTR1_0`/`INSTR3_0`/`INSTR0_0`/`INSTR2_0` (four 64-entry ALU instruction banks at 0x46c0, 0x47c0, 0x48c0,
  0x49c0) and `R300_PFS_PARAM_0_X` (32 constants of four words); Mesa names the same ranges `US_TEX_INST_0`,
  `US_ALU_RGB_ADDR_0`, `US_ALU_ALPHA_ADDR_0`, `US_ALU_RGB_INST_0`, `US_ALU_ALPHA_INST_0`. **Inferred** (constant scan plus
  matching public names; `__R300InitRegs` was not read in full).
- `__R300LoadCachedPSProgToHwRegs` (0x7412a8, 462 instructions) **inferred** (control flow and stores read, copy callees
  not): per-program load writes the block head at 0x4600 (three dwords: `R300_PFS_CNTL_0`, `_1`, `_2`, Mesa `US_CONFIG`,
  `US_PIXSIZE`, `US_CODE_OFFSET`), four code-address words at 0x4610 (`R300_PFS_NODE_0`..`3`, `US_CODE_ADDR_0..3`), single
  writes to 0x46b4 and 0x46b8, and the interpolator setup: two words at 0x4300 (`R300_RS_CNTL_0`, `RS_INST_COUNT`
  area), eight at 0x4310 (`R300_RS_INTERP_0..7`) and the route words at 0x4330 onwards (`R300_RS_ROUTE_0`).
- **Texture units.** A 16-dword write at 0x4400 (`R300_TX_FILTER0_0`) and the `0x44c0`/`0x4540` families
  (`R300_TX_FORMAT_0`, `R300_TX_OFFSET_0`) match the vendor manual's 16 texture units. **Inferred**.
- **Compiler chain.** `__R300FPCompileProgramInput` and `__R300FPALUInstruction`, `__R300FPTextureInstruction`,
  `__R300FPLoadParameters`, `__R300FPValidateShaderProgram` build the instructions; `r300PSOptCanonDepend`, `...KillAndSqueeze`,
  `...SortInputs`, `...R300Packer` and `r300PixelShaderOptimizer` form a pixel-shader optimiser and packer that pairs the
  vector and scalar halves into the 64 ALU slots; the log string "Texture indirections - %d" names the indirection count
  (public Mesa limit for this chip is 4). Compiled programs are cached (`__R300CheckToSeeIfUSProgExists`,
  `__R300DeleteAllUSProgs`). `__TranslateILtoR300FS` and `__R300CompileILProgram` translate an ATI intermediate-language
  program (the `!!ILfs1.0` string), used for GL's fixed-function fragment pipeline and imaging operations. **Inferred**
  from names and strings; the ARB fragment entry point (`!!ARBfp1.0` string) was not traced to these routines.
- The R300 and R350 share this path; chip code 44, 45 or 52 selects the R300 tables
  (`__R300ChipSpecificSettings`, microcode table of
  [kernel-attach.md](../kernel/kernel-attach.md#command-processor-start-up-x-server-module)).

## Register blocks the 2D and 3D paths touch

All **inferred** from constant scans of R300 routines and matched by offset to public names.

| Block (byte offsets) | Role (public name) | Seen in |
|---|---|---|
| 0x1720, 0x342c, 0x4e4c, 0x15e0..0x15f0 | wait-until, 2D and 3D destination-cache control, scratch registers | submit, idle |
| 0x2080..0x20b0 | `VAP_CNTL`, `VAP_VF_CNTL`, `SE_VTE_CNTL`, viewport scale and offset (`R300_SE_VPORT_*` at 0x1d98) | state update, draw |
| 0x2200, 0x2208, 0x2284, 0x22d0, 0x22e0 | PVS upload address and data, state flush, PVS control, user clip planes | vertex-program load |
| 0x4000..0x4100 | `GB_*` tile and pipe configuration, input control | init |
| 0x4260..0x42c8 | `SU` and `RE` setup: polygon, line, point, z-bias | state update |
| 0x4300..0x4350 | `RS_*` rasteriser interpolators | fragment-program load |
| 0x4400..0x4540 | `TX_*` texture filter, format, offset | texture state |
| 0x4600..0x4c00 | fragment-program control, texture and ALU instructions, constants | fragment-program load |
| 0x4bc0..0x4bd8 | fog and alpha | state update |
| 0x4e00..0x4e88 | `RB3D_*` colour buffer: blend, offsets, pitches, multisample | state update, blits |
| 0x4f00..0x4f60 | `ZB_*` depth buffer control, offsets, z-mask and Hi-Z | clears |
| 0x1404..0x17e0 | 2D engine (`DST_*`, `SRC_*`, `DP_*`, `SC_*`) used by the 2D blit path | 2D blits |

## What this answers and what stays open

Settled here: the CP is driven by a user-written ring of type-0, type-2 and type-3 packets; programs are uploaded to the PVS
through the 0x2200/0x2208 pair and to the fragment block through registers 0x4600 to 0x4dfc, both from the ring, never
through a separate shader API. Open (recorded in [../../questions/open-questions.md](../../questions/open-questions.md)):
the three unnamed type-3 opcodes, whether the ARB program entry points reach the R300
compilers or only a software path, the full register list per block (the constant scan names offsets, not roles), and
which routines program `GB_TILE_CONFIG` and the Hi-Z memory.
