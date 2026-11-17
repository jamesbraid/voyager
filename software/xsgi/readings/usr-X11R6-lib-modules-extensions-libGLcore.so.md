# Readings: `usr/X11R6/lib/modules/extensions/libGLcore.so`

One entry per routine, filed here from the reading batches by binary.

- `__OGLDRI_destroyContext` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x432c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x432c40-0x432cc0 (128 bytes).
  It occupies 128 bytes.
  The `lw` at 0x432c44 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x432c4c loads 4 bytes from [a0+56] +0x14.
  The `lw` at 0x432c5c loads 4 bytes from [[a0+56]+20] +0x0.
  The `lw` at 0x432c68 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x432c78, `lw` at 0x432c8c.
  The `lw` at 0x432c90 loads 4 bytes from a0 (arg0 at entry) +0x59b0.
  The `lw` at 0x432c9c loads 4 bytes from a0 (arg0 at entry) +0x59b4.
  The `jalr` at 0x432c94 calls (unknown callee) with a0=[[[a0+56]+20]], a1=[a0+22960], a2=a2 at entry (arg2), a3=?, a4=[[[a0+56]+20]].
  The `jalr` at 0x432ca0 calls (unknown callee) with a0=a0 at entry (arg0), a1=?, a2=?, a3=?.
  The `beq` branch at 0x432c84 targets 0x432c9c, is taken when at(?) == 0, and falls through when at(?) != 0.
  The return at 0x432cb8 has v0 = 0x1.

- `__OGLDRI_loseCurrent` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x432cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x432cc0-0x432d64 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x432cc4 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x432cc8 loads 4 bytes from [a0+56] +0x68.
  The `lw` at 0x432ccc loads 4 bytes from [[a0+56]+104] +0x14.
  The `lw` at 0x432ce4 loads 4 bytes from [a0+56] +0x14.
  The `lw` at 0x432cf4 loads 4 bytes from [[a0+56]+20] +0x0.
  The `lw` at 0x432cfc loads 4 bytes from sym(__glXActiveScreens) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x432d0c, `lw` at 0x432d18.
  The `lw` at 0x432d1c loads 4 bytes from [[a0+56]+104] +0xc.
  The `lw` at 0x432d24 loads 4 bytes from a0 (arg0 at entry) +0x59b0.
  The `lw` at 0x432d48 loads 4 bytes from a0 (arg0 at entry) +0x59b8.
  The `jalr` at 0x432d28 calls (unknown callee) with a0=[[[a0+56]+20]], a1=[[[a0+56]+104]+12], a2=[a0+22960], a3=0x0, a5=[[[a0+56]+20]], a6=a0 at entry (arg0), a7=[[a0+56]+104].
  The `jalr` at 0x432d4c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sym(__glXActiveScreens), a3=a3 at entry (arg3), a5=[[[a0+56]+20]], a6=a0 at entry (arg0), a7=[[a0+56]+104].
  The `bne` branch at 0x432cf0 targets 0x432d48, is taken when at(=[[[a0+56]+104]+20]) != 0, and falls through when at(=[[[a0+56]+104]+20]) == 0.
  The `beq` branch at 0x432d10 targets 0x432d48, is taken when t1(?) == 0, and falls through when t1(?) != 0.
  The return at 0x432d40 has v0 = ?.
  The return at 0x432d5c has v0 = ret(?).

