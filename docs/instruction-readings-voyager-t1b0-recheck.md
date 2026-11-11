# Instruction readings from hostfacts

These entries record instruction facts rendered from the routines below. They describe software behavior, not hardware behavior, and each locator names an address in the identified binary.

- `firegl_modify_ldt` in `usr/cpu/sysgen/IP35boot/fglrx.o` at 0x10278 (n64).
  Evidence grade: inferred.
  Exact binary: `usr/cpu/sysgen/IP35boot/fglrx.o`.
  Range: 0x10278-0x10280 (8 bytes).
  It occupies 8 bytes.
  The return at 0x10278 has v0 = 0x0.
- `firegl_GetKernelInfo` in `usr/X11R6/lib/modules/dri/fglrx_dri.so` at 0x4be600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/dri/fglrx_dri.so`.
  Range: 0x4be600-0x4be7c4 (452 bytes).
  It occupies 452 bytes.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x4be650, `sw` at 0x4be7c0.
  2 such `lw` accesses load 4 bytes from sym(errno) +0x0, including `lw` at 0x4be6b8, `lw` at 0x4be73c.
  The `sb` at 0x4be770 stores 1 byte to ?.
  7 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4be784, `sw` at 0x4be78c, `sw` at 0x4be794.
  The `jalr` at 0x4be64c calls drmMalloc with a0=0x1c, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4be6a4 calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0246450, a2=sp-96, a3=?, a4=-0xc.
  The `jalr` at 0x4be6c8 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4be6e0 calls drmFree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4be6fc calls drmMalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4be72c calls ioctl with a0=a0 at entry (arg0), a1=0xffffffffc0246450, a2=sp-96, a3=?.
  The `bne` branch at 0x4be61c targets 0x4be640, is taken when a1 != 0, and falls through when a1 == 0.
  The `bne` branch at 0x4be658 targets 0x4be680, is taken when v0(=ret(drmMalloc)) != 0, and falls through when v0(=ret(drmMalloc)) == 0.
  The `beq` branch at 0x4be6ac targets 0x4be6f4, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4be6d4 targets 0x4be6ec, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x4be6ec targets 0x4be628 and is always taken.
  The `beq` branch at 0x4be6f4 targets 0x4be71c, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x4be704 targets 0x4be74c, is taken when v0(=ret(drmMalloc)) == 0, and falls through when v0(=ret(drmMalloc)) != 0.
  The `bne` branch at 0x4be714 targets 0x4be6c8, is taken when a5(?) != 0, and falls through when a5(?) == 0.
  The `beq` branch at 0x4be734 targets 0x4be760, is taken when v0(=ret(ioctl)) == 0, and falls through when v0(=ret(ioctl)) != 0.
  The `beq` branch at 0x4be744 targets 0x4be6c4 and is always taken.
  The `beq` branch at 0x4be758 targets 0x4be710 and is always taken.
  The `beq` branch at 0x4be764 targets 0x4be778, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x4be7bc targets 0x4be628 and is always taken.
  The return at 0x4be62c has v0 = one of -0x16, ?, 0x0.
  The return at 0x4be66c has v0 = -0xc.
  The instructions from 0x4be634 to 0x4be63c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4be674 to 0x4be67c are not reached by any path from the entry, and their branches are not listed.

Skipped no routines.
