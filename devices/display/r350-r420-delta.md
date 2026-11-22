# R350 against R420: what an R300-based model has to add

The Prism's FireGL X3-256 board is an R420 (device `4A4D` in the fglrx 8.12.1 chip table, grade **inferred** for the board; see the chips repository's Prism page), and the X2PRO-256 an R350. This page lists, from public sources only, how far R350 and R420 sit from the R300 this repository documents. Nothing here comes from a shipped binary except the chip table.

Sources: Linux `drivers/gpu/drm/radeon/` (`r300.c`, `r420.c`, `r420d.h`, `r100.c`, `radeon_asic.c`, `r300_reg.h`, `r500_reg.h`, `reg_srcs/r300`, `reg_srcs/r420`, `include/drm/drm_pciids.h`) at v7.2-rc7, and Mesa `src/gallium/drivers/r300/` (`r300_chipset.c`, `r300_fs.c`, `r300_texture_desc.c`) at 26.2-dev. Both are the Library copies. The radeon code for these chips has been stable since the 2.6.3x kernels, so the fglrx-era kernel behaves the same unless noted. Grades: **established** (read in the file named), **inferred**, **unknown**. A public driver says what software expects, not what the silicon does.

## Verdict on the working view

- **R350 is an R300 variant: established** as far as software goes. `radeon_asic.c` gives R300, R350, RV350 and RV380 one ASIC table (`r300_asic`, or `r300_asic_pcie` on PCI Express); `r100.c` loads the same `R300_cp.bin` for them; Mesa's `r300_chipset.c` gives R300 and R350 the same caps (four vertex engines, Hi-Z and Z mask, cmask).
- **R420 is not a variant of that shell: established.** `radeon_asic.c` has a separate `r420_asic` (`r420.c`) for R420, R423 and RV410, `r100.c` loads `R420_cp.bin` (logged as "R400 microcode"), and Mesa marks the R420 family `is_r400` with six vertex engines. The register file is a superset, so an R300 model's existing blocks stay valid; R420 adds to them.
- The correction to the working view: R420 shares **most** of `r300.c` too (`r420.c` calls `r300_mc_program`, `r300_mc_init` and `r300_asic_reset`). Its own file holds the pipe setup, the memory-controller indirect port, clock forcing and the CP errata. "More quad pipes" is right but it is read from a register, not fixed.

## R350 over R300

All **established** in the files named unless marked.

