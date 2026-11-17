# Readings: `usr/X11R6/lib/modules/extensions/libdri.so`

One entry per routine, filed here from the reading batches by binary.

- `XFree86DRIExtensionInit` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402980-0x402a10 (144 bytes).
  It occupies 144 bytes.
  The `lw` at 0x4029e4 loads 4 bytes from ret(AddExtension) +0x18.
  The `lw` at 0x4029e8 loads 4 bytes from ret(AddExtension) +0xc.
  The `jalr` at 0x40299c calls DRIExtensionInit with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4029d4 calls AddExtension with a0=0x40c000, a1=0x0, a2=0x2, a3=0x403880, a4=0x403b00, a5=0x402a40, a6=sym(StandardMinorOpcode).
  The `beq` branch at 0x4029a4 targets 0x402a00, is taken when v0(=ret(DRIExtensionInit)) == 0, and falls through when v0(=ret(DRIExtensionInit)) != 0.
  The `beq` branch at 0x4029dc targets 0x402a00, is taken when v0(=ret(AddExtension)) == 0, and falls through when v0(=ret(AddExtension)) != 0.
  The return at 0x4029f8 has v0 = ret(AddExtension).
  The return at 0x402a08 has v0 = one of ret(DRIExtensionInit), ret(AddExtension).

- `XF86DRIResetProc` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402a40-0x402a74 (52 bytes).
  It occupies 52 bytes.
  The `jalr` at 0x402a5c calls DRIReset with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The return at 0x402a6c has v0 = ret(DRIReset).

- `ProcXF86DRIQueryVersion` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402a80-0x402b1c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x402a80 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402aa4 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x402abc loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x402b10 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x402b00 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-48, a3=?.
  The `beq` branch at 0x402a8c targets 0x402a9c, is taken when at(=[a0+136]) == a3(=0x1), and falls through when at(=[a0+136]) != a3(=0x1).
  The `beq` branch at 0x402acc targets 0x402af0, is taken when v1(=[a0+16]) == 0, and falls through when v1(=[a0+16]) != 0.
  The return at 0x402a94 has v0 = 0x10.
  The return at 0x402b14 has v0 = [a0+40].

- `ProcXF86DRIQueryDirectRenderingCapable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402b40-0x402bf8 (184 bytes).
  It occupies 184 bytes.
  The `lw` at 0x402b44 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402b4c loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x402b74 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x402b7c loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x402b98 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x402bd4 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x402b94 calls DRIQueryDirectRenderingCapable with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=sp-32, a2=[a0+28], a3=0x1, a4=[a0+8].
  The `jalr` at 0x402bac calls LocalClient with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x402bc4 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `beq` branch at 0x402b54 targets 0x402b64, is taken when at(=[a0+136]) == v1(=0x2), and falls through when at(=[a0+136]) != v1(=0x2).
  The `beq` branch at 0x402b9c targets 0x402be0, is taken when v0(=ret(DRIQueryDirectRenderingCapable)) == 0, and falls through when v0(=ret(DRIQueryDirectRenderingCapable)) != 0.
  The `beq` branch at 0x402bb4 targets 0x402bf0, is taken when v0(=ret(LocalClient)) == 0, and falls through when v0(=ret(LocalClient)) != 0.
  The `beq` branch at 0x402bf0 targets 0x402bb8 and is always taken.
  The return at 0x402b5c has v0 = 0x10.
  The return at 0x402bd8 has v0 = [a0+40].
  The return at 0x402be8 has v0 = 0x2.

- `ProcXF86DRIOpenConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402c00-0x402d00 (256 bytes).
  It occupies 256 bytes.
  The `lw` at 0x402c04 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402c20 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x402c28 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x402c48 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x402c60 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x402ce4 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x402c44 calls DRIOpenConnection with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=sp-64, a2=sp-56, a3=a3 at entry (arg3).
  The `jalr` at 0x402c78 calls xf86strlen with a0=?, a1=?, a2=[a0+28], a3=0x1, a5=0x0.
  The `jalr` at 0x402cb8 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-48, a3=?, a6=-0x4.
  The `jalr` at 0x402cd4 calls WriteToClient with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x402c10 targets 0x402c20, is taken when at(=[a0+136]) == v1(=0x2), and falls through when at(=[a0+136]) != v1(=0x2).
  The `beq` branch at 0x402c4c targets 0x402cf0, is taken when v0(=ret(DRIOpenConnection)) == 0, and falls through when v0(=ret(DRIOpenConnection)) != 0.
  The `beq` branch at 0x402c6c targets 0x402c88, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x402cc4 targets 0x402cdc, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The return at 0x402c18 has v0 = 0x10.
  The return at 0x402ce8 has v0 = [a0+40].
  The return at 0x402cf8 has v0 = 0x2.

- `ProcXF86DRIAuthConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402d00-0x402db0 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0x402d04 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402d08 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x402d38 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x402d44 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x402d54 loads 4 bytes from [a0+8] +0x8.
  The `lw` at 0x402d60 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x402d84 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `lw` at 0x402d9c loads 4 bytes from ?.
  The `jalr` at 0x402d5c calls DRIAuthConnection with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=[[a0+8]+8], a2=([[a0+8]+4] << 0x2), a3=0x1, a4=[a0+28].
  The `jalr` at 0x402d74 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `jalr` at 0x402da0 calls ErrorF with a0=0x40c010, a1=?, a2=?, a3=?.
  The `beq` branch at 0x402d18 targets 0x402d28, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `beq` branch at 0x402d64 targets 0x402d90, is taken when v0(=ret(DRIAuthConnection)) == 0, and falls through when v0(=ret(DRIAuthConnection)) != 0.
  The `beq` branch at 0x402da8 targets 0x402d68 and is always taken.
  The return at 0x402d20 has v0 = 0x10.
  The return at 0x402d88 has v0 = [a0+40].

- `ProcXF86DRICloseConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402dc0-0x402e1c (92 bytes).
  It occupies 92 bytes.
  The `lw` at 0x402dc4 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402de0 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x402de8 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x402e04 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x402e10 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x402e00 calls DRICloseConnection with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=([[a0+8]+4] << 0x2), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `beq` branch at 0x402dd0 targets 0x402de0, is taken when at(=[a0+136]) == v1(=0x2), and falls through when at(=[a0+136]) != v1(=0x2).
  The return at 0x402dd8 has v0 = 0x10.
  The return at 0x402e14 has v0 = [a0+40].

- `ProcXF86DRIGetClientDriverName` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402e40-0x402f24 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x402e44 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402e60 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x402e68 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x402e90 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x402ea4 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x402f18 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x402e8c calls DRIGetClientDriverName with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=sp-56, a2=sp-52, a3=sp-48, a4=sp-32, a5=([[a0+8]+4] << 0x2).
  The `jalr` at 0x402ebc calls xf86strlen with a0=?, a1=?, a2=?, a3=?, a5=0x0, a6=[a0+28], a7=0x1.
  The `jalr` at 0x402eec calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `jalr` at 0x402f08 calls WriteToClient with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x402e50 targets 0x402e60, is taken when at(=[a0+136]) == v1(=0x2), and falls through when at(=[a0+136]) != v1(=0x2).
  The `beq` branch at 0x402eb0 targets 0x402ecc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x402ef8 targets 0x402f10, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The return at 0x402e58 has v0 = 0x10.
  The return at 0x402f1c has v0 = [a0+40].

