# Routine readings, voyager round r5, batch 0

Role statements for entries 0 to 24 of the ranked list, minus three long routines left out (see the end of this file). Each statement uses the rendered facts only: the call at each `jal` or `jalr`, the arguments at the call, and the return value. All entries are inferred. The facts show what each routine calls and returns, not what its callers expect.

- `__ke_memset` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f08
  **Inferred.** It calls memset with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x9f34]. Role (from facts): a pass-through to memset [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strlen` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9f84
  **Inferred.** It calls strlen with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x9fb0]. Role (from facts): a pass-through to strlen [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strcpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fb8
  **Inferred.** It calls strcpy with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x9fe4]. Role (from facts): a pass-through to strcpy [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strncpy` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x9fec
  **Inferred.** It calls strncpy with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xa018]. Role (from facts): a pass-through to strncpy [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_strcmp` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa020
  **Inferred.** It calls strcmp with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xa04c]. Role (from facts): a pass-through to strcmp [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_pci_read_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa198
  **Inferred.** It calls pci_read_config_byte with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xa1c4]. Role (from facts): a pass-through to pci_read_config_byte [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `__ke_pci_write_config_byte` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0xa234
  **Inferred.** It calls pci_write_config_byte with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xa260]. Role (from facts): a pass-through to pci_write_config_byte [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pcibr_device_write_gather_flush` in `usr/cpu/sysgen/IP35boot/pcibr.o` at 0x554
  **Inferred.** It calls pcireg_wrb_flush_get with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x568]. Role (from facts): a pass-through to pcireg_wrb_flush_get [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_piotrans_addr` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x7c
  **Inferred.** It calls pcibr_piotrans_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x90]. Role (from facts): a pass-through to pcibr_piotrans_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_intr_free` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x4f4
  **Inferred.** It calls pcibr_intr_free with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x508]. Role (from facts): a pass-through to pcibr_intr_free [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_intr_setmustrun` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x510
  **Inferred.** It calls pcibr_intr_setmustrun with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x524]. Role (from facts): a pass-through to pcibr_intr_setmustrun [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x564
  **Inferred.** It calls pcibr_intr_cpu_get with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x578]. Role (from facts): a pass-through to pcibr_intr_cpu_get [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_driver_reg_callback` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xe6c
  **Inferred.** It calls pcibr_driver_reg_callback with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xe80]. Role (from facts): a pass-through to pcibr_driver_reg_callback [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_device_unregister` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0xf28
  **Inferred.** It calls pcibr_device_unregister with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0xf3c]. Role (from facts): a pass-through to pcibr_device_unregister [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `pciio_dma_enabled` in `usr/cpu/sysgen/IP35boot/pciio.o` at 0x14a0
  **Inferred.** It calls pcibr_dma_enabled with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x14b4]. Role (from facts): a pass-through to pcibr_dma_enabled [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_piomap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x0
  **Inferred.** It calls hub_piomap_alloc with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x14]. Role (from facts): a pass-through to hub_piomap_alloc [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_piomap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x38
  **Inferred.** It calls hub_piomap_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x4c]. Role (from facts): a pass-through to hub_piomap_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x70
  **Inferred.** It calls hub_piotrans_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x84]. Role (from facts): a pass-through to hub_piotrans_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1b4
  **Inferred.** It calls hub_dmamap_alloc with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x1c8]. Role (from facts): a pass-through to hub_dmamap_alloc [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmamap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1ec
  **Inferred.** It calls hub_dmamap_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x200]. Role (from facts): a pass-through to hub_dmamap_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x240
  **Inferred.** It calls hub_dmatrans_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x254]. Role (from facts): a pass-through to hub_dmatrans_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmamap_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x278
  **Inferred.** It calls hub_dmamap_drain with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x28c]. Role (from facts): a pass-through to hub_dmamap_drain [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

Not written: `firegl_addmap` at 0x1bc50 in `usr/cpu/sysgen/IP35boot/fglrx.o`, and `__R300LoadCachedPSProgToHwRegs` at 0x7412a0 and `__R300UpdateUSProgForAAStipple` at 0x74a040 in `usr/X11R6/lib/modules/dri/fglrx_dri64.so`. Their rendered facts run to hundreds of instructions with many unresolved indirect calls and branches, so no single role could be cited to them within this batch.
