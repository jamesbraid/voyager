# Readings: `usr/cpu/sysgen/IP35boot/kernel.o`

One entry per routine, filed here from the reading batches by binary.

- `tlbgetrand` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xd30 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xd30-0xd3c (12 bytes).
  It occupies 12 bytes.
  The return at 0xd34 has v0 = ?.

- `hub_widget_id` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x129c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x129c-0x12b4 (24 bytes).
  It occupies 24 bytes.
  The `ld` at 0x12a8 loads 8 bytes from (a0 << 0x21) -0x6dfffffffe3fffe0.
  The return at 0x12ac has v0 = ?.

- `nodevertex_widgetnum_get` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x595c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x595c-0x5988 (44 bytes).
  It occupies 44 bytes.
  The `lbu` at 0x597c loads 1 byte from ?.
  The `jal` at 0x596c calls hwgraph_info_get_LBL with a0=a0 at entry (arg0), a1=sym(.rodata)+1440, a2=sp-16, a3=a3 at entry (arg3).
  The return at 0x5980 has v0 = ?.

- `do_cpumask` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x660c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x660c-0x6838 (556 bytes).
  It occupies 556 bytes.
  The `ld` at 0x6638 loads 8 bytes from (a1 << 0x21) -0x6fffffffcc000000.
  The `ld` at 0x6678 loads 8 bytes from ((a1 << 0x21)+0x9600000000000000 | 0x2000) +0x48.
  The `lw` at 0x6688 loads 4 bytes from ?.
  The `lh` at 0x66d0 loads 2 bytes from ?.
  The `lh` at 0x66e8 loads 2 bytes from ret(find_lboard) +0x20.
  The `sh` at 0x6704 stores 2 bytes to ?.
  The `lw` at 0x6708 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `sw` at 0x6720 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `lbu` at 0x6724 loads 1 byte from ?.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x6734, `ld` at 0x6818.
  The `sd` at 0x674c stores 8 bytes to ?.
  The `lw` at 0x6768 loads 4 bytes from ret(find_lboard) +0x0.
  The `jal` at 0x66a4 calls find_lboard with a0=?, a1=0x11, a2=?, a3=?.
  The `jal` at 0x66c0 calls find_first_component with a0=ret(find_lboard), a1=0x1, a2=?, a3=?.
  The `jal` at 0x66e0 calls get_actual_nasid with a0=ret(find_lboard), a1=?, a2=?, a3=?.
  The `jal` at 0x6758 calls find_component with a0=ret(find_lboard), a1=?, a2=0x1, a3=?.
  The `jal` at 0x6798 calls find_lboard with a0=?, a1=0x11, a2=?, a3=?.
  The `jal` at 0x67dc calls chk_for_pebrick with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x67f4 calls assfail with a0=sym(.rodata)+2344, a1=sym(.rodata)+2344, a2=0xec, a3=?.
  The `jal` at 0x680c calls assfail with a0=sym(.rodata)+2344, a1=sym(.rodata)+2344, a2=0xfa, a3=[ret(find_lboard)+32]:2, a4=a0 at entry (arg0).
  The `jal` at 0x6828 calls assfail with a0=sym(.rodata)+2344, a1=sym(.rodata)+2344, a2=0xe3, a3=?.
  The `beq` branch at 0x6658 targets 0x67dc, is taken when at(?) == v1(=0xc000), and falls through when at(?) != v1(=0xc000).
  The `beq` branch at 0x6690 targets 0x66a4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x66ac targets 0x681c, is taken when v0(=ret(find_lboard)) == 0, and falls through when v0(=ret(find_lboard)) != 0.
  The `beq` branch at 0x66c8 targets 0x6768, is taken when v0(=ret(find_first_component)) == 0, and falls through when v0(=ret(find_first_component)) != 0.
  The `beq` branch at 0x66d8 targets 0x67ec, is taken when s2(?) >= 0x200 (signed), and falls through when s2(?) < 0x200 (signed).
  The `bne` branch at 0x66fc targets 0x6708, is taken when a3(=[ret(find_lboard)+32]:2) != v0(=ret(get_actual_nasid)), and falls through when a3(=[ret(find_lboard)+32]:2) == v0(=ret(get_actual_nasid)).
  The `beq` branch at 0x6718 targets 0x6724, is taken when a5(=[a3]) >= s2(?) (signed), and falls through when a5(=[a3]) < s2(?) (signed).
  The `beq` branch at 0x672c targets 0x6754, is taken when (a6(?) & 0x1) == 0, and falls through when (a6(?) & 0x1) != 0.
  The `bne` branch at 0x673c targets 0x6804, is taken when (v0(?) & s4(?)) != 0, and falls through when (v0(?) & s4(?)) == 0.
  The `bne` branch at 0x6760 targets 0x66d0, is taken when v0(=ret(find_component)) != 0, and falls through when v0(=ret(find_component)) == 0.
  The `beq` branch at 0x676c targets 0x67a8, is taken when v0(=[ret(find_lboard)]) == 0, and falls through when v0(=[ret(find_lboard)]) != 0.
  The `bne` branch at 0x67a0 targets 0x66bc, is taken when v0(=ret(find_lboard)) != 0, and falls through when v0(=ret(find_lboard)) == 0.
  The `beq` branch at 0x67e4 targets 0x66a4 and is always taken.
  The `beq` branch at 0x67fc targets 0x66e0 and is always taken.
  The `beq` branch at 0x6814 targets 0x6744 and is always taken.
  The `beq` branch at 0x6830 targets 0x66b8 and is always taken.
  The return at 0x67d4 has v0 = ?.