- `ProcXF86DRICreateContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x402f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x402f40-0x40309c (348 bytes).
  It occupies 348 bytes.
  The `lw` at 0x402f44 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x402f54 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x402f78 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x402f80 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x402f90 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lh` at 0x402f94 loads 2 bytes from [(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52] +0x60.
  The `lw` at 0x402f9c loads 4 bytes from [a0+8] +0x8.
  The `lw` at 0x402fa8 loads 4 bytes from [(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52] +0x64.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x402fc0, `lw` at 0x402fd8, `lw` at 0x402ff0.
  The `lw` at 0x40305c loads 4 bytes from [a0+8] +0xc.
  The `lw` at 0x403098 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x403060 calls DRICreateContext with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=?, a2=[[a0+8]+12], a3=sp-40, a5=[[a0+8]+8].
  The `jalr` at 0x403088 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-48, a3=?.
  The `beq` branch at 0x402f50 targets 0x402f6c, is taken when at(=[a0+136]) == v1(=0x4), and falls through when at(=[a0+136]) != v1(=0x4).
  The `blez` branch at 0x402fa4 targets 0x403030, is taken when t1(=[[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52]+96]:2) <= 0 (signed), and falls through when t1(=[[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52]+96]:2) > 0 (signed).
  The `beq` branch at 0x402fc8 targets 0x403020, is taken when a7(?) == a5(=[[a0+8]+8]), and falls through when a7(?) != a5(=[[a0+8]+8]).
  The `beq` branch at 0x402fd0 targets 0x403020, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x402fe0 targets 0x403020, is taken when t8(?) == a5(=[[a0+8]+8]), and falls through when t8(?) != a5(=[[a0+8]+8]).
  The `beq` branch at 0x402fe8 targets 0x403020, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x402ff8 targets 0x403020, is taken when t9(?) == a5(=[[a0+8]+8]), and falls through when t9(?) != a5(=[[a0+8]+8]).
  The `beq` branch at 0x403000 targets 0x403020, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x403010 targets 0x403020, is taken when at(?) == a5(=[[a0+8]+8]), and falls through when at(?) != a5(=[[a0+8]+8]).
  The `bne` branch at 0x403018 targets 0x402fc0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x403020 targets 0x403040, is taken when a6(?) != t1(=[[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52]+96]:2), and falls through when a6(?) == t1(=[[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52]+96]:2).
  The `beq` branch at 0x403038 targets 0x403028, is taken when t1(=[[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52]+96]:2) == 0, and falls through when t1(=[[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52]+96]:2) != 0.
  The `bne` branch at 0x403068 targets 0x403080, is taken when v0(=ret(DRICreateContext)) != 0, and falls through when v0(=ret(DRICreateContext)) == 0.
  The `beq` branch at 0x403070 targets 0x402f60 and is always taken.
  The `beq` branch at 0x403094 targets 0x402f60 and is always taken.
  The return at 0x402f58 has v0 = 0x10.
  The return at 0x402f64 has v0 = one of 0x2, [a0+40].
  The return at 0x403028 has v0 = 0x2.
  The instructions from 0x403078 to 0x40307c are not reached by any path from the entry, and their branches are not listed.

- `ProcXF86DRIDestroyContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4030c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4030c0-0x40312c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x4030c4 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x4030cc loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x4030e8 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x4030f0 loads 4 bytes from [a0+8] +0x8.
  The `lw` at 0x403104 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x403114 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x403100 calls DRIDestroyContext with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=[[a0+8]+8], a2=([[a0+8]+4] << 0x2), a3=a3 at entry (arg3), a4=[a0+8].
  The `beq` branch at 0x4030d4 targets 0x4030e4, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `beq` branch at 0x403108 targets 0x403120, is taken when v0(=ret(DRIDestroyContext)) == 0, and falls through when v0(=ret(DRIDestroyContext)) != 0.
  The return at 0x4030dc has v0 = 0x10.
  The return at 0x403118 has v0 = [a0+40].
  The return at 0x403124 has v0 = 0x2.

- `ProcXF86DRICreateDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403140-0x403250 (272 bytes).
  It occupies 272 bytes.
  The `lw` at 0x403144 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x403148 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x403194 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x4031a8 loads 4 bytes from [a0+8] +0x8.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4031b8, `lw` at 0x4031f0, `lw` at 0x40320c.
  The `lw` at 0x4031cc loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4031d8 loads 4 bytes from ret(LookupIDByType) +0x0.
  The `lw` at 0x4031e0 loads 4 bytes from [ret(LookupIDByType)] +0x4.
  The `sw` at 0x4031e4 stores 4 bytes to ?.
  The `lw` at 0x403238 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x4031a4 calls SecurityLookupDrawable with a0=[[a0+8]+8], a1=a0 at entry (arg0), a2=0x1, a3=[a0+28].
  The `jalr` at 0x4031c8 calls LookupIDByType with a0=?, a1=[sym(__glXWindowRes)], a2=ret(SecurityLookupDrawable), a3=?.
  The `jalr` at 0x403208 calls DRICreateDrawable with a0=?, a1=?, a2=?, a3=sp-56.
  The `jalr` at 0x403228 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `beq` branch at 0x403158 targets 0x403180, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `bne` branch at 0x4031b4 targets 0x4031e8, is taken when v0(=ret(SecurityLookupDrawable)) != 0, and falls through when v0(=ret(SecurityLookupDrawable)) == 0.
  The `beq` branch at 0x4031d0 targets 0x403248, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `bne` branch at 0x403210 targets 0x403220, is taken when v0(=ret(DRICreateDrawable)) != 0, and falls through when v0(=ret(DRICreateDrawable)) == 0.
  The `beq` branch at 0x403218 targets 0x403168 and is always taken.
  The `beq` branch at 0x403248 targets 0x403168 and is always taken.
  The return at 0x403160 has v0 = 0x10.
  The return at 0x40316c has v0 = 0x2.
  The return at 0x403240 has v0 = [a0+40].
  The instructions from 0x403174 to 0x40317c are not reached by any path from the entry, and their branches are not listed.

- `ProcXF86DRIDestroyDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403280-0x403354 (212 bytes).
  It occupies 212 bytes.
  The `lw` at 0x403284 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x403288 loads 4 bytes from a0 (arg0 at entry) +0x8.
  2 such `lw` accesses load 4 bytes from [a0+8] +0x8, including `lw` at 0x4032c8, `lw` at 0x4032d8.
  The `lw` at 0x4032ec loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4032f8 loads 4 bytes from ret(LookupIDByType) +0x0.
  The `lw` at 0x403300 loads 4 bytes from [ret(LookupIDByType)] +0x4.
  The `sw` at 0x403304 stores 4 bytes to [a0+8] +0x8.
  The `lw` at 0x403310 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x403328 loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x403338 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x4032c4 calls SecurityLookupDrawable with a0=[[a0+8]+8], a1=a0 at entry (arg0), a2=0x1, a3=a3 at entry (arg3).
  The `jalr` at 0x4032e8 calls LookupIDByType with a0=[[a0+8]+8], a1=[sym(__glXWindowRes)], a2=ret(SecurityLookupDrawable), a3=?, a5=[[a0+8]+8].
  The `jalr` at 0x403324 calls DRIDestroyDrawable with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=?, a2=?, a3=([[a0+8]+4] << 0x2).
  The `beq` branch at 0x403298 targets 0x4032b0, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `bne` branch at 0x4032d4 targets 0x403308, is taken when v0(=ret(SecurityLookupDrawable)) != 0, and falls through when v0(=ret(SecurityLookupDrawable)) == 0.
  The `beq` branch at 0x4032f0 targets 0x40334c, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x40332c targets 0x403344, is taken when v0(=ret(DRIDestroyDrawable)) == 0, and falls through when v0(=ret(DRIDestroyDrawable)) != 0.
  The `beq` branch at 0x403344 targets 0x4032a8 and is always taken.
  The `beq` branch at 0x40334c targets 0x4032a8 and is always taken.
  The return at 0x4032a0 has v0 = 0x10.
  The return at 0x4032a8 has v0 = 0x2.
  The return at 0x40333c has v0 = [a0+40].

- `ProcXF86DRIGetDrawableInfo` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403380-0x40356c (492 bytes).
  It occupies 492 bytes.
  The `lw` at 0x403384 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x403388 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x4033bc loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x4033d0 loads 4 bytes from [a0+8] +0x8.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4033e8, `lw` at 0x403410, `lw` at 0x40342c.
  The `lw` at 0x4033f0 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4033fc loads 4 bytes from ret(LookupIDByType) +0x0.
  The `lw` at 0x403404 loads 4 bytes from [ret(LookupIDByType)] +0x4.
  The `sw` at 0x403408 stores 4 bytes to ?.
  The `lw` at 0x403544 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x4033cc calls SecurityLookupDrawable with a0=[[a0+8]+8], a1=a0 at entry (arg0), a2=0x1, a3=[a0+28].
  The `jalr` at 0x4033ec calls LookupIDByType with a0=?, a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `jalr` at 0x403470 calls DRIGetDrawableInfo with a0=?, a1=?, a2=sp-88, a3=sp-84, a4=sp-56, a5=sp-52, a6=sp-48, a7=sp-44.
  The `jalr` at 0x4034fc calls WriteToClient with a0=a0 at entry (arg0), a1=0x24, a2=sp-96, a3=?.
  The `jalr` at 0x403518 calls WriteToClient with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x403534 calls WriteToClient with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x403398 targets 0x4033a8, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `bne` branch at 0x4033d4 targets 0x40340c, is taken when v0(=ret(SecurityLookupDrawable)) != 0, and falls through when v0(=ret(SecurityLookupDrawable)) == 0.
  The `beq` branch at 0x4033f4 targets 0x403550, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `beq` branch at 0x403478 targets 0x40355c, is taken when v0(=ret(DRIGetDrawableInfo)) == 0, and falls through when v0(=ret(DRIGetDrawableInfo)) != 0.
  The `beq` branch at 0x4034b8 targets 0x4034c8, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `beq` branch at 0x4034cc targets 0x4034dc, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x403508 targets 0x403520, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x403524 targets 0x40353c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The return at 0x4033a0 has v0 = 0x10.
  The return at 0x403548 has v0 = [a0+40].
  The return at 0x403554 has v0 = 0x2.
  The return at 0x403564 has v0 = 0x2.

- `ProcXF86DRIGetDeviceInfo` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403580-0x403678 (248 bytes).
  It occupies 248 bytes.
  The `lw` at 0x403584 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x40358c loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x4035b4 loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x4035c0 loads 4 bytes from [a0+8] +0x4.
  The `lw` at 0x4035ec loads 4 bytes from (sym(screenInfo) + ([[a0+8]+4] << 0x2)) +0x34.
  The `lw` at 0x40365c loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x4035e8 calls DRIGetDeviceInfo with a0=[(sym(screenInfo) + ([[a0+8]+4] << 0x2))+52], a1=sp-32, a2=sp-48, a3=sp-44, a4=sp-40, a5=sp-36, a6=sp-24, a7=([[a0+8]+4] << 0x2).
  The `jalr` at 0x403630 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `jalr` at 0x40364c calls WriteToClient with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x403594 targets 0x4035a4, is taken when at(=[a0+136]) == v1(=0x2), and falls through when at(=[a0+136]) != v1(=0x2).
  The `beq` branch at 0x4035f0 targets 0x403668, is taken when v0(=ret(DRIGetDeviceInfo)) == 0, and falls through when v0(=ret(DRIGetDeviceInfo)) != 0.
  The `beq` branch at 0x403610 targets 0x403624, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x40363c targets 0x403654, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The return at 0x40359c has v0 = 0x10.
  The return at 0x403660 has v0 = [a0+40].
  The return at 0x403670 has v0 = 0x2.

- `ProcXF86DRIOpenFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403680-0x403764 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x403684 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x403688 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x4036bc loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x4036d0 loads 4 bytes from [a0+8] +0x8.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4036e8, `lw` at 0x403714, `lw` at 0x403728.
  The `lw` at 0x4036f0 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4036fc loads 4 bytes from ret(LookupIDByType) +0x0.
  The `lw` at 0x403704 loads 4 bytes from [ret(LookupIDByType)] +0x4.
  The `sw` at 0x403708 stores 4 bytes to ?.
  The `lw` at 0x40374c loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x4036cc calls SecurityLookupDrawable with a0=[[a0+8]+8], a1=a0 at entry (arg0), a2=0x1, a3=[a0+28].
  The `jalr` at 0x4036ec calls LookupIDByType with a0=?, a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `jalr` at 0x403724 calls DRIOpenFullScreen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x40373c calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `beq` branch at 0x403698 targets 0x4036a8, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `bne` branch at 0x4036d4 targets 0x40370c, is taken when v0(=ret(SecurityLookupDrawable)) != 0, and falls through when v0(=ret(SecurityLookupDrawable)) == 0.
  The `beq` branch at 0x4036f4 targets 0x403758, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The return at 0x4036a0 has v0 = 0x10.
  The return at 0x403750 has v0 = [a0+40].
  The return at 0x40375c has v0 = 0x2.

- `ProcXF86DRICloseFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403780-0x403860 (224 bytes).
  It occupies 224 bytes.
  The `lw` at 0x403784 loads 4 bytes from a0 (arg0 at entry) +0x88.
  The `lw` at 0x403788 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lw` at 0x4037bc loads 4 bytes from a0 (arg0 at entry) +0x1c.
  The `lw` at 0x4037d0 loads 4 bytes from [a0+8] +0x8.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4037e8, `lw` at 0x403814, `lw` at 0x403828.
  The `lw` at 0x4037f0 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4037fc loads 4 bytes from ret(LookupIDByType) +0x0.
  The `lw` at 0x403804 loads 4 bytes from [ret(LookupIDByType)] +0x4.
  The `sw` at 0x403808 stores 4 bytes to ?.
  The `lw` at 0x403848 loads 4 bytes from a0 (arg0 at entry) +0x28.
  The `jalr` at 0x4037cc calls SecurityLookupDrawable with a0=[[a0+8]+8], a1=a0 at entry (arg0), a2=0x1, a3=[a0+28].
  The `jalr` at 0x4037ec calls LookupIDByType with a0=?, a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `jalr` at 0x403824 calls DRICloseFullScreen with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x403838 calls WriteToClient with a0=a0 at entry (arg0), a1=0x20, a2=sp-64, a3=?.
  The `beq` branch at 0x403798 targets 0x4037a8, is taken when at(=[a0+136]) == v1(=0x3), and falls through when at(=[a0+136]) != v1(=0x3).
  The `bne` branch at 0x4037d4 targets 0x40380c, is taken when v0(=ret(SecurityLookupDrawable)) != 0, and falls through when v0(=ret(SecurityLookupDrawable)) == 0.
  The `beq` branch at 0x4037f4 targets 0x403854, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The return at 0x4037a0 has v0 = 0x10.
  The return at 0x40384c has v0 = [a0+40].
  The return at 0x403858 has v0 = 0x2.

- `ProcXF86DRIDispatch` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403880-0x403ab0 (560 bytes).
  It occupies 560 bytes.
  The `lw` at 0x403884 loads 4 bytes from a0 (arg0 at entry) +0x8.
  2 such `lbu` accesses load 1 byte from [a0+8] +0x1, including `lbu` at 0x403888, `lbu` at 0x4038cc.
  The `lw` at 0x4038e8 loads 4 bytes from table(0x40c030) +0x0.
  The `jalr` at 0x4038bc calls LocalClient with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+8].
  The `bgezall` at 0x403920 calls ProcXF86DRIQueryDirectRenderingCapable [0x402b40] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+8].
  The `bgezall` at 0x403960 calls ProcXF86DRIOpenConnection [0x402c00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403974 calls ProcXF86DRICloseFullScreen [0x403780] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x40398c calls ProcXF86DRIOpenFullScreen [0x403680] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4039a4 calls ProcXF86DRIAuthConnection [0x402d00] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4039c8 calls ProcXF86DRIGetDeviceInfo [0x403580] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4039e0 calls ProcXF86DRIGetDrawableInfo [0x403380] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4039f8 calls ProcXF86DRIDestroyDrawable [0x403280] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403a10 calls ProcXF86DRICreateDrawable [0x403140] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403a28 calls ProcXF86DRIDestroyContext [0x4030c0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403a50 calls ProcXF86DRICreateContext [0x402f40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403a68 calls ProcXF86DRIGetClientDriverName [0x402e40] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403a88 calls ProcXF86DRICloseConnection [0x402dc0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x403aa0 calls ProcXF86DRIQueryVersion [0x402a80] with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[a0+8].
  The `beq` branch at 0x4038a4 targets 0x403a98, is taken when v0(=[[a0+8]+1]:1) == 0, and falls through when v0(=[[a0+8]+1]:1) != 0.
  The `beq` branch at 0x4038b0 targets 0x403918, is taken when v0(=[[a0+8]+1]:1) == v1(=0x1), and falls through when v0(=[[a0+8]+1]:1) != v1(=0x1).
  The `beq` branch at 0x4038c4 targets 0x403940, is taken when v0(=ret(LocalClient)) == 0, and falls through when v0(=ret(LocalClient)) != 0.
  The `beq` branch at 0x4038e0 targets 0x4038f4, is taken when v1(=[[a0+8]+1]:1) >= 0xe (unsigned), and falls through when v1(=[[a0+8]+1]:1) < 0xe (unsigned).
  The `beq` branch at 0x403968 targets 0x403900 and is always taken.
  The `beq` branch at 0x40397c targets 0x403900 and is always taken.
  The `beq` branch at 0x403994 targets 0x403900 and is always taken.
  The `beq` branch at 0x4039ac targets 0x403900 and is always taken.
  The `beq` branch at 0x4039d0 targets 0x403900 and is always taken.
  The `beq` branch at 0x4039e8 targets 0x403900 and is always taken.
  The `beq` branch at 0x403a00 targets 0x403900 and is always taken.
  The `beq` branch at 0x403a18 targets 0x403900 and is always taken.
  The `beq` branch at 0x403a58 targets 0x403900 and is always taken.
  The `beq` branch at 0x403a70 targets 0x403900 and is always taken.
  The `beq` branch at 0x403a90 targets 0x403900 and is always taken.
  The `beq` branch at 0x403aa8 targets 0x403900 and is always taken.
  The return at 0x403910 has v0 = one of 0x1, ret(ProcXF86DRIOpenConnection), ret(ProcXF86DRICloseFullScreen), ret(ProcXF86DRIOpenFullScreen), ret(ProcXF86DRIAuthConnection), ret(ProcXF86DRIGetDeviceInfo), ret(ProcXF86DRIGetDrawableInfo), ret(ProcXF86DRIDestroyDrawable), ret(ProcXF86DRICreateDrawable), ret(ProcXF86DRICreateContext), ret(ProcXF86DRIGetClientDriverName), ret(ProcXF86DRICloseConnection), ret(ProcXF86DRIQueryVersion).
  The return at 0x403934 has v0 = ret(ProcXF86DRIQueryDirectRenderingCapable).
  The return at 0x403950 has v0 = [0x40cac8].
  The return at 0x403a40 has v0 = ret(ProcXF86DRIDestroyContext).
  The instructions from 0x40393c to 0x40393c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4039b4 to 0x4039bc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x403a78 to 0x403a7c are not reached by any path from the entry, and their branches are not listed.
  The indirect jump at 0x4038ec uses the jump table at 0x40c030 with targets 0x4038f4, 0x4038f4, 0x403958, 0x403a80, 0x403a60, 0x403a48, 0x403a20, 0x403a08, 0x4039f0, 0x4039d8, 0x4039c0, 0x40399c, 0x403984, 0x403970.

- `SProcXF86DRIQueryVersion` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403ac0-0x403ae0 (32 bytes).
  It occupies 32 bytes.
  The `lw` at 0x403ac0 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lbu` at 0x403ac8 loads 1 byte from [a0+8] +0x3.
  The `lbu` at 0x403acc loads 1 byte from [a0+8] +0x2.
  The `sb` at 0x403ad4 stores 1 byte to [a0+8] +0x3.
  The `sb` at 0x403adc stores 1 byte to [a0+8] +0x2.
  The `bgezl` branch at 0x403ad8 targets 0x402a80 and is always taken.

- `SProcXF86DRIDispatch` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403b00-0x403b84 (132 bytes).
  It occupies 132 bytes.
  The `lw` at 0x403b18 loads 4 bytes from a0 (arg0 at entry) +0x8.
  The `lbu` at 0x403b34 loads 1 byte from [a0+8] +0x1.
  The `jalr` at 0x403b24 calls LocalClient with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x403b6c calls SProcXF86DRIQueryVersion [0x403ac0] with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x403b2c targets 0x403b50, is taken when v0(=ret(LocalClient)) == 0, and falls through when v0(=ret(LocalClient)) != 0.
  The `beq` branch at 0x403b38 targets 0x403b64, is taken when v1(=[[a0+8]+1]:1) == 0, and falls through when v1(=[[a0+8]+1]:1) != 0.
  The return at 0x403b48 has v0 = 0x1.
  The return at 0x403b5c has v0 = [0x40cac8].
  The return at 0x403b7c has v0 = ret(SProcXF86DRIQueryVersion).

- `XF86SerDRIQueryVersion` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403bc0-0x403bd8 (24 bytes).
  It occupies 24 bytes.
  The `sw` at 0x403bc4 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x403bc8 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x403bd4 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The return at 0x403bd0 has v0 = 0x1.

- `XF86SerDRIQueryDirectRenderingCapable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403c00-0x403c60 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x403c30 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `jalr` at 0x403c2c calls DRIQueryDirectRenderingCapable with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=a2 at entry (arg2), a3=(a1 << 0x2), a4=0x10c9c.
  The `beq` branch at 0x403c34 targets 0x403c4c, is taken when v0(=ret(DRIQueryDirectRenderingCapable)) == 0, and falls through when v0(=ret(DRIQueryDirectRenderingCapable)) != 0.
  The return at 0x403c44 has v0 = 0x1.
  The return at 0x403c58 has v0 = 0x0.

- `XF86SerDRIOpenConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403c80-0x403d00 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x403cbc loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `sw` at 0x403cec stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x403cb8 calls DRIOpenConnection with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=sp-32, a3=a2 at entry (arg2), a4=0x10c1c.
  The `jalr` at 0x403cdc calls xf86strdup with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x403cc0 targets 0x403cdc, is taken when v0(=ret(DRIOpenConnection)) != 0, and falls through when v0(=ret(DRIOpenConnection)) == 0.
  The return at 0x403cd4 has v0 = 0x0.
  The return at 0x403cf8 has v0 = 0x1.

- `XF86SerDRIAuthConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403d00-0x403d78 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x403d34 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `jalr` at 0x403d30 calls DRIAuthConnection with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=a2 at entry (arg2), a3=(a1 << 0x2), a4=0x10b9c.
  The `jalr` at 0x403d5c calls ErrorF with a0=0x40c010, a1=a2 at entry (arg2), a2=?, a3=?.
  The `beq` branch at 0x403d38 targets 0x403d50, is taken when v0(=ret(DRIAuthConnection)) == 0, and falls through when v0(=ret(DRIAuthConnection)) != 0.
  The return at 0x403d48 has v0 = 0x1.
  The return at 0x403d70 has v0 = 0x0.

- `XF86SerDRICloseConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403d80-0x403dc8 (72 bytes).
  It occupies 72 bytes.
  The `lw` at 0x403dac loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `jalr` at 0x403da8 calls DRICloseConnection with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=(a1 << 0x2), a2=0x10b1c, a3=a3 at entry (arg3).
  The return at 0x403dc0 has v0 = 0x1.

- `XF86SerDRIGetClientDriverName` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403e00-0x403e54 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x403e3c loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `jalr` at 0x403e38 calls DRIGetClientDriverName with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=a3 at entry (arg3), a3=a4 at entry (arg4), a4=a5 at entry (arg5), a6=(a1 << 0x2).
  The return at 0x403e4c has v0 = 0x1.

- `XF86SerDRICreateContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x403e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x403e80-0x403fe4 (356 bytes).
  It occupies 356 bytes.
  The `lw` at 0x403ea0 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `lh` at 0x403ea4 loads 2 bytes from [(sym(screenInfo) + (a1 << 0x2))+52] +0x60.
  The `lw` at 0x403eb8 loads 4 bytes from [(sym(screenInfo) + (a1 << 0x2))+52] +0x64.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x403ed0, `lw` at 0x403ee8, `lw` at 0x403f00.
  The `sw` at 0x403f98 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `jalr` at 0x403f70 calls FakeClientID with a0=0x0, a1=(a1 << 0x2), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=0x10a1c.
  The `jalr` at 0x403f9c calls DRICreateContext with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=?, a2=ret(FakeClientID), a3=a4 at entry (arg4), a4=a3 at entry (arg3).
  The `blez` branch at 0x403eb4 targets 0x403f58, is taken when t0(=[[(sym(screenInfo) + (a1 << 0x2))+52]+96]:2) <= 0 (signed), and falls through when t0(=[[(sym(screenInfo) + (a1 << 0x2))+52]+96]:2) > 0 (signed).
  The `beq` branch at 0x403ed8 targets 0x403f30, is taken when a7(?) == a2, and falls through when a7(?) != a2.
  The `beq` branch at 0x403ee0 targets 0x403f30, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x403ef0 targets 0x403f30, is taken when t1(?) == a2, and falls through when t1(?) != a2.
  The `beq` branch at 0x403ef8 targets 0x403f30, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x403f08 targets 0x403f30, is taken when t2(?) == a2, and falls through when t2(?) != a2.
  The `beq` branch at 0x403f10 targets 0x403f30, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `beq` branch at 0x403f20 targets 0x403f30, is taken when t3(?) == a2, and falls through when t3(?) != a2.
  The `bne` branch at 0x403f28 targets 0x403ed0, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `bne` branch at 0x403f38 targets 0x403f68, is taken when s0(?) != t0(=[[(sym(screenInfo) + (a1 << 0x2))+52]+96]:2), and falls through when s0(?) == t0(=[[(sym(screenInfo) + (a1 << 0x2))+52]+96]:2).
  The `beq` branch at 0x403f60 targets 0x403f40, is taken when t0(=[[(sym(screenInfo) + (a1 << 0x2))+52]+96]:2) == 0, and falls through when t0(=[[(sym(screenInfo) + (a1 << 0x2))+52]+96]:2) != 0.
  The `beq` branch at 0x403fa8 targets 0x403fc8, is taken when v0(=ret(DRICreateContext)) == 0, and falls through when v0(=ret(DRICreateContext)) != 0.
  The return at 0x403f50 has v0 = 0x0.
  The return at 0x403fc0 has v0 = 0x1.
  The return at 0x403fdc has v0 = 0x0.

- `XF86SerDRIDestroyContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404000-0x404060 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x404030 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `jalr` at 0x40402c calls DRIDestroyContext with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=a2 at entry (arg2), a3=(a1 << 0x2), a4=0x1089c.
  The `beq` branch at 0x404034 targets 0x40404c, is taken when v0(=ret(DRIDestroyContext)) == 0, and falls through when v0(=ret(DRIDestroyContext)) != 0.
  The return at 0x404044 has v0 = 0x1.
  The return at 0x404058 has v0 = 0x0.

- `LookupMyDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404080-0x4040e4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x4040b4 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4040c8 loads 4 bytes from ret(LookupIDByType) +0x0.
  The `jalr` at 0x404090 calls LookupIDByClass with a0=a0 at entry (arg0), a1=0x40000000, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4040b0 calls LookupIDByType with a0=a0 at entry (arg0), a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `bne` branch at 0x404098 targets 0x4040d4, is taken when v0(=ret(LookupIDByClass)) != 0, and falls through when v0(=ret(LookupIDByClass)) == 0.
  The `beq` branch at 0x4040bc targets 0x4040d4, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The return at 0x4040cc has v0 = [ret(LookupIDByType)].
  The return at 0x4040dc has v0 = ret(LookupIDByClass).

- `XF86SerDRICreateDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404100-0x4041a4 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x404170 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `bgezall` at 0x40412c calls LookupMyDrawable [0x404080] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40416c calls DRICreateDrawable with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=ret(LookupMyDrawable), a3=a3 at entry (arg3).
  The `bne` branch at 0x404134 targets 0x404150, is taken when v0(=ret(LookupMyDrawable)) != 0, and falls through when v0(=ret(LookupMyDrawable)) == 0.
  The `beq` branch at 0x404178 targets 0x404190, is taken when v0(=ret(DRICreateDrawable)) == 0, and falls through when v0(=ret(DRICreateDrawable)) != 0.
  The return at 0x404148 has v0 = 0x0.
  The return at 0x404188 has v0 = 0x1.
  The return at 0x40419c has v0 = 0x0.

- `XF86SerDRIDestroyDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4041c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4041c0-0x40425c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x404228 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `bgezall` at 0x4041e8 calls LookupMyDrawable [0x404080] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x404224 calls DRIDestroyDrawable with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=ret(LookupMyDrawable), a3=?.
  The `bne` branch at 0x4041f0 targets 0x40420c, is taken when v0(=ret(LookupMyDrawable)) != 0, and falls through when v0(=ret(LookupMyDrawable)) == 0.
  The `beq` branch at 0x404230 targets 0x404248, is taken when v0(=ret(DRIDestroyDrawable)) == 0, and falls through when v0(=ret(DRIDestroyDrawable)) != 0.
  The return at 0x404204 has v0 = 0x0.
  The return at 0x404240 has v0 = 0x1.
  The return at 0x404254 has v0 = 0x0.

- `XF86SerDRIGetDrawableInfo` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404280-0x404408 (392 bytes).
  It occupies 392 bytes.
  6 such `sw` accesses store 4 bytes to ?, including `sw` at 0x4042ac, `sw` at 0x4042b8, `sw` at 0x4042c4.
  The `lw` at 0x404328 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  4 such `lw` accesses load 4 bytes from ?, including `lw` at 0x404388, `lw` at 0x40438c, `lw` at 0x4043d4.
  The `bgezall` at 0x4042d8 calls LookupMyDrawable [0x404080] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40435c calls DRIGetDrawableInfo with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=ret(LookupMyDrawable), a2=a3 at entry (arg3), a3=a4 at entry (arg4), a4=a5 at entry (arg5), a5=a6 at entry (arg6), a6=a7 at entry (arg7).
  The `jalr` at 0x40439c calls Xalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4043b0 calls Xalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4043d0 calls xf86memcpy with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4043e8 calls xf86memcpy with a0=?, a1=?, a2=?, a3=?.
  The `bne` branch at 0x4042e0 targets 0x404300, is taken when v0(=ret(LookupMyDrawable)) != 0, and falls through when v0(=ret(LookupMyDrawable)) == 0.
  The `bne` branch at 0x404364 targets 0x404380, is taken when v0(=ret(DRIGetDrawableInfo)) != 0, and falls through when v0(=ret(DRIGetDrawableInfo)) == 0.
  The `beq` branch at 0x40436c targets 0x4042ec and is always taken.
  The return at 0x4042f4 has v0 = 0x0.
  The return at 0x404400 has v0 = 0x1.
  The instructions from 0x4042fc to 0x4042fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x404374 to 0x40437c are not reached by any path from the entry, and their branches are not listed.

- `XF86SerDRIGetDeviceInfo` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404440-0x4044e4 (164 bytes).
  It occupies 164 bytes.
  3 such `lw` accesses load 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34, including `lw` at 0x404490, `lw` at 0x40449c, `lw` at 0x4044ac.
  The `lh` at 0x4044a4 loads 2 bytes from [(sym(screenInfo) + (a1 << 0x2))+52] +0x8.
  The `sw` at 0x4044a8 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `lh` at 0x4044b4 loads 2 bytes from [(sym(screenInfo) + (a1 << 0x2))+52] +0xa.
  The `sw` at 0x4044b8 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `jalr` at 0x40448c calls DRIGetDeviceInfo with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=a2 at entry (arg2), a2=a5 at entry (arg5), a3=a6 at entry (arg6), a4=a7 at entry (arg7).
  The `beq` branch at 0x404494 targets 0x4044d0, is taken when v0(=ret(DRIGetDeviceInfo)) == 0, and falls through when v0(=ret(DRIGetDeviceInfo)) != 0.
  The return at 0x4044c8 has v0 = 0x1.
  The return at 0x4044dc has v0 = 0x0.

- `XF86SerDRIOpenFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404500-0x404574 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x404560 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `bgezall` at 0x404524 calls LookupMyDrawable [0x404080] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40455c calls DRIOpenFullScreen with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=ret(LookupMyDrawable), a2=?, a3=?.
  The `bne` branch at 0x40452c targets 0x404544, is taken when v0(=ret(LookupMyDrawable)) != 0, and falls through when v0(=ret(LookupMyDrawable)) == 0.
  The return at 0x40453c has v0 = 0x0.
  The return at 0x40456c has v0 = ret(DRIOpenFullScreen).

- `XF86SerDRICloseFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404580-0x4045f8 (120 bytes).
  It occupies 120 bytes.
  The `lw` at 0x4045e0 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `bgezall` at 0x4045a4 calls LookupMyDrawable [0x404080] with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4045dc calls DRICloseFullScreen with a0=[(sym(screenInfo) + (a1 << 0x2))+52], a1=ret(LookupMyDrawable), a2=?, a3=?.
  The `bne` branch at 0x4045ac targets 0x4045c4, is taken when v0(=ret(LookupMyDrawable)) != 0, and falls through when v0(=ret(LookupMyDrawable)) == 0.
  The return at 0x4045bc has v0 = 0x0.
  The return at 0x4045f0 has v0 = 0x1.

- `__driMesaWindowExists` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404600-0x404670 (112 bytes).
  It occupies 112 bytes.
  The `lw` at 0x404640 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `jalr` at 0x404624 calls LookupIDByClass with a0=a1 at entry (arg1), a1=0x40000000, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x40463c calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `beq` branch at 0x40462c targets 0x40464c, is taken when v0(=ret(LookupIDByClass)) == 0, and falls through when v0(=ret(LookupIDByClass)) != 0.
  The `bne` branch at 0x404644 targets 0x404660, is taken when v0(=ret(LookupIDByType)) != 0, and falls through when v0(=ret(LookupIDByType)) == 0.
  The return at 0x404658 has v0 = 0x1.
  The return at 0x404668 has v0 = 0x0.

- `DRIDrvMsg` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404680-0x4046c4 (68 bytes).
  It occupies 68 bytes.
  The `jalr` at 0x4046b0 calls xf86VDrvMsgVerb with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=0x1, a3=a2 at entry (arg2), a4=sp-40.
  The return at 0x4046bc has v0 = ret(xf86VDrvMsgVerb).

- `__glXFindDRIScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404700-0x404744 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x40470c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x404718 loads 4 bytes from abs 0x40c94c.
  The `lw` at 0x404720 loads 4 bytes from (sym(screenInfo) + (a1 << 0x2)) +0x34.
  The `lw` at 0x404724 loads 4 bytes from [(sym(screenInfo) + (a1 << 0x2))+52] +0x168.
  The `lw` at 0x404730 loads 4 bytes from ([[(sym(screenInfo) + (a1 << 0x2))+52]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x404738 loads 4 bytes from [([[(sym(screenInfo) + (a1 << 0x2))+52]+360] + ([0x40caf0] << 0x2))] +0x484.
  The `lw` at 0x404740 loads 4 bytes from abs 0x484.
  The `bltz` branch at 0x404714 targets 0x40473c, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The return at 0x404734 has v0 = [[([[(sym(screenInfo) + (a1 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+1156].
  The return at 0x40473c has v0 = [0x484].

- `GLXDRIScreenInit` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404780-0x404864 (228 bytes).
  It occupies 228 bytes.
  The `lw` at 0x4047b4 loads 4 bytes from (sym(screenInfo) + (a0 << 0x2)) +0x34.
  The `lw` at 0x4047b8 loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0x168.
  The `lw` at 0x4047c8 loads 4 bytes from ([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x4047f0 loads 4 bytes from a1 (arg1 at entry) +0x18.
  The `lw` at 0x4047f4 loads 4 bytes from a1 (arg1 at entry) +0xc.
  The `sw` at 0x404808 stores 4 bytes to ?.
  The `jalr` at 0x4047d8 calls xf86LoaderCheckSymbol with a0=0x40c068, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[0x40caf0], a4=sym(screenInfo).
  The `jalr` at 0x4047f8 calls __driServerCreateScreen with a0=a0 at entry (arg0), a1=[a1+24], a2=[a1+12], a3=a1+84.
  The `jalr` at 0x40481c calls xf86DrvMsg with a0=a0 at entry (arg0), a1=0x7, a2=0x40c080, a3=?.
  The `bltz` branch at 0x4047a4 targets 0x404858, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x4047e0 targets 0x404840, is taken when v0(=ret(xf86LoaderCheckSymbol)) == 0, and falls through when v0(=ret(xf86LoaderCheckSymbol)) != 0.
  The `beq` branch at 0x404804 targets 0x404840, is taken when v0(=ret(__driServerCreateScreen)) == 0, and falls through when v0(=ret(__driServerCreateScreen)) != 0.
  The `beq` branch at 0x40485c targets 0x4047d0 and is always taken.
  The return at 0x404834 has v0 = 0x1.
  The return at 0x404850 has v0 = 0x0.
  The instructions from 0x40483c to 0x40483c are not reached by any path from the entry, and their branches are not listed.

- `DRIScreenInit` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404880-0x404e58 (1496 bytes).
  It occupies 1496 bytes.
  2 such `lw` accesses load 4 bytes from sym(serverGeneration) +0x0, including `lw` at 0x40489c, `lw` at 0x4048d8.
  The `lw` at 0x404904 loads 4 bytes from a1 (arg1 at entry) +0x48.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x168, including `lw` at 0x404938, `lw` at 0x404cb0, `lw` at 0x404d2c.
  7 such `sw` accesses store 4 bytes to ([a0+360] + ([0x40caf0] << 0x2)) +0x0, including `sw` at 0x404954, `sw` at 0x404984, `sw` at 0x404cc0.
  5 such `sw` accesses store 4 bytes to ret(Xcalloc) +0x0, including `sw` at 0x40498c, `sw` at 0x404ca8, `sw` at 0x404d24.
  The `sw` at 0x404990 stores 4 bytes to ret(Xcalloc) +0x34.
  The `sw` at 0x404994 stores 4 bytes to ret(Xcalloc) +0x38.
  The `sw` at 0x404998 stores 4 bytes to ret(Xcalloc) +0x44.
  The `sw` at 0x4049a0 stores 4 bytes to ret(Xcalloc) +0x4.
  The `lw` at 0x4049a4 loads 4 bytes from a1 (arg1 at entry) +0x90.
  The `sw` at 0x4049a8 stores 4 bytes to ret(Xcalloc) +0x474.
  The `lw` at 0x4049ac loads 4 bytes from a1 (arg1 at entry) +0x94.
  The `sw` at 0x4049b0 stores 4 bytes to ret(Xcalloc) +0x47c.
  The `sw` at 0x4049b4 stores 4 bytes to ret(Xcalloc) +0x478.
  The `lw` at 0x4049bc loads 4 bytes from a1 (arg1 at entry) +0x54.
  11 such `lw` accesses load 4 bytes from ret(Xcalloc) +0x4, including `lw` at 0x4049d0, `lw` at 0x404a0c, `lw` at 0x404a50.
  The `sw` at 0x4049d4 stores 4 bytes to a2 (arg2 at entry) +0x0.
  11 such `lw` accesses load 4 bytes from ret(Xcalloc) +0x34, including `lw` at 0x4049d8, `lw` at 0x404a04, `lw` at 0x404a2c.
  12 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x4049e0, `lw` at 0x404a28, `lw` at 0x404a9c.
  The `lw` at 0x4049e8 loads 4 bytes from [ret(Xcalloc)+52] +0x4c.
  2 such `lw` accesses load 4 bytes from [ret(Xcalloc)+52] +0x54, including `lw` at 0x4049f4, `lw` at 0x404cfc.
  5 such `lw` accesses load 4 bytes from [ret(Xcalloc)+52] +0x70, including `lw` at 0x404a1c, `lw` at 0x404a48, `lw` at 0x404a64.
  3 such `ld` accesses load 8 bytes from ret(Xcalloc) +0x8, including `ld` at 0x404a38, `ld` at 0x404a58, `ld` at 0x404a94.
  5 such `lw` accesses load 4 bytes from ret(Xcalloc) +0x10, including `lw` at 0x404a74, `lw` at 0x404a88, `lw` at 0x404bd8.
  The `lwu` at 0x404abc loads 4 bytes from [ret(Xcalloc)+52] +0x64.
  The `lw` at 0x404ac8 loads 4 bytes from [ret(Xcalloc)+52] +0x68.
  The `ld` at 0x404ad8 loads 8 bytes from ret(Xcalloc) +0x18.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x404b30, `lw` at 0x404b44.
  3 such `lw` accesses load 4 bytes from [ret(Xcalloc)+52] +0x74, including `lw` at 0x404bb0, `lw` at 0x404bf4, `lw` at 0x404c7c.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x404bd4, `sw` at 0x404be0, `sw` at 0x404bec.
  The `sw` at 0x404c3c stores 4 bytes to sym(__glxDRIScreenInit) +0x0.
  The `lw` at 0x404c94 loads 4 bytes from a1 (arg1 at entry) +0x4c.
  The `jalr` at 0x4048c0 calls AllocateScreenPrivateIndex with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4048dc calls drmAvailable with a0=[sym(serverGeneration)], a1=?, a2=?, a3=?.
  The `jalr` at 0x4048f0 calls xf86LoaderCheckSymbol with a0=0x40c0a8, a1=?, a2=?, a3=?.
  The `jalr` at 0x404900 calls drmOpen with a0=[a1+72], a1=0x0, a2=?, a3=?.
  The `jalr` at 0x40492c calls Xcalloc with a0=0x488, a1=?, a2=?, a3=?.
  The `jalr` at 0x4049b8 calls drmSetBusid with a0=?, a1=[a1+84], a2=?, a3=([a0+360] + ([0x40caf0] << 0x2)), a4=([0x40caf0] << 0x2), a5=[a1+148], a6=[a1+144], a7=0x1.
  The `bgezall` at 0x4049f0 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c130, a3=[[ret(Xcalloc)+52]+76], a4=[[ret(Xcalloc)+52]+84].
  The `jalr` at 0x404a18 calls drmAddMap with a0=[ret(Xcalloc)+4], a1=0x0, a2=[[ret(Xcalloc)+52]+112], a3=0x2, a4=0x20, a5=ret(Xcalloc)+8.
  The `bgezall` at 0x404a44 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c178, a3=[[ret(Xcalloc)+52]+112], a4=[ret(Xcalloc)+8]:8.
  The `jalr` at 0x404a60 calls drmMap with a0=[ret(Xcalloc)+4], a1=[ret(Xcalloc)+8]:8, a2=[[ret(Xcalloc)+52]+112], a3=ret(Xcalloc)+16.
  The `jalr` at 0x404a80 calls xf86memset with a0=[ret(Xcalloc)+16], a1=0x0, a2=[[ret(Xcalloc)+52]+112], a3=?.
  The `bgezall` at 0x404aa0 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c1b8, a3=[ret(Xcalloc)+8]:8, a4=[ret(Xcalloc)+16].
  The `jalr` at 0x404ac4 calls drmAddMap with a0=[ret(Xcalloc)+4], a1=[[ret(Xcalloc)+52]+100], a2=[[ret(Xcalloc)+52]+104], a3=0x0, a4=0x0, a5=ret(Xcalloc)+24.
  The `bgezall` at 0x404ae4 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c1e0, a3=[ret(Xcalloc)+24]:8.
  The `jalr` at 0x404af4 calls drmGetReservedContextList with a0=[ret(Xcalloc)+4], a1=sp-112, a2=?, a3=?.
  The `jalr` at 0x404b34 calls DRICreateContextPrivFromHandle with a0=a0 at entry (arg0), a1=?, a2=0x4, a3=?.
  The `jalr` at 0x404b48 calls drmAddContextTag with a0=[ret(Xcalloc)+4], a1=?, a2=ret(DRICreateContextPrivFromHandle), a3=?.
  The `jalr` at 0x404b78 calls drmFreeReservedContextList with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x404ba4 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c208, a3=?, a4=one of 0x40caf8, 0x40cafa.
  The `bgezall` at 0x404c6c calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c238, a3=[[ret(Xcalloc)+52]+116].
  The `bgezall` at 0x404c98 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c0d8, a3=[a1+76].
  The `jalr` at 0x404cc4 calls drmClose with a0=[ret(Xcalloc)+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x404cd0 calls xf86strerror with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x404cf8 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c108, a3=[ret(Xcalloc)+4], a4=[[ret(Xcalloc)+52]+84], a5=ret(xf86strerror).
  The `jalr` at 0x404d40 calls drmClose with a0=[ret(Xcalloc)+4], a1=?, a2=?, a3=([a0+360] + ([0x40caf0] << 0x2)), a4=([0x40caf0] << 0x2).
  The `bgezall` at 0x404d5c calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c160, a3=?.
  The `jalr` at 0x404d8c calls drmClose with a0=[ret(Xcalloc)+4], a1=?, a2=?, a3=([a0+360] + ([0x40caf0] << 0x2)), a4=([0x40caf0] << 0x2).
  The `bgezall` at 0x404da8 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c1a0, a3=?.
  The `jalr` at 0x404de4 calls drmUnmap with a0=[ret(Xcalloc)+16], a1=[[ret(Xcalloc)+52]+112], a2=([a0+360] + ([0x40caf0] << 0x2)), a3=([0x40caf0] << 0x2).
  The `jalr` at 0x404df0 calls drmClose with a0=[ret(Xcalloc)+4], a1=?, a2=?, a3=?.
  The `bgezall` at 0x404e0c calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c160, a3=?.
  The `bgezall` at 0x404e48 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c0c0, a3=([a0+360] + ([0x40caf0] << 0x2)), a4=([0x40caf0] << 0x2).
  The `beq` branch at 0x4048b4 targets 0x4048e8, is taken when at(=[sym(serverGeneration)]) == v1(=[0x40cad0]), and falls through when at(=[sym(serverGeneration)]) != v1(=[0x40cad0]).
  The `bltz` branch at 0x4048c8 targets 0x404c40, is taken when v0(=ret(AllocateScreenPrivateIndex)) < 0 (signed), and falls through when v0(=ret(AllocateScreenPrivateIndex)) >= 0 (signed).
  The `bltz` branch at 0x404908 targets 0x404e20, is taken when v0(=ret(drmOpen)) < 0 (signed), and falls through when v0(=ret(drmOpen)) >= 0 (signed).
  The `beq` branch at 0x404910 targets 0x404c80, is taken when a1(=[0x40cae4]) == 0, and falls through when a1(=[0x40cae4]) != 0.
  The `bne` branch at 0x404944 targets 0x404980, is taken when v0(=ret(Xcalloc)) != 0, and falls through when v0(=ret(Xcalloc)) == 0.
  The `bltz` branch at 0x4049c0 targets 0x404ca8, is taken when v0(=ret(drmSetBusid)) < 0 (signed), and falls through when v0(=ret(drmSetBusid)) >= 0 (signed).
  The `bltz` branch at 0x404a20 targets 0x404d24, is taken when v0(=ret(drmAddMap)) < 0 (signed), and falls through when v0(=ret(drmAddMap)) >= 0 (signed).
  The `bltz` branch at 0x404a68 targets 0x404d70, is taken when v0(=ret(drmMap)) < 0 (signed), and falls through when v0(=ret(drmMap)) >= 0 (signed).
  The `bltz` branch at 0x404acc targets 0x404dc0, is taken when v0(=ret(drmAddMap)) < 0 (signed), and falls through when v0(=ret(drmAddMap)) >= 0 (signed).
  The `beq` branch at 0x404afc targets 0x404bac, is taken when v0(=ret(drmGetReservedContextList)) == 0, and falls through when v0(=ret(drmGetReservedContextList)) != 0.
  The `blez` branch at 0x404b08 targets 0x404b70, is taken when a3(?) <= 0 (signed), and falls through when a3(?) > 0 (signed).
  The `bne` branch at 0x404b5c targets 0x404b28, is taken when s2(?) < a4(?) (signed), and falls through when s2(?) >= a4(?) (signed).
  The `beq` branch at 0x404b88 targets 0x404b94, is taken when a3(?) >= 0x2 (signed), and falls through when a3(?) < 0x2 (signed).
  The `blez` branch at 0x404bb4 targets 0x404c5c, is taken when a3(=[[ret(Xcalloc)+52]+116]) <= 0 (signed), and falls through when a3(=[[ret(Xcalloc)+52]+116]) > 0 (signed).
  The `beq` branch at 0x404bbc targets 0x404c60, is taken when a4(?) == 0, and falls through when a4(?) != 0.
  The `blez` branch at 0x404bc4 targets 0x404c0c, is taken when a3(=[[ret(Xcalloc)+52]+116]) <= 0 (signed), and falls through when a3(=[[ret(Xcalloc)+52]+116]) > 0 (signed).
  The `bne` branch at 0x404c04 targets 0x404bd4, is taken when a0(?) < a5(=[[ret(Xcalloc)+52]+116]) (signed), and falls through when a0(?) >= a5(=[[ret(Xcalloc)+52]+116]) (signed).
  The `beq` branch at 0x404c78 targets 0x404bc4 and is always taken.
  The `beq` branch at 0x404ca0 targets 0x404918 and is always taken.
  The `beq` branch at 0x404d68 targets 0x40495c and is always taken.
  The `beq` branch at 0x404db4 targets 0x40495c and is always taken.
  The `beq` branch at 0x404e18 targets 0x40495c and is always taken.
  The `beq` branch at 0x404e50 targets 0x40495c and is always taken.
  The return at 0x40496c has v0 = 0x0.
  The return at 0x404c38 has v0 = 0x1.
  The return at 0x404c54 has v0 = 0x0.
  The return at 0x404d1c has v0 = 0x0.
  The instructions from 0x404974 to 0x40497c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x404dbc to 0x404dbc are not reached by any path from the entry, and their branches are not listed.

- `DRIFinishScreenInit` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x404e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x404e80-0x405204 (900 bytes).
  It occupies 900 bytes.
  The `lw` at 0x404ea8 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x404eb8 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  25 such `lw` accesses load 4 bytes from ?, including `lw` at 0x404ebc, `lw` at 0x404ec0, `lw` at 0x404ef8.
  11 such `sw` accesses store 4 bytes to ?, including `sw` at 0x404f08, `sw` at 0x404f28, `sw` at 0x404f2c.
  7 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x404f0c, `lw` at 0x404fdc, `lw` at 0x405018.
  The `lw` at 0x404f50 loads 4 bytes from a0 (arg0 at entry) +0xb4.
  The `sw` at 0x404f5c stores 4 bytes to a0 (arg0 at entry) +0xb4.
  The `lw` at 0x404f6c loads 4 bytes from a0 (arg0 at entry) +0xb8.
  The `sw` at 0x404f78 stores 4 bytes to a0 (arg0 at entry) +0xb8.
  The `lw` at 0x404f88 loads 4 bytes from a0 (arg0 at entry) +0xbc.
  The `sw` at 0x404f94 stores 4 bytes to a0 (arg0 at entry) +0xbc.
  The `lw` at 0x404fa4 loads 4 bytes from a0 (arg0 at entry) +0xc8.
  The `sw` at 0x404fb0 stores 4 bytes to a0 (arg0 at entry) +0xc8.
  The `lw` at 0x404fc0 loads 4 bytes from a0 (arg0 at entry) +0xd0.
  The `sw` at 0x404fcc stores 4 bytes to a0 (arg0 at entry) +0xd0.
  The `lw` at 0x404fe0 loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x404fec loads 4 bytes from ([sym(xf86Screens)] + ([a0] << 0x2)) +0x0.
  The `lw` at 0x404ff0 loads 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0x40c.
  The `sw` at 0x404ffc stores 4 bytes to [([sym(xf86Screens)] + ([a0] << 0x2))] +0x40c.
  The `jalr` at 0x404ee4 calls DRICreateContextPriv with a0=a0 at entry (arg0), a1=?, a2=one of 0x0, 0x1, 0x2, a3=a3 at entry (arg3).
  The `bgezall` at 0x404f10 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c298, a3=?.
  The `jalr` at 0x404f20 calls DRILock with a0=a0 at entry (arg0), a1=0x0, a2=?, a3=?.
  The `bgezall` at 0x40501c calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c368, a3=?.
  The `bgezall` at 0x405078 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c270, a3=?.
  The `jalr` at 0x4050c4 calls Xcalloc with a0=?, a1=?, a2=?, a3=?, a5=0x1.
  The `jalr` at 0x4050d8 calls Xcalloc with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x405104 calls (unknown callee) with a0=a0 at entry (arg0), a1=0x0, a2=0x1, a3=?, a4=0x0, a5=0x0.
  The `jalr` at 0x405114 calls drmInstallSIGIOHandler with a0=?, a1=sym(DRISwapContext), a2=?, a3=?.
  The `bgezall` at 0x405134 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c340, a3=?.
  The `bgezall` at 0x405154 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c310, a3=?.
  The `jalr` at 0x405168 calls Xfree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x40517c calls Xfree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x405188 calls DRIDestroyContextPriv with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4051ac calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c2b8, a3=?.
  The `jalr` at 0x4051b8 calls DRIDestroyContextPriv with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `bgezall` at 0x4051dc calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c2e0, a3=?.
  The `jalr` at 0x4051e8 calls Xfree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x4051f4 calls DRIDestroyContextPriv with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x404ea0 targets 0x405098, is taken when v0(=[0x40caf0]) < 0 (signed), and falls through when v0(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x404ec8 targets 0x4050a4, is taken when v0(?) == t9(=0x2), and falls through when v0(?) != t9(=0x2).
  The `beq` branch at 0x404ed0 targets 0x4050ac, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x404eec targets 0x40505c, is taken when v0(=ret(DRICreateContextPriv)) == 0, and falls through when v0(=ret(DRICreateContextPriv)) != 0.
  The `beq` branch at 0x404f34 targets 0x4050c0, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x404f3c targets 0x405110, is taken when a2(?) == a5(=0x1), and falls through when a2(?) != a5(=0x1).
  The `beq` branch at 0x404f48 targets 0x404f60, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x404f64 targets 0x404f7c, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x404f80 targets 0x404f98, is taken when t8(?) == 0, and falls through when t8(?) != 0.
  The `beq` branch at 0x404f9c targets 0x404fb4, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x404fb8 targets 0x404fd0, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x404fd4 targets 0x405000, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x40509c targets 0x404ebc and is always taken.
  The `beq` branch at 0x4050a4 targets 0x404edc and is always taken.
  The `beq` branch at 0x4050b0 targets 0x404edc and is always taken.
  The `beq` branch at 0x4050cc targets 0x405198, is taken when v0(=ret(Xcalloc)) == 0, and falls through when v0(=ret(Xcalloc)) != 0.
  The `beq` branch at 0x4050e0 targets 0x4051c8, is taken when v0(=ret(Xcalloc)) == 0, and falls through when v0(=ret(Xcalloc)) != 0.
  The `beq` branch at 0x4050ec targets 0x40510c, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x40511c targets 0x405144, is taken when v0(=ret(drmInstallSIGIOHandler)) == 0, and falls through when v0(=ret(drmInstallSIGIOHandler)) != 0.
  The `beq` branch at 0x40513c targets 0x404f48 and is always taken.
  The `beq` branch at 0x405160 targets 0x405170, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x405174 targets 0x405184, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x405190 targets 0x405040 and is always taken.
  The `beq` branch at 0x4051c0 targets 0x405040 and is always taken.
  The `beq` branch at 0x4051fc targets 0x405040 and is always taken.
  The return at 0x405034 has v0 = 0x1.
  The return at 0x405054 has v0 = 0x0.
  The return at 0x405090 has v0 = 0x0.
  The instructions from 0x40503c to 0x40503c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4050b8 to 0x4050bc are not reached by any path from the entry, and their branches are not listed.

- `DRICloseScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405240-0x405520 (736 bytes).
  It occupies 736 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x168, including `lw` at 0x405278, `lw` at 0x40549c.
  The `lw` at 0x405284 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x40528c loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x405290 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x0.
  The `lw` at 0x40529c loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x6c.
  6 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x4052a8, `lw` at 0x4053c4, `lw` at 0x4053e0.
  The `lw` at 0x4052b4 loads 4 bytes from ([sym(xf86Screens)] + ([a0] << 0x2)) +0x0.
  The `sw` at 0x4052b8 stores 4 bytes to [([sym(xf86Screens)] + ([a0] << 0x2))] +0x40c.
  The `sw` at 0x4052bc stores 4 bytes to [([a0+360] + ([0x40caf0] << 0x2))] +0x6c.
  4 such `lw` accesses load 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x34, including `lw` at 0x4052c0, `lw` at 0x4053e8, `lw` at 0x40540c.
  The `lw` at 0x4052c4 loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x80.
  6 such `lw` accesses load 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x4, including `lw` at 0x4052d8, `lw` at 0x405328, `lw` at 0x405360.
  2 such `lw` accesses load 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x470, including `lw` at 0x4052e4, `lw` at 0x40551c.
  The `lw` at 0x4052ec loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x474.
  The `lw` at 0x405304 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x478.
  The `lw` at 0x40531c loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x24.
  The `lw` at 0x405368 loads 4 bytes from ?.
  The `sw` at 0x4053dc stores 4 bytes to [([a0+360] + ([0x40caf0] << 0x2))] +0x47c.
  3 such `ld` accesses load 8 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x8, including `ld` at 0x4053e4, `ld` at 0x405428, `ld` at 0x405464.
  3 such `lw` accesses load 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x10, including `lw` at 0x4053f4, `lw` at 0x405410, `lw` at 0x405438.
  3 such `lw` accesses load 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x70, including `lw` at 0x405404, `lw` at 0x405418, `lw` at 0x405448.
  The `ld` at 0x405474 loads 8 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x18.
  The `sw` at 0x4054b8 stores 4 bytes to ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `jalr` at 0x4052d4 calls drmRemoveSIGIOHandler with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+4], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=[0x40caf0].
  The `bgezall` at 0x405308 calls DRIDestroyDummyContext [0x405ec0] with a0=a0 at entry (arg0), a1=[[([a0+360] + ([0x40caf0] << 0x2))]+1144], a2=?, a3=?.
  The `jalr` at 0x405318 calls DRIDestroyContextPriv with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+36], a1=?, a2=?, a3=?.
  The `jalr` at 0x405330 calls drmGetReservedContextList with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+4], a1=sp-96, a2=?, a3=?.
  The `jalr` at 0x405364 calls drmGetContextTag with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x405370 calls DRIDestroyContextPriv with a0=ret(drmGetContextTag), a1=?, a2=?, a3=?.
  The `jalr` at 0x40539c calls drmFreeReservedContextList with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x4053c8 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c3e0, a3=?, a4=one of 0x40caf8, 0x40cafa.
  The `jalr` at 0x4053d4 calls DRIUnlock with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x405400 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c410, a3=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+112], a4=[[([a0+360] + ([0x40caf0] << 0x2))]+8]:8, a5=[[([a0+360] + ([0x40caf0] << 0x2))]+16].
  The `jalr` at 0x405414 calls drmUnmap with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+16], a1=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+112], a2=?, a3=?.
  The `bgezall` at 0x405444 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c448, a3=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+112], a4=[[([a0+360] + ([0x40caf0] << 0x2))]+8]:8, a5=[[([a0+360] + ([0x40caf0] << 0x2))]+16].
  The `jalr` at 0x405460 calls drmRmMap with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+4], a1=[[([a0+360] + ([0x40caf0] << 0x2))]+8]:8, a2=?, a3=?.
  The `jalr` at 0x405470 calls drmRmMap with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+4], a1=[[([a0+360] + ([0x40caf0] << 0x2))]+24]:8, a2=?, a3=?.
  The `jalr` at 0x40547c calls drmClose with a0=[[([a0+360] + ([0x40caf0] << 0x2))]+4], a1=?, a2=?, a3=?.
  The `jalr` at 0x405488 calls Xfree with a0=[([a0+360] + ([0x40caf0] << 0x2))], a1=?, a2=?, a3=?.
  The `bgezall` at 0x4054f0 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c3b8, a3=?.
  The `bgezall` at 0x405510 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c388, a3=?.
  The `bltz` branch at 0x405270 targets 0x4054c0, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x405288 targets 0x4054c0, is taken when s2(=[([a0+360] + ([0x40caf0] << 0x2))]) == 0, and falls through when s2(=[([a0+360] + ([0x40caf0] << 0x2))]) != 0.
  The `beq` branch at 0x405294 targets 0x4054c0, is taken when t9(=[[([a0+360] + ([0x40caf0] << 0x2))]]) == 0, and falls through when t9(=[[([a0+360] + ([0x40caf0] << 0x2))]]) != 0.
  The `beq` branch at 0x4052a0 targets 0x4052c0, is taken when a0(=[[([a0+360] + ([0x40caf0] << 0x2))]+108]) == 0, and falls through when a0(=[[([a0+360] + ([0x40caf0] << 0x2))]+108]) != 0.
  The `beq` branch at 0x4052cc targets 0x4052e4, is taken when v1(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+128]) == a0(=0x2), and falls through when v1(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+128]) != a0(=0x2).
  The `beq` branch at 0x4052dc targets 0x405500, is taken when v0(=ret(drmRemoveSIGIOHandler)) == 0, and falls through when v0(=ret(drmRemoveSIGIOHandler)) != 0.
  The `beq` branch at 0x4052f0 targets 0x405310, is taken when t8(=[[([a0+360] + ([0x40caf0] << 0x2))]+1136]) == 0, and falls through when t8(=[[([a0+360] + ([0x40caf0] << 0x2))]+1136]) != 0.
  The `beq` branch at 0x4052f8 targets 0x405310, is taken when v0(=[[([a0+360] + ([0x40caf0] << 0x2))]+1140]) == 0, and falls through when v0(=[[([a0+360] + ([0x40caf0] << 0x2))]+1140]) != 0.
  The `beq` branch at 0x405320 targets 0x4054e0, is taken when v0(=ret(DRIDestroyContextPriv)) == 0, and falls through when v0(=ret(DRIDestroyContextPriv)) != 0.
  The `beq` branch at 0x405338 targets 0x4053d0, is taken when v0(=ret(drmGetReservedContextList)) == 0, and falls through when v0(=ret(drmGetReservedContextList)) != 0.
  The `blez` branch at 0x405348 targets 0x405394, is taken when ra(?) <= 0 (signed), and falls through when ra(?) > 0 (signed).
  The `bne` branch at 0x405384 targets 0x40535c, is taken when s1(?) < at(?) (signed), and falls through when s1(?) >= at(?) (signed).
  The `beq` branch at 0x4053ac targets 0x4053b8, is taken when a3(?) >= 0x2 (signed), and falls through when a3(?) < 0x2 (signed).
  The `beq` branch at 0x40541c targets 0x405450, is taken when v0(=ret(drmUnmap)) == 0, and falls through when v0(=ret(drmUnmap)) != 0.
  The `beq` branch at 0x4054f8 targets 0x405328 and is always taken.
  The `beq` branch at 0x405518 targets 0x4052e8 and is always taken.
  The return at 0x4054b4 has v0 = ret(Xfree).
  The return at 0x4054d8 has v0 = sym(xf86Screens).
  The instructions from 0x4054bc to 0x4054bc are not reached by any path from the entry, and their branches are not listed.

