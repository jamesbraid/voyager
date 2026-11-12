# Tier-2 routine readings, voyager round 3, batch 3

Role statements for the 25 routines in batch 3 of the tier-2 reading round, all in the fglrx DRI module at
`usr/X11R6/lib/modules/dri/fglrx_dri64.so`. Each statement is drawn from the rendered facts (registers,
calls, constants, branch targets, return values). The names come from the binary's symbols and are only
a hint; where the facts do not show what a routine computes, the entry says so. Every entry is graded
inferred.

- `__glGenericPickLineProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5adc60
      **Inferred.** A 2384-byte routine with 96 conditional branches and no direct calls. It loads 8-byte
      values from absolute addresses in the 0xc32xxx to 0xc35xxx range and stores them into the first
      argument's block at offsets 0xe710 through 0xe8f8, which fits a routine that fills per-primitive
      function slots. Five return sites; two return the constant 0x68af18. The line name is from the
      symbol, and the facts show no line-specific call.

- `__glCullFaceSetup` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ae5b0
      **Inferred.** A 232-byte routine with 14 branches and no calls. It reads the words at a0+0xadc,
      a0+0xae0, a0+0x3fbac, a0+2780 and a0+2784, compares them with the constants 0x404, 0x405, 0x408,
      0x900 and 0x901, and writes single-byte flags at a0+0x3fc28 through a0+0x3fc2c. Its two return
      sites give 0x1 (at 0x5ae638) and 0x0 (at 0x5ae670), so it reads as a yes-or-no check that
      culling applies; the facts do not show what the flags are used for.

- `__glGenericPickTriangleProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ae6a0
      **Inferred.** A 524-byte selector that first calls `__glCullFaceSetup` at 0x5ae6d8 with its four
      argument registers and branches on the returned value at 0x5ae6f0. It compares the words at a0+332,
      a0+2772 and a0+2776 with the constants 0x1c01, 0x1c02 and 0x1b02, and stores 8-byte values at
      a0+0xe5c0 through a0+0xe5e8. Its four return sites pass back the callee's value.

- `__glGenericPickRenderBitmapProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ae8b0
      **Inferred.** A 128-byte routine with three branches and no calls. It loads 8-byte values from the
      absolute addresses 0xc32c98 and 0xc32c90 and stores two 8-byte values at a0+0xe960 and a0+0xe968.
      It tests a field reached through the pointer at a0+276368 against the constant 3, so it probably
      picks between two function values for bitmap rendering. The facts do not settle that choice.

- `__glGenericPickClipProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ae930
      **Inferred.** A 72-byte routine with one branch, which compares the word at a0+3360 with 0x1d00.
      It loads 8-byte values from the absolute addresses 0xc35e70, 0xc35f20 and 0xc35f28 and stores them
      at a0+0xe8e8 and a0+0xe5f0. Both return sites give the constant 0x68a248, so the routine returns
      the same value whichever path it takes.

- `__glGenericPickCalcTextureProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5ae980
      **Inferred.** A 692-byte routine with 53 branches and no direct calls. It loads 8-byte values from the
      absolute addresses 0xc32390 through 0xc323d0 and stores 20 values through pointers whose base the
      facts do not name. Its single return site gives 0x68a1f8 or an unknown value. The texture-calc name
      is from the symbol; the facts show table filling rather than any texture arithmetic.

- `__glGenericPickTextureUnitEnables` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5aec40
      **Inferred.** A 1152-byte routine with 42 branches. It calls `__glIsCubeMapTextureConsistent` at
      0x5aee7c and `__glIsTextureConsistent` at 0x5aef1c, 0x5aefa8, 0x5af040 and 0x5af09c, passing a0 and
      the table value 0x40000 in a5, and branches on the returned values. Its only context store is one
      byte at a0+0x54975. The consistency-check callees suggest it enables texture units only when their
      bindings agree, but the facts show the call sites, not the callees' logic.

- `__glGenericPickTextureProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5af0c0
      **Inferred.** A 2664-byte routine with 194 branches, the largest of the texture selectors. It makes
      three indirect calls whose callees the facts do not name, at 0x5af10c, 0x5af188 and 0x5af6ac. The call
      at 0x5af188 passes the constant 0x2601 as a7 and one of 0x1, 0x5caee0 or 0x5caf40 as a6. Its only
      context store is one word at a0+0x3e59c. The facts show dispatch through indirect calls, not what
      the callees do.

