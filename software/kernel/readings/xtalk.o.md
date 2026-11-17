# Readings: `usr/cpu/sysgen/IP35boot/xtalk.o`

One entry per routine, filed here from the reading batches by binary.

- `xtalk_piomap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x0
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_alloc` through the `jal` at 0x8 and returns the callee's v0 at 0x14. The name suggests allocation of a programmed-I/O mapping on the hub; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x0
  **Inferred.** It calls hub_piomap_alloc with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x14]. Role (from facts): a pass-through to hub_piomap_alloc [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_piomap_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1c
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_free` through the `jal` at 0x24 and returns the callee's v0 at 0x30. It is the release half of the pair with `xtalk_piomap_alloc` at 0x0, judging by the name.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x38
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_addr` through the `jal` at 0x40 and returns the callee's v0 at 0x4c. The name suggests a lookup of the address behind a programmed-I/O mapping; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piomap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x38
  **Inferred.** It calls hub_piomap_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x4c]. Role (from facts): a pass-through to hub_piomap_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_piomap_done` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x54
  **Inferred.** Forwards its arguments unchanged to `hub_piomap_done` through the `jal` at 0x5c and returns the callee's v0 at 0x68. The name suggests the end-of-use call for a programmed-I/O mapping, paired with `xtalk_piomap_alloc` at 0x0.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x70
  **Inferred.** Forwards its arguments unchanged to `hub_piotrans_addr` through the `jal` at 0x78 and returns the callee's v0 at 0x84. The name suggests translation of a programmed-I/O address; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x70
  **Inferred.** It calls hub_piotrans_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x84]. Role (from facts): a pass-through to hub_piotrans_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_pio_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x8c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x8c-0x184 (248 bytes).
  It occupies 248 bytes.
  2 such `sd` accesses store 8 bytes to a4 (arg4 at entry) +0x0, including `sd` at 0xc8, `sd` at 0x164.
  The `jal` at 0xe0 calls xtalk_piotrans_addr with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a5 at entry (arg5).
  The `jal` at 0x12c calls xtalk_piomap_alloc with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a3 at entry (arg3).
  The `jal` at 0x14c calls xtalk_piomap_addr with a0=ret(xtalk_piomap_alloc), a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=?.
  The `jal` at 0x174 calls xtalk_piomap_free with a0=ret(xtalk_piomap_alloc), a1=?, a2=?, a3=?.
  The `beq` branch at 0xc0 targets 0xcc, is taken when a4 == 0, and falls through when a4 != 0.
  The `beq` branch at 0xe8 targets 0x118, is taken when v0(=ret(xtalk_piotrans_addr)) == 0, and falls through when v0(=ret(xtalk_piotrans_addr)) != 0.
  The `bne` branch at 0x134 targets 0x144, is taken when v0(=ret(xtalk_piomap_alloc)) != 0, and falls through when v0(=ret(xtalk_piomap_alloc)) == 0.
  The `beq` branch at 0x13c targets 0xf0 and is always taken.
  The `beq` branch at 0x154 targets 0x174, is taken when v0(=ret(xtalk_piomap_addr)) == 0, and falls through when v0(=ret(xtalk_piomap_addr)) != 0.
  The `beq` branch at 0x15c targets 0x16c, is taken when s2(=a4) == 0, and falls through when s2(=a4) != 0.
  The `beq` branch at 0x16c targets 0xf4 and is always taken.
  The `beq` branch at 0x17c targets 0xf0 and is always taken.
  The return at 0x110 has v0 = one of ?, ret(xtalk_piomap_addr).

- `xtalk_set_early_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x184 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x184-0x18c (8 bytes).
  It occupies 8 bytes.
  The return at 0x184 has v0 = ?.

- `xtalk_early_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x18c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x18c-0x1ac (32 bytes).
  It occupies 32 bytes.
  The `jalr` at 0x198 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1a4 has v0 = ret(?).

- `null_xtalk_early_piotrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x1ac-0x1b4 (8 bytes).
  It occupies 8 bytes.
  The return at 0x1ac has v0 = 0x0.

