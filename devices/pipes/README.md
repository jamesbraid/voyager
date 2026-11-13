# pipes: per-pipe select and Z-buffer registers

This unit holds the registers of the R3xx-class FireGL boards that decide which of the chip's two pixel pipes a write reaches, and the hierarchical Z RAM and occlusion counters that each pipe keeps. The rest of the register file is the [display](../display/README.md) unit.

The register map is [registers.toml](registers.toml), with every item graded and sourced from AMD's R3xx 3D register reference. [registers.md](registers.md) is the generated reference table; the C, Rust, Python, JSON and genxml forms are under [generated/](../../generated/).

## How it works

- `su_reg_dest` selects the pixel pipes that receive register writes. A write reaches both pipes unless this register restricts it.
- `zb_bw_cntl` switches hierarchical Z on and off.
- The hierarchical Z RAM is reached through an index and a data port. Each pipe has its own copy, so each write to the data port advances the index by two dwords, one for each pipe. `zb_hiz_offset` and `zb_hiz_pitch` locate a block in it; the byte for a block sits in the data dword by its X and Y block position (see the register descriptions in [registers.md](registers.md)).
- `zb_zpass_data` counts samples that passed the Z test since it was last written, separately in each pipe. Writing a dword address to `zb_zpass_addr` makes each selected pipe store its count at that address.

## Used by

- [evidence/registers.md](../../evidence/registers.md): the driver's accesses to these registers.
- [evidence/instruction-readings-voyager-g2.md](../../evidence/instruction-readings-voyager-g2.md): instruction readings of the routines that write them.