- `hub_vector_read` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x7240 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x7240-0x7330 (240 bytes).
  It occupies 240 bytes.
  The `ld` at 0x7260 loads 8 bytes from abs 0xffffffffffffc400.
  The `ld` at 0x7270 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `lh` at 0x7278 loads 2 bytes from (sym(compact_to_nasid_node) + (a0 + a0)) +0x0.
  The `ld` at 0x7290 loads 8 bytes from ([[-0x3c00]:8]:8 + (a0 << 0x3)) +0x0.
  The `lh` at 0x729c loads 2 bytes from abs 0xffffffffffffc42a.
  2 such `sb` accesses store 1 byte to [([[-0x3c00]:8]:8 + (a0 << 0x3))]:8 +0x8594, including `sb` at 0x72f8, `sb` at 0x7304.
  The `jal` at 0x728c calls in_panic_mode with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x72a8 calls in_panic_mode with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x72f4 calls vector_read_node with a0=a1 at entry (arg1), a1=[(sym(compact_to_nasid_node) + (a0 + a0))]:2, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x730c calls mutex_spinunlock with a0=[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+34192, a1=?, a2=?, a3=?.
  The `jal` at 0x7320 calls mutex_spinlock with a0=[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+34192, a1=?, a2=?, a3=?.
  The `beq` branch at 0x7294 targets 0x731c, is taken when v0(=ret(in_panic_mode)) == 0, and falls through when v0(=ret(in_panic_mode)) != 0.
  The `beq` branch at 0x72a0 targets 0x72d4, is taken when t8(=[-0x3bd6]:2) == s3(=a0), and falls through when t8(=[-0x3bd6]:2) != s3(=a0).
  The `beq` branch at 0x72b0 targets 0x7308, is taken when v0(=ret(in_panic_mode)) == 0, and falls through when v0(=ret(in_panic_mode)) != 0.
  The `beq` branch at 0x7300 targets 0x72a8 and is always taken.
  The `beq` branch at 0x7314 targets 0x72bc and is always taken.
  The `beq` branch at 0x7328 targets 0x729c and is always taken.
  The return at 0x72cc has v0 = ?.

- `hub_vector_write` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x7330 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x7330-0x7420 (240 bytes).
  It occupies 240 bytes.
  The `ld` at 0x7350 loads 8 bytes from abs 0xffffffffffffc400.
  The `ld` at 0x7360 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `lh` at 0x7368 loads 2 bytes from (sym(compact_to_nasid_node) + (a0 + a0)) +0x0.
  The `ld` at 0x7380 loads 8 bytes from ([[-0x3c00]:8]:8 + (a0 << 0x3)) +0x0.
  The `lh` at 0x738c loads 2 bytes from abs 0xffffffffffffc42a.
  2 such `sb` accesses store 1 byte to [([[-0x3c00]:8]:8 + (a0 << 0x3))]:8 +0x8594, including `sb` at 0x73e4, `sb` at 0x73f0.
  The `jal` at 0x737c calls in_panic_mode with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x7398 calls in_panic_mode with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x73e0 calls vector_write_node with a0=a1 at entry (arg1), a1=[(sym(compact_to_nasid_node) + (a0 + a0))]:2, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x73fc calls mutex_spinunlock with a0=[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+34192, a1=?, a2=?, a3=?.
  The `jal` at 0x7410 calls mutex_spinlock with a0=[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+34192, a1=?, a2=?, a3=?.
  The `beq` branch at 0x7384 targets 0x740c, is taken when v0(=ret(in_panic_mode)) == 0, and falls through when v0(=ret(in_panic_mode)) != 0.
  The `beq` branch at 0x7390 targets 0x73c0, is taken when t8(=[-0x3bd6]:2) == s3(=a0), and falls through when t8(=[-0x3bd6]:2) != s3(=a0).
  The `beq` branch at 0x73a0 targets 0x73f4, is taken when v0(=ret(in_panic_mode)) == 0, and falls through when v0(=ret(in_panic_mode)) != 0.
  The `beq` branch at 0x73ec targets 0x7398 and is always taken.
  The `beq` branch at 0x7404 targets 0x73a8 and is always taken.
  The `beq` branch at 0x7418 targets 0x738c and is always taken.
  The return at 0x73b8 has v0 = ?.

- `cerror` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x7674 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x7674-0x7688 (20 bytes).
  It occupies 20 bytes.
  The return at 0x7680 has v0 = -0x1.

- `upath` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x7b2c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x7b2c-0x7b70 (68 bytes).
  It occupies 68 bytes.
  The `ld` at 0x7b30 loads 8 bytes from abs 0xffffffffffffc020.
  2 such `sh` accesses store 2 bytes to [-0x3fe0]:8 +0xf6, including `sh` at 0x7b38, `sh` at 0x7b6c.
  The `lbu` at 0x7b40 loads 1 byte from ?.
  The `sb` at 0x7b4c stores 1 byte to ?.
  The `bltz` branch at 0x7b2c targets 0x7ccc, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x7b48 targets 0x7b64, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x7b54 targets 0x7b40, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x7b5c targets 0x7b68 and is always taken.
  The return at 0x7b68 has v0 = one of -0x2, ?.

- `bcopy` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x7e38 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x7e38-0x7eac (116 bytes).
  It occupies 116 bytes.
  The `ldl` at 0x7e78 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `sdl` at 0x7e88 stores 8 bytes to a1 (arg1 at entry) +0x0.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x7ea4, `ld` at 0x7ea8.
  The `beq` branch at 0x7e40 targets 0x7e50, is taken when a0 >= a1 (signed), and falls through when a0 < a1 (signed).
  The `bne` branch at 0x7e4c targets 0x815c, is taken when a1 < v0(=(a0 + a2)) (signed), and falls through when a1 >= v0(=(a0 + a2)) (signed).
  The `bne` branch at 0x7e54 targets 0x8138, is taken when at(?) != 0, and falls through when at(?) == 0.
  The `bne` branch at 0x7e68 targets 0x7f4c, is taken when v0(?) != v1(?), and falls through when v0(?) == v1(?).
  The `beq` branch at 0x7e70 targets 0x7e90, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x7e98 targets 0x7f80, is taken when (a2(?) & at(=-0x40)) == 0, and falls through when (a2(?) & at(=-0x40)) != 0.

- `xbwidget_to_xtslot` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb0ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb0ac-0xb134 (136 bytes).
  It occupies 136 bytes.
  3 such `lbu` accesses load 1 byte from (sym(.data)+352 + (a1 << 0x2)) -0x1d, including `lbu` at 0xb10c, `lbu` at 0xb11c, `lbu` at 0xb130.
  The `bne` branch at 0xb0c0 targets 0xb0f4, is taken when a1 < 0x8 (signed), and falls through when a1 >= 0x8 (signed).
  The `beq` branch at 0xb0c8 targets 0xb0f4, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0xb0d0 targets 0xb110, is taken when a2 == a5(=0x49), and falls through when a2 != a5(=0x49).
  The `beq` branch at 0xb0d8 targets 0xb120, is taken when a2 == a6(=0x50), and falls through when a2 != a6(=0x50).
  The `beq` branch at 0xb0e0 targets 0xb0fc, is taken when a2 == a7(=0x58), and falls through when a2 != a7(=0x58).
  The return at 0xb0ec has v0 = 0xf0.
  The return at 0xb0f4 has v0 = 0xf0.
  The return at 0xb108 has v0 = [(sym(.data)+352 + (a1 << 0x2))-29]:1.
  The return at 0xb118 has v0 = [(sym(.data)+352 + (a1 << 0x2))-29]:1.
  The return at 0xb12c has v0 = [(sym(.data)+352 + (a1 << 0x2))-29]:1.

- `xswitch_vertex_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb22c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb22c-0xb284 (88 bytes).
  It occupies 88 bytes.
  The `jal` at 0xb240 calls kmem_zalloc with a0=0x20, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xb25c calls init_mutex with a0=ret(kmem_zalloc), a1=0x0, a2=sym(.rodata)+4936, a3=-0x1.
  The `jal` at 0xb26c calls hwgraph_info_add_LBL with a0=a0 at entry (arg0), a1=sym(.rodata)+4936, a2=ret(kmem_zalloc), a3=?.
  The return at 0xb27c has v0 = ret(hwgraph_info_add_LBL).

- `xswitch_volunteer_delete` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb284 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb284-0xb2b0 (44 bytes).
  It occupies 44 bytes.
  The `jal` at 0xb290 calls hwgraph_info_remove_LBL with a0=a0 at entry (arg0), a1=sym(.rodata)+4936, a2=sp-16, a3=a3 at entry (arg3).
  The `jal` at 0xb29c calls kmem_free with a0=?, a1=0x20, a2=?, a3=?.
  The return at 0xb2a8 has v0 = ret(kmem_free).

- `iograph_early_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb650 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb650-0xb7c8 (376 bytes).
  It occupies 376 bytes.
  The `lh` at 0xb6c0 loads 2 bytes from ?.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0xb6cc, `ld` at 0xb6e0.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0xb6ec, `lw` at 0xb710, `lw` at 0xb724.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0xb730, `sw` at 0xb75c.
  The `lh` at 0xb7c4 loads 2 bytes from sym(compact_to_nasid_node) +0x0.
  The `jal` at 0xb778 calls chk_for_pebrick with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xb788 calls hubio_init with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0xb688 targets 0xb788, is taken when at(=[sym(numnodes)]) <= 0 (signed), and falls through when at(=[sym(numnodes)]) > 0 (signed).
  The `beq` branch at 0xb69c targets 0xb7b8 and is always taken.
  The `beq` branch at 0xb6b8 targets 0xb788, is taken when s3(?) >= t8(=[sym(numnodes)]) (signed), and falls through when s3(?) < t8(=[sym(numnodes)]) (signed).
  The `beq` branch at 0xb6d8 targets 0xb778, is taken when s5(=0xc000) == t8(?), and falls through when s5(=0xc000) != t8(?).
  The `beq` branch at 0xb6f8 targets 0xb704, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0xb704 targets 0xb6a4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xb70c targets 0xb728 and is always taken.
  The `beq` branch at 0xb71c targets 0xb6a4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xb73c targets 0xb74c, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xb74c targets 0xb6a4, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0xb768 targets 0xb714, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0xb770 targets 0xb71c and is always taken.
  The `beq` branch at 0xb780 targets 0xb704 and is always taken.
  The `beq` branch at 0xb7c0 targets 0xb6c4 and is always taken.
  The return at 0xb7b0 has v0 = ret(hubio_init).

- `io_init_done` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb8ec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb8ec-0xb91c (48 bytes).
  It occupies 48 bytes.
  The `jal` at 0xb8f8 calls vsema with a0=sym(.bss)+1792, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xb900 calls restorenoderun with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jal` at 0xb908 calls sthread_exit with a0=?, a1=?, a2=?, a3=?.
  The return at 0xb914 has v0 = ret(sthread_exit).

- `early_probe_for_widget` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb91c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb91c-0xb9b0 (148 bytes).
  It occupies 148 bytes.
  The `lh` at 0xb940 loads 2 bytes from ?.
  The `ld` at 0xb950 loads 8 bytes from table(0x9200000001c00128) +0x0.
  The `lw` at 0xb96c loads 4 bytes from table(0x9200000000000004) +0x0.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x4, including `sw` at 0xb974, `sw` at 0xb9a4.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x8, including `sw` at 0xb984, `sw` at 0xb9a0.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0xb98c, `sw` at 0xb9ac.
  The `jal` at 0xb934 calls hwgraph_info_get_LBL with a0=a0 at entry (arg0), a1=sym(.rodata)+4936, a2=sp-32, a3=a3 at entry (arg3).
  The `beq` branch at 0xb964 targets 0xb99c, is taken when (a3(=entry(0x9200000001c00128)) & 0x2000) == 0, and falls through when (a3(=entry(0x9200000001c00128)) & 0x2000) != 0.
  The `beq` branch at 0xb9a8 targets 0xb990 and is always taken.
  The return at 0xb994 has v0 = ret(hwgraph_info_get_LBL).

- `xwidget_inventory_add` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb9b0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb9b0-0xb9f0 (64 bytes).
  It occupies 64 bytes.
  The `lbu` at 0xb9cc loads 1 byte from a1 (arg1 at entry) +0x5.
  The `lbu` at 0xb9d0 loads 1 byte from a1 (arg1 at entry) +0xa.
  The `lh` at 0xb9d8 loads 2 bytes from a1 (arg1 at entry) +0xe.
  The `jal` at 0xb9e0 calls device_inventory_add with a0=a0 at entry (arg0), a1=0xb, a2=[a1+5]:1, a3=[a1+14]:2, a7=a1 at entry (arg1).
  The `bne` branch at 0xb9bc targets 0xb9cc, is taken when a1 != 0, and falls through when a1 == 0.
  The `beq` branch at 0xb9e8 targets 0xb9c4 and is always taken.
  The return at 0xb9c4 has v0 = one of ?, ret(device_inventory_add).

- `io_xswitch_widget_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xb9f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xb9f0-0xc184 (1940 bytes).
  It occupies 1940 bytes.
  The `lh` at 0xba44 loads 2 bytes from ?.
  9 such `ld` accesses load 8 bytes from abs 0xffffffffffffc400, including `ld` at 0xba50, `ld` at 0xbb38, `ld` at 0xbc48.
  The `lh` at 0xba58 loads 2 bytes from table(sym(nasid_to_compact_node)) +0x0.
  7 such `ld` accesses load 8 bytes from [-0x3c00]:8 +0x0, including `ld` at 0xba5c, `ld` at 0xbb3c, `ld` at 0xbc4c.
  6 such `ld` accesses load 8 bytes from ([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3)) +0x0, including `ld` at 0xba68, `ld` at 0xbc54, `ld` at 0xbd4c.
  The `lh` at 0xba74 loads 2 bytes from [([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8 +0x8600.
  3 such `lbu` accesses load 1 byte from ?, including `lbu` at 0xba8c, `lbu` at 0xbde8, `lbu` at 0xbdf0.
  The `ld` at 0xbae0 loads 8 bytes from table(0x9000000034000000) +0x0.
  The `ld` at 0xbb04 loads 8 bytes from (table(0x9600000000000000) | 0x2000) +0x48.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0xbb14, `lw` at 0xbb98, `lw` at 0xbed4.
  The `ld` at 0xbb44 loads 8 bytes from ((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8) +0x0.
  The `lh` at 0xbb4c loads 2 bytes from [((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8 +0x8600.
  The `ld` at 0xbb64 loads 8 bytes from ([[((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2 << 0x21) -0x6fffffffcc000000.
  The `ld` at 0xbb88 loads 8 bytes from (([[((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2 << 0x21)+0x9600000000000000 | 0x2000) +0x48.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0xbc10, `ld` at 0xbc84, `ld` at 0xbcac.
  5 such `lh` accesses load 2 bytes from [([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8 +0x861a, including `lh` at 0xbc6c, `lh` at 0xbd60, `lh` at 0xbd98.
  The `ld` at 0xbf40 loads 8 bytes from abs 0x9000000014000000.
  The `jal` at 0xba10 calls xswitch_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xba38 calls hwgraph_info_get_LBL with a0=a1 at entry (arg1), a1=sym(.rodata)+4936, a2=sp-352, a3=?.
  The `jal` at 0xba9c calls xbow_port_io_enabled with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xbab0 calls xswitch_info_link_ok with a0=ret(xswitch_info_get), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xbac0 calls xswitch_info_master_assignment_get with a0=ret(xswitch_info_get), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xbb28 calls find_lboard_class with a0=?, a1=0x70, a2=?, a3=?.
  The `jal` at 0xbbb0 calls find_lboard_class with a0=?, a1=0x70, a2=?, a3=?.
  The `jal` at 0xbbd4 calls iobrick_module_get_nasid with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xbbe4 calls iobrick_l1type_get_nasid with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xbbf0 calls iobrick_L1bricktype_to_name with a0=ret(iobrick_l1type_get_nasid), a1=?, a2=?, a3=?.
  The `jal` at 0xbc30 calls get_chimera_type with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbc68 calls sprintf with a0=sp-344, a1=sym(.rodata)+4936, a2=[[([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8+34330]:2, a3=ret(iobrick_L1bricktype_to_name).
  The `jal` at 0xbc78 calls hwgraph_path_add with a0=[sym(hwgraph_root)], a1=sp-344, a2=sp-216, a3=?.
  The `jal` at 0xbc98 calls get_chimera_type with a0=?, a1=sym(.rodata)+4936, a2=?, a3=?, a4=0x4000.
  The `jal` at 0xbcd0 calls get_chimera_type with a0=?, a1=?, a2=?, a3=?, a4=0x3, a5=0x8000, a7=0xe.
  The `jal` at 0xbcfc calls hwgraph_info_add_LBL with a0=?, a1=sym(.rodata)+4936, a2=0x5, a3=?.
  The `jal` at 0xbd04 calls kern_malloc with a0=0x20, a1=?, a2=?, a3=?.
  The `jal` at 0xbd0c calls get_elsc with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbd20 calls l1_mfg_string with a0=?, a1=ret(get_elsc), a2=?, a3=a2 at entry (arg2).
  The `jal` at 0xbd30 calls kern_free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbd38 calls sndrv_attach with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbd5c calls sprintf with a0=sp-344, a1=sym(.rodata)+4936, a2=[[([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8+34330]:2, a3=?.
  The `jal` at 0xbd64 calls hwgraph_path_to_vertex with a0=sp-344, a1=?, a2=?, a3=?.
  The `jal` at 0xbd94 calls sprintf with a0=sp-344, a1=sym(.rodata)+4936, a2=[[([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8+34330]:2, a3=ret(iobrick_L1bricktype_to_name).
  The `jal` at 0xbd9c calls hwgraph_path_to_vertex with a0=sp-344, a1=?, a2=?, a3=?.
  The `jal` at 0xbdb8 calls hwgraph_edge_add with a0=?, a1=?, a2=sym(.rodata)+4936, a3=?.
  The `jal` at 0xbe10 calls hwgraph_info_add_LBL with a0=?, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `jal` at 0xbe4c calls sprintf with a0=sp-344, a1=sym(.rodata)+4936, a2=[[([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8+34330]:2, a3=ret(iobrick_L1bricktype_to_name), a4=sym(.rodata)+4936, a5=a2 at entry (arg2).
  The `jal` at 0xbe68 calls hwgraph_path_add with a0=[sym(hwgraph_root)], a1=sp-344, a2=sp-212, a3=?.
  The `jal` at 0xbe70 calls hwgraph_connectpt_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbe7c calls device_master_set with a0=ret(hwgraph_connectpt_get), a1=a1 at entry (arg1), a2=?, a3=?.
  The `jal` at 0xbe94 calls sprintf with a0=sp-208, a1=sym(.rodata)+4936, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0xbea4 calls hwgraph_edge_add with a0=a0 at entry (arg0), a1=?, a2=sp-208, a3=?.
  The `jal` at 0xbeb4 calls xswitch_info_vhdl_set with a0=ret(xswitch_info_get), a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xbf14 calls xwidget_inventory_add [0xb9b0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbf54 calls get_chimera_type with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbf68 calls get_chimera_type with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbf7c calls get_chimera_type with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xbfcc calls hub_set_piomode with a0=?, a1=0x2, a2=?, a3=?.
  The `jal` at 0xbff0 calls xwidget_register with a0=sp-200, a1=?, a2=a2 at entry (arg2), a3=a1 at entry (arg1), a5=a3 at entry (arg3).
  The `jal` at 0xc02c calls hwgraph_info_add_LBL with a0=?, a1=sym(.rodata)+4936, a2=0x4, a3=?.
  The `jal` at 0xc03c calls xbow_port_io_enabled with a0=?, a1=a2 at entry (arg2), a2=?, a3=?.
  The `jal` at 0xc074 calls sprintf with a0=sp-344, a1=sym(.rodata)+4936, a2=[[([[-0x3c00]:8]:8 + (entry(sym(nasid_to_compact_node)) << 0x3))]:8+34330]:2, a3=ret(iobrick_L1bricktype_to_name).
  The `jal` at 0xc0b4 calls hwgraph_info_add_LBL with a0=?, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `jal` at 0xc0c4 calls hub_set_piomode with a0=?, a1=0x2, a2=?, a3=?.
  The `jal` at 0xc0e4 calls chk_for_pebrick with a0=?, a1=-0x35, a2=?, a3=?.
  The `jal` at 0xc0f4 calls chk_for_pebrick with a0=[[((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2, a1=-0x35, a2=([[((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2 << 0x21), a3=?.
  The `jal` at 0xc110 calls assfail with a0=sym(.rodata)+4936, a1=sym(.rodata)+4936, a2=0x29a, a3=?.
  The `jal` at 0xc12c calls assfail with a0=sym(.rodata)+4936, a1=sym(.rodata)+4936, a2=0x2da, a3=?.
  The `jal` at 0xc148 calls assfail with a0=sym(.rodata)+4936, a1=sym(.rodata)+4936, a2=0x2de, a3=?.
  The `jal` at 0xc160 calls cmn_err with a0=0x4, a1=sym(.rodata)+4936, a2=sp-344, a3=0x1.
  The `jal` at 0xc174 calls cmn_err with a0=0x4, a1=sym(.rodata)+4936, a2=sp-344, a3=?.
  The `beq` branch at 0xbaa4 targets 0xc03c, is taken when v0(=ret(xbow_port_io_enabled)) == 0, and falls through when v0(=ret(xbow_port_io_enabled)) != 0.
  The `beq` branch at 0xbab8 targets 0xbff8, is taken when v0(=ret(xswitch_info_link_ok)) == 0, and falls through when v0(=ret(xswitch_info_link_ok)) != 0.
  The `bne` branch at 0xbac8 targets 0xbff8, is taken when v0(=ret(xswitch_info_master_assignment_get)) != s4(=a1), and falls through when v0(=ret(xswitch_info_master_assignment_get)) == s4(=a1).
  The `beq` branch at 0xbaec targets 0xc0e4, is taken when t0(=0xc000) == t9(?), and falls through when t0(=0xc000) != t9(?).
  The `beq` branch at 0xbb18 targets 0xc0a4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0xbb30 targets 0xbbbc, is taken when v0(=ret(find_lboard_class)) != 0, and falls through when v0(=ret(find_lboard_class)) == 0.
  The `beq` branch at 0xbb54 targets 0xbbbc, is taken when a0(=[[((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2) == a2(=-0x1), and falls through when a0(=[[((entry(sym(nasid_to_compact_node)) << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2) != a2(=-0x1).
  The `beq` branch at 0xbb70 targets 0xc0f4, is taken when a1(=0xc000) == a3(?), and falls through when a1(=0xc000) != a3(?).
  The `beq` branch at 0xbb9c targets 0xbbb0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0xbbc0 targets 0xc104, is taken when a1(=ret(find_lboard_class)) == 0, and falls through when a1(=ret(find_lboard_class)) != 0.
  The `bltz` branch at 0xbc04 targets 0xbe20, is taken when a0(?) < 0 (signed), and falls through when a0(?) >= 0 (signed).
  The `bne` branch at 0xbc1c targets 0xbc30, is taken when v0(=0x8000) != a1(?), and falls through when v0(=0x8000) == a1(?).
  The `beq` branch at 0xbc28 targets 0xc054, is taken when s0(=a2) == a2(=0xb), and falls through when s0(=a2) != a2(=0xb).
  The `beq` branch at 0xbc38 targets 0xbc48, is taken when v0(=ret(get_chimera_type)) == 0, and falls through when v0(=ret(get_chimera_type)) != 0.
  The `beq` branch at 0xbc40 targets 0xc054, is taken when s0(=a2) == a3(=0xa), and falls through when s0(=a2) != a3(=0xa).
  The `beq` branch at 0xbc90 targets 0xc024, is taken when a3(?) == a4(=0x4000), and falls through when a3(?) != a4(=0x4000).
  The `beq` branch at 0xbca4 targets 0xc020, is taken when v0(=ret(get_chimera_type)) == a4(=0x3), and falls through when v0(=ret(get_chimera_type)) != a4(=0x3).
  The `bne` branch at 0xbcb8 targets 0xbcd0, is taken when a5(=0x8000) != a6(?), and falls through when a5(=0x8000) == a6(?).
  The `beq` branch at 0xbcc0 targets 0xc020, is taken when s0(=a2) == a7(=0xe), and falls through when s0(=a2) != a7(=0xe).
  The `beq` branch at 0xbcc8 targets 0xc024, is taken when s0(=a2) == t0(=0xf), and falls through when s0(=a2) != t0(=0xf).
  The `beq` branch at 0xbcd8 targets 0xbcf4, is taken when v0(=ret(get_chimera_type)) == 0, and falls through when v0(=ret(get_chimera_type)) != 0.
  The `beq` branch at 0xbce4 targets 0xc020, is taken when s0(=a2) == t1(=0xc), and falls through when s0(=a2) != t1(=0xc).
  The `beq` branch at 0xbcec targets 0xc020, is taken when s0(=a2) == t2(=0xf), and falls through when s0(=a2) != t2(=0xf).
  The `beq` branch at 0xbd28 targets 0xc0ac, is taken when v0(=ret(l1_mfg_string)) == 0, and falls through when v0(=ret(l1_mfg_string)) != 0.
  The `beq` branch at 0xbd6c targets 0xc120, is taken when v0(=ret(hwgraph_path_to_vertex)) == 0, and falls through when v0(=ret(hwgraph_path_to_vertex)) != 0.
  The `beq` branch at 0xbda4 targets 0xc13c, is taken when v0(=ret(hwgraph_path_to_vertex)) == 0, and falls through when v0(=ret(hwgraph_path_to_vertex)) != 0.
  The `beq` branch at 0xbdc4 targets 0xbe20, is taken when v0(=ret(hwgraph_edge_add)) == a3(=0x1), and falls through when v0(=ret(hwgraph_edge_add)) != a3(=0x1).
  The `bne` branch at 0xbdcc targets 0xc158, is taken when v0(=ret(hwgraph_edge_add)) != 0, and falls through when v0(=ret(hwgraph_edge_add)) == 0.
  The `beq` branch at 0xbdf8 targets 0xbe04, is taken when (a4(?) & 0x2) == 0, and falls through when (a4(?) & 0x2) != 0.
  The `bne` branch at 0xbe18 targets 0xc170, is taken when v0(=ret(hwgraph_info_add_LBL)) != 0, and falls through when v0(=ret(hwgraph_info_add_LBL)) == 0.
  The `beq` branch at 0xbebc targets 0xc084, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0xbf20 targets 0xc090, is taken when t8(=[sym(force_fire_and_forget)]) == 0, and falls through when t8(=[sym(force_fire_and_forget)]) != 0.
  The `beq` branch at 0xbf28 targets 0xbfcc, is taken when s2(?) == t9(=0xc104), and falls through when s2(?) != t9(=0xc104).
  The `beq` branch at 0xbf34 targets 0xbfcc, is taken when s2(?) == ra(=0xc105), and falls through when s2(?) != ra(=0xc105).
  The `beq` branch at 0xbf4c targets 0xbfcc, is taken when at(?) == v0(=0x4000), and falls through when at(?) != v0(=0x4000).
  The `beq` branch at 0xbf60 targets 0xbfcc, is taken when v0(=ret(get_chimera_type)) == v1(=0x2), and falls through when v0(=ret(get_chimera_type)) != v1(=0x2).
  The `beq` branch at 0xbf74 targets 0xbfcc, is taken when v0(=ret(get_chimera_type)) == a0(=0x3), and falls through when v0(=ret(get_chimera_type)) != a0(=0x3).
  The `beq` branch at 0xbf88 targets 0xbfcc, is taken when v0(=ret(get_chimera_type)) == a1(=0x5), and falls through when v0(=ret(get_chimera_type)) != a1(=0x5).
  The `beq` branch at 0xbf94 targets 0xc0d4, is taken when s2(?) == a2(=0xd102), and falls through when s2(?) != a2(=0xd102).
  The `bne` branch at 0xbfa0 targets 0xbfe0, is taken when s2(?) != a3(=0xd112), and falls through when s2(?) == a3(=0xd112).
  The `bne` branch at 0xbfac targets 0xbfe0, is taken when s5(?) != a4(=0x24), and falls through when s5(?) == a4(=0x24).
  The `beq` branch at 0xbfc4 targets 0xbfdc, is taken when (a5(?) & 0x2) == 0, and falls through when (a5(?) & 0x2) != 0.
  The `bne` branch at 0xbfd4 targets 0xc0c4, is taken when s1(?) != s8(?), and falls through when s1(?) == s8(?).
  The `beq` branch at 0xc034 targets 0xbd04 and is always taken.
  The `bne` branch at 0xc044 targets 0xbab0, is taken when v0(=ret(xbow_port_io_enabled)) != 0, and falls through when v0(=ret(xbow_port_io_enabled)) == 0.
  The `beq` branch at 0xc04c targets 0xbffc and is always taken.
  The `beq` branch at 0xc07c targets 0xbc74 and is always taken.
  The `beq` branch at 0xc088 targets 0xbed4 and is always taken.
  The `bne` branch at 0xc094 targets 0xbf28, is taken when s2(?) != v1(=0xc102), and falls through when s2(?) == v1(=0xc102).
  The `beq` branch at 0xc09c targets 0xbfcc and is always taken.
  The `beq` branch at 0xc0a4 targets 0xbb28 and is always taken.
  The `beq` branch at 0xc0bc targets 0xbd38 and is always taken.
  The `beq` branch at 0xc0cc targets 0xbfe0 and is always taken.
  The `bne` branch at 0xc0d4 targets 0xbfa0, is taken when s5(?) != v0(=0x24), and falls through when s5(?) == v0(=0x24).
  The `beq` branch at 0xc0dc targets 0xbfb8 and is always taken.
  The `beq` branch at 0xc0ec targets 0xbb28 and is always taken.
  The `beq` branch at 0xc0fc targets 0xbbb0 and is always taken.
  The `beq` branch at 0xc118 targets 0xbbd4 and is always taken.
  The `beq` branch at 0xc134 targets 0xbd78 and is always taken.
  The `beq` branch at 0xc150 targets 0xbdb0 and is always taken.
  The `beq` branch at 0xc168 targets 0xbdd4 and is always taken.
  The `beq` branch at 0xc17c targets 0xbe24 and is always taken.
  The return at 0xc018 has v0 = one of ?, ret(xbow_port_io_enabled).

- `io_init_xswitch_widgets` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xc184 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xc184-0xc22c (168 bytes).
  It occupies 168 bytes.
  The `ld` at 0xc1c0 loads 8 bytes from abs 0xffffffffffffc400.
  The `ld` at 0xc1c4 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `ld` at 0xc1cc loads 8 bytes from ([[-0x3c00]:8]:8 + (a1 << 0x3)) +0x0.
  The `lw` at 0xc1e4 loads 4 bytes from [([[-0x3c00]:8]:8 + (a1 << 0x3))]:8 +0x8c80.
  The `jal` at 0xc1a8 calls async_attach_new with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xc1e0 calls io_xswitch_widget_init with a0=a0 at entry (arg0), a1=[[([[-0x3c00]:8]:8 + (a1 << 0x3))]:8+35968], a2=?, a3=ret(async_attach_new).
  The `jal` at 0xc1fc calls async_attach_waitall with a0=ret(async_attach_new), a1=?, a2=?, a3=?.
  The `jal` at 0xc214 calls async_attach_free with a0=ret(async_attach_new), a1=?, a2=?, a3=?.
  The `bne` branch at 0xc1f4 targets 0xc1c0, is taken when s0(?) < 0x10 (signed), and falls through when s0(?) >= 0x10 (signed).
  The return at 0xc224 has v0 = ret(async_attach_free).

- `io_link_xswitch_widgets` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xc22c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xc22c-0xc4ac (640 bytes).
  It occupies 640 bytes.
  The `lh` at 0xc264 loads 2 bytes from (sym(compact_to_nasid_node) + (a1 + a1)) +0x0.
  3 such `ld` accesses load 8 bytes from abs 0xffffffffffffc400, including `ld` at 0xc26c, `ld` at 0xc2f4, `ld` at 0xc3c4.
  3 such `ld` accesses load 8 bytes from [-0x3c00]:8 +0x0, including `ld` at 0xc280, `ld` at 0xc2f8, `ld` at 0xc3c8.
  3 such `ld` accesses load 8 bytes from ([[-0x3c00]:8]:8 + (a1 << 0x3)) +0x0, including `ld` at 0xc29c, `ld` at 0xc300, `ld` at 0xc3d0.
  The `lh` at 0xc2b4 loads 2 bytes from [([[-0x3c00]:8]:8 + (a1 << 0x3))]:8 +0x8600.
  2 such `lh` accesses load 2 bytes from [([[-0x3c00]:8]:8 + (a1 << 0x3))]:8 +0x861a, including `lh` at 0xc30c, `lh` at 0xc3dc.
  2 such `sw` accesses store 4 bytes to ret(find_lboard_module) +0x90, including `sw` at 0xc348, `sw` at 0xc43c.
  The `ld` at 0xc388 loads 8 bytes from ([(sym(compact_to_nasid_node) + (a1 + a1))]:2 << 0x21) -0x6fffffffcc000000.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0xc3a0, `ld` at 0xc3fc, `ld` at 0xc414.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0xc3b0, `lw` at 0xc420.
  The `jal` at 0xc308 calls find_lboard_module with a0=?, a1=[[([[-0x3c00]:8]:8 + (a1 << 0x3))]:8+34330]:2, a2=?, a3=?.
  The `jal` at 0xc324 calls sprintf with a0=sp-288, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `jal` at 0xc334 calls hwgraph_traverse with a0=a0 at entry (arg0), a1=sp-288, a2=sp-160, a3=?.
  The `jal` at 0xc368 calls sprintf with a0=sp-288, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `jal` at 0xc378 calls hwgraph_traverse with a0=a0 at entry (arg0), a1=sp-288, a2=sp-160, a3=?.
  The `jal` at 0xc3d8 calls find_lboard_module with a0=?, a1=[[([[-0x3c00]:8]:8 + (a1 << 0x3))]:8+34330]:2, a2=?, a3=?.
  The `jal` at 0xc470 calls chk_for_pebrick with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xc480 calls chk_for_pebrick with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xc49c calls cmn_err with a0=0x4, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `beq` branch at 0xc2e8 targets 0xc35c and is always taken.
  The `beq` branch at 0xc314 targets 0xc490, is taken when s2(=ret(find_lboard_module)) == 0, and falls through when s2(=ret(find_lboard_module)) != 0.
  The `beq` branch at 0xc33c targets 0xc438, is taken when v0(=ret(hwgraph_traverse)) == 0, and falls through when v0(=ret(hwgraph_traverse)) != 0.
  The `beq` branch at 0xc358 targets 0xc440, is taken when s0(?) >= 0x10 (signed), and falls through when s0(?) < 0x10 (signed).
  The `bne` branch at 0xc380 targets 0xc34c, is taken when v0(=ret(hwgraph_traverse)) != 0, and falls through when v0(=ret(hwgraph_traverse)) == 0.
  The `beq` branch at 0xc398 targets 0xc470, is taken when s4(=0xc000) == a2(?), and falls through when s4(=0xc000) != a2(?).
  The `beq` branch at 0xc3b8 targets 0xc3c4, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0xc3e4 targets 0xc314, is taken when v0(=ret(find_lboard_module)) != 0, and falls through when v0(=ret(find_lboard_module)) == 0.
  The `beq` branch at 0xc3f4 targets 0xc314, is taken when a2(?) == a3(=-0x1), and falls through when a2(?) != a3(=-0x1).
  The `beq` branch at 0xc408 targets 0xc480, is taken when s4(=0xc000) == a4(?), and falls through when s4(=0xc000) != a4(?).
  The `bne` branch at 0xc428 targets 0xc2f0, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xc430 targets 0xc2f4 and is always taken.
  The `beq` branch at 0xc438 targets 0xc34c and is always taken.
  The `beq` branch at 0xc478 targets 0xc3c4 and is always taken.
  The `beq` branch at 0xc488 targets 0xc2f4 and is always taken.
  The `beq` branch at 0xc4a4 targets 0xc444 and is always taken.
  The return at 0xc468 has v0 = one of ret(hwgraph_traverse), ret(cmn_err).

- `do_io_init_node` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xc4ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xc4ac-0xc7b4 (776 bytes).
  It occupies 776 bytes.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc400, including `ld` at 0xc4ac, `ld` at 0xc6a8.
  2 such `ld` accesses load 8 bytes from [-0x3c00]:8 +0x0, including `ld` at 0xc4b4, `ld` at 0xc6b4.
  The `ld` at 0xc4c8 loads 8 bytes from ((a0 << 0x3) + [[-0x3c00]:8]:8) +0x0.
  The `lw` at 0xc4dc loads 4 bytes from [((a0 << 0x3) + [[-0x3c00]:8]:8)]:8 +0x8c80.
  The `ld` at 0xc4f4 loads 8 bytes from [((a0 << 0x3) + [[-0x3c00]:8]:8)]:8 +0x85e8.
  4 such `ld` accesses load 8 bytes from ?, including `ld` at 0xc514, `ld` at 0xc520, `ld` at 0xc52c.
  2 such `lh` accesses load 2 bytes from (sym(compact_to_nasid_node) + (a0 + a0)) +0x0, including `lh` at 0xc554, `lh` at 0xc598.
  The `lw` at 0xc5a8 loads 4 bytes from ([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) -0x6dffffff1ffffffc.
  3 such `sb` accesses store 1 byte to [((a0 << 0x3) + [[-0x3c00]:8]:8)]:8 +0x863c, including `sb` at 0xc5ec, `sb` at 0xc778, `sb` at 0xc7a8.
  The `sw` at 0xc614 stores 4 bytes to [((a0 << 0x3) + [[-0x3c00]:8]:8)]:8 +0x8640.
  2 such `lbu` accesses load 1 byte from [((a0 << 0x3) + [[-0x3c00]:8]:8)]:8 +0x863c, including `lbu` at 0xc668, `lbu` at 0xc7b0.
  The `lbu` at 0xc67c loads 1 byte from ?.
  The `lh` at 0xc690 loads 2 bytes from [((a0 << 0x3) + [[-0x3c00]:8]:8)]:8 +0x8600.
  The `lh` at 0xc6b0 loads 2 bytes from (sym(nasid_to_compact_node) + ([[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2 + [[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2)) +0x0.
  The `lw` at 0xc6dc loads 4 bytes from table(0x8c80) +0x0.
  2 such `lw` accesses load 4 bytes from ([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) -0x6dffffff1fffffdc, including `lw` at 0xc768, `lw` at 0xc78c.
  The `jal` at 0xc4ec calls hubdev_docallouts with a0=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xc50c calls router_init with a0=a0 at entry (arg0), a1=0x0, a2=?, a3=?.
  The `jal` at 0xc550 calls eeprom_vertex_info_set with a0=0x100, a1=[(sym(compact_to_nasid_node) + (a0 + a0))]:2, a2=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a3=0x0, a4=0x0.
  The `jal` at 0xc55c calls early_probe_for_widget [0xb91c] with a0=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a1=sp-112, a2=?, a3=?.
  The `jal` at 0xc57c calls hwgraph_path_add with a0=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a1=sym(.rodata)+4936, a2=sp-96, a3=?.
  The `jal` at 0xc590 calls hwgraph_edge_add with a0=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a1=?, a2=sym(.rodata)+4936, a3=?.
  The `jal` at 0xc5f8 calls sprintf with a0=sp-88, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `jal` at 0xc608 calls hwgraph_path_add with a0=?, a1=sp-88, a2=sp-72, a3=?.
  The `jal` at 0xc640 calls device_master_set with a0=?, a1=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a2=?, a3=?.
  The `jal` at 0xc658 calls hwgraph_info_get_LBL with a0=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a1=sym(.rodata)+4936, a2=sp-64, a3=?.
  The `jal` at 0xc678 calls xwidget_register with a0=sp-112, a1=?, a2=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34364]:1, a3=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a5=0x0.
  The `jal` at 0xc688 calls volunteer_for_widgets [0xb2b0] with a0=?, a1=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a2=?, a3=?.
  The `jal` at 0xc6d8 calls volunteer_for_widgets [0xb2b0] with a0=?, a1=entry(0x8c80), a2=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2, a3=?, a5=-0x1.
  The `jal` at 0xc6f4 calls psema with a0=table(0x8608), a1=0x19, a2=0x8608, a3=?.
  The `jal` at 0xc700 calls io_init_xswitch_widgets [0xc184] with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0xc70c calls io_link_xswitch_widgets [0xc22c] with a0=?, a1=a0 at entry (arg0), a2=?, a3=?.
  The `jal` at 0xc748 calls assign_widgets_to_volunteers [0xb3d8] with a0=?, a1=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a2=?, a3=?.
  The `jal` at 0xc758 calls vsema with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xc7a4 calls cmn_err with a0=0x0, a1=sym(.rodata)+4936, a2=?, a3=?, a4=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+35968], a6=([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21)+0x92000000e0000000, a7=0xd002.
  The `bne` branch at 0xc4f8 targets 0xc520, is taken when s0(=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34280]:8) != 0, and falls through when s0(=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34280]:8) == 0.
  The `beq` branch at 0xc500 targets 0xc538 and is always taken.
  The `beq` branch at 0xc518 targets 0xc538, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0xc524 targets 0xc508, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0xc530 targets 0xc520, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0xc56c targets 0xc714, is taken when t9(?) == ra(=-0x1), and falls through when t9(?) != ra(=-0x1).
  The `beq` branch at 0xc5bc targets 0xc768, is taken when a2(?) == a3(=0xc002), and falls through when a2(?) != a3(=0xc002).
  The `beq` branch at 0xc5c8 targets 0xc768, is taken when a2(?) == a7(=0xd002), and falls through when a2(?) != a7(=0xd002).
  The `beq` branch at 0xc5d0 targets 0xc5e8, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0xc5d8 targets 0xc5e8, is taken when a2(?) == a0(=0xd000), and falls through when a2(?) != a0(=0xd000).
  The `bne` branch at 0xc5e0 targets 0xc78c, is taken when a2(?) != a1(=0xd100), and falls through when a2(?) == a1(=0xd100).
  The `beq` branch at 0xc61c targets 0xc77c, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0xc628 targets 0xc734, is taken when a0(?) == a3(=0xd000), and falls through when a0(?) != a3(=0xd000).
  The `beq` branch at 0xc634 targets 0xc730, is taken when a0(?) == a4(=0xd100), and falls through when a0(?) != a4(=0xd100).
  The `bne` branch at 0xc648 targets 0xc6e8, is taken when v0(=ret(device_master_set)) != 0, and falls through when v0(=ret(device_master_set)) == 0.
  The `beq` branch at 0xc680 targets 0xc714, is taken when s0(=one of 0x0, 0x1) == 0, and falls through when s0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0xc698 targets 0xc744, is taken when a2(=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2) == a5(=-0x1), and falls through when a2(=[[((a0 << 0x3) + [[-0x3c00]:8]:8)]:8+34304]:2) != a5(=-0x1).
  The `beq` branch at 0xc6e0 targets 0xc748 and is always taken.
  The `bne` branch at 0xc734 targets 0xc63c, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0xc73c targets 0xc63c and is always taken.
  The `beq` branch at 0xc750 targets 0xc700, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0xc760 targets 0xc700 and is always taken.
  The `beq` branch at 0xc774 targets 0xc5f0 and is always taken.
  The `bne` branch at 0xc77c targets 0xc628, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0xc784 targets 0xc73c and is always taken.
  The `beq` branch at 0xc7ac targets 0xc5f0 and is always taken.
  The return at 0xc728 has v0 = one of ret(early_probe_for_widget), ret(xwidget_register), ret(io_link_xswitch_widgets).

- `io_init_node` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xc8e4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xc8e4-0xc93c (88 bytes).
  It occupies 88 bytes.
  The `jal` at 0xc8f0 calls setnoderun with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0xc910 calls do_io_init_node [0xc4ac] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0xc918 calls io_init_pebrick with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0xc924 calls io_init_done [0xb8ec] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0xc934 has v0 = ret(io_init_done).

- `do_init_hub_provider` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xd0ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xd0ac-0xd13c (144 bytes).
  It occupies 144 bytes.
  The `ld` at 0xd0ac loads 8 bytes from abs 0xffffffffffffc400.
  The `ld` at 0xd0b0 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `ld` at 0xd0c0 loads 8 bytes from ([[-0x3c00]:8]:8 + (a0 << 0x3)) +0x0.
  The `lw` at 0xd0d0 loads 4 bytes from [([[-0x3c00]:8]:8 + (a0 << 0x3))]:8 +0x8c80.
  The `jal` at 0xd0e8 calls early_probe_for_widget [0xb91c] with a0=[[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+35968], a1=sp-32, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `jal` at 0xd104 calls xtalk_provider_register with a0=[[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+35968], a1=sym(hub_provider), a2=?, a3=?.
  The `jal` at 0xd10c calls xtalk_provider_startup with a0=[[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+35968], a1=?, a2=?, a3=?.
  The `jal` at 0xd12c calls cmn_err with a0=0x4, a1=sym(.rodata)+4936, a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `beq` branch at 0xd0dc targets 0xd124, is taken when at(=-0x1) == s0(=[[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+35968]), and falls through when at(=-0x1) != s0(=[[([[-0x3c00]:8]:8 + (a0 << 0x3))]:8+35968]).
  The `beq` branch at 0xd0f8 targets 0xd118, is taken when t9(?) == ra(=-0x1), and falls through when t9(?) != ra(=-0x1).
  The `beq` branch at 0xd134 targets 0xd118 and is always taken.
  The return at 0xd11c has v0 = one of ret(early_probe_for_widget), ret(xtalk_provider_startup), ret(cmn_err).

- `init_hub_provider` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xd26c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xd26c-0xd2c0 (84 bytes).
  It occupies 84 bytes.
  The `jal` at 0xd284 calls do_init_hub_provider with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xd28c calls do_init_hub_provider_pebrick with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0xd278 targets 0xd2b0, is taken when at(=[sym(maxnodes)]) <= 0 (signed), and falls through when at(=[sym(maxnodes)]) > 0 (signed).
  The `bne` branch at 0xd2a8 targets 0xd284, is taken when s0(?) < v0(=[sym(maxnodes)]) (signed), and falls through when s0(?) >= v0(=[sym(maxnodes)]) (signed).
  The return at 0xd2b8 has v0 = ?.

- `init_all_devices` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xd2c0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xd2c0-0xd498 (472 bytes).
  It occupies 472 bytes.
  The `jal` at 0xd2e0 calls init_sema with a0=sym(.bss)+1792, a1=0x0, a2=sym(.rodata)+4936, a3=-0x1.
  The `jal` at 0xd2e8 calls init_hub_provider with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xd338 calls sprintf with a0=sp-80, a1=sym(.rodata)+4936, a2=?, a3=?.
  The `jal` at 0xd368 calls sthread_create with a0=sp-80, a1=0x0, a2=0x4000, a3=0x0, a4=[sym(io_init_pri)], a5=0x1000, a6=sym(io_init_node).
  The `jal` at 0xd390 calls psema with a0=sym(.bss)+1792, a1=0x19, a2=?, a3=?.
  The `jal` at 0xd3b0 calls psema with a0=sym(.bss)+1792, a1=0x19, a2=?, a3=?.
  The `jal` at 0xd3d8 calls update_node_information with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xd3fc calls baseio_ctlr_num_set [0xcdec] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xd404 calls sys_critical_graph_init [0xcbc0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0xd40c calls kopt_find with a0=sym(.rodata)+4936, a1=?, a2=?, a3=?.
  The `jal` at 0xd414 calls atoi with a0=ret(kopt_find), a1=?, a2=?, a3=?.
  The `jal` at 0xd424 calls hwgraph_fastinfo_get with a0=[sym(.sdata)+96], a1=?, a2=?, a3=?.
  The `jal` at 0xd43c calls hwgraph_info_get_LBL with a0=[sym(.sdata)+96], a1=sym(.rodata)+4936, a2=sp-64, a3=?.
  The `jal` at 0xd450 calls ef_ifattach with a0=ret(hwgraph_fastinfo_get), a1=0x0, a2=?, a3=?.
  The `jalr` at 0xd488 calls (unknown callee) with a0=ret(hwgraph_fastinfo_get), a1=0x0, a2=?, a3=?.
  The `blez` branch at 0xd304 targets 0xd478, is taken when v0(=[sym(maxnodes)]) <= 0 (signed), and falls through when v0(=[sym(maxnodes)]) > 0 (signed).
  The `beq` branch at 0xd310 targets 0xd330 and is always taken.
  The `beq` branch at 0xd32c targets 0xd3a8, is taken when s0(?) >= v0(=[sym(maxnodes)]) (signed), and falls through when s0(?) < v0(=[sym(maxnodes)]) (signed).
  The `beq` branch at 0xd37c targets 0xd318, is taken when v0(=[sym(io_init_node_threads)]) == 0, and falls through when v0(=[sym(io_init_node_threads)]) != 0.
  The `bne` branch at 0xd388 targets 0xd318, is taken when s1(?) < v0(=[sym(io_init_node_threads)]) (signed), and falls through when s1(?) >= v0(=[sym(io_init_node_threads)]) (signed).
  The `beq` branch at 0xd3a0 targets 0xd318 and is always taken.
  The `blez` branch at 0xd3a8 targets 0xd3d0, is taken when s1(?) <= 0 (signed), and falls through when s1(?) > 0 (signed).
  The `bgtz` branch at 0xd3c4 targets 0xd3b0, is taken when s1(?) > 0 (signed), and falls through when s1(?) <= 0 (signed).
  The `blez` branch at 0xd3d0 targets 0xd3fc, is taken when v0(=[sym(maxnodes)]) <= 0 (signed), and falls through when v0(=[sym(maxnodes)]) > 0 (signed).
  The `bne` branch at 0xd3f4 targets 0xd3d8, is taken when s0(?) < t8(=[sym(maxnodes)]) (signed), and falls through when s0(?) >= t8(=[sym(maxnodes)]) (signed).
  The `beq` branch at 0xd41c targets 0xd458, is taken when v0(=ret(atoi)) == 0, and falls through when v0(=ret(atoi)) != 0.
  The `beq` branch at 0xd42c targets 0xd458, is taken when v0(=ret(hwgraph_fastinfo_get)) == 0, and falls through when v0(=ret(hwgraph_fastinfo_get)) != 0.
  The `beq` branch at 0xd444 targets 0xd484, is taken when v0(=ret(hwgraph_info_get_LBL)) == 0, and falls through when v0(=ret(hwgraph_info_get_LBL)) != 0.
  The `beq` branch at 0xd47c targets 0xd3d0 and is always taken.
  The `beq` branch at 0xd490 targets 0xd45c and is always taken.
  The return at 0xd470 has v0 = one of ?, ret(?).

- `build_cpumap` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xe8bc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xe8bc-0xe9c4 (264 bytes).
  It occupies 264 bytes.
  3 such `sh` accesses store 2 bytes to ?, including `sh` at 0xe8e8, `sh` at 0xe90c, `sh` at 0xe9a8.
  The `jal` at 0xe970 calls cnode_slice_to_cpuid with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0xe8d4 targets 0xe928, is taken when at(=[sym(numcpus)]) <= 0 (signed), and falls through when at(=[sym(numcpus)]) > 0 (signed).
  The `beq` branch at 0xe8fc targets 0xe928, is taken when a1(?) >= v0(=[sym(numcpus)]) (signed), and falls through when a1(?) < v0(=[sym(numcpus)]) (signed).
  The `bne` branch at 0xe920 targets 0xe8e0, is taken when a1(?) < a4(=[sym(numcpus)]) (signed), and falls through when a1(?) >= a4(=[sym(numcpus)]) (signed).
  The `bgtz` branch at 0xe934 targets 0xe960, is taken when a3(=[sym(numnodes)]) > 0 (signed), and falls through when a3(=[sym(numnodes)]) <= 0 (signed).
  The `beq` branch at 0xe93c targets 0xe9ac and is always taken.
  The `beq` branch at 0xe958 targets 0xe9ac, is taken when s2(?) >= a4(=[sym(numnodes)]) (signed), and falls through when s2(?) < a4(=[sym(numnodes)]) (signed).
  The `beq` branch at 0xe960 targets 0xe96c and is always taken.
  The `beq` branch at 0xe968 targets 0xe944, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `bltz` branch at 0xe994 targets 0xe968, is taken when a5(?) < 0 (signed), and falls through when a5(?) >= 0 (signed).
  The `beq` branch at 0xe99c targets 0xe968, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0xe9a4 targets 0xe968 and is always taken.
  The return at 0xe9bc has v0 = one of ?, ret(cnode_slice_to_cpuid).

- `gen_region_mask` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xe9c4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xe9c4-0xea3c (120 bytes).
  It occupies 120 bytes.
  2 such `sd` accesses store 8 bytes to a0 (arg0 at entry) +0x0, including `sd` at 0xe9c4, `sd` at 0xea1c.
  The `ld` at 0xea08 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jal` at 0xe9f4 calls get_region with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0xe9ec targets 0xea20, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `bne` branch at 0xea18 targets 0xe9f4, is taken when s0(?) < s1(=a1) (signed), and falls through when s0(?) >= s1(=a1) (signed).
  The return at 0xea34 has v0 = ?.

- `get_except_norm` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0xeab0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0xeab0-0xeab8 (8 bytes).
  It occupies 8 bytes.
  The return at 0xeab0 has v0 = sym(exception).

- `cache_tag_ecc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x10d94 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x10d94-0x10e14 (128 bytes).
  It occupies 128 bytes.
  The `lwu` at 0x10dd4 loads 4 bytes from sym(.data) +0x6f8.
  The `beq` branch at 0x10dc8 targets 0x10e0c, is taken when a1(=sym(.data)+1784) == a2(=sym(pi_err_status_cmd)), and falls through when a1(=sym(.data)+1784) != a2(=sym(pi_err_status_cmd)).
  The `beq` branch at 0x10ddc targets 0x10df4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x10dec targets 0x10ddc and is always taken.
  The `beq` branch at 0x10e04 targets 0x10db0 and is always taken.
  The return at 0x10e0c has v0 = ?.

- `snnet_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x12578 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x12578-0x125c4 (76 bytes).
  It occupies 76 bytes.
  The `jal` at 0x12590 calls set_md_outgoing_rq_queue_size [0x1242c] with a0=?, a1=?, a2=?, a3=?.
  The `blez` branch at 0x12584 targets 0x125b4, is taken when at(=[sym(numnodes)]) <= 0 (signed), and falls through when at(=[sym(numnodes)]) > 0 (signed).
  The `bne` branch at 0x125ac targets 0x12590, is taken when s0(?) < v0(=[sym(numnodes)]) (signed), and falls through when s0(?) >= v0(=[sym(numnodes)]) (signed).
  The return at 0x125bc has v0 = ?.

- `restore_cpu_err` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x12cb8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x12cb8-0x12d10 (88 bytes).
  It occupies 88 bytes.
  The `lbu` at 0x12cb8 loads 1 byte from a0 (arg0 at entry) +0x38.
  The `ld` at 0x12ccc loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ld` at 0x12cd0 loads 8 bytes from abs 0x9200000001030100.
  2 such `sb` accesses store 1 byte to a0 (arg0 at entry) +0x39, including `sb` at 0x12ce4, `sb` at 0x12d0c.
  The `ld` at 0x12ce8 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `ld` at 0x12cec loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `ld` at 0x12cf0 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `sd` at 0x12cf4 stores 8 bytes to a0 (arg0 at entry) +0x20.
  The `sd` at 0x12cf8 stores 8 bytes to a0 (arg0 at entry) +0x28.
  The `sd` at 0x12cfc stores 8 bytes to a0 (arg0 at entry) +0x30.
  The `beq` branch at 0x12cc0 targets 0x12d00, is taken when at(=[a0+56]:1) == 0, and falls through when at(=[a0+56]:1) != 0.
  The `beq` branch at 0x12cdc targets 0x12d08, is taken when v0(?) >= v1(=0x55d4a80) (unsigned), and falls through when v0(?) < v1(=0x55d4a80) (unsigned).
  The return at 0x12d00 has v0 = ?.
  The return at 0x12d08 has v0 = ?.

- `restore_hub_err` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x12d10 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x12d10-0x12f0c (508 bytes).
  It occupies 508 bytes.
  The `ld` at 0x12d10 loads 8 bytes from a0 (arg0 at entry) +0x3b0.
  The `ld` at 0x12d24 loads 8 bytes from a0 (arg0 at entry) +0x3a0.
  The `ld` at 0x12d30 loads 8 bytes from a0 (arg0 at entry) +0x3c0.
  The `ld` at 0x12d3c loads 8 bytes from a0 (arg0 at entry) +0x3d0.
  12 such `ld` accesses load 8 bytes from ?, including `ld` at 0x12d50, `ld` at 0x12d7c, `ld` at 0x12d9c.
  7 such `ld` accesses load 8 bytes from abs 0x9200000001030100, including `ld` at 0x12db8, `ld` at 0x12df4, `ld` at 0x12e28.
  6 such `sd` accesses store 8 bytes to ?, including `sd` at 0x12dcc, `sd` at 0x12dd8, `sd` at 0x12e08.
  The `ld` at 0x12e4c loads 8 bytes from a0 (arg0 at entry) +0x138.
  The `ld` at 0x12e60 loads 8 bytes from a0 (arg0 at entry) +0x130.
  The `sd` at 0x12e7c stores 8 bytes to a0 (arg0 at entry) +0x3b0.
  The `ld` at 0x12e80 loads 8 bytes from a0 (arg0 at entry) +0x128.
  The `ld` at 0x12e8c loads 8 bytes from a0 (arg0 at entry) +0x120.
  The `sd` at 0x12ea8 stores 8 bytes to a0 (arg0 at entry) +0x3a0.
  The `ld` at 0x12eac loads 8 bytes from a0 (arg0 at entry) +0x148.
  The `ld` at 0x12eb8 loads 8 bytes from a0 (arg0 at entry) +0x140.
  The `sd` at 0x12ed4 stores 8 bytes to a0 (arg0 at entry) +0x3c0.
  The `ld` at 0x12ed8 loads 8 bytes from a0 (arg0 at entry) +0x158.
  The `ld` at 0x12ee4 loads 8 bytes from a0 (arg0 at entry) +0x150.
  The `sd` at 0x12efc stores 8 bytes to a0 (arg0 at entry) +0x3d0.
  The `ld` at 0x12f00 loads 8 bytes from a0 (arg0 at entry) +0x160.
  The `sd` at 0x12f08 stores 8 bytes to a0 (arg0 at entry) +0x3d8.
  The `beq` branch at 0x12d18 targets 0x12e4c, is taken when at(=[a0+944]:8) == 0, and falls through when at(=[a0+944]:8) != 0.
  The `beq` branch at 0x12d28 targets 0x12e80, is taken when v0(=[a0+928]:8) == 0, and falls through when v0(=[a0+928]:8) != 0.
  The `beq` branch at 0x12d34 targets 0x12eac, is taken when v1(=[a0+960]:8) == 0, and falls through when v1(=[a0+960]:8) != 0.
  The `beq` branch at 0x12d40 targets 0x12ed8, is taken when a1(=[a0+976]:8) == 0, and falls through when a1(=[a0+976]:8) != 0.
  The `beq` branch at 0x12d58 targets 0x12e18, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `bne` branch at 0x12d60 targets 0x12d4c, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x12d68 targets 0x12d74 and is always taken.
  The `beq` branch at 0x12d70 targets 0x12ddc, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x12d88 targets 0x12de4, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x12d90 targets 0x12ddc, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `bne` branch at 0x12da0 targets 0x12d70, is taken when a4(?) != 0, and falls through when a4(?) == 0.
  The `beq` branch at 0x12dac targets 0x12d70, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x12dc4 targets 0x12d70, is taken when a5(?) >= a7(=0x55d4a80) (unsigned), and falls through when a5(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12dd4 targets 0x12d70 and is always taken.
  The `beq` branch at 0x12de8 targets 0x12d90, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x12e00 targets 0x12d90, is taken when t3(?) >= a7(=0x55d4a80) (unsigned), and falls through when t3(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12e10 targets 0x12d90 and is always taken.
  The `beq` branch at 0x12e1c targets 0x12d60, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x12e34 targets 0x12d60, is taken when at(?) >= a7(=0x55d4a80) (unsigned), and falls through when at(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12e44 targets 0x12d60 and is always taken.
  The `beq` branch at 0x12e58 targets 0x12d24, is taken when a2(=[a0+312]:8) == 0, and falls through when a2(=[a0+312]:8) != 0.
  The `beq` branch at 0x12e70 targets 0x12d24, is taken when t0(?) >= a7(=0x55d4a80) (unsigned), and falls through when t0(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12e78 targets 0x12d24 and is always taken.
  The `beq` branch at 0x12e84 targets 0x12d30, is taken when a2(=[a0+296]:8) == 0, and falls through when a2(=[a0+296]:8) != 0.
  The `beq` branch at 0x12e9c targets 0x12d30, is taken when t2(?) >= a7(=0x55d4a80) (unsigned), and falls through when t2(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12ea4 targets 0x12d30 and is always taken.
  The `beq` branch at 0x12eb0 targets 0x12d3c, is taken when a2(=[a0+328]:8) == 0, and falls through when a2(=[a0+328]:8) != 0.
  The `beq` branch at 0x12ec8 targets 0x12d3c, is taken when t8(?) >= a7(=0x55d4a80) (unsigned), and falls through when t8(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12ed0 targets 0x12d3c and is always taken.
  The `beq` branch at 0x12edc targets 0x12d44, is taken when a2(=[a0+344]:8) == 0, and falls through when a2(=[a0+344]:8) != 0.
  The `beq` branch at 0x12ef4 targets 0x12f00, is taken when at(?) >= a7(=0x55d4a80) (unsigned), and falls through when at(?) < a7(=0x55d4a80) (unsigned).
  The `beq` branch at 0x12f04 targets 0x12d44 and is always taken.
  The return at 0x12ddc has v0 = ?.

- `hub_error_clear` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x177ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x177ac-0x17950 (420 bytes).
  It occupies 420 bytes.
  The `sd` at 0x17844 stores 8 bytes to ((a0 << 0x21) + one of 0x9200000001800400, 0x9200000001a00400) +0x0.
  The `sd` at 0x17850 stores 8 bytes to ((a0 << 0x21) + one of 0x9200000001800438, 0x9200000001a00438) +0x0.
  The `sd` at 0x1785c stores 8 bytes to ((a0 << 0x21) + one of 0x9200000001800458, 0x9200000001a00458) +0x0.
  The `sd` at 0x17864 stores 8 bytes to ((a0 << 0x21) + one of 0x92000000018004c8, 0x9200000001a004c8) +0x0.
  The `sd` at 0x1786c stores 8 bytes to ((a0 << 0x21) + one of 0x92000000018004d0, 0x9200000001a004d0) +0x0.
  The `ld` at 0x17884 loads 8 bytes from (a0 << 0x21) -0x6dfffffffe03ffe8.
  The `ld` at 0x17890 loads 8 bytes from (a0 << 0x21) -0x6dfffffffe01ffe8.
  The `ld` at 0x1789c loads 8 bytes from (a0 << 0x21) -0x6dfffffffe07ffa8.
  The `ld` at 0x178a8 loads 8 bytes from (a0 << 0x21) -0x6dfffffffe03ffd8.
  The `ld` at 0x178b8 loads 8 bytes from ?.
  3 such `sd` accesses store 8 bytes to ?, including `sd` at 0x178d8, `sd` at 0x17928, `sd` at 0x17944.
  The `sd` at 0x178e8 stores 8 bytes to (a0 << 0x21) -0x6dfffffffe3ffe08.
  The `ld` at 0x178ec loads 8 bytes from (a0 << 0x21) -0x6dfffffffe3ffec8.
  The `sd` at 0x178fc stores 8 bytes to (a0 << 0x21) -0x6dfffffffe3ffec8.
  The `ld` at 0x17904 loads 8 bytes from (a0 << 0x21) -0x6dfffffffe17fee0.
  The `sd` at 0x17908 stores 8 bytes to (a0 << 0x21) -0x6dfffffffe1fbfb8.
  The `sd` at 0x1790c stores 8 bytes to (a0 << 0x21) -0x6dfffffffe1fbfb0.
  The `bne` branch at 0x17868 targets 0x17800, is taken when a6(?) < 0x2 (signed), and falls through when a6(?) >= 0x2 (signed).
  The `bne` branch at 0x178d4 targets 0x178ac, is taken when a1(?) < 0x9 (signed), and falls through when a1(?) >= 0x9 (signed).
  The `beq` branch at 0x1792c targets 0x17948, is taken when a1(?) >= 0x71 (signed), and falls through when a1(?) < 0x71 (signed).
  The `bne` branch at 0x17940 targets 0x17918, is taken when a1(?) < 0x71 (signed), and falls through when a1(?) >= 0x71 (signed).
  The return at 0x17948 has v0 = (a0 << 0x21)+0x9200000001c00000.

- `hub_error_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x17950 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x17950-0x17f08 (1464 bytes).
  It occupies 1464 bytes.
  The `lh` at 0x17964 loads 2 bytes from (sym(compact_to_nasid_node) + (a0 + a0)) +0x0.
  4 such `sd` accesses store 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800408, 0x9200000001a00408) +0x0, including `sd` at 0x179e8, `sd` at 0x17bbc, `sd` at 0x17c28.
  4 such `sd` accesses store 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800410, 0x9200000001a00410) +0x0, including `sd` at 0x179f4, `sd` at 0x17bd0, `sd` at 0x17c3c.
  The `ld` at 0x179fc loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x92000000018000f0, 0x9200000001a000f0) +0x0.
  The `sd` at 0x17a08 stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x92000000018000f0, 0x9200000001a000f0) +0x0.
  The `ld` at 0x17a2c loads 8 bytes from abs 0xffffffffffffc400.
  The `sw` at 0x17a50 stores 4 bytes to [-0x3c00]:8 +0x884c.
  11 such `ld` accesses load 8 bytes from ((a0 << 0x3) + sym(kl_error_log)) +0x0, including `ld` at 0x17a5c, `ld` at 0x17a78, `ld` at 0x17a80.
  The `ld` at 0x17a6c loads 8 bytes from ((a0 << 0x3) + sym(kl_error_log)) +0x400.
  The `sw` at 0x17a7c stores 4 bytes to [((a0 << 0x3) + sym(kl_error_log))]:8 +0x0.
  2 such `ld` accesses load 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800040, 0x9200000001a00040) +0x0, including `ld` at 0x17b40, `ld` at 0x17cb8.
  The `ld` at 0x17b54 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800050, 0x9200000001a00050) +0x0.
  2 such `ld` accesses load 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800048, 0x9200000001a00048) +0x0, including `ld` at 0x17b64, `ld` at 0x17d04.
  The `ld` at 0x17b74 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800058, 0x9200000001a00058) +0x0.
  The `ld` at 0x17c14 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800408, 0x9200000001a00408) +0x0.
  The `ld` at 0x17c30 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800410, 0x9200000001a00410) +0x0.
  The `sd` at 0x17c7c stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800448, 0x9200000001a00448) +0x0.
  The `sd` at 0x17c84 stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800468, 0x9200000001a00468) +0x0.
  The `ld` at 0x17cd8 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800418, 0x9200000001a00418) +0x0.
  6 such `sd` accesses store 8 bytes to ?, including `sd` at 0x17ce0, `sd` at 0x17cec, `sd` at 0x17d30.
  The `ld` at 0x17d28 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800420, 0x9200000001a00420) +0x0.
  2 such `ld` accesses load 8 bytes from ([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) -0x6dfffffffe7ffbd8, including `ld` at 0x17d50, `ld` at 0x17d5c.
  The `lh` at 0x17d70 loads 2 bytes from abs 0xffffffffffffc42a.
  The `ld` at 0x17d7c loads 8 bytes from (sym(kl_error_log) + ([-0x3bd6]:2 << 0x3)) +0x0.
  The `sd` at 0x17d90 stores 8 bytes to [(sym(kl_error_log) + ([-0x3bd6]:2 << 0x3))]:8 +0x2250.
  The `ld` at 0x17e00 loads 8 bytes from ?.
  The `sh` at 0x17e84 stores 2 bytes to sym(.bss) +0x9f94.
  The `sw` at 0x17e8c stores 4 bytes to sym(.bss) +0x9f90.
  The `jal` at 0x17974 calls hub_error_clear with a0=[(sym(compact_to_nasid_node) + (a0 + a0))]:2, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x17988 calls get_compact_nodeid with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x17a0c calls hubii_eint_init with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x17a14 calls hubni_eint_init with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x17a84 calls recover_error_init with a0=[((a0 << 0x3) + sym(kl_error_log))]:8+8208, a1=[((a0 << 0x3) + sym(kl_error_log))]:8, a2=?, a3=?.
  The `jal` at 0x17a90 calls recover_error_init with a0=[((a0 << 0x3) + sym(kl_error_log))]:8+8336, a1=?, a2=?, a3=?.
  The `jal` at 0x17a9c calls recover_error_init with a0=[((a0 << 0x3) + sym(kl_error_log))]:8+8464, a1=?, a2=?, a3=?.
  The `jal` at 0x17aa8 calls recover_error_init with a0=[((a0 << 0x3) + sym(kl_error_log))]:8+8592, a1=?, a2=?, a3=?.
  The `jal` at 0x17d8c calls cause_intr_connect with a0=0x6, a1=sym(hubpi_eint_handler), a2=0x1, a3=[(sym(kl_error_log) + ([-0x3bd6]:2 << 0x3))]:8, a4=([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21), a7=0x200040.
  The `jal` at 0x17ddc calls kmem_zalloc_node with a0=0x2258, a1=0x1, a2=?, a3=?.
  The `jal` at 0x17df8 calls kmem_zalloc_node with a0=0x40, a1=0x101, a2=?, a3=?.
  The `jal` at 0x17e90 calls spinlock_init with a0=sym(kl_error_log), a1=sym(.rodata)+28464, a2=?, a3=?, a4=-0x1.
  The `jal` at 0x17eac calls assfail with a0=sym(.rodata)+28464, a1=sym(.rodata)+28464, a2=0x154, a3=?.
  The `jal` at 0x17ec8 calls assfail with a0=sym(.rodata)+28464, a1=sym(.rodata)+28464, a2=0x162, a3=?, a7=0x0.
  The `jal` at 0x17ee0 calls assfail with a0=sym(.rodata)+28464, a1=sym(.rodata)+28464, a2=0x163, a3=?.
  The `jal` at 0x17ef8 calls cmn_err with a0=0x14, a1=sym(.rodata)+28464, a2=a0 at entry (arg0), a3=?.
  The `beq` branch at 0x17980 targets 0x17da4, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x17990 targets 0x17a54, is taken when s0(=a0) == v0(=ret(get_compact_nodeid)), and falls through when s0(=a0) != v0(=ret(get_compact_nodeid)).
  The `bne` branch at 0x17a04 targets 0x179bc, is taken when a7(?) < 0x2 (signed), and falls through when a7(?) >= 0x2 (signed).
  The `beq` branch at 0x17a1c targets 0x17e80, is taken when s0(=a0) == 0, and falls through when s0(=a0) != 0.
  The `beq` branch at 0x17a60 targets 0x17ebc, is taken when a0(=[((a0 << 0x3) + sym(kl_error_log))]:8) == 0, and falls through when a0(=[((a0 << 0x3) + sym(kl_error_log))]:8) != 0.
  The `beq` branch at 0x17a70 targets 0x17ed8, is taken when a1(=[((a0 << 0x3) + sym(kl_error_log))+1024]:8) == 0, and falls through when a1(=[((a0 << 0x3) + sym(kl_error_log))+1024]:8) != 0.
  The `beq` branch at 0x17b8c targets 0x17e38, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x17ba4 targets 0x17e68, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `bne` branch at 0x17be0 targets 0x17b0c, is taken when a2(?) < 0x2 (signed), and falls through when a2(?) >= 0x2 (signed).
  The `bne` branch at 0x17c38 targets 0x17bfc, is taken when a2(?) < 0x2 (signed), and falls through when a2(?) >= 0x2 (signed).
  The `bne` branch at 0x17c80 targets 0x17c54, is taken when a2(?) < 0x2 (signed), and falls through when a2(?) >= 0x2 (signed).
  The `beq` branch at 0x17cc8 targets 0x17cf0, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x17d18 targets 0x17d40, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `bne` branch at 0x17d44 targets 0x17ca8, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `beq` branch at 0x17d54 targets 0x17d70, is taken when a3(=[([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21)-7926335344146906072]:8) == 0, and falls through when a3(=[([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21)-7926335344146906072]:8) != 0.
  The `beq` branch at 0x17d94 targets 0x17a0c, is taken when v0(=ret(cause_intr_connect)) == 0, and falls through when v0(=ret(cause_intr_connect)) != 0.
  The `beq` branch at 0x17d9c targets 0x17ef0 and is always taken.
  The `blez` branch at 0x17db8 targets 0x17e28, is taken when a4(=[sym(numnodes)]) <= 0 (signed), and falls through when a4(=[sym(numnodes)]) > 0 (signed).
  The `beq` branch at 0x17e08 targets 0x17ea0, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x17e10 targets 0x17ea0, is taken when v0(=ret(kmem_zalloc_node)) == 0, and falls through when v0(=ret(kmem_zalloc_node)) != 0.
  The `bne` branch at 0x17e20 targets 0x17dd0, is taken when s1(?) < ra(=[sym(numnodes)]) (signed), and falls through when s1(?) >= ra(=[sym(numnodes)]) (signed).
  The `beq` branch at 0x17e30 targets 0x17988 and is always taken.
  The `beq` branch at 0x17e38 targets 0x17bd8, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x17e60 targets 0x17bd8 and is always taken.
  The `beq` branch at 0x17e78 targets 0x17bd4 and is always taken.
  The `beq` branch at 0x17e98 targets 0x17a28 and is always taken.
  The `beq` branch at 0x17eb4 targets 0x17e18 and is always taken.
  The `beq` branch at 0x17ed0 targets 0x17a68 and is always taken.
  The `beq` branch at 0x17ee8 targets 0x17a7c and is always taken.
  The `beq` branch at 0x17f00 targets 0x17a0c and is always taken.
  The return at 0x17a4c has v0 = [-0x3c00]:8+34892.

- `hub_error_count_update` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1b370 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1b370-0x1b3e4 (116 bytes).
  It occupies 116 bytes.
  The `lh` at 0x1b388 loads 2 bytes from (sym(nasid_to_compact_node) + (a0 + a0)) +0x0.
  3 such `ld` accesses load 8 bytes from (sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3)) +0x0, including `ld` at 0x1b39c, `ld` at 0x1b3ac, `ld` at 0x1b3b8.
  The `lw` at 0x1b3bc loads 4 bytes from [(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8 +0x0.
  The `jal` at 0x1b3a4 calls ii_llp_error_monitor with a0=[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8+8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1b3b0 calls ni_llp_error_monitor with a0=[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8+32, a1=?, a2=?, a3=?.
  The `jal` at 0x1b3cc calls timeout with a0=sym(hub_error_count_update), a1=a0 at entry (arg0), a2=0x64, a3=?.
  The `beq` branch at 0x1b3c0 targets 0x1b3d4, is taken when a1(=[[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8]) == 0, and falls through when a1(=[[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8]) != 0.
  The return at 0x1b3dc has v0 = one of ret(ni_llp_error_monitor), ret(timeout).

- `hub_error_count_enable` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1b3e4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1b3e4-0x1b490 (172 bytes).
  It occupies 172 bytes.
  The `lh` at 0x1b414 loads 2 bytes from (sym(nasid_to_compact_node) + (a0 + a0)) +0x0.
  2 such `ld` accesses load 8 bytes from (sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3)) +0x0, including `ld` at 0x1b42c, `ld` at 0x1b468.
  The `lw` at 0x1b430 loads 4 bytes from [(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8 +0x0.
  The `sw` at 0x1b480 stores 4 bytes to [(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8 +0x0.
  The `jal` at 0x1b45c calls bzero with a0=[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8, a1=0x40, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=(sym(nasid_to_compact_node) + (a0 + a0)), a5=([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3), a6=[[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8].
  The `jal` at 0x1b47c calls timeout with a0=sym(hub_error_count_update), a1=a0 at entry (arg0), a2=0x64, a3=0x1, a4=[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8.
  The `bltz` branch at 0x1b3fc targets 0x1b44c, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x1b40c targets 0x1b44c, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x1b418 targets 0x1b454, is taken when a5(=[(sym(nasid_to_compact_node) + (a0 + a0))]:2) == a0(=-0x1), and falls through when a5(=[(sym(nasid_to_compact_node) + (a0 + a0))]:2) != a0(=-0x1).
  The `beq` branch at 0x1b438 targets 0x1b45c, is taken when a6(=[[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8]) == 0, and falls through when a6(=[[(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8]) != 0.
  The `beq` branch at 0x1b44c targets 0x1b440 and is always taken.
  The `beq` branch at 0x1b454 targets 0x1b444 and is always taken.
  The `beq` branch at 0x1b488 targets 0x1b440 and is always taken.
  The return at 0x1b444 has v0 = one of -0x1, 0x0.

- `hub_error_count_disable` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1b490 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1b490-0x1b4e4 (84 bytes).
  It occupies 84 bytes.
  The `lh` at 0x1b4b0 loads 2 bytes from (sym(nasid_to_compact_node) + (a0 + a0)) +0x0.
  The `ld` at 0x1b4c8 loads 8 bytes from (sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3)) +0x0.
  The `sw` at 0x1b4d0 stores 4 bytes to [(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8 +0x0.
  The `bltz` branch at 0x1b498 targets 0x1b4dc, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x1b4a8 targets 0x1b4dc, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x1b4b8 targets 0x1b4d4, is taken when a0(=[(sym(nasid_to_compact_node) + (a0 + a0))]:2) == a3(=-0x1), and falls through when a0(=[(sym(nasid_to_compact_node) + (a0 + a0))]:2) != a3(=-0x1).
  The return at 0x1b4d4 has v0 = one of -0x1, 0x0.
  The return at 0x1b4dc has v0 = -0x1.

- `hub_error_count_get` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1b4e4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1b4e4-0x1b53c (88 bytes).
  It occupies 88 bytes.
  The `lh` at 0x1b508 loads 2 bytes from (sym(nasid_to_compact_node) + (a0 + a0)) +0x0.
  The `sw` at 0x1b518 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `ld` at 0x1b520 loads 8 bytes from (sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3)) +0x0.
  The `bltz` branch at 0x1b4ec targets 0x1b52c, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x1b500 targets 0x1b52c, is taken when a0 >= 0x80 (signed), and falls through when a0 < 0x80 (signed).
  The `beq` branch at 0x1b50c targets 0x1b534, is taken when a0(=[(sym(nasid_to_compact_node) + (a0 + a0))]:2) == v0(=-0x1), and falls through when a0(=[(sym(nasid_to_compact_node) + (a0 + a0))]:2) != v0(=-0x1).
  The return at 0x1b524 has v0 = [(sym(kl_error_log) + ([(sym(nasid_to_compact_node) + (a0 + a0))]:2 << 0x3))]:8.
  The return at 0x1b52c has v0 = 0x0.
  The return at 0x1b534 has v0 = 0x0.

- `intr_stray` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1eccc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1eccc-0x1ecf4 (40 bytes).
  It occupies 40 bytes.
  The `lh` at 0x1ece4 loads 2 bytes from abs 0xffffffffffffc428.
  The `jal` at 0x1ece0 calls cmn_err with a0=0x4, a1=sym(.rodata)+43384, a2=a0 at entry (arg0), a3=[-0x3bd8]:2.
  The return at 0x1ecec has v0 = ret(cmn_err).

- `intr_init_vecblk` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1ecf4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1ecf4-0x1eea8 (436 bytes).
  It occupies 436 bytes.
  The `lbu` at 0x1ed80 loads 1 byte from sym(.rodata) +0xa9a4.
  The `lw` at 0x1ed88 loads 4 bytes from sym(.rodata) +0xa9a0.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x1ed98, `sd` at 0x1eda0, `sd` at 0x1eda8.
  5 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1edac, `sw` at 0x1edd4, `sw` at 0x1ede4.
  The `swl` at 0x1edb0 stores 4 bytes to ?.
  The `swr` at 0x1edb4 stores 4 bytes to ?.
  3 such `sb` accesses store 1 byte to ?, including `sb` at 0x1edb8, `sb` at 0x1edc0, `sb` at 0x1edcc.
  The `lbu` at 0x1edbc loads 1 byte from sym(.rodata) +0xa9a5.
  The `lbu` at 0x1edc4 loads 1 byte from sym(.rodata) +0xa9a6.
  The `sh` at 0x1edd8 stores 2 bytes to ?.
  The `sw` at 0x1ee30 stores 4 bytes to table(0x1e18) +0x0.
  The `sw` at 0x1ee4c stores 4 bytes to table(0x1e1c) +0x0.
  The `jal` at 0x1ee00 calls init_spinlock with a0=?, a1=sym(.rodata)+43384, a2=?, a3=?.
  The `beq` branch at 0x1ed64 targets 0x1ee58 and is always taken.
  The `bne` branch at 0x1ede0 targets 0x1ed74, is taken when a3(?) < 0x40 (signed), and falls through when a3(?) >= 0x40 (signed).
  The `beq` branch at 0x1ede8 targets 0x1ee6c, is taken when s3(?) == 0, and falls through when s3(?) != 0.
  The `beq` branch at 0x1ee34 targets 0x1ee50 and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `bne` branch at 0x1ee48 targets 0x1ee20 and is never taken: its condition can never hold for these operands, so execution always falls through.
  The `beq` branch at 0x1ee50 targets 0x1ee78, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bne` branch at 0x1ee58 targets 0x1ed6c, is taken when s3(?) != 0, and falls through when s3(?) == 0.
  The `beq` branch at 0x1ee64 targets 0x1ed6c and is always taken.
  The `beq` branch at 0x1ee70 targets 0x1edf0 and is always taken.
  The return at 0x1eea0 has v0 = ret(init_spinlock).

- `do_intr_reserve_level` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1eea8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1eea8-0x1f0dc (564 bytes).
  It occupies 564 bytes.
  The `ld` at 0x1eed4 loads 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8.
  The `ld` at 0x1ef1c loads 8 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x5b8.
  The `ld` at 0x1ef30 loads 8 bytes from ?.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1ef54, `lw` at 0x1efa0, `lw` at 0x1efd0.
  8 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1efd4, `sw` at 0x1efe4, `sw` at 0x1f014.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x1eff8, `sb` at 0x1f0a0.
  The `ld` at 0x1f0d0 loads 8 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x5b0.
  The `jal` at 0x1ef2c calls mutex_spinlock_spl with a0=?, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1eff0 calls strncpy with a0=?, a1=a5 at entry (arg5), a2=?, a3=?.
  The `jal` at 0x1f030 calls mutex_spinunlock with a0=?, a1=ret(mutex_spinlock_spl), a2=?, a3=?.
  The `jal` at 0x1f078 calls strlen with a0=a5 at entry (arg5), a1=?, a2=?, a3=?.
  The `beq` branch at 0x1eef4 targets 0x1f0d4, is taken when t2(=[(sym(pdaindr) + (a0 << 0x4))+8]:8) == 0, and falls through when t2(=[(sym(pdaindr) + (a0 << 0x4))+8]:8) != 0.
  The `beq` branch at 0x1ef08 targets 0x1ef18, is taken when a1 >= 0x40 (signed), and falls through when a1 < 0x40 (signed).
  The `beq` branch at 0x1ef10 targets 0x1f0cc, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bgez` branch at 0x1ef38 targets 0x1ef8c, is taken when s0(?) >= 0 (signed), and falls through when s0(?) < 0 (signed).
  The `beq` branch at 0x1ef5c targets 0x1f098, is taken when (t9(?) & 0x1) == 0, and falls through when (t9(?) & 0x1) != 0.
  The `bne` branch at 0x1ef70 targets 0x1ef4c, is taken when s0(?) < 0x40 (signed), and falls through when s0(?) >= 0x40 (signed).
  The `beq` branch at 0x1ef84 targets 0x1efb4 and is always taken.
  The `beq` branch at 0x1efb4 targets 0x1f02c, is taken when s2(?) == s6(=-0x1), and falls through when s2(?) != s6(=-0x1).
  The `beq` branch at 0x1efc8 targets 0x1f0a0, is taken when s5(=a3) == 0, and falls through when s5(=a3) != 0.
  The `bne` branch at 0x1efe0 targets 0x1f078, is taken when s4(=a5) != 0, and falls through when s4(=a5) == 0.
  The `beq` branch at 0x1f01c targets 0x1f0bc, is taken when (s7(=a2) & 0x8) == 0, and falls through when (s7(=a2) & 0x8) != 0.
  The `beq` branch at 0x1f03c targets 0x1f04c, is taken when s2(?) == s6(=-0x1), and falls through when s2(?) != s6(=-0x1).
  The `bne` branch at 0x1f088 targets 0x1efec, is taken when a2(=(ret(strlen) << 0x0)) < 0x17 (signed), and falls through when a2(=(ret(strlen) << 0x0)) >= 0x17 (signed).
  The `beq` branch at 0x1f090 targets 0x1efec and is always taken.
  The `beq` branch at 0x1f098 targets 0x1ef7c and is always taken.
  The `beq` branch at 0x1f0b4 targets 0x1f02c and is always taken.
  The `beq` branch at 0x1f0c4 targets 0x1f02c and is always taken.
  The `beq` branch at 0x1f0cc targets 0x1ef24 and is always taken.
  The `beq` branch at 0x1f0d4 targets 0x1f054 and is always taken.
  The return at 0x1f070 has v0 = one of ?, -0x1.

- `intr_reserve_level` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f0dc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f0dc-0x1f104 (40 bytes).
  It occupies 40 bytes.
  The `jal` at 0x1f0f0 calls do_intr_reserve_level [0x1eea8] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x1, a4=a3 at entry (arg3), a5=a4 at entry (arg4).
  The return at 0x1f0fc has v0 = ret(do_intr_reserve_level).

- `intr_unreserve_level` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f104 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f104-0x1f12c (40 bytes).
  It occupies 40 bytes.
  The `jal` at 0x1f118 calls do_intr_reserve_level [0x1eea8] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=0x0, a4=0x0, a5=0x0.
  The return at 0x1f124 has v0 = ret(do_intr_reserve_level).

- `intr_get_ptrs` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f12c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f12c-0x1f188 (92 bytes).
  It occupies 92 bytes.
  The `ld` at 0x1f13c loads 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8.
  2 such `sd` accesses store 8 bytes to a3 (arg3 at entry) +0x0, including `sd` at 0x1f150, `sd` at 0x1f16c.
  The `ld` at 0x1f154 loads 8 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x5b0.
  2 such `sd` accesses store 8 bytes to a4 (arg4 at entry) +0x0, including `sd` at 0x1f158, `sd` at 0x1f174.
  2 such `sw` accesses store 4 bytes to a5 (arg5 at entry) +0x0, including `sw` at 0x1f15c, `sw` at 0x1f178.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x1f164, `sw` at 0x1f17c.
  The `ld` at 0x1f170 loads 8 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x5b8.
  The `beq` branch at 0x1f148 targets 0x1f168, is taken when a1 >= 0x40 (signed), and falls through when a1 < 0x40 (signed).
  The return at 0x1f160 has v0 = [(sym(pdaindr) + (a0 << 0x4))+8]:8+1440.
  The return at 0x1f180 has v0 = [(sym(pdaindr) + (a0 << 0x4))+8]:8+1440.

- `intr_connect_level` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f188 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f188-0x1f4a0 (792 bytes).
  It occupies 792 bytes.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1f1cc, `ld` at 0x1f34c, `ld` at 0x1f460.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1f1f0, `lw` at 0x1f2c0, `lw` at 0x1f378.
  5 such `sd` accesses store 8 bytes to ?, including `sd` at 0x1f23c, `sd` at 0x1f25c, `sd` at 0x1f27c.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0x1f29c, `sh` at 0x1f418.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1f2d0, `sw` at 0x1f380.
  4 such `ld` accesses load 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8, including `ld` at 0x1f2d4, `ld` at 0x1f360, `ld` at 0x1f388.
  2 such `lh` accesses load 2 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x42a, including `lh` at 0x1f2dc, `lh` at 0x1f448.
  3 such `lbu` accesses load 1 byte from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x528, including `lbu` at 0x1f2e4, `lbu` at 0x1f364, `lbu` at 0x1f394.
  The `lh` at 0x1f300 loads 2 bytes from (sym(compact_to_nasid_node) + ([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2 + [[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2)) +0x0.
  The `sd` at 0x1f330 stores 8 bytes to (([(sym(compact_to_nasid_node) + ([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2 + [[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2))]:2 << 0x21) + one of 0x9200000001800090, 0x9200000001a00090) +0x0.
  The `ld` at 0x1f350 loads 8 bytes from (([(sym(compact_to_nasid_node) + ([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2 + [[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2))]:2 << 0x21) + one of 0x9200000001800098, 0x9200000001a00098) +0x0.
  The `ll` at 0x1f3e8 loads 4 bytes from ?.
  The `sc` at 0x1f3f0 stores 4 bytes to ?.
  The `jal` at 0x1f1bc calls intr_get_ptrs [0x1f12c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-36, a3=sp-160, a4=sp-152, a5=sp-144.
  The `jal` at 0x1f1d0 calls mutex_spinlock_spl with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1f208 calls mutex_spinunlock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1f44c calls intr_thread_setup [0x2179c] with a0=?, a1=[[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=0x200, a5=a0 at entry (arg0), a7=(((a1 << 0x3) + a1) << 0x3).
  The `beq` branch at 0x1f1fc targets 0x1f224, is taken when (a1(?) & 0x2) == 0, and falls through when (a1(?) & 0x2) != 0.
  The `beq` branch at 0x1f224 targets 0x1f204, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x1f3c0 targets 0x1f474, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `bltz` branch at 0x1f3c8 targets 0x1f488, is taken when a7(=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1 << 0x1e)) < 0 (signed), and falls through when a7(=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1 << 0x1e)) >= 0 (signed).
  The `beq` branch at 0x1f3e0 targets 0x1f460, is taken when (t2(?) & 0x100) == 0, and falls through when (t2(?) & 0x100) != 0.
  The `beql` branch at 0x1f3f4 targets 0x1f3e8, is taken when t2(?) == 0, and falls through when t2(?) != 0; its branch-likely delay slot `nop` at 0x1f3f8 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x1f428 targets 0x1f45c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x1f46c targets 0x1f204 and is always taken.
  The `bltz` branch at 0x1f474 targets 0x1f494, is taken when a7(=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1 << 0x1e)) < 0 (signed), and falls through when a7(=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1 << 0x1e)) >= 0 (signed).
  The `beq` branch at 0x1f480 targets 0x1f3d8 and is always taken.
  The `beq` branch at 0x1f48c targets 0x1f3d0 and is always taken.
  The `beq` branch at 0x1f498 targets 0x1f47c and is always taken.
  The return at 0x1f21c has v0 = one of -0x1, 0x0.

- `intr_disconnect_level` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f4a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f4a0-0x1f674 (468 bytes).
  It occupies 468 bytes.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1f4d4, `ld` at 0x1f5b8, `ld` at 0x1f624.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1f4f8, `lw` at 0x1f590, `lw` at 0x1f5e8.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x1f53c, `sd` at 0x1f558, `sd` at 0x1f574.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x1f5a0, `sw` at 0x1f5f4.
  2 such `ld` accesses load 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8, including `ld` at 0x1f5d0, `ld` at 0x1f5f8.
  2 such `lbu` accesses load 1 byte from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x528, including `lbu` at 0x1f5d4, `lbu` at 0x1f604.
  The `lh` at 0x1f600 loads 2 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x42a.
  The `lh` at 0x1f634 loads 2 bytes from (sym(compact_to_nasid_node) + ([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2 + [[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2)) +0x0.
  The `sd` at 0x1f650 stores 8 bytes to table(0x9200000001800000) +0x0.
  The `jal` at 0x1f4c4 calls intr_get_ptrs [0x1f12c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-4, a3=sp-64, a4=sp-56, a5=sp-48.
  The `jal` at 0x1f4d8 calls mutex_spinlock_spl with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1f510 calls mutex_spinunlock with a0=?, a1=ret(mutex_spinlock_spl), a2=?, a3=?, a5=a1 at entry (arg1).
  The `beq` branch at 0x1f508 targets 0x1f52c, is taken when a2(?) == a3(=0x3), and falls through when a2(?) != a3(=0x3).
  The `bltz` branch at 0x1f630 targets 0x1f660, is taken when t3(=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1 << 0x1e)) < 0 (signed), and falls through when t3(=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1 << 0x1e)) >= 0 (signed).
  The `beq` branch at 0x1f658 targets 0x1f510 and is always taken.
  The `beq` branch at 0x1f66c targets 0x1f640 and is always taken.
  The return at 0x1f524 has v0 = one of -0x1, 0x0.

- `do_intr_block_bit` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f674 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f674-0x1f834 (448 bytes).
  It occupies 448 bytes.
  8 such `ld` accesses load 8 bytes from ?, including `ld` at 0x1f6ac, `ld` at 0x1f6d8, `ld` at 0x1f71c.
  3 such `sd` accesses store 8 bytes to ?, including `sd` at 0x1f6e8, `sd` at 0x1f750, `sd` at 0x1f7dc.
  The `ld` at 0x1f6ec loads 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8.
  The `lbu` at 0x1f6f4 loads 1 byte from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x528.
  The `lh` at 0x1f6f8 loads 2 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x42a.
  The `lh` at 0x1f718 loads 2 bytes from (([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2 + [[(sym(pdaindr) + (a0 << 0x4))+8]:8+1066]:2) + sym(compact_to_nasid_node)) +0x0.
  The `jal` at 0x1f6a0 calls intr_get_ptrs [0x1f12c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sp-20, a3=sp-96, a4=sp-88, a5=sp-80.
  The `jal` at 0x1f6b0 calls mutex_spinlock_spl with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1f7c0 calls mutex_spinunlock with a0=?, a1=ret(mutex_spinlock_spl), a2=?, a3=?.
  The `beq` branch at 0x1f6dc targets 0x1f7d4, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0x1f724 targets 0x1f7e0, is taken when (a6(=[[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1) & 0x1) == 0, and falls through when (a6(=[[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1) & 0x1) != 0.
  The `beq` branch at 0x1f72c targets 0x1f804, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1f74c targets 0x1f7b4, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0x1f768 targets 0x1f7b4, is taken when 0 >= t1(?) (unsigned), and falls through when 0 < t1(?) (unsigned).
  The `beq` branch at 0x1f780 targets 0x1f7b4, is taken when 0 >= a5(?) (unsigned), and falls through when 0 < a5(?) (unsigned).
  The `beq` branch at 0x1f798 targets 0x1f7b4, is taken when 0 >= a6(?) (unsigned), and falls through when 0 < a6(?) (unsigned).
  The `bne` branch at 0x1f7ac targets 0x1f770, is taken when 0 < a7(?) (unsigned), and falls through when 0 >= a7(?) (unsigned).
  The `beq` branch at 0x1f7d8 targets 0x1f6ec and is always taken.
  The `beq` branch at 0x1f7e0 targets 0x1f81c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x1f7fc targets 0x1f74c and is always taken.
  The `beq` branch at 0x1f814 targets 0x1f74c and is always taken.
  The `beq` branch at 0x1f82c targets 0x1f74c and is always taken.
  The return at 0x1f7cc has v0 = ret(mutex_spinunlock).

- `intr_block_bit` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f834 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f834-0x1f850 (28 bytes).
  It occupies 28 bytes.
  The `jal` at 0x1f83c calls do_intr_block_bit with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a3 at entry (arg3).
  The return at 0x1f848 has v0 = ret(do_intr_block_bit).

- `intr_unblock_bit` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f850 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f850-0x1f86c (28 bytes).
  It occupies 28 bytes.
  The `jal` at 0x1f858 calls do_intr_block_bit with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The return at 0x1f864 has v0 = ret(do_intr_block_bit).

- `do_intr_cpu_choose` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f86c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f86c-0x1f9cc (352 bytes).
  It occupies 352 bytes.
  The `ld` at 0x1f8fc loads 8 bytes from table(sym(pdaindr)) +0x8.
  The `lw` at 0x1f900 loads 4 bytes from [table(sym(pdaindr))+8]:8 +0x48.
  The `lbu` at 0x1f918 loads 1 byte from [table(sym(pdaindr))+8]:8 +0x528.
  The `ld` at 0x1f934 loads 8 bytes from abs 0xffffffffffffc400.
  The `ld` at 0x1f944 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `ld` at 0x1f958 loads 8 bytes from ((a0 << 0x3) + [[-0x3c00]:8]:8) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x1f974, `lw` at 0x1f978.
  The `jal` at 0x1f8d0 calls cnode_slice_to_cpuid with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1f8e8 calls cpu_enabled with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1f8b8 targets 0x1f8cc and is always taken.
  The `beq` branch at 0x1f8c8 targets 0x1f998, is taken when s0(?) >= 0x4 (signed), and falls through when s0(?) < 0x4 (signed).
  The `beq` branch at 0x1f8e0 targets 0x1f8c0, is taken when s1(?) == s4(=-0x1), and falls through when s1(?) != s4(=-0x1).
  The `beq` branch at 0x1f8f0 targets 0x1f8c0, is taken when v0(=ret(cpu_enabled)) == 0, and falls through when v0(=ret(cpu_enabled)) != 0.
  The `bne` branch at 0x1f908 targets 0x1f8c0, is taken when (t8(=[[table(sym(pdaindr))+8]:8+72]) & 0x80) != 0, and falls through when (t8(=[[table(sym(pdaindr))+8]:8+72]) & 0x80) == 0.
  The `beq` branch at 0x1f910 targets 0x1f92c, is taken when s6(=a1) == s4(=-0x1), and falls through when s6(=a1) != s4(=-0x1).
  The `bne` branch at 0x1f924 targets 0x1f8c0, is taken when s6(=a1) != a1(?), and falls through when s6(=a1) == a1(?).
  The `beq` branch at 0x1f984 targets 0x1f8c0, is taken when a0(?) >= s8(?) (signed), and falls through when a0(?) < s8(?) (signed).
  The `beq` branch at 0x1f990 targets 0x1f8c0 and is always taken.
  The return at 0x1f9c4 has v0 = ?.

- `intr_cpu_choose_from_node` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1f9cc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1f9cc-0x1f9e8 (28 bytes).
  It occupies 28 bytes.
  The `jal` at 0x1f9d4 calls do_intr_cpu_choose [0x1f86c] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x1f9e0 has v0 = ret(do_intr_cpu_choose).

- `intr_target_from_desc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1fae4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1fae4-0x1fb9c (184 bytes).
  It occupies 184 bytes.
  The `jal` at 0x1faf4 calls device_desc_intr_target_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1fb0c calls cpuvertex_to_cpuid with a0=ret(device_desc_intr_target_get), a1=?, a2=?, a3=?.
  The `jal` at 0x1fb44 calls subnodevertex_to_subnode [0x1f9e8] with a0=ret(device_desc_intr_target_get), a1=sp-48, a2=sp-44, a3=?.
  The `jal` at 0x1fb54 calls master_node_get with a0=ret(device_desc_intr_target_get), a1=?, a2=?, a3=?.
  The `jal` at 0x1fb74 calls intr_cpu_choose_from_node [0x1f9cc] with a0=?, a1=a1 at entry (arg1), a2=?, a3=?, a4=ret(master_node_get).
  The `jal` at 0x1fb88 calls intr_cpu_choose_from_node [0x1f9cc] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x1fb04 targets 0x1fb24, is taken when at(=-0x1) == v0(=ret(device_desc_intr_target_get)), and falls through when at(=-0x1) != v0(=ret(device_desc_intr_target_get)).
  The `beq` branch at 0x1fb20 targets 0x1fb3c, is taken when v0(=-0x1) == s0(?), and falls through when v0(=-0x1) != s0(?).
  The `beq` branch at 0x1fb4c targets 0x1fb88, is taken when v0(=ret(subnodevertex_to_subnode)) == 0, and falls through when v0(=ret(subnodevertex_to_subnode)) != 0.
  The `beq` branch at 0x1fb68 targets 0x1fb24, is taken when a0(?) == t8(=-0x1), and falls through when a0(?) != t8(=-0x1).
  The `beq` branch at 0x1fb80 targets 0x1fb24 and is always taken.
  The `beq` branch at 0x1fb94 targets 0x1fb24 and is always taken.
  The return at 0x1fb34 has v0 = ?.

- `intr_cnode_seen` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1fb9c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1fb9c-0x1fbdc (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x1fb9c loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `lh` at 0x1fbb4 loads 2 bytes from ?.
  The `blez` branch at 0x1fba4 targets 0x1fbcc, is taken when a6(=[a2]) <= 0 (signed), and falls through when a6(=[a2]) > 0 (signed).
  The `beq` branch at 0x1fbbc targets 0x1fbd4, is taken when at(?) == a0, and falls through when at(?) != a0.
  The `bne` branch at 0x1fbc4 targets 0x1fbb0, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The return at 0x1fbcc has v0 = a1.
  The return at 0x1fbd4 has v0 = 0x0.

- `intr_bit_reserve_test` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1fbdc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1fbdc-0x1fc84 (168 bytes).
  It occupies 168 bytes.
  The `sw` at 0x1fc60 stores 4 bytes to a7 (arg7 at entry) +0x0.
  The `jal` at 0x1fc14 calls intr_cpu_choose_from_node [0x1f9cc] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1fc50 calls do_intr_reserve_level [0x1eea8] with a0=?, a1=a3 at entry (arg3), a2=a4 at entry (arg4), a3=0x1, a4=a5 at entry (arg5), a5=a6 at entry (arg6).
  The `beq` branch at 0x1fc0c targets 0x1fc38, is taken when a2 == t9(=-0x1), and falls through when a2 != t9(=-0x1).
  The `beq` branch at 0x1fc38 targets 0x1fc6c, is taken when s0(?) == t9(=-0x1), and falls through when s0(?) != t9(=-0x1).
  The `bltz` branch at 0x1fc5c targets 0x1fc6c, is taken when v0(=ret(do_intr_reserve_level)) < 0 (signed), and falls through when v0(=ret(do_intr_reserve_level)) >= 0 (signed).
  The `beq` branch at 0x1fc64 targets 0x1fc74 and is always taken.
  The return at 0x1fc7c has v0 = one of ?, -0x1.

- `intr_heuristic` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x1fc84 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x1fc84-0x20058 (980 bytes).
  It occupies 980 bytes.
  4 such `ld` accesses load 8 bytes from table(sym(pdaindr)) +0x8, including `ld` at 0x1fd50, `ld` at 0x1fde8, `ld` at 0x1ff40.
  4 such `lbu` accesses load 1 byte from [table(sym(pdaindr))+8]:8 +0x528, including `lbu` at 0x1fd54, `lbu` at 0x1fdec, `lbu` at 0x1ff44.
  The `lh` at 0x1fe24 loads 2 bytes from ret(hwgraph_fastinfo_get) +0x72.
  The `ld` at 0x1fe40 loads 8 bytes from ret(hwgraph_fastinfo_get) +0x830.
  The `lh` at 0x1fe4c loads 2 bytes from [ret(hwgraph_fastinfo_get)+2096]:8 +0x24.
  The `ld` at 0x1fe5c loads 8 bytes from (sym(pdaindr) + ([[ret(hwgraph_fastinfo_get)+2096]:8+36]:2 << 0x4)) +0x8.
  The `lbu` at 0x1fe60 loads 1 byte from [(sym(pdaindr) + ([[ret(hwgraph_fastinfo_get)+2096]:8+36]:2 << 0x4))+8]:8 +0x528.
  4 such `lw` accesses load 4 bytes from a6 (arg6 at entry) +0x0, including `lw` at 0x1fe84, `lw` at 0x1ff5c, `lw` at 0x1ff94.
  The `lh` at 0x1fea0 loads 2 bytes from abs 0xffffffffffffc42a.
  The `sh` at 0x1ff14 stores 2 bytes to ?.
  The `ld` at 0x1ffd8 loads 8 bytes from (sym(pdaindr) + ([sym(master_procid)]:2 << 0x4)) +0x8.
  The `lh` at 0x1ffec loads 2 bytes from [(sym(pdaindr) + ([sym(master_procid)]:2 << 0x4))+8]:8 +0x42a.
  The `jal` at 0x1fcc8 calls physmem_maxradius with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x1fce4 calls hwgraph_edge_get with a0=a0 at entry (arg0), a1=sym(.rodata)+43384, a2=sp-380, a3=?.
  The `jal` at 0x1fd00 calls intr_target_from_desc with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `jal` at 0x1fd24 calls intr_bit_reserve_test [0x1fbdc] with a0=ret(intr_target_from_desc), a1=?, a2=-0x1, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=a5 at entry (arg5), a7=a6 at entry (arg6).
  The `jal` at 0x1fd9c calls master_node_get with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x1fdc0 calls intr_bit_reserve_test [0x1fbdc] with a0=-0x1, a1=?, a2=ret(master_node_get), a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=a5 at entry (arg5), a7=a6 at entry (arg6).
  The `jal` at 0x1fe08 calls hwgraph_fastinfo_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1fe14 calls hwgraph_vertex_unref with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x1fe80 calls intr_unreserve_level with a0=?, a1=[a6], a2=?, a3=?.
  The `jal` at 0x1fe94 calls cmn_err with a0=0x4, a1=sym(.rodata)+43384, a2=a4 at entry (arg4), a3=a4 at entry (arg4).
  The `jal` at 0x1fed4 calls physmem_select_neighbor_node with a0=?, a1=?, a2=sp-120, a3=sym(intr_cnode_seen), a4=sp-376, a5=sp-384.
  The `jal` at 0x1ff18 calls intr_bit_reserve_test [0x1fbdc] with a0=-0x1, a1=?, a2=?, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=a5 at entry (arg5), a7=a6 at entry (arg6).
  The `jal` at 0x1ff58 calls intr_unreserve_level with a0=?, a1=[a6], a2=?, a3=?.
  The `jal` at 0x1ff84 calls cmn_err with a0=0x4, a1=sym(.rodata)+43384, a2=a4 at entry (arg4), a3=a4 at entry (arg4).
  The `jal` at 0x1ff90 calls intr_unreserve_level with a0=?, a1=[a6], a2=?, a3=?.
  The `jal` at 0x1ffb0 calls cmn_err with a0=0x4, a1=sym(.rodata)+43384, a2=a4 at entry (arg4), a3=a4 at entry (arg4).
  The `jal` at 0x1ffe8 calls intr_bit_reserve_test [0x1fbdc] with a0=-0x1, a1=?, a2=[[(sym(pdaindr) + ([sym(master_procid)]:2 << 0x4))+8]:8+1066]:2, a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=a4 at entry (arg4), a6=a5 at entry (arg5), a7=a6 at entry (arg6).
  The `jal` at 0x20030 calls intr_unreserve_level with a0=?, a1=[a6], a2=?, a3=?.
  The `jal` at 0x20048 calls cmn_err with a0=0x4, a1=sym(.rodata)+43384, a2=a4 at entry (arg4), a3=a4 at entry (arg4).
  The `beq` branch at 0x1fcec targets 0x1fe08, is taken when v0(=ret(hwgraph_edge_get)) == 0, and falls through when v0(=ret(hwgraph_edge_get)) != 0.
  The `beq` branch at 0x1fcf8 targets 0x1fd98, is taken when s7(=a1) == 0, and falls through when s7(=a1) != 0.
  The `beq` branch at 0x1fd34 targets 0x1fd98, is taken when s7(?) == s3(=-0x1), and falls through when s7(?) != s3(=-0x1).
  The `beq` branch at 0x1fd3c targets 0x1fd68, is taken when s0(?) == s3(=-0x1), and falls through when s0(?) != s3(=-0x1).
  The `bne` branch at 0x1fd60 targets 0x1ff70, is taken when s0(?) != t8(?), and falls through when s0(?) == t8(?).
  The `beq` branch at 0x1fdd0 targets 0x1fe8c, is taken when a0(?) == s3(=-0x1), and falls through when a0(?) != s3(=-0x1).
  The `beq` branch at 0x1fdd8 targets 0x1fe00, is taken when s0(?) == s3(=-0x1), and falls through when s0(?) != s3(=-0x1).
  The `bne` branch at 0x1fdf8 targets 0x1fe80, is taken when s0(?) != a1(?), and falls through when s0(?) == a1(?).
  The `beq` branch at 0x1fe00 targets 0x1fd68 and is always taken.
  The `beq` branch at 0x1fe1c targets 0x1fe70, is taken when s0(=ret(hwgraph_fastinfo_get)) == 0, and falls through when s0(=ret(hwgraph_fastinfo_get)) != 0.
  The `beq` branch at 0x1fe30 targets 0x1fe40, is taken when a1(=[ret(hwgraph_fastinfo_get)+114]:2) == a3(=0x1), and falls through when a1(=[ret(hwgraph_fastinfo_get)+114]:2) != a3(=0x1).
  The `bne` branch at 0x1fe38 targets 0x1fcf8, is taken when a1(=[ret(hwgraph_fastinfo_get)+114]:2) != 0, and falls through when a1(=[ret(hwgraph_fastinfo_get)+114]:2) == 0.
  The `beq` branch at 0x1fe44 targets 0x1fe78, is taken when a1(=[ret(hwgraph_fastinfo_get)+2096]:8) == 0, and falls through when a1(=[ret(hwgraph_fastinfo_get)+2096]:8) != 0.
  The `beq` branch at 0x1fe68 targets 0x1fcf8 and is always taken.
  The `beq` branch at 0x1fe70 targets 0x1fcf8 and is always taken.
  The `beq` branch at 0x1fe78 targets 0x1fcf8 and is always taken.
  The `blez` branch at 0x1fea4 targets 0x1ffa0, is taken when s8(?) <= 0 (signed), and falls through when s8(?) > 0 (signed).
  The `beq` branch at 0x1feac targets 0x1fec0 and is always taken.
  The `bne` branch at 0x1febc targets 0x1ffa0, is taken when t9(?) != 0, and falls through when t9(?) == 0.
  The `beq` branch at 0x1fedc targets 0x1feb4, is taken when v0(=ret(physmem_select_neighbor_node)) == 0, and falls through when v0(=ret(physmem_select_neighbor_node)) != 0.
  The `beq` branch at 0x1ff28 targets 0x1febc, is taken when a0(?) == s3(=-0x1), and falls through when a0(?) != s3(=-0x1).
  The `beq` branch at 0x1ff30 targets 0x1ff68, is taken when s0(?) == s3(=-0x1), and falls through when s0(?) != s3(=-0x1).
  The `beq` branch at 0x1ff50 targets 0x1ff68, is taken when s0(?) == a1(?), and falls through when s0(?) != a1(?).
  The `beq` branch at 0x1ff60 targets 0x1febc and is always taken.
  The `beq` branch at 0x1ff68 targets 0x1fd68 and is always taken.
  The `beq` branch at 0x1ff98 targets 0x1fd98 and is always taken.
  The `beq` branch at 0x1fff8 targets 0x20038, is taken when a0(?) == s3(=-0x1), and falls through when a0(?) != s3(=-0x1).
  The `beq` branch at 0x20000 targets 0x20028, is taken when s0(?) == s3(=-0x1), and falls through when s0(?) != s3(=-0x1).
  The `bne` branch at 0x20020 targets 0x20030, is taken when s0(?) != a1(?), and falls through when s0(?) == a1(?).
  The `beq` branch at 0x20028 targets 0x1fd68 and is always taken.
  The `beq` branch at 0x20050 targets 0x1fd68 and is always taken.
  The return at 0x1fd90 has v0 = one of ?, -0x1.

- `cause_intr_connect` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20058 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20058-0x200a0 (72 bytes).
  It occupies 72 bytes.
  The `sw` at 0x20084 stores 4 bytes to (sym(cause_intr_tbl) + (a0 << 0x4)) +0x8.
  The `sd` at 0x20088 stores 8 bytes to (sym(cause_intr_tbl) + (a0 << 0x4)) +0x0.
  The `bltz` branch at 0x2005c targets 0x20098, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x2006c targets 0x20098, is taken when a0 >= 0x8 (signed), and falls through when a0 < 0x8 (signed).
  The `beq` branch at 0x20074 targets 0x20098, is taken when a0 == v0(=0x2), and falls through when a0 != v0(=0x2).
  The `beq` branch at 0x2007c targets 0x20098, is taken when a0 == v0(=0x3), and falls through when a0 != v0(=0x3).
  The return at 0x20090 has v0 = 0x0.
  The return at 0x20098 has v0 = -0x1.

- `cause_intr_disconnect` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x200a0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x200a0-0x200e0 (64 bytes).
  It occupies 64 bytes.
  The `ld` at 0x200bc loads 8 bytes from (sym(cause_intr_tbl) + (a0 << 0x4)) +0x0.
  The `sd` at 0x200d0 stores 8 bytes to (sym(cause_intr_tbl) + (a0 << 0x4)) +0x0.
  The `sw` at 0x200d4 stores 4 bytes to (sym(cause_intr_tbl) + (a0 << 0x4)) +0x8.
  The `bltz` branch at 0x200a4 targets 0x200c8, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x200b4 targets 0x200c8, is taken when a0 >= 0x8 (signed), and falls through when a0 < 0x8 (signed).
  The `bne` branch at 0x200c0 targets 0x200d0, is taken when a6(=[(sym(cause_intr_tbl) + (a0 << 0x4))]:8) != 0, and falls through when a6(=[(sym(cause_intr_tbl) + (a0 << 0x4))]:8) == 0.
  The return at 0x200c8 has v0 = -0x1.
  The return at 0x200d8 has v0 = 0x0.

- `nointr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x200e0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x200e0-0x200f0 (16 bytes).
  It occupies 16 bytes.
  The return at 0x200e8 has v0 = ?.

- `intpend0` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x200f0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x200f0-0x20250 (352 bytes).
  It occupies 352 bytes.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc5a0, including `ld` at 0x2010c, `ld` at 0x201f0.
  3 such `ld` accesses load 8 bytes from abs 0x9200000001000098, including `ld` at 0x20110, `ld` at 0x20198, `ld` at 0x201ec.
  3 such `ld` accesses load 8 bytes from abs 0xffffffffffffc510, including `ld` at 0x2013c, `ld` at 0x20158, `ld` at 0x20218.
  2 such `lw` accesses load 4 bytes from [-0x3af0]:8 +0xd0, including `lw` at 0x2015c, `lw` at 0x20220.
  2 such `sw` accesses store 4 bytes to [-0x3af0]:8 +0xd0, including `sw` at 0x20164, `sw` at 0x20234.
  The `sd` at 0x20170 stores 8 bytes to abs 0x9200000001000090.
  3 such `ld` accesses load 8 bytes from abs 0xffffffffffffc5b0, including `ld` at 0x20178, `ld` at 0x201b4, `ld` at 0x201c8.
  The `lw` at 0x20188 loads 4 bytes from ([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)) +0x18.
  The `ld` at 0x2019c loads 8 bytes from ([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)) +0x8.
  2 such `ld` accesses load 8 bytes from ([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)) +0x10, including `ld` at 0x201a8, `ld` at 0x20244.
  The `ld` at 0x20238 loads 8 bytes from ([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)) +0x0.
  The `jal` at 0x20140 calls cvsema with a0=([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+32, a1=?, a2=?, a3=?.
  The `jal` at 0x20168 calls ms1bit with a0=?, a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x201ac calls (unknown callee) with a0=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+16]:8, a1=a0 at entry (arg0), a2=?, a3=?, a4=([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)).
  The `jal` at 0x201bc calls valusema with a0=([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+32, a1=?, a2=?, a3=?, a4=([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)).
  The `jal` at 0x201dc calls vsema with a0=([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+32, a1=?, a2=?, a3=?.
  The `jalr` at 0x20240 calls (unknown callee) with a0=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+16]:8, a1=a0 at entry (arg0), a2=?, a3=?, a4=([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)), a5=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))]:8.
  The `beq` branch at 0x20130 targets 0x20200, is taken when (at(=[-0x3a60]:8) & v0(=[0x9200000001000098]:8)) == 0, and falls through when (at(=[-0x3a60]:8) & v0(=[0x9200000001000098]:8)) != 0.
  The `beq` branch at 0x20138 targets 0x2015c and is always taken.
  The `beq` branch at 0x20150 targets 0x201ec, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x20194 targets 0x20238, is taken when (a2(=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+24]) & 0x1000) == 0, and falls through when (a2(=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+24]) & 0x1000) != 0.
  The `beq` branch at 0x201a0 targets 0x201bc, is taken when v0(=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+8]:8) == 0, and falls through when v0(=[([-0x3a50]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+8]:8) != 0.
  The `beq` branch at 0x201d4 targets 0x20140, is taken when v0(=ret(valusema)) >= a1(=[sym(hub_intr_wakeup_cnt)]) (signed), and falls through when v0(=ret(valusema)) < a1(=[sym(hub_intr_wakeup_cnt)]) (signed).
  The `beq` branch at 0x201e4 targets 0x2014c and is always taken.
  The `bne` branch at 0x201f8 targets 0x20158, is taken when (a2(=[-0x3a60]:8) & a3(=[0x9200000001000098]:8)) != 0, and falls through when (a2(=[-0x3a60]:8) & a3(=[0x9200000001000098]:8)) == 0.
  The `beq` branch at 0x20248 targets 0x2014c and is always taken.
  The return at 0x20230 has v0 = one of [0x9200000001000098]:8, ?.

- `intpend1` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20250 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20250-0x2033c (236 bytes).
  It occupies 236 bytes.
  The `ld` at 0x20268 loads 8 bytes from abs 0xffffffffffffc5a8.
  The `ld` at 0x2026c loads 8 bytes from abs 0x92000000010000a0.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc510, including `ld` at 0x2028c, `ld` at 0x20300.
  2 such `lw` accesses load 4 bytes from [-0x3af0]:8 +0xd0, including `lw` at 0x20290, `lw` at 0x20308.
  2 such `sw` accesses store 4 bytes to [-0x3af0]:8 +0xd0, including `sw` at 0x20298, `sw` at 0x2031c.
  The `sd` at 0x202a8 stores 8 bytes to abs 0x9200000001000090.
  The `ld` at 0x202b0 loads 8 bytes from abs 0xffffffffffffc5b8.
  The `ld` at 0x202c0 loads 8 bytes from ([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)) +0x0.
  The `ld` at 0x202cc loads 8 bytes from abs 0x9200000001000098.
  The `ld` at 0x202d0 loads 8 bytes from ([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)) +0x10.
  The `jal` at 0x2029c calls ms1bit with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x202d4 calls (unknown callee) with a0=[([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))+16]:8, a1=a0 at entry (arg0), a2=?, a3=?, a5=([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)), a6=[([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))]:8, a7=ret(ms1bit)+64.
  The `jal` at 0x2032c calls cmn_err with a0=0x0, a1=sym(.rodata)+43384, a2=ret(ms1bit), a3=?, a5=([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3)), a6=[([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))]:8, a7=ret(ms1bit)+64.
  The `beq` branch at 0x20284 targets 0x202f0, is taken when (s2(=[-0x3a58]:8) & t8(=[0x92000000010000a0]:8)) == 0, and falls through when (s2(=[-0x3a58]:8) & t8(=[0x92000000010000a0]:8)) != 0.
  The `beq` branch at 0x202c8 targets 0x20320, is taken when a6(=[([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))]:8) == 0, and falls through when a6(=[([-0x3a48]:8 + (((ret(ms1bit) << 0x3) + ret(ms1bit)) << 0x3))]:8) != 0.
  The `bne` branch at 0x202e8 targets 0x2028c, is taken when s2(?) != 0, and falls through when s2(?) == 0.
  The `beq` branch at 0x20334 targets 0x202e0 and is always taken.
  The return at 0x20318 has v0 = ?.

- `intr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2033c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2033c-0x205b8 (636 bytes).
  It occupies 636 bytes.
  2 such `lw` accesses load 4 bytes from abs 0xffffffffffffc048, including `lw` at 0x20344, `lw` at 0x203d4.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc280, including `ld` at 0x20370, `ld` at 0x203ec.
  The `ld` at 0x20394 loads 8 bytes from abs 0xffffffffffffc510.
  The `lw` at 0x2039c loads 4 bytes from [-0x3af0]:8 +0xd0.
  The `sw` at 0x203a8 stores 4 bytes to [-0x3af0]:8 +0xd0.
  The `lw` at 0x203b0 loads 4 bytes from sym(.data) +0x1e80.
  The `lw` at 0x203b8 loads 4 bytes from sym(.data) +0x1e84.
  The `ld` at 0x203bc loads 8 bytes from sym(.data) +0x1e78.
  The `lw` at 0x20424 loads 4 bytes from sym(.data) +0x1e50.
  The `lw` at 0x2042c loads 4 bytes from sym(.data) +0x1e54.
  The `ld` at 0x20430 loads 8 bytes from sym(.data) +0x1e48.
  The `lw` at 0x20450 loads 4 bytes from sym(.data) +0x1e70.
  The `lw` at 0x20458 loads 4 bytes from sym(.data) +0x1e74.
  The `ld` at 0x2045c loads 8 bytes from sym(.data) +0x1e68.
  The `lw` at 0x20490 loads 4 bytes from sym(.data) +0x1e90.
  The `lw` at 0x20498 loads 4 bytes from sym(.data) +0x1e94.
  The `ld` at 0x2049c loads 8 bytes from sym(.data) +0x1e88.
  The `lw` at 0x204cc loads 4 bytes from sym(.data) +0x1e60.
  The `lw` at 0x204d4 loads 4 bytes from sym(.data) +0x1e64.
  The `ld` at 0x204d8 loads 8 bytes from sym(.data) +0x1e58.
  The `lw` at 0x204f8 loads 4 bytes from sym(.data) +0x1e20.
  The `lw` at 0x20500 loads 4 bytes from sym(.data) +0x1e24.
  The `ld` at 0x20504 loads 8 bytes from sym(.data) +0x1e18.
  The `lw` at 0x20524 loads 4 bytes from sym(.data) +0x1e40.
  The `lw` at 0x2052c loads 4 bytes from sym(.data) +0x1e44.
  The `ld` at 0x20530 loads 8 bytes from sym(.data) +0x1e38.
  The `lw` at 0x20550 loads 4 bytes from sym(.data) +0x1e30.
  The `lw` at 0x20558 loads 4 bytes from sym(.data) +0x1e34.
  The `ld` at 0x2055c loads 8 bytes from sym(.data) +0x1e28.
  The `jal` at 0x203b4 calls splx with a0=[sym(cause_intr_tbl+104)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x203c0 calls (unknown callee) with a0=a0 at entry (arg0), a1=[sym(cause_intr_tbl+96)]:8, a2=?, a3=?.
  The `jal` at 0x203e4 calls check_delay_tlbflush with a0=0x1, a1=?, a2=one of 0x0, 0x1, a3=?.
  The `jal` at 0x20428 calls splx with a0=[sym(cause_intr_tbl+56)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x20434 calls .text+131664 with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a6=sym(intpend1).
  The `jal` at 0x20454 calls splx with a0=[sym(cause_intr_tbl+88)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x20460 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x20470 calls nointr [0x200e0] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x20494 calls splx with a0=[sym(cause_intr_tbl+120)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x204a0 calls early_counter_intr with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x204b0 calls check_delay_tlbflush with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x204d0 calls splx with a0=[sym(cause_intr_tbl+72)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x204dc calls timein with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x204fc calls splx with a0=[sym(cause_intr_tbl+8)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x20508 calls timein with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x20528 calls splx with a0=[sym(cause_intr_tbl+40)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x20534 calls .text+131312 with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x20554 calls splx with a0=[sym(cause_intr_tbl+24)], a1=[-0x3af0]:8, a2=?, a3=?.
  The `jalr` at 0x20560 calls (unknown callee) with a0=a0 at entry (arg0), a1=[sym(cause_intr_tbl+16)]:8, a2=?, a3=?.
  The `jal` at 0x20570 calls intr_stray with a0=a0 at entry (arg0), a1=[-0x3af0]:8, a2=?, a3=?.
  The `jal` at 0x2058c calls log_tstamp_event with a0=0x66, a1=0x0, a2=0x0, a3=0x0, a4=0x0.
  The `jal` at 0x205a8 calls log_tstamp_event with a0=0x65, a1=0x66, a2=0x0, a3=0x0, a4=0x0.
  The `beq` branch at 0x20364 targets 0x204b0, is taken when at(?) == v0(=0x30), and falls through when at(?) != v0(=0x30).
  The `bne` branch at 0x20378 targets 0x20580, is taken when (v0(=[-0x3d80]:8) & 0x20) != 0, and falls through when (v0(=[-0x3d80]:8) & 0x20) == 0.
  The `beq` branch at 0x2038c targets 0x20470, is taken when (v1(?) & 0xff00) == 0, and falls through when (v1(?) & 0xff00) != 0.
  The `beq` branch at 0x203a4 targets 0x20418, is taken when (s0(=a3) & 0x4000) == 0, and falls through when (s0(=a3) & 0x4000) != 0.
  The `beq` branch at 0x203cc targets 0x203ec, is taken when a2(=one of 0x0, 0x1) == 0, and falls through when a2(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x203dc targets 0x203ec, is taken when (a3(=[-0x3fb8]) & 0x10) == 0, and falls through when (a3(=[-0x3fb8]) & 0x10) != 0.
  The `bne` branch at 0x203f4 targets 0x2059c, is taken when (a4(=[-0x3d80]:8) & 0x20) != 0, and falls through when (a4(=[-0x3d80]:8) & 0x20) == 0.
  The `beq` branch at 0x2041c targets 0x20444, is taken when (s0(=a3) & 0x800) == 0, and falls through when (s0(=a3) & 0x800) != 0.
  The `beq` branch at 0x2043c targets 0x203cc and is always taken.
  The `beq` branch at 0x20448 targets 0x20480, is taken when (s0(=a3) & 0x2000) == 0, and falls through when (s0(=a3) & 0x2000) != 0.
  The `beq` branch at 0x20468 targets 0x203cc and is always taken.
  The `beq` branch at 0x20478 targets 0x203c8 and is always taken.
  The `beq` branch at 0x20484 targets 0x204c4, is taken when (s0(=a3) & 0x8000) == 0, and falls through when (s0(=a3) & 0x8000) != 0.
  The `beq` branch at 0x204a8 targets 0x203cc and is always taken.
  The `beq` branch at 0x204bc targets 0x20370 and is always taken.
  The `beq` branch at 0x204c4 targets 0x204ec, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x204e4 targets 0x203cc and is always taken.
  The `beq` branch at 0x204f0 targets 0x20518, is taken when (s0(=a3) & 0x100) == 0, and falls through when (s0(=a3) & 0x100) != 0.
  The `beq` branch at 0x20510 targets 0x203cc and is always taken.
  The `beq` branch at 0x2051c targets 0x20544, is taken when (s0(=a3) & 0x400) == 0, and falls through when (s0(=a3) & 0x400) != 0.
  The `beq` branch at 0x2053c targets 0x203cc and is always taken.
  The `beq` branch at 0x20548 targets 0x20570, is taken when (s0(=a3) & 0x200) == 0, and falls through when (s0(=a3) & 0x200) != 0.
  The `beq` branch at 0x20568 targets 0x203cc and is always taken.
  The `beq` branch at 0x20578 targets 0x203c8 and is always taken.
  The `beq` branch at 0x20594 targets 0x20384 and is always taken.
  The `beq` branch at 0x205b0 targets 0x20400 and is always taken.
  The return at 0x20410 has v0 = ?.

- `setrtvector` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x205b8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x205b8-0x205dc (36 bytes).
  It occupies 36 bytes.
  The `jal` at 0x205c8 calls cause_intr_connect with a0=0x7, a1=a0 at entry (arg0), a2=0x6801, a3=a3 at entry (arg3).
  The return at 0x205d4 has v0 = ret(cause_intr_connect).

- `setkgvector` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x205dc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x205dc-0x20600 (36 bytes).
  It occupies 36 bytes.
  The `jal` at 0x205ec calls cause_intr_connect with a0=0x5, a1=a0 at entry (arg0), a2=0x4801, a3=a3 at entry (arg3).
  The return at 0x205f8 has v0 = ret(cause_intr_connect).

- `earlynofault` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2068c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2068c-0x206a4 (24 bytes).
  It occupies 24 bytes.
  The `beq` branch at 0x20690 targets 0x2069c, is taken when a1 == at(=0x1c), and falls through when a1 != at(=0x1c).
  The return at 0x2069c has v0 = one of 0x0, 0x1.

- `sendintr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x206a4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x206a4-0x20710 (108 bytes).
  It occupies 108 bytes.
  The `ld` at 0x206b0 loads 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8.
  The `lbu` at 0x206c0 loads 1 byte from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x528.
  The `lh` at 0x206d8 loads 2 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x42c.
  The `sd` at 0x20700 stores 8 bytes to (([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1068]:2 << 0x21) + one of 0x9200000001800090, 0x9200000001a00090) +0x0.
  The `beq` branch at 0x206dc targets 0x20704, is taken when a1 == at(=0xab), and falls through when a1 != at(=0xab).
  The `beq` branch at 0x20708 targets 0x206e8 and is always taken.
  The return at 0x206fc has v0 = 0x0.

- `chkdebug` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20bb4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20bb4-0x20c08 (84 bytes).
  It occupies 84 bytes.
  The `lh` at 0x20bb4 loads 2 bytes from abs 0xffffffffffffc428.
  The `ld` at 0x20bc4 loads 8 bytes from (sym(pdaindr) + ([-0x3bd8]:2 << 0x4)) +0x8.
  The `lbu` at 0x20bc8 loads 1 byte from [(sym(pdaindr) + ([-0x3bd8]:2 << 0x4))+8]:8 +0x528.
  The `ld` at 0x20bd8 loads 8 bytes from abs 0x92000000010000a0.
  The `jal` at 0x20bf4 calls dbgintr [0x20884] with a0=0x0, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x20bec targets 0x20bfc, is taken when (at(=[0x92000000010000a0]:8) & v0(?)) == 0, and falls through when (at(=[0x92000000010000a0]:8) & v0(?)) != 0.
  The return at 0x20c00 has v0 = one of ?, ret(dbgintr).

- `install_gfxintr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20c08 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20c08-0x20c74 (108 bytes).
  It occupies 108 bytes.
  The `ld` at 0x20c20 loads 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8.
  The `lbu` at 0x20c2c loads 1 byte from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x528.
  The `jal` at 0x20c44 calls intr_connect_level with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=0x0.
  The `jal` at 0x20c64 calls cmn_err with a0=0x0, a1=sym(.rodata)+43384, a2=?, a3=?.
  The `bne` branch at 0x20c4c targets 0x20c5c, is taken when v0(=ret(intr_connect_level)) != 0, and falls through when v0(=ret(intr_connect_level)) == 0.
  The `beq` branch at 0x20c6c targets 0x20c54 and is always taken.
  The return at 0x20c54 has v0 = one of ret(intr_connect_level), ret(cmn_err).

- `intr_reserve_hardwired` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20d84 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20d84-0x20ee0 (348 bytes).
  It occupies 348 bytes.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x20dd0, `sb` at 0x20e8c.
  The `lw` at 0x20de4 loads 4 bytes from ?.
  The `ld` at 0x20df0 loads 8 bytes from ?.
  The `lb` at 0x20e0c loads 1 byte from ?.
  The `ld` at 0x20e50 loads 8 bytes from table(sym(pdaindr)) +0x8.
  The `lh` at 0x20e54 loads 2 bytes from [table(sym(pdaindr))+8]:8 +0x42a.
  The `lbu` at 0x20e60 loads 1 byte from [table(sym(pdaindr))+8]:8 +0x528.
  The `lbu` at 0x20e70 loads 1 byte from ?.
  The `lb` at 0x20e80 loads 1 byte from sym(.data) +0x1e98.
  The `jal` at 0x20d98 calls cnodetocpu with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x20dec calls intr_reserve_level with a0=?, a1=?, a2=?, a3=0x0.
  The `jal` at 0x20e38 calls cpu_enabled with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x20ec8 calls cmn_err with a0=0x0, a1=sym(.rodata)+43384, a2=?, a3=?.
  The `beq` branch at 0x20db8 targets 0x20ea0, is taken when at(=-0x1) == s0(?), and falls through when at(=-0x1) != s0(?).
  The `bne` branch at 0x20dcc targets 0x20dc0, is taken when a0(?) < 0x2 (signed), and falls through when a0(?) >= 0x2 (signed).
  The `beq` branch at 0x20dd4 targets 0x20ed8 and is always taken.
  The `bne` branch at 0x20df4 targets 0x20ec0, is taken when v0(=ret(intr_reserve_level)) != s2(?), and falls through when v0(=ret(intr_reserve_level)) == s2(?).
  The `bne` branch at 0x20e14 targets 0x20ddc, is taken when a1(?) != a7(=-0x1), and falls through when a1(?) == a7(=-0x1).
  The `beq` branch at 0x20e30 targets 0x20ea0, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x20e40 targets 0x20ea0, is taken when v0(=ret(cpu_enabled)) == 0, and falls through when v0(=ret(cpu_enabled)) != 0.
  The `bne` branch at 0x20e58 targets 0x20ea0, is taken when t9(=[[table(sym(pdaindr))+8]:8+1066]:2) != s3(=a0), and falls through when t9(=[[table(sym(pdaindr))+8]:8+1066]:2) == s3(=a0).
  The `bne` branch at 0x20e74 targets 0x20e1c, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `bne` branch at 0x20e90 targets 0x20ddc, is taken when a1(=[sym(hardwired_intr)]:1) != a5(=-0x1), and falls through when a1(=[sym(hardwired_intr)]:1) == a5(=-0x1).
  The `beq` branch at 0x20e98 targets 0x20e20 and is always taken.
  The `beq` branch at 0x20ed0 targets 0x20e00 and is always taken.
  The `beq` branch at 0x20ed8 targets 0x20e30 and is always taken.
  The return at 0x20eb8 has v0 = one of ret(cnodetocpu), ?, ret(cpu_enabled).

- `intr_clear_bits` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20ee0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20ee0-0x20f58 (120 bytes).
  It occupies 120 bytes.
  The `ld` at 0x20ee0 loads 8 bytes from a1 (arg1 at entry) +0x0.
  2 such `sd` accesses store 8 bytes to abs 0x9200000001000090, including `sd` at 0x20f1c, `sd` at 0x20f40.
  2 such `ld` accesses load 8 bytes from abs 0x9200000001000098, including `ld` at 0x20f20, `ld` at 0x20f44.
  The `beq` branch at 0x20ef8 targets 0x20f50, is taken when at(=[a1]:8) == 0, and falls through when at(=[a1]:8) != 0.
  The `beq` branch at 0x20f14 targets 0x20f24, is taken when (v0(=[a1]:8) & v1(?)) == 0, and falls through when (v0(=[a1]:8) & v1(?)) != 0.
  The `beq` branch at 0x20f24 targets 0x20f50, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x20f38 targets 0x20f48, is taken when (a5(=[a1]:8) & a7(?)) == 0, and falls through when (a5(=[a1]:8) & a7(?)) != 0.
  The `bne` branch at 0x20f48 targets 0x20f00, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The return at 0x20f50 has v0 = ?.

- `intr_clear_all` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x20f58 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x20f58-0x21094 (316 bytes).
  It occupies 316 bytes.
  The `sd` at 0x2100c stores 8 bytes to ((a0 << 0x21) + one of 0x92000000018000a8, 0x9200000001a000a8) +0x0.
  The `sd` at 0x21018 stores 8 bytes to ((a0 << 0x21) + one of 0x92000000018000b8, 0x9200000001a000b8) +0x0.
  The `sd` at 0x21024 stores 8 bytes to ((a0 << 0x21) + one of 0x92000000018000b0, 0x9200000001a000b0) +0x0.
  The `sd` at 0x21030 stores 8 bytes to ((a0 << 0x21) + one of 0x92000000018000c0, 0x9200000001a000c0) +0x0.
  The `jal` at 0x2102c calls intr_clear_bits [0x20ee0] with a0=a0 at entry (arg0), a1=((a0 << 0x21) + one of 0x9200000001800098, 0x9200000001a00098), a2=0x0, a3=sym(.rodata)+43384, a4=((a0 << 0x21) + one of 0x92000000018000b0, 0x9200000001a000b0), a5=((a0 << 0x21) + one of 0x92000000018000b8, 0x9200000001a000b8).
  The `jal` at 0x2104c calls intr_clear_bits [0x20ee0] with a0=a0 at entry (arg0), a1=((a0 << 0x21) + one of 0x92000000018000a0, 0x9200000001a000a0), a2=0x40, a3=sym(.rodata)+43384.
  The `bne` branch at 0x2105c targets 0x20fac, is taken when s0(?) < 0x2 (signed), and falls through when s0(?) >= 0x2 (signed).
  The return at 0x2108c has v0 = ret(intr_clear_bits).

- `intr_dumpvec` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21254 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x21254-0x215a0 (844 bytes).
  It occupies 844 bytes.
  The `lh` at 0x212ac loads 2 bytes from (sym(compact_to_nasid_node) + (a0 + a0)) +0x0.
  The `ld` at 0x212bc loads 8 bytes from abs 0xffffffffffffc400.
  The `ld` at 0x212c8 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `ld` at 0x212e4 loads 8 bytes from ([[-0x3c00]:8]:8 + (a0 << 0x3)) +0x0.
  The `ld` at 0x21364 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800098, 0x92000000018000a0, 0x9200000001a00098, 0x9200000001a000a0) +0x0.
  The `ld` at 0x21388 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x92000000018000a8, 0x92000000018000b0, 0x9200000001a000a8, 0x9200000001a000b0) +0x0.
  The `ld` at 0x213a8 loads 8 bytes from (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x92000000018000b8, 0x92000000018000c0, 0x9200000001a000b8, 0x9200000001a000c0) +0x0.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x213cc, `lw` at 0x213e8, `lw` at 0x213ec.
  The `jalr` at 0x213c4 calls (unknown callee) with a0=sym(.rodata)+43384, a1=a0 at entry (arg0), a2=?, a3=?, a4=(([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800098, 0x92000000018000a0, 0x9200000001a00098, 0x9200000001a000a0), a5=one of 0x98, 0xa0, 0x200098, 0x2000a0.
  The `jalr` at 0x213dc calls (unknown callee) with a0=sym(.rodata)+43384, a1=?, a2=?, a3=?.
  The `jalr` at 0x213f0 calls (unknown callee) with a0=sym(.rodata)+43384, a1=?, a2=?, a3=?.
  The `jalr` at 0x21404 calls (unknown callee) with a0=sym(.rodata)+43384, a1=?, a2=?, a3=?.
  The `jalr` at 0x21414 calls (unknown callee) with a0=sym(.rodata)+43384, a1=?, a2=?, a3=?.
  The `jal` at 0x21450 calls dump_vector [0x21094] with a0=?, a1=?, a2=?, a3=?, a6=a1 at entry (arg1).
  The `jalr` at 0x214a8 calls (unknown callee) with a0=sym(.rodata)+43384, a1=?, a2=?, a3=?.
  The `jalr` at 0x21560 calls (unknown callee) with a0=sym(.rodata)+43384, a1=?, a2=?, a3=?.
  The `jalr` at 0x21578 calls (unknown callee) with a0=sym(.rodata)+43384, a1=a0 at entry (arg0), a2=a0 at entry (arg0), a3=a3 at entry (arg3).
  The `jalr` at 0x21590 calls (unknown callee) with a0=sym(.rodata)+43384, a1=a0 at entry (arg0), a2=a0 at entry (arg0), a3=[(sym(compact_to_nasid_node) + (a0 + a0))]:2, a4=(a0 + a0).
  The `bltz` branch at 0x21288 targets 0x21570, is taken when a0 < 0 (signed), and falls through when a0 >= 0 (signed).
  The `beq` branch at 0x21298 targets 0x21570, is taken when a0 >= at(=[sym(numnodes)]) (signed), and falls through when a0 < at(=[sym(numnodes)]) (signed).
  The `beq` branch at 0x212b4 targets 0x21588, is taken when a3(=[(sym(compact_to_nasid_node) + (a0 + a0))]:2) == v0(=-0x1), and falls through when a3(=[(sym(compact_to_nasid_node) + (a0 + a0))]:2) != v0(=-0x1).
  The `beq` branch at 0x2132c targets 0x21518, is taken when s7(?) == 0, and falls through when s7(?) != 0.
  The `beq` branch at 0x2133c targets 0x21524, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x21360 targets 0x21530, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x21384 targets 0x21540, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x213a4 targets 0x21550, is taken when s6(?) == 0, and falls through when s6(?) != 0.
  The `beq` branch at 0x213d0 targets 0x21560, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x21424 targets 0x2146c and is always taken.
  The `beq` branch at 0x21460 targets 0x214a4, is taken when s0(?) >= 0x40 (signed), and falls through when s0(?) < 0x40 (signed).
  The `bne` branch at 0x21484 targets 0x2142c, is taken when (a7(?) & 0x1) != 0, and falls through when (a7(?) & 0x1) == 0.
  The `bne` branch at 0x2148c targets 0x2142c, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x2149c targets 0x2146c, is taken when s0(?) < 0x40 (signed), and falls through when s0(?) >= 0x40 (signed).
  The `bne` branch at 0x214c4 targets 0x2132c, is taken when s7(?) < 0x2 (signed), and falls through when s7(?) >= 0x2 (signed).
  The `bne` branch at 0x214e0 targets 0x21304, is taken when s6(?) < 0x2 (signed), and falls through when s6(?) >= 0x2 (signed).
  The `beq` branch at 0x2151c targets 0x21338 and is always taken.
  The `beq` branch at 0x21528 targets 0x2134c and is always taken.
  The `beq` branch at 0x21538 targets 0x21370 and is always taken.
  The `beq` branch at 0x21548 targets 0x21394 and is always taken.
  The `beq` branch at 0x21558 targets 0x213ac and is always taken.
  The `beq` branch at 0x21568 targets 0x213e4 and is always taken.
  The `beq` branch at 0x21580 targets 0x214ec and is always taken.
  The `beq` branch at 0x21598 targets 0x214ec and is always taken.
  The return at 0x21510 has v0 = ret(?).

- `intpend0_intrd` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x216ec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x216ec-0x21720 (52 bytes).
  It occupies 52 bytes.
  The `ld` at 0x216f0 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ld` at 0x21704 loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `jalr` at 0x21700 calls (unknown callee) with a0=[a0+16]:8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x21708 calls ipsema with a0=a0+32, a1=?, a2=?, a3=?.
  The return at 0x21718 has v0 = ret(ipsema).

- `intpend0_intrd_start` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21720 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x21720-0x2179c (124 bytes).
  It occupies 124 bytes.
  The `lh` at 0x21734 loads 2 bytes from a0 (arg0 at entry) +0x40.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc020, including `ld` at 0x21738, `ld` at 0x21754.
  The `ld` at 0x21750 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `ll` at 0x21770 loads 4 bytes from a0 (arg0 at entry) +0x18.
  The `sc` at 0x21778 stores 4 bytes to a0 (arg0 at entry) +0x18.
  The `jal` at 0x21730 calls setmustrun with a0=[a0+64]:2, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x21740 calls xthread_set_func with a0=[-0x3fe0]:8, a1=sym(intpend0_intrd), a2=a0 at entry (arg0), a3=?.
  The `jal` at 0x2174c calls fetch_kname with a0=[a0]:8, a1=sp-32, a2=?, a3=?.
  The `jal` at 0x21760 calls strncpy with a0=[-0x3fe0]:8+848, a1=ret(fetch_kname), a2=0x10, a3=?.
  The `jal` at 0x21784 calls ipsema with a0=a0+32, a1=[a0+24], a2=a0+24, a3=0x400, a4=([a0+24] | 0x400).
  The `beql` branch at 0x2177c targets 0x21770, is taken when a4(=([a0+24] | 0x400)) == 0, and falls through when a4(=([a0+24] | 0x400)) != 0; its branch-likely delay slot `nop` at 0x21780 runs only when taken and is annulled on fall-through.
  The return at 0x21794 has v0 = ret(ipsema).

- `ip26_enable_ucmem` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21dbc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x21dbc-0x21dc4 (8 bytes).
  It occupies 8 bytes.
  The return at 0x21dbc has v0 = ?.

- `splhi` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21dec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x21dec-0x21e04 (24 bytes).
  It occupies 24 bytes.
  The return at 0x21dfc has v0 = ?.

- `hubio_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21f18
  **Inferred.** A 28-byte wrapper. The `jal` at 0x21f20 forwards its argument registers to `early_brl1_port_init`, and the return at 0x21f2c returns that callee's v0. The name suggests hub I/O setup, but the body only calls the port-init routine.
  Reviewed: 2026-11-12 (sonnet)

- `hub_pio_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x21f34 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x21f34-0x22094 (352 bytes).
  It occupies 352 bytes.
  The `lh` at 0x21f6c loads 2 bytes from ?.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x21f94, `sw` at 0x21f9c, `sw` at 0x2200c.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x21fa8, `sd` at 0x21fc8, `sd` at 0x21fd0.
  The `sb` at 0x21fdc stores 1 byte to ?.
  The `sh` at 0x22018 stores 2 bytes to ?.
  The `sd` at 0x2202c stores 8 bytes to table(0x9200000001c00160) +0x0.
  The `jal` at 0x21f4c calls hwgraph_info_get_LBL with a0=a0 at entry (arg0), a1=sym(.rodata)+45112, a2=sp-32, a3=a3 at entry (arg3).
  The `jal` at 0x22034 calls hub_set_piomode with a0=?, a1=0x1, a2=?, a3=?, a5=table(0x9200000001c00000).
  The `jal` at 0x22054 calls init_sv with a0=?, a1=0x0, a2=sym(.rodata)+45112, a3=-0x1.
  The `jal` at 0x22068 calls spinlock_init with a0=?, a1=sym(.rodata)+45112, a2=?, a3=?.
  The `beq` branch at 0x21f88 targets 0x2207c and is always taken.
  The `beq` branch at 0x21fb4 targets 0x21fe8, is taken when a2(?) >= 0x10 (signed), and falls through when a2(?) < 0x10 (signed).
  The `bne` branch at 0x21fd8 targets 0x21f90, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x21fe0 targets 0x21f94 and is always taken.
  The `bne` branch at 0x22028 targets 0x21ff0, is taken when a3(?) < 0x6 (signed), and falls through when a3(?) >= 0x6 (signed).
  The `beq` branch at 0x2208c targets 0x21fc0 and is always taken.
  The return at 0x22074 has v0 = ret(spinlock_init).

- `hub_piomap_alloc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22094 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22094-0x223ac (792 bytes).
  It occupies 792 bytes.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x22174, `ld` at 0x22210, `ld` at 0x222ec.
  4 such `sd` accesses store 8 bytes to ?, including `sd` at 0x2217c, `sd` at 0x222e4, `sd` at 0x22310.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x221f4, `lw` at 0x22270, `lw` at 0x22338.
  The `lbu` at 0x2221c loads 1 byte from ?.
  3 such `lh` accesses load 2 bytes from ?, including `lh` at 0x22228, `lh` at 0x222b8, `lh` at 0x22340.
  2 such `sh` accesses store 2 bytes to ?, including `sh` at 0x22230, `sh` at 0x22350.
  4 such `sw` accesses store 4 bytes to ?, including `sw` at 0x22284, `sw` at 0x22320, `sw` at 0x2235c.
  2 such `sb` accesses store 1 byte to ?, including `sb` at 0x2231c, `sb` at 0x2233c.
  The `jal` at 0x220c4 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x220d4 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x220e0 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22124 calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+45112, a2=sp-112, a3=?.
  The `jal` at 0x221bc calls mutex_spinlock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2223c calls mutex_spinunlock with a0=?, a1=ret(mutex_spinlock), a2=?, a3=?.
  The `jal` at 0x222a0 calls mutex_spinunlock with a0=?, a1=ret(mutex_spinlock), a2=?, a3=?.
  The `jal` at 0x22368 calls mutex_spinunlock with a0=?, a1=ret(mutex_spinlock), a2=?, a3=?.
  The `jal` at 0x22380 calls sv_wait with a0=?, a1=0x19, a2=?, a3=ret(mutex_spinlock).
  The `beq` branch at 0x220ec targets 0x22120, is taken when s0(=a3) >= s1(=a4) (unsigned), and falls through when s0(=a3) < s1(=a4) (unsigned).
  The `bne` branch at 0x22144 targets 0x22188, is taken when a2(=0x1000000) < a3(=(a2 + a3)) (unsigned), and falls through when a2(=0x1000000) >= a3(=(a2 + a3)) (unsigned).
  The `beq` branch at 0x22168 targets 0x22180, is taken when (s3(=a5) & 0x8) == 0, and falls through when (s3(=a5) & 0x8) != 0.
  The `beq` branch at 0x22180 targets 0x220fc and is always taken.
  The `beq` branch at 0x221a0 targets 0x221b0, is taken when v0(=0x20000000) >= t8(?) (unsigned), and falls through when v0(=0x20000000) < t8(?) (unsigned).
  The `beq` branch at 0x221a8 targets 0x220fc and is always taken.
  The `beq` branch at 0x221cc targets 0x2239c and is always taken.
  The `beq` branch at 0x221e4 targets 0x2224c, is taken when a0(?) >= 0x6 (signed), and falls through when a0(?) < 0x6 (signed).
  The `beq` branch at 0x22200 targets 0x221d4, is taken when (t0(?) & 0x1) == 0, and falls through when (t0(?) & 0x1) != 0.
  The `beq` branch at 0x22208 targets 0x221d8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x22214 targets 0x221d8, is taken when a5(?) != s1(?), and falls through when a5(?) == s1(?).
  The `bne` branch at 0x22220 targets 0x221dc, is taken when a6(?) != s2(?), and falls through when a6(?) == s2(?).
  The `beq` branch at 0x22244 targets 0x220fc and is always taken.
  The `bgez` branch at 0x2224c targets 0x22268, is taken when t2(?) >= 0 (signed), and falls through when t2(?) < 0 (signed).
  The `beq` branch at 0x22258 targets 0x22360, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x22260 targets 0x2229c and is always taken.
  The `beq` branch at 0x22268 targets 0x222b4, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x22278 targets 0x22288, is taken when a0(?) >= 0x5 (signed), and falls through when a0(?) < 0x5 (signed).
  The `beq` branch at 0x22280 targets 0x22290 and is always taken.
  The `beq` branch at 0x22294 targets 0x222b0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x222a8 targets 0x220fc and is always taken.
  The `beq` branch at 0x22324 targets 0x22338, is taken when (s3(=a5) & 0x8) == 0, and falls through when (s3(=a5) & 0x8) != 0.
  The `beq` branch at 0x2234c targets 0x22390, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x22358 targets 0x22298 and is always taken.
  The `beq` branch at 0x22388 targets 0x221bc and is always taken.
  The `beq` branch at 0x22394 targets 0x22298 and is always taken.
  The `beq` branch at 0x223a4 targets 0x221f0 and is always taken.
  The return at 0x22118 has v0 = one of 0x0, ?.

- `hub_piomap_free` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x223ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x223ac-0x22498 (236 bytes).
  It occupies 236 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x28, including `lw` at 0x223ac, `lw` at 0x22448.
  The `lw` at 0x223d4 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `lh` at 0x223e0 loads 2 bytes from ?.
  The `lh` at 0x223ec loads 2 bytes from a0 (arg0 at entry) +0x24.
  The `sh` at 0x22400 stores 2 bytes to a0 (arg0 at entry) +0x24.
  The `lbu` at 0x22428 loads 1 byte from a0 (arg0 at entry) +0x26.
  The `sd` at 0x22444 stores 8 bytes to table(0x9200000001c00160) +0x0.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x28, including `sw` at 0x22460, `sw` at 0x22494.
  The `lw` at 0x22468 loads 4 bytes from ?.
  The `sw` at 0x22470 stores 4 bytes to ?.
  The `jal` at 0x223d0 calls hwgraph_info_get_LBL with a0=[a0+32], a1=sym(.rodata)+45112, a2=sp-48, a3=a3 at entry (arg3).
  The `jal` at 0x223e4 calls mutex_spinlock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2240c calls mutex_spinunlock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x22478 calls sv_signal with a0=?, a1=?, a2=table(0x9200000001c00000), a3=?.
  The `beq` branch at 0x223c0 targets 0x22414, is taken when (at(=[a0+40]) & 0x2) == 0, and falls through when (at(=[a0+40]) & 0x2) != 0.
  The `beq` branch at 0x223fc targets 0x22424, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The `beq` branch at 0x22458 targets 0x22488, is taken when (a4(=[a0+40]) & 0x4) == 0, and falls through when (a4(=[a0+40]) & 0x4) != 0.
  The `beq` branch at 0x22480 targets 0x22404 and is always taken.
  The `beq` branch at 0x22490 targets 0x22474 and is always taken.
  The return at 0x2241c has v0 = one of ?, ret(mutex_spinunlock).

- `hub_piomap_addr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22498 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22498-0x224f8 (96 bytes).
  It occupies 96 bytes.
  The `ld` at 0x22498 loads 8 bytes from a0 (arg0 at entry) +0x8.
  The `ld` at 0x224a8 loads 8 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x224bc loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `ld` at 0x224d0 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `bne` branch at 0x224a0 targets 0x224e8, is taken when a1 < v0(=[a0+8]:8) (unsigned), and falls through when a1 >= v0(=[a0+8]:8) (unsigned).
  The `bne` branch at 0x224b4 targets 0x224f0, is taken when v1(=([a0+8]:8 + [a0+16]:8)) < a3(=(a1 + a2)) (unsigned), and falls through when v1(=([a0+8]:8 + [a0+16]:8)) >= a3(=(a1 + a2)) (unsigned).
  The `beq` branch at 0x224c4 targets 0x224e0, is taken when (a4(=[a0+40]) & 0x1) == 0, and falls through when (a4(=[a0+40]) & 0x1) != 0.
  The return at 0x224e0 has v0 = one of 0x0, ?.
  The return at 0x224e8 has v0 = 0x0.
  The return at 0x224f0 has v0 = 0x0.

- `hub_piomap_done` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x224f8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x224f8-0x22500 (8 bytes).
  It occupies 8 bytes.
  The return at 0x224f8 has v0 = ?.

- `hub_piotrans_addr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22500 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22500-0x225c4 (196 bytes).
  It occupies 196 bytes.
  The `jal` at 0x2251c calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22528 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22534 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22544 calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+45112, a2=sp-64, a3=?.
  The `jal` at 0x22588 calls hub_piomap_addr with a0=?, a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=?.
  The `bne` branch at 0x22558 targets 0x225ac, is taken when at(=0x1000000) < v0(=(a2 + a3)) (unsigned), and falls through when at(=0x1000000) >= v0(=(a2 + a3)) (unsigned).
  The `beq` branch at 0x2259c targets 0x225a8, is taken when (s2(=a4) & 0x8) == 0, and falls through when (s2(=a4) & 0x8) != 0.
  The return at 0x225bc has v0 = one of 0x0, ?.

- `hub_dma_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x225c4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x225c4-0x225cc (8 bytes).
  It occupies 8 bytes.
  The return at 0x225c4 has v0 = ?.

- `hub_dmamap_alloc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x225cc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x225cc-0x2264c (128 bytes).
  It occupies 128 bytes.
  The `sw` at 0x22610 stores 4 bytes to ret(kern_malloc) +0x0.
  2 such `sw` accesses store 4 bytes to ret(kern_malloc) +0xc, including `sw` at 0x22618, `sw` at 0x2263c.
  The `sw` at 0x22624 stores 4 bytes to ret(kern_malloc) +0x8.
  The `sb` at 0x22638 stores 1 byte to ret(kern_malloc) +0x4.
  The `jal` at 0x225dc calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x225e8 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x225f4 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22604 calls kern_malloc with a0=0x10, a1=?, a2=?, a3=?.
  The `beq` branch at 0x22634 targets 0x22640, is taken when (at(=a3) & 0x1) == 0, and falls through when (at(=a3) & 0x1) != 0.
  The return at 0x22644 has v0 = ret(kern_malloc).

- `hub_dmamap_free` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2264c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2264c-0x22674 (40 bytes).
  It occupies 40 bytes.
  The `lw` at 0x22650 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x22664 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `jal` at 0x22660 calls kern_free with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x2266c has v0 = ret(kern_free).

- `hub_dmamap_addr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22674 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22674-0x226d0 (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x22674 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x226ac stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `lw` at 0x226b8 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jal` at 0x226bc calls cmn_err with a0=0x4, a1=sym(.rodata)+45112, a2=[a0], a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=([a0+12] | 0x2).
  The `beq` branch at 0x2268c targets 0x226a8, is taken when (a4(=[a0+12]) & 0x2) == 0, and falls through when (a4(=[a0+12]) & 0x2) != 0.
  The `beq` branch at 0x22698 targets 0x226b0, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x226a8 targets 0x226a0 and is always taken.
  The `beq` branch at 0x226c8 targets 0x226a0 and is always taken.
  The return at 0x226a0 has v0 = a1.

- `hub_dmamap_list` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x226d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x226d0-0x2272c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x226d0 loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x22708 stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `lw` at 0x22714 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jal` at 0x22718 calls cmn_err with a0=0x4, a1=sym(.rodata)+45112, a2=[a0], a3=a3 at entry (arg3), a5=a0 at entry (arg0), a6=([a0+12] | 0x2).
  The `beq` branch at 0x226e8 targets 0x22704, is taken when (a4(=[a0+12]) & 0x2) == 0, and falls through when (a4(=[a0+12]) & 0x2) != 0.
  The `beq` branch at 0x226f4 targets 0x2270c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x22704 targets 0x226fc and is always taken.
  The `beq` branch at 0x22724 targets 0x226fc and is always taken.
  The return at 0x226fc has v0 = a1.

- `hub_dmamap_done` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2272c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2272c-0x2277c (80 bytes).
  It occupies 80 bytes.
  The `lw` at 0x2272c loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `sw` at 0x2274c stores 4 bytes to a0 (arg0 at entry) +0xc.
  The `lw` at 0x22768 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jal` at 0x2276c calls cmn_err with a0=0x4, a1=sym(.rodata)+45112, a2=[a0], a3=?, a4=a0 at entry (arg0), a5=-0x3.
  The `beq` branch at 0x22744 targets 0x22758, is taken when (a2(=[a0+12]) & 0x2) == 0, and falls through when (a2(=[a0+12]) & 0x2) != 0.
  The `bne` branch at 0x22758 targets 0x22750, is taken when a3(?) != 0, and falls through when a3(?) == 0.
  The `beq` branch at 0x22774 targets 0x22750 and is always taken.
  The return at 0x22750 has v0 = one of ?, ret(cmn_err).

- `hub_dmatrans_addr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2277c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2277c-0x22784 (8 bytes).
  It occupies 8 bytes.
  The return at 0x2277c has v0 = a2.

- `hub_dmatrans_list` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22784 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22784-0x2278c (8 bytes).
  It occupies 8 bytes.
  The return at 0x22784 has v0 = a2.

- `hub_dmamap_drain` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2278c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2278c-0x22794 (8 bytes).
  It occupies 8 bytes.
  The return at 0x2278c has v0 = ?.

- `hub_dmaaddr_drain` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22794 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22794-0x2279c (8 bytes).
  It occupies 8 bytes.
  The return at 0x22794 has v0 = ?.

- `hub_dmalist_drain` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2279c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2279c-0x227a4 (8 bytes).
  It occupies 8 bytes.
  The return at 0x2279c has v0 = ?.

- `hub_intr_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x227a4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x227a4-0x227ac (8 bytes).
  It occupies 8 bytes.
  The return at 0x227a4 has v0 = ?.

- `hub_device_desc_update` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x227ac (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x227ac-0x22800 (84 bytes).
  It occupies 84 bytes.
  The `jal` at 0x227bc calls device_desc_intr_swlevel_set with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x227d0 calls sprintf with a0=sp-64, a1=sym(.rodata)+45112, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x227dc calls hwgraph_path_to_dev with a0=sp-64, a1=?, a2=?, a3=?.
  The `jal` at 0x227e8 calls device_desc_intr_target_set with a0=a0 at entry (arg0), a1=ret(hwgraph_path_to_dev), a2=?, a3=?.
  The return at 0x227f8 has v0 = ret(device_desc_intr_target_set).

- `do_hub_intr_alloc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22800 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22800-0x22a08 (520 bytes).
  It occupies 520 bytes.
  The `lw` at 0x22874 loads 4 bytes from ?.
  The `ld` at 0x228c8 loads 8 bytes from table(sym(pdaindr)) +0x8.
  The `lh` at 0x228cc loads 2 bytes from [table(sym(pdaindr))+8]:8 +0x42a.
  The `lbu` at 0x228d4 loads 1 byte from [table(sym(pdaindr))+8]:8 +0x528.
  The `lh` at 0x22900 loads 2 bytes from (sym(compact_to_nasid_node) + ([[table(sym(pdaindr))+8]:8+1066]:2 + [[table(sym(pdaindr))+8]:8+1066]:2)) +0x0.
  2 such `sw` accesses store 4 bytes to ret(kmem_alloc_node) +0x0, including `sw` at 0x22918, `sw` at 0x22a04.
  The `sb` at 0x22930 stores 1 byte to ret(kmem_alloc_node) +0x5.
  The `sd` at 0x22944 stores 8 bytes to ret(kmem_alloc_node) +0x8.
  The `sb` at 0x22958 stores 1 byte to ret(kmem_alloc_node) +0x4.
  The `sw` at 0x2295c stores 4 bytes to ret(kmem_alloc_node) +0x20.
  The `sh` at 0x22964 stores 2 bytes to ret(kmem_alloc_node) +0x24.
  The `sw` at 0x22974 stores 4 bytes to ret(kmem_alloc_node) +0x2c.
  The `sw` at 0x2297c stores 4 bytes to ret(kmem_alloc_node) +0x28.
  The `jal` at 0x22830 calls device_desc_default_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22860 calls device_desc_intr_name_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2286c calls device_desc_intr_swlevel_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x228a0 calls intr_heuristic with a0=a0 at entry (arg0), a1=?, a2=[sym(allocate_my_bit)], a3=?, a4=a2 at entry (arg2), a6=sp-92.
  The `jal` at 0x22908 calls kmem_alloc_node with a0=0x30, a1=0x1, a2=[[table(sym(pdaindr))+8]:8+1066]:2, a3=?.
  The `jal` at 0x22940 calls xwidget_info_get with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x22950 calls xwidget_info_masterid_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22980 calls hub_device_desc_update [0x227ac] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x229dc calls cmn_err with a0=0x4, a1=sym(.rodata)+45112, a2=a2 at entry (arg2), a3=?.
  The `jal` at 0x229f8 calls assfail with a0=sym(.rodata)+45112, a1=sym(.rodata)+45112, a2=0x314, a3=?.
  The `bne` branch at 0x22828 targets 0x22860, is taken when a1 != 0, and falls through when a1 == 0.
  The `bne` branch at 0x2283c targets 0x22860, is taken when v0(=ret(device_desc_default_get)) != 0, and falls through when v0(=ret(device_desc_default_get)) == 0.
  The `beq` branch at 0x22858 targets 0x2288c and is always taken.
  The `beq` branch at 0x22884 targets 0x229ac, is taken when (a0(?) & 0x1) == 0, and falls through when (a0(?) & 0x1) != 0.
  The `beq` branch at 0x228b4 targets 0x229d0, is taken when s3(?) == v1(=-0x1), and falls through when s3(?) != v1(=-0x1).
  The `beq` branch at 0x22910 targets 0x229ec, is taken when v0(=ret(kmem_alloc_node)) == 0, and falls through when v0(=ret(kmem_alloc_node)) != 0.
  The `beq` branch at 0x22948 targets 0x2295c, is taken when v0(=ret(xwidget_info_get)) == 0, and falls through when v0(=ret(xwidget_info_get)) != 0.
  The `beq` branch at 0x229ac targets 0x229bc, is taken when a4(=a3) == 0, and falls through when a4(=a3) != 0.
  The `beq` branch at 0x229b4 targets 0x22890 and is always taken.
  The `bne` branch at 0x229c0 targets 0x229b4, is taken when (a0(?) & 0x4) != 0, and falls through when (a0(?) & 0x4) == 0.
  The `beq` branch at 0x229c8 targets 0x2288c and is always taken.
  The `beq` branch at 0x229e4 targets 0x22988 and is always taken.
  The `beq` branch at 0x22a00 targets 0x2291c and is always taken.
  The return at 0x229a4 has v0 = one of ret(kmem_alloc_node), 0x0.

- `hub_intr_alloc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22a08 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22a08-0x22a24 (28 bytes).
  It occupies 28 bytes.
  The `jal` at 0x22a10 calls do_hub_intr_alloc [0x22800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x0.
  The return at 0x22a1c has v0 = ret(do_hub_intr_alloc).

- `hub_intr_alloc_nothd` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22a24 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22a24-0x22a40 (28 bytes).
  It occupies 28 bytes.
  The `jal` at 0x22a2c calls do_hub_intr_alloc [0x22800] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=0x1.
  The return at 0x22a38 has v0 = ret(do_hub_intr_alloc).

- `hub_intr_free` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22a40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22a40-0x22ab8 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x22a40 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lh` at 0x22a44 loads 2 bytes from a0 (arg0 at entry) +0x24.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x2c, including `lw` at 0x22a4c, `lw` at 0x22a84.
  The `sb` at 0x22a6c stores 1 byte to a0 (arg0 at entry) +0x5.
  The `sd` at 0x22a70 stores 8 bytes to a0 (arg0 at entry) +0x8.
  The `sw` at 0x22a78 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `jal` at 0x22a7c calls hub_intr_disconnect with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+44].
  The `jal` at 0x22a94 calls kmem_free with a0=a0 at entry (arg0), a1=0x30, a2=?, a3=[a0+44].
  The `jal` at 0x22aa4 calls intr_unreserve_level with a0=[a0+36]:2, a1=[a0+40], a2=?, a3=?.
  The `beq` branch at 0x22a64 targets 0x22a88, is taken when (a3(=[a0+44]) & 0x4) == 0, and falls through when (a3(=[a0+44]) & 0x4) != 0.
  The `beq` branch at 0x22a8c targets 0x22a9c, is taken when (a3(=[a0+44]) & 0x1) == 0, and falls through when (a3(=[a0+44]) & 0x1) != 0.
  The return at 0x22ab0 has v0 = ret(intr_unreserve_level).

- `hub_intr_connect` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22ab8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22ab8-0x22b40 (136 bytes).
  It occupies 136 bytes.
  The `lh` at 0x22ac4 loads 2 bytes from a0 (arg0 at entry) +0x24.
  The `lw` at 0x22ae8 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lw` at 0x22af4 loads 4 bytes from a0 (arg0 at entry) +0x20.
  The `sd` at 0x22b00 stores 8 bytes to a0 (arg0 at entry) +0x18.
  The `sd` at 0x22b08 stores 8 bytes to a0 (arg0 at entry) +0x10.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x2c, including `lw` at 0x22b0c, `lw` at 0x22b3c.
  The `sw` at 0x22b18 stores 4 bytes to a0 (arg0 at entry) +0x2c.
  The `jal` at 0x22af0 calls intr_connect_level with a0=[a0+36]:2, a1=[a0+40], a2=[a0+32], a3=a1 at entry (arg1), a4=a2 at entry (arg2), a5=0x0.
  The `jalr` at 0x22b30 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x22af8 targets 0x22b1c, is taken when v0(=ret(intr_connect_level)) < 0 (signed), and falls through when v0(=ret(intr_connect_level)) >= 0 (signed).
  The `bne` branch at 0x22b04 targets 0x22b30, is taken when s1(=a3) != 0, and falls through when s1(=a3) == 0.
  The `beq` branch at 0x22b38 targets 0x22b10 and is always taken.
  The return at 0x22b28 has v0 = one of ret(intr_connect_level), 0x0.

- `hub_intr_disconnect` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22b40 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22b40-0x22ba4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x22b40 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lh` at 0x22b4c loads 2 bytes from a0 (arg0 at entry) +0x24.
  The `ld` at 0x22b50 loads 8 bytes from a0 (arg0 at entry) +0x18.
  The `lw` at 0x22b70 loads 4 bytes from a0 (arg0 at entry) +0x2c.
  The `sw` at 0x22b84 stores 4 bytes to a0 (arg0 at entry) +0x2c.
  The `jal` at 0x22b68 calls intr_disconnect_level with a0=[a0+36]:2, a1=[a0+40], a2=?, a3=?.
  The `jalr` at 0x22b94 calls (unknown callee) with a0=a0 at entry (arg0), a1=[a0+40], a2=a2 at entry (arg2), a3=[a0+24]:8.
  The `bne` branch at 0x22b60 targets 0x22b94, is taken when a3(=[a0+24]:8) != 0, and falls through when a3(=[a0+24]:8) == 0.
  The `beq` branch at 0x22b9c targets 0x22b68 and is always taken.
  The return at 0x22b8c has v0 = -0x5.

- `hub_intr_cpu_get` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22ba4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22ba4-0x22bc0 (28 bytes).
  It occupies 28 bytes.
  The `lh` at 0x22ba4 loads 2 bytes from a0 (arg0 at entry) +0x24.
  The `ld` at 0x22bb4 loads 8 bytes from (sym(pdaindr) + ([a0+36]:2 << 0x4)) +0x8.
  The `lw` at 0x22bbc loads 4 bytes from [(sym(pdaindr) + ([a0+36]:2 << 0x4))+8]:8 +0x73c.
  The return at 0x22bb8 has v0 = [[(sym(pdaindr) + ([a0+36]:2 << 0x4))+8]:8+1852].

- `hub_intr_cpuid_get` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22bc0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22bc0-0x22bc8 (8 bytes).
  It occupies 8 bytes.
  The `lh` at 0x22bc4 loads 2 bytes from a0 (arg0 at entry) +0x24.
  The return at 0x22bc0 has v0 = [a0+36]:2.

- `hub_provider_startup` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22bc8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22bc8-0x22bfc (52 bytes).
  It occupies 52 bytes.
  The `jal` at 0x22bd4 calls hub_pio_init [0x21f34] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22bdc calls hub_dma_init [0x225c4] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x22be4 calls hub_intr_init [0x227a4] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0x22bf4 has v0 = ret(hub_intr_init).

- `hub_provider_shutdown` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22bfc
  **Inferred.** A 28-byte wrapper. The `jal` at 0x22c04 forwards its argument registers to `xtalk_provider_unregister`, and the return at 0x22c10 returns that callee's v0. The name suggests a hub-side provider shutdown that unregisters the Xtalk provider.
  Reviewed: 2026-11-12 (sonnet)

- `hub_check_is_widget0` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22c18 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22c18-0x22c6c (84 bytes).
  It occupies 84 bytes.
  The `bne` branch at 0x22c48 targets 0x22c60, is taken when a0 < a2(=table(0x9200000000000000)) (unsigned), and falls through when a0 >= a2(=table(0x9200000000000000)) (unsigned).
  The `beq` branch at 0x22c50 targets 0x22c64, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The return at 0x22c58 has v0 = 0x1.
  The return at 0x22c64 has v0 = 0x0.

- `hub_check_window_equiv` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22c6c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22c6c-0x22cd4 (104 bytes).
  It occupies 104 bytes.
  The `jal` at 0x22c7c calls hub_check_is_widget0 with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22c8c calls hub_check_is_widget0 with a0=a1 at entry (arg1), a1=?, a2=?, a3=?.
  The `beq` branch at 0x22c84 targets 0x22ca8, is taken when v0(=ret(hub_check_is_widget0)) == 0, and falls through when v0(=ret(hub_check_is_widget0)) != 0.
  The `beq` branch at 0x22c94 targets 0x22ca8, is taken when v0(=ret(hub_check_is_widget0)) == 0, and falls through when v0(=ret(hub_check_is_widget0)) != 0.
  The `beq` branch at 0x22c9c targets 0x22cc4 and is always taken.
  The `bne` branch at 0x22cb8 targets 0x22cc4, is taken when at(?) != v0(?), and falls through when at(?) == v0(?).
  The return at 0x22ccc has v0 = one of 0x0, 0x1.
  The instructions from 0x22ca4 to 0x22ca4 are not reached by any path from the entry, and their branches are not listed.

- `hub_check_pci_equiv` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22cd4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22cd4-0x22d5c (136 bytes).
  It occupies 136 bytes.
  The `jal` at 0x22ce8 calls hub_check_window_equiv with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22d40 calls check_nasid_equiv with a0=?, a1=?, a2=0x0, a3=?.
  The `beq` branch at 0x22cf0 targets 0x22d50, is taken when v0(=ret(hub_check_window_equiv)) == 0, and falls through when v0(=ret(hub_check_window_equiv)) != 0.
  The `beq` branch at 0x22d08 targets 0x22d28, is taken when at(?) == v0(?), and falls through when at(?) != v0(?).
  The `beq` branch at 0x22d48 targets 0x22d10 and is always taken.
  The `beq` branch at 0x22d54 targets 0x22d10 and is always taken.
  The return at 0x22d20 has v0 = one of 0x0, ret(check_nasid_equiv).

- `hub_setup_prb` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22d5c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22d5c-0x22df0 (148 bytes).
  It occupies 148 bytes.
  The `ld` at 0x22dac loads 8 bytes from table(0x9200000001c00198) +0x0.
  The `sd` at 0x22dec stores 8 bytes to table(0x9200000001c00198) +0x0.
  The `beq` branch at 0x22d64 targets 0x22d88, is taken when at(=[sym(force_fire_and_forget)]) == 0, and falls through when at(=[sym(force_fire_and_forget)]) != 0.
  The `beq` branch at 0x22d88 targets 0x22d94, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The return at 0x22de8 has v0 = ?.

- `hub_set_piomode` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22df0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22df0-0x22ee0 (240 bytes).
  It occupies 240 bytes.
  2 such `ld` accesses load 8 bytes from (a0 << 0x21) -0x6dfffffffe3ffef0, including `ld` at 0x22e2c, `ld` at 0x22e88.
  2 such `sd` accesses store 8 bytes to (a0 << 0x21) -0x6dfffffffe3ffef0, including `sd` at 0x22e30, `sd` at 0x22e80.
  The `ld` at 0x22e34 loads 8 bytes from (a0 << 0x21) -0x6dfffffffe3fffe0.
  The `jal` at 0x22e04 calls get_console_nasid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22e50 calls hub_setup_prb with a0=a0 at entry (arg0), a1=0x0, a2=0x1, a3=a1 at entry (arg1).
  The `jal` at 0x22e68 calls hub_setup_prb with a0=a0 at entry (arg0), a1=?, a2=0x3, a3=a1 at entry (arg1).
  The `jal` at 0x22e8c calls putbuf_unlock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x22eb4 calls putbuf_lock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x22ed0 calls hub_setup_prb with a0=a0 at entry (arg0), a1=0x0, a2=0x3, a3=a1 at entry (arg1).
  The `beq` branch at 0x22e18 targets 0x22eb4, is taken when s1(=a0) == v0(=ret(get_console_nasid)), and falls through when s1(=a0) != v0(=ret(get_console_nasid)).
  The `bltz` branch at 0x22e3c targets 0x22ec4, is taken when at(=([(a0 << 0x21)-7926335344142712800]:8 << 0x2e)) < 0 (signed), and falls through when at(=([(a0 << 0x21)-7926335344142712800]:8 << 0x2e)) >= 0 (signed).
  The `bne` branch at 0x22e78 targets 0x22e5c, is taken when s0(?) < 0x10 (signed), and falls through when s0(?) >= 0x10 (signed).
  The `beq` branch at 0x22e84 targets 0x22e94, is taken when s3(=one of 0x0, 0x1) == 0, and falls through when s3(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x22ebc targets 0x22e20 and is always taken.
  The `beq` branch at 0x22ed8 targets 0x22e5c and is always taken.
  The return at 0x22eac has v0 = one of [(a0 << 0x21)-7926335344142712560]:8, ret(putbuf_unlock).

- `hub_widget_flags_set` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22ee0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22ee0-0x22f28 (72 bytes).
  It occupies 72 bytes.
  The `jal` at 0x22ef8 calls hub_setup_prb with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x3, a3=0x1.
  The `jal` at 0x22f10 calls hub_setup_prb with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x3, a3=0x2.
  The `beq` branch at 0x22eec targets 0x22f08, is taken when (a2 & 0x1) == 0, and falls through when (a2 & 0x1) != 0.
  The `beq` branch at 0x22f00 targets 0x22f1c and is always taken.
  The `beq` branch at 0x22f08 targets 0x22f18, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The return at 0x22f20 has v0 = 0x1.

- `hub_device_flags_set` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x22f28 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x22f28-0x22fbc (148 bytes).
  It occupies 148 bytes.
  The `lh` at 0x22f90 loads 2 bytes from ?.
  The `jal` at 0x22f34 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x22f40 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22f4c calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x22f60 calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+45112, a2=sp-48, a3=?.
  The `jal` at 0x22f70 calls mutex_spinlock with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x22f8c calls hub_widget_flags_set with a0=?, a1=?, a2=a1 at entry (arg1), a3=?.
  The `jal` at 0x22fa0 calls mutex_spinunlock with a0=?, a1=?, a2=?, a3=?.
  The return at 0x22fb4 has v0 = ret(hub_widget_flags_set).

- `hub_device_inquiry` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x230b4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x230b4-0x23268 (436 bytes).
  It occupies 436 bytes.
  The `lh` at 0x23130 loads 2 bytes from ?.
  The `ld` at 0x23148 loads 8 bytes from table(0x9200000001c00120) +0x0.
  The `ld` at 0x2314c loads 8 bytes from table(0x9200000001c00118) +0x0.
  The `ld` at 0x23150 loads 8 bytes from table(0x9200000001c00110) +0x0.
  The `jal` at 0x230d4 calls sprintf with a0=sp-96, a1=sym(.rodata)+45112, a2=a1 at entry (arg1), a3=a3 at entry (arg3).
  The `jal` at 0x230e4 calls hwgraph_traverse with a0=a0 at entry (arg0), a1=sp-96, a2=sp-88, a3=?.
  The `jal` at 0x23100 calls device_master_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2311c calls hwgraph_info_get_LBL with a0=ret(device_master_get), a1=sym(.rodata)+45112, a2=sp-80, a3=?.
  The `jal` at 0x23164 calls cmn_err with a0=0x6, a1=sym(.rodata)+45112, a2=?, a3=entry(0x9200000001c00110), a4=entry(0x9200000001c00118), a5=entry(0x9200000001c00120).
  The `jal` at 0x23178 calls cmn_err with a0=0x6, a1=sym(.rodata)+45112, a2=?, a3=?.
  The `jal` at 0x231b0 calls cmn_err with a0=0x6, a1=sym(.rodata)+45112, a2=?, a3=?.
  The `jal` at 0x231f0 calls cmn_err with a0=0x6, a1=sym(.rodata)+45112, a2=?, a3=?.
  The `jal` at 0x23228 calls cmn_err with a0=0x6, a1=sym(.rodata)+45112, a2=sym(.rodata)+45112, a3=?.
  The `jal` at 0x23250 calls cmn_err with a0=0x6, a1=sym(.rodata)+45112, a2=sym(.rodata)+45112, a3=?.
  The `beq` branch at 0x230ec targets 0x23100, is taken when v0(=ret(hwgraph_traverse)) == 0, and falls through when v0(=ret(hwgraph_traverse)) != 0.
  The `beq` branch at 0x2310c targets 0x230f4, is taken when v0(=ret(device_master_get)) == a2(=-0x1), and falls through when v0(=ret(device_master_get)) != a2(=-0x1).
  The `beq` branch at 0x23128 targets 0x230f4, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bne` branch at 0x231a0 targets 0x231d4, is taken when (t8(?) & t9(?)) != 0, and falls through when (t8(?) & t9(?)) == 0.
  The `bne` branch at 0x231c4 targets 0x23194, is taken when s1(?) < 0x8 (signed), and falls through when s1(?) >= 0x8 (signed).
  The `beq` branch at 0x231cc targets 0x231e4 and is always taken.
  The `bne` branch at 0x231dc targets 0x23194, is taken when s1(?) < 0x8 (signed), and falls through when s1(?) >= 0x8 (signed).
  The `beq` branch at 0x23208 targets 0x2321c, is taken when (s1(?) & a2(?)) == 0, and falls through when (s1(?) & a2(?)) != 0.
  The `beq` branch at 0x23214 targets 0x23220 and is always taken.
  The `beq` branch at 0x23234 targets 0x23260, is taken when (s1(?) & s0(?)) == 0, and falls through when (s1(?) & s0(?)) != 0.
  The `beq` branch at 0x23258 targets 0x230f4 and is always taken.
  The `beq` branch at 0x23260 targets 0x23244 and is always taken.
  The return at 0x230f8 has v0 = one of ret(hwgraph_traverse), ret(device_master_get), ?, ret(cmn_err).

- `read_branch_diag` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x23270 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x23270-0x2327c (12 bytes).
  It occupies 12 bytes.
  The return at 0x23274 has v0 = ?.

- `write_branch_diag` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2327c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2327c-0x23288 (12 bytes).
  It occupies 12 bytes.
  The return at 0x23280 has v0 = ?.

- `dobootduty` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x25bfc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x25bfc-0x25d8c (400 bytes).
  It occupies 400 bytes.
  The `ld` at 0x25c3c loads 8 bytes from (sym(pdaindr) + ([sym(.sdata)+264] << 0x4)) -0x8.
  The `lh` at 0x25c4c loads 2 bytes from [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x42a.
  The `sd` at 0x25c60 stores 8 bytes to [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x440.
  The `sd` at 0x25c88 stores 8 bytes to [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x30.
  The `sd` at 0x25c90 stores 8 bytes to [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x510.
  The `sd` at 0x25ca8 stores 8 bytes to [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x580.
  7 such `lh` accesses load 2 bytes from [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x428, including `lh` at 0x25cb0, `lh` at 0x25cc0, `lh` at 0x25cd0.
  The `sd` at 0x25cb8 stores 8 bytes to [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x570.
  The `sd` at 0x25cc8 stores 8 bytes to [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x578.
  2 such `ld` accesses load 8 bytes from [(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8 +0x570, including `ld` at 0x25ccc, `ld` at 0x25d88.
  The `jal` at 0x25c58 calls kvpalloc_node with a0=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1066]:2, a1=?, a2=0x101, a3=0x0.
  The `jal` at 0x25c84 calls kern_calloc_node with a0=0x1, a1=0x538, a2=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1066]:2, a3=?.
  The `jal` at 0x25c9c calls kern_calloc_node with a0=0x1, a1=0x13c8, a2=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1066]:2, a3=?.
  The `jal` at 0x25cac calls str_init_alloc_lfvec with a0=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2, a1=?, a2=?, a3=?.
  The `jal` at 0x25cbc calls str_init_alloc_strstat with a0=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2, a1=?, a2=?, a3=?.
  The `jal` at 0x25cd4 calls str_init_slave with a0=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1392]:8, a1=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2, a2=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1066]:2, a3=?.
  The `jal` at 0x25cfc calls assfail with a0=sym(.rodata)+45664, a1=sym(.rodata)+45664, a2=0x91, a3=a3 at entry (arg3).
  The `jal` at 0x25d1c calls cmn_err with a0=0x0, a1=sym(.rodata)+45664, a2=[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8, a3=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2.
  The `jal` at 0x25d3c calls cmn_err with a0=0x0, a1=sym(.rodata)+45664, a2=[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8, a3=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2.
  The `jal` at 0x25d5c calls cmn_err with a0=0x0, a1=sym(.rodata)+45664, a2=[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8, a3=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2.
  The `jal` at 0x25d7c calls cmn_err with a0=0x0, a1=sym(.rodata)+45664, a2=[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8, a3=[[(sym(pdaindr) + ([sym(.sdata)+264] << 0x4))-8]:8+1064]:2.
  The `blez` branch at 0x25c10 targets 0x25cf4, is taken when at(=[sym(.sdata)+264]) <= 0 (signed), and falls through when at(=[sym(.sdata)+264]) > 0 (signed).
  The `bne` branch at 0x25c20 targets 0x25cf8, is taken when a0(=[sym(maxcpus)]) < v0(=[sym(.sdata)+264]) (signed), and falls through when a0(=[sym(maxcpus)]) >= v0(=[sym(.sdata)+264]) (signed).
  The `beq` branch at 0x25c8c targets 0x25d0c, is taken when v0(=ret(kern_calloc_node)) == 0, and falls through when v0(=ret(kern_calloc_node)) != 0.
  The `beq` branch at 0x25ca4 targets 0x25d2c, is taken when v0(=ret(kern_calloc_node)) == 0, and falls through when v0(=ret(kern_calloc_node)) != 0.
  The `beq` branch at 0x25cb4 targets 0x25d4c, is taken when v0(=ret(str_init_alloc_lfvec)) == 0, and falls through when v0(=ret(str_init_alloc_lfvec)) != 0.
  The `beq` branch at 0x25cc4 targets 0x25d6c, is taken when v0(=ret(str_init_alloc_strstat)) == 0, and falls through when v0(=ret(str_init_alloc_strstat)) != 0.
  The `beq` branch at 0x25d04 targets 0x25c28 and is always taken.
  The `beq` branch at 0x25d24 targets 0x25c98 and is always taken.
  The `beq` branch at 0x25d44 targets 0x25cac and is always taken.
  The `beq` branch at 0x25d64 targets 0x25cbc and is always taken.
  The `beq` branch at 0x25d84 targets 0x25cd0 and is always taken.
  The return at 0x25cec has v0 = ret(str_init_slave).

- `stopprfclk` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x277dc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x277dc-0x2785c (128 bytes).
  It occupies 128 bytes.
  2 such `lw` accesses load 4 bytes from abs 0xffffffffffffc598, including `lw` at 0x277ec, `lw` at 0x27814.
  The `ll` at 0x277fc loads 4 bytes from abs 0xffffffffffffc598.
  The `sc` at 0x27808 stores 4 bytes to abs 0xffffffffffffc598.
  The `lh` at 0x27820 loads 2 bytes from abs 0xffffffffffffc428.
  The `jal` at 0x277e4 calls splprof with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x27838 calls splx with a0=ret(splprof), a1=?, a2=?, a3=?.
  The `jal` at 0x2784c calls slowkgclock with a0=[sym(audioclock)], a1=[-0x3a68]-1, a2=[-0x3a68]-1, a3=[-0x3bd8]:2, a4=[sym(master_procid)]:2.
  The `beq` branch at 0x277f4 targets 0x27838, is taken when at(=[-0x3a68]) == 0, and falls through when at(=[-0x3a68]) != 0.
  The `beql` branch at 0x2780c targets 0x277fc, is taken when a2(=[-0x3a68]-1) == 0, and falls through when a2(=[-0x3a68]-1) != 0; its branch-likely delay slot `nop` at 0x27810 runs only when taken and is annulled on fall-through.
  The `bne` branch at 0x27818 targets 0x27838, is taken when v1(=[-0x3a68]) != 0, and falls through when v1(=[-0x3a68]) == 0.
  The `bne` branch at 0x27828 targets 0x2784c, is taken when a3(=[-0x3bd8]:2) != a4(=[sym(master_procid)]:2), and falls through when a3(=[-0x3bd8]:2) == a4(=[sym(master_procid)]:2).
  The `beq` branch at 0x27830 targets 0x2784c, is taken when a0(=[sym(audioclock)]) == 0, and falls through when a0(=[sym(audioclock)]) != 0.
  The `beq` branch at 0x27854 targets 0x27838 and is always taken.
  The return at 0x27844 has v0 = ret(splx).

- `set_timer_intr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x27fe4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x27fe4-0x28114 (304 bytes).
  It occupies 304 bytes.
  2 such `ld` accesses load 8 bytes from abs 0x9200000001030100, including `ld` at 0x2800c, `ld` at 0x2805c.
  The `ld` at 0x2801c loads 8 bytes from (sym(pdaindr) + (a0 << 0x4)) +0x8.
  The `lh` at 0x28020 loads 2 bytes from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x42c.
  The `lbu` at 0x28024 loads 1 byte from [(sym(pdaindr) + (a0 << 0x4))+8]:8 +0x528.
  The `sd` at 0x28050 stores 8 bytes to (([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1068]:2 << 0x21) + one of 0x9200000001800110, 0x9200000001a00110) +0x0.
  2 such `lh` accesses load 2 bytes from abs 0xffffffffffffc428, including `lh` at 0x28058, `lh` at 0x28098.
  The `sd` at 0x280cc stores 8 bytes to (([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1068]:2 << 0x21) + one of 0x9200000001800108, 0x9200000001a00108) +0x0.
  The `jal` at 0x280a4 calls timepoke with a0=(a0 << 0x30), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=a0 at entry (arg0), a7=(a0 << 0x4).
  The `jal` at 0x280d8 calls cpuaction with a0=?, a1=sym(timepoke), a2=0x1, a3=a3 at entry (arg3), a5=a0 at entry (arg0), a7=(a0 << 0x4).
  The `jal` at 0x280e8 calls timepoke with a0=([[(sym(pdaindr) + (a0 << 0x4))+8]:8+1068]:2 << 0x21), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0x9200000001030100]:8, a5=a0 at entry (arg0), a6=0x6dfffffffe800000.
  The `jal` at 0x28104 calls cpuaction with a0=?, a1=sym(timepoke), a2=0x1, a3=a3 at entry (arg3), a4=[0x9200000001030100]:8, a5=a0 at entry (arg0), a6=0x6dfffffffe800000.
  The `beq` branch at 0x28008 targets 0x28098, is taken when a1 == 0, and falls through when a1 != 0.
  The `blez` branch at 0x28014 targets 0x28098, is taken when at(?) <= 0 (signed), and falls through when at(?) > 0 (signed).
  The `beq` branch at 0x2803c targets 0x280b4, is taken when (a4(=[[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1) & 0x1) == 0, and falls through when (a4(=[[(sym(pdaindr) + (a0 << 0x4))+8]:8+1320]:1) & 0x1) != 0.
  The `bne` branch at 0x28060 targets 0x2807c, is taken when t3(=[-0x3bd8]:2) != a5(=a0), and falls through when t3(=[-0x3bd8]:2) == a5(=a0).
  The `bne` branch at 0x2806c targets 0x2808c, is taken when a4(=[0x9200000001030100]:8) < a1 (unsigned), and falls through when a4(=[0x9200000001030100]:8) >= a1 (unsigned).
  The `beq` branch at 0x28074 targets 0x280e8 and is always taken.
  The `beq` branch at 0x28084 targets 0x280f8, is taken when t9(=[0x9200000001030100]:8+2) >= a1 (unsigned), and falls through when t9(=[0x9200000001030100]:8+2) < a1 (unsigned).
  The `bne` branch at 0x2809c targets 0x280d0, is taken when ra(=[-0x3bd8]:2) != a5(=a0), and falls through when ra(=[-0x3bd8]:2) == a5(=a0).
  The `beq` branch at 0x280ac targets 0x2808c and is always taken.
  The `beq` branch at 0x280c8 targets 0x28054 and is always taken.
  The `beq` branch at 0x280e0 targets 0x280ac and is always taken.
  The `beq` branch at 0x280f0 targets 0x2810c and is always taken.
  The `beq` branch at 0x2810c targets 0x2808c and is always taken.
  The return at 0x28090 has v0 = one of 0x0, 0x1.

- `clkset` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x295c0
  **Inferred.** A 28-byte wrapper. The `jal` at 0x295c8 forwards its argument registers to `inittodr`, and the return at 0x295d4 returns that callee's v0. The name suggests clock setup, but the body writes no clock register itself and only relays to the time-of-day routine.
  Reviewed: 2026-11-12 (sonnet)

- `hub_rtc_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x29ebc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x29ebc-0x29f84 (200 bytes).
  It occupies 200 bytes.
  The `lh` at 0x29f08 loads 2 bytes from (sym(compact_to_nasid_node) + (a0 + a0)) +0x0.
  The `sd` at 0x29f58 stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800140, 0x9200000001a00140) +0x0.
  The `sd` at 0x29f64 stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800148, 0x9200000001a00148) +0x0.
  The `sd` at 0x29f6c stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800150, 0x9200000001a00150) +0x0.
  The `sd` at 0x29f74 stores 8 bytes to (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800158, 0x9200000001a00158) +0x0.
  The `jal` at 0x29ec8 calls get_compact_nodeid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x29ed4 targets 0x29f78, is taken when s0(=a0) != v0(=ret(get_compact_nodeid)), and falls through when s0(=a0) == v0(=ret(get_compact_nodeid)).
  The `bne` branch at 0x29f70 targets 0x29f1c, is taken when a2(?) < 0x2 (signed), and falls through when a2(?) >= 0x2 (signed).
  The return at 0x29f7c has v0 = one of ret(get_compact_nodeid), (([(sym(compact_to_nasid_node) + (a0 + a0))]:2 << 0x21) + one of 0x9200000001800150, 0x9200000001a00150).

- `hub_xtalk_link_up` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2ae50 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2ae50-0x2ae78 (40 bytes).
  It occupies 40 bytes.
  The `ld` at 0x2ae5c loads 8 bytes from (a0 << 0x21) -0x6dfffffffe3ffed8.
  The `beq` branch at 0x2ae64 targets 0x2ae70, is taken when (at(=[(a0 << 0x21)-7926335344142712536]:8) & 0x2000) == 0, and falls through when (at(=[(a0 << 0x21)-7926335344142712536]:8) & 0x2000) != 0.
  The return at 0x2ae70 has v0 = one of 0x0, 0x1.

- `intrgroup_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2c8d8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2c8d8-0x2c988 (176 bytes).
  It occupies 176 bytes.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x2c904, `sd` at 0x2c940.
  The `sw` at 0x2c94c stores 4 bytes to ?.
  The `jal` at 0x2c90c calls spinlock_init with a0=sym(.bss)+45120, a1=sym(.rodata)+48512, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2c950 calls spinlock_init with a0=?, a1=sym(.rodata)+48512, a2=?, a3=?.
  The `bne` branch at 0x2c900 targets 0x2c8f0, is taken when a1(?) < 0x8 (signed), and falls through when a1(?) >= 0x8 (signed).
  The `bne` branch at 0x2c93c targets 0x2c92c, is taken when a1(?) < 0x8 (signed), and falls through when a1(?) >= 0x8 (signed).
  The `bne` branch at 0x2c96c targets 0x2c928, is taken when s0(?) < 0x10 (signed), and falls through when s0(?) >= 0x10 (signed).
  The return at 0x2c980 has v0 = ret(spinlock_init).

- `intrgroup_alloc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2c988 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2c988-0x2ca6c (228 bytes).
  It occupies 228 bytes.
  The `ld` at 0x2c9c4 loads 8 bytes from ?.
  2 such `sd` accesses store 8 bytes to ?, including `sd` at 0x2ca0c, `sd` at 0x2ca2c.
  The `sd` at 0x2ca4c stores 8 bytes to table(sym(.bss)+45120) +0x48.
  The `jal` at 0x2c9a4 calls mutex_spinlock with a0=sym(.bss)+45120, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2c9f0 calls mutex_spinunlock with a0=sym(.bss)+45120, a1=ret(mutex_spinlock), a2=?, a3=?, a7=table(sym(.bss)+45120).
  The `jal` at 0x2ca34 calls mutex_spinunlock with a0=sym(.bss)+45120, a1=ret(mutex_spinlock), a2=?, a3=?.
  The `jal` at 0x2ca44 calls kmem_zalloc with a0=([sym(maxcpus)] << 0x2), a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x2c9cc targets 0x2ca00, is taken when (a5(?) & a6(?)) == 0, and falls through when (a5(?) & a6(?)) != 0.
  The `bne` branch at 0x2c9e4 targets 0x2c9c0, is taken when a4(?) < 0x10 (signed), and falls through when a4(?) >= 0x10 (signed).
  The `beq` branch at 0x2c9f8 targets 0x2ca50 and is always taken.
  The `bne` branch at 0x2ca28 targets 0x2ca18, is taken when t0(?) < 0x8 (signed), and falls through when t0(?) >= 0x8 (signed).
  The return at 0x2ca64 has v0 = one of 0x0, table(sym(.bss)+45120).

- `intrgroup_join` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2ca6c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2ca6c-0x2cbd0 (356 bytes).
  It occupies 356 bytes.
  The `ld` at 0x2caa8 loads 8 bytes from ?.
  The `sd` at 0x2caf0 stores 8 bytes to ?.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x40, including `lw` at 0x2caf4, `lw` at 0x2cb38, `lw` at 0x2cba0.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x48, including `ld` at 0x2cb50, `ld` at 0x2cb70, `ld` at 0x2cbcc.
  The `sb` at 0x2cb68 stores 1 byte to ([a0+72]:8 + (a1 << 0x2)) +0x0.
  The `ld` at 0x2cb6c loads 8 bytes from (sym(pdaindr) + (a1 << 0x4)) +0x8.
  The `lh` at 0x2cb7c loads 2 bytes from [(sym(pdaindr) + (a1 << 0x4))+8]:8 +0x42c.
  The `sh` at 0x2cb88 stores 2 bytes to ([a0+72]:8 + (a1 << 0x2)) +0x2.
  The `jal` at 0x2ca90 calls mutex_spinlock with a0=a0+68, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2cac0 calls mutex_spinunlock with a0=a0+68, a1=ret(mutex_spinlock), a2=?, a3=?.
  The `jal` at 0x2caf8 calls sprintf with a0=sp-64, a1=sym(.rodata)+48512, a2=[a0+64], a3=?.
  The `jal` at 0x2cb14 calls intr_reserve_level with a0=a1 at entry (arg1), a1=-0x1, a2=0x0, a3=-0x1, a4=sp-64.
  The `jal` at 0x2cb3c calls intr_connect_level with a0=a1 at entry (arg1), a1=ret(intr_reserve_level), a2=0x0, a3=sym(groupintr), a4=[a0+64], a5=0x0.
  The `jal` at 0x2cb84 calls mutex_spinunlock with a0=a0+68, a1=ret(mutex_spinlock), a2=?, a3=?, a5=[[(sym(pdaindr) + (a1 << 0x4))+8]:8+1068]:2, a6=([a0+72]:8 + (a1 << 0x2)), a7=(a1 << 0x2).
  The `jal` at 0x2cba4 calls cmn_err with a0=0x0, a1=sym(.rodata)+48512, a2=ret(intr_reserve_level), a3=[a0+64].
  The `jal` at 0x2cbc0 calls cmn_err with a0=0x0, a1=sym(.rodata)+48512, a2=ret(intr_reserve_level), a3=[a0+64], a4=-0x1.
  The `beq` branch at 0x2cab4 targets 0x2cae4, is taken when (a5(?) & a7(?)) == 0, and falls through when (a5(?) & a7(?)) != 0.
  The `beq` branch at 0x2cb20 targets 0x2cb94, is taken when v0(=ret(intr_reserve_level)) == a3(=-0x1), and falls through when v0(=ret(intr_reserve_level)) != a3(=-0x1).
  The `beq` branch at 0x2cb48 targets 0x2cbb4, is taken when v0(=ret(intr_connect_level)) == a4(=-0x1), and falls through when v0(=ret(intr_connect_level)) != a4(=-0x1).
  The `beq` branch at 0x2cb8c targets 0x2cac8 and is always taken.
  The `beq` branch at 0x2cbac targets 0x2cb2c and is always taken.
  The `beq` branch at 0x2cbc8 targets 0x2cb54 and is always taken.
  The return at 0x2cadc has v0 = ret(mutex_spinunlock).

- `intrgroup_unjoin` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2cbd0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2cbd0-0x2cce4 (276 bytes).
  It occupies 276 bytes.
  The `ld` at 0x2cc0c loads 8 bytes from ?.
  The `sd` at 0x2cc2c stores 8 bytes to ?.
  5 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x48, including `ld` at 0x2cc30, `ld` at 0x2cc58, `ld` at 0x2cc6c.
  2 such `lbu` accesses load 1 byte from ([a0+72]:8 + (a1 << 0x2)) +0x0, including `lbu` at 0x2cc3c, `lbu` at 0x2cc68.
  The `sb` at 0x2cc74 stores 1 byte to ([a0+72]:8 + (a1 << 0x2)) +0x0.
  The `sh` at 0x2cc90 stores 2 bytes to ([a0+72]:8 + (a1 << 0x2)) +0x2.
  The `lw` at 0x2ccd0 loads 4 bytes from a0 (arg0 at entry) +0x40.
  The `jal` at 0x2cbf4 calls mutex_spinlock with a0=a0+68, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2cc44 calls intr_disconnect_level with a0=a1 at entry (arg1), a1=[([a0+72]:8 + (a1 << 0x2))]:1, a2=?, a3=?.
  The `jal` at 0x2cc64 calls intr_unreserve_level with a0=a1 at entry (arg1), a1=[([a0+72]:8 + (a1 << 0x2))]:1, a2=?, a3=?.
  The `jal` at 0x2cc8c calls mutex_spinunlock with a0=a0+68, a1=ret(mutex_spinlock), a2=-0x1, a3=([a0+72]:8 + (a1 << 0x2)), a4=([a0+72]:8 + (a1 << 0x2)).
  The `jal` at 0x2ccb8 calls mutex_spinunlock with a0=a0+68, a1=ret(mutex_spinlock), a2=?, a3=?.
  The `jal` at 0x2ccd4 calls cmn_err with a0=0x0, a1=sym(.rodata)+48512, a2=[([a0+72]:8 + (a1 << 0x2))]:1, a3=[a0+64].
  The `beq` branch at 0x2cc1c targets 0x2ccb4, is taken when (a5(?) & a7(?)) == 0, and falls through when (a5(?) & a7(?)) != 0.
  The `beq` branch at 0x2cc50 targets 0x2ccc8, is taken when v0(=ret(intr_disconnect_level)) == a3(=-0x1), and falls through when v0(=ret(intr_disconnect_level)) != a3(=-0x1).
  The `beq` branch at 0x2ccc0 targets 0x2cc98 and is always taken.
  The `beq` branch at 0x2ccdc targets 0x2cc5c and is always taken.
  The return at 0x2ccac has v0 = ret(mutex_spinunlock).

- `intrgroup_free` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2cce4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2cce4-0x2cdcc (232 bytes).
  It occupies 232 bytes.
  The `ld` at 0x2cd3c loads 8 bytes from ?.
  The `ld` at 0x2cd64 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `lw` at 0x2cd7c loads 4 bytes from a0 (arg0 at entry) +0x40.
  The `ld` at 0x2cd94 loads 8 bytes from table(sym(.bss)+45120) +0x500.
  The `sd` at 0x2cdac stores 8 bytes to table(sym(.bss)+45120) +0x500.
  The `jal` at 0x2cd14 calls intrgroup_unjoin with a0=a0 at entry (arg0), a1=?, a2=?, a3=[sym(maxcpus)].
  The `jal` at 0x2cd60 calls kmem_free with a0=[a0+72]:8, a1=([sym(maxcpus)] << 0x2), a2=?, a3=[sym(maxcpus)].
  The `jal` at 0x2cd74 calls mutex_spinlock with a0=sym(.bss)+45120, a1=?, a2=?, a3=?.
  The `jal` at 0x2cda8 calls mutex_spinunlock with a0=sym(.bss)+45120, a1=ret(mutex_spinlock), a2=?, a3=table(sym(.bss)+45120).
  The `blez` branch at 0x2ccfc targets 0x2cdc4, is taken when a3(=[sym(maxcpus)]) <= 0 (signed), and falls through when a3(=[sym(maxcpus)]) > 0 (signed).
  The `beq` branch at 0x2cd08 targets 0x2cd30 and is always taken.
  The `beq` branch at 0x2cd28 targets 0x2cd60, is taken when s0(?) >= a3(=[sym(maxcpus)]) (signed), and falls through when s0(?) < a3(=[sym(maxcpus)]) (signed).
  The `bne` branch at 0x2cd48 targets 0x2cd10, is taken when (a4(?) & a5(?)) != 0, and falls through when (a4(?) & a5(?)) == 0.
  The `bne` branch at 0x2cd58 targets 0x2cd30, is taken when s0(?) < a3(=[sym(maxcpus)]) (signed), and falls through when s0(?) >= a3(=[sym(maxcpus)]) (signed).
  The `beq` branch at 0x2cdc4 targets 0x2cd5c and is always taken.
  The return at 0x2cdbc has v0 = ret(mutex_spinunlock).

- `groupintr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2cdcc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2cdcc-0x2ce4c (128 bytes).
  It occupies 128 bytes.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc280, including `ld` at 0x2cdcc, `ld` at 0x2cdf4.
  2 such `lw` accesses load 4 bytes from abs 0xffffffffffffc6a8, including `lw` at 0x2cde0, `lw` at 0x2ce2c.
  The `jal` at 0x2cdec calls frs_handle_group_intr with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2ce20 calls log_tstamp_event with a0=0x6f, a1=0x0, a2=0x0, a3=0x0, a4=0x0.
  The `jal` at 0x2ce3c calls log_tstamp_event with a0=0x65, a1=0x6f, a2=0x0, a3=0x0, a4=0x0.
  The `bne` branch at 0x2cdd8 targets 0x2ce10, is taken when (at(=[-0x3d80]:8) & 0x20) != 0, and falls through when (at(=[-0x3d80]:8) & 0x20) == 0.
  The `beq` branch at 0x2cde4 targets 0x2cdf4, is taken when v0(=[-0x3958]) == 0, and falls through when v0(=[-0x3958]) != 0.
  The `bne` branch at 0x2cdfc targets 0x2ce30, is taken when (v1(=[-0x3d80]:8) & 0x20) != 0, and falls through when (v1(=[-0x3d80]:8) & 0x20) == 0.
  The `beq` branch at 0x2ce28 targets 0x2cde4 and is always taken.
  The `beq` branch at 0x2ce44 targets 0x2ce08 and is always taken.
  The return at 0x2ce08 has v0 = one of ?, ret(log_tstamp_event).

- `sendgroupintr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2ce4c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2ce4c-0x2cf54 (264 bytes).
  It occupies 264 bytes.
  The `lh` at 0x2ce54 loads 2 bytes from abs 0xffffffffffffc428.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x2ce98, `ld` at 0x2cebc, `ld` at 0x2cf0c.
  2 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x2cec0, `lbu` at 0x2cee8.
  The `ld` at 0x2cec8 loads 8 bytes from a0 (arg0 at entry) +0x48.
  The `lh` at 0x2ced0 loads 2 bytes from ?.
  The `sd` at 0x2cef4 stores 8 bytes to ?.
  The `ld` at 0x2cf50 loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `jal` at 0x2cf20 calls groupintr with a0=0x0, a1=?, a2=?, a3=?, a4=[sym(maxcpus)], a6=[-0x3bd8]:2, a7=0x1.
  The `blez` branch at 0x2ce70 targets 0x2cf38, is taken when a4(=[sym(maxcpus)]) <= 0 (signed), and falls through when a4(=[sym(maxcpus)]) > 0 (signed).
  The `beq` branch at 0x2ce78 targets 0x2cf40 and is always taken.
  The `beq` branch at 0x2ce90 targets 0x2cf00, is taken when a2(?) >= a4(=[sym(maxcpus)]) (signed), and falls through when a2(?) < a4(=[sym(maxcpus)]) (signed).
  The `beq` branch at 0x2ceac targets 0x2ce80, is taken when (t9(?) & at(?)) == 0, and falls through when (t9(?) & at(?)) != 0.
  The `beq` branch at 0x2ceb4 targets 0x2ce80, is taken when a6(=[-0x3bd8]:2) == a2(?), and falls through when a6(=[-0x3bd8]:2) != a2(?).
  The `beq` branch at 0x2cef8 targets 0x2ce80 and is always taken.
  The `beq` branch at 0x2cf18 targets 0x2cf28, is taken when (a2(?) & a3(?)) == 0, and falls through when (a2(?) & a3(?)) != 0.
  The `beq` branch at 0x2cf38 targets 0x2cf04 and is always taken.
  The `beq` branch at 0x2cf4c targets 0x2ce9c and is always taken.
  The return at 0x2cf30 has v0 = 0x0.

- `debug` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2cf6c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2cf6c-0x2cfe4 (120 bytes).
  It occupies 120 bytes.
  The `lh` at 0x2cf84 loads 2 bytes from sym(kdebug) +0x0.
  The `sh` at 0x2cfbc stores 2 bytes to sym(kbdstate) +0x0.
  The `sb` at 0x2cfd8 stores 1 byte to sym(kbdcntrlstate) +0x0.
  The `blez` branch at 0x2cf88 targets 0x2cfdc, is taken when t0(=[sym(kdebug)]:2) <= 0 (signed), and falls through when t0(=[sym(kdebug)]:2) > 0 (signed).
  The return at 0x2cfdc has v0 = ?.

- `keruliframe` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d140 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d140-0x2d2d0 (400 bytes).
  It occupies 400 bytes.
  The `ld` at 0x2d140 loads 8 bytes from abs 0xffffffffffffc028.
  The `lw` at 0x2d144 loads 4 bytes from [-0x3fd8]:8 +0xe8.
  The `sd` at 0x2d154 stores 8 bytes to [-0x3fd8]:8 +0x1d0.
  The `sd` at 0x2d158 stores 8 bytes to [-0x3fd8]:8 +0x1c8.
  The `ld` at 0x2d15c loads 8 bytes from abs 0xffffffffffffc038.
  The `sd` at 0x2d160 stores 8 bytes to [-0x3fd8]:8 +0xf0.
  The `sd` at 0x2d164 stores 8 bytes to [-0x3fd8]:8 +0x108.
  The `sd` at 0x2d168 stores 8 bytes to [-0x3fd8]:8 +0x110.
  The `sd` at 0x2d16c stores 8 bytes to [-0x3fd8]:8 +0x118.
  The `sd` at 0x2d170 stores 8 bytes to [-0x3fd8]:8 +0x120.
  The `sd` at 0x2d174 stores 8 bytes to [-0x3fd8]:8 +0x128.
  The `sd` at 0x2d178 stores 8 bytes to [-0x3fd8]:8 +0x130.
  The `sd` at 0x2d17c stores 8 bytes to [-0x3fd8]:8 +0x138.
  The `sd` at 0x2d180 stores 8 bytes to [-0x3fd8]:8 +0x140.
  The `sd` at 0x2d184 stores 8 bytes to [-0x3fd8]:8 +0x168.
  The `sd` at 0x2d188 stores 8 bytes to [-0x3fd8]:8 +0x170.
  The `sd` at 0x2d18c stores 8 bytes to [-0x3fd8]:8 +0x178.
  The `sd` at 0x2d190 stores 8 bytes to [-0x3fd8]:8 +0x180.
  The `sd` at 0x2d194 stores 8 bytes to [-0x3fd8]:8 +0x188.
  The `sd` at 0x2d198 stores 8 bytes to [-0x3fd8]:8 +0x190.
  The `sd` at 0x2d19c stores 8 bytes to [-0x3fd8]:8 +0x198.
  The `sd` at 0x2d1a0 stores 8 bytes to [-0x3fd8]:8 +0x1a0.
  The `sd` at 0x2d1b4 stores 8 bytes to [-0x3fd8]:8 +0x1e0.
  The `sd` at 0x2d1c0 stores 8 bytes to [-0x3fd8]:8 +0x1e8.
  The `sd` at 0x2d1c4 stores 8 bytes to [-0x3fd8]:8 +0x208.
  The `sd` at 0x2d1c8 stores 8 bytes to [-0x3fd8]:8 +0x210.
  The `sd` at 0x2d1cc stores 8 bytes to [-0x3fd8]:8 +0x250.
  The `sd` at 0x2d1d0 stores 8 bytes to [-0x3fd8]:8 +0x200.
  The `sw` at 0x2d1d4 stores 4 bytes to [-0x3fd8]:8 +0xe8.
  The `ld` at 0x2d1dc loads 8 bytes from [-0x3fd8]:8 +0x88.
  The `jal` at 0x2d1b8 calls tfi_save with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  Calls uli_badtrap via direct with a0=?, a1=?, a2=?, a3=? (`j` at 0x2d1fc).
  The `bne` branch at 0x2d148 targets 0x2d1d8, is taken when k1(=[[-0x3fd8]:8+232]) != 0, and falls through when k1(=[[-0x3fd8]:8+232]) == 0.
  The instructions from 0x2d204 to 0x2d2cc are not reached by any path from the entry, and their branches are not listed.

- `hubdev_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d2d0 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d2d0-0x2d2fc (44 bytes).
  It occupies 44 bytes.
  The `jal` at 0x2d2e4 calls init_mutex with a0=sym(hubdev_callout_mutex), a1=0x0, a2=sym(.rodata)+48704, a3=-0x1.
  The return at 0x2d2f4 has v0 = ret(init_mutex).

- `hubdev_register` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d2fc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d2fc-0x2d354 (88 bytes).
  It occupies 88 bytes.
  The `sd` at 0x2d334 stores 8 bytes to ret(kmem_zalloc) +0x8.
  The `sd` at 0x2d340 stores 8 bytes to ret(kmem_zalloc) +0x0.
  The `jal` at 0x2d310 calls kmem_zalloc with a0=0x10, a1=0x0, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2d320 calls mutex_lock with a0=sym(hubdev_callout_mutex), a1=0x19, a2=?, a3=?.
  The `jal` at 0x2d33c calls mutex_unlock with a0=sym(hubdev_callout_mutex), a1=?, a2=?, a3=?.
  The return at 0x2d34c has v0 = ret(mutex_unlock).

- `hubdev_unregister` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d354 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d354-0x2d3d4 (128 bytes).
  It occupies 128 bytes.
  3 such `ld` accesses load 8 bytes from ?, including `ld` at 0x2d37c, `ld` at 0x2d38c, `ld` at 0x2d3b4.
  The `sd` at 0x2d3c0 stores 8 bytes to ?.
  The `jal` at 0x2d368 calls mutex_lock with a0=sym(hubdev_callout_mutex), a1=0x19, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2d398 calls mutex_unlock with a0=sym(hubdev_callout_mutex), a1=?, a2=?, a3=?.
  The `jal` at 0x2d3bc calls kmem_free with a0=?, a1=0x10, a2=?, a3=?.
  The `jal` at 0x2d3c4 calls mutex_unlock with a0=sym(hubdev_callout_mutex), a1=?, a2=?, a3=?.
  The `beq` branch at 0x2d374 targets 0x2d398, is taken when a0(=[sym(hubdev_callout_list)]:8) == 0, and falls through when a0(=[sym(hubdev_callout_list)]:8) != 0.
  The `beq` branch at 0x2d380 targets 0x2d3b4, is taken when at(?) == s0(=a0), and falls through when at(?) != s0(=a0).
  The `bne` branch at 0x2d390 targets 0x2d37c, is taken when a0(?) != 0, and falls through when a0(?) == 0.
  The `beq` branch at 0x2d3cc targets 0x2d3a4 and is always taken.
  The return at 0x2d3ac has v0 = one of 0x0, 0x2.

- `hubdev_docallouts` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d3d4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d3d4-0x2d460 (140 bytes).
  It occupies 140 bytes.
  2 such `ld` accesses load 8 bytes from ?, including `ld` at 0x2d408, `ld` at 0x2d41c.
  The `jal` at 0x2d3f4 calls mutex_lock with a0=sym(hubdev_callout_mutex), a1=0x19, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x2d40c calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x2d428 calls mutex_unlock with a0=sym(hubdev_callout_mutex), a1=?, a2=?, a3=?.
  The `jal` at 0x2d450 calls mutex_unlock with a0=sym(hubdev_callout_mutex), a1=?, a2=?, a3=?.
  The `beq` branch at 0x2d400 targets 0x2d428, is taken when at(=[sym(hubdev_callout_list)]:8) == 0, and falls through when at(=[sym(hubdev_callout_list)]:8) != 0.
  The `bne` branch at 0x2d414 targets 0x2d450, is taken when v0(=ret(?)) != 0, and falls through when v0(=ret(?)) == 0.
  The `bne` branch at 0x2d420 targets 0x2d408, is taken when s0(?) != 0, and falls through when s0(?) == 0.
  The `beq` branch at 0x2d458 targets 0x2d438 and is always taken.
  The return at 0x2d448 has v0 = one of 0x0, ret(?).

- `intrnorm` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d500 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d500-0x2d76c (620 bytes).
  It occupies 620 bytes.
  The `lw` at 0x2d500 loads 4 bytes from abs 0xffffffffffffc048.
  3 such `ld` accesses load 8 bytes from abs 0xffffffffffffc028, including `ld` at 0x2d58c, `ld` at 0x2d6a4, `ld` at 0x2d734.
  2 such `lb` accesses load 1 byte from abs 0xffffffffffffc04f, including `lb` at 0x2d598, `lb` at 0x2d694.
  4 such `sb` accesses store 1 byte to abs 0xffffffffffffc04f, including `sb` at 0x2d5b8, `sb` at 0x2d634, `sb` at 0x2d664.
  The `ld` at 0x2d5bc loads 8 bytes from abs 0xffffffffffffc018.
  The `ld` at 0x2d5c0 loads 8 bytes from [-0x3fe8]:8 +0x3f0.
  The `sd` at 0x2d5c8 stores 8 bytes to [[-0x3fe8]:8+1008]:8 +0x248.
  3 such `ld` accesses load 8 bytes from abs 0xffffffffffffc030, including `ld` at 0x2d5d0, `ld` at 0x2d64c, `ld` at 0x2d668.
  The `sd` at 0x2d5d4 stores 8 bytes to [[-0x3fe8]:8+1008]:8 +0x240.
  22 such `sd` accesses store 8 bytes to ?, including `sd` at 0x2d644, `sd` at 0x2d6bc, `sd` at 0x2d6c4.
  The `ld` at 0x2d648 loads 8 bytes from abs 0xffffffffffffc020.
  The `sd` at 0x2d650 stores 8 bytes to [-0x3fe0]:8 +0x228.
  The `sd` at 0x2d66c stores 8 bytes to [-0x3fd0]:8 +0xe0.
  The `sb` at 0x2d674 stores 1 byte to abs 0xffffffffffffc053.
  The `lb` at 0x2d678 loads 1 byte from abs 0xffffffffffffc050.
  The `ld` at 0x2d6a8 loads 8 bytes from [-0x3fd8]:8 +0x88.
  The `ld` at 0x2d6d0 loads 8 bytes from abs 0xffffffffffffc038.
  The `ld` at 0x2d738 loads 8 bytes from [-0x3fd8]:8 +0x90.
  The `sd` at 0x2d73c stores 8 bytes to abs 0xffffffffffffc018.
  The `lh` at 0x2d744 loads 2 bytes from [-0x3fd8]:8 +0xa8.
  Calls ecommon via direct with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3) (`j` at 0x2d5ec).
  Calls ecommon via direct with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3) (`j` at 0x2d654).
  Calls ecommon_allsaved via direct with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3) (`j` at 0x2d684).
  Calls ecommon via direct with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3) (`j` at 0x2d68c).
  The `jal` at 0x2d72c calls tfi_save with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2d740 calls uli_setasids with a0=[[-0x3fd8]:8+168]:2, a1=?, a2=?, a3=?.
  Calls ecommon_allsaved via direct with a0=?, a1=?, a2=?, a3=? (`j` at 0x2d748).
  Calls ecommon via direct with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3) (`j` at 0x2d764).
  The `beq` branch at 0x2d50c targets 0x2d568, is taken when (k1(?) & 0x8000) == 0, and falls through when (k1(?) & 0x8000) != 0.
  The `bltz` branch at 0x2d514 targets 0x2d568, is taken when k1(?) < 0 (signed), and falls through when k1(?) >= 0 (signed).
  The `bltz` branch at 0x2d520 targets 0x2d568, is taken when k1(?) < 0 (signed), and falls through when k1(?) >= 0 (signed).
  The `beq` branch at 0x2d534 targets 0x2d554, is taken when k1(?) == 0, and falls through when k1(?) != 0.
  The `bltz` branch at 0x2d540 targets 0x2d568, is taken when k1(?) < 0 (signed), and falls through when k1(?) >= 0 (signed).
  The `bltz` branch at 0x2d54c targets 0x2d568, is taken when k1(?) < 0 (signed), and falls through when k1(?) >= 0 (signed).
  The `beq` branch at 0x2d558 targets 0x2d568, is taken when (k0(=[-0x3fb8]) & 0x40) == 0, and falls through when (k0(=[-0x3fb8]) & 0x40) != 0.
  The `beq` branch at 0x2d570 targets 0x2d588, is taken when (k1(?) & 0x1) == 0, and falls through when (k1(?) & 0x1) != 0.
  The `bne` branch at 0x2d580 targets 0x2d58c, is taken when (k1(?) & k0(?)) != 0, and falls through when (k1(?) & k0(?)) == 0.
  The `bne` branch at 0x2d590 targets 0x2d694, is taken when k0(=[-0x3fd8]:8) != 0, and falls through when k0(=[-0x3fd8]:8) == 0.
  The `beq` branch at 0x2d5a0 targets 0x2d750, is taken when k0(=[-0x3fb1]:1-2) == 0, and falls through when k0(=[-0x3fb1]:1-2) != 0.
  The `beq` branch at 0x2d5a8 targets 0x2d630, is taken when k0(=[-0x3fb1]:1-1) == 0, and falls through when k0(=[-0x3fb1]:1-1) != 0.
  The `beq` branch at 0x2d5b0 targets 0x2d65c, is taken when k0(=[-0x3fb1]:1-3) == 0, and falls through when k0(=[-0x3fb1]:1-3) != 0.
  The `beq` branch at 0x2d67c targets 0x2d68c, is taken when k0(=[-0x3fb0]:1) == 0, and falls through when k0(=[-0x3fb0]:1) != 0.
  The `beq` branch at 0x2d69c targets 0x2d750, is taken when k1(=[-0x3fb1]:1) == at(=0x2), and falls through when k1(=[-0x3fb1]:1) != at(=0x2).
  The instructions from 0x2d5f4 to 0x2d62c are not reached by any path from the entry, and their branches are not listed.

- `_baduk` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2d5f4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2d5f4-0x2d770 (380 bytes).
  It occupies 380 bytes.
  The `ld` at 0x2d5f8 loads 8 bytes from abs 0xffffffffffffc448.
  Calls assfail via direct with a0=sym(.data)+9672, a1=sym(.data)+9685, a2=0x0, a3=a3 at entry (arg3) (`j` at 0x2d628).
  The instructions from 0x2d630 to 0x2d76c are not reached by any path from the entry, and their branches are not listed.

- `_hook_exceptions` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x2db7c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x2db7c-0x2dec0 (836 bytes).
  It occupies 836 bytes.
  3 such `ld` accesses load 8 bytes from (sym(pdaindr) + (ret(getcpuid) << 0x4)) +0x8, including `ld` at 0x2dbc0, `ld` at 0x2dce0, `ld` at 0x2dddc.
  3 such `lbu` accesses load 1 byte from [(sym(pdaindr) + (ret(getcpuid) << 0x4))+8]:8 +0x528, including `lbu` at 0x2dbc8, `lbu` at 0x2dce4, `lbu` at 0x2dde4.
  2 such `lw` accesses load 4 bytes from sym(utlbmiss_prolog_mp) -0x4, including `lw` at 0x2dc08, `lw` at 0x2dc20.
  14 such `sw` accesses store 4 bytes to ?, including `sw` at 0x2dc0c, `sw` at 0x2dc28, `sw` at 0x2dc3c.
  2 such `lw` accesses load 4 bytes from sym(utlbmiss_prolog_patch) +0x0, including `lw` at 0x2dc30, `lw` at 0x2dd44.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x2dca8, `lw` at 0x2dcc0, `lw` at 0x2dd18.
  2 such `lw` accesses load 4 bytes from sym(_ecc_errorvec) -0x4, including `lw` at 0x2dda4, `lw` at 0x2ddbc.
  2 such `lw` accesses load 4 bytes from sym(_j_exceptnorm) -0x4, including `lw` at 0x2de08, `lw` at 0x2de20.
  2 such `ld` accesses load 8 bytes from ((ret(get_nasid) << 0x21)+0x9600000000000000 | 0x2000) +0xd0, including `ld` at 0x2de54, `ld` at 0x2de78.
  The `sd` at 0x2de60 stores 8 bytes to [((ret(get_nasid) << 0x21)+0x9600000000000000 | 0x2000)+208]:8 +0x10.
  The `sd` at 0x2de84 stores 8 bytes to [((ret(get_nasid) << 0x21)+0x9600000000000000 | 0x2000)+208]:8 +0x18.
  The `jal` at 0x2dbac calls getcpuid with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x2dccc calls getcpuid with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2ddc8 calls getcpuid with a0=[sym(utlbmiss_prolog_size)], a1=sym(_ecc_end), a2=sym(_ecc_errorvec), a3=?, a5=sym(utlbmiss_prolog_patch), a6=0xffffffff80000080.
  The `jal` at 0x2de38 calls get_nasid with a0=?, a1=?, a2=sym(_j_exceptnorm), a3=sym(_j_endexceptnorm).
  The `jal` at 0x2de5c calls get_nasid with a0=(ret(get_nasid) << 0x21), a1=?, a2=?, a3=?.
  The `jal` at 0x2de80 calls flush_cache with a0=-0x3aa0, a1=[((ret(get_nasid) << 0x21)+0x9600000000000000 | 0x2000)+208]:8, a2=(ret(get_nasid) << 0x21), a3=?.
  The `jal` at 0x2de88 calls getsr with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2de98 calls setsr with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x2deb0 calls assfail with a0=sym(.rodata)+49520, a1=sym(.rodata)+49520, a2=0x19e, a3=sym(utlbmiss), a4=sym(pdaindr), a5=sym(eutlbmiss).
  The `blez` branch at 0x2db84 targets 0x2db98, is taken when at(=[sym(kdebug)]:2) <= 0 (signed), and falls through when at(=[sym(kdebug)]:2) > 0 (signed).
  The `beq` branch at 0x2dbf4 targets 0x2dc2c, is taken when a2(=sym(utlbmiss_prolog_mp)) >= s2(=sym(eutlbmiss_prolog_mp)) (unsigned), and falls through when a2(=sym(utlbmiss_prolog_mp)) < s2(=sym(eutlbmiss_prolog_mp)) (unsigned).
  The `beq` branch at 0x2dc10 targets 0x2dc2c, is taken when a2(=sym(utlbmiss_prolog_mp)) >= s2(=sym(eutlbmiss_prolog_mp)) (unsigned), and falls through when a2(=sym(utlbmiss_prolog_mp)) < s2(=sym(eutlbmiss_prolog_mp)) (unsigned).
  The `bne` branch at 0x2dc24 targets 0x2dbfc, is taken when a2(=sym(utlbmiss_prolog_mp)) < s2(=sym(eutlbmiss_prolog_mp)) (unsigned), and falls through when a2(=sym(utlbmiss_prolog_mp)) >= s2(=sym(eutlbmiss_prolog_mp)) (unsigned).
  The `beq` branch at 0x2dc34 targets 0x2dc44, is taken when t2(=[sym(need_utlbmiss_patch)]) == 0, and falls through when t2(=[sym(need_utlbmiss_patch)]) != 0.
  The `beq` branch at 0x2dc64 targets 0x2dc74, is taken when t3(?) >= 0x81 (signed), and falls through when t3(?) < 0x81 (signed).
  The `beq` branch at 0x2dc6c targets 0x2dc7c and is always taken.
  The `beq` branch at 0x2dc88 targets 0x2deac, is taken when t8(?) >= 0x81 (signed), and falls through when t8(?) < 0x81 (signed).
  The `beq` branch at 0x2dc98 targets 0x2dccc, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x2dcb0 targets 0x2dccc, is taken when a2(?) >= s1(?) (unsigned), and falls through when a2(?) < s1(?) (unsigned).
  The `bne` branch at 0x2dcc4 targets 0x2dca0, is taken when a2(?) < s1(?) (unsigned), and falls through when a2(?) >= s1(?) (unsigned).
  The `blez` branch at 0x2dd04 targets 0x2dd3c, is taken when a0(=[sym(utlbmiss_prolog_size)]) <= 0 (signed), and falls through when a0(=[sym(utlbmiss_prolog_size)]) > 0 (signed).
  The `beq` branch at 0x2dd20 targets 0x2dd3c, is taken when a2(?) >= s2(=sym(eutlbmiss_prolog_mp)) (unsigned), and falls through when a2(?) < s2(=sym(eutlbmiss_prolog_mp)) (unsigned).
  The `bne` branch at 0x2dd34 targets 0x2dd0c, is taken when a2(?) < s2(=sym(eutlbmiss_prolog_mp)) (unsigned), and falls through when a2(?) >= s2(=sym(eutlbmiss_prolog_mp)) (unsigned).
  The `beq` branch at 0x2dd40 targets 0x2dd4c, is taken when t3(=[sym(need_utlbmiss_patch)]) == 0, and falls through when t3(=[sym(need_utlbmiss_patch)]) != 0.
  The `beq` branch at 0x2dd4c targets 0x2dd80, is taken when s0(?) == 0, and falls through when s0(?) != 0.
  The `beq` branch at 0x2dd64 targets 0x2dd80, is taken when a2(?) >= s1(?) (unsigned), and falls through when a2(?) < s1(?) (unsigned).
  The `bne` branch at 0x2dd78 targets 0x2dd54, is taken when a2(?) < s1(?) (unsigned), and falls through when a2(?) >= s1(?) (unsigned).
  The `beq` branch at 0x2dd94 targets 0x2ddc8, is taken when a2(=sym(_ecc_errorvec)) >= a1(=sym(_ecc_end)) (unsigned), and falls through when a2(=sym(_ecc_errorvec)) < a1(=sym(_ecc_end)) (unsigned).
  The `beq` branch at 0x2ddac targets 0x2ddc8, is taken when a2(=sym(_ecc_errorvec)) >= a1(=sym(_ecc_end)) (unsigned), and falls through when a2(=sym(_ecc_errorvec)) < a1(=sym(_ecc_end)) (unsigned).
  The `bne` branch at 0x2ddc0 targets 0x2dd9c, is taken when a2(=sym(_ecc_errorvec)) < a1(=sym(_ecc_end)) (unsigned), and falls through when a2(=sym(_ecc_errorvec)) >= a1(=sym(_ecc_end)) (unsigned).
  The `beq` branch at 0x2ddf8 targets 0x2de2c, is taken when a2(=sym(_j_exceptnorm)) >= a3(=sym(_j_endexceptnorm)) (unsigned), and falls through when a2(=sym(_j_exceptnorm)) < a3(=sym(_j_endexceptnorm)) (unsigned).
  The `beq` branch at 0x2de10 targets 0x2de2c, is taken when a2(=sym(_j_exceptnorm)) >= a3(=sym(_j_endexceptnorm)) (unsigned), and falls through when a2(=sym(_j_exceptnorm)) < a3(=sym(_j_endexceptnorm)) (unsigned).
  The `bne` branch at 0x2de24 targets 0x2de00, is taken when a2(=sym(_j_exceptnorm)) < a3(=sym(_j_endexceptnorm)) (unsigned), and falls through when a2(=sym(_j_exceptnorm)) >= a3(=sym(_j_endexceptnorm)) (unsigned).
  The `beq` branch at 0x2deb8 targets 0x2dc94 and is always taken.
  The return at 0x2dea4 has v0 = ret(setsr).

- `breakout_sd` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x30b9c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x30b9c-0x30c7c (224 bytes).
  It occupies 224 bytes.
  3 such `ld` accesses load 8 bytes from a1 (arg1 at entry) +0x0, including `ld` at 0x30ba4, `ld` at 0x30bdc, `ld` at 0x30bfc.
  The `lw` at 0x30bac loads 4 bytes from ((a0 << 0x2) + sym(EXP_SHIFT)) +0x0.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x30bc0, `sw` at 0x30bd4.
  The `lw` at 0x30bc4 loads 4 bytes from ((a0 << 0x2) + sym(EXP_MASK)) +0x0.
  2 such `lw` accesses load 4 bytes from ((a0 << 0x2) + sym(SIGN_SHIFT)) +0x0, including `lw` at 0x30bd8, `lw` at 0x30c34.
  The `sw` at 0x30bf4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `ld` at 0x30bf8 loads 8 bytes from (sym(FRAC_MASK) + (a0 << 0x3)) +0x0.
  2 such `sd` accesses store 8 bytes to a4 (arg4 at entry) +0x0, including `sd` at 0x30c04, `sd` at 0x30c30.
  3 such `ld` accesses load 8 bytes from abs 0xffffffffffffc018, including `ld` at 0x30c08, `ld` at 0x30c44, `ld` at 0x30c54.
  The `lbu` at 0x30c0c loads 1 byte from [-0x3fe8]:8 +0x559.
  The `lw` at 0x30c1c loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `lwu` at 0x30c38 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `sd` at 0x30c40 stores 8 bytes to a1 (arg1 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from [-0x3fe8]:8 +0x54c, including `lw` at 0x30c48, `lw` at 0x30c58.
  The `sw` at 0x30c50 stores 4 bytes to [-0x3fe8]:8 +0x54c.
  The `jal` at 0x30c68 calls post_sig with a0=0x8, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a7=((a0 << 0x2) + sym(SIGN_SHIFT)).
  The `beq` branch at 0x30c14 targets 0x30c74, is taken when (at(=[[-0x3fe8]:8+1369]:1) & 0x1) == 0, and falls through when (at(=[[-0x3fe8]:8+1369]:1) & 0x1) != 0.
  The `bne` branch at 0x30c20 targets 0x30c74, is taken when t8(=[a3]) != 0, and falls through when t8(=[a3]) == 0.
  The `beq` branch at 0x30c28 targets 0x30c74, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x30c60 targets 0x30c74, is taken when (t9(=[[-0x3fe8]:8+1356]) & 0x80) == 0, and falls through when (t9(=[[-0x3fe8]:8+1356]) & 0x80) != 0.
  The return at 0x30c74 has v0 = one of ?, [-0x3fe8]:8, ret(post_sig).

- `_badaddr_val` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x37500 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x37500-0x37614 (276 bytes).
  It occupies 276 bytes.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc020, including `ld` at 0x37514, `ld` at 0x375e4.
  2 such `sh` accesses store 2 bytes to [-0x3fe0]:8 +0xf6, including `sh` at 0x37520, `sh` at 0x375f0.
  2 such `sw` accesses store 4 bytes to abs 0xffffffffffffc48c, including `sw` at 0x3752c, `sw` at 0x375fc.
  The `lb` at 0x3753c loads 1 byte from a0 (arg0 at entry) +0x0.
  The `sb` at 0x37544 stores 1 byte to a2 (arg2 at entry) +0x0.
  The `lh` at 0x3755c loads 2 bytes from a0 (arg0 at entry) +0x0.
  The `sh` at 0x37564 stores 2 bytes to a2 (arg2 at entry) +0x0.
  The `lw` at 0x3757c loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `sw` at 0x37584 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `ld` at 0x3759c loads 8 bytes from a0 (arg0 at entry) +0x0.
  The `sd` at 0x375a4 stores 8 bytes to a2 (arg2 at entry) +0x0.
  The `jal` at 0x375c8 calls cmn_err with a0=0x0, a1=sym(.data)+20528, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x37518 targets 0x3752c, is taken when t2(=[-0x3fe0]:8) == 0, and falls through when t2(=[-0x3fe0]:8) != 0.
  The `beq` branch at 0x37524 targets 0x37530 and is always taken.
  The `bne` branch at 0x37534 targets 0x37550, is taken when a1 != at(=0x1), and falls through when a1 == at(=0x1).
  The `beq` branch at 0x37548 targets 0x375d0 and is always taken.
  The `bne` branch at 0x37554 targets 0x37570, is taken when a1 != at(=0x2), and falls through when a1 == at(=0x2).
  The `beq` branch at 0x37568 targets 0x375d0 and is always taken.
  The `bne` branch at 0x37574 targets 0x37590, is taken when a1 != at(=0x4), and falls through when a1 == at(=0x4).
  The `beq` branch at 0x37588 targets 0x375d0 and is always taken.
  The `bne` branch at 0x37594 targets 0x375b0, is taken when a1 != at(=0x8), and falls through when a1 == at(=0x8).
  The `beq` branch at 0x375a8 targets 0x375d0 and is always taken.
  The `bne` branch at 0x375dc targets 0x37888, is taken when (t1(?) & 0x4000) != 0, and falls through when (t1(?) & 0x4000) == 0.
  The `beq` branch at 0x375e8 targets 0x375fc, is taken when t2(=[-0x3fe0]:8) == 0, and falls through when t2(=[-0x3fe0]:8) != 0.
  The `beq` branch at 0x375f4 targets 0x37600 and is always taken.
  The return at 0x3760c has v0 = 0x0.

- `_wbadaddr_val` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x37614 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x37614-0x3773c (296 bytes).
  It occupies 296 bytes.
  2 such `ld` accesses load 8 bytes from abs 0xffffffffffffc020, including `ld` at 0x37628, `ld` at 0x3770c.
  2 such `sw` accesses store 4 bytes to abs 0xffffffffffffc48c, including `sw` at 0x37638, `sw` at 0x37718.
  2 such `sh` accesses store 2 bytes to [-0x3fe0]:8 +0xf6, including `sh` at 0x37644, `sh` at 0x37724.
  The `lb` at 0x37654 loads 1 byte from a2 (arg2 at entry) +0x0.
  The `sb` at 0x3765c stores 1 byte to a0 (arg0 at entry) +0x0.
  The `lh` at 0x37674 loads 2 bytes from a2 (arg2 at entry) +0x0.
  The `sh` at 0x3767c stores 2 bytes to a0 (arg0 at entry) +0x0.
  The `lw` at 0x37694 loads 4 bytes from a2 (arg2 at entry) +0x0.
  The `sw` at 0x3769c stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `ld` at 0x376b4 loads 8 bytes from a2 (arg2 at entry) +0x0.
  The `sd` at 0x376bc stores 8 bytes to a0 (arg0 at entry) +0x0.
  The `lw` at 0x376f8 loads 4 bytes from abs 0x9600000000000000.
  The `jal` at 0x376e0 calls cmn_err with a0=0x0, a1=sym(.data)+20541, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x37630 targets 0x37644, is taken when t2(=[-0x3fe0]:8) != 0, and falls through when t2(=[-0x3fe0]:8) == 0.
  The `beq` branch at 0x3763c targets 0x37648 and is always taken.
  The `bne` branch at 0x3764c targets 0x37668, is taken when a1 != at(=0x1), and falls through when a1 == at(=0x1).
  The `beq` branch at 0x37660 targets 0x376e8 and is always taken.
  The `bne` branch at 0x3766c targets 0x37688, is taken when a1 != at(=0x2), and falls through when a1 == at(=0x2).
  The `beq` branch at 0x37680 targets 0x376e8 and is always taken.
  The `bne` branch at 0x3768c targets 0x376a8, is taken when a1 != at(=0x4), and falls through when a1 == at(=0x4).
  The `beq` branch at 0x376a0 targets 0x376e8 and is always taken.
  The `bne` branch at 0x376ac targets 0x376c8, is taken when a1 != at(=0x8), and falls through when a1 == at(=0x8).
  The `beq` branch at 0x376c0 targets 0x376e8 and is always taken.
  The `bne` branch at 0x37704 targets 0x37888, is taken when (t1(?) & 0x4000) != 0, and falls through when (t1(?) & 0x4000) == 0.
  The `bne` branch at 0x37710 targets 0x37724, is taken when t2(=[-0x3fe0]:8) != 0, and falls through when t2(=[-0x3fe0]:8) == 0.
  The `beq` branch at 0x3771c targets 0x37728 and is always taken.
  The return at 0x37734 has v0 = 0x0.

- `earlybadaddr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3773c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3773c-0x3781c (224 bytes).
  It occupies 224 bytes.
  2 such `sw` accesses store 4 bytes to sym(nofault) +0x0, including `sw` at 0x3776c, `sw` at 0x37804.
  The `lb` at 0x3777c loads 1 byte from a0 (arg0 at entry) +0x0.
  The `lh` at 0x37794 loads 2 bytes from a0 (arg0 at entry) +0x0.
  The `lw` at 0x377ac loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jal` at 0x377d0 calls cmn_err with a0=0x0, a1=sym(.data)+20555, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x37774 targets 0x37788, is taken when a1 != at(=0x1), and falls through when a1 == at(=0x1).
  The `beq` branch at 0x37780 targets 0x377d8 and is always taken.
  The `bne` branch at 0x3778c targets 0x377a0, is taken when a1 != at(=0x2), and falls through when a1 == at(=0x2).
  The `beq` branch at 0x37798 targets 0x377d8 and is always taken.
  The `bne` branch at 0x377a4 targets 0x377b8, is taken when a1 != at(=0x4), and falls through when a1 == at(=0x4).
  The `beq` branch at 0x377b0 targets 0x377d8 and is always taken.
  The `bne` branch at 0x377e4 targets 0x378b8, is taken when (t1(?) & 0x4000) != 0, and falls through when (t1(?) & 0x4000) == 0.
  The return at 0x37814 has v0 = 0x0.

- `wbadmemaddr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3781c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3781c-0x37888 (108 bytes).
  It occupies 108 bytes.
  2 such `sw` accesses store 4 bytes to sym(nofault) +0x0, including `sw` at 0x3784c, `sw` at 0x37870.
  The `sw` at 0x37850 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `lw` at 0x37854 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The return at 0x37880 has v0 = 0x0.

- `earlybaerror` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x378b8 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x378b8-0x378ec (52 bytes).
  It occupies 52 bytes.
  The `sw` at 0x378d8 stores 4 bytes to sym(nofault) +0x0.
  The return at 0x378e4 has v0 = 0x1.

- `hub_ioerror_local` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x37900 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x37900-0x379fc (252 bytes).
  It occupies 252 bytes.
  The `lw` at 0x3793c loads 4 bytes from a3 (arg3 at entry) +0x0.
  2 such `lh` accesses load 2 bytes from a3 (arg3 at entry) +0xc, including `lh` at 0x37940, `lh` at 0x379c4.
  2 such `lh` accesses load 2 bytes from a3 (arg3 at entry) +0xe, including `lh` at 0x37948, `lh` at 0x379c8.
  The `lh` at 0x3795c loads 2 bytes from (sym(compact_to_nasid_node) + ([a3+12]:2 + [a3+12]:2)) +0x0.
  The `lh` at 0x37968 loads 2 bytes from (sym(compact_to_nasid_node) + ([a3+14]:2 + [a3+14]:2)) +0x0.
  2 such `ld` accesses load 8 bytes from a3 (arg3 at entry) +0x10, including `ld` at 0x37970, `ld` at 0x379cc.
  The `ld` at 0x37988 loads 8 bytes from ([(sym(compact_to_nasid_node) + ([a3+14]:2 + [a3+14]:2))]:2 << 0x21) -0x6dfffffffe800000.
  The `jal` at 0x379b0 calls cmn_err with a0=0x4, a1=sym(.rodata)+56232, a2=?, a3=[(sym(compact_to_nasid_node) + ([a3+14]:2 + [a3+14]:2))]:2, a4=[a3+14]:2, a5=[(sym(compact_to_nasid_node) + ([a3+12]:2 + [a3+12]:2))]:2, a6=[a3+12]:2.
  The `jal` at 0x379bc calls kl_panic with a0=sym(.rodata)+56232, a1=?, a2=?, a3=?.
  The `jal` at 0x379e0 calls cmn_err with a0=0x4, a1=sym(.rodata)+56232, a2=[a3+16]:8, a3=[(sym(compact_to_nasid_node) + ([a3+14]:2 + [a3+14]:2))]:2, a4=[a3+14]:2, a5=[(sym(compact_to_nasid_node) + ([a3+12]:2 + [a3+12]:2))]:2, a6=[a3+12]:2.
  The `jal` at 0x379ec calls kl_panic with a0=sym(.rodata)+56232, a1=?, a2=?, a3=?.
  The `beq` branch at 0x3790c targets 0x37934, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x37918 targets 0x37934, is taken when a2 == at(=0x2), and falls through when a2 != at(=0x2).
  The `bne` branch at 0x37920 targets 0x3793c, is taken when a2 != v0(=0x3), and falls through when a2 == v0(=0x3).
  The `beq` branch at 0x37934 targets 0x37928 and is always taken.
  The `bgez` branch at 0x37964 targets 0x37974, is taken when a2(=([a3] << 0x6)) >= 0 (signed), and falls through when a2(=([a3] << 0x6)) < 0 (signed).
  The `beq` branch at 0x3796c targets 0x37978 and is always taken.
  The `beq` branch at 0x3799c targets 0x379cc, is taken when (a3(=[([(sym(compact_to_nasid_node) + ([a3+14]:2 + [a3+14]:2))]:2 << 0x21)-7926335344146907136]:8) & a5(?)) == 0, and falls through when (a3(=[([(sym(compact_to_nasid_node) + ([a3+14]:2 + [a3+14]:2))]:2 << 0x21)-7926335344146907136]:8) & a5(?)) != 0.
  The `beq` branch at 0x379f4 targets 0x37928 and is always taken.
  The return at 0x3792c has v0 = one of 0x0, ret(kl_panic).

- `hub_xp_error_handler` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x379fc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x379fc-0x37ae4 (232 bytes).
  It occupies 232 bytes.
  The `ld` at 0x37a14 loads 8 bytes from (a1 << 0x21) -0x6dfffffffe3ffe18.
  The `ld` at 0x37a4c loads 8 bytes from abs 0xffffffffffffc400.
  The `lh` at 0x37a54 loads 2 bytes from (sym(nasid_to_compact_node) + (a1 + a1)) +0x0.
  The `ld` at 0x37a58 loads 8 bytes from [-0x3c00]:8 +0x0.
  The `ld` at 0x37a64 loads 8 bytes from ([[-0x3c00]:8]:8 + ([(sym(nasid_to_compact_node) + (a1 + a1))]:2 << 0x3)) +0x0.
  The `lw` at 0x37a74 loads 4 bytes from [([[-0x3c00]:8]:8 + ([(sym(nasid_to_compact_node) + (a1 + a1))]:2 << 0x3))]:8 +0x8640.
  The `jal` at 0x37a38 calls error_state_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a7=0x7.
  The `jal` at 0x37a7c calls error_state_set with a0=[[([[-0x3c00]:8]:8 + ([(sym(nasid_to_compact_node) + (a1 + a1))]:2 << 0x3))]:8+34368], a1=ret(error_state_get), a2=[([[-0x3c00]:8]:8 + ([(sym(nasid_to_compact_node) + (a1 + a1))]:2 << 0x3))]:8, a3=([(sym(nasid_to_compact_node) + (a1 + a1))]:2 << 0x3), a4=(a1 + a1).
  The `jal` at 0x37aac calls xtalk_error_handler with a0=[[([[-0x3c00]:8]:8 + ([(sym(nasid_to_compact_node) + (a1 + a1))]:2 << 0x3))]:8+34368], a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a4 at entry (arg4).
  The `jal` at 0x37ad4 calls error_state_set with a0=a0 at entry (arg0), a1=0x1, a2=?, a3=?, a5=0x7, a6=ret(error_state_get), a7=0x9.
  The `beq` branch at 0x37a30 targets 0x37ab8, is taken when (at(=[(a1 << 0x21)-7926335344142712344]:8) & 0x11) == 0, and falls through when (at(=[(a1 << 0x21)-7926335344142712344]:8) & 0x11) != 0.
  The `beq` branch at 0x37a90 targets 0x37acc, is taken when v0(=ret(error_state_set)) == a5(=0x7), and falls through when v0(=ret(error_state_set)) != a5(=0x7).
  The `beq` branch at 0x37a98 targets 0x37ad4, is taken when a6(=ret(error_state_get)) == t0(=0x3), and falls through when a6(=ret(error_state_get)) != t0(=0x3).
  The `beq` branch at 0x37acc targets 0x37abc and is always taken.
  The `beq` branch at 0x37adc targets 0x37aa4 and is always taken.
  The return at 0x37ac4 has v0 = one of ?, 0x9.

- `is_widget_pio_enabled` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x37ae4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x37ae4-0x37b4c (104 bytes).
  It occupies 104 bytes.
  The `lh` at 0x37ae4 loads 2 bytes from a0 (arg0 at entry) +0xc.
  The `lh` at 0x37b00 loads 2 bytes from (sym(compact_to_nasid_node) + ([a0+12]:2 + [a0+12]:2)) +0x0.
  The `lbu` at 0x37b10 loads 1 byte from a0 (arg0 at entry) +0x7.
  The `ld` at 0x37b14 loads 8 bytes from ([(sym(compact_to_nasid_node) + ([a0+12]:2 + [a0+12]:2))]:2 << 0x21) -0x6dfffffffe3ffef0.
  The `beq` branch at 0x37af4 targets 0x37b3c, is taken when a3(=[a0+12]:2) == a6(=-0x1), and falls through when a3(=[a0+12]:2) != a6(=-0x1).
  The `beq` branch at 0x37b08 targets 0x37b44, is taken when a7(=[(sym(compact_to_nasid_node) + ([a0+12]:2 + [a0+12]:2))]:2) == a6(=-0x1), and falls through when a7(=[(sym(compact_to_nasid_node) + ([a0+12]:2 + [a0+12]:2))]:2) != a6(=-0x1).
  The `beq` branch at 0x37b24 targets 0x37b34, is taken when (t0(=[([(sym(compact_to_nasid_node) + ([a0+12]:2 + [a0+12]:2))]:2 << 0x21)-7926335344142712560]:8) & t1(?)) == 0, and falls through when (t0(=[([(sym(compact_to_nasid_node) + ([a0+12]:2 + [a0+12]:2))]:2 << 0x21)-7926335344142712560]:8) & t1(?)) != 0.
  The return at 0x37b2c has v0 = 0x1.
  The return at 0x37b34 has v0 = 0x0.
  The return at 0x37b3c has v0 = 0x0.
  The return at 0x37b44 has v0 = 0x0.

- `hub_ioerror_handler` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x37b4c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x37b4c-0x37f50 (1028 bytes).
  It occupies 1028 bytes.
  The `lh` at 0x37b98 loads 2 bytes from ?.
  The `ld` at 0x37bf4 loads 8 bytes from a3 (arg3 at entry) +0x30.
  3 such `ld` accesses load 8 bytes from a3 (arg3 at entry) +0x10, including `ld` at 0x37c48, `ld` at 0x37cd4, `ld` at 0x37dd4.
  3 such `lw` accesses load 4 bytes from a3 (arg3 at entry) +0x0, including `lw` at 0x37c54, `lw` at 0x37cc4, `lw` at 0x37e34.
  3 such `sd` accesses store 8 bytes to a3 (arg3 at entry) +0x18, including `sd` at 0x37c68, `sd` at 0x37d2c, `sd` at 0x37e68.
  3 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x37c78, `sw` at 0x37d48, `sw` at 0x37e5c.
  3 such `sh` accesses store 2 bytes to a3 (arg3 at entry) +0x6, including `sh` at 0x37c84, `sh` at 0x37d38, `sh` at 0x37e48.
  3 such `lh` accesses load 2 bytes from a3 (arg3 at entry) +0x6, including `lh` at 0x37c88, `lh` at 0x37eb4, `lh` at 0x37f14.
  The `ld` at 0x37d08 loads 8 bytes from table(0x9200000001c00160) +0x0.
  The `lbu` at 0x37dfc loads 1 byte from ?.
  The `jal` at 0x37b7c calls hwgraph_info_get_LBL with a0=a0 at entry (arg0), a1=sym(.rodata)+56232, a2=sp-96, a3=a3 at entry (arg3).
  The `jal` at 0x37c98 calls is_widget_pio_enabled with a0=a3 at entry (arg3), a1=?, a2=0x5, a3=[a3+6]:2, a4=0x1.
  The `jal` at 0x37cb4 calls hub_xp_error_handler with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jal` at 0x37d58 calls is_widget_pio_enabled with a0=a3 at entry (arg3), a1=0x1, a2=?, a3=?.
  The `jal` at 0x37d74 calls hub_xp_error_handler with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3).
  The `jal` at 0x37da0 calls hub_xp_error_handler with a0=a0 at entry (arg0), a1=?, a2=a1 at entry (arg1), a3=a2 at entry (arg2), a4=a3 at entry (arg3), a5=0xa.
  The `jal` at 0x37e18 calls xtalk_pio_target_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x37e24 calls xtalk_pio_xtalk_addr_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x37e6c calls printf with a0=sym(.rodata)+56232, a1=?, a2=?, a3=?, a6=0x8.
  The `jal` at 0x37e84 calls hub_ioerror_local with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=0x1.
  The `jal` at 0x37e94 calls error_state_get with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x37ec0 calls hub_ioerror_local with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x37ed0 calls error_state_get with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jal` at 0x37f24 calls ioerror_dump with a0=sym(.rodata)+56232, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x37f40 calls ioerror_dump with a0=sym(.rodata)+56232, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x37b88 targets 0x37bc0, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x37b94 targets 0x37bf4, is taken when s1(=a1) == a2(=0x5), and falls through when s1(=a1) != a2(=0x5).
  The `beq` branch at 0x37ba0 targets 0x37c88, is taken when s1(=a1) == a3(=0x6), and falls through when s1(=a1) != a3(=0x6).
  The `beq` branch at 0x37ba8 targets 0x37d84, is taken when s1(=a1) == a4(=0x9), and falls through when s1(=a1) != a4(=0x9).
  The `beq` branch at 0x37bb0 targets 0x37d94, is taken when s1(=a1) == a5(=0xa), and falls through when s1(=a1) != a5(=0xa).
  The `beq` branch at 0x37bb8 targets 0x37bd4 and is always taken.
  The `beq` branch at 0x37bc8 targets 0x37e6c, is taken when s0(?) == a6(=0x8), and falls through when s0(?) != a6(=0x8).
  The `bne` branch at 0x37c0c targets 0x37cc4, is taken when a1(?) < a7(=0x9000000000000000) (unsigned), and falls through when a1(?) >= a7(=0x9000000000000000) (unsigned).
  The `beq` branch at 0x37c18 targets 0x37cc4, is taken when a1(?) >= a2(=0x9000010000000000) (unsigned), and falls through when a1(?) < a2(=0x9000010000000000) (unsigned).
  The `bne` branch at 0x37c2c targets 0x37db4, is taken when a0(=[a3+48]:8) < a3(=table(0x92000000e0000000)) (unsigned), and falls through when a0(=[a3+48]:8) >= a3(=table(0x92000000e0000000)) (unsigned).
  The `beq` branch at 0x37c40 targets 0x37db0, is taken when a0(=[a3+48]:8) >= a4(=table(0x920000000a000000)) (unsigned), and falls through when a0(=[a3+48]:8) < a4(=table(0x920000000a000000)) (unsigned).
  The `beq` branch at 0x37c80 targets 0x37d4c and is always taken.
  The `beq` branch at 0x37c90 targets 0x37e7c, is taken when a3(=[a3+6]:2) == a4(=0x1), and falls through when a3(=[a3+6]:2) != a4(=0x1).
  The `beq` branch at 0x37ca0 targets 0x37e94, is taken when v0(=ret(is_widget_pio_enabled)) == 0, and falls through when v0(=ret(is_widget_pio_enabled)) != 0.
  The `beq` branch at 0x37cbc targets 0x37bc4 and is always taken.
  The `bgez` branch at 0x37ccc targets 0x37d8c, is taken when a5(=([a3] << 0x6)) >= 0 (signed), and falls through when a5(=([a3] << 0x6)) < 0 (signed).
  The `beq` branch at 0x37ce0 targets 0x37eec, is taken when (a0(?) & 0x7) == 0, and falls through when (a0(?) & 0x7) != 0.
  The `beq` branch at 0x37d50 targets 0x37eb8, is taken when a0(?) == a1(=0x1), and falls through when a0(?) != a1(=0x1).
  The `beq` branch at 0x37d60 targets 0x37ed0, is taken when v0(=ret(is_widget_pio_enabled)) == 0, and falls through when v0(=ret(is_widget_pio_enabled)) != 0.
  The `beq` branch at 0x37d7c targets 0x37bc4 and is always taken.
  The `beq` branch at 0x37d84 targets 0x37bd0 and is always taken.
  The `beq` branch at 0x37d8c targets 0x37bd4 and is always taken.
  The `beq` branch at 0x37da8 targets 0x37bc4 and is always taken.
  The `bne` branch at 0x37dbc targets 0x37eb0, is taken when a0(=[a3+48]:8) < a2(=table(0x9200000020000000)) (unsigned), and falls through when a0(=[a3+48]:8) >= a2(=table(0x9200000020000000)) (unsigned).
  The `beq` branch at 0x37dcc targets 0x37f10, is taken when a0(=[a3+48]:8) >= a3(=table(0x9200000100000000)) (unsigned), and falls through when a0(=[a3+48]:8) < a3(=table(0x9200000100000000)) (unsigned).
  The `beq` branch at 0x37e04 targets 0x37f04, is taken when a4(?) == a2(?), and falls through when a4(?) != a2(?).
  The `bne` branch at 0x37e0c targets 0x37dec, is taken when a1(?) != 0, and falls through when a1(?) == 0.
  The `beq` branch at 0x37e64 targets 0x37d4c and is always taken.
  The `beq` branch at 0x37e74 targets 0x37bd4 and is always taken.
  The `beq` branch at 0x37e8c targets 0x37bc4 and is always taken.
  The `beq` branch at 0x37ea0 targets 0x37f18, is taken when v0(=ret(error_state_get)) == a1(=0x3), and falls through when v0(=ret(error_state_get)) != a1(=0x3).
  The `beq` branch at 0x37ea8 targets 0x37bd4 and is always taken.
  The `beq` branch at 0x37eb0 targets 0x37d4c and is always taken.
  The `beq` branch at 0x37ec8 targets 0x37bc4 and is always taken.
  The `beq` branch at 0x37edc targets 0x37f34, is taken when v0(=ret(error_state_get)) == a2(=0x3), and falls through when v0(=ret(error_state_get)) != a2(=0x3).
  The `beq` branch at 0x37ee4 targets 0x37bd4 and is always taken.
  The `beq` branch at 0x37efc targets 0x37d28 and is always taken.
  The `beq` branch at 0x37f08 targets 0x37e18 and is always taken.
  The `beq` branch at 0x37f10 targets 0x37d4c and is always taken.
  The `beq` branch at 0x37f2c targets 0x37ea8 and is always taken.
  The `beq` branch at 0x37f48 targets 0x37ee4 and is always taken.
  The return at 0x37bec has v0 = one of 0x4, ?, 0x5, 0x0.

- `hub_error_devenable` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x38bcc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x38bcc-0x38c8c (192 bytes).
  It occupies 192 bytes.
  The `lh` at 0x38c28 loads 2 bytes from ?.
  The `ld` at 0x38c5c loads 8 bytes from table(0x9200000001c002c8) +0x0.
  The `sd` at 0x38c74 stores 8 bytes to table(0x9200000001c00388) +0x0.
  The `jal` at 0x38bdc calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x38be8 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38bf4 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38c0c calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+56232, a2=sp-48, a3=?.
  The `beq` branch at 0x38c24 targets 0x38c40, is taken when s0(=a2) == a3(=0x5), and falls through when s0(=a2) != a3(=0x5).
  The `beq` branch at 0x38c2c targets 0x38c80, is taken when s0(=a2) == a0(=0x6), and falls through when s0(=a2) != a0(=0x6).
  The `beq` branch at 0x38c6c targets 0x38c78, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x38c78 targets 0x38c38 and is always taken.
  The `beq` branch at 0x38c84 targets 0x38c38 and is always taken.
  The return at 0x38c38 has v0 = 0x0.

- `hub_widgetdev_enable` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x38c8c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x38c8c-0x38d2c (160 bytes).
  It occupies 160 bytes.
  The `lh` at 0x38cf0 loads 2 bytes from ?.
  The `ld` at 0x38d08 loads 8 bytes from table(0x9200000001c00120) +0x0.
  The `sd` at 0x38d28 stores 8 bytes to table(0x9200000001c00120) +0x0.
  The `jal` at 0x38c98 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x38ca4 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38cb0 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38cc8 calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+56232, a2=sp-48, a3=?.
  The `beq` branch at 0x38ce8 targets 0x38d1c, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x38d14 targets 0x38d24, is taken when (a6(?) & a7(=entry(0x9200000001c00120))) == 0, and falls through when (a6(?) & a7(=entry(0x9200000001c00120))) != 0.
  The `beq` branch at 0x38d24 targets 0x38d1c and is always taken.
  The return at 0x38d1c has v0 = one of ret(hwgraph_info_get_LBL), table(0x9200000001c00000).

- `hub_widgetdev_shutdown` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x38d2c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x38d2c-0x38f3c (528 bytes).
  It occupies 528 bytes.
  The `lh` at 0x38db4 loads 2 bytes from ?.
  The `ld` at 0x38dd8 loads 8 bytes from table(0x9200000001c00120) +0x0.
  The `sd` at 0x38de8 stores 8 bytes to table(0x9200000001c00120) +0x0.
  The `ld` at 0x38e14 loads 8 bytes from table(0x9200000001c00400) +0x0.
  The `jal` at 0x38d38 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x38d48 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38d54 calls xwidget_info_master_get with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x38d68 calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+56232, a2=sp-96, a3=?.
  The `jal` at 0x38e68 calls hubiio_crb_free with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x38ecc calls cmn_err with a0=0x6, a1=sym(.rodata)+56232, a2=?, a3=?.
  The `jal` at 0x38f20 calls cmn_err with a0=0x6, a1=sym(.rodata)+56232, a2=sym(.rodata)+56232, a3=?.
  The `beq` branch at 0x38dac targets 0x38e90, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x38dc0 targets 0x38e90, is taken when s8(?) == a0(=-0x1), and falls through when s8(?) != a0(=-0x1).
  The `beq` branch at 0x38de4 targets 0x38f30 and is always taken.
  The `beq` branch at 0x38dec targets 0x38e44, is taken when a0(=one of 0x0, 0x1) == 0, and falls through when a0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x38e00 targets 0x38e84, is taken when s1(?) >= 0xf (signed), and falls through when s1(?) < 0xf (signed).
  The `beq` branch at 0x38e10 targets 0x38e34, is taken when v1(=[sym(free_error_crbs)]) == 0, and falls through when v1(=[sym(free_error_crbs)]) != 0.
  The `bltz` branch at 0x38e1c targets 0x38e2c, is taken when v1(=(entry(0x9200000001c00400) << 0x8)) < 0 (signed), and falls through when v1(=(entry(0x9200000001c00400) << 0x8)) >= 0 (signed).
  The `bgez` branch at 0x38e24 targets 0x38dec, is taken when a0(=(entry(0x9200000001c00400) << 0xd)) >= 0 (signed), and falls through when a0(=(entry(0x9200000001c00400) << 0xd)) < 0 (signed).
  The `beq` branch at 0x38e2c targets 0x38dec and is always taken.
  The `beq` branch at 0x38e3c targets 0x38df4, is taken when a0(=(entry(0x9200000001c00400) << 0xd)) >= 0x0 (signed), and falls through when a0(=(entry(0x9200000001c00400) << 0xd)) < 0x0 (signed).
  The `beq` branch at 0x38e44 targets 0x38e54, is taken when s5(?) == 0, and falls through when s5(?) != 0.
  The `beq` branch at 0x38e4c targets 0x38e60 and is always taken.
  The `bne` branch at 0x38e60 targets 0x38df4, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x38e74 targets 0x38df4, is taken when v1(=[sym(free_error_crbs_print)]) == 0, and falls through when v1(=[sym(free_error_crbs_print)]) != 0.
  The `beq` branch at 0x38e7c targets 0x38edc and is always taken.
  The `bne` branch at 0x38e88 targets 0x38ec0, is taken when a0(=[sym(free_error_crbs_print)]) != 0, and falls through when a0(=[sym(free_error_crbs_print)]) == 0.
  The `beq` branch at 0x38ed4 targets 0x38e94 and is always taken.
  The `beq` branch at 0x38edc targets 0x38ef4, is taken when s5(?) == 0, and falls through when s5(?) != 0.
  The `bne` branch at 0x38ee4 targets 0x38f08, is taken when v0(?) != 0, and falls through when v0(?) == 0.
  The `beq` branch at 0x38eec targets 0x38f10 and is always taken.
  The `beq` branch at 0x38f00 targets 0x38eec, is taken when a3(?) >= 0x1 (unsigned), and falls through when a3(?) < 0x1 (unsigned).
  The `beq` branch at 0x38f28 targets 0x38df8 and is always taken.
  The `beq` branch at 0x38f34 targets 0x38e0c and is always taken.
  The return at 0x38eb8 has v0 = one of ?, ret(cmn_err).

- `hub_dma_enabled` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x38f3c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x38f3c-0x39000 (196 bytes).
  It occupies 196 bytes.
  The `lh` at 0x38f98 loads 2 bytes from ?.
  The `ld` at 0x38fac loads 8 bytes from table(0x9200000001c00118) +0x0.
  The `jal` at 0x38f48 calls xwidget_info_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x38f54 calls xwidget_info_id_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38f60 calls xwidget_info_master_get with a0=ret(xwidget_info_get), a1=?, a2=?, a3=?.
  The `jal` at 0x38f7c calls hwgraph_info_get_LBL with a0=ret(xwidget_info_master_get), a1=sym(.rodata)+56232, a2=sp-48, a3=?.
  The `jal` at 0x38ff0 calls cmn_err with a0=0x6, a1=sym(.rodata)+56232, a2=?, a3=a0 at entry (arg0), a7=-0x1.
  The `beq` branch at 0x38f90 targets 0x38fd4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x38fa0 targets 0x38fdc, is taken when a4(?) == a7(=-0x1), and falls through when a4(?) != a7(=-0x1).
  The `beq` branch at 0x38fc0 targets 0x38fe4, is taken when (t1(=entry(0x9200000001c00118)) & t2(?)) == 0, and falls through when (t1(=entry(0x9200000001c00118)) & t2(?)) != 0.
  The `beq` branch at 0x38fd4 targets 0x38fc8 and is always taken.
  The `beq` branch at 0x38fdc targets 0x38fcc and is always taken.
  The `beq` branch at 0x38ff8 targets 0x38fc8 and is always taken.
  The return at 0x38fcc has v0 = one of 0x0, 0x1.

- `hub_widget_reset` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x39000 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x39000-0x39148 (328 bytes).
  It occupies 328 bytes.
  The `lh` at 0x39050 loads 2 bytes from table(sym(compact_to_nasid_node)) +0x0.
  The `ld` at 0x39094 loads 8 bytes from ?.
  The `sd` at 0x390bc stores 8 bytes to ?.
  The `sd` at 0x390c0 stores 8 bytes to (entry(sym(compact_to_nasid_node)) << 0x21) -0x6dfffffffe3ffc78.
  The `ld` at 0x390c4 loads 8 bytes from (entry(sym(compact_to_nasid_node)) << 0x21) -0x6dfffffffe3ffc78.
  The `jal` at 0x3900c calls master_node_get with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jal` at 0x3904c calls splhi with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x390e8 calls hub_setup_prb with a0=entry(sym(compact_to_nasid_node)), a1=a1 at entry (arg1), a2=0x3, a3=0x2.
  The `jal` at 0x390f0 calls splx with a0=ret(splhi), a1=?, a2=?, a3=?.
  The `jal` at 0x3912c calls assfail with a0=sym(.rodata)+56232, a1=sym(.rodata)+56232, a2=0x40d, a3=?.
  The `beq` branch at 0x39038 targets 0x390f8, is taken when a0(?) == at(=-0x1), and falls through when a0(?) != at(=-0x1).
  The `beq` branch at 0x39070 targets 0x3913c and is always taken.
  The `beq` branch at 0x39084 targets 0x390dc, is taken when s0(?) >= 0x8 (signed), and falls through when s0(?) < 0x8 (signed).
  The `beq` branch at 0x3909c targets 0x39078, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x390b4 targets 0x39078, is taken when s4(=a1) != a7(?), and falls through when s4(=a1) == a7(?).
  The `beql` branch at 0x390cc targets 0x3907c, is taken when (t0(=[(entry(sym(compact_to_nasid_node)) << 0x21)-7926335344142711928]:8) & 0x10) == 0, and falls through when (t0(=[(entry(sym(compact_to_nasid_node)) << 0x21)-7926335344142711928]:8) & 0x10) != 0; its branch-likely delay slot `addiu s0,s0,1` at 0x390d0 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x390d4 targets 0x39124 and is always taken.
  The `beq` branch at 0x39134 targets 0x3907c and is always taken.
  The `beq` branch at 0x39140 targets 0x39090 and is always taken.
  The return at 0x3911c has v0 = one of ret(master_node_get), ret(splx).

- `badaddr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3eb9c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3eb9c-0x3ebcc (48 bytes).
  It occupies 48 bytes.
  The `jal` at 0x3ebb8 calls probe_common [0x3ec6c] with a0=sp-48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x3ebc4 has v0 = ret(probe_common).

- `badaddr_val` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3ebcc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3ebcc-0x3ebfc (48 bytes).
  It occupies 48 bytes.
  The `jal` at 0x3ebe8 calls probe_common [0x3ec6c] with a0=sp-48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x3ebf4 has v0 = ret(probe_common).

- `wbadaddr` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3ebfc (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3ebfc-0x3ec34 (56 bytes).
  It occupies 56 bytes.
  The `jal` at 0x3ec20 calls probe_common [0x3ec6c] with a0=sp-48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x3ec2c has v0 = ret(probe_common).

- `wbadaddr_val` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3ec34 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3ec34-0x3ec64 (48 bytes).
  It occupies 48 bytes.
  The `jal` at 0x3ec50 calls probe_common [0x3ec6c] with a0=sp-48, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x3ec5c has v0 = ret(probe_common).

- `cpumon_alloc` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x3fb18 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x3fb18-0x3fc2c (276 bytes).
  It occupies 276 bytes.
  3 such `ld` accesses load 8 bytes from a0 (arg0 at entry) +0x488, including `ld` at 0x3fb18, `ld` at 0x3fb9c, `ld` at 0x3fc28.
  The `ld` at 0x3fb50 loads 8 bytes from a0 (arg0 at entry) +0x328.
  The `sd` at 0x3fb64 stores 8 bytes to a0 (arg0 at entry) +0x488.
  The `ld` at 0x3fbac loads 8 bytes from [a0+808]:8 +0xa8.
  The `lw` at 0x3fbb8 loads 4 bytes from ret(hwperf_cpu_monitor_info_alloc) +0x4.
  The `lh` at 0x3fbbc loads 2 bytes from ret(hwperf_cpu_monitor_info_alloc) +0x0.
  The `sw` at 0x3fbc8 stores 4 bytes to ret(hwperf_cpu_monitor_info_alloc) +0x4.
  The `sh` at 0x3fbd4 stores 2 bytes to ret(hwperf_cpu_monitor_info_alloc) +0x0.
  The `sd` at 0x3fbd8 stores 8 bytes to [a0+808]:8 +0xa8.
  The `jal` at 0x3fb7c calls hwperf_cpu_monitor_info_alloc [0x40f44] with a0=?, a1=?, a2=?, a3=?.
  The `jal` at 0x3fb94 calls mutex_bitlock with a0=[a0+808]:8+148, a1=0x1, a2=?, a3=?.
  The `jal` at 0x3fbdc calls mutex_bitunlock with a0=[a0+808]:8+148, a1=0x1, a2=ret(mutex_bitlock), a3=?.
  The `jal` at 0x3fbf0 calls mutex_bitunlock with a0=[a0+808]:8+148, a1=0x1, a2=ret(mutex_bitlock), a3=?.
  The `jal` at 0x3fc00 calls hwperf_cpu_monitor_info_free with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x3fb28 targets 0x3fb3c, is taken when v0(=[a0+1160]:8) == 0, and falls through when v0(=[a0+1160]:8) != 0.
  The `beq` branch at 0x3fb5c targets 0x3fb78 and is always taken.
  The `beq` branch at 0x3fb70 targets 0x3fbec, is taken when s0(=one of 0x0, 0x1) == 0, and falls through when s0(=one of 0x0, 0x1) != 0.
  The `beq` branch at 0x3fb88 targets 0x3fb78, is taken when v0(=ret(hwperf_cpu_monitor_info_alloc)) == 0, and falls through when v0(=ret(hwperf_cpu_monitor_info_alloc)) != 0.
  The `bne` branch at 0x3fba4 targets 0x3fb70, is taken when t8(=[a0+1160]:8) != 0, and falls through when t8(=[a0+1160]:8) == 0.
  The `bne` branch at 0x3fbb0 targets 0x3fb64, is taken when t9(=[[a0+808]:8+168]:8) != 0, and falls through when t9(=[[a0+808]:8+168]:8) == 0.
  The `beq` branch at 0x3fbe4 targets 0x3fb6c and is always taken.
  The `beq` branch at 0x3fbf8 targets 0x3fc0c, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `beq` branch at 0x3fc24 targets 0x3fb30 and is always taken.
  The return at 0x3fb34 has v0 = [a0+1160]:8.

- `piomap_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x439e4 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x439e4-0x439ec (8 bytes).
  It occupies 8 bytes.
  The return at 0x439e4 has v0 = 0x0.

- `dmamap_init` in `usr/cpu/sysgen/IP35boot/kernel.o` at 0x439ec (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/kernel.o`.
  Range: 0x439ec-0x439f4 (8 bytes).
  It occupies 8 bytes.
  The return at 0x439ec has v0 = 0x0.