- `xtalk_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1b4
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_alloc` through the `jal` at 0x1bc and returns the callee's v0 at 0x1c8. The name suggests allocation of a DMA mapping on the hub; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1b4
  **Inferred.** It calls hub_dmamap_alloc with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x1c8]. Role (from facts): a pass-through to hub_dmamap_alloc [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmamap_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1d0
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_free` through the `jal` at 0x1d8 and returns the callee's v0 at 0x1e4. The name suggests the release half of the DMA mapping allocator at 0x1b4.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1ec
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_addr` through the `jal` at 0x1f4 and returns the callee's v0 at 0x200. The name suggests a lookup of the bus address for a DMA mapping; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x1ec
  **Inferred.** It calls hub_dmamap_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x200]. Role (from facts): a pass-through to hub_dmamap_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmamap_list` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x208
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_list` through the `jal` at 0x210 and returns the callee's v0 at 0x21c. The name suggests a scatter-list variant of DMA mapping, judging only by the name.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_done` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x224
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_done` through the `jal` at 0x22c and returns the callee's v0 at 0x238. The name suggests the end-of-use call for a DMA mapping allocated at 0x1b4.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x240
  **Inferred.** Forwards its arguments unchanged to `hub_dmatrans_addr` through the `jal` at 0x248 and returns the callee's v0 at 0x254. The name suggests translation of a DMA address; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x240
  **Inferred.** It calls hub_dmatrans_addr with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x254]. Role (from facts): a pass-through to hub_dmatrans_addr [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmatrans_list` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x25c
  **Inferred.** Forwards its arguments unchanged to `hub_dmatrans_list` through the `jal` at 0x264 and returns the callee's v0 at 0x270. The name suggests the list form of the DMA translation at 0x240, judging by the name.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x278
  **Inferred.** Forwards its arguments unchanged to `hub_dmamap_drain` through the `jal` at 0x280 and returns the callee's v0 at 0x28c. The name suggests draining outstanding DMA on a mapping; the callee's body is not shown.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmamap_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x278
  **Inferred.** It calls hub_dmamap_drain with a0 at entry as its first argument, a1 at entry as its second, a2 at entry as its third and a3 at entry as its fourth [call 1]. It returns the callee's v0 [@0x28c]. Role (from facts): a pass-through to hub_dmamap_drain [call 1], with no branch and no other call in the facts.
  Reviewed: 2026-11-12

- `xtalk_dmaaddr_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x294
  **Inferred.** Forwards its arguments unchanged to `hub_dmaaddr_drain` through the `jal` at 0x29c and returns the callee's v0 at 0x2a8. The name suggests a drain keyed by DMA address, the sibling of `xtalk_dmamap_drain` at 0x278.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dmalist_drain` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2b0
  **Inferred.** Forwards its arguments unchanged to `hub_dmalist_drain` through the `jal` at 0x2b8 and returns the callee's v0 at 0x2c4. The name suggests a drain keyed by DMA list, the list sibling of the drains at 0x278 and 0x294.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_alloc` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2cc
      **Inferred.** A 28-byte wrapper that passes its four argument registers unchanged to `hub_intr_alloc` through the jal at 0x2d4 and returns the callee's result in v0 at 0x2e0. The callee name suggests the xtalk interrupt-allocation call is delegated to the hub layer.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_alloc_nothd` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x2e8
  **Inferred.** A 28-byte pass-through that forwards a0 to a3 to `hub_intr_alloc_nothd` at the jal at 0x2f0 and returns its value in v0 at 0x2fc. The render does not show what the "nothd" suffix means, so the difference from `xtalk_intr_alloc` is not visible here.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_free` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x304
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_free` at the jal at 0x30c and returns the callee's value in v0 at 0x318. It does no work of its own beyond the call.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_connect` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x320
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_connect` at the jal at 0x328 and returns the callee's value in v0 at 0x334. The name points at attaching an interrupt handler, but the render does not show what the callee does with it.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_disconnect` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x33c
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_disconnect` at the jal at 0x344 and returns the callee's value in v0 at 0x350. It has the same four-register pass-through shape as `xtalk_intr_connect`, and its callee name indicates the teardown side of that connection.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x358
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_cpu_get` at the jal at 0x360 and returns the callee's value in v0 at 0x36c. The name suggests it reports the CPU an interrupt is routed to.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_cpuid_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x374
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_intr_cpuid_get` at the jal at 0x37c and returns the callee's value in v0 at 0x388. The name suggests a CPU identifier rather than a CPU pointer, which the render does not confirm.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_error_handler` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x390 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x390-0x43c (172 bytes).
  It occupies 172 bytes.
  The `ld` at 0x3b8 loads 8 bytes from ret(xwidget_info_get) +0x28.
  The `ld` at 0x3c4 loads 8 bytes from ret(xwidget_info_get) +0x30.
  The `jal` at 0x3a8 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x3d0 calls (unknown callee) with a0=[ret(xwidget_info_get)+48]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x3, a6=[ret(xwidget_info_get)+40]:8.
  The `jal` at 0x414 calls cmn_err with a0=0x4, a1=sym(.rodata), a2=a0 at entry (arg0), a3=?, a5=0x3.
  The `jal` at 0x42c calls ioerror_dump with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x3b0 targets 0x3e0, is taken when v0(=ret(xwidget_info_get)) == 0, and falls through when v0(=ret(xwidget_info_get)) != 0.
  The `beq` branch at 0x3bc targets 0x3e0, is taken when a6(=[ret(xwidget_info_get)+40]:8) == 0, and falls through when a6(=[ret(xwidget_info_get)+40]:8) != 0.
  The `beq` branch at 0x3d8 targets 0x3f8 and is always taken.
  The `beq` branch at 0x3e0 targets 0x3f4, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0x3e8 targets 0x3f8, is taken when s0(=a2) == at(=0x2), and falls through when s0(=a2) != at(=0x2).
  The `bne` branch at 0x3f0 targets 0x40c, is taken when s0(=a2) != a5(=0x3), and falls through when s0(=a2) == a5(=0x3).
  The `beq` branch at 0x434 targets 0x3f8 and is always taken.
  The return at 0x404 has v0 = one of ret(?), 0x0, 0x9.

