# Tier-2 routine readings, voyager batch 1

Role statements for the 25 routines in batch 1 of the tier-2 reading round, from the rendered facts of
`usr/cpu/sysgen/IP35boot/pciio.o`. Every routine is the same 28-byte shape: a call to a `pcibr_` routine
with the four argument registers passed through unchanged, and a return of the call's v0. The statements
say what that shape shows. They do not describe the callee, which is not rendered in this round.

- `pciio_piomap_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x1c
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x24 goes to `pcibr_piomap_free`, with a0 to a3 passed through unchanged from entry, and the return at 0x30 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_piomap_free` does.

- `pciio_piomap_done` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x60
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x68 goes to `pcibr_piomap_done`, with a0 to a3 passed through unchanged from entry, and the return at 0x74 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_piomap_done` does.

- `pciio_piotrans_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7c
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x84 goes to `pcibr_piotrans_addr`, with a0 to a3 passed through unchanged from entry, and the return at 0x90 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O address translation, so this is most likely a pass-through stub, but the render does not show what `pcibr_piotrans_addr` does.

- `pciio_piospace_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x1e8
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x1f0 goes to `pcibr_piospace_free`, with a0 to a3 passed through unchanged from entry, and the return at 0x1fc hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O space release, so this is most likely a pass-through stub, but the render does not show what `pcibr_piospace_free` does.

- `pciio_pio_flush_read` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x204
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x20c goes to `pcibr_pio_flush_read`, with a0 to a3 passed through unchanged from entry, and the return at 0x218 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O write flush step, so this is most likely a pass-through stub, but the render does not show what `pcibr_pio_flush_read` does.

- `pciio_pio_flush_del` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x220
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x228 goes to `pcibr_pio_flush_del`, with a0 to a3 passed through unchanged from entry, and the return at 0x234 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O write flush step, so this is most likely a pass-through stub, but the render does not show what `pcibr_pio_flush_del` does.

- `pciio_pio_flush_init` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x23c
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x244 goes to `pcibr_pio_flush_init`, with a0 to a3 passed through unchanged from entry, and the return at 0x250 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a programmed-I/O write flush step, so this is most likely a pass-through stub, but the render does not show what `pcibr_pio_flush_init` does.

- `pciio_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x258
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x260 goes to `pcibr_dmamap_alloc`, with a0 to a3 passed through unchanged from entry, and the return at 0x26c hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmamap_alloc` does.

- `pciio_dmamap_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x274
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x27c goes to `pcibr_dmamap_free`, with a0 to a3 passed through unchanged from entry, and the return at 0x288 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmamap_free` does.

- `pciio_dmamap_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x290
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x298 goes to `pcibr_dmamap_addr`, with a0 to a3 passed through unchanged from entry, and the return at 0x2a4 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmamap_addr` does.

- `pciio_dmamap_list` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2ac
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x2b4 goes to `pcibr_dmamap_list`, with a0 to a3 passed through unchanged from entry, and the return at 0x2c0 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmamap_list` does.

- `pciio_dmamap_done` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2c8
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x2d0 goes to `pcibr_dmamap_done`, with a0 to a3 passed through unchanged from entry, and the return at 0x2dc hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmamap_done` does.

- `pciio_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x2e4
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x2ec goes to `pcibr_dmatrans_addr`, with a0 to a3 passed through unchanged from entry, and the return at 0x2f8 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA address translation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmatrans_addr` does.

- `pciio_dmatrans_list` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x300
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x308 goes to `pcibr_dmatrans_list`, with a0 to a3 passed through unchanged from entry, and the return at 0x314 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA address translation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmatrans_list` does.

- `pciio_dmamap_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x438
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x440 goes to `pcibr_dmamap_drain`, with a0 to a3 passed through unchanged from entry, and the return at 0x44c hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA mapping operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmamap_drain` does.

- `pciio_dmaaddr_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x454
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x45c goes to `pcibr_dmaaddr_drain`, with a0 to a3 passed through unchanged from entry, and the return at 0x468 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA address drain, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmaaddr_drain` does.

- `pciio_dmalist_drain` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x470
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x478 goes to `pcibr_dmalist_drain`, with a0 to a3 passed through unchanged from entry, and the return at 0x484 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a DMA list drain, so this is most likely a pass-through stub, but the render does not show what `pcibr_dmalist_drain` does.

- `pciio_intr_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x4f4
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x4fc goes to `pcibr_intr_free`, with a0 to a3 passed through unchanged from entry, and the return at 0x508 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for an interrupt-connection operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_intr_free` does.

- `pciio_intr_setmustrun` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x510
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x518 goes to `pcibr_intr_setmustrun`, with a0 to a3 passed through unchanged from entry, and the return at 0x524 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for an interrupt-connection operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_intr_setmustrun` does.

- `pciio_intr_connect` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x52c
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x534 goes to `pcibr_intr_connect`, with a0 to a3 passed through unchanged from entry, and the return at 0x540 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for an interrupt-connection operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_intr_connect` does.

- `pciio_intr_disconnect` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x548
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x550 goes to `pcibr_intr_disconnect`, with a0 to a3 passed through unchanged from entry, and the return at 0x55c hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for an interrupt-connection operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_intr_disconnect` does.

- `pciio_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x564
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x56c goes to `pcibr_intr_cpu_get`, with a0 to a3 passed through unchanged from entry, and the return at 0x578 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for an interrupt-connection operation, so this is most likely a pass-through stub, but the render does not show what `pcibr_intr_cpu_get` does.

- `pciio_error_devenable` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7ac
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x7b4 goes to `pcibr_error_devenable`, with a0 to a3 passed through unchanged from entry, and the return at 0x7c0 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for an error-reporting enable step, so this is most likely a pass-through stub, but the render does not show what `pcibr_error_devenable` does.

- `pciio_provider_startup` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7c8
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x7d0 goes to `pcibr_provider_startup`, with a0 to a3 passed through unchanged from entry, and the return at 0x7dc hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a bus provider startup or shutdown hook, so this is most likely a pass-through stub, but the render does not show what `pcibr_provider_startup` does.

- `pciio_provider_shutdown` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7e4
  **Inferred.** The routine is 28 bytes and makes one call: the `jal` at 0x7ec goes to `pcibr_provider_shutdown`, with a0 to a3 passed through unchanged from entry, and the return at 0x7f8 hands back that call's v0. The render lists no other pointer accesses. The name suggests a wrapper for a bus provider startup or shutdown hook, so this is most likely a pass-through stub, but the render does not show what `pcibr_provider_shutdown` does.
