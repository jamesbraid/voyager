# R300 and R350 shader program formats: vertex (PVS) and fragment (US) words, and the 24-bit float

What the vertex and fragment units execute, taken from AMD's public documents and cross-checked with Mesa's r300 driver.
The IRIX driver compiles ARB and ATI programs into these words itself
([r300-command-stream.md](r300-command-stream.md)); a model sees only the words, never the program text. Field-level
layouts of the fragment words are also in the generated register tables: [us](../../devices/us/registers.md) and
[vap](../../devices/vap/registers.md).

Grades: **established** is a statement of a published AMD document read for this page (title, revision, printed page).
**Software expectation** is Mesa 20.3.5 `src/gallium/drivers/r300` (and Linux `radeon`), public driver code that a guest
runs. Neither says what the IRIX driver emits: that stays in the command-stream page. Sources:

- AMD, *Radeon R3xx 3D Register Reference Guide*, revision 1.0, 2008-02-25 (**R3xx**).
- AMD, *Radeon R5xx Acceleration*, revision 1.5, 2010-06-08 (**R5xx**). It covers a later generation; it is used here
  only where it states that a part is common to R3xx, and says so.

## Vertex shader (PVS) instruction word

**Established** (R5xx, section 7.5.9, printed pages 95 to 99; section 7.5.1 says the R300 PVS is the base that the R5xx
model extends). A vertex instruction is 128 bits, written as four dwords: an opcode and destination word, then three
source-operand words. The instruction memory holds 256 of them, the constant store 256 vectors and the temporary file
32 vectors per vertex, with 32 input vectors per vertex possible (R5xx 7.5.1, printed pages 71 to 72). The R300 adds
jump, loop and subroutine flow control over the R200 (7.5.1; the control words are the `VAP_PVS_FLOW_CNTL_*` registers,
[vap](../../devices/vap/registers.md)).

Destination and opcode word (dword 0):

| Bits | Field | Meaning |
|---|---|---|
| 5:0 | opcode | the operation; with bit 6 or 7 set it is a math op or a macro op |
| 6 | math | the opcode selects the math (scalar) engine instead of the vector engine |
| 7 | macro | two-clock multiply-add forms (remaps the opcode: 0 = 2-clock MAD, 1 = 2-clock MULx2+ADD); the hardware splits a multiply-add whose three sources are unique temporaries, because the temporary file has two read ports |
| 11:8 | register type | 0 temporary, 1 address register A0, 2 output, 3 output with X replicated to all four channels, 4 alternate temporary, 5 input |
| 12 and 31 | address mode | bit 12 is the high and bit 31 the low bit of a 2-bit mode: 0 absolute, 1 relative to A0, 2 relative to the loop index I0 |
| 19:13 | offset | vector offset in the selected memory |
| 23:20 | write enables | X, Y, Z, W |
| 24, 25 | saturate | vector engine, math engine: clamp to 0..1 |
| 26, 27 | predicate | enable, sense (R5xx predication) |
| 28 | dual math op | the word carries a vector and a math operation |
| 30:29 | address select | which component of A0 a relative address uses |

Source operand words (dwords 1 to 3, identical layout): bits 1:0 register type (0 temporary, 1 input, 2 constant, 3
alternate temporary); bit 3 absolute value of all four components (R5xx); bits 4 and 31 the address mode (bit 4 low,
bit 31 high); bits 12:5 offset; bits 24:13 four 3-bit swizzles X, Y, Z, W (0 to 3 select a component, 4 forces 0.0, 5
forces 1.0); bits 28:25 per-component negate; bits 30:29 address select.

Opcodes the document marks as common to R300 (the rest of its table is marked new in R5xx):

- Vector engine: 0 no-op, 1 dot product, 2 multiply, 3 add, 4 multiply-add, 5 distance vector, 6 fraction, 7 maximum,
  8 minimum, 9 set-greater-or-equal, 10 set-less-than, 11 multiply-x2-add, 12 multiply-clamp, 13 float to fixed
  (DX rules), 14 float to fixed with rounding.