- `__OGLDRI_makeCurrentRead` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x432d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x432d80-0x432e34 (180 bytes).
  It occupies 180 bytes.
  The `lw` at 0x432d84 loads 4 bytes from a1 (arg1 at entry) +0x204.
  The `lw` at 0x432d88 loads 4 bytes from [a1+516] +0x8.
  The `lbu` at 0x432d8c loads 1 byte from [[a1+516]+8] +0x0.
  The `lw` at 0x432d90 loads 4 bytes from a2 (arg2 at entry) +0x204.
  The `lw` at 0x432d94 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x432da0 loads 4 bytes from [a0+56] +0x14.
  The `lw` at 0x432db8 loads 4 bytes from [[a0+56]+20] +0x0.
  The `lw` at 0x432dbc loads 4 bytes from [a2+516] +0x8.
  The `lbu` at 0x432dc0 loads 1 byte from [[a2+516]+8] +0x0.
  The `lw` at 0x432dd4 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x432de0, `lw` at 0x432dec.
  The `lw` at 0x432df0 loads 4 bytes from a0 (arg0 at entry) +0x59b0.
  The `lw` at 0x432df4 loads 4 bytes from [a2+516] +0xc.
  The `lw` at 0x432df8 loads 4 bytes from [a1+516] +0xc.
  The `lw` at 0x432e18 loads 4 bytes from a0 (arg0 at entry) +0x59c0.
  The `jalr` at 0x432dfc calls (unknown callee) with a0=[[[a0+56]+20]], a1=[[a1+516]+12], a2=[[a2+516]+12], a3=[a0+22960], a5=[[[a0+56]+20]], a6=a0 at entry (arg0), a7=[a2+516].
  The `jalr` at 0x432e1c calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=?, a5=[[[a0+56]+20]], a6=a0 at entry (arg0), a7=[a2+516].
  The `bne` branch at 0x432db4 targets 0x432e18, is taken when at(=[[[a1+516]+8]]:1) != 0, and falls through when at(=[[[a1+516]+8]]:1) == 0.
  The `bne` branch at 0x432dc4 targets 0x432e18, is taken when v1(=[[[a2+516]+8]]:1) != 0, and falls through when v1(=[[[a2+516]+8]]:1) == 0.
  The `beq` branch at 0x432de4 targets 0x432e18, is taken when a3(?) == 0, and falls through when a3(?) != 0.
  The return at 0x432e10 has v0 = ?.
  The return at 0x432e2c has v0 = ret(?).

- `__OGLDRI_makeCurrent` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x432e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x432e40-0x432e5c (28 bytes).
  It occupies 28 bytes.
  The `lw` at 0x432e4c loads 4 bytes from abs 0x51ce28.
  The `bgezl` branch at 0x432e54 targets 0x432d80 and is always taken.

- `__OGLDRI_copyContext` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x432e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x432e80-0x432f1c (156 bytes).
  It occupies 156 bytes.
  The `lw` at 0x432e84 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x432e8c loads 4 bytes from [a0+56] +0x14.
  The `lw` at 0x432e9c loads 4 bytes from [[a0+56]+20] +0x0.
  The `lw` at 0x432ea8 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x432eb8, `lw` at 0x432ed0.
  The `lw` at 0x432ed4 loads 4 bytes from a1 (arg1 at entry) +0x59b0.
  The `lw` at 0x432ed8 loads 4 bytes from a0 (arg0 at entry) +0x59b0.
  The `lw` at 0x432f00 loads 4 bytes from a0 (arg0 at entry) +0x59cc.
  The `jalr` at 0x432edc calls (unknown callee) with a0=[[[a0+56]+20]], a1=[a0+22960], a2=[a1+22960], a3=a2 at entry (arg2), a5=a0 at entry (arg0), a6=a1 at entry (arg1).
  The `jalr` at 0x432f04 calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=a2 at entry (arg2), a3=a2 at entry (arg2), a5=a0 at entry (arg0), a6=a1 at entry (arg1).
  The `beq` branch at 0x432ec8 targets 0x432f00, is taken when at(?) == 0, and falls through when at(?) != 0.
  The return at 0x432ef0 has v0 = 0x1.
  The return at 0x432f14 has v0 = ret(?).
  The instructions from 0x432ef8 to 0x432efc are not reached by any path from the entry, and their branches are not listed.

