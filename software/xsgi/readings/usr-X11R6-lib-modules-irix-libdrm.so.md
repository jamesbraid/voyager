# Readings: `usr/X11R6/lib/modules/irix/libdrm.so`

One entry per routine, filed here from the reading batches by binary.

- `drmSIGIOHandler` in `usr/X11R6/lib/modules/irix/libdrm.so` at 0x405b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/irix/libdrm.so`.
  Range: 0x405b00-0x405cf0 (496 bytes).
  It occupies 496 bytes.
  4 such `lbu` accesses load 1 byte from ?, including `lbu` at 0x405b80, `lbu` at 0x405b94, `lbu` at 0x405ba8.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405c14, `lw` at 0x405c28, `lw` at 0x405c34.
  The `sb` at 0x405c98 stores 1 byte to ((ret(xf86read) << 0x0) + sp-360) +0x0.
  The `jalr` at 0x405b4c calls drmHashFirst with a0=[0x40845c], a1=sp-368, a2=sp-364, a3=a3 at entry (arg3).
  The `jalr` at 0x405bec calls xf86strtol with a0=?, a1=sp-104, a2=0x0, a3=?.
  The `jalr` at 0x405c04 calls xf86strtol with a0=?, a1=0x0, a2=0x0, a3=?.
  The `jalr` at 0x405c18 calls drmGetContextTag with a0=?, a1=ret(xf86strtol), a2=?, a3=?.
  The `jalr` at 0x405c2c calls drmGetContextTag with a0=?, a1=ret(xf86strtol), a2=?, a3=?.
  The `jalr` at 0x405c40 calls (unknown callee) with a0=?, a1=ret(drmGetContextTag), a2=ret(drmGetContextTag), a3=?.
  The `jalr` at 0x405c58 calls xf86ioctl with a0=?, a1=0xffffffff80086425, a2=sp-96, a3=?.
  The `jalr` at 0x405c6c calls drmHashNext with a0=[0x40845c], a1=sp-368, a2=sp-364, a3=?.
  The `jalr` at 0x405c84 calls xf86read with a0=?, a1=sp-360, a2=0x100, a3=?.
  The `beq` branch at 0x405b3c targets 0x405cbc, is taken when a0(=[0x40845c]) == 0, and falls through when a0(=[0x40845c]) != 0.
  The `beq` branch at 0x405b54 targets 0x405cbc, is taken when v0(=ret(drmHashFirst)) == 0, and falls through when v0(=ret(drmHashFirst)) != 0.
  The `beq` branch at 0x405b74 targets 0x405c78 and is always taken.
  The `beq` branch at 0x405b8c targets 0x405bd4, is taken when t8(?) == s0(=0x20), and falls through when t8(?) != s0(=0x20).
  The `beq` branch at 0x405ba0 targets 0x405bd4, is taken when t9(?) == s0(=0x20), and falls through when t9(?) != s0(=0x20).
  The `beq` branch at 0x405bb4 targets 0x405bd4, is taken when ra(?) == s0(=0x20), and falls through when ra(?) != s0(=0x20).
  The `bne` branch at 0x405bcc targets 0x405b80, is taken when at(?) != s0(=0x20), and falls through when at(?) == s0(=0x20).
  The `beq` branch at 0x405c74 targets 0x405cbc, is taken when v0(=ret(drmHashNext)) == 0, and falls through when v0(=ret(drmHashNext)) != 0.
  The `beq` branch at 0x405c8c targets 0x405c60, is taken when v0(=ret(xf86read)) == 0, and falls through when v0(=ret(xf86read)) != 0.
  The `bne` branch at 0x405cac targets 0x405b7c, is taken when v1(?) != s0(=0x20), and falls through when v1(?) == s0(=0x20).
  The `beq` branch at 0x405cb4 targets 0x405bdc and is always taken.
  The return at 0x405ce8 has v0 = one of ?, ret(drmHashFirst), ret(drmHashNext).

- `drmInstallSIGIOHandler` in `usr/X11R6/lib/modules/irix/libdrm.so` at 0x405d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/irix/libdrm.so`.
  Range: 0x405d00-0x405d68 (104 bytes).
  It occupies 104 bytes.
  The `sw` at 0x405d48 stores 4 bytes to ret(drmGetEntry) +0x4.
  The `bgezall` at 0x405d2c calls drmGetEntry [0x402400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405d4c calls xf86InstallSIGIOHandler with a0=a0 at entry (arg0), a1=0x405b00, a2=0x0, a3=a1 at entry (arg1).
  The return at 0x405d60 has v0 = ret(xf86InstallSIGIOHandler).

- `drmRemoveSIGIOHandler` in `usr/X11R6/lib/modules/irix/libdrm.so` at 0x405d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/irix/libdrm.so`.
  Range: 0x405d80-0x405dd4 (84 bytes).
  It occupies 84 bytes.
  The `sw` at 0x405db4 stores 4 bytes to ret(drmGetEntry) +0x4.
  The `bgezall` at 0x405da8 calls drmGetEntry [0x402400] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405db8 calls xf86RemoveSIGIOHandler with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The return at 0x405dcc has v0 = ret(xf86RemoveSIGIOHandler).

- `drmSetup` in `usr/X11R6/lib/modules/irix/libdrm.so` at 0x407400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/irix/libdrm.so`.
  Range: 0x407400-0x407408 (8 bytes).
  It occupies 8 bytes.
  The return at 0x407400 has v0 = 0x1.