- Math engine: 0 no-op, 1 exp base 2 (DX), 2 log base 2 (DX), 3 exp base e (FF), 4 light coefficients (DX), 5 power
  (FF), 6 and 7 reciprocal (DX, FF), 8 and 9 reciprocal square root (DX, FF), 10 multiply, 11 and 12 full-precision exp2
  and log2 (DX), 13 to 15 power with three clamp variants, 16 sine, 17 cosine.

The vector opcodes 15 to 28 and math opcodes 18 to 28 (predicate, conditional write and mux, IEEE reciprocal forms)
are labelled new in R5xx: whether an R300 or R350 accepts them is **inferred** not to be so, and unread for an R420.
The A0 register is a legal destination only for the two float-to-fixed vector opcodes. Mesa repeats the same field and
opcode names in `r300_reg.h` and builds the words in `compiler/r3xx_vertprog.c` (**software expectation**).

## Fragment shader (US) words

**Established** (R3xx, pages 62 to 70; the generated [us](../../devices/us/registers.md) table has every field). A
fragment program is three register tables written from the ring, no separate shader API
([r300-command-stream.md](r300-command-stream.md)):

- **ALU instructions**, up to **64**: for each instruction one word in each of four 64-entry tables, `US_ALU_RGB_ADDR`
  (0x46c0), `US_ALU_ALPHA_ADDR` (0x47c0), `US_ALU_RGB_INST` (0x48c0) and `US_ALU_ALPHA_INST` (0x49c0). The colour half is
  a 3-component (vec3) operation and the alpha half a scalar one; the two run side by side.
  - Address words: three 6-bit source addresses (0 to 31 a slot of the pixel stack frame, 32 to 63 a constant), a 5-bit
    destination register, write mask (3 bits colour, 1 bit alpha), output mask, render target 0 to 3 (A to D), and in the
    alpha word an output-to-depth-W bit and a 4-bit statistics write enable.
  - Instruction words: three operand selects of 5 bits (source 0, 1, 2, or alpha of a source, the pre-subtract value
    `srcp`, constants 0, 1 and 0.5, and component rotations `gbr`, `brg`, `abg`), each with a 2-bit modifier (none,
    negate, absolute value, negative absolute); a 2-bit pre-subtract op (1-2a, b-a, b+a, 1-a); a 4-bit opcode; a 3-bit
    output modifier (x1, x2, x4, x8, /2, /4, /8); a clamp-to-[0,1] bit; and, in the colour word only, a NOP-after bit
    for pre-subtract dependencies.
  - Colour opcodes: 0 MAD (a*b + c), 1 DP3, 2 DP4, 3 D2A (a.r*b.r + a.g*b.g + c.b), 4 MIN, 5 MAX, 7 CND
    (c > 0.5 ? a : b), 8 CMP (c >= 0 ? a : b), 9 FRC, 10 SOP (the exp2, log2, rcp or rsq computed in the alpha ALU).
    Alpha opcodes: 0 MAD, 1 DP (the dot product from the colour ALU), 2 MIN, 3 MAX, 5 CND, 6 CMP, 7 FRC, 8 EX2, 9 LN2,
    10 RCP, 11 RSQ.
- **Texture instructions**, up to **32**, `US_TEX_INST` (0x4620): source address and destination address in the pixel
  stack frame (5 bits each), a 4-bit texture id, and a 3-bit operation: 0 NOP, 1 LD, 2 TEXKILL, 3 PROJ, 4 LODBIAS.