- `__OGLDRI_forceCurrent` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x432f40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x432f40-0x432fe4 (164 bytes).
  It occupies 164 bytes.
  The `lw` at 0x432f44 loads 4 bytes from a0 (arg0 at entry) +0x38.
  The `lw` at 0x432f48 loads 4 bytes from [a0+56] +0x68.
  The `lw` at 0x432f4c loads 4 bytes from [[a0+56]+104] +0x8.
  The `lbu` at 0x432f50 loads 1 byte from [[[a0+56]+104]+8] +0x0.
  The `lw` at 0x432f68 loads 4 bytes from [a0+56] +0x14.
  The `lw` at 0x432f78 loads 4 bytes from [[a0+56]+20] +0x0.
  The `lw` at 0x432f80 loads 4 bytes from sym(__glXActiveScreens) +0x0.
  2 such `lw` accesses load 4 bytes from ?, including `lw` at 0x432f90, `lw` at 0x432f9c.
  The `lw` at 0x432fa0 loads 4 bytes from [[a0+56]+104] +0xc.
  The `lw` at 0x432fa4 loads 4 bytes from a0 (arg0 at entry) +0x59b0.
  The `lw` at 0x432fc8 loads 4 bytes from a0 (arg0 at entry) +0x59d0.
  The `jalr` at 0x432fa8 calls (unknown callee) with a0=[[[a0+56]+20]], a1=[[[a0+56]+104]+12], a2=[a0+22960], a3=a3 at entry (arg3), a4=[[[a0+56]+20]], a5=a0 at entry (arg0), a6=[[a0+56]+104].
  The `jalr` at 0x432fcc calls (unknown callee) with a0=a0 at entry (arg0), a1=a1 at entry (arg1), a2=sym(__glXActiveScreens), a3=a3 at entry (arg3), a4=[[[a0+56]+20]], a5=a0 at entry (arg0), a6=[[a0+56]+104].
  The `bne` branch at 0x432f74 targets 0x432fc8, is taken when at(=[[[[a0+56]+104]+8]]:1) != 0, and falls through when at(=[[[[a0+56]+104]+8]]:1) == 0.
  The `beq` branch at 0x432f94 targets 0x432fc8, is taken when v1(?) == 0, and falls through when v1(?) != 0.
  The return at 0x432fc0 has v0 = ?.
  The return at 0x432fdc has v0 = ret(?).

- `__glnop_TexBumpParameterivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441240-0x441248 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441240 has v0 = ?.

- `__glnop_TexBumpParameterfvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441280 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441280-0x441288 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441280 has v0 = ?.

- `__glnop_GetTexBumpParameterivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4412c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4412c0-0x4412c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4412c0 has v0 = ?.

- `__glnop_GetTexBumpParameterfvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441300 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441300-0x441308 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441300 has v0 = ?.

- `__glnop_GenFragmentShadersATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441340 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441340-0x441348 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441340 has v0 = 0x0.

- `__glnop_BindFragmentShaderATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441380 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441380-0x441388 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441380 has v0 = ?.

- `__glnop_DeleteFragmentShaderATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4413c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4413c0-0x4413c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4413c0 has v0 = ?.

- `__glnop_BeginFragmentShaderATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441400 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441400-0x441408 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441400 has v0 = ?.

- `__glnop_EndFragmentShaderATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441440 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441440-0x441448 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441440 has v0 = ?.

- `__glnop_PassTexCoordATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441480 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441480-0x441488 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441480 has v0 = ?.

- `__glnop_SampleMapATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4414c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4414c0-0x4414c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4414c0 has v0 = ?.

- `__glnop_ColorFragmentOp1ATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441500-0x441508 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441500 has v0 = ?.

- `__glnop_ColorFragmentOp2ATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441540-0x44154c (12 bytes).
  It occupies 12 bytes.
  The return at 0x441544 has v0 = ?.

- `__glnop_ColorFragmentOp3ATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441580-0x44158c (12 bytes).
  It occupies 12 bytes.
  The return at 0x441584 has v0 = ?.

- `__glnop_AlphaFragmentOp1ATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4415c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4415c0-0x4415c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4415c0 has v0 = ?.

- `__glnop_AlphaFragmentOp2ATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441600-0x44160c (12 bytes).
  It occupies 12 bytes.
  The return at 0x441604 has v0 = ?.