- `xtalk_error_devenable` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x43c
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_error_devenable` at the jal at 0x444 and returns the callee's value in v0 at 0x450. The name suggests enabling error reporting for a device.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_startup` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x458
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_provider_startup` at the jal at 0x460 and returns the callee's value in v0 at 0x46c. The name suggests bringing up a crossbar provider, but the render shows only the delegation.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x474
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_provider_shutdown` at the jal at 0x47c and returns the callee's value in v0 at 0x488. It has the same pass-through shape as `xtalk_provider_startup`, and its callee name indicates the teardown of that startup.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_widgetdev_enable` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x490
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_widgetdev_enable` at the jal at 0x498 and returns the callee's value in v0 at 0x4a4. The name suggests enabling a widget device on the crossbar.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_widgetdev_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4ac
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_widgetdev_shutdown` at the jal at 0x4b4 and returns the callee's value in v0 at 0x4c0. It has the same pass-through shape as `xtalk_widgetdev_enable`, and its callee name indicates the disable side of that enable.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_dma_enabled` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4c8
      **Inferred.** A 28-byte pass-through that forwards its arguments to `hub_dma_enabled` at the jal at 0x4d0 and returns the callee's value in v0 at 0x4dc. The name suggests a query for whether DMA is enabled, but the render does not show what the query returns.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_intr_dev_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4e4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x4e4-0x4ec (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x4e8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The return at 0x4e4 has v0 = [a0].

- `xtalk_intr_target_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4ec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x4ec-0x4f4 (8 bytes).
  It occupies 8 bytes.
  The `lbu` at 0x4f0 loads 1 byte from a0 (arg0 at entry) +0x4.
  The return at 0x4ec has v0 = [a0+4]:1.

- `xtalk_intr_vector_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4f4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x4f4-0x4fc (8 bytes).
  It occupies 8 bytes.
  The `lbu` at 0x4f8 loads 1 byte from a0 (arg0 at entry) +0x5.
  The return at 0x4f4 has v0 = [a0+5]:1.

