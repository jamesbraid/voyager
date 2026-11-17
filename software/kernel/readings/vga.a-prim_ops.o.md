# Readings: `usr/cpu/sysgen/IP35boot/vga.a(prim_ops.o)`

One entry per routine, filed here from the reading batches by binary.

- `ins` in `usr/cpu/sysgen/IP35boot/vga.a(prim_ops.o)` at 0x464c (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/vga.a(prim_ops.o)`.
  Range: 0x464c-0x4860 (532 bytes).
  It occupies 532 bytes.
  The `lw` at 0x4658 loads 4 bytes from sym(_X86EMU_env) +0x3c.
  4 such `lw` accesses load 4 bytes from sym(_X86EMU_env) +0x4c, including `lw` at 0x4674, `lw` at 0x46e0, `lw` at 0x479c.
  3 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x22, including `lhu` at 0x46a4, `lhu` at 0x46ac, `lhu` at 0x4754.
  4 such `lw` accesses load 4 bytes from sym(_X86EMU_env) +0x20, including `lw` at 0x46b0, `lw` at 0x46fc, `lw` at 0x4758.
  6 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x26, including `lhu` at 0x46c8, `lhu` at 0x4770, `lhu` at 0x47c4.
  6 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x46, including `lhu` at 0x46cc, `lhu` at 0x4774, `lhu` at 0x47c8.
  13 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x36, including `lhu` at 0x46d8, `lhu` at 0x46dc, `lhu` at 0x4744.
  4 such `sh` accesses store 2 bytes to sym(_X86EMU_env) +0x36, including `sh` at 0x46e8, `sh` at 0x4750, `sh` at 0x4798.
  The `sh` at 0x46f4 stores 2 bytes to sym(_X86EMU_env) +0x22.
  The `sw` at 0x4704 stores 4 bytes to sym(_X86EMU_env) +0x4c.
  The `sw` at 0x470c stores 4 bytes to sym(_X86EMU_env) +0x20.
  The `jalr` at 0x46c4 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=[sym(_X86EMU_env)+34]:2, a2=[sym(sys_inl)]:8, a3=?, a5=0x4, a6=0x1.
  The `jal` at 0x46d4 calls store_data_long_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+54]:2, a2=ret(?), a3=?.
  The `jalr` at 0x476c calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=?, a2=?, a3=?.
  The `jal` at 0x477c calls store_data_byte_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+54]:2, a2=ret(?), a3=?.
  The `jalr` at 0x47c0 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=?, a2=?, a3=?.
  The `jal` at 0x47d0 calls store_data_word_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+54]:2, a2=ret(?), a3=?.
  The `jalr` at 0x4800 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=a1 at entry (arg1), a2=[sym(_X86EMU_env)+76], a3=0x2, a4=[sym(sys_inl)]:8, a5=[sym(sys_inw)]:8, a6=0x4.
  The `jal` at 0x4810 calls store_data_long_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+54]:2, a2=ret(?), a3=?.
  The `jalr` at 0x4820 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=a1 at entry (arg1), a2=[sym(_X86EMU_env)+76], a3=0x2, a5=[sym(sys_inw)]:8, a6=[sym(sys_inb)]:8.
  The `jal` at 0x4830 calls store_data_word_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+54]:2, a2=ret(?), a3=?.
  The `jalr` at 0x4840 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=a1 at entry (arg1), a2=[sym(_X86EMU_env)+76], a3=0x2, a5=0x4, a6=[sym(sys_inb)]:8.
  The `jal` at 0x4850 calls store_data_byte_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+54]:2, a2=ret(?), a3=?.
  The `beq` branch at 0x4668 targets 0x4674, is taken when (at(=[sym(_X86EMU_env)+60]) & 0x400) == 0, and falls through when (at(=[sym(_X86EMU_env)+60]) & 0x400) != 0.
  The `beq` branch at 0x4688 targets 0x4728, is taken when (a2(=[sym(_X86EMU_env)+76]) & 0x180) == 0, and falls through when (a2(=[sym(_X86EMU_env)+76]) & 0x180) != 0.
  The `beq` branch at 0x4694 targets 0x4754, is taken when a0 == a6(=0x1), and falls through when a0 != a6(=0x1).
  The `beq` branch at 0x46a0 targets 0x47ac, is taken when a0 == v1(=0x2), and falls through when a0 != v1(=0x2).
  The `bne` branch at 0x46a8 targets 0x46f4, is taken when a0 != a5(=0x4), and falls through when a0 == a5(=0x4).
  The `beq` branch at 0x46b8 targets 0x46f0, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x4728 targets 0x4840, is taken when a0 == a6(=0x1), and falls through when a0 != a6(=0x1).
  The `beq` branch at 0x4730 targets 0x4820, is taken when a0 == a3(=0x2), and falls through when a0 != a3(=0x2).
  The `beq` branch at 0x473c targets 0x4800, is taken when a0 == a6(=0x4), and falls through when a0 != a6(=0x4).
  The `beq` branch at 0x474c targets 0x4710 and is always taken.
  The `beq` branch at 0x4760 targets 0x46f4, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x4794 targets 0x4768, is taken when at(=-0x1) != s1(?), and falls through when at(=-0x1) == s1(?).
  The `beq` branch at 0x47a4 targets 0x46f4 and is always taken.
  The `beq` branch at 0x47b4 targets 0x46f4, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x47e8 targets 0x47bc, is taken when at(=-0x1) != s1(?), and falls through when at(=-0x1) == s1(?).
  The `beq` branch at 0x47f8 targets 0x46f4 and is always taken.
  The `beq` branch at 0x4818 targets 0x4748 and is always taken.
  The `beq` branch at 0x4838 targets 0x4748 and is always taken.
  The `beq` branch at 0x4858 targets 0x4748 and is always taken.
  The return at 0x4720 has v0 = ?.

- `outs` in `usr/cpu/sysgen/IP35boot/vga.a(prim_ops.o)` at 0x4860 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/vga.a(prim_ops.o)`.
  Range: 0x4860-0x4a7c (540 bytes).
  It occupies 540 bytes.
  The `lw` at 0x486c loads 4 bytes from sym(_X86EMU_env) +0x3c.
  4 such `lw` accesses load 4 bytes from sym(_X86EMU_env) +0x4c, including `lw` at 0x4888, `lw` at 0x48f4, `lw` at 0x49b0.
  3 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x22, including `lhu` at 0x48b8, `lhu` at 0x48c0, `lhu` at 0x4964.
  4 such `lw` accesses load 4 bytes from sym(_X86EMU_env) +0x20, including `lw` at 0x48c4, `lw` at 0x4910, `lw` at 0x4968.
  13 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x32, including `lhu` at 0x48d4, `lhu` at 0x48f0, `lhu` at 0x4940.
  6 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x46, including `lhu` at 0x48dc, `lhu` at 0x4980, `lhu` at 0x49d8.
  6 such `lhu` accesses load 2 bytes from sym(_X86EMU_env) +0x26, including `lhu` at 0x48ec, `lhu` at 0x4990, `lhu` at 0x49e8.
  4 such `sh` accesses store 2 bytes to sym(_X86EMU_env) +0x32, including `sh` at 0x48fc, `sh` at 0x4960, `sh` at 0x49ac.
  The `sh` at 0x4908 stores 2 bytes to sym(_X86EMU_env) +0x22.
  The `sw` at 0x4918 stores 4 bytes to sym(_X86EMU_env) +0x4c.
  The `sw` at 0x4920 stores 4 bytes to sym(_X86EMU_env) +0x20.
  The `jal` at 0x48d8 calls fetch_data_long_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+50]:2, a2=a2 at entry (arg2), a3=[sym(_X86EMU_env)+76], a6=0x1.
  The `jalr` at 0x48e8 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=ret(fetch_data_long_abs), a2=[sym(sys_outl)]:8, a3=?.
  The `jal` at 0x497c calls fetch_data_byte_abs with a0=[sym(_X86EMU_env)+70]:2, a1=?, a2=?, a3=?.
  The `jalr` at 0x498c calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=ret(fetch_data_byte_abs), a2=?, a3=?.
  The `jal` at 0x49d4 calls fetch_data_word_abs with a0=[sym(_X86EMU_env)+70]:2, a1=?, a2=?, a3=?.
  The `jalr` at 0x49e4 calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=ret(fetch_data_word_abs), a2=?, a3=?.
  The `jal` at 0x4a1c calls fetch_data_long_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+50]:2, a2=a2 at entry (arg2), a3=[sym(_X86EMU_env)+76], a4=0x2, a6=0x1, a7=0x4.
  The `jalr` at 0x4a2c calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=ret(fetch_data_long_abs), a2=?, a3=?, a5=[sym(sys_outl)]:8.
  The `jal` at 0x4a3c calls fetch_data_word_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+50]:2, a2=a2 at entry (arg2), a3=[sym(_X86EMU_env)+76], a4=0x2, a6=0x1.
  The `jalr` at 0x4a4c calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=ret(fetch_data_word_abs), a2=?, a3=?, a6=[sym(sys_outw)]:8.
  The `jal` at 0x4a5c calls fetch_data_byte_abs with a0=[sym(_X86EMU_env)+70]:2, a1=[sym(_X86EMU_env)+50]:2, a2=a2 at entry (arg2), a3=[sym(_X86EMU_env)+76], a4=0x2, a6=0x1.
  The `jalr` at 0x4a6c calls (unknown callee) with a0=[sym(_X86EMU_env)+38]:2, a1=ret(fetch_data_byte_abs), a2=?, a3=?, a7=[sym(sys_outb)]:8.
  The `beq` branch at 0x487c targets 0x4888, is taken when (at(=[sym(_X86EMU_env)+60]) & 0x400) == 0, and falls through when (at(=[sym(_X86EMU_env)+60]) & 0x400) != 0.
  The `beq` branch at 0x489c targets 0x493c, is taken when (a3(=[sym(_X86EMU_env)+76]) & 0x180) == 0, and falls through when (a3(=[sym(_X86EMU_env)+76]) & 0x180) != 0.
  The `beq` branch at 0x48a8 targets 0x4964, is taken when a0 == a6(=0x1), and falls through when a0 != a6(=0x1).
  The `beq` branch at 0x48b4 targets 0x49c0, is taken when a0 == v1(=0x2), and falls through when a0 != v1(=0x2).
  The `bne` branch at 0x48bc targets 0x4908, is taken when a0 != a1(=0x4), and falls through when a0 == a1(=0x4).
  The `beq` branch at 0x48cc targets 0x4904, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x493c targets 0x4a5c, is taken when a0 == a6(=0x1), and falls through when a0 != a6(=0x1).
  The `beq` branch at 0x4944 targets 0x4a3c, is taken when a0 == a4(=0x2), and falls through when a0 != a4(=0x2).
  The `beq` branch at 0x4950 targets 0x4a18, is taken when a0 == a7(=0x4), and falls through when a0 != a7(=0x4).
  The `beq` branch at 0x495c targets 0x4924 and is always taken.
  The `beq` branch at 0x4974 targets 0x4908, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x49a8 targets 0x497c, is taken when ra(=-0x1) != s1(?), and falls through when ra(=-0x1) == s1(?).
  The `beq` branch at 0x49b8 targets 0x4908 and is always taken.
  The `beq` branch at 0x49cc targets 0x4908, is taken when s1(?) == 0, and falls through when s1(?) != 0.
  The `bne` branch at 0x4a00 targets 0x49d4, is taken when ra(=-0x1) != s1(?), and falls through when ra(=-0x1) == s1(?).
  The `beq` branch at 0x4a10 targets 0x4908 and is always taken.
  The `beq` branch at 0x4a34 targets 0x4958 and is always taken.
  The `beq` branch at 0x4a54 targets 0x4958 and is always taken.
  The `beq` branch at 0x4a74 targets 0x4958 and is always taken.
  The return at 0x4934 has v0 = ?.