- `__glnop_AlphaFragmentOp3ATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441640-0x44164c (12 bytes).
  It occupies 12 bytes.
  The return at 0x441644 has v0 = ?.

- `__glnop_PNTrianglesiATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441680-0x441688 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441680 has v0 = ?.

- `__glnop_PNTrianglesfATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4416c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4416c0-0x4416c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4416c0 has v0 = ?.

- `__glnop_SetFragmentShaderConstantATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441700-0x441708 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441700 has v0 = ?.

- `__glnop_NewObjectBufferATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441740-0x441748 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441740 has v0 = 0x0.

- `__glnop_IsObjectBufferATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441780-0x441788 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441780 has v0 = 0x0.

- `__glnop_UpdateObjectBufferATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4417c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4417c0-0x4417c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4417c0 has v0 = ?.

- `__glnop_GetObjectBufferfvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441800-0x441808 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441800 has v0 = ?.

- `__glnop_GetObjectBufferivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441840-0x441848 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441840 has v0 = ?.

- `__glnop_DeleteObjectBufferATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441880-0x441888 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441880 has v0 = ?.

- `__glnop_ArrayObjectATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4418c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4418c0-0x4418c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4418c0 has v0 = ?.

- `__glnop_GetArrayObjectfvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441900-0x441908 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441900 has v0 = ?.

- `__glnop_GetArrayObjectivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441940-0x441948 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441940 has v0 = ?.

- `__glnop_VariantArrayObjectATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441980-0x441988 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441980 has v0 = ?.

- `__glnop_GetVariantArrayObjectfvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4419c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4419c0-0x4419c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4419c0 has v0 = ?.

- `__glnop_GetVariantArrayObjectivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x441a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x441a00-0x441a08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x441a00 has v0 = ?.

- `__glnop_VertexStream2sATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4424c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4424c0-0x4424c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4424c0 has v0 = ?.

- `__glnop_VertexStream2svATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442500 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442500-0x442508 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442500 has v0 = ?.

- `__glnop_VertexStream2iATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442540 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442540-0x442548 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442540 has v0 = ?.

- `__glnop_VertexStream2ivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442580 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442580-0x442588 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442580 has v0 = ?.

- `__glnop_VertexStream2fATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4425c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4425c0-0x4425c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4425c0 has v0 = ?.

- `__glnop_VertexStream2fvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442600 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442600-0x442608 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442600 has v0 = ?.

- `__glnop_VertexStream2dATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442640 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442640-0x442648 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442640 has v0 = ?.

- `__glnop_VertexStream2dvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442680 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442680-0x442688 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442680 has v0 = ?.

- `__glnop_VertexStream3sATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4426c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4426c0-0x4426c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4426c0 has v0 = ?.

- `__glnop_VertexStream3svATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442700 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442700-0x442708 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442700 has v0 = ?.

- `__glnop_VertexStream3iATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442740 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442740-0x442748 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442740 has v0 = ?.

- `__glnop_VertexStream3ivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442780 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442780-0x442788 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442780 has v0 = ?.

- `__glnop_VertexStream3fATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4427c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4427c0-0x4427c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4427c0 has v0 = ?.

- `__glnop_VertexStream3fvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442800 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442800-0x442808 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442800 has v0 = ?.

- `__glnop_VertexStream3dATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442840 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442840-0x442848 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442840 has v0 = ?.

- `__glnop_VertexStream3dvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442880 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442880-0x442888 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442880 has v0 = ?.

- `__glnop_VertexStream4sATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4428c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4428c0-0x4428c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4428c0 has v0 = ?.

- `__glnop_VertexStream4svATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442900 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442900-0x442908 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442900 has v0 = ?.

- `__glnop_VertexStream4iATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442940 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442940-0x442948 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442940 has v0 = ?.

- `__glnop_VertexStream4ivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442980 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442980-0x442988 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442980 has v0 = ?.

