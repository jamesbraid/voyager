# What a model of the R300 and R350 must accept, per operating system

The smallest set of configuration, register, command-packet and microcode traffic that the two software stacks send to
the chip to bring up a console and run OpenGL. Each row names its source and a grade (established, software expectation,
inferred, unknown, as in the pages cited). A row is the guest's expectation, not a statement about the silicon. "IRIX"
means 6.5.30 on an IP35 Onyx4 host ([r300-command-stream.md](../opengl/r300-command-stream.md),
[kernel-attach.md](../kernel/kernel-attach.md)); "Linux" means the public radeon DRM and Mesa r300
([prism-driving.md](../linux-sn2/prism-driving.md)).

## 1. Attach and PCI

| Item | IRIX | Linux | Grade |
|---|---|---|---|
| Config space: vendor, device, revision, class, subsystem IDs; command bits 0 and 1 (I/O, memory) set | read at attach, command byte written | standard PCI probe | IRIX established, Linux expectation |
| Device IDs 1002:4e47 (R300, FireGL X1) and 1002:4e4b (R350, FireGL X2); also 4e44, 4e46, 4148 claimed | driver tables | `r300_pci_ids.h` | established |
| BAR 0 frame buffer, BAR 1 I/O, BAR 2 64 KB register window, expansion ROM BAR | mapped; ROM size probe by writing all ones | same layout | IRIX established; roles of BAR 0 to 2 inferred from the public chips |
| Option ROM: 0x55 0xaa signature, PCI-ROM header, init entry at offset 3 (bus, device, function in AX), VBE 0x4f02/0x4f03 | run in an x86 emulator by the PROM and by the kernel before attach | not run (Linux reads the ROM for tables only) | IRIX established ([option-roms.md](../ucode/option-roms.md)) |
| Legacy VGA windows (I/O 1 KB, memory 0xa0000 for 0x20000 bytes) | mapped on the console pipe | not needed | established |
| Interrupt: shared line, vendor handler | `pciio_intr_alloc` lines A and B | PCI INTx | established / expectation |
| Byte lanes: register and ROM windows mapped with the bridge's word-value or byte-stream swap | BARs 0 and 2 word values, BAR 1, ROM, legacy windows byte stream | little-endian host | IRIX established; effect on the card inferred |
| AGP capability and fast-write handshake | not used (aperture parked at 0xffffffff) | `tioca_fastwrite_enable` reads `AGP_STATUS` and writes `AGP_COMMAND` if the capability exists | IRIX inferred, Linux expectation |

## 2. Registers touched before the first command