| Item | R300 | R350 | Source |
|---|---|---|---|
| Pipes | 2 quad pipes (the `4144` part has 1) | 2 (the `4148` part has 1) | `r300_gpu_init` in `r300.c`, keyed on PCI device ID |
| Pipe-count field in `GB_TILE_CONFIG` (0x4018) | `3<<1` for two pipes | same | `r300_reg.h`/`r500_reg.h` |
| Microcode | `R300_cp.bin` | `R300_cp.bin` | `r100_cp_init_microcode` in `r100.c` |
| Memory timing decode (`MEM_TIMING_CNTL`) | one decode | the same decode as R300 | `r100_bandwidth_update` in `r100.c` |
| Texture macro-tile switch | a texture is macro tiled when its size is above the tile size | at or above it (Mesa's "rv350 mode" is true for R350 and later) | `r300_texture_desc.c` |
| Z compression | 4x4 | 4x4 (the 8x8 mode starts at RV350) | `r300_chipset.c` |

Nothing else separates them in public code. R350 is also the family of the 9800 XT (R360, `4E4A`), which Linux treats as R350. **Inferred:** the silicon differences (faster clocks, the texture-filter tweak behind the macro-switch change) are invisible to a model that does not time the pipe; the one visible effect is the macro-tiled texture layout threshold, which matters only when a guest allocates textures at exactly the tile size.

## R420 over R300

All **established** in the files named, except where marked.

**Quad pipes.**
- `GB_PIPE_SELECT` (0x402c, `R400_GB_PIPE_SELECT` in `r500_reg.h`) is read and bits 13:12 plus one give the number of pipes (1 to 4). R300 never reads it. The two Linux paths agree on the value written to `GB_TILE_CONFIG`: 1 pipe `0`, 2 pipes `3<<1`, 3 pipes `6<<1`, 4 pipes `7<<1` (R420 code builds it directly; `r300_gpu_init` has named constants for the same values, including `R300_PIPE_COUNT_R420` = 7 and `_3P` = 6). This repository's `gb_tile_config.pipe_count` already carries 7 as `r420` (inferred); add 6 and 3-pipe naming from this page.
- Linux forces one pipe for device IDs `5E4C` and `5E4F` (the SE parts of RV410). `4A4D` is a full part, so four pipes are expected: **inferred** from the ID table, since only the select register reports it.
- `SU_REG_DEST` (0x42c8) is written with a mask of `(1 << pipes) - 1` (`r420.c`); Linux's R300 path does not write it. Its width on an R300 model is two pipes, so a mask of 0xF needs two more pipe copies of every per-pipe block (Hi-Z RAM, Z-pass counters, colour and Z caches): the per-pipe state in [pipes](../pipes/README.md) becomes four-way.
- `DST_PIPE_CONFIG` (0x170c) auto-config bit is set the same way on both. `GA_ENHANCE` (0x4274, see [ga](../ga/registers.md)) gets two extra bits (2 and 3) on R420; Linux's comment calls them a workaround for a geometry-assembly deadlock. Their meaning is **unknown**; a model can store them.

**Fragment shader.** `reg_srcs/r420` against `reg_srcs/r300` differs by 66 registers, all in the shader unit: `US_CODE_BANK` (0x46b8), `US_CODE_EXT` (0x46bc) and `US_ALU_EXT_ADDR_0` to `_63` (0x4ac0 to 0x4bbc). Mesa's `r300_fs.c` uses them to address a 512-instruction program in banks, against 64 ALU and 32 texture instructions on R300 (`r300_screen.c`). An R300 model needs a second bank-selected code space and the extended address words per ALU instruction; programs that fit the R300 limits never touch them. **Software expectation.** The instruction encoding beyond the address extension is not public in these files: **unknown**.

**Vertex engine.** Mesa gives R420 six vertex engines against R300's four. The programming interface (the shader memory index and data ports) is the same; the count only changes throughput. **Inferred** that no register reports it.

**Memory controller.**
- R420 and later reach memory-controller registers through an index and data pair at 0x1f8 and 0x1fc (write-enable in bit 8 of the index, seven address bits), `r420_mc_rreg` and `r420_mc_wreg` in `r420.c`, installed for any family from R420 up (`radeon_asic.c`). R300 has no such port. The registers behind it are not named in Linux for R420. A model needs the port and can back it with scratch storage: **unknown** contents.
- Both use `MC_FB_LOCATION`, `MC_AGP_LOCATION` and `AGP_BASE` through the same `r300_mc_program`; the memory-width probe in `r300_mc_init` (`MEM_CNTL` channel count: 64, 128 or 256 bits) is shared too. The R420 memory-timing decode is a different bit layout from R300's and R350's (`r100_bandwidth_update`); it feeds only the driver's bandwidth estimate, not behaviour.

**Command processor.**
- `R420_cp.bin` and `R300_cp.bin` are separate files, both 2048 bytes, 256 microcode word pairs (host copy of linux-firmware checked: 155 of the 256 pairs differ, so they are different programs, not a patch). Loading is the same path: reset the microengine RAM address, write the high and low halves of each pair (`r100_cp_load_microcode`). A model that only stores the words needs no change; one that executes microcode needs a second image and whatever new packet behaviour it implements. IRIX's own microcode image for the R300 is not the Linux one (see [kernel-attach](../../software/kernel/kernel-attach.md)); whether fglrx for the X3 carries an R420 image of its own is **unknown**.
- Errata (R420 and RV410): Linux starts the ring with a `CP_RESYNC_ADDR`/`CP_RESYNC_DATA` pair (0x778 and 0x77c) pointing at a scratch register, and ends it with a Z-buffer-cache-free finish (`r420_cp_errata_init` and `_fini`). A model only needs the registers to exist; the lock-up they avoid is a hardware fault.
- The packet types the checker accepts are the same as for R300. **Inferred** from the shared `r300_cs_parse`; the reg-safe bitmap differs (`r420_reg_safe.h` against `r300_reg_safe.h`), which is how the extra shader registers become writable.

**Clocks and power.** `r420_clock_resume` forces the CP and VIP clocks on through `SCLK_CNTL` (PLL register 0x0d) as R300 does, and on R420 also forces PX and TX. R300 forces VAP only on RV350 and RV380. The clock-gating call goes through the ATOM BIOS tables rather than the legacy COMBIOS ones on R4xx cards with an ATOM BIOS. A model with a plain PLL register file needs nothing but the bits. Power profiles (`r420_pm_init_profile`) are driver policy, not hardware.

**Bus.**
- `4A4D` is an AGP part. Linux picks AGP or PCI Express from the capability list (`radeon_kms.c`); a card with the AGP capability is AGP. R423 and RV410 are the PCI Express parts: they use the PCI Express GART (`rv370_pcie_gart_*`, indirect PCI Express register port) and are not relevant to the Prism, whose pipes each have an AGP 8x interface per the performance guide (007-4751-001 p.1, established as text).
- The AGP GART registers (see [gart](../gart/registers.md)) and `AGP_BASE`, `MC_AGP_LOCATION` are unchanged from R300. `r420_init` also enables bus mastering at init for the R420 family only (`r100_enable_bm`).

**Registers that exist on neither or moved.** Linux shows no R300 register that R420 moved. The additions are the 66 shader registers, `GB_PIPE_SELECT`, `SU_REG_DEST` use, the MC indirect pair and the CP resync pair. `RV530_GB_PIPE_SELECT2` (0x4124) is R500-era, not R420. **Inferred**: absence from Linux is not proof that the hardware moved nothing.

## What an R300 model adds, in order

1. Report `GB_PIPE_SELECT` with 4 pipes selected and accept pipe-count field values 6 and 7 in `GB_TILE_CONFIG` beside 3 (whole register 0x1d and 0x1f with tiling on and 16-pixel tiles, against R300's 0x17); widen the per-pipe `SU_REG_DEST` mask and the replicated state to four pipes. Linux needs nothing else to bring the 3D engine up.
2. Add the MC indirect pair at 0x1f8 and 0x1fc and the CP resync pair at 0x778 and 0x77c (storage only).
3. Add `GA_ENHANCE` bits 2 and 3 as writable.
4. For shader programs beyond R300 limits, add the code bank and extension registers and the extended ALU address registers.
5. Provide a second microcode image slot, selected by the chip family; the loading path is unchanged.
6. For the R420 PCI IDs `4A4D` and neighbours, answer the AGP capability and the same two function layout (primary VGA and secondary display function) as R350 (inferred from the public ID list, which names a `(Secondary)` ID for the R420 line).

Not needed for Prism: the PCI Express parts, 3-pipe parts, the R423 and RV410 variants.