- `xtalk_intr_addr_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x4fc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x4fc-0x504 (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0x500 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The return at 0x4fc has v0 = [a0+8]:8.

- `xtalk_intr_sfarg_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x504 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x504-0x50c (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0x508 loads 8 bytes from a0 (arg0 at entry) +0x10.
  The return at 0x504 has v0 = [a0+16]:8.

- `xtalk_pio_dev_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x50c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x50c-0x514 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x510 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The return at 0x50c has v0 = [a0].

- `xtalk_pio_target_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x514 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x514-0x51c (8 bytes).
  It occupies 8 bytes.
  The `lbu` at 0x518 loads 1 byte from a0 (arg0 at entry) +0x4.
  The return at 0x514 has v0 = [a0+4]:1.

- `xtalk_pio_xtalk_addr_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x51c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x51c-0x524 (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0x520 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The return at 0x51c has v0 = [a0+8]:8.

- `xtalk_pio_mapsz_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x524 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x524-0x52c (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0x528 loads 8 bytes from a0 (arg0 at entry) +0x10.
  The return at 0x524 has v0 = [a0+16]:8.

- `xtalk_pio_kvaddr_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x52c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x52c-0x534 (8 bytes).
  It occupies 8 bytes.
  The `ld` at 0x530 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The return at 0x52c has v0 = [a0+24]:8.

- `xtalk_dma_dev_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x534 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x534-0x53c (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x538 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The return at 0x534 has v0 = [a0].

- `xtalk_dma_target_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x53c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x53c-0x544 (8 bytes).
  It occupies 8 bytes.
  The `lbu` at 0x540 loads 1 byte from a0 (arg0 at entry) +0x4.
  The return at 0x53c has v0 = [a0+4]:1.

- `xwidget_info_chk` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x544 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x544-0x570 (44 bytes).
  It occupies 44 bytes.
  The `jal` at 0x558 calls hwgraph_info_get_LBL with a0=a0 at entry (arg0), a1=sym(.rodata), a2=sp-16, a3=a3 at entry (arg3).
  The return at 0x568 has v0 = ?.

- `xwidget_info_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x570 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x570-0x5c8 (88 bytes).
  It occupies 88 bytes.
  The `ld` at 0x58c loads 8 bytes from ret(hwgraph_fastinfo_get) +0x0.
  The `jal` at 0x57c calls hwgraph_fastinfo_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x5b8 calls cmn_err with a0=0x0, a1=sym(.rodata), a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0x584 targets 0x598, is taken when v0(=ret(hwgraph_fastinfo_get)) == 0, and falls through when v0(=ret(hwgraph_fastinfo_get)) != 0.
  The `bne` branch at 0x594 targets 0x5ac, is taken when at(=[ret(hwgraph_fastinfo_get)]:8) != v0(=sym(widget_info_fingerprint)), and falls through when at(=[ret(hwgraph_fastinfo_get)]:8) == v0(=sym(widget_info_fingerprint)).
  The `beq` branch at 0x5c0 targets 0x59c and is always taken.
  The return at 0x5a4 has v0 = ret(hwgraph_fastinfo_get).

- `xwidget_info_set` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x5c8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x5c8-0x620 (88 bytes).
  It occupies 88 bytes.
  The `sd` at 0x5e8 stores 8 bytes to a1 (arg1 at entry) +0x0.
  The `jal` at 0x5f0 calls hwgraph_fastinfo_set with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sym(widget_info_fingerprint), a3=a3 at entry (arg3).
  The `jal` at 0x604 calls hwgraph_info_add_LBL with a0=a0 at entry (arg0), a1=sym(.rodata), a2=a1 at entry (arg1), a3=?.
  The `beq` branch at 0x5e0 targets 0x5ec, is taken when a1 == 0, and falls through when a1 != 0.
  The return at 0x618 has v0 = ret(hwgraph_info_add_LBL).

- `xwidget_info_dev_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x620 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x620-0x654 (52 bytes).
  It occupies 52 bytes.
  The `lw` at 0x630 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `jal` at 0x640 calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x628 targets 0x63c, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x64c targets 0x630 and is always taken.
  The return at 0x634 has v0 = [a0+8].

- `xwidget_info_id_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x654 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x654-0x688 (52 bytes).
  It occupies 52 bytes.
  The `lbu` at 0x664 loads 1 byte from a0 (arg0 at entry) +0xc.
  The `jal` at 0x674 calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x65c targets 0x670, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x680 targets 0x664 and is always taken.
  The return at 0x668 has v0 = [a0+12]:1.

- `xwidget_info_master_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x688 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x688-0x6bc (52 bytes).
  It occupies 52 bytes.
  The `lw` at 0x698 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `jal` at 0x6a8 calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x690 targets 0x6a4, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x6b4 targets 0x698 and is always taken.
  The return at 0x69c has v0 = [a0+28].

- `xwidget_info_masterid_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x6bc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x6bc-0x6f0 (52 bytes).
  It occupies 52 bytes.
  The `lbu` at 0x6cc loads 1 byte from a0 (arg0 at entry) +0x20.
  The `jal` at 0x6dc calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x6c4 targets 0x6d8, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x6e8 targets 0x6cc and is always taken.
  The return at 0x6d0 has v0 = [a0+32]:1.

- `xwidget_info_part_num_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x6f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x6f0-0x724 (52 bytes).
  It occupies 52 bytes.
  The `lw` at 0x700 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `jal` at 0x710 calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x6f8 targets 0x70c, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x71c targets 0x700 and is always taken.
  The return at 0x704 has v0 = [a0+16].

- `xwidget_info_mfg_num_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x724 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x724-0x758 (52 bytes).
  It occupies 52 bytes.
  The `lw` at 0x734 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `jal` at 0x744 calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x72c targets 0x740, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x750 targets 0x734 and is always taken.
  The return at 0x738 has v0 = [a0+24].

- `xwidget_info_name_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x758 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x758-0x78c (52 bytes).
  It occupies 52 bytes.
  The `ld` at 0x768 loads 8 bytes from a0 (arg0 at entry) +0x38.
  The `jal` at 0x778 calls panic with a0=sym(.rodata), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x760 targets 0x774, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x784 targets 0x768 and is always taken.
  The return at 0x76c has v0 = [a0+56]:8.

- `xtalk_init` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x78c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x78c-0x7e4 (88 bytes).
  It occupies 88 bytes.
  The `jal` at 0x7a8 calls cdl_new with a0=sym(.rodata), a1=sym(.rodata), a2=sym(.rodata), a3=a3 at entry (arg3).
  The `jal` at 0x7bc calls compare_and_swap_ptr with a0=sym(xtalk_registry), a1=0x0, a2=ret(cdl_new), a3=?.
  The `jal` at 0x7d4 calls cdl_del with a0=ret(cdl_new), a1=?, a2=?, a3=?.
  The `bne` branch at 0x794 targets 0x7c8, is taken when at(=[sym(xtalk_registry)]:8) != 0, and falls through when at(=[sym(xtalk_registry)]:8) == 0.
  The `beq` branch at 0x7c4 targets 0x7d4, is taken when v0(=ret(compare_and_swap_ptr)) == 0, and falls through when v0(=ret(compare_and_swap_ptr)) != 0.
  The `beq` branch at 0x7dc targets 0x7cc and is always taken.
  The return at 0x7cc has v0 = one of ret(compare_and_swap_ptr), ?, ret(cdl_del).

- `xtalk_provider_register` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x7e4
      **Inferred.** A 28-byte wrapper that passes its arguments to `hwgraph_fastinfo_set` at the jal at 0x7ec and returns the callee's value in v0 at 0x7f8. The name and the callee suggest it attaches the provider's function table to a hardware-graph vertex.
  Reviewed: 2026-11-12 (sonnet)

- `xtalk_provider_unregister` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x800 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x800-0x81c (28 bytes).
  It occupies 28 bytes.
  The `jal` at 0x808 calls hwgraph_fastinfo_set with a0=a0 at entry (arg0), a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x814 has v0 = ret(hwgraph_fastinfo_set).

- `xtalk_provider_fns_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x81c
      **Inferred.** A 28-byte wrapper that passes its arguments to `hwgraph_fastinfo_get` at the jal at 0x824 and returns the callee's value in v0 at 0x830. It is the read side of `xtalk_provider_register` by name and callee.
  Reviewed: 2026-11-12 (sonnet)

- `xwidget_driver_register` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x838 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x838-0x8ac (116 bytes).
  It occupies 116 bytes.
  The `jal` at 0x878 calls cdl_add_driver with a0=[sym(xtalk_registry)]:8, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=0x0, a7=a1 at entry (arg1).
  The `jal` at 0x890 calls xtalk_init with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=a3 at entry (arg3), a7=a1 at entry (arg1).
  The `beq` branch at 0x860 targets 0x890, is taken when t1(=[sym(xtalk_registry)]:8) == 0, and falls through when t1(=[sym(xtalk_registry)]:8) != 0.
  The `beq` branch at 0x8a4 targets 0x868 and is always taken.
  The return at 0x888 has v0 = ret(cdl_add_driver).

- `xwidget_driver_unregister` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x8ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x8ac-0x8d0 (36 bytes).
  It occupies 36 bytes.
  The `jal` at 0x8bc calls cdl_del_driver with a0=[sym(xtalk_registry)]:8, a1=a0 at entry (arg0), a2=0x0, a3=a3 at entry (arg3).
  The return at 0x8c8 has v0 = ret(cdl_del_driver).

- `xtalk_iterate` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x8d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x8d0-0x8f8 (40 bytes).
  It occupies 40 bytes.
  The `jal` at 0x8e4 calls cdl_iterate with a0=[sym(xtalk_registry)]:8, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a3 at entry (arg3).
  The return at 0x8f0 has v0 = ret(cdl_iterate).

- `xwidget_register` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0x8f8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0x8f8-0xa1c (292 bytes).
  It occupies 292 bytes.
  The `sb` at 0x940 stores 1 byte to ret(kmem_alloc) +0x20.
  The `sw` at 0x944 stores 4 bytes to ret(kmem_alloc) +0x1c.
  The `sb` at 0x948 stores 1 byte to ret(kmem_alloc) +0xc.
  The `sw` at 0x94c stores 4 bytes to ret(kmem_alloc) +0x8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x950, `lw` at 0x9e0.
  The `sw` at 0x954 stores 4 bytes to ret(kmem_alloc) +0x10.
  The `lw` at 0x958 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `sw` at 0x95c stores 4 bytes to ret(kmem_alloc) +0x14.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x8, including `lw` at 0x960, `lw` at 0x9e8.
  The `sd` at 0x968 stores 8 bytes to ret(kmem_alloc) +0x28.
  The `sd` at 0x974 stores 8 bytes to ret(kmem_alloc) +0x30.
  The `sw` at 0x980 stores 4 bytes to ret(kmem_alloc) +0x18.
  The `sd` at 0x9a4 stores 8 bytes to ret(kmem_alloc) +0x38.
  The `jal` at 0x938 calls kmem_alloc with a0=0x40, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x97c calls dev_to_name with a0=a1 at entry (arg1), a1=sp-320, a2=0x100, a3=?.
  The `jal` at 0x98c calls strlen with a0=ret(dev_to_name), a1=?, a2=?, a3=?.
  The `jal` at 0x998 calls kmem_alloc with a0=ret(strlen)+1, a1=0x0, a2=?, a3=?.
  The `jal` at 0x9a8 calls strcpy with a0=ret(kmem_alloc), a1=ret(dev_to_name), a2=?, a3=?.
  The `jal` at 0x9b8 calls xwidget_info_set with a0=a1 at entry (arg1), a1=ret(kmem_alloc), a2=?, a3=?.
  The `jal` at 0x9c8 calls device_master_set with a0=a1 at entry (arg1), a1=a3 at entry (arg3), a2=?, a3=?.
  The `jal` at 0x9ec calls cdl_add_connpt with a0=[sym(xtalk_registry)]:8, a1=[a0], a2=[a0+8], a3=a1 at entry (arg1), a4=0x0.
  The `jal` at 0xa0c calls async_attach_add_info with a0=a1 at entry (arg1), a1=a5 at entry (arg5), a2=?, a3=?.
  The `bne` branch at 0x9d0 targets 0xa08, is taken when s4(=a5) != 0, and falls through when s4(=a5) == 0.
  The `beq` branch at 0xa14 targets 0x9dc and is always taken.
  The return at 0xa00 has v0 = ret(cdl_add_connpt).

- `xwidget_unregister` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xa1c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xa1c-0xac0 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0xa78 loads 4 bytes from ret(xwidget_info_get) +0x10.
  The `lw` at 0xa80 loads 4 bytes from ret(xwidget_info_get) +0x18.
  2 such `ld` accesses load 8 bytes from ret(xwidget_info_get) +0x38, including `ld` at 0xa90, `ld` at 0xa9c.
  The `jal` at 0xa2c calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xa6c calls hwgraph_inventory_remove with a0=a0 at entry (arg0), a1=-0x1, a2=-0x1, a3=-0x1, a4=-0x1, a5=-0x1.
  The `jal` at 0xa84 calls cdl_del_connpt with a0=[sym(xtalk_registry)]:8, a1=[ret(xwidget_info_get)+16], a2=[ret(xwidget_info_get)+24], a3=a0 at entry (arg0), a4=0x0.
  The `jal` at 0xa8c calls strlen with a0=[ret(xwidget_info_get)+56]:8, a1=?, a2=?, a3=?.
  The `jal` at 0xa98 calls kmem_free with a0=[ret(xwidget_info_get)+56]:8, a1=ret(strlen), a2=?, a3=?.
  The `jal` at 0xaa4 calls bzero with a0=ret(xwidget_info_get), a1=0x8, a2=?, a3=?.
  The `jal` at 0xab0 calls kmem_free with a0=ret(xwidget_info_get), a1=0x40, a2=?, a3=?.
  The `bne` branch at 0xa38 targets 0xa58, is taken when v0(=ret(xwidget_info_get)) != 0, and falls through when v0(=ret(xwidget_info_get)) == 0.
  The `beq` branch at 0xab8 targets 0xa40 and is always taken.
  The return at 0xa50 has v0 = one of 0x0, 0x1.

- `xwidget_error_register` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xac0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xac0-0xaf4 (52 bytes).
  It occupies 52 bytes.
  The `sd` at 0xad8 stores 8 bytes to ret(xwidget_info_get) +0x28.
  The `sd` at 0xaf0 stores 8 bytes to ret(xwidget_info_get) +0x30.
  The `jal` at 0xad0 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xaec has v0 = ret(xwidget_info_get).

- `xwidget_reset` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xaf4
      **Inferred.** A 28-byte pass-through that forwards its arguments to `xswitch_reset_link` at the jal at 0xafc and returns the callee's value in v0 at 0xb08. The name suggests resetting a widget by way of its switch link.
  Reviewed: 2026-11-12 (sonnet)

- `xwidget_gfx_reset` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xb10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xb10-0xb88 (120 bytes).
  It occupies 120 bytes.
  The `jal` at 0xb1c calls xswitch_reset_link with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xb24 calls xwidget_info_get with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0xb38 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0xb44 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0xb54 calls hub_widget_reset with a0=ret(xwidget_info_master_get), a1=ret(xwidget_info_id_get), a2=?, a3=?.
  The `jal` at 0xb78 calls assfail with a0=sym(.rodata), a1=sym(.rodata), a2=0x441, a3=?.
  The `beq` branch at 0xb2c targets 0xb6c, is taken when v0(=ret(xwidget_info_get)) == 0, and falls through when v0(=ret(xwidget_info_get)) != 0.
  The `beq` branch at 0xb80 targets 0xb38 and is always taken.
  The return at 0xb64 has v0 = ret(hub_widget_reset).

- `xwidget_name_get` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xb88 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xb88-0xbc4 (60 bytes).
  It occupies 60 bytes.
  The `jal` at 0xba0 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=sym(.rodata).
  The `jal` at 0xba8 calls xwidget_info_name_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `beq` branch at 0xb98 targets 0xbb8, is taken when a0 == at(=-0x1), and falls through when a0 != at(=-0x1).
  The return at 0xbbc has v0 = one of sym(.rodata), ret(xwidget_info_name_get).

- `xtalk_device_powerup` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xbc4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xbc4-0xc04 (64 bytes).
  It occupies 64 bytes.
  The `jal` at 0xbd4 calls hwgraph_connectpt_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xbe8 calls io_xswitch_widget_init with a0=a0 at entry (arg0), a1=ret(hwgraph_connectpt_get), a2=a1 at entry (arg1), a3=0x0.
  The return at 0xbfc has v0 = 0x0.

- `xtalk_device_shutdown` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xc04 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xc04-0xc60 (92 bytes).
  It occupies 92 bytes.
  The `jal` at 0xc20 calls sprintf with a0=sp-32, a1=sym(.rodata), a2=a1 at entry (arg1), a3=a3 at entry (arg3).
  The `jal` at 0xc30 calls hwgraph_traverse with a0=a0 at entry (arg0), a1=sp-32, a2=sp-24, a3=?.
  The `jal` at 0xc50 calls xwidget_unregister with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0xc38 targets 0xc50, is taken when v0(=ret(hwgraph_traverse)) == 0, and falls through when v0(=ret(hwgraph_traverse)) != 0.
  The `beq` branch at 0xc58 targets 0xc44 and is always taken.
  The return at 0xc48 has v0 = one of 0x0, 0x1.

- `xtalk_device_inquiry` in `usr/cpu/sysgen/IP35boot/xtalk.o` at 0xc60 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/xtalk.o`.
  Range: 0xc60-0xc80 (32 bytes).
  It occupies 32 bytes.
  The `jal` at 0xc68 calls hub_device_inquiry with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0xc78 has v0 = 0x0.