- `DRIExtensionInit` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405540-0x40566c (300 bytes).
  It occupies 300 bytes.
  2 such `lw` accesses load 4 bytes from sym(screenInfo) +0x30, including `lw` at 0x4055b4, `lw` at 0x4055e8.
  The `lw` at 0x4055d4 loads 4 bytes from ?.
  The `jalr` at 0x405564 calls AllocateWindowPrivateIndex with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405578 calls CreateNewResourceType with a0=sym(DRIDrawablePrivDelete), a1=?, a2=?, a3=?.
  The `jalr` at 0x405588 calls CreateNewResourceType with a0=sym(DRIContextPrivDelete), a1=?, a2=?, a3=?.
  The `jalr` at 0x4055a8 calls CreateNewResourceType with a0=0x408b40, a1=?, a2=?, a3=?.
  The `jalr` at 0x4055dc calls AllocateWindowPrivate with a0=?, a1=[0x40caf4], a2=0x0, a3=?.
  The `jalr` at 0x405608 calls RegisterBlockAndWakeupHandlers with a0=sym(DRIBlockHandler), a1=sym(DRIWakeupHandler), a2=0x0, a3=?.
  The `bltz` branch at 0x405558 targets 0x405640, is taken when at(=[0x40caf0]) < 0 (signed), and falls through when at(=[0x40caf0]) >= 0 (signed).
  The `bltz` branch at 0x40556c targets 0x405650, is taken when v0(=ret(AllocateWindowPrivateIndex)) < 0 (signed), and falls through when v0(=ret(AllocateWindowPrivateIndex)) >= 0 (signed).
  The `blez` branch at 0x4055c4 targets 0x4055fc, is taken when a1(=[sym(screenInfo)+48]) <= 0 (signed), and falls through when a1(=[sym(screenInfo)+48]) > 0 (signed).
  The `beq` branch at 0x4055e4 targets 0x405664, is taken when v0(=ret(AllocateWindowPrivate)) == 0, and falls through when v0(=ret(AllocateWindowPrivate)) != 0.
  The `bne` branch at 0x4055f4 targets 0x4055d0, is taken when s1(?) < a2(=[sym(screenInfo)+48]) (signed), and falls through when s1(?) >= a2(=[sym(screenInfo)+48]) (signed).
  The `beq` branch at 0x405664 targets 0x405614 and is always taken.
  The return at 0x40562c has v0 = one of 0x0, 0x1.
  The return at 0x405648 has v0 = 0x0.
  The return at 0x40565c has v0 = 0x0.
  The instructions from 0x405634 to 0x40563c are not reached by any path from the entry, and their branches are not listed.

