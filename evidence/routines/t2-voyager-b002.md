# Tier-2 routine readings, voyager batch 2

Role statements for the 25 routines in batch 2 of the tier-2 reading round. Each statement uses only the rendered facts: the call sites, return addresses, constants and register moves. Every entry is inferred. The callee names are the only evidence of what the wrapped operation does, and the renders do not show the callees' bodies.

- `pciio_endian_set` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x800
  **Inferred.** Passes its four argument registers unchanged to `pcibr_endian_set` through the single `jal` at 0x808, then returns that call's result in v0 at 0x814. The 28-byte body has no branches or memory accesses of its own, so the name suggests a PCI bus endianness setter that this routine only forwards to.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_priority_set` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x81c
  **Inferred.** Forwards its four argument registers unchanged to `pcibr_priority_set` through the `jal` at 0x824 and returns the callee's v0 at 0x830. The render has no other instructions, so the name suggests a priority setter for the PCI bus that this routine delegates.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_error_extract` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xa40
  **Inferred.** Forwards its arguments unchanged to `pcibr_error_extract` through the `jal` at 0xa48 and returns the callee's v0 at 0xa54. The body is otherwise empty, so the name suggests an error-record extractor that this routine delegates.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_reset` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xa5c
  **Inferred.** Forwards its arguments unchanged to `pcibr_reset` through the `jal` at 0xa64 and returns the callee's v0 at 0xa70. The name suggests a bus reset, but the render shows only the forward to the callee, whose body it does not show.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_write_gather_flush` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xa78
  **Inferred.** Forwards its arguments unchanged to `pcibr_write_gather_flush` through the `jal` at 0xa80 and returns the callee's v0 at 0xa8c. The name suggests a flush of pending write-gather state, which this routine only delegates.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_driver_reg_callback` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xe6c
  **Inferred.** Forwards its arguments unchanged to `pcibr_driver_reg_callback` through the `jal` at 0xe74 and returns the callee's v0 at 0xe80. The name suggests registration of a driver callback with the PCI layer; the callee's body is not shown, so what it registers is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_driver_unreg_callback` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xe88
  **Inferred.** Forwards its arguments unchanged to `pcibr_driver_unreg_callback` through the `jal` at 0xe90 and returns the callee's v0 at 0xe9c. Its shape matches the registration wrapper at 0xe6c, so the name suggests the removal side of the same callback pair.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_device_unregister` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xf28
  **Inferred.** Forwards its arguments unchanged to `pcibr_device_unregister` through the `jal` at 0xf30 and returns the callee's v0 at 0xf3c. The name suggests removal of a device from the PCI bus; the callee's body is not shown, so what it does is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `pciio_dma_enabled` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x14a0
  **Inferred.** Forwards its arguments unchanged to `pcibr_dma_enabled` through the `jal` at 0x14a8 and returns the callee's v0 at 0x14b4. The name suggests a query for whether DMA is enabled on a PCI device; the callee's body is not shown, so how it answers is unknown.
  Reviewed: 2026-11-12 (sonnet)

- `vga_earlyinit` in `usr/cpu/sysgen/IP35boot/vgastubs.a(vgastubs.o)` at 0x0
  **Inferred.** Returns the constant 0 in v0 at 0x0 with no calls, memory accesses or branches, so the 8-byte body is a stub. The name suggests VGA early setup, which the render neither confirms nor rules out; the stub may stand in for a driver this build leaves out.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x0
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_alloc` through the `jal` at 0x8 and returns the callee's v0 at 0x14. The name suggests allocation of a programmed-I/O mapping on the hub; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1c
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_free` through the `jal` at 0x24 and returns the callee's v0 at 0x30. It is the release half of the pair with `xtalk_piomap_alloc` at 0x0, judging by the name.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x38
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_addr` through the `jal` at 0x40 and returns the callee's v0 at 0x4c. The name suggests a lookup of the address behind a programmed-I/O mapping; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_done` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x54
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_done` through the `jal` at 0x5c and returns the callee's v0 at 0x68. The name suggests the end-of-use call for a programmed-I/O mapping, paired with `xtalk_piomap_alloc` at 0x0.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x70
  **Inferred.** Forwards its arguments unchanged to `hub_piotrans_addr` through the `jal` at 0x78 and returns the callee's v0 at 0x84. The name suggests translation of a programmed-I/O address; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1b4
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_alloc` through the `jal` at 0x1bc and returns the callee's v0 at 0x1c8. The name suggests allocation of a DMA mapping on the hub; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1d0
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_free` through the `jal` at 0x1d8 and returns the callee's v0 at 0x1e4. The name suggests the release half of the DMA mapping allocator at 0x1b4.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1ec
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_addr` through the `jal` at 0x1f4 and returns the callee's v0 at 0x200. The name suggests a lookup of the bus address for a DMA mapping; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_list` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x208
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_list` through the `jal` at 0x210 and returns the callee's v0 at 0x21c. The name suggests a scatter-list variant of DMA mapping, judging only by the name.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_done` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x224
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_done` through the `jal` at 0x22c and returns the callee's v0 at 0x238. The name suggests the end-of-use call for a DMA mapping allocated at 0x1b4.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x240
  **Inferred.** Forwards its arguments unchanged to `hub_dmatrans_addr` through the `jal` at 0x248 and returns the callee's v0 at 0x254. The name suggests translation of a DMA address; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmatrans_list` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x25c
  **Inferred.** Forwards its arguments unchanged to `hub_dmatrans_list` through the `jal` at 0x264 and returns the callee's v0 at 0x270. The name suggests the list form of the DMA translation at 0x240, judging by the name.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x278
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_drain` through the `jal` at 0x280 and returns the callee's v0 at 0x28c. The name suggests draining outstanding DMA on a mapping; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmaaddr_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x294
  **Inferred.** Forwards its arguments unchanged to `hub_dmaaddr_drain` through the `jal` at 0x29c and returns the callee's v0 at 0x2a8. The name suggests a drain keyed by DMA address, the sibling of `xtalk_dmamap_drain` at 0x278.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmalist_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2b0
  **Inferred.** Forwards its arguments unchanged to `hub_dmalist_drain` through the `jal` at 0x2b8 and returns the callee's v0 at 0x2c4. The name suggests a drain keyed by DMA list, the list sibling of the drains at 0x278 and 0x294.
  Reviewed: 2026-11-12 (sonnet)