- `__glGenericPickFogProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5afb30
      **Inferred.** A 136-byte routine with five branches and no calls. It reads the byte flags at
      a0+0x54978 and a0+0x54979, the words at a0+0xf58 and a0+0xe00, and compares the word at a0+3584 with
      0x2601. It stores 8-byte values loaded from the absolute addresses 0xc32400 through 0xc32410 at
      a0+0xeb70 through a0+0xeb80. Both return sites give 0x689048. The fog name is from the symbol; the
      facts show gated slot filling.

- `__glGenericPickBufferProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5afbc0
      **Inferred.** A 1804-byte routine with 100 branches and no direct calls. It loads eight absolute
      table values and stores into eight context offsets between 0x40128 and 0x40188, for example 0x40158
      and 0x40160 and 0x40170. Its two return sites give 0x1. The buffer name is from the symbol; the facts
      show a selector that fills slots under context-word tests.

- `__glGenericPickPixelProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b02d0
      **Inferred.** A 2540-byte routine with 118 branches and no direct calls. It stores into 22 distinct
      context offsets, among them the bytes at a0+0x3fc30 through 0x3fc33 and the words at 0xe340 and
      0xebf8, and loads 8-byte values from absolute table addresses. Its return sites are 0x589060 and an
      unknown value. The pixel name is from the symbol; the facts show a long selector that writes flags
      and slots.

- `__glGenericPickDepthProcs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b0cc0
      **Inferred.** A 224-byte routine with five branches. It calls `__glValidateZCount` at 0x5b0d08 with
      a0+273648 as its first argument and 0x40000 as its third, then makes one indirect call at 0x5b0d50
      whose arguments come from the words at a0+273740, a0+273728 and a0+273664. Its returns are the value
      [a0+273740] plus one of -0x200 to -0x1e8 at 0x5b0d70, and 0x0 at 0x5b0d90. The facts do not show the
      flags the validation sets.

- `__glGenericPickPhase1Procs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b0da0
      **Inferred.** A 1052-byte routine with 53 branches. It makes one indirect call at 0x5b0dd8 with its
      four argument registers, calls `__glGenericPickTextureUnitEnables` at 0x5b104c, and reads the word at
      a0+0x3fbac. The call to the texture-unit selector fits a first-phase setup step, but the facts do not
      show the other branches' effects, and the return value is unsettled.

- `__glGenericPickPhase2Procs` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b11c0
      **Inferred.** A 1748-byte dispatcher. It calls the sibling selectors `__glGenericPickTextureProcs` at
      0x5b147c, `__glGenericPickCalcTextureProcs` at 0x5b1488, `__glGenericPickFogProcs` at 0x5b14a0 and
      `__glGenericPickClipProcs` at 0x5b14b8, and reaches `__glGenericPickBlendProcs` [0x607410] and
      `__glGenericPickParameterClipProcs` [0x729250] through jalr at 0x5b1494 and 0x5b14ac. It also calls
      `__glValidateLighting` at 0x5b1464 and `__glValidateAlphaTest` at 0x5b14dc, and makes 24 indirect calls
      with no named callee. It stores into four words at a0+0x3de48 through a0+0x3de54.

- `__glProcessSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b18c0
      **Inferred.** A 272-byte routine with a counted loop. The count is the word at a0+59140, and the loop
      walks 8-byte entries from a0+0x10000 onward, calling through two indirect calls at 0x5b1928 and
      0x5b1984 whose callees the facts do not name. It reads and writes the flag byte at a0+0x3fc18 and
      returns 0 at 0x5b19c0. The span name is from the symbol.