- `DRIReset` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405680-0x405688 (8 bytes).
  It occupies 8 bytes.
  The return at 0x405680 has v0 = ?.

- `DRIQueryDirectRenderingCapable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4056c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4056c0-0x40570c (76 bytes).
  It occupies 76 bytes.
  The `lw` at 0x4056cc loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x4056d8 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4056e4 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x4056f0 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x0.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x4056fc, `sw` at 0x405700.
  The `bltz` branch at 0x4056d0 targets 0x405700, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x4056e8 targets 0x405700, is taken when a5(=[([a0+360] + ([0x40caf0] << 0x2))]) == 0, and falls through when a5(=[([a0+360] + ([0x40caf0] << 0x2))]) != 0.
  The return at 0x4056f8 has v0 = 0x1.
  The return at 0x405704 has v0 = 0x1.

- `DRIOpenConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405740-0x4057a0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x40574c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x405758 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x405764 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `ld` at 0x405768 loads 8 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x8.
  2 such `sd` accesses store 8 bytes to a1 (arg1 at entry) +0x0, including `sd` at 0x40576c, `sd` at 0x405788.
  The `lw` at 0x405770 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x405774 loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x54.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x405780, `sw` at 0x40579c.
  The `ld` at 0x405784 loads 8 bytes from abs 0x8.
  The `lw` at 0x40578c loads 4 bytes from abs 0x34.
  The `lw` at 0x405790 loads 4 bytes from [0x34] +0x54.
  The `bltz` branch at 0x405750 targets 0x405784, is taken when a6(=[0x40caf0]) < 0 (signed), and falls through when a6(=[0x40caf0]) >= 0 (signed).
  The return at 0x40577c has v0 = 0x1.
  The return at 0x405798 has v0 = 0x1.

- `DRIAuthConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4057c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4057c0-0x405834 (116 bytes).
  It occupies 116 bytes.
  The `lw` at 0x4057e0 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4057f0 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x4057fc loads 4 bytes from ?.
  The `jalr` at 0x4057f8 calls drmAuthMagic with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a4=[0x40caf0].
  The `bltz` branch at 0x4057d8 targets 0x405818, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x405800 targets 0x405820, is taken when v0(=ret(drmAuthMagic)) == 0, and falls through when v0(=ret(drmAuthMagic)) != 0.
  The `beq` branch at 0x405818 targets 0x4057f4 and is always taken.
  The return at 0x405810 has v0 = 0x0.
  The return at 0x40582c has v0 = 0x1.

- `DRICloseConnection` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405840-0x405848 (8 bytes).
  It occupies 8 bytes.
  The return at 0x405840 has v0 = 0x1.

- `DRIGetClientDriverName` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405880-0x405918 (152 bytes).
  It occupies 152 bytes.
  The `lw` at 0x40588c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x405898 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4058a4 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  4 such `lw` accesses load 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x34, including `lw` at 0x4058a8, `lw` at 0x4058b4, `lw` at 0x4058c0.
  The `lw` at 0x4058ac loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x58.
  2 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x0, including `sw` at 0x4058b0, `sw` at 0x4058e8.
  The `lw` at 0x4058b8 loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x5c.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x4058bc, `sw` at 0x4058f4.
  The `lw` at 0x4058c4 loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x60.
  2 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x4058c8, `sw` at 0x405900.
  The `lw` at 0x4058d0 loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x50.
  2 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0x4058dc, `sw` at 0x405914.
  4 such `lw` accesses load 4 bytes from abs 0x34, including `lw` at 0x4058e0, `lw` at 0x4058ec, `lw` at 0x4058f8.
  The `lw` at 0x4058e4 loads 4 bytes from [0x34] +0x58.
  The `lw` at 0x4058f0 loads 4 bytes from [0x34] +0x5c.
  The `lw` at 0x4058fc loads 4 bytes from [0x34] +0x60.
  The `lw` at 0x405908 loads 4 bytes from [0x34] +0x50.
  The `bltz` branch at 0x405890 targets 0x4058e0, is taken when t0(=[0x40caf0]) < 0 (signed), and falls through when t0(=[0x40caf0]) >= 0 (signed).
  The return at 0x4058d8 has v0 = 0x1.
  The return at 0x405910 has v0 = 0x1.

- `DRICreateContextPriv` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405940-0x4059e8 (168 bytes).
  It occupies 168 bytes.
  The `lw` at 0x405968 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x40597c loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x405984 loads 4 bytes from ?.
  The `lw` at 0x4059c4 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `jalr` at 0x405988 calls drmCreateContext with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a5=[0x40caf0].
  The `jalr` at 0x4059cc calls DRICreateContextPrivFromHandle with a0=a0 at entry (arg0), a1=[a1], a2=a2 at entry (arg2), a3=?.
  The `bltz` branch at 0x405960 targets 0x4059ac, is taken when a5(=[0x40caf0]) < 0 (signed), and falls through when a5(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x405990 targets 0x4059c0, is taken when v0(=ret(drmCreateContext)) == 0, and falls through when v0(=ret(drmCreateContext)) != 0.
  The `beq` branch at 0x4059b4 targets 0x405980 and is always taken.
  The return at 0x4059a4 has v0 = 0x0.
  The return at 0x4059e0 has v0 = ret(DRICreateContextPrivFromHandle).
  The instructions from 0x4059bc to 0x4059bc are not reached by any path from the entry, and their branches are not listed.

- `DRICreateContextPrivFromHandle` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405a00-0x405bb8 (440 bytes).
  It occupies 440 bytes.
  The `lw` at 0x405a34 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x405a44 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405a48, `lw` at 0x405a50, `lw` at 0x405a9c.
  The `sw` at 0x405a94 stores 4 bytes to ret(Xcalloc) +0x10.
  The `sw` at 0x405aac stores 4 bytes to ret(Xcalloc) +0x0.
  The `sw` at 0x405ab0 stores 4 bytes to ret(Xcalloc) +0x4.
  The `sw` at 0x405ab8 stores 4 bytes to ret(Xcalloc) +0x8.
  The `sw` at 0x405ac0 stores 4 bytes to ret(Xcalloc) +0xc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x405af4, `lw` at 0x405b50.
  The `jalr` at 0x405a58 calls Xcalloc with a0=?, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x405aa0 calls drmAddContextTag with a0=?, a1=a1 at entry (arg1), a2=ret(Xcalloc), a3=?.
  The `jalr` at 0x405ad0 calls drmSetContextFlags with a0=?, a1=a1 at entry (arg1), a2=0x2, a3=a2 at entry (arg2).
  The `bgezall` at 0x405af8 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c480, a3=?.
  The `jalr` at 0x405b04 calls DRIDestroyContextPriv with a0=ret(Xcalloc), a1=?, a2=?, a3=?.
  The `jalr` at 0x405b30 calls drmSetContextFlags with a0=?, a1=a1 at entry (arg1), a2=0x1, a3=?.
  The `bgezall` at 0x405b54 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x5, a2=0x40c4a8, a3=?.
  The `jalr` at 0x405b60 calls DRIDestroyContextPriv with a0=ret(Xcalloc), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x405a2c targets 0x405bac, is taken when v0(=[0x40caf0]) < 0 (signed), and falls through when v0(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x405a60 targets 0x405a8c, is taken when v0(=ret(Xcalloc)) != 0, and falls through when v0(=ret(Xcalloc)) == 0.
  The `beq` branch at 0x405abc targets 0x405b18, is taken when (a3(=a2) & 0x1) == 0, and falls through when (a3(=a2) & 0x1) != 0.
  The `beq` branch at 0x405ad8 targets 0x405b1c, is taken when v0(=ret(drmSetContextFlags)) == 0, and falls through when v0(=ret(drmSetContextFlags)) != 0.
  The `beq` branch at 0x405b10 targets 0x405a74 and is always taken.
  The `beq` branch at 0x405b20 targets 0x405b88, is taken when (ra(=a2) & 0x2) == 0, and falls through when (ra(=a2) & 0x2) != 0.
  The `beq` branch at 0x405b38 targets 0x405b88, is taken when v0(=ret(drmSetContextFlags)) == 0, and falls through when v0(=ret(drmSetContextFlags)) != 0.
  The `beq` branch at 0x405bb0 targets 0x405a48 and is always taken.
  The return at 0x405a84 has v0 = 0x0.
  The return at 0x405b80 has v0 = 0x0.
  The return at 0x405ba4 has v0 = ret(Xcalloc).

- `DRIDestroyContextPriv` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405bc0-0x405c8c (204 bytes).
  It occupies 204 bytes.
  The `lw` at 0x405bec loads 4 bytes from a0 (arg0 at entry) +0xc.
  The `lw` at 0x405bf0 loads 4 bytes from a0 (arg0 at entry) +0x4.
  The `lw` at 0x405bf4 loads 4 bytes from [a0+4] +0x168.
  The `lw` at 0x405c00 loads 4 bytes from ([[a0+4]+360] + ([0x40caf0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405c18, `lw` at 0x405c48.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x405c20, `lw` at 0x405c50.
  The `jalr` at 0x405c1c calls drmDestroyContext with a0=?, a1=[a0], a2=[0x40caf0], a3=?.
  The `jalr` at 0x405c4c calls drmDelContextTag with a0=?, a1=[a0], a2=?, a3=?.
  The `jalr` at 0x405c58 calls Xfree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x405bd8 targets 0x405c78, is taken when a0 == 0, and falls through when a0 != 0.
  The `bltz` branch at 0x405be8 targets 0x405c04, is taken when a2(=[0x40caf0]) < 0 (signed), and falls through when a2(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x405c08 targets 0x405c44, is taken when (a0(=[a0+12]) & 0x4) != 0, and falls through when (a0(=[a0+12]) & 0x4) == 0.
  The `beq` branch at 0x405c24 targets 0x405c44, is taken when v0(=ret(drmDestroyContext)) == 0, and falls through when v0(=ret(drmDestroyContext)) != 0.
  The return at 0x405c3c has v0 = 0x0.
  The return at 0x405c70 has v0 = 0x1.
  The return at 0x405c84 has v0 = 0x1.

- `DRICreateDummyContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405cc0-0x405eb4 (500 bytes).
  It occupies 500 bytes.
  The `lw` at 0x405cdc loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x405cf0 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x405cf4 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `lh` at 0x405cfc loads 2 bytes from a0 (arg0 at entry) +0x60.
  The `lw` at 0x405d04 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x405d14 loads 4 bytes from a0 (arg0 at entry) +0x64.
  13 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405d28, `lw` at 0x405d2c, `lw` at 0x405d3c.
  The `sw` at 0x405e74 stores 4 bytes to ?.
  The `jalr` at 0x405de8 calls DRICreateContextPriv with a0=a0 at entry (arg0), a1=?, a2=0x0, a3=a3 at entry (arg3).
  The `jalr` at 0x405e10 calls DRIGetContextStore with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `jalr` at 0x405e50 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?, a4=ret(DRIGetContextStore).
  The `jalr` at 0x405ea4 calls DRIDestroyContextPriv with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x405cd4 targets 0x405e84, is taken when v0(=[0x40caf0]) < 0 (signed), and falls through when v0(=[0x40caf0]) >= 0 (signed).
  The `blez` branch at 0x405d24 targets 0x405dcc, is taken when a0(=[a0+96]:2) <= 0 (signed), and falls through when a0(=[a0+96]:2) > 0 (signed).
  The `beq` branch at 0x405d48 targets 0x405da0, is taken when a6(?) == a4(?), and falls through when a6(?) != a4(?).
  The `beq` branch at 0x405d50 targets 0x405da0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x405d60 targets 0x405da0, is taken when a7(?) == a4(?), and falls through when a7(?) != a4(?).
  The `beq` branch at 0x405d68 targets 0x405da0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x405d78 targets 0x405da0, is taken when t1(?) == a4(?), and falls through when t1(?) != a4(?).
  The `beq` branch at 0x405d80 targets 0x405da0, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x405d90 targets 0x405da0, is taken when t2(?) == a4(?), and falls through when t2(?) != a4(?).
  The `bne` branch at 0x405d98 targets 0x405d40, is taken when a6(?) != 0, and falls through when a6(?) == 0.
  The `bne` branch at 0x405da4 targets 0x405dd8, is taken when s0(?) != a0(=[a0+96]:2), and falls through when s0(?) == a0(=[a0+96]:2).
  The `beq` branch at 0x405dd0 targets 0x405dac, is taken when a0(=[a0+96]:2) == 0, and falls through when a0(=[a0+96]:2) != 0.
  The `bne` branch at 0x405df0 targets 0x405e0c, is taken when v0(=ret(DRICreateContextPriv)) != 0, and falls through when v0(=ret(DRICreateContextPriv)) == 0.
  The `beq` branch at 0x405e04 targets 0x405dbc and is always taken.
  The `beq` branch at 0x405e20 targets 0x405e5c, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x405e28 targets 0x405e5c, is taken when ra(=a1) == 0, and falls through when ra(=a1) != 0.
  The `beq` branch at 0x405e58 targets 0x405e94, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x405e8c targets 0x405cf4 and is always taken.
  The `beq` branch at 0x405eac targets 0x405dbc and is always taken.
  The return at 0x405dc4 has v0 = 0x0.
  The return at 0x405e7c has v0 = 0x1.

- `DRIDestroyDummyContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405ec0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405ec0-0x405fa8 (232 bytes).
  It occupies 232 bytes.
  The `lw` at 0x405ed8 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x405ee4 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x405ee8 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x470.
  The `lw` at 0x405ef8 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x405efc loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x4.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x405f1c, `lw` at 0x405f24, `lw` at 0x405f28.
  The `sw` at 0x405f50 stores 4 bytes to ?.
  The `lw` at 0x405f80 loads 4 bytes from abs 0x470.
  The `lw` at 0x405f90 loads 4 bytes from abs 0x34.
  The `lw` at 0x405f94 loads 4 bytes from [0x34] +0x4.
  The `jalr` at 0x405f14 calls DRIGetContextStore with a0=?, a1=a1 at entry (arg1), a2=?, a3=?, a4=a0 at entry (arg0), a5=[0x40caf0].
  The `jalr` at 0x405f30 calls (unknown callee) with a0=?, a1=?, a2=ret(DRIGetContextStore), a3=?.
  The `jalr` at 0x405f44 calls DRIDestroyContextPriv with a0=?, a1=?, a2=?, a3=?.
  The `bltz` branch at 0x405ed0 targets 0x405f80, is taken when a5(=[0x40caf0]) < 0 (signed), and falls through when a5(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x405ef0 targets 0x405f60, is taken when at(=[[([a0+360] + ([0x40caf0] << 0x2))]+1136]) == 0, and falls through when at(=[[([a0+360] + ([0x40caf0] << 0x2))]+1136]) != 0.
  The `beq` branch at 0x405f00 targets 0x405f44, is taken when t9(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+4]) == 0, and falls through when t9(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+4]) != 0.
  The `beq` branch at 0x405f08 targets 0x405f70, is taken when a1 == 0, and falls through when a1 != 0.
  The `beq` branch at 0x405f70 targets 0x405f40 and is always taken.
  The `beq` branch at 0x405f88 targets 0x405f60, is taken when a0(=[0x470]) == 0, and falls through when a0(=[0x470]) != 0.
  The `bne` branch at 0x405f98 targets 0x405f08, is taken when a2(=[[0x34]+4]) != 0, and falls through when a2(=[[0x34]+4]) == 0.
  The `beq` branch at 0x405fa0 targets 0x405f44 and is always taken.
  The return at 0x405f58 has v0 = ret(DRIDestroyContextPriv).
  The return at 0x405f68 has v0 = ?.
  The instructions from 0x405f78 to 0x405f7c are not reached by any path from the entry, and their branches are not listed.

- `DRICreateContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x405fc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x405fc0-0x40622c (620 bytes).
  It occupies 620 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x405fe8, `lw` at 0x4061a0.
  The `lw` at 0x406000 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  The `lw` at 0x406020 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x406028 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x40602c loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x474.
  13 such `lw` accesses load 4 bytes from ?, including `lw` at 0x406030, `lw` at 0x406038, `lw` at 0x406050.
  The `lw` at 0x406044 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x470.
  The `lw` at 0x406074 loads 4 bytes from a1 (arg1 at entry) +0x0.
  The `lw` at 0x40614c loads 4 bytes from abs 0x474.
  The `lw` at 0x406164 loads 4 bytes from abs 0x470.
  The `lw` at 0x4061e4 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `jalr` at 0x406118 calls DRICreateContextPriv with a0=a0 at entry (arg0), a1=a3 at entry (arg3), a2=0x0, a3=?.
  The `bgezall` at 0x406180 calls DRICreateDummyContext [0x405cc0] with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0x40caf0].
  The `bgezall` at 0x4061a4 calls DRIDrvMsg [0x404680] with a0=[a0], a1=0x7, a2=0x40c4d0, a3=?.
  The `jalr` at 0x4061b8 calls DRIGetContextStore with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `jalr` at 0x4061f0 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[a3], a3=?, a4=ret(DRIGetContextStore).
  The `jalr` at 0x406208 calls AddResource with a0=a2 at entry (arg2), a1=[0x40cae0], a2=ret(DRICreateContextPriv), a3=?.
  The `jalr` at 0x40621c calls DRIDestroyContextPriv with a0=ret(DRICreateContextPriv), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x406018 targets 0x40614c, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x406040 targets 0x406050, is taken when v1(=[[([a0+360] + ([0x40caf0] << 0x2))]+1140]) == 0, and falls through when v1(=[[([a0+360] + ([0x40caf0] << 0x2))]+1140]) != 0.
  The `beq` branch at 0x406048 targets 0x406170, is taken when v0(=[[([a0+360] + ([0x40caf0] << 0x2))]+1136]) == 0, and falls through when v0(=[[([a0+360] + ([0x40caf0] << 0x2))]+1136]) != 0.
  The `blez` branch at 0x406058 targets 0x406108, is taken when t1(?) <= 0 (signed), and falls through when t1(?) > 0 (signed).
  The `beq` branch at 0x406088 targets 0x4060e0, is taken when a5(?) == a7(=[a1]), and falls through when a5(?) != a7(=[a1]).
  The `beq` branch at 0x406090 targets 0x4060e0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x4060a0 targets 0x4060e0, is taken when a6(?) == a7(=[a1]), and falls through when a6(?) != a7(=[a1]).
  The `beq` branch at 0x4060a8 targets 0x4060e0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x4060b8 targets 0x4060e0, is taken when t0(?) == a7(=[a1]), and falls through when t0(?) != a7(=[a1]).
  The `beq` branch at 0x4060c0 targets 0x4060e0, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `beq` branch at 0x4060d0 targets 0x4060e0, is taken when t2(?) == a7(=[a1]), and falls through when t2(?) != a7(=[a1]).
  The `bne` branch at 0x4060d8 targets 0x406080, is taken when t0(?) != 0, and falls through when t0(?) == 0.
  The `bne` branch at 0x4060e0 targets 0x40610c, is taken when s0(?) != t1(?), and falls through when s0(?) == t1(?).
  The `beq` branch at 0x406108 targets 0x4060e4, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `bne` branch at 0x406124 targets 0x4061b4, is taken when v0(=ret(DRICreateContextPriv)) != 0, and falls through when v0(=ret(DRICreateContextPriv)) == 0.
  The `beq` branch at 0x40615c targets 0x406050, is taken when t3(=[0x474]) == 0, and falls through when t3(=[0x474]) != 0.
  The `bne` branch at 0x406168 targets 0x406050, is taken when t9(=[0x470]) != 0, and falls through when t9(=[0x470]) == 0.
  The `bne` branch at 0x406188 targets 0x406050, is taken when v0(=ret(DRICreateDummyContext)) != 0, and falls through when v0(=ret(DRICreateDummyContext)) == 0.
  The `beq` branch at 0x4061ac targets 0x4060e8 and is always taken.
  The `beq` branch at 0x4061cc targets 0x4061fc, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x4061f8 targets 0x406218, is taken when v0(=ret(?)) == 0, and falls through when v0(=ret(?)) != 0.
  The `beq` branch at 0x406210 targets 0x4060e8 and is always taken.
  The `beq` branch at 0x406224 targets 0x4060e8 and is always taken.
  The return at 0x406100 has v0 = one of 0x0, 0x1.
  The return at 0x406144 has v0 = 0x0.