- `__glnop_VertexStream4fATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4429c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4429c0-0x4429c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4429c0 has v0 = ?.

- `__glnop_VertexStream4fvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442a00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442a00-0x442a08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442a00 has v0 = ?.

- `__glnop_VertexStream4dATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442a40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442a40-0x442a48 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442a40 has v0 = ?.

- `__glnop_VertexStream4dvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442a80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442a80-0x442a88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442a80 has v0 = ?.

- `__glnop_NormalStream3bATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442ac0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442ac0-0x442ac8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442ac0 has v0 = ?.

- `__glnop_NormalStream3bvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442b00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442b00-0x442b08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442b00 has v0 = ?.

- `__glnop_NormalStream3sATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442b40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442b40-0x442b48 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442b40 has v0 = ?.

- `__glnop_NormalStream3svATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442b80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442b80-0x442b88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442b80 has v0 = ?.

- `__glnop_NormalStream3iATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442bc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442bc0-0x442bc8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442bc0 has v0 = ?.

- `__glnop_NormalStream3ivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442c00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442c00-0x442c08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442c00 has v0 = ?.

- `__glnop_NormalStream3fATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442c40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442c40-0x442c48 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442c40 has v0 = ?.

- `__glnop_NormalStream3fvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442c80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442c80-0x442c88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442c80 has v0 = ?.

- `__glnop_NormalStream3dATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442cc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442cc0-0x442cc8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442cc0 has v0 = ?.

- `__glnop_NormalStream3dvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442d00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442d00-0x442d08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442d00 has v0 = ?.

- `__glnop_ClientActiveVertexStreamATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442d40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442d40-0x442d48 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442d40 has v0 = ?.

- `__glnop_VertexBlendEnviATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442d80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442d80-0x442d88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442d80 has v0 = ?.

- `__glnop_VertexBlendEnvfATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442dc0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442dc0-0x442dc8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442dc0 has v0 = ?.

- `__glnop_ElementPointerATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442e00 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442e00-0x442e08 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442e00 has v0 = ?.

- `__glnop_DrawElementArrayATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442e40 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442e40-0x442e48 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442e40 has v0 = ?.

- `__glnop_DrawRangeElementArrayATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x442e80 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x442e80-0x442e88 (8 bytes).
  It occupies 8 bytes.
  The return at 0x442e80 has v0 = ?.

- `__glnop_DrawBuffersATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x443080 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x443080-0x443088 (8 bytes).
  It occupies 8 bytes.
  The return at 0x443080 has v0 = ?.

- `__glnop_MapObjectBufferATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4430c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4430c0-0x4430c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4430c0 has v0 = 0x0.

- `__glnop_UnmapObjectBufferATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x443100 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x443100-0x443108 (8 bytes).
  It occupies 8 bytes.
  The return at 0x443100 has v0 = ?.

- `__glnop_StencilOpSeparateATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x443140 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x443140-0x443148 (8 bytes).
  It occupies 8 bytes.
  The return at 0x443140 has v0 = ?.

- `__glnop_StencilFuncSeparateATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x443180 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x443180-0x443188 (8 bytes).
  It occupies 8 bytes.
  The return at 0x443180 has v0 = ?.

- `__glnop_VertexAttribArrayObjectATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x4431c0 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x4431c0-0x4431c8 (8 bytes).
  It occupies 8 bytes.
  The return at 0x4431c0 has v0 = ?.

- `__glnop_GetVertexAttribArrayObjectfvATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x443200 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x443200-0x443208 (8 bytes).
  It occupies 8 bytes.
  The return at 0x443200 has v0 = ?.

- `__glnop_GetVertexAttribArrayObjectivATI` in `usr/X11R6/lib/modules/extensions/libGLcore.so` at 0x443240 (n32).
  Evidence grade: inferred.
  Exact binary: `usr/X11R6/lib/modules/extensions/libGLcore.so`.
  Range: 0x443240-0x443248 (8 bytes).
  It occupies 8 bytes.
  The return at 0x443240 has v0 = ?.
