# Tier-2 routine readings, voyager round 3 batch 0

Role statements for the first 25 targets of the ranked tier-2 list (offset 0). Each statement uses only the rendered facts: the call site and callee at the `jalr` or `jal`, the argument registers at entry, the return address and the return value. All entries are inferred, because the render shows what each routine passes to its callee but not what callers expect from it.

- `__ke_atomic_set` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x99b4
  **Inferred.** Its one call is a `jalr` at 0x99d4 into `test_and_set_int`, with a0 through a3 handed over as they arrived. The return at 0x99e0 yields that callee's v0, so the value is whatever the test-and-set reports, not something this body computes.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_free_s` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9d3c
  **Inferred.** The `jalr` at 0x9d5c enters `fglrx_irix_kmem_free` and passes the entry registers a0 to a3 along unchanged. Control leaves through the return at 0x9d68 with v0 taken from that free routine.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_vfree` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9dac
  **Inferred.** A single `jalr` at 0x9dcc reaches `fglrx_irix_kern_free`, with the four argument registers left untouched on the way in. The return at 0x9dd8 passes back the v0 of that callee and nothing else.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_memset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f08
  **Inferred.** The `jalr` at 0x9f28 calls `memset` with a0 to a3 as they arrived at entry. The return at 0x9f34 hands back the v0 of `memset`. Role (from name): a memory fill, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strlen` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f84
  **Inferred.** A `jalr` at 0x9fa4 calls `strlen`, and the entry registers reach it unmodified. The return at 0x9fb0 gives v0 from `strlen`. Role (from name): a string length, computed by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fb8
  **Inferred.** The `jalr` at 0x9fd8 transfers to `strcpy` with a0 through a3 still holding the caller's values. The return at 0x9fe4 reports the v0 of `strcpy`. Role (from name): a string copy, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strncpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fec
  **Inferred.** A `jalr` at 0xa00c calls `strncpy` and leaves a0 to a3 as they were on entry. The return at 0xa018 yields the v0 that `strncpy` produced. Role (from name): a bounded string copy, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strcmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa020
  **Inferred.** The body calls `strcmp` through a `jalr` at 0xa040, passing the entry registers without alteration. The return at 0xa04c gives back v0 from `strcmp`. Role (from name): a string comparison, with the result produced by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_strncmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa054
  **Inferred.** A `jalr` at 0xa074 reaches `strncmp` with the argument registers unchanged, length included. The return at 0xa080 hands back the comparison result from that routine as v0.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_read_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa198
  **Inferred.** The `jalr` at 0xa1b8 calls `pci_read_config_byte` with a0 to a3 as received. The return at 0xa1c4 passes that callee's v0 upward. Role (from name): a PCI configuration-space byte read, performed by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_read_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa1cc
  **Inferred.** A `jalr` at 0xa1ec transfers to `pci_read_config_word` with the entry registers intact. The return at 0xa1f8 gives the callee's v0, and the 16-bit width comes from that callee's name rather than from any masking here.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_read_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa200
  **Inferred.** The `jalr` at 0xa220 enters `pci_read_config_dword` with a0 through a3 forwarded as received. The return at 0xa22c yields that routine's v0. The 32-bit width comes from the callee's name, not from anything shown in this body.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa234
  **Inferred.** Through a `jalr` at 0xa254 the entry registers a0 to a3 go to `pci_write_config_byte`. The return at 0xa260 gives back the v0 of that write routine. Role (from name): a PCI configuration-space byte write, performed by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_word` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa268
  **Inferred.** A `jalr` at 0xa288 calls `pci_write_config_word`, and the entry registers pass through as received. The return at 0xa294 yields the v0 of the callee. The 16-bit width comes from the callee's name.
  Reviewed: 2026-11-12 (sonnet)

- `__ke_pci_write_config_dword` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa29c
  **Inferred.** The `jalr` at 0xa2bc hands the entry registers to `pci_write_config_dword`. The return at 0xa2c8 reports that routine's v0. The 32-bit width comes from the callee's name.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_piomap_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x1c
  **Inferred.** A `jal` at 0x24 calls `pcibr_piomap_free` with a0 through a3 unchanged. The return at 0x30 passes back that callee's v0; the name suggests releasing a PIO mapping, which the callee carries out.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_piomap_done` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x60
  **Inferred.** The `jal` at 0x68 transfers to `pcibr_piomap_done` with the argument registers as they arrived. The return at 0x74 yields its v0, and the name points to ending use of a PIO mapping.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_piotrans_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7c
  **Inferred.** A `jal` at 0x84 enters `pcibr_piotrans_addr` with the entry registers forwarded. The return at 0x90 returns the callee's v0. Role (from name): an address translation for PIO, done by the callee.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_piospace_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x1e8
  **Inferred.** The `jal` at 0x1f0 calls `pcibr_piospace_free` and leaves a0 to a3 untouched. The return at 0x1fc passes back its v0, consistent with a release of PIO address space by name.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_pio_flush_read` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x204
  **Inferred.** A `jal` at 0x20c reaches `pcibr_pio_flush_read` with the argument registers passed through. The return at 0x218 yields that callee's v0, and the flush-by-read behavior the name implies is implemented there.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_pio_flush_del` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x220
  **Inferred.** The `jal` at 0x228 calls `pcibr_pio_flush_del` with the entry registers as received. The return at 0x234 gives back its v0, and the name suggests removal of flush state, which the callee handles.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_pio_flush_init` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x23c
  **Inferred.** A `jal` at 0x244 transfers to `pcibr_pio_flush_init` with a0 to a3 unchanged. The return at 0x250 reports that routine's v0; the name suggests setup of flush state, carried out in the callee.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x258
  **Inferred.** The `jal` at 0x260 enters `pcibr_dmamap_alloc` with the argument registers forwarded. The return at 0x26c hands back its v0, which the name suggests is a DMA map handle.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmamap_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x274
  **Inferred.** A `jal` at 0x27c calls `pcibr_dmamap_free` and passes the entry registers on untouched. The return at 0x288 yields that callee's v0, and the name points to releasing a DMA map.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dmamap_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x290
  **Inferred.** The `jal` at 0x298 calls `pcibr_dmamap_addr` with a0 through a3 unchanged. The return at 0x2a4 gives back its v0, which the name suggests is the bus address of a mapping.
  Reviewed: 2026-11-12 (sonnet)
