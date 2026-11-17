# The R300 and R350 under Linux on SGI Prism (SN2)

What a Linux guest on a Silicon Graphics Prism asks of the same ATI chip, from public Linux and Mesa source and the public
Prism manuals. Grades: **established** (a published document or public source read for this statement), **software
expectation** (public driver code that a guest would run, not proof of the board), **inferred**, **unknown**. Nothing here
comes from the closed fglrx module; where only the fact that it exists is known, that is said.

## What is established about Prism

- **Two graphics pipes per XG2N module.** The Prism user's guide for Power and Team scalable configurations (007-4701-003,
  printed page 35) lists an XG2N graphics module as a 2U unit with two graphics pipes, zero or two Itanium 2 processors,
  0 to 24 GB of local memory and an L1 controller. The Extreme scalable guide (007-4774-001) is the other Prism edition.
  **Established.** The same document does not name the graphics chip in the pages read.
- **Which chip sits on a Prism pipe is unknown.** No Prism document read here says R300, R350, FireGL X1 or X2, and the Onyx4
  documents describe a different module (G2N) with the same two-pipe shape. Treating Prism as R350-based is **inferred**
  from the shared XG2N/G2N brick description and the request's premise only.
- **The closed driver existed for SN2.** A public linux-ia64 thread (December 2014, "Rebuilding a kernel for a proprietary
  closed-source ia64 module") names SLES's `kernel-rtgfx-2.6.5-7.244` (an SN2-configured real-time-graphics kernel with its
  own source rpm) and a proprietary fglrx module tied to that exact kernel build, and a second fglrx copy that was not the
  SLES one. **Established** that an SN2 kernel with a vendor graphics module (fglrx) was shipped in a SUSE kernel of version
  2.6.5. Which ProPack release, which X server version, and which fglrx version Prism used are **unknown**: no document read
  states them. The module is closed; its register traffic is not available to read, and nothing below depends on it.

## Public Linux 2.6 SN2 graphics bridge (TIO-CA, AGP)

Linux 3.0 (`arch/ia64/sn/pci/tioca_provider.c`, `arch/ia64/include/asm/sn/tioca.h` and `tioca_provider.h`,
`drivers/char/agp/sgi-agp.c`; later kernels dropped SN2) is the public description of the Altix-family AGP bridge, the TIO
chip's CA function. Whether a Prism XG2N pipe attaches through TIO-CA is **inferred**: the code is the only public
graphics-bridge code for SN2 and the Onyx4's IRIX kernel carries only Bridge-family objects (`pcibr.o`, `xbridge.o`,
`pic.o`) with no TIO-CA object, so the two OS paths may see different bridges on different products. **Unknown** until a
Prism hardware listing or an SN2 kernel configuration for an XG2N module is read.

What the CA code requires of an AGP card, all **software expectation** (read in full):

- **Aperture.** CA bus space has one 2 GB window starting at 0x80000000: the AGP-mapped range at 0x80000000 (0x40000000
  bytes), then the PCI 32-bit mapped range at 0xc0000000 (0x40000000 bytes), per `tioca.h`. The aperture register takes a
  size field (value 0x3ff for 4 MB down to 0x000 for 4 GB, written with the base), page-size bit (16 KB pages when the host
  page size is 16 KB or more, else 4 KB), and enable bits for AGP and PCI. The table pointer register takes the CoreTalk
  address of an 8-byte-entry GART with bit 0 set.
- **Entries and TLB.** One GART entry per aperture page; `tioca_physpage_to_gart` builds the entry; a TLB flush is a
  write to the CA. The GART is allocated on the node nearest the bridge. A device DMA address inside the aperture goes
  through it; 64-bit direct and 48-bit modes bypass it (`tioca_dma_d64`, `tioca_dma_d48`, `tioca_dma_mapped`).
- **Control bits set at init.** AGP DMA operation-combining delay enabled (`CA_AGPDMA_OP_ENB_COMBDELAY`), GART memory
  parameter field set to 2 and GART prefetching disabled (the comment cites a hardware bug), coherent GART fetches, and the
  GART-fetch-error interrupt unmasked after clearing residual errors.
- **Fast writes.** `tioca_fastwrite_enable` scans every VGA-class device on the bus, requires an AGP capability with the FW
  bit in `AGP_STATUS`, and then sets FW in each card's `AGP_COMMAND` and `CA_AGP_FW_ENABLE` in the bridge. A model that does
  not offer the AGP capability to the guest makes this path a no-op.
- **AGP layer.** `sgi-agp.c` registers a bridge driver with `cant_use_aperture` set, one aperture size taken from the
  CA's graphics aperture size, a GATT table that is the CA's graphics GART, and an `agp_enable` that only calls the
  fast-write routine. It matches the PCI device of the CA, not the graphics card.
- **Interrupts.** `SGI_TIOCA_ERROR` (0x35) is the bridge error interrupt; the card's own interrupt arrives through the
  bridge's PCI interrupt lines and is not special-cased in the CA code.

## What the radeon DRM expects of the chip (Linux kernel-mode-setting driver)

Linux `drivers/gpu/drm/radeon/` (the pinned Library copy at the repository head; the user-mode-setting driver in the
2.6.30 tree and older libdrm cover the same chip with a command-buffer interface instead of a checked command stream).
All **software expectation**. The pinned `r300_pci_ids.h` lists these IDs under R300 and R350; Linux
`r300_gpu_init` sets two quad pipes for those IDs (single pipe for 4144 and 4148).