- `__glProcessReplicateSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b19d0
      **Inferred.** A 2680-byte routine with 55 branches and six indirect calls with no named callee, at
      0x5b1a60, 0x5b1bf0, 0x5b1d80, 0x5b1e4c, 0x5b1fd4 and 0x5b214c. It writes the flag bytes at a0+0x3fc18
      and a0+0x3fc20 and has four return sites. The replicate name is from the symbol; the facts show the
      loops and calls, not the replication itself.

- `__glStippleSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b25a0
      **Inferred.** A 344-byte routine with eight branches and no calls. It reads the byte at a0+0x7ea8 and
      the words at a0+0x3f038, a0+0x3f03c, a0+0x3f270, a0+0x7604 and a0+0x761c, stores seven words at
      offsets 0x4 through 0x1c of a table base, and sets the flag at a0+0x3fc18. It returns 1 at 0x5b26cc and
      0x5b26f0. The stipple name is from the symbol.

- `__glStippleStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b2700
      **Inferred.** A 336-byte routine with the same context reads as `__glStippleSpan` at 0x5b25a0 (a0+0x7ea8,
      a0+0x3f038, a0+0x3f03c, a0+0x3f270, a0+0x7604, a0+0x761c) and the same flag store at a0+0x3fc18. Its
      table update is smaller, two words at offsets 0x4 and 0x8 and 0xc, and it returns 0 at 0x5b2824 and
      1 at 0x5b2848. The facts show a close sibling of the stipple routine, not a settled role.

- `__glAlphaTestSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b2850
      **Inferred.** A 644-byte routine with 30 branches and no calls. Its only context store is the flag byte
      at a0+0x3fc18, and it has three return sites. The alpha-test name is from the symbol; the facts show
      only branch structure and the flag, so the test it performs is unsettled.

- `__glAlphaTestStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b2ae0
      **Inferred.** A 724-byte routine with 35 branches and no calls. It stores nothing through the first
      argument register, and its two return sites give 0 at 0x5b2d64 and 1 at 0x5b2d88. The facts show test
      branches and a 0/1 result, not what is tested.

- `__glStencilTestSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b2dc0
      **Inferred.** A 556-byte routine with 16 branches and two indirect calls at 0x5b2ef0 and 0x5b2f2c. Both
      take a0+273432 as the base, and both pass the word at a0+258108 as their third argument, so the callee
      comes from the context. It writes the flag at a0+0x3fc18 and has two return sites. The stencil name is
      from the symbol.

- `__glStencilTestStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b2ff0
      **Inferred.** A 612-byte routine with 16 branches and two indirect calls at 0x5b3128 and 0x5b31a4. Both
      pass a0+273432 as the base and the word at a0+258108 as the third argument, as the non-stippled stencil
      routine at 0x5b2dc0 does. It stores nothing through the first argument register. The facts show the
      shape, not the test.

- `__glDepthTestSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3260
      **Inferred.** A 640-byte routine with 16 branches and one indirect call at 0x5b3400. The call takes
      a0+273648 as its base and the word at a0+258108 as its third argument, so it reaches through a different
      context slot than the stencil variants. It writes the flag at a0+0x3fc18 and has two return sites.

- `__glDepthTestStippledSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b34e0
      **Inferred.** A 652-byte routine with 15 branches and one indirect call at 0x5b36ac, through a0+273648
      with the word at a0+258108 as the third argument, as in the non-stippled depth routine at 0x5b3260. It
      stores nothing through the first argument register and returns 0 or 1.

- `__glDepthTestStencilSpan` in `usr/X11R6/lib/modules/dri/fglrx_dri64.so` at 0x5b3770
      **Inferred.** An 800-byte routine with 17 branches and five indirect calls at 0x5b3910, 0x5b3930,
      0x5b3974, 0x5b398c and 0x5b39ac. Each takes a0+273432 or a0+273648 as its base and the word at
      a0+258108 as its third argument. It writes the flag at a0+0x3fc18 and has two return sites. The name
      suggests a combined depth and stencil test, which the facts do not confirm.