- `DRIDestroyContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406240-0x406280 (64 bytes).
  It occupies 64 bytes.
  The `jalr` at 0x406264 calls FreeResourceByType with a0=a1 at entry (arg1), a1=[0x40cae0], a2=0x0, a3=a3 at entry (arg3).
  The return at 0x406278 has v0 = 0x1.

- `DRIContextPrivDelete` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406280-0x406330 (176 bytes).
  It occupies 176 bytes.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x4, including `lw` at 0x4062a4, `lw` at 0x406324.
  The `lw` at 0x4062a8 loads 4 bytes from [a0+4] +0x168.
  The `lw` at 0x4062b4 loads 4 bytes from ([[a0+4]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x4062bc loads 4 bytes from [([[a0+4]+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x4062c0 loads 4 bytes from [[([[a0+4]+360] + ([0x40caf0] << 0x2))]+52] +0x4.
  The `lw` at 0x4062ec loads 4 bytes from abs 0x34.
  The `lw` at 0x4062f0 loads 4 bytes from [0x34] +0x4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x406310, `lw` at 0x406314.
  The `lw` at 0x406318 loads 4 bytes from a0 (arg0 at entry) +0x0.
  The `jalr` at 0x4062d0 calls DRIDestroyContextPriv with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `jalr` at 0x406304 calls DRIGetContextStore with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[0x40caf0], a3=a3 at entry (arg3).
  The `jalr` at 0x406320 calls (unknown callee) with a0=[a0+4], a1=[a0], a2=ret(DRIGetContextStore), a3=?.
  The `bltz` branch at 0x40629c targets 0x4062ec, is taken when a2(=[0x40caf0]) < 0 (signed), and falls through when a2(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x4062c4 targets 0x406300, is taken when v1(=[[[([[a0+4]+360] + ([0x40caf0] << 0x2))]+52]+4]) != 0, and falls through when v1(=[[[([[a0+4]+360] + ([0x40caf0] << 0x2))]+52]+4]) == 0.
  The `beq` branch at 0x4062f8 targets 0x4062cc, is taken when a0(=[[0x34]+4]) == 0, and falls through when a0(=[[0x34]+4]) != 0.
  The `beq` branch at 0x406328 targets 0x4062d0 and is always taken.
  The return at 0x4062e4 has v0 = ret(DRIDestroyContextPriv).

- `DRIClipNotifyAllDrawables` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406340-0x406400 (192 bytes).
  It occupies 192 bytes.
  The `lw` at 0x406350 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x40635c loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x406360 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x406364 loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x74.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x406380, `lw` at 0x40638c, `lw` at 0x406390.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x406388, `sw` at 0x4063b0.
  The `lw` at 0x4063dc loads 4 bytes from abs 0x34.
  The `lw` at 0x4063e0 loads 4 bytes from [0x34] +0x74.
  The `bltz` branch at 0x406348 targets 0x4063dc, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `blez` branch at 0x406368 targets 0x4063f8, is taken when at(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+116]) <= 0 (signed), and falls through when at(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+116]) > 0 (signed).
  The `beq` branch at 0x4063a0 targets 0x4063d0, is taken when a2(?) >= a6(?) (signed), and falls through when a2(?) < a6(?) (signed).
  The `bne` branch at 0x4063c8 targets 0x406380, is taken when a2(?) < t0(?) (signed), and falls through when a2(?) >= t0(?) (signed).
  The `bgtz` branch at 0x4063e4 targets 0x40636c, is taken when t3(=[[0x34]+116]) > 0 (signed), and falls through when t3(=[[0x34]+116]) <= 0 (signed).
  The return at 0x4063d4 has v0 = ?.
  The return at 0x4063f0 has v0 = ?.
  The return at 0x4063f8 has v0 = ?.

- `DRITransitionToSharedBuffers` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406400-0x406410 (16 bytes).
  It occupies 16 bytes.
  The `bgezl` branch at 0x406408 targets 0x406340 and is always taken.

- `DRITransitionToPrivateBuffers` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406440-0x406450 (16 bytes).
  It occupies 16 bytes.
  The `bgezl` branch at 0x406448 targets 0x406340 and is always taken.

- `DRITransitionTo3d` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406480-0x4064bc (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x40648c loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x406498 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x40649c, `lw` at 0x4064a0.
  Calls (unknown callee) via register with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=[0x40caf0] (`jr` at 0x4064ac).
  The `bltz` branch at 0x406484 targets 0x40649c, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x4064a4 targets 0x4064b4, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The return at 0x4064b4 has v0 = ?.

- `DRITransitionTo2d` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4064c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4064c0-0x4064fc (60 bytes).
  It occupies 60 bytes.
  The `lw` at 0x4064cc loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4064d8 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4064dc, `lw` at 0x4064e0.
  Calls (unknown callee) via register with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=?, a3=[0x40caf0] (`jr` at 0x4064ec).
  The `bltz` branch at 0x4064c4 targets 0x4064dc, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x4064e4 targets 0x4064f4, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The return at 0x4064f4 has v0 = ?.

- `DRICreateDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406500-0x4066b4 (436 bytes).
  It occupies 436 bytes.
  The `lw` at 0x406528 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x406534 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lbu` at 0x406538 loads 1 byte from a2 (arg2 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x80, including `lw` at 0x40654c, `lw` at 0x40663c.
  The `lw` at 0x406558 loads 4 bytes from ([a2+128] + ([0x40caf4] << 0x2)) +0x0.
  The `lw` at 0x406570 loads 4 bytes from [([a2+128] + ([0x40caf4] << 0x2))] +0xc.
  The `sw` at 0x406578 stores 4 bytes to [([a2+128] + ([0x40caf4] << 0x2))] +0xc.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4065f0, `lw` at 0x406650.
  The `lw` at 0x406620 loads 4 bytes from a3 (arg3 at entry) +0x0.
  The `sw` at 0x406628 stores 4 bytes to ret(Xalloc) +0x4.
  The `sw` at 0x406630 stores 4 bytes to ret(Xalloc) +0xc.
  The `sw` at 0x406634 stores 4 bytes to ret(Xalloc) +0x8.
  The `sw` at 0x406638 stores 4 bytes to ret(Xalloc) +0x0.
  The `sw` at 0x40664c stores 4 bytes to ([a2+128] + ([0x40caf4] << 0x2)) +0x0.
  The `sw` at 0x40665c stores 4 bytes to ?.
  The `jalr` at 0x4065c4 calls Xalloc with a0=0x10, a1=a1 at entry (arg1), a2=?, a3=a3 at entry (arg3), a6=[0x40caf4].
  The `jalr` at 0x4065ec calls drmCreateDrawable with a0=?, a1=a3 at entry (arg3), a2=?, a3=?.
  The `jalr` at 0x406600 calls Xfree with a0=ret(Xalloc), a1=?, a2=?, a3=?, a6=[0x40caf4].
  The `jalr` at 0x406674 calls AddResource with a0=a1 at entry (arg1), a1=[0x40cadc], a2=a2 at entry (arg2), a3=?.
  The `bgezall` at 0x40668c calls DRITransitionToSharedBuffers [0x406400] with a0=a0 at entry (arg0), a1=?, a2=?, a3=0x1, a4=ret(Xalloc), a5=([a2+128] + ([0x40caf4] << 0x2)), a6=([0x40caf4] << 0x2), a7=-0x1.
  The `bgezall` at 0x4066a4 calls DRITransitionTo3d [0x406480] with a0=a0 at entry (arg0), a1=?, a2=?, a3=0x1, a4=ret(Xalloc), a5=([a2+128] + ([0x40caf4] << 0x2)), a6=([0x40caf4] << 0x2), a7=-0x1.
  The `bltz` branch at 0x406520 targets 0x4065a4, is taken when a6(=[0x40caf0]) < 0 (signed), and falls through when a6(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x40653c targets 0x406590, is taken when a4(=[a2]:1) != 0, and falls through when a4(=[a2]:1) == 0.
  The `bltz` branch at 0x406544 targets 0x4065b0, is taken when a6(=[0x40caf4]) < 0 (signed), and falls through when a6(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x406568 targets 0x4065ac, is taken when a2(=[([a2+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when a2(=[([a2+128] + ([0x40caf4] << 0x2))]) != 0.
  The `beq` branch at 0x4065a4 targets 0x406538 and is always taken.
  The `bne` branch at 0x4065d0 targets 0x4065e0, is taken when v0(=ret(Xalloc)) != 0, and falls through when v0(=ret(Xalloc)) == 0.
  The `beq` branch at 0x4065d8 targets 0x406594 and is always taken.
  The `beq` branch at 0x4065f4 targets 0x406614, is taken when v0(=ret(drmCreateDrawable)) == 0, and falls through when v0(=ret(drmCreateDrawable)) != 0.
  The `beq` branch at 0x40660c targets 0x406594 and is always taken.
  The `beq` branch at 0x406658 targets 0x40669c, is taken when a2(?) == a3(=0x1), and falls through when a2(?) != a3(=0x1).
  The `beq` branch at 0x406664 targets 0x406684, is taken when a2(?) == t2(=0x2), and falls through when a2(?) != t2(=0x2).
  The `beq` branch at 0x40667c targets 0x40657c and is always taken.
  The `beq` branch at 0x406694 targets 0x40666c and is always taken.
  The `beq` branch at 0x4066ac targets 0x40666c and is always taken.
  The return at 0x406588 has v0 = 0x1.
  The return at 0x40659c has v0 = 0x0.

- `DRIDestroyDrawable` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4066c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4066c0-0x40675c (156 bytes).
  It occupies 156 bytes.
  The `lbu` at 0x4066c4 loads 1 byte from a2 (arg2 at entry) +0x0.
  The `lw` at 0x4066ec loads 4 bytes from a2 (arg2 at entry) +0x80.
  The `lw` at 0x4066f8 loads 4 bytes from ([a2+128] + ([0x40caf4] << 0x2)) +0x0.
  The `lw` at 0x406704 loads 4 bytes from [([a2+128] + ([0x40caf4] << 0x2))] +0xc.
  The `sw` at 0x406710 stores 4 bytes to [([a2+128] + ([0x40caf4] << 0x2))] +0xc.
  The `jalr` at 0x40674c calls FreeResourceByType with a0=a1 at entry (arg1), a1=[0x40cadc], a2=0x0, a3=([0x40caf4] << 0x2), a4=[[([a2+128] + ([0x40caf4] << 0x2))]+12]-1.
  The `bne` branch at 0x4066d8 targets 0x406724, is taken when v0(=[a2]:1) != 0, and falls through when v0(=[a2]:1) == 0.
  The `bltz` branch at 0x4066e4 targets 0x406718, is taken when a4(=[0x40caf4]) < 0 (signed), and falls through when a4(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x4066fc targets 0x406718, is taken when a1(=[([a2+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when a1(=[([a2+128] + ([0x40caf4] << 0x2))]) != 0.
  The `blez` branch at 0x40670c targets 0x406740, is taken when a4(=[[([a2+128] + ([0x40caf4] << 0x2))]+12]-1) <= 0 (signed), and falls through when a4(=[[([a2+128] + ([0x40caf4] << 0x2))]+12]-1) > 0 (signed).
  The `beq` branch at 0x406754 targets 0x406714 and is always taken.
  The return at 0x40671c has v0 = 0x1.
  The return at 0x40672c has v0 = 0x0.
  The instructions from 0x406734 to 0x40673c are not reached by any path from the entry, and their branches are not listed.

- `DRIDrawablePrivDelete` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406780-0x406960 (480 bytes).
  It occupies 480 bytes.
  3 such `lw` accesses load 4 bytes from ret(LookupIDByClass) +0x10, including `lw` at 0x4067d0, `lw` at 0x40693c, `lw` at 0x406954.
  The `lw` at 0x4067d4 loads 4 bytes from [ret(LookupIDByClass)+16] +0x168.
  The `lw` at 0x4067e0 loads 4 bytes from ([[ret(LookupIDByClass)+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lbu` at 0x4067e4 loads 1 byte from ret(LookupIDByClass) +0x0.
  2 such `lw` accesses load 4 bytes from ret(LookupIDByClass) +0x80, including `lw` at 0x406800, `lw` at 0x406900.
  The `lw` at 0x40680c loads 4 bytes from ([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2)) +0x0.
  The `lw` at 0x406814 loads 4 bytes from [([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2))] +0x4.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x406824, `sw` at 0x406920.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x406830, `lw` at 0x406838, `lw` at 0x406910.
  The `lw` at 0x406890 loads 4 bytes from sym(__glXWindowRes) +0x0.
  The `lw` at 0x4068a0 loads 4 bytes from ret(LookupIDByType) +0x4.
  The `sw` at 0x4068b8 stores 4 bytes to ret(LookupIDByType) +0x0.
  The `lw` at 0x4068dc loads 4 bytes from abs 0x4.
  The `sw` at 0x40690c stores 4 bytes to ([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2)) +0x0.
  The `jalr` at 0x4067b0 calls LookupIDByClass with a0=a1 at entry (arg1), a1=0x40000000, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406834 calls drmDestroyDrawable with a0=?, a1=?, a2=?, a3=?, a4=-0x1.
  The `jalr` at 0x40688c calls LookupIDByType with a0=a1 at entry (arg1), a1=[sym(__glXWindowRes)], a2=?, a3=?.
  The `jalr` at 0x4068a4 calls LookupIDByClass with a0=[ret(LookupIDByType)+4], a1=0x40000000, a2=?, a3=?.
  The `jalr` at 0x4068f4 calls Xfree with a0=?, a1=?, a2=?, a3=?.
  The `bgezall` at 0x406938 calls DRITransitionToPrivateBuffers [0x406440] with a0=[ret(LookupIDByClass)+16], a1=([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2)), a2=([0x40caf4] << 0x2), a3=?.
  The `bgezall` at 0x406950 calls DRITransitionTo2d [0x4064c0] with a0=[ret(LookupIDByClass)+16], a1=([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2)), a2=([0x40caf4] << 0x2), a3=?.
  The `bne` branch at 0x4067b8 targets 0x406880, is taken when s2(=a0) != v0(=ret(LookupIDByClass)), and falls through when s2(=a0) == v0(=ret(LookupIDByClass)).
  The `beq` branch at 0x4067c0 targets 0x4068c0, is taken when s0(=ret(LookupIDByClass)) == 0, and falls through when s0(=ret(LookupIDByClass)) != 0.
  The `bltz` branch at 0x4067c8 targets 0x4067e4, is taken when v0(=[0x40caf0]) < 0 (signed), and falls through when v0(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x4067f0 targets 0x40685c, is taken when t8(=[ret(LookupIDByClass)]:1) != 0, and falls through when t8(=[ret(LookupIDByClass)]:1) == 0.
  The `bltz` branch at 0x4067f8 targets 0x4068dc, is taken when a1(=[0x40caf4]) < 0 (signed), and falls through when a1(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x406818 targets 0x406828, is taken when v0(=[[([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2))]+4]) == a4(=-0x1), and falls through when v0(=[[([ret(LookupIDByClass)+128] + ([0x40caf4] << 0x2))]+4]) != a4(=-0x1).
  The `beq` branch at 0x40683c targets 0x4068f0, is taken when v0(=ret(drmDestroyDrawable)) == 0, and falls through when v0(=ret(drmDestroyDrawable)) != 0.
  The `beq` branch at 0x406894 targets 0x4067c0, is taken when v0(=ret(LookupIDByType)) == 0, and falls through when v0(=ret(LookupIDByType)) != 0.
  The `bne` branch at 0x4068ac targets 0x4067c4, is taken when v0(=ret(LookupIDByClass)) != 0, and falls through when v0(=ret(LookupIDByClass)) == 0.
  The `beq` branch at 0x4068b4 targets 0x4067c0 and is always taken.
  The `beq` branch at 0x4068e0 targets 0x406828, is taken when v0(=[0x4]) == a4(=-0x1), and falls through when v0(=[0x4]) != a4(=-0x1).
  The `beq` branch at 0x4068e8 targets 0x406820 and is always taken.
  The `beq` branch at 0x40691c targets 0x406948, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x406924 targets 0x406934, is taken when a0(?) == v0(=0x1), and falls through when a0(?) != v0(=0x1).
  The `beq` branch at 0x40692c targets 0x40685c and is always taken.
  The `beq` branch at 0x406940 targets 0x40692c and is always taken.
  The `beq` branch at 0x406958 targets 0x40692c and is always taken.
  The return at 0x406854 has v0 = 0x0.
  The return at 0x40686c has v0 = one of 0x0, 0x1.
  The return at 0x4068d4 has v0 = 0x1.
  The instructions from 0x406874 to 0x40687c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4068bc to 0x4068bc are not reached by any path from the entry, and their branches are not listed.

- `DRIGetDrawableInfo` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406980-0x406ec8 (1352 bytes).
  It occupies 1352 bytes.
  The `lw` at 0x4069c0 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4069d4 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  39 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4069e0, `lw` at 0x4069e4, `lw` at 0x406a40.
  The `lbu` at 0x4069f0 loads 1 byte from a1 (arg1 at entry) +0x0.
  The `lw` at 0x406a08 loads 4 bytes from a1 (arg1 at entry) +0x80.
  The `lw` at 0x406a14 loads 4 bytes from ([a1+128] + ([0x40caf4] << 0x2)) +0x0.
  5 such `lw` accesses load 4 bytes from [([a1+128] + ([0x40caf4] << 0x2))] +0x4, including `lw` at 0x406a20, `lw` at 0x406dfc, `lw` at 0x406e08.
  The `sw` at 0x406a3c stores 4 bytes to a2 (arg2 at entry) +0x0.
  The `sw` at 0x406a58 stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `lh` at 0x406a5c loads 2 bytes from a1 (arg1 at entry) +0x8.
  The `sw` at 0x406a60 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `lh` at 0x406a64 loads 2 bytes from a1 (arg1 at entry) +0xa.
  The `sw` at 0x406a68 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `lhu` at 0x406a6c loads 2 bytes from a1 (arg1 at entry) +0xc.
  The `sw` at 0x406a70 stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `lhu` at 0x406a74 loads 2 bytes from a1 (arg1 at entry) +0xe.
  The `sw` at 0x406a78 stores 4 bytes to a7 (arg7 at entry) +0x0.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x34, including `lw` at 0x406a7c, `lw` at 0x406a94.
  The `lw` at 0x406a88 loads 4 bytes from [a1+52] +0x4.
  20 such `sw` accesses store 4 bytes to ?, including `sw` at 0x406a90, `sw` at 0x406aa4, `sw` at 0x406ac8.
  4 such `lw` accesses load 4 bytes from a4 (arg4 at entry) +0x0, including `lw` at 0x406ac4, `lw` at 0x406b3c, `lw` at 0x406d64.
  4 such `lw` accesses load 4 bytes from a5 (arg5 at entry) +0x0, including `lw` at 0x406acc, `lw` at 0x406b4c, `lw` at 0x406d6c.
  2 such `lw` accesses load 4 bytes from a6 (arg6 at entry) +0x0, including `lw` at 0x406b50, `lw` at 0x406d7c.
  2 such `lw` accesses load 4 bytes from a7 (arg7 at entry) +0x0, including `lw` at 0x406b54, `lw` at 0x406d90.
  The `lh` at 0x406b6c loads 2 bytes from a0 (arg0 at entry) +0x8.
  The `lh` at 0x406b84 loads 2 bytes from a0 (arg0 at entry) +0xa.
  8 such `sh` accesses store 2 bytes to ?, including `sh` at 0x406b98, `sh` at 0x406b9c, `sh` at 0x406ba0.
  3 such `sw` accesses store 4 bytes to [([a1+128] + ([0x40caf4] << 0x2))] +0x4, including `sw` at 0x406c8c, `sw` at 0x406dcc, `sw` at 0x406e90.
  The `lw` at 0x406e2c loads 4 bytes from a1 (arg1 at entry) +0x7c.
  The `jalr` at 0x4069e8 calls xf86printf with a0=0x40c4f8, a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x406e1c calls (unknown callee) with a0=a1 at entry (arg1), a1=[[([a1+128] + ([0x40caf4] << 0x2))]+4], a2=[[([a1+128] + ([0x40caf4] << 0x2))]+4], a3=?, a5=-0x1.
  The `jalr` at 0x406e58 calls (unknown callee) with a0=a1 at entry (arg1), a1=a1+44, a2=[[([a1+128] + ([0x40caf4] << 0x2))]+4], a3=?.
  The `bltz` branch at 0x4069b8 targets 0x406b20, is taken when t1(=[0x40caf0]) < 0 (signed), and falls through when t1(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x4069f4 targets 0x406b08, is taken when a2(=[a1]:1) != 0, and falls through when a2(=[a1]:1) == 0.
  The `bltz` branch at 0x406a00 targets 0x406db0, is taken when a1(=[0x40caf4]) < 0 (signed), and falls through when a1(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x406a18 targets 0x406dac, is taken when ra(=[([a1+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when ra(=[([a1+128] + ([0x40caf4] << 0x2))]) != 0.
  The `beq` branch at 0x406a28 targets 0x406bc0, is taken when a2(=[[([a1+128] + ([0x40caf4] << 0x2))]+4]) == a5(=-0x1), and falls through when a2(=[[([a1+128] + ([0x40caf4] << 0x2))]+4]) != a5(=-0x1).
  The `beq` branch at 0x406a80 targets 0x406d40, is taken when t1(=[a1+52]) == 0, and falls through when t1(=[a1+52]) != 0.
  The `beq` branch at 0x406a98 targets 0x406d48, is taken when t1(=[a1+52]) == 0, and falls through when t1(=[a1+52]) != 0.
  The `beq` branch at 0x406aac targets 0x406d50, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The `beq` branch at 0x406ad8 targets 0x406b30, is taken when t2(?) == a1(=0x1), and falls through when t2(?) != a1(=0x1).
  The `beq` branch at 0x406b28 targets 0x4069d8 and is always taken.
  The `beq` branch at 0x406b34 targets 0x406adc, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bltz` branch at 0x406b5c targets 0x406e6c, is taken when t2(=[a4]) < 0 (signed), and falls through when t2(=[a4]) >= 0 (signed).
  The `bltz` branch at 0x406b64 targets 0x406e74, is taken when t1(=[a5]) < 0 (signed), and falls through when t1(=[a5]) >= 0 (signed).
  The `bne` branch at 0x406b74 targets 0x406b80, is taken when a3(=([a6] + [a4])) < a4(=[a0+8]:2) (signed), and falls through when a3(=([a6] + [a4])) >= a4(=[a0+8]:2) (signed).
  The `bne` branch at 0x406b8c targets 0x406b98, is taken when a2(=([a7] + [a5])) < a4(=[a0+10]:2) (signed), and falls through when a2(=([a7] + [a5])) >= a4(=[a0+10]:2) (signed).
  The `beq` branch at 0x406bb8 targets 0x406aec and is always taken.
  The `blez` branch at 0x406bcc targets 0x406e80, is taken when t3(?) <= 0 (signed), and falls through when t3(?) > 0 (signed).
  The `beq` branch at 0x406bdc targets 0x406dc8, is taken when t0(?) == 0, and falls through when t0(?) != 0.
  The `bne` branch at 0x406bec targets 0x406bd8, is taken when t2(?) < t3(?) (signed), and falls through when t2(?) >= t3(?) (signed).
  The `bne` branch at 0x406bf4 targets 0x406df8, is taken when t2(?) != t3(?), and falls through when t2(?) == t3(?).
  The `blez` branch at 0x406c04 targets 0x406e90, is taken when t3(?) <= 0 (signed), and falls through when t3(?) > 0 (signed).
  The `beq` branch at 0x406c18 targets 0x406c40, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `beq` branch at 0x406c28 targets 0x406c38, is taken when t3(?) >= a1(=-0x1) (unsigned), and falls through when t3(?) < a1(=-0x1) (unsigned).
  The `beq` branch at 0x406c44 targets 0x406c8c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x406c54 targets 0x406c64, is taken when t3(?) >= a1(?) (unsigned), and falls through when t3(?) < a1(?) (unsigned).
  The `beq` branch at 0x406c70 targets 0x406c80, is taken when t3(?) >= a1(?) (unsigned), and falls through when t3(?) < a1(?) (unsigned).
  The `bne` branch at 0x406c80 targets 0x406c4c, is taken when t2(?) != t8(?), and falls through when t2(?) == t8(?).
  The `beq` branch at 0x406cc0 targets 0x406e00, is taken when t3(=[0x40cad4]+1) >= a1(?) (unsigned), and falls through when t3(=[0x40cad4]+1) < a1(?) (unsigned).
  The `blez` branch at 0x406cd0 targets 0x406d30, is taken when t1(?) <= 0 (signed), and falls through when t1(?) > 0 (signed).
  The `beq` branch at 0x406d00 targets 0x406d30, is taken when a1(?) >= t9(?) (signed), and falls through when a1(?) < t9(?) (signed).
  The `bne` branch at 0x406d28 targets 0x406ce0, is taken when a1(?) < v0(?) (signed), and falls through when a1(?) >= v0(?) (signed).
  The `beq` branch at 0x406d34 targets 0x406e08 and is always taken.
  The `beq` branch at 0x406d40 targets 0x406a8c and is always taken.
  The `beq` branch at 0x406d48 targets 0x406aa0 and is always taken.
  The `beq` branch at 0x406d54 targets 0x406ab4, is taken when a1(?) == 0, and falls through when a1(?) != 0.
  The `beq` branch at 0x406da4 targets 0x406ab4 and is always taken.
  The `beq` branch at 0x406df0 targets 0x406bf4 and is always taken.
  The `beq` branch at 0x406df8 targets 0x406e0c and is always taken.
  The `beq` branch at 0x406e10 targets 0x406e2c, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x406e38 targets 0x406a30, is taken when at(?) == 0, and falls through when at(?) != 0.
  The `beq` branch at 0x406e48 targets 0x406a2c, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `beq` branch at 0x406e64 targets 0x406a2c and is always taken.
  The `beq` branch at 0x406e6c targets 0x406b64 and is always taken.
  The `beq` branch at 0x406e74 targets 0x406b68 and is always taken.
  The `bne` branch at 0x406e80 targets 0x406e0c, is taken when t3(?) != 0, and falls through when t3(?) == 0.
  The `beq` branch at 0x406e88 targets 0x406bfc and is always taken.
  The `bne` branch at 0x406eb8 targets 0x406cc8, is taken when t3(=[0x40cad4]+1) < -0x1 (unsigned), and falls through when t3(=[0x40cad4]+1) >= -0x1 (unsigned).
  The `beq` branch at 0x406ec0 targets 0x406e04 and is always taken.
  The return at 0x406b00 has v0 = 0x1.
  The return at 0x406b18 has v0 = 0x0.
  The return at 0x406dc0 has v0 = 0x0.
  The instructions from 0x406d3c to 0x406d3c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x406e7c to 0x406e7c are not reached by any path from the entry, and their branches are not listed.

- `DRIGetDeviceInfo` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406f00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406f00-0x406f6c (108 bytes).
  It occupies 108 bytes.
  The `lw` at 0x406f0c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x406f18 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x406f24 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `ld` at 0x406f28 loads 8 bytes from ?.
  The `sd` at 0x406f2c stores 8 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x406f30 stores 4 bytes to a2 (arg2 at entry) +0x0.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x406f34, `lw` at 0x406f38, `lw` at 0x406f40.
  The `sw` at 0x406f3c stores 4 bytes to a3 (arg3 at entry) +0x0.
  The `sw` at 0x406f48 stores 4 bytes to a4 (arg4 at entry) +0x0.
  The `sw` at 0x406f54 stores 4 bytes to a5 (arg5 at entry) +0x0.
  The `sw` at 0x406f68 stores 4 bytes to a6 (arg6 at entry) +0x0.
  The `bltz` branch at 0x406f10 targets 0x406f28, is taken when t1(=[0x40caf0]) < 0 (signed), and falls through when t1(=[0x40caf0]) >= 0 (signed).
  The return at 0x406f64 has v0 = 0x1.

- `DRICreateInfoRec` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x406f80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x406f80-0x407024 (164 bytes).
  It occupies 164 bytes.
  The `sw` at 0x406fc4 stores 4 bytes to ret(Xcalloc) +0x1c.
  The `sw` at 0x406fc8 stores 4 bytes to ret(Xcalloc) +0x14.
  The `sw` at 0x406fcc stores 4 bytes to ret(Xcalloc) +0x18.
  The `sw` at 0x406fd0 stores 4 bytes to ret(Xcalloc) +0x54.
  The `sw` at 0x406ff0 stores 4 bytes to ret(Xcalloc) +0x40.
  The `sw` at 0x406ff4 stores 4 bytes to ret(Xcalloc) +0x3c.
  The `sw` at 0x406ff8 stores 4 bytes to ret(Xcalloc) +0x38.
  The `sw` at 0x406ffc stores 4 bytes to ret(Xcalloc) +0x34.
  The `sw` at 0x407000 stores 4 bytes to ret(Xcalloc) +0x30.
  The `sw` at 0x407004 stores 4 bytes to ret(Xcalloc) +0x2c.
  The `sw` at 0x407008 stores 4 bytes to ret(Xcalloc) +0x28.
  The `sw` at 0x407010 stores 4 bytes to ret(Xcalloc) +0x44.
  The `jalr` at 0x406f9c calls Xcalloc with a0=0x98, a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bne` branch at 0x406fa8 targets 0x406fc0, is taken when v0(=ret(Xcalloc)) != 0, and falls through when v0(=ret(Xcalloc)) == 0.
  The return at 0x406fb8 has v0 = 0x0.
  The return at 0x40701c has v0 = ret(Xcalloc).

- `DRIDestroyInfoRec` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407040-0x407094 (84 bytes).
  It occupies 84 bytes.
  The `lw` at 0x407044 loads 4 bytes from a0 (arg0 at entry) +0x54.
  The `jalr` at 0x40706c calls Xfree with a0=[a0+84], a1=a1 at entry (arg1), a2=[a0+84], a3=a3 at entry (arg3).
  The `jalr` at 0x407078 calls Xfree with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x407060 targets 0x407074, is taken when a2(=[a0+84]) == 0, and falls through when a2(=[a0+84]) != 0.
  The return at 0x40708c has v0 = ret(Xfree).

- `DRIWakeupHandler` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4070c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4070c0-0x4071b0 (240 bytes).
  It occupies 240 bytes.
  2 such `lw` accesses load 4 bytes from sym(screenInfo) +0x30, including `lw` at 0x4070dc, `lw` at 0x407170.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407134, `lw` at 0x407138, `lw` at 0x407140.
  The `jalr` at 0x407168 calls (unknown callee) with a0=?, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a2 at entry (arg2), a7=[sym(screenInfo)+48].
  The `blez` branch at 0x407108 targets 0x407188, is taken when a7(=[sym(screenInfo)+48]) <= 0 (signed), and falls through when a7(=[sym(screenInfo)+48]) > 0 (signed).
  The `beq` branch at 0x407114 targets 0x40712c and is always taken.
  The `beq` branch at 0x407124 targets 0x407188, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bltz` branch at 0x40712c targets 0x40711c, is taken when t1(=[0x40caf0]) < 0 (signed), and falls through when t1(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407144 targets 0x407120, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x407154 targets 0x407120, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x407180 targets 0x407114, is taken when s1(?) < a7(=[sym(screenInfo)+48]) (signed), and falls through when s1(?) >= a7(=[sym(screenInfo)+48]) (signed).
  The return at 0x4071a8 has v0 = one of ?, ret(?).

- `DRIBlockHandler` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4071c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4071c0-0x4072b0 (240 bytes).
  It occupies 240 bytes.
  2 such `lw` accesses load 4 bytes from sym(screenInfo) +0x30, including `lw` at 0x4071dc, `lw` at 0x407270.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407234, `lw` at 0x407238, `lw` at 0x407240.
  The `jalr` at 0x407268 calls (unknown callee) with a0=?, a1=a0 at entry (arg0), a2=a1 at entry (arg1), a3=a2 at entry (arg2), a7=[sym(screenInfo)+48].
  The `blez` branch at 0x407208 targets 0x407288, is taken when a7(=[sym(screenInfo)+48]) <= 0 (signed), and falls through when a7(=[sym(screenInfo)+48]) > 0 (signed).
  The `beq` branch at 0x407214 targets 0x40722c and is always taken.
  The `beq` branch at 0x407224 targets 0x407288, is taken when v0(?) == 0, and falls through when v0(?) != 0.
  The `bltz` branch at 0x40722c targets 0x40721c, is taken when t1(=[0x40caf0]) < 0 (signed), and falls through when t1(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407244 targets 0x407220, is taken when a6(?) == 0, and falls through when a6(?) != 0.
  The `beq` branch at 0x407254 targets 0x407220, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `bne` branch at 0x407280 targets 0x407214, is taken when s1(?) < a7(=[sym(screenInfo)+48]) (signed), and falls through when s1(?) >= a7(=[sym(screenInfo)+48]) (signed).
  The return at 0x4072a8 has v0 = one of ?, ret(?).

- `DRIDoWakeupHandler` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4072c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4072c0-0x407370 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0x4072f4 loads 4 bytes from (sym(screenInfo) + (a0 << 0x2)) +0x34.
  The `lw` at 0x4072f8 loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0x168.
  The `lw` at 0x407308 loads 4 bytes from ([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2)) +0x0.
  5 such `lw` accesses load 4 bytes from ?, including `lw` at 0x40731c, `lw` at 0x407320, `lw` at 0x407348.
  The `jalr` at 0x407314 calls DRILock with a0=[(sym(screenInfo) + (a0 << 0x2))+52], a1=0x0, a2=[0x40caf0], a3=a3 at entry (arg3).
  The `jalr` at 0x407360 calls (unknown callee) with a0=[(sym(screenInfo) + (a0 << 0x2))+52], a1=0x2, a2=0x1, a3=?, a4=0x1.
  The `bltz` branch at 0x4072f0 targets 0x407340, is taken when a2(=[0x40caf0]) < 0 (signed), and falls through when a2(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407324 targets 0x407348, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x407340 targets 0x40730c and is always taken.
  The `beq` branch at 0x407368 targets 0x40732c and is always taken.
  The return at 0x407338 has v0 = one of ret(DRILock), ret(?).

- `DRIDoBlockHandler` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407380-0x407430 (176 bytes).
  It occupies 176 bytes.
  The `lw` at 0x4073ac loads 4 bytes from (sym(screenInfo) + (a0 << 0x2)) +0x34.
  The `lw` at 0x4073b0 loads 4 bytes from abs 0x34.
  The `lw` at 0x4073b4 loads 4 bytes from [0x34] +0x80.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4073c8, `lw` at 0x4073dc.
  The `lw` at 0x4073f0 loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0x168.
  The `lw` at 0x4073fc loads 4 bytes from ([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407400 loads 4 bytes from [([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x407404 loads 4 bytes from [[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+52] +0x80.
  The `jalr` at 0x4073e0 calls (unknown callee) with a0=[(sym(screenInfo) + (a0 << 0x2))+52], a1=0x1, a2=0x0, a3=0x0, a4=0x1.
  The `jalr` at 0x407414 calls DRIUnlock with a0=[(sym(screenInfo) + (a0 << 0x2))+52], a1=?, a2=?, a3=?.
  The `bgez` branch at 0x4073a8 targets 0x4073f0, is taken when a2(=[0x40caf0]) >= 0 (signed), and falls through when a2(=[0x40caf0]) < 0 (signed).
  The `bne` branch at 0x4073c0 targets 0x407410, is taken when v0(=[[0x34]+128]) != 0, and falls through when v0(=[[0x34]+128]) == 0.
  The `beq` branch at 0x4073e8 targets 0x407414 and is always taken.
  The `beq` branch at 0x407408 targets 0x4073c8, is taken when v1(=[[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+52]+128]) == 0, and falls through when v1(=[[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+52]+128]) != 0.
  The return at 0x407428 has v0 = ret(DRIUnlock).

- `DRISwapContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407440-0x4077c0 (896 bytes).
  It occupies 896 bytes.
  The `lw` at 0x40745c loads 4 bytes from a2 (arg2 at entry) +0x4.
  The `lw` at 0x40747c loads 4 bytes from [a2+4] +0x168.
  The `lw` at 0x40748c loads 4 bytes from ([[a2+4]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407490 loads 4 bytes from [([[a2+4]+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x407494 loads 4 bytes from [[([[a2+4]+360] + ([0x40caf0] << 0x2))]+52] +0x8.
  The `lw` at 0x4074a0 loads 4 bytes from [[([[a2+4]+360] + ([0x40caf0] << 0x2))]+52] +0x80.
  2 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0xc, including `lw` at 0x4074ac, `lw` at 0x407618.
  The `sw` at 0x4074ec stores 4 bytes to ?.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0xc, including `lw` at 0x407500, `lw` at 0x407628.
  The `lw` at 0x407510 loads 4 bytes from [([[a2+4]+360] + ([0x40caf0] << 0x2))] +0x28.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407528, `lw` at 0x407538, `lw` at 0x407540.
  3 such `sw` accesses store 4 bytes to a1 (arg1 at entry) +0x8, including `sw` at 0x407568, `sw` at 0x407758, `sw` at 0x407770.
  3 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x8, including `lw` at 0x407578, `lw` at 0x4076a0, `lw` at 0x407780.
  3 such `lw` accesses load 4 bytes from a2 (arg2 at entry) +0x0, including `lw` at 0x407590, `lw` at 0x4076b8, `lw` at 0x407790.
  The `lw` at 0x4075fc loads 4 bytes from abs 0x34.
  The `lw` at 0x407600 loads 4 bytes from [0x34] +0x8.
  The `lw` at 0x40760c loads 4 bytes from [0x34] +0x80.
  The `lw` at 0x407638 loads 4 bytes from abs 0x28.
  2 such `lw` accesses load 4 bytes from [a2+4] +0x0, including `lw` at 0x4076fc, `lw` at 0x407730.
  The `jalr` at 0x4074bc calls DRIGetContextStore with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x4074d0 calls DRIGetContextStore with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x40751c calls DRIGetContextStore with a0=a1 at entry (arg1), a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x407530 calls DRIGetContextStore with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407558 calls (unknown callee) with a0=[a2+4], a1=0x1, a2=0x1, a3=ret(DRIGetContextStore), a4=0x1, a5=ret(DRIGetContextStore).
  The `jalr` at 0x407570 calls DRIGetContextStore with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x4075cc calls (unknown callee) with a0=[a2+4], a1=one of 0x0, 0x1, 0x2, a2=one of 0x0, 0x1, 0x2, a3=?, a4=one of 0x1, 0x2, a5=ret(DRIGetContextStore).
  The `jalr` at 0x407644 calls DRIGetContextStore with a0=a1 at entry (arg1), a1=?, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `jalr` at 0x407658 calls DRIGetContextStore with a0=a2 at entry (arg2), a1=?, a2=?, a3=?.
  The `jalr` at 0x407698 calls DRIGetContextStore with a0=a2 at entry (arg2), a1=?, a2=one of 0x0, 0x2, a3=?.
  The `bgezall` at 0x407700 calls DRIDrvMsg [0x404680] with a0=[[a2+4]], a1=0x5, a2=0x40c518, a3=a1 at entry (arg1), a4=a2 at entry (arg2).
  The `bgezall` at 0x407734 calls DRIDrvMsg [0x404680] with a0=[[a2+4]], a1=0x5, a2=0x40c558, a3=a3 at entry (arg3).
  The `jalr` at 0x40774c calls DRIGetContextStore with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=0x0, a3=a3 at entry (arg3).
  The `jalr` at 0x407778 calls DRIGetContextStore with a0=a2 at entry (arg2), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bltz` branch at 0x407474 targets 0x4075f4, is taken when v0(=[0x40caf0]) < 0 (signed), and falls through when v0(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407488 targets 0x4076e0, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x407498 targets 0x40771c, is taken when t9(=[[[([[a2+4]+360] + ([0x40caf0] << 0x2))]+52]+8]) == 0, and falls through when t9(=[[[([[a2+4]+360] + ([0x40caf0] << 0x2))]+52]+8]) != 0.
  The `beq` branch at 0x4074a4 targets 0x407680, is taken when ra(=[[[([[a2+4]+360] + ([0x40caf0] << 0x2))]+52]+128]) == 0, and falls through when ra(=[[[([[a2+4]+360] + ([0x40caf0] << 0x2))]+52]+128]) != 0.
  The `beq` branch at 0x4074b4 targets 0x407500, is taken when (at(=[a2+12]) & 0x1) == 0, and falls through when (at(=[a2+12]) & 0x1) != 0.
  The `beq` branch at 0x4074f0 targets 0x4075c0 and is always taken.
  The `beq` branch at 0x407508 targets 0x40776c, is taken when (v1(=[a1+12]) & 0x1) == 0, and falls through when (v1(=[a1+12]) & 0x1) != 0.
  The `beq` branch at 0x407514 targets 0x407640, is taken when a0(=[[([[a2+4]+360] + ([0x40caf0] << 0x2))]+40]) == a2, and falls through when a0(=[[([[a2+4]+360] + ([0x40caf0] << 0x2))]+40]) != a2.
  The `beq` branch at 0x407584 targets 0x4075a4, is taken when v1(=[a2+8]) == 0, and falls through when v1(=[a2+8]) != 0.
  The `beq` branch at 0x407594 targets 0x4075a4, is taken when a0(=[a2]) == a1(?), and falls through when a0(=[a2]) != a1(?).
  The `beq` branch at 0x40759c targets 0x4075b0 and is always taken.
  The `beq` branch at 0x4075f4 targets 0x4076e0, is taken when a2 == 0, and falls through when a2 != 0.
  The `beq` branch at 0x407604 targets 0x40771c, is taken when ra(=[[0x34]+8]) == 0, and falls through when ra(=[[0x34]+8]) != 0.
  The `beq` branch at 0x407610 targets 0x407680, is taken when at(=[[0x34]+128]) == 0, and falls through when at(=[[0x34]+128]) != 0.
  The `bne` branch at 0x407620 targets 0x4074bc, is taken when (v1(=[a2+12]) & 0x1) != 0, and falls through when (v1(=[a2+12]) & 0x1) == 0.
  The `beq` branch at 0x407630 targets 0x40776c, is taken when (a0(=[a1+12]) & 0x1) == 0, and falls through when (a0(=[a1+12]) & 0x1) != 0.
  The `bne` branch at 0x40763c targets 0x407518, is taken when a1(=[0x28]) != a2, and falls through when a1(=[0x28]) == a2.
  The `beq` branch at 0x407674 targets 0x4075c0 and is always taken.
  The `bne` branch at 0x407680 targets 0x407748, is taken when s3(=a1) != 0, and falls through when s3(=a1) == 0.
  The `beq` branch at 0x4076ac targets 0x4076d0, is taken when a4(=[a2+8]) == 0, and falls through when a4(=[a2+8]) != 0.
  The `beq` branch at 0x4076c0 targets 0x4076d0, is taken when a5(=[a2]) == a6(?), and falls through when a5(=[a2]) != a6(?).
  The `beq` branch at 0x4076c8 targets 0x4076d8 and is always taken.
  The `beq` branch at 0x4076d8 targets 0x4075c0 and is always taken.
  The `beq` branch at 0x407710 targets 0x4075e4 and is always taken.
  The `beq` branch at 0x407740 targets 0x4075e4 and is always taken.
  The `beq` branch at 0x407760 targets 0x40768c and is always taken.
  The `beq` branch at 0x407784 targets 0x4077a8, is taken when v1(=[a2+8]) == 0, and falls through when v1(=[a2+8]) != 0.
  The `beq` branch at 0x407794 targets 0x4077ac, is taken when a0(=[a2]) == a1(?), and falls through when a0(=[a2]) != a1(?).
  The `beq` branch at 0x4077a0 targets 0x4077b0 and is always taken.
  The `beq` branch at 0x4077b8 targets 0x4075c0 and is always taken.
  The return at 0x4075ec has v0 = one of ret(?), ret(DRIDrvMsg).
  The instructions from 0x4074f8 to 0x4074fc are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x40767c to 0x40767c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x407718 to 0x407718 are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x407768 to 0x407768 are not reached by any path from the entry, and their branches are not listed.

- `DRIGetContextStore` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4077c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4077c0-0x4077c8 (8 bytes).
  It occupies 8 bytes.
  The `lw` at 0x4077c4 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The return at 0x4077c0 has v0 = [a0+16].

- `DRIWindowExposures` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407800-0x4078e0 (224 bytes).
  It occupies 224 bytes.
  The `lw` at 0x407820 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x407850 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x407858 loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407864 loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `lw` at 0x407870 loads 4 bytes from ([a0+128] + ([0x40caf4] << 0x2)) +0x0.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x40787c, `lw` at 0x407880, `lw` at 0x407894.
  The `lw` at 0x407888 loads 4 bytes from [([a0+128] + ([0x40caf4] << 0x2))] +0x4.
  2 such `sw` accesses store 4 bytes to [a0+16] +0xbc, including `sw` at 0x4078a8, `sw` at 0x4078cc.
  The `lw` at 0x4078c4 loads 4 bytes from [a0+16] +0xbc.
  The `sw` at 0x4078c8 stores 4 bytes to ?.
  The `jalr` at 0x40788c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=[[([a0+128] + ([0x40caf4] << 0x2))]+4], a3=a3 at entry (arg3), a4=[([a0+128] + ([0x40caf4] << 0x2))], a5=([0x40caf4] << 0x2).
  The `jalr` at 0x4078a4 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `bltz` branch at 0x407848 targets 0x40785c, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `bltz` branch at 0x40785c targets 0x407894, is taken when a0(=[0x40caf4]) < 0 (signed), and falls through when a0(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x407874 targets 0x407894, is taken when a4(=[([a0+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when a4(=[([a0+128] + ([0x40caf4] << 0x2))]) != 0.
  The return at 0x4078d8 has v0 = [[a0+16]+188].

- `DRITreeTraversal` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407900-0x4079ac (172 bytes).
  It occupies 172 bytes.
  The `lw` at 0x407920 loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `lw` at 0x40792c loads 4 bytes from ([a0+128] + ([0x40caf4] << 0x2)) +0x0.
  The `lw` at 0x407940 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x407944 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x407954 loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407970 loads 4 bytes from ?.
  The `jalr` at 0x407964 calls miUnion with a0=a1 at entry (arg1), a1=a1 at entry (arg1), a2=a0+44, a3=?, a4=a0 at entry (arg0).
  The `bltz` branch at 0x407918 targets 0x407980, is taken when a3(=[0x40caf4]) < 0 (signed), and falls through when a3(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x407930 targets 0x407980, is taken when v0(=[([a0+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when v0(=[([a0+128] + ([0x40caf4] << 0x2))]) != 0.
  The `bltz` branch at 0x407938 targets 0x407990, is taken when a0(=[0x40caf0]) < 0 (signed), and falls through when a0(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407978 targets 0x40799c, is taken when a3(?) == a4(=0x1), and falls through when a3(?) != a4(=0x1).
  The `beq` branch at 0x407994 targets 0x40795c and is always taken.
  The return at 0x407988 has v0 = 0x1.
  The return at 0x4079a4 has v0 = 0x0.

- `DRICopyWindow` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4079c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4079c0-0x407b40 (384 bytes).
  It occupies 384 bytes.
  The `lw` at 0x4079e8 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x407a00 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x407a0c loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407a10 loads 4 bytes from [([[a0+16]+360] + ([0x40caf0] << 0x2))] +0x38.
  The `ldl` at 0x407a2c loads 8 bytes from sym(miEmptyBox) +0x0.
  The `ldr` at 0x407a3c loads 8 bytes from sym(miEmptyBox) +0x7.
  6 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407a58, `lw` at 0x407a98, `lw` at 0x407a9c.
  The `lh` at 0x407a64 loads 2 bytes from a0 (arg0 at entry) +0xa.
  The `lh` at 0x407a68 loads 2 bytes from a0 (arg0 at entry) +0x8.
  2 such `sw` accesses store 4 bytes to [a0+16] +0xc8, including `sw` at 0x407aec, `sw` at 0x407b14.
  The `lw` at 0x407b0c loads 4 bytes from [a0+16] +0xc8.
  The `sw` at 0x407b10 stores 4 bytes to ?.
  The `lw` at 0x407b28 loads 4 bytes from abs 0x38.
  The `lw` at 0x407b3c loads 4 bytes from abs 0x5c.
  The `jalr` at 0x407a44 calls TraverseTree with a0=a0 at entry (arg0), a1=0x407900, a2=sp-96, a3=sym(miEmptyBox), a4=sym(miEmptyData).
  The `jalr` at 0x407a7c calls miTranslateRegion with a0=sp-96, a1=?, a2=?, a3=[a0+10]:2, a4=[a0+8]:2.
  The `jalr` at 0x407a90 calls miIntersect with a0=sp-96, a1=sp-96, a2=a2 at entry (arg2), a3=?.
  The `jalr` at 0x407ab0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=sp-96, a3=?.
  The `jalr` at 0x407ad0 calls Xfree with a0=?, a1=?, a2=?, a3=?.
  The `jalr` at 0x407af0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=a2 at entry (arg2), a3=?.
  The `bltz` branch at 0x4079f8 targets 0x407b28, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `blez` branch at 0x407a14 targets 0x407adc, is taken when v1(=[[([[a0+16]+360] + ([0x40caf0] << 0x2))]+56]) <= 0 (signed), and falls through when v1(=[[([[a0+16]+360] + ([0x40caf0] << 0x2))]+56]) > 0 (signed).
  The `beq` branch at 0x407a50 targets 0x407a64, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x407a5c targets 0x407abc, is taken when a5(?) == 0, and falls through when a5(?) != 0.
  The `beq` branch at 0x407abc targets 0x407adc, is taken when a0(?) == 0, and falls through when a0(?) != 0.
  The `beq` branch at 0x407ac8 targets 0x407adc, is taken when a2(?) == 0, and falls through when a2(?) != 0.
  The `bgtz` branch at 0x407b30 targets 0x407a1c, is taken when a4(=[0x38]) > 0 (signed), and falls through when a4(=[0x38]) <= 0 (signed).
  The `beq` branch at 0x407b38 targets 0x407ae0 and is always taken.
  The return at 0x407b20 has v0 = ret(?).

- `DRIGetSecs` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407b40-0x407b4c (12 bytes).
  It occupies 12 bytes.
  Calls xf86getsecs via got with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3) (`jr` at 0x407b44).

- `DRIComputeMilliSeconds` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407b80-0x407bd8 (88 bytes).
  It occupies 88 bytes.
  The `beq` branch at 0x407b88 targets 0x407b9c, is taken when a3 >= a1 (unsigned), and falls through when a3 < a1 (unsigned).
  The return at 0x407bd0 has v0 = ?.

- `DRISpinLockTimeout` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407c00-0x407d80 (384 bytes).
  It occupies 384 bytes.
  2 such `ll` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `ll` at 0x407cc4, `ll` at 0x407d34.
  2 such `sc` accesses store 4 bytes to a0 (arg0 at entry) +0x0, including `sc` at 0x407cd4, `sc` at 0x407d44.
  3 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x407cf8, `lw` at 0x407d0c, `lw` at 0x407d30.
  The `bgezall` at 0x407c40 calls DRIGetSecs [0x407b40] with a0=sp-80, a1=sp-76, a2=a2 at entry (arg2), a3=a3 at entry (arg3).
  The `bgezall` at 0x407c68 calls DRIGetSecs [0x407b40] with a0=sp-72, a1=sp-68, a2=?, a3=?.
  The `bgezall` at 0x407c80 calls DRIComputeMilliSeconds [0x407b80] with a0=?, a1=?, a2=?, a3=?.
  The `beq` branch at 0x407c54 targets 0x407ca0 and is always taken.
  The `beq` branch at 0x407c5c targets 0x407d58, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x407c8c targets 0x407c98, is taken when v0(=ret(DRIComputeMilliSeconds)) >= 0xfa (signed), and falls through when v0(=ret(DRIComputeMilliSeconds)) < 0xfa (signed).
  The `beq` branch at 0x407c98 targets 0x407d30, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `blez` branch at 0x407ca0 targets 0x407c64, is taken when s0(?) <= 0 (signed), and falls through when s0(?) > 0 (signed).
  The `beq` branch at 0x407ca8 targets 0x407cc4 and is always taken.
  The `beq` branch at 0x407cb0 targets 0x407c5c, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The `beq` branch at 0x407cbc targets 0x407c5c, is taken when v0(?) >= s0(?) (signed), and falls through when v0(?) < s0(?) (signed).
  The `bne` branch at 0x407cc8 targets 0x407ce0, is taken when at(=[a0]) != 0, and falls through when at(=[a0]) == 0.
  The `beql` branch at 0x407cd8 targets 0x407cc4, is taken when at(=a1) == 0, and falls through when at(=a1) != 0; its branch-likely delay slot `nop` at 0x407cdc runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x407ce4 targets 0x407cb0, is taken when at(?) == s3(=0x1), and falls through when at(?) != s3(=0x1).
  The `beq` branch at 0x407cf0 targets 0x407cb0, is taken when v0(?) >= s0(?) (signed), and falls through when v0(?) < s0(?) (signed).
  The `beq` branch at 0x407cfc targets 0x407cb0, is taken when a5(=[a0]) == 0, and falls through when a5(=[a0]) != 0.
  The `beq` branch at 0x407d04 targets 0x407d1c and is always taken.
  The `beq` branch at 0x407d10 targets 0x407cb0, is taken when a6(=[a0]) == 0, and falls through when a6(=[a0]) != 0.
  The `bne` branch at 0x407d20 targets 0x407d0c, is taken when v0(?) < s0(?) (signed), and falls through when v0(?) >= s0(?) (signed).
  The `beq` branch at 0x407d28 targets 0x407cb0 and is always taken.
  The `bne` branch at 0x407d38 targets 0x407d50, is taken when t0(=[a0]) != t1(=[a0]), and falls through when t0(=[a0]) == t1(=[a0]).
  The `beql` branch at 0x407d48 targets 0x407d34, is taken when t0(=a1) == 0, and falls through when t0(=a1) != 0; its branch-likely delay slot `nop` at 0x407d4c runs only when taken and is annulled on fall-through.
  The `bne` branch at 0x407d50 targets 0x407d30, is taken when t0(?) != s3(=0x1), and falls through when t0(?) == s3(=0x1).
  The return at 0x407d78 has v0 = one of ?, ret(DRIComputeMilliSeconds).

- `DRILockTree` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407d80-0x407e7c (252 bytes).
  It occupies 252 bytes.
  The `lw` at 0x407d98 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x407da4 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407da8 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x407dac loads 4 bytes from [[([a0+360] + ([0x40caf0] << 0x2))]+52] +0x80.
  8 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407dcc, `lw` at 0x407df0, `lw` at 0x407df4.
  The `lw` at 0x407e10 loads 4 bytes from abs 0x34.
  The `lw` at 0x407e14 loads 4 bytes from [0x34] +0x80.
  The `jalr` at 0x407dbc calls DRIUnlock with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bgezall` at 0x407dd8 calls DRISpinLockTimeout [0x407c00] with a0=?, a1=0x1, a2=0x2710, a3=?.
  The `jalr` at 0x407de8 calls DRILock with a0=a0 at entry (arg0), a1=0xa, a2=?, a3=?.
  The `jalr` at 0x407e3c calls (unknown callee) with a0=a0 at entry (arg0), a1=0x1, a2=0x0, a3=0x0, a4=0x1.
  Calls (unknown callee) via register with a0=a0 at entry (arg0), a1=0x2, a2=0x1, a3=?, a4=0x1 (`jr` at 0x407e74).
  The `bltz` branch at 0x407d90 targets 0x407e10, is taken when a2(=[0x40caf0]) < 0 (signed), and falls through when a2(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407db0 targets 0x407e24, is taken when at(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+128]) == 0, and falls through when at(=[[[([a0+360] + ([0x40caf0] << 0x2))]+52]+128]) != 0.
  The `beq` branch at 0x407df8 targets 0x407e4c, is taken when ra(?) == 0, and falls through when ra(?) != 0.
  The `bne` branch at 0x407e1c targets 0x407db8, is taken when at(=[[0x34]+128]) != 0, and falls through when at(=[[0x34]+128]) == 0.
  The `beq` branch at 0x407e44 targets 0x407dbc and is always taken.
  The return at 0x407e08 has v0 = ret(DRILock).

- `DRIValidateTree` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407e80-0x407f40 (192 bytes).
  It occupies 192 bytes.
  The `lw` at 0x407e9c loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x407ec0 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x407ed0 loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x407ee8 loads 4 bytes from ?.
  2 such `sw` accesses store 4 bytes to [a0+16] +0xb4, including `sw` at 0x407f04, `sw` at 0x407f24.
  The `lw` at 0x407f1c loads 4 bytes from [a0+16] +0xb4.
  The `sw` at 0x407f20 stores 4 bytes to ?.
  The `bgezall` at 0x407ee0 calls DRILockTree [0x407d80] with a0=[a0+16], a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0x40caf0].
  The `jalr` at 0x407f00 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?.
  The `bltz` branch at 0x407eb8 targets 0x407f38, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407f38 targets 0x407ed4 and is always taken.
  The return at 0x407f30 has v0 = ret(?).

- `DRIPostValidateTree` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x407f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x407f40-0x408034 (244 bytes).
  It occupies 244 bytes.
  The `lw` at 0x407f60 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x407f64 loads 4 bytes from a1 (arg1 at entry) +0x10.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x407f74, `lw` at 0x407f80, `lw` at 0x407f84.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x407f98, `sw` at 0x407fa8, `sw` at 0x407fac.
  The `ll` at 0x407fd8 loads 4 bytes from ?.
  The `sc` at 0x407fe8 stores 4 bytes to ?.
  The `lw` at 0x408020 loads 4 bytes from abs 0x64.
  The `jalr` at 0x407f94 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0x40caf0].
  The `beq` branch at 0x407f54 targets 0x407f64, is taken when a0 == 0, and falls through when a0 != 0.
  The `beq` branch at 0x407f5c targets 0x407f68 and is always taken.
  The `bltz` branch at 0x407f6c targets 0x408020, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x407f88 targets 0x407fb4, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x407fb8 targets 0x408010, is taken when v0(=[0x40cae8]) == 0, and falls through when v0(=[0x40cae8]) != 0.
  The `bne` branch at 0x407fc8 targets 0x407ffc, is taken when v1(?) != a0(=0x1), and falls through when v1(?) == a0(=0x1).
  The `bne` branch at 0x407fdc targets 0x407ff4, is taken when a1(?) != a3(=0x1), and falls through when a1(?) == a3(=0x1).
  The `beql` branch at 0x407fec targets 0x407fd8 and is always taken.
  The `bne` branch at 0x407ff4 targets 0x407fd0 and is always taken.
  The `beq` branch at 0x408024 targets 0x407fb0, is taken when t9(=[0x64]) == 0, and falls through when t9(=[0x64]) != 0.
  The `beq` branch at 0x40802c targets 0x407f90 and is always taken.
  The return at 0x408008 has v0 = [0x40cae8].
  The return at 0x408018 has v0 = [0x40cae8].

- `DRIClipNotify` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408040 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408040-0x408164 (292 bytes).
  It occupies 292 bytes.
  The `lw` at 0x40805c loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x408070 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x408084 loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x80, including `lw` at 0x408088, `lw` at 0x40811c.
  2 such `lw` accesses load 4 bytes from ([a0+128] + ([0x40caf4] << 0x2)) +0x0, including `lw` at 0x408090, `lw` at 0x408128.
  2 such `lw` accesses load 4 bytes from [([a0+128] + ([0x40caf4] << 0x2))] +0x4, including `lw` at 0x40809c, `lw` at 0x408134.
  The `lw` at 0x4080a0 loads 4 bytes from [([[a0+16]+360] + ([0x40caf0] << 0x2))] +0x10.
  The `sw` at 0x4080b4 stores 4 bytes to ([[([[a0+16]+360] + ([0x40caf0] << 0x2))]+16] + ([[([a0+128] + ([0x40caf4] << 0x2))]+4] << 0x3)) +0x80.
  The `lw` at 0x4080b8 loads 4 bytes from [([[a0+16]+360] + ([0x40caf0] << 0x2))] +0x68.
  2 such `sw` accesses store 4 bytes to [a0+16] +0xd0, including `sw` at 0x4080cc, `sw` at 0x4080e4.
  The `lw` at 0x4080dc loads 4 bytes from [a0+16] +0xd0.
  The `sw` at 0x4080e0 stores 4 bytes to ?.
  The `lw` at 0x408138 loads 4 bytes from abs 0x10.
  The `sw` at 0x40814c stores 4 bytes to ([0x10] + ([[([a0+128] + ([0x40caf4] << 0x2))]+4] << 0x3)) +0x80.
  The `lw` at 0x408150 loads 4 bytes from abs 0x68.
  The `jalr` at 0x4080c8 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[0x40caf4].
  The `bltz` branch at 0x408068 targets 0x408114, is taken when a5(=[0x40caf0]) < 0 (signed), and falls through when a5(=[0x40caf0]) >= 0 (signed).
  The `bltz` branch at 0x408080 targets 0x4080b8, is taken when a4(=[0x40caf4]) < 0 (signed), and falls through when a4(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x408094 targets 0x4080b8, is taken when a5(=[([a0+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when a5(=[([a0+128] + ([0x40caf4] << 0x2))]) != 0.
  The `beq` branch at 0x4080bc targets 0x408100, is taken when t9(=[[([[a0+16]+360] + ([0x40caf0] << 0x2))]+104]) == 0, and falls through when t9(=[[([[a0+16]+360] + ([0x40caf0] << 0x2))]+104]) != 0.
  The `bltz` branch at 0x408114 targets 0x408150, is taken when a4(=[0x40caf4]) < 0 (signed), and falls through when a4(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x40812c targets 0x408150, is taken when a5(=[([a0+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when a5(=[([a0+128] + ([0x40caf4] << 0x2))]) != 0.
  The `beq` branch at 0x408154 targets 0x408100, is taken when t9(=[0x68]) == 0, and falls through when t9(=[0x68]) != 0.
  The `beq` branch at 0x40815c targets 0x4080c4 and is always taken.
  The return at 0x4080f0 has v0 = ret(?).
  The return at 0x40810c has v0 = ?.
  The instructions from 0x4080f8 to 0x4080fc are not reached by any path from the entry, and their branches are not listed.

- `DRIGetDrawableIndex` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408180-0x4081e4 (100 bytes).
  It occupies 100 bytes.
  The `lw` at 0x40818c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x408198 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x40819c loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x4081a8 loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x4081ac loads 4 bytes from abs 0x40caf4.
  The `lw` at 0x4081b8 loads 4 bytes from a0 (arg0 at entry) +0x80.
  The `lw` at 0x4081c4 loads 4 bytes from ([a0+128] + ([0x40caf4] << 0x2)) +0x0.
  The `lw` at 0x4081d4 loads 4 bytes from [([a0+128] + ([0x40caf4] << 0x2))] +0x4.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4081d8, `lw` at 0x4081e0.
  The `bltz` branch at 0x408190 targets 0x4081ac, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `bltz` branch at 0x4081b0 targets 0x4081d8, is taken when a3(=[0x40caf4]) < 0 (signed), and falls through when a3(=[0x40caf4]) >= 0 (signed).
  The `beq` branch at 0x4081c8 targets 0x4081d8, is taken when a4(=[([a0+128] + ([0x40caf4] << 0x2))]) == 0, and falls through when a4(=[([a0+128] + ([0x40caf4] << 0x2))]) != 0.
  The return at 0x4081d0 has v0 = [[([a0+128] + ([0x40caf4] << 0x2))]+4].
  The return at 0x4081dc has v0 = ?.

- `DRIGetDrawableStamp` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408200-0x408250 (80 bytes).
  It occupies 80 bytes.
  The `lw` at 0x40820c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x408218 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x408224 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x408228 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x10.
  The `lw` at 0x408238 loads 4 bytes from ([[([a0+360] + ([0x40caf0] << 0x2))]+16] + (a1 << 0x3)) +0x80.
  The `lw` at 0x40823c loads 4 bytes from abs 0x10.
  The `lw` at 0x40824c loads 4 bytes from ([0x10] + (a1 << 0x3)) +0x80.
  The `bltz` branch at 0x408210 targets 0x40823c, is taken when a5(=[0x40caf0]) < 0 (signed), and falls through when a5(=[0x40caf0]) >= 0 (signed).
  The return at 0x408234 has v0 = [([[([a0+360] + ([0x40caf0] << 0x2))]+16] + (a1 << 0x3))+128].
  The return at 0x408248 has v0 = [([0x10] + (a1 << 0x3))+128].

- `DRIPrintDrawableLock` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408280-0x4082e0 (96 bytes).
  It occupies 96 bytes.
  The `lw` at 0x4082a0 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4082b0 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x4082b8, `lw` at 0x4082c4.
  The `jalr` at 0x4082c0 calls ErrorF with a0=0x40cb00, a1=a1 at entry (arg1), a2=?, a3=[0x40caf0].
  The `bltz` branch at 0x408298 targets 0x4082d8, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x4082d8 targets 0x4082b4 and is always taken.
  The return at 0x4082d0 has v0 = ret(ErrorF).

- `DRILock` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408300-0x408414 (276 bytes).
  It occupies 276 bytes.
  The `lw` at 0x408324 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x408330 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x408334 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x47c.
  7 such `lw` accesses load 4 bytes from ?, including `lw` at 0x408348, `lw` at 0x408354, `lw` at 0x40835c.
  The `sw` at 0x408368 stores 4 bytes to ?.
  The `sw` at 0x408384 stores 4 bytes to [([a0+360] + ([0x40caf0] << 0x2))] +0x47c.
  The `lw` at 0x408394 loads 4 bytes from abs 0x47c.
  The `sw` at 0x4083a4 stores 4 bytes to abs 0x47c.
  The `ll` at 0x4083d0 loads 4 bytes from ?.
  The `sc` at 0x4083e0 stores 4 bytes to ?.
  The `jalr` at 0x408350 calls drmGetLock with a0=?, a1=?, a2=a1 at entry (arg1), a3=a3 at entry (arg3), a4=[0x40caf0].
  The `jalr` at 0x408404 calls drmGetLock with a0=?, a1=?, a2=0x0, a3=a3 at entry (arg3), a4=[0x40caf0].
  The `bltz` branch at 0x40831c targets 0x408394, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `bne` branch at 0x408338 targets 0x408380, is taken when a1(=[[([a0+360] + ([0x40caf0] << 0x2))]+1148]) != 0, and falls through when a1(=[[([a0+360] + ([0x40caf0] << 0x2))]+1148]) == 0.
  The `beq` branch at 0x408340 targets 0x4083c0, is taken when a2(=a1) == 0, and falls through when a2(=a1) != 0.
  The `beq` branch at 0x40839c targets 0x408340, is taken when at(=[0x47c]) == 0, and falls through when at(=[0x47c]) != 0.
  The `bne` branch at 0x4083d4 targets 0x4083ec, is taken when v0(?) != a1(?), and falls through when v0(?) == a1(?).
  The `beql` branch at 0x4083e4 targets 0x4083d0, is taken when v0(?) == 0, and falls through when v0(?) != 0; its branch-likely delay slot `nop` at 0x4083e8 runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x4083f0 targets 0x40835c, is taken when v0(?) == v1(=0x1), and falls through when v0(?) != v1(=0x1).
  The `beq` branch at 0x40840c targets 0x40835c and is always taken.
  The return at 0x408370 has v0 = one of ret(drmGetLock), ?.
  The return at 0x40838c has v0 = ?.
  The return at 0x4083b0 has v0 = ?.
  The instructions from 0x408378 to 0x40837c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x4083b8 to 0x4083bc are not reached by any path from the entry, and their branches are not listed.

- `DRIUnlock` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408440-0x40851c (220 bytes).
  It occupies 220 bytes.
  The `lw` at 0x408460 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x40846c loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x408470 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x47c.
  The `sw` at 0x408480 stores 4 bytes to [([a0+360] + ([0x40caf0] << 0x2))] +0x47c.
  The `lw` at 0x408484 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x20.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x408488, `lw` at 0x4084bc, `lw` at 0x4084c8.
  The `ll` at 0x408494 loads 4 bytes from ?.
  The `sc` at 0x4084a4 stores 4 bytes to ?.
  The `lw` at 0x4084dc loads 4 bytes from abs 0x47c.
  The `sw` at 0x4084f0 stores 4 bytes to abs 0x47c.
  The `lw` at 0x4084f8 loads 4 bytes from abs 0x20.
  The `jalr` at 0x4084c4 calls drmUnlock with a0=?, a1=?, a2=?, a3=?, a4=[0x40caf0], a7=0x1.
  The `jalr` at 0x40850c calls ErrorF with a0=0x40c590, a1=a1 at entry (arg1), a2=?, a3=?, a4=[0x40caf0].
  The `bltz` branch at 0x408458 targets 0x4084dc, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x408474 targets 0x408500, is taken when a2(=[[([a0+360] + ([0x40caf0] << 0x2))]+1148]) == 0, and falls through when a2(=[[([a0+360] + ([0x40caf0] << 0x2))]+1148]) != 0.
  The `bne` branch at 0x40847c targets 0x4084d0, is taken when a2(=[[([a0+360] + ([0x40caf0] << 0x2))]+1148]-1) != 0, and falls through when a2(=[[([a0+360] + ([0x40caf0] << 0x2))]+1148]-1) == 0.
  The `bne` branch at 0x408498 targets 0x4084b0, is taken when a6(?) != t1(?), and falls through when a6(?) == t1(?).
  The `beql` branch at 0x4084a8 targets 0x408494, is taken when a6(?) == 0, and falls through when a6(?) != 0; its branch-likely delay slot `nop` at 0x4084ac runs only when taken and is annulled on fall-through.
  The `beq` branch at 0x4084b4 targets 0x4084d0, is taken when a6(?) == a7(=0x1), and falls through when a6(?) != a7(=0x1).
  The `beq` branch at 0x4084e4 targets 0x408500, is taken when t2(=[0x47c]) == 0, and falls through when t2(=[0x47c]) != 0.
  The `bne` branch at 0x4084ec targets 0x4084d0, is taken when a0(=[0x47c]-1) != 0, and falls through when a0(=[0x47c]-1) == 0.
  The `beq` branch at 0x4084f4 targets 0x408488 and is always taken.
  The `beq` branch at 0x408514 targets 0x4084d0 and is always taken.
  The return at 0x4084d4 has v0 = one of ?, ret(drmUnlock), ret(ErrorF).
  The instructions from 0x4084fc to 0x4084fc are not reached by any path from the entry, and their branches are not listed.

- `DRIGetSAREAPrivate` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408540-0x408584 (68 bytes).
  It occupies 68 bytes.
  The `lw` at 0x40854c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x408558 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x408564 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x408570 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x10.
  The `bltz` branch at 0x408550 targets 0x40857c, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x408568 targets 0x40857c, is taken when a4(=[([a0+360] + ([0x40caf0] << 0x2))]) == 0, and falls through when a4(=[([a0+360] + ([0x40caf0] << 0x2))]) != 0.
  The return at 0x408574 has v0 = [[([a0+360] + ([0x40caf0] << 0x2))]+16]+2200.
  The return at 0x40857c has v0 = 0x0.

- `DRIGetContext` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4085c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4085c0-0x408600 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x4085cc loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x4085d8 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x4085e4 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x4085f4 loads 4 bytes from [([a0+360] + ([0x40caf0] << 0x2))] +0x20.
  The `bltz` branch at 0x4085d0 targets 0x4085f8, is taken when a3(=[0x40caf0]) < 0 (signed), and falls through when a3(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x4085e8 targets 0x4085f8, is taken when a4(=[([a0+360] + ([0x40caf0] << 0x2))]) == 0, and falls through when a4(=[([a0+360] + ([0x40caf0] << 0x2))]) != 0.
  The return at 0x4085f0 has v0 = [[([a0+360] + ([0x40caf0] << 0x2))]+32].
  The return at 0x4085f8 has v0 = 0x0.

- `DRIGetWrappedFuncs` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408600-0x408638 (56 bytes).
  It occupies 56 bytes.
  The `lw` at 0x40860c loads 4 bytes from abs 0x40caf0.
  The `lw` at 0x408618 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x408624 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  The `bltz` branch at 0x408610 targets 0x408630, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The return at 0x408628 has v0 = [([a0+360] + ([0x40caf0] << 0x2))]+80.
  The return at 0x408630 has v0 = 0x50.

- `DRIQueryVersion` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408640-0x408654 (20 bytes).
  It occupies 20 bytes.
  The `sw` at 0x408644 stores 4 bytes to a0 (arg0 at entry) +0x0.
  The `sw` at 0x408648 stores 4 bytes to a1 (arg1 at entry) +0x0.
  The `sw` at 0x408650 stores 4 bytes to a2 (arg2 at entry) +0x0.
  The return at 0x40864c has v0 = ?.

- `_DRIAdjustFrame` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408680-0x4086bc (60 bytes).
  It occupies 60 bytes.
  4 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x10, including `lw` at 0x408680, `lw` at 0x408688, `lw` at 0x408694.
  The `sw` at 0x408684 stores 4 bytes to [a1+16] +0x880.
  The `sw` at 0x40868c stores 4 bytes to [a1+16] +0x884.
  The `lw` at 0x408690 loads 4 bytes from a0 (arg0 at entry) +0xb8.
  The `sw` at 0x4086a0 stores 4 bytes to [a1+16] +0x888.
  The `lw` at 0x4086a4 loads 4 bytes from a0 (arg0 at entry) +0xbc.
  The `sw` at 0x4086b8 stores 4 bytes to [a1+16] +0x88c.
  The return at 0x4086b4 has v0 = [a1+16].

- `DRIAdjustFrame` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4086c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4086c0-0x4088c0 (512 bytes).
  It occupies 512 bytes.
  The `lw` at 0x408700 loads 4 bytes from (sym(screenInfo) + (a0 << 0x2)) +0x34.
  The `lw` at 0x408704 loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0x168.
  The `lw` at 0x408710 loads 4 bytes from ([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2)) +0x0.
  4 such `lw` accesses load 4 bytes from [([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))] +0x10, including `lw` at 0x40871c, `lw` at 0x4087ec, `lw` at 0x4087f8.
  The `lw` at 0x408720 loads 4 bytes from [([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))] +0x6c.
  The `lw` at 0x408728 loads 4 bytes from [([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))] +0x44.
  The `lw` at 0x408730 loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0x0.
  The `lw` at 0x408734 loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x408744 loads 4 bytes from ([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2)) +0x0.
  2 such `sw` accesses store 4 bytes to [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0x40c, including `sw` at 0x408758, `sw` at 0x408778.
  The `lw` at 0x408770 loads 4 bytes from [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0x40c.
  The `sw` at 0x408774 stores 4 bytes to [([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))] +0x6c.
  The `lw` at 0x4087e4 loads 4 bytes from [[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16] +0x880.
  The `sw` at 0x4087e8 stores 4 bytes to [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xb0.
  The `lw` at 0x4087f0 loads 4 bytes from [[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16] +0x884.
  The `sw` at 0x4087f4 stores 4 bytes to [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xb4.
  The `lw` at 0x4087fc loads 4 bytes from [[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16] +0x888.
  The `sw` at 0x408808 stores 4 bytes to [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xb8.
  The `lw` at 0x408814 loads 4 bytes from [[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16] +0x88c.
  The `sw` at 0x40882c stores 4 bytes to [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xbc.
  The `lw` at 0x408830 loads 4 bytes from [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xb0.
  The `lw` at 0x408850 loads 4 bytes from [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xb8.
  The `lw` at 0x408868 loads 4 bytes from [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xb4.
  The `lw` at 0x408880 loads 4 bytes from [([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))] +0xbc.
  The `lw` at 0x40889c loads 4 bytes from [(sym(screenInfo) + (a0 << 0x2))+52] +0x12c.
  The `jalr` at 0x40875c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16], a6=a1 at entry (arg1), a7=a2 at entry (arg2).
  The `bgezall` at 0x408790 calls _DRIAdjustFrame [0x408680] with a0=[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))], a1=[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))], a2=a1 at entry (arg1), a3=a2 at entry (arg2), a6=a1 at entry (arg1), a7=a2 at entry (arg2).
  The `bgezall` at 0x4087d0 calls DRIDrvMsg [0x404680] with a0=a0 at entry (arg0), a1=0x5, a2=0x40c5b8, a3=?, a6=a1 at entry (arg1), a7=a2 at entry (arg2).
  The `jalr` at 0x408828 calls miPointerPosition with a0=sp-64, a1=sp-60, a2=a2 at entry (arg2), a3=a3 at entry (arg3), a4=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16], a6=a1 at entry (arg1), a7=a2 at entry (arg2).
  The `jalr` at 0x4088a8 calls (unknown callee) with a0=[(sym(screenInfo) + (a0 << 0x2))+52], a1=?, a2=?, a3=0x1.
  The `bltz` branch at 0x4086fc targets 0x4087b4, is taken when a4(=[0x40caf0]) < 0 (signed), and falls through when a4(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x408714 targets 0x4087bc, is taken when s0(=[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]) == 0, and falls through when s0(=[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]) != 0.
  The `beq` branch at 0x408724 targets 0x4088b8, is taken when a4(=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16]) == 0, and falls through when a4(=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+16]) != 0.
  The `bne` branch at 0x408740 targets 0x4087e4, is taken when a1(=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+68]) != 0, and falls through when a1(=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+68]) == 0.
  The `beq` branch at 0x408748 targets 0x40877c, is taken when t9(=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+108]) == 0, and falls through when t9(=[[([[(sym(screenInfo) + (a0 << 0x2))+52]+360] + ([0x40caf0] << 0x2))]+108]) != 0.
  The `beq` branch at 0x4087dc targets 0x4087a4 and is always taken.
  The `beq` branch at 0x408840 targets 0x408850, is taken when a1(?) >= a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+176]) (signed), and falls through when a1(?) < a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+176]) (signed).
  The `beq` branch at 0x408858 targets 0x408868, is taken when a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+184]) >= a1(?) (signed), and falls through when a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+184]) < a1(?) (signed).
  The `beq` branch at 0x408870 targets 0x408880, is taken when a2(?) >= a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+180]) (signed), and falls through when a2(?) < a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+180]) (signed).
  The `beq` branch at 0x408888 targets 0x40889c, is taken when a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+188]) >= a2(?) (signed), and falls through when a0(=[[([sym(xf86Screens)] + ([[(sym(screenInfo) + (a0 << 0x2))+52]] << 0x2))]+188]) < a2(?) (signed).
  The `beq` branch at 0x4088b0 targets 0x4087a4 and is always taken.
  The `beq` branch at 0x4088b8 targets 0x4087c0 and is always taken.
  The return at 0x4087ac has v0 = one of ret(_DRIAdjustFrame), ret(DRIDrvMsg), ret(?).

- `DRIOpenFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x4088c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x4088c0-0x408b0c (588 bytes).
  It occupies 588 bytes.
  The `lw` at 0x4088f0 loads 4 bytes from a0 (arg0 at entry) +0x168.
  The `lw` at 0x408900 loads 4 bytes from ([a0+360] + ([0x40caf0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from a1 (arg1 at entry) +0x34, including `lw` at 0x408904, `lw` at 0x4089b8.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x0, including `lw` at 0x40890c, `lw` at 0x408ac4.
  The `lw` at 0x408910 loads 4 bytes from sym(xf86Screens) +0x0.
  The `lw` at 0x408920 loads 4 bytes from ([sym(xf86Screens)] + ([a0] << 0x2)) +0x0.
  2 such `lw` accesses load 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0xb0, including `lw` at 0x408938, `lw` at 0x408994.
  2 such `lw` accesses load 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0xb4, including `lw` at 0x408940, `lw` at 0x4089b4.
  The `lbu` at 0x40894c loads 1 byte from a1 (arg1 at entry) +0x0.
  The `lw` at 0x408980 loads 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0x368.
  The `lh` at 0x408990 loads 2 bytes from a1 (arg1 at entry) +0x8.
  The `lhu` at 0x408998 loads 2 bytes from a1 (arg1 at entry) +0xe.
  The `lw` at 0x40899c loads 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0xb8.
  The `lhu` at 0x4089a0 loads 2 bytes from a1 (arg1 at entry) +0xc.
  The `lw` at 0x4089a4 loads 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0xbc.
  The `lh` at 0x4089b0 loads 2 bytes from a1 (arg1 at entry) +0xa.
  The `lw` at 0x4089e4 loads 4 bytes from [a1+52] +0x4.
  4 such `lhu` accesses load 2 bytes from ?, including `lhu` at 0x408a54, `lhu` at 0x408a5c, `lhu` at 0x408a68.
  The `lw` at 0x408aa8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `lw` at 0x408ab8 loads 4 bytes from [([sym(xf86Screens)] + ([a0] << 0x2))] +0x420.
  The `sw` at 0x408ad4 stores 4 bytes to [([sym(xf86Screens)] + ([a0] << 0x2))] +0x368.
  2 such `sw` accesses store 4 bytes to ?, including `sw` at 0x408ae0, `sw` at 0x408b08.
  3 such `lw` accesses load 4 bytes from ?, including `lw` at 0x408ae4, `lw` at 0x408ae8, `lw` at 0x408afc.
  The `bgezall` at 0x408944 calls _DRIAdjustFrame [0x408680] with a0=[([sym(xf86Screens)] + ([a0] << 0x2))], a1=?, a2=[[([sym(xf86Screens)] + ([a0] << 0x2))]+176], a3=[[([sym(xf86Screens)] + ([a0] << 0x2))]+180].
  The `jalr` at 0x408aa4 calls AddResource with a0=[a1+4], a1=[0x40cad8], a2=a1 at entry (arg1), a3=?, a4=0x1, a5=[a1+14]:2, a6=[a1+8]:2.
  The `jalr` at 0x408ab0 calls xf86EnableVTSwitch with a0=0x0, a1=?, a2=?, a3=?.
  The `jalr` at 0x408ac0 calls (unknown callee) with a0=[a0], a1=0x0, a2=?, a3=?.
  The `jalr` at 0x408adc calls DRIClipNotify with a0=a1 at entry (arg1), a1=0x0, a2=0x0, a3=?.
  The `jalr` at 0x408af4 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `bltz` branch at 0x4088e8 targets 0x408a30, is taken when v0(=[0x40caf0]) < 0 (signed), and falls through when v0(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x40891c targets 0x408a40, is taken when v0(=[a1+52]) == 0, and falls through when v0(=[a1+52]) != 0.
  The `beq` branch at 0x408950 targets 0x408980, is taken when ra(=[a1]:1) == 0, and falls through when ra(=[a1]:1) != 0.
  The `beq` branch at 0x408988 targets 0x408a94, is taken when at(=[[([sym(xf86Screens)] + ([a0] << 0x2))]+872]) == 0, and falls through when at(=[[([sym(xf86Screens)] + ([a0] << 0x2))]+872]) != 0.
  The `bne` branch at 0x4089a8 targets 0x408a0c, is taken when t1(=[[([sym(xf86Screens)] + ([a0] << 0x2))]+176]) != a6(=[a1+8]:2), and falls through when t1(=[[([sym(xf86Screens)] + ([a0] << 0x2))]+176]) == a6(=[a1+8]:2).
  The `bne` branch at 0x4089c0 targets 0x408a0c, is taken when t3(=[[([sym(xf86Screens)] + ([a0] << 0x2))]+180]) != t2(=[a1+10]:2), and falls through when t3(=[[([sym(xf86Screens)] + ([a0] << 0x2))]+180]) == t2(=[a1+10]:2).
  The `bne` branch at 0x4089cc targets 0x408a0c, is taken when a1(=[a1+12]:2) != v1(?), and falls through when a1(=[a1+12]:2) == v1(?).
  The `bne` branch at 0x4089d4 targets 0x408a0c, is taken when a5(=[a1+14]:2) != a2(?), and falls through when a5(=[a1+14]:2) == a2(?).
  The `beq` branch at 0x4089dc targets 0x408a50, is taken when v0(=[a1+52]) == 0, and falls through when v0(=[a1+52]) != 0.
  The `beq` branch at 0x4089e8 targets 0x408a50, is taken when a3(=[[a1+52]+4]) == a4(=0x1), and falls through when a3(=[[a1+52]+4]) != a4(=0x1).
  The `beq` branch at 0x408a34 targets 0x408904 and is always taken.
  The `beq` branch at 0x408a48 targets 0x408930 and is always taken.
  The `bne` branch at 0x408a58 targets 0x408a88, is taken when a6(=[a1+8]:2) != a0(?), and falls through when a6(=[a1+8]:2) == a0(?).
  The `bne` branch at 0x408a60 targets 0x408a88, is taken when t2(=[a1+10]:2) != v0(?), and falls through when t2(=[a1+10]:2) == v0(?).
  The `bne` branch at 0x408a70 targets 0x408a88, is taken when a1(=[a1+12]:2) != v1(?), and falls through when a1(=[a1+12]:2) == v1(?).
  The `beq` branch at 0x408a80 targets 0x408a9c, is taken when a5(=[a1+14]:2) == a0(?), and falls through when a5(=[a1+14]:2) != a0(?).
  The `beq` branch at 0x408a8c targets 0x408960 and is always taken.
  The `beq` branch at 0x408a94 targets 0x408960 and is always taken.
  The `beq` branch at 0x408aec targets 0x408afc, is taken when t9(?) == 0, and falls through when t9(?) != 0.
  The `beq` branch at 0x408b04 targets 0x408960 and is always taken.
  The return at 0x408974 has v0 = one of 0x0, 0x1.
  The return at 0x408a04 has v0 = 0x0.
  The return at 0x408a28 has v0 = 0x0.
  The instructions from 0x40897c to 0x40897c are not reached by any path from the entry, and their branches are not listed.
  The instructions from 0x408a3c to 0x408a3c are not reached by any path from the entry, and their branches are not listed.

- `_DRICloseFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408b40-0x408c9c (348 bytes).
  It occupies 348 bytes.
  The `lw` at 0x408b60 loads 4 bytes from a0 (arg0 at entry) +0x10.
  The `lw` at 0x408b74 loads 4 bytes from [a0+16] +0x168.
  The `lw` at 0x408b80 loads 4 bytes from ([[a0+16]+360] + ([0x40caf0] << 0x2)) +0x0.
  The `lw` at 0x408b84 loads 4 bytes from [([[a0+16]+360] + ([0x40caf0] << 0x2))] +0x34.
  The `lw` at 0x408b88 loads 4 bytes from [[([[a0+16]+360] + ([0x40caf0] << 0x2))]+52] +0x24.
  4 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x68, including `lw` at 0x408b94, `lw` at 0x408bcc, `lw` at 0x408c08.
  3 such `lw` accesses load 4 bytes from [a0+16] +0x0, including `lw` at 0x408ba0, `lw` at 0x408bd8, `lw` at 0x408c28.
  2 such `lw` accesses load 4 bytes from sym(xf86Screens) +0x0, including `lw` at 0x408ba4, `lw` at 0x408bdc.
  2 such `lw` accesses load 4 bytes from a0 (arg0 at entry) +0x78, including `lw` at 0x408ba8, `lw` at 0x408be0.
  2 such `lw` accesses load 4 bytes from ([sym(xf86Screens)] + ([[a0+16]] << 0x2)) +0x0, including `lw` at 0x408bc0, `lw` at 0x408bf0.
  3 such `sw` accesses store 4 bytes to ?, including `sw` at 0x408bc8, `sw` at 0x408bfc, `sw` at 0x408c70.
  The `sw` at 0x408c04 stores 4 bytes to [([sym(xf86Screens)] + ([[a0+16]] << 0x2))] +0x368.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x78, including `sw` at 0x408c10, `sw` at 0x408c4c.
  2 such `sw` accesses store 4 bytes to a0 (arg0 at entry) +0x68, including `sw` at 0x408c1c, `sw` at 0x408c40.
  The `lw` at 0x408c20 loads 4 bytes from [([sym(xf86Screens)] + ([[a0+16]] << 0x2))] +0x420.
  The `lw` at 0x408c5c loads 4 bytes from ?.
  The `lw` at 0x408c80 loads 4 bytes from abs 0x34.
  The `lw` at 0x408c84 loads 4 bytes from [0x34] +0x24.
  The `jalr` at 0x408bbc calls (unknown callee) with a0=[a0+16], a1=a1 at entry (arg1), a2=[0x40caf0], a3=a3 at entry (arg3).
  The `jalr` at 0x408c24 calls (unknown callee) with a0=[[a0+16]], a1=0x1, a2=?, a3=?.
  The `jalr` at 0x408c48 calls xf86EnableVTSwitch with a0=0x1, a1=?, a2=?, a3=?.
  The `bltz` branch at 0x408b6c targets 0x408c80, is taken when a2(=[0x40caf0]) < 0 (signed), and falls through when a2(=[0x40caf0]) >= 0 (signed).
  The `beq` branch at 0x408b8c targets 0x408bcc, is taken when t9(=[[[([[a0+16]+360] + ([0x40caf0] << 0x2))]+52]+36]) == 0, and falls through when t9(=[[[([[a0+16]+360] + ([0x40caf0] << 0x2))]+52]+36]) != 0.
  The `beq` branch at 0x408bc4 targets 0x408c00 and is always taken.
  The `beq` branch at 0x408c8c targets 0x408bcc, is taken when t9(=[[0x34]+36]) == 0, and falls through when t9(=[[0x34]+36]) != 0.
  The `beq` branch at 0x408c94 targets 0x408b98 and is always taken.
  The return at 0x408c6c has v0 = 0x1.
  The instructions from 0x408c74 to 0x408c7c are not reached by any path from the entry, and their branches are not listed.

- `DRICloseFullScreen` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408cc0-0x408d00 (64 bytes).
  It occupies 64 bytes.
  The `lw` at 0x408cd8 loads 4 bytes from a1 (arg1 at entry) +0x4.
  The `jalr` at 0x408ce4 calls FreeResourceByType with a0=[a1+4], a1=[0x40cad8], a2=0x0, a3=a3 at entry (arg3).
  The return at 0x408cf8 has v0 = 0x1.

- `DRIMoveBuffersHelper` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x408d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x408d00-0x408fcc (716 bytes).
  It occupies 716 bytes.
  The `lw` at 0x408d00 loads 4 bytes from a5 (arg5 at entry) +0x8.
  The `lw` at 0x408d10 loads 4 bytes from [a5+8] +0x4.
  2 such `lh` accesses load 2 bytes from a5 (arg5 at entry) +0x2, including `lh` at 0x408d1c, `lh` at 0x408f10.
  2 such `lh` accesses load 2 bytes from a5 (arg5 at entry) +0x6, including `lh` at 0x408d20, `lh` at 0x408f14.
  5 such `sw` accesses store 4 bytes to a4 (arg4 at entry) +0x0, including `sw` at 0x408d40, `sw` at 0x408db8, `sw` at 0x408f30.
  26 such `lh` accesses load 2 bytes from ?, including `lh` at 0x408d58, `lh` at 0x408d5c, `lh` at 0x408d60.
  24 such `sh` accesses store 2 bytes to ?, including `sh` at 0x408d6c, `sh` at 0x408d74, `sh` at 0x408d7c.
  4 such `lh` accesses load 2 bytes from a5 (arg5 at entry) +0x0, including `lh` at 0x408dc4, `lh` at 0x408f34, `lh` at 0x408f68.
  4 such `lh` accesses load 2 bytes from a5 (arg5 at entry) +0x4, including `lh` at 0x408dc8, `lh` at 0x408f38, `lh` at 0x408f6c.
  5 such `sw` accesses store 4 bytes to a3 (arg3 at entry) +0x0, including `sw` at 0x408df0, `sw` at 0x408e0c, `sw` at 0x408f84.
  The `lh` at 0x408e00 loads 2 bytes from [a5+8] +0xa.
  The `lh` at 0x408fc8 loads 2 bytes from [a5+8] +0x12.
  The `beq` branch at 0x408d08 targets 0x408f08, is taken when a7(=[a5+8]) == 0, and falls through when a7(=[a5+8]) != 0.
  The `blez` branch at 0x408d14 targets 0x408db4, is taken when a2 <= 0 (signed), and falls through when a2 > 0 (signed).
  The `beq` branch at 0x408d34 targets 0x408db4, is taken when a2 >= at(?) (signed), and falls through when a2 < at(?) (signed).
  The `bne` branch at 0x408d3c targets 0x408dbc, is taken when a7(?) != 0, and falls through when a7(?) == 0.
  The `beq` branch at 0x408d50 targets 0x408dbc, is taken when a4(=[a5+8]+8) >= a6(=([a5+8]+8 + ([[a5+8]+4] << 0x3))-8) (unsigned), and falls through when a4(=[a5+8]+8) < a6(=([a5+8]+8 + ([[a5+8]+4] << 0x3))-8) (unsigned).
  The `bne` branch at 0x408da4 targets 0x408d58, is taken when t0(?) < a6(?) (unsigned), and falls through when t0(?) >= a6(?) (unsigned).
  The `beq` branch at 0x408dac targets 0x408dbc and is always taken.
  The `blez` branch at 0x408dbc targets 0x408f54, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x408de0 targets 0x408e04, is taken when a1 >= t0(?) (signed), and falls through when a1 < t0(?) (signed).
  The `bne` branch at 0x408dec targets 0x408e10, is taken when a2(?) != 0, and falls through when a2(?) == 0.
  The `beq` branch at 0x408dfc targets 0x408fc0 and is always taken.
  The `beq` branch at 0x408e24 targets 0x408ea4, is taken when a4(?) == t0(=(([[a5+8]+4]-1 << 0x3) + [a5+8]+8)), and falls through when a4(?) != t0(=(([[a5+8]+4]-1 << 0x3) + [a5+8]+8)).
  The `beq` branch at 0x408e30 targets 0x408e18, is taken when a3(?) == a5(?), and falls through when a3(?) != a5(?).
  The `beq` branch at 0x408e38 targets 0x408e94, is taken when a7(?) == 0, and falls through when a7(?) != 0.
  The `bne` branch at 0x408e88 targets 0x408e40, is taken when a2(?) < a1(?) (unsigned), and falls through when a2(?) >= a1(?) (unsigned).
  The `beq` branch at 0x408e9c targets 0x408e1c and is always taken.
  The `beq` branch at 0x408ea8 targets 0x408e10, is taken when a2(?) >= a1(?) (unsigned), and falls through when a2(?) < a1(?) (unsigned).
  The `bne` branch at 0x408ef8 targets 0x408eb0, is taken when a2(?) < a1(?) (unsigned), and falls through when a2(?) >= a1(?) (unsigned).
  The `beq` branch at 0x408f00 targets 0x408e10 and is always taken.
  The `blez` branch at 0x408f08 targets 0x408f88, is taken when a2 <= 0 (signed), and falls through when a2 > 0 (signed).
  The `beq` branch at 0x408f20 targets 0x408f5c, is taken when a2 >= a4(?) (signed), and falls through when a2 < a4(?) (signed).
  The `blez` branch at 0x408f2c targets 0x408fb8, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x408f44 targets 0x408e08, is taken when a1 >= t1(?) (signed), and falls through when a1 < t1(?) (signed).
  The `beq` branch at 0x408f4c targets 0x408fb0 and is always taken.
  The `beq` branch at 0x408f54 targets 0x408e08 and is always taken.
  The `blez` branch at 0x408f60 targets 0x408e08, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x408f78 targets 0x408e08, is taken when a1 >= t3(?) (signed), and falls through when a1 < t3(?) (signed).
  The `blez` branch at 0x408f88 targets 0x408e08, is taken when a1 <= 0 (signed), and falls through when a1 > 0 (signed).
  The `beq` branch at 0x408fa0 targets 0x408e08, is taken when a1 >= at(?) (signed), and falls through when a1 < at(?) (signed).
  The `beq` branch at 0x408fb8 targets 0x408e08 and is always taken.
  The `beq` branch at 0x408fc4 targets 0x408e30 and is always taken.
  The return at 0x408e08 has v0 = one of ?, [a5]:2.
  The return at 0x408e10 has v0 = ?.
  The return at 0x408f80 has v0 = ?.
  The return at 0x408fa8 has v0 = [a5]:2.
  The return at 0x408fb0 has v0 = ?.

- `driSetup` in `usr/X11R6/lib/modules/extensions/libdri.so` at 0x409000 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libdri.so`.
  Range: 0x409000-0x409110 (272 bytes).
  It occupies 272 bytes.
  The `ld` at 0x409024 loads 8 bytes from abs 0x40c5d0.
  The `lhu` at 0x409038 loads 2 bytes from abs 0x40c5d8.
  2 such `sw` accesses store 4 bytes to a2 (arg2 at entry) +0x0, including `sw` at 0x409050, `sw` at 0x4090c0.
  The `jalr` at 0x4090a0 calls LoadSubModule with a0=a0 at entry (arg0), a1=sp-48, a2=0x0, a3=0x0, a4=0x0, a5=0x0, a6=a2 at entry (arg2), a7=a3 at entry (arg3).
  The `jalr` at 0x4090dc calls LoaderReqSymLists with a0=0x40c840, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x4090f0 calls LoaderRefSymbols with a0=0x40c5e0, a1=0x0, a2=?, a3=?.
  The `jalr` at 0x409100 calls LoadExtension with a0=sym(XF86DRIExt), a1=0x0, a2=?, a3=?.
  The `beq` branch at 0x409040 targets 0x409080, is taken when v1(=[0x40caec]) == 0, and falls through when v1(=[0x40caec]) != 0.
  The `beq` branch at 0x409048 targets 0x409054, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `bne` branch at 0x4090a8 targets 0x4090d0, is taken when v0(=ret(LoadSubModule)) != 0, and falls through when v0(=ret(LoadSubModule)) == 0.
  The `beq` branch at 0x4090b0 targets 0x409068, is taken when s0(=a2) == 0, and falls through when s0(=a2) != 0.
  The `beq` branch at 0x409108 targets 0x409068 and is always taken.
  The return at 0x409060 has v0 = 0x0.
  The return at 0x409074 has v0 = one of ret(LoadSubModule), ?.
  The return at 0x4090c8 has v0 = ret(LoadSubModule).
  The instructions from 0x40907c to 0x40907c are not reached by any path from the entry, and their branches are not listed.