- **CP bring-up (`r100_cp_init`, `r100_cp_load_microcode`).** Wait for the GUI to go idle, write `CP_ME_RAM_ADDR` = 0, then
  pairs to `CP_ME_RAM_DATAH` and `CP_ME_RAM_DATAL` (the firmware file as big-endian word pairs; `R300_cp.bin` is the file the Linux ID table names for these chips, see
  `radeon_cp.c`/`r100.c` firmware selection, not re-read here), set up the ring (base, size in `CP_RB_CNTL` with block size 9 and max-fetch 1, `CP_RB_WPTR_DELAY`,
  read-pointer write-back address with `RB_NO_UPDATE` cleared), program the CP cache split (ring 0..15, indirect 1 at
  16..79, indirect 2 at 80..95) in `CP_CSQ_CNTL`, then start the ring (the part of the function after the cache split was not read). Padding is `RADEON_CP_PACKET2`.
  The IRIX microcode is a different revision of the same table ([kernel-attach.md](../kernel/kernel-attach.md#command-processor-start-up-x-server-module)),
  so a model that checks microcode contents should hash on the pair count, not on the Linux file.
- **GPU init (`r300_gpu_init`).** `GB_TILE_CONFIG` = tiling enable | 16-pixel tiles | pipe-count field (the R300 value for
  two pipes), wait for GUI idle, set `DST_PIPE_CONFIG` auto-config, set `RB2D_DSTCACHE_MODE` to autoflush with the
  ignore-PE bit, wait for GUI and memory-controller idle. IRIX writes the same first register (0x4018 = 0x17) at attach.
- **Reset (`r300_asic_reset`).** Reads `RBBM_STATUS` (0xe40); if the GUI is busy: stops the CP, clears the ring pointers,
  disables bus mastering, soft-resets VAP and GA through `RBBM_SOFT_RESET` (0xf0), then resets the CP the same way and
  re-reads status. The source warns that the CP reset can hard-lock a host.
- **Checked command stream (`r300_cs_parse`, `r300_packet3_check`).** The parser accepts type-0 register writes (checked
  against a table of allowed offsets, `r300_reg_safe.h`), type-2 NOPs and these type-3 opcodes: `3D_LOAD_VBPNTR`,
  `INDX_BUFFER`, `3D_DRAW_IMMD`, `3D_DRAW_IMMD_2`, `3D_DRAW_VBUF`, `3D_DRAW_VBUF_2`, `3D_DRAW_INDX`, `3D_DRAW_INDX_2`,
  `3D_CLEAR_HIZ`, `3D_CLEAR_ZMASK`, `3D_CLEAR_CMASK` and `NOP`; any other opcode is rejected. Immediate draws must use
  PRIM_WALK = 3. IB submission is a type-0 write of address and length at `CP_IB_BASE` (0x738) and `CP_IB_BUFSZ`.
- **Interrupts.** The R3xx general interrupt control and status registers (0x40 and 0x44) with the vertical-sync bits 0
  and 9, plus a software interrupt through a scratch-register write; the display path is not needed to run GL.
- **Fences.** Scratch registers written from the ring with write-back to memory (`SCRATCH_ADDR`, `SCRATCH_UMSK`).

## What the Mesa r300 driver expects (Gallium r300g and the classic r300 DRI driver)

Mesa 20.3.5 `src/gallium/drivers/r300/` (read: `r300_emit.c`, `r300_reg.h`, `r300_screen.c`, `compiler/r300_fragprog_emit.c`,
`compiler/r3xx_vertprog.c`). **Software expectation.**

- **Everything goes through the DRM command stream** (`OUT_CS_REG`, `OUT_CS_ONE_REG`, `OUT_CS_PKT3`): type-0 writes of
  registers, one-register-write bursts for shader memories, and type-3 `3D_LOAD_VBPNTR`, `INDX_BUFFER`/draw packets and
  the clear packets above.
- **Vertex programs** are compiled by the Mesa r300 compiler to PVS instructions of four dwords and uploaded with
  `PVS_CODE_CNTL_0` (0x22d0: first, XYZW-valid and last instruction), `PVS_CONST_CNTL`, `PVS_CODE_CNTL_1`, then
  `PVS_VECTOR_INDX_REG` (0x2200) = 0 and a one-register burst to `PVS_UPLOAD_DATA` (0x2208). Constants are uploaded the same
  way at index 0x200 (`r300_emit.c`, lines near 1124 to 1198 of the file read). This is the same sequence the IRIX driver
  emits, so the model contract for the PVS is shared.
- **Fragment programs** are compiled to R300 `US_*` instructions (`r300_fragprog_emit.c`) and written to `US_CONFIG`
  (0x4600), `US_PIXSIZE`, `US_CODE_OFFSET`, `US_CODE_ADDR_0..3` (0x4610), `US_TEX_INST_0..` (0x4620),
  `US_ALU_RGB_ADDR_0`, `US_ALU_ALPHA_ADDR_0`, `US_ALU_RGB_INST_0`, `US_ALU_ALPHA_INST_0` (0x46c0, 0x47c0, 0x48c0, 0x49c0) and
  constants at 0x4c00. Limits Mesa reports for this chip: 64 ALU and 32 texture instructions, 4 texture indirections, 32
  constants and 32 temporaries (`r300_screen.c`).
- **Texture formats, depth and colour buffer registers** use the `R300_TX_*`, `R300_RB3D_*` and `R300_ZB_*` families of
  `r300_reg.h`.

## What stays open for the Prism model

Which chip a Prism pipe carries; whether the pipe is behind TIO-CA, a PCI-X bridge or something else; the fglrx module's
register traffic; the X server version. None can be answered from public Linux or Mesa source. The IRIX 6.5.30 contract
in [r300-command-stream.md](../opengl/r300-command-stream.md) and the Linux contract above agree on the shader-memory
sequences and the packet set, and differ on the bridge (TIO-CA AGP against the Bridge family) and the microcode revision.