| Offset (byte) | Value or action | Source | Grade |
|---|---|---|---|
| 0x4018 `GB_TILE_CONFIG` | 0x17 (tiling, 16-pixel tiles, R300 pipe count), written twice around a reset | IRIX `fglrx_attach`; Linux `r300_gpu_init` | established / expectation |
| 0x429c `GA_SOFT_RESET` | 0x400 | IRIX `fglrx_attach` | established |
| 0x0040 `GEN_INT_CNTL` | 0 (all sources masked) | IRIX attach | established |
| 0x0050, 0x03f8 CRTC general control | clear bits 25 and 16 (display and cursor off) | IRIX attach | established |
| 0x0030 `BUS_CNTL` | bit 6 cleared (bus mastering allowed) | IRIX X module | established |
| 0x0148 `MC_FB_LOCATION`, 0x014c `MC_AGP_LOCATION`, 0x0170 `AGP_BASE` | frame-buffer location written; AGP window parked (0xffffffff) | IRIX X module | established for the AGP words, frame-buffer value open |
| 0x0e40 `RBBM_STATUS` | polled for idle (bits 16 and 9 clear) | IRIX, Linux | established / expectation |
| 0x00f0 `RBBM_SOFT_RESET` | VAP, GA then CP (Linux); IRIX uses `GA_SOFT_RESET` and CP reset in `_r6x_resetPM4` | both | expectation / established |
| 0x1724 (`ISYNC_CNTL` in Linux, `CACHE_CNTL` in the X module's notes) | 3 | IRIX `FGLInitCP` | established |
| Display: CRTC, PLL, palette, tiling, overlay registers | X module | [x-driver-functions.md](../xsgi/x-driver-functions.md), [bit-layouts.md](../../devices/display/bit-layouts.md) | established per register |

## 3. Command processor start-up

| Step | Register traffic | Source | Grade |
|---|---|---|---|
| Microcode load | `CP_ME_CNTL` (0x7d0) = 0x401f0000; `CP_ME_RAM_ADDR` (0x7d4) = 0; 256 pairs: `CP_ME_RAM_DATAH` (0x7dc) then `CP_ME_RAM_DATAL` (0x7e0) | IRIX `PM4LoadMicroCode` (R300 table of 2048 bytes for chip codes 44, 45, 52); Linux `r100_cp_load_microcode` (no `CP_ME_CNTL` write) | established / expectation |
| Ring | `CP_RB_WPTR_DELAY` (0x718), `CP_RB_CNTL` (0x704: buffer size in 5:0, block size 13:8 = 0x3f, max fetch 19:18), `CP_RB_BASE` (0x700), `CP_RB_RPTR_ADDR` (0x70c) with `RB_NO_UPDATE` (bit 27) clear, write 0x2000000 to 0x44 | IRIX `r200_RegisterRingBufferLocation`, `r200_EnableRPTRwriteback` | established |
| Mode | `CP_CSQ_CNTL` (0x740) top nibble = 8 (primary and indirect bus-master) | IRIX `r200_SetPm4OperationMode` | established |
| Start | read `CP_RB_RPTR` (0x710), write it to `CP_RB_WPTR` (0x714) | IRIX `FGLStartCP` | established |
| Time stamp and scratch | `SCRATCH_UMSK` (0x770) = 0x3f, `SCRATCH_ADDR` (0x774); scratch registers 0x15e0 to 0x15ec | IRIX; Linux fences | established / expectation |
| Ring size | at least 0xd000 dwords (the R300 table) | IRIX `FGLInitCP` | established |

The ring memory itself is host memory the card reads as bus master; the write pointer is advanced by writing 0x714; the read
pointer is written back to host memory. Both stacks write packets into the ring from user or kernel space and advance
`CP_RB_WPTR`.

## 4. Packets

Type-0 (register write, with the one-register-write form), type-2 (NOP padding) and type-3 are all required.

| Type-3 opcode | Use | IRIX | Linux | Grade |
|---|---|---|---|---|
| 0x10 NOP | padding | yes (wrap padding, 0xc0001000 family) | yes | established / expectation |
| 0x1e SET_SCISSORS | per-submit | yes | not in the checked set | IRIX established (`__R300DRMSubmitPM4`) |
| 0x26 WAIT_FOR_IDLE | submit | yes | via `WAIT_UNTIL` writes | IRIX established |
| 0x28 3D_DRAW_VBUF, 0x34 3D_DRAW_VBUF_2 | draws | yes | yes | IRIX inferred (opcode scan), Linux expectation |
| 0x29 3D_DRAW_IMMD, 0x35 3D_DRAW_IMMD_2 | inline vertices (PRIM_WALK 3) | 0x35 in R300 routines, 0x29 only in R200 and R100 ones | both | IRIX inferred, Linux expectation |
| 0x2a 3D_DRAW_INDX, 0x36 3D_DRAW_INDX_2 | indexed draws | 0x36 yes, 0x2a not seen in R300 routines | both | IRIX inferred, Linux expectation |
| 0x2f 3D_LOAD_VBPNTR, 0x33 INDX_BUFFER | vertex and index arrays | yes | yes | IRIX inferred, Linux expectation |
| 0x32 CLEAR_ZMASK, 0x37 CLEAR_HIZ, 0x38 CLEAR_CMASK | Hyper-Z clears | yes | yes (filtered by owner) | IRIX inferred, Linux expectation |
| 0x1b BITBLT_MULTI (no settings word), 0x2b, 0x2d | blit rectangle; inline vertex-state data | yes | no | 0x1b established (AMD guide); 0x2b, 0x2d inferred from the microcode table, names unknown |

Indirect buffers: type-0 pair at 0x738 and 0x73c (`CP_IB_BASE`, `CP_IB_BUFSZ`: address, dwords), accepted in both stacks,
established for IRIX (`__R300DRMSubmitPM4`) and expectation for Linux. IRIX also writes a pair at 0x730 and 0x734 from
`__R300TCLInsertIndirectBuffer`: `CP_IB2_BASE` and `CP_IB2_BUFSZ`, the second indirect level, **established** by AMD's R5xx
Acceleration guide rev 1.5 (printed pages 25 and 150); model a ring, indirect 1, indirect 2 stack
([r300-engine-facts.md](r300-engine-facts.md#1-the-second-indirect-buffer-0x730-and-0x734-are-cp_ib2_base-and-cp_ib2_bufsz)).

Type-0 register writes the model must decode (names after Linux `r300_reg.h`, `radeon_reg.h`): the PVS block
0x2200, 0x2208 (one-register burst), 0x2284, 0x22d0..0x22d8, 0x22dc and following flow-control words; fragment block
0x4600..0x4dfc (control, code addresses, texture instructions 0x4620 for 32 words, ALU banks 0x46c0..0x4abc for 256 words,
constants 0x4c00 for 128 words); rasteriser 0x4300..0x4350; texture 0x4400..0x4540 for 16 units; setup 0x4260..0x42c8;
clip 0x43b0..0x43d0; colour buffer 0x4e00..0x4e88; depth buffer 0x4f00..0x4f60; 2D engine 0x1400..0x17e0; wait 0x1720; scratch
0x15e0..0x15ec; cache control 0x342c, 0x4e4c. IRIX source for each block: [r300-command-stream.md](../opengl/r300-command-stream.md);
Linux source: `r300_reg_safe.h` and `r300_reg.h`. Grade: inferred for IRIX, expectation for Linux.

## 5. Programmable units

| Unit | Contract | Source | Grade |
|---|---|---|---|
| Vertex (PVS) | instructions of 4 dwords uploaded at index 0 through 0x2200 then a one-register burst to 0x2208; flush 0x2284 = 0 before; code, const and flow controls at 0x22d0.. ; constants at index 0x200; IRIX caches up to 256 instructions | IRIX `__R300LoadProgram` (read in full); Mesa `r300_emit.c` | established (IRIX), expectation (Mesa) |
| Fragment (US) | 64 ALU instructions in four banks, 32 texture instructions, 4 indirections, 32 constants; control words at 0x4600, node pointers at 0x4610 | IRIX constant scan and routine reads; Mesa `r300_screen.c` | inferred (IRIX), expectation (Mesa) |
| Interpolators (RS) | 0x4300, 0x4310 (8 words), 0x4330 route words | IRIX, Mesa | inferred, expectation |
| Hyper-Z, multisample | z-mask, Hi-Z, c-mask memories cleared with the clear packets; aperture split in the kernel driver (zmask, hiz, cmask, visible, invisible) | IRIX kernel `firegl_free_buffer_queue` types 2 to 6 | established as kernel behaviour; chip behaviour unknown |

The word layouts of both programmable units are in [r300-shader-formats.md](../opengl/r300-shader-formats.md).

The IRIX GL compiles ARB vertex programs and, in the fixed-function paths, generates PVS programs itself; ARB fragment
programs go through a pixel-shader optimiser and packer into the US instruction banks (inferred from names and strings, see
the command-stream page). A guest GL layer never sees raw microcode; the model must execute or translate the PVS and US
formats Linux's `r300_reg.h` defines (`R300_VPI_*` and `R300_PFS_*` fields).

## 6. What differs between the stacks

- Microcode: the IRIX R300 table is a different revision of the public table (187 of 256 aligned pairs equal); the
  Linux file is `R300_cp.bin`. A model that accepts the writes and ignores the contents satisfies both; one that
  validates contents needs both images.
- Bridge: the IRIX contract is a PCI function on a Bridge-family chip (a PIC or XBridge; card directly on the bridge,
  inferred), with no AGP; the Linux SN2 path on Prism has TIO-CA AGP with a GART, observed for the X3 board
  ([onyx4-bus-attach.md](../kernel/onyx4-bus-attach.md), [the inventory](../products/sgi-ati-inventory.md)).
- Command submission: IRIX writes the ring itself from user space and uses indirect buffers only as jumps; Linux's
  checked stream never lets user space write the ring. Both reach the same CP.
- Display: IRIX sets modes through the X module's CRTC and PLL writes after the option ROM has set a VESA mode; Linux
  kernel mode setting reads ATOM or COMBIOS tables (`radeon_combios.c`) from the ROM; the model must serve the ROM.