- **Indirection levels**: `US_CONFIG` (0x4600) selects 1 to 4 valid levels (the document's NLEVEL 0 to 3), and
  `US_CODE_ADDR` 0 to 3 (0x4610) gives, for each level, the start and size of its ALU segment (0 to 63, size 1 to 64) and
  its texture segment (0 to 31, size 1 to 32) plus RGBA-out and W-out flags. `US_CODE_OFFSET` (0x4608) relocates both code
  areas. `US_PIXSIZE` (0x4604) is the pixel stack frame size (1 to 32). The fragment limits are therefore 64 ALU, 32
  texture, 4 levels and 32 temporaries (stack slots).
- **Constants**: 32 vec4 constants in four interleaved arrays (`US_ALU_CONST_R`, `_G`, `_B`, `_A`, one 24-bit field each,
  stride 0x10 from 0x4c00).
- **Outputs**: `US_OUT_FMT` 0 to 3 (0x46a4) per render target: 8 or 10-bit integer, 16-bit, 2-4 component packed formats,
  and floating point 16-bit (S10E5) and 32-bit (S23E8) in 1, 2 and 4 components; `US_W_FMT` (0x46b4) selects W output as
  zero, 24-bit fixed or 24-bit float.

Mesa fills the same tables in `compiler/r300_fragprog_emit.c` with the same limits (`R300_PFS_MAX_ALU_INST` 64,
`R300_PFS_MAX_TEX_INST` 32, `R300_PFS_MAX_TEX_INDIRECT` 4; **software expectation**). The R5xx guide's section 8 describes
a different fragment ISA with branching; it must not be used for R300.

## Differences a model must keep as parameters

| Item | R300 and R350 | R420 (Mesa `is_r400`) |
|---|---|---|
| Vertex instructions, constants, temporaries | 256, 256, 32 (AMD, established for the PVS model) | the same screen limits in Mesa; no R420 vertex limit set (software expectation) |
| Vertex engines (Mesa `num_vert_fpus`) | 4 | 6 |
| Fragment ALU, texture instructions | 64 and 32 | 512 and 512 (Mesa `R400_PFS_MAX_*`) |
| Texture indirections | 4 | 4 in Mesa; 511 is R5xx only |
| Pixel quad pipes (Linux `r300_gpu_init`) | 2 (1 for IDs 4144 and 4148) | not read here (Linux has separate 3-pipe and 4-pipe tile-config values) |
| Z plane compression | 4x4 (R5xx 10.4.9: RV350 and later add 8x8) | 8x8 on parts after RV350 |

The R420 column rests on Mesa alone (software expectation); the AMD R3xx reference is R3xx-specific. An R420 appears
only in SGI Prism ([the inventory](../products/sgi-ati-inventory.md)).

## fp24, and why no exact hardware match is claimed

1. **The fragment constant registers hold a 24-bit float.** **Established** that each `US_ALU_CONST_*` field is 24 bits
   wide and that the R3xx reference annotates it "(S16E7)" (R3xx, printed page 70). The annotation gives no bit
   order, exponent bias, rounding rule or special-value handling.
2. **The register encoding.** **Software expectation**: Mesa's `pack_float24` (`r300_emit.c`) builds it as sign in bit
   23, a 7-bit exponent in bits 22:16 with bias 63, and the top 16 bits of the IEEE mantissa in bits 15:0 (the low 7
   bits are dropped, so conversion truncates; zero is all zeros), and Linux's header comments the parameters "7.16
   floating point". Neither handles overflow, underflow, infinities or NaN. The only other 24-bit float in the R3xx
   reference is the name `W24_FP` for the W output (`US_W_FMT`), with no layout.
3. **Where fp24 applies inside the shader.** **Inferred**, not stated for R300: the R5xx guide's change list calls the
   R5xx fragment unit a "new FP32 US" that is "still TRUNC rounding mode" (R5xx 1.4, printed pages 7 to 8), so the
   earlier unit was not FP32; the constant width above is consistent with a 24-bit internal path. Outputs can be
   written at 16 and 32-bit float (`US_OUT_FMT`), and SGI's porting guide states a 24-bit float per colour channel
   frame buffer (007-4297-001, printed page 8; an earlier reading, not re-read for this page: **inferred**).
4. **Rounding and exactness.** AMD's R5xx guide says the R5xx fragment unit's rounding "could best be said [to be]
   random ... it is infeasible to specify a uniform rounding mode", that most ALU operations are "accurate to within
   one bit on each input", that transcendentals have larger tolerances, and that denormals flush to zero (R5xx 8.7.1,
   printed page 121). That is a statement about R5xx, **established** as such; for R300 it is **inferred** to be no
   better. Neither AMD document gives the R300 texture filter weights, the interpolator precision, the multisample resolve
   arithmetic or the transcendental tables.

**Consequence.** No public document defines R300 shader arithmetic to the bit, so no exact hardware match is claimed:
any model's fragment results are an **approximation** with a stated reference, and **unknown** against silicon. The route
to settle it is a capture from a real R300 or R350 running known shaders, which the PC cards of the same silicon (FireGL
X1 and Radeon 9700) would also provide. Recorded in [questions/open-questions.md](../../questions/open-questions.md#3d).
