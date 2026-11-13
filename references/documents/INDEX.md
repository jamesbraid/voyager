# Public sources

Public documents and code this workspace reads, by title and public URL only. Nothing here is a copy. A claim that rests on one of them cites it by title and section in the owning chapter.

## AMD register and acceleration references

- Radeon R3xx 3D Register Reference Guide, revision 1.0, 25 February 2008 (AMD, for the R300 family; file R3xx_3D_Registers.pdf; 99 pages, no part number on the title page; 207 registers of the 3D block with offset, width, access and field tables; matched in [../amd-register-match.md](../../devices/display/amd-register-match.md)): https://xorg.freedesktop.org/docs/AMD/old/R3xx_3D_Registers.pdf
- Radeon R5xx Acceleration, revision 1.5, 8 June 2010 (AMD; the 2D and command-processor chapters describe the R5xx generation, a later chip than the R300 and R350): https://xorg.freedesktop.org/docs/AMD/old/R5xx_Acceleration_v1.5.pdf
- M56 Register Reference Guide, revision 0.03o, part RRG-216M56-03oOEM, 2007 (AMD; an R5xx-generation register reference including the 3D block, a later chip than the R300 and R350; 460 pages, registers given as aperture and offset; matched in [../amd-register-match.md](../../devices/display/amd-register-match.md)): https://xorg.freedesktop.org/docs/AMD/old/RRG-216M56-03oOEM.pdf

## Open-source trees (git submodules)

Each tree is a pinned submodule under `references/code/`, fetched shallow. A claim cites the file and the pin.

- Linux 2.6.30, tag `v2.6.30` (commit 07a2039b8eb0), `references/code/linux-2.6.30/`: the last release with the user-mode-setting radeon DRM, `drivers/gpu/drm/radeon/r300_cmdbuf.c`, `radeon_cp.c`, `radeon_microcode.h` and `r300_reg.h`. The current `references/code/linux/` pin dropped the first three. https://github.com/torvalds/linux
- libdrm 2.4.134, tag `libdrm-2.4.134` (commit e984d448b8b1), `references/code/libdrm/`: the user-space radeon library (`radeon/`) and `include/drm/radeon_drm.h`. https://gitlab.freedesktop.org/mesa/drm
- libdrm 2.4.0, tag `libdrm-2.4.0` (commit 458e2d5bc5f9), `references/code/libdrm-2.4.0/`: the DRM kernel sources the project still kept then, `shared-core/` and `linux-core/` with `r300_cmdbuf.c`, `r300_reg.h`, `radeon_cp.c`, `radeon_microcode.h`, and `bsd-core/` for the BSD ports. https://gitlab.freedesktop.org/mesa/drm
- Mesa 7.11.2, tag `mesa-7.11.2` (commit ea72e3cda842), `references/code/mesa-7.11.2/`: the classic r300 DRI driver (`src/mesa/drivers/dri/r300/`, including its shader compiler) beside the Gallium driver. Removed from current Mesa. https://gitlab.freedesktop.org/mesa/mesa
- xf86-video-ati 6.14.6, tag `xf86-video-ati-6.14.6` (commit 008eb209d506), `references/code/xf86-video-ati/`: the X.Org radeon driver in its last release with both user-mode and kernel mode setting: `src/radeon_driver.c`, `radeon_reg.h`, `radeon_bios.c`, `radeon_atombios.c`, `src/AtomBios/`. https://gitlab.freedesktop.org/xorg/driver/xf86-video-ati
- xf86-video-ati at tag `XORG-6_8_2` (commit 87f2c13a543e), `references/code/xf86-video-ati-6.8.2/`: the monolithic ATI driver of the X.Org 6.8 era, descended from the XFree86 4.x radeon driver. https://gitlab.freedesktop.org/xorg/driver/xf86-video-ati
- xf86-video-radeonhd 1.3.0, tag `1.3.0` (commit 8cbff7bfa1201), `references/code/xf86-video-radeonhd/`: the driver written from AMD's register documents for R5xx and later, with its AtomBIOS parser in `src/AtomBios/` and the `r5xx_*` 2D and 3D code. A later generation than the R300 and R350. https://gitlab.freedesktop.org/xorg/driver/xf86-video-radeonhd
- xf86-video-avivo, branch head (commit d09036f2d2bf), `references/code/xf86-video-avivo/`: an early register-level driver for R5xx, and `avivotool/`, a register dump and BIOS table tool. https://gitlab.freedesktop.org/xorg/driver/xf86-video-avivo
- AtomDis, branch head (commit 1292b9ea335c), `references/code/atomdis/`: a disassembler and data-structure dumper for AtomBIOS images (GitHub mirror of the freedesktop original). https://github.com/gpuhw/AtomDis
- FreeBSD 8.4.0, tag `release/8.4.0` (commit 4493d04f4b9), `references/code/freebsd/`: `sys/dev/drm/` with the legacy radeon DRM (`r300_cmdbuf.c`, `r300_reg.h`, `radeon_cp.c`). https://github.com/freebsd/freebsd-src
- NetBSD source tree (commit 0747dc050541), `references/code/netbsd/`: `sys/external/bsd/drm/dist/shared-core/` with the same legacy radeon DRM. Pin shared with the sibling repositories. https://github.com/NetBSD/src
- OpenBSD source tree (commit 7011342f6a72), `references/code/openbsd/`: `sys/dev/pci/drm/radeon/` with the kernel-mode-setting `r300.c` port. Pin shared with the sibling repositories. https://github.com/openbsd/src
- Haiku, branch head (commit 55e2e16e044), `references/code/haiku/`: `src/add-ons/accelerants/radeon/` and the matching kernel driver, a separate implementation for R100 to R300. https://github.com/haiku/haiku

## Sources recorded by URL only

None of these has a usable git remote, or the remote is gone. Nothing is vendored.

- radeontool 1.6.3 (register and BIOS table tool; its `avivotool` is also in the `references/code/xf86-video-avivo/` submodule): https://cgit.freedesktop.org/~airlied/radeontool/ and tarballs at https://people.freedesktop.org/~airlied/radeontool/
- radeondemo, a small command-stream test program for radeon chips: https://cgit.freedesktop.org/~airlied/radeondemo/
- The r300 project (r300_demo, a command-stream demonstration; r300_driver, an experimental DRM and 3D driver; glxtest, a command-stream pretty-printer; hw_script): CVS only, https://r300.sourceforge.net/ and https://r300.sourceforge.net/cvs.php
- GATOS (the ati.2 enhanced XFree86 driver, whose code was later merged into X.Org, and the video-capture kernel modules): CVS only, https://gatos.sourceforge.net/
- DRI wiki, R300 page, the reverse-engineering tool list (iba, glxtest, valgrind-mmt) and the shader compiler notes: https://dri.freedesktop.org/wiki/R300/, https://dri.freedesktop.org/wiki/ReverseEngineering/, https://dri.freedesktop.org/wiki/R300Compiler/
- XFree86 4.x radeon driver as shipped by XFree86 itself: its CVS is not mirrored on a git remote we could find. The X.Org 6.8 tag above is the nearest public descendant.

## SGI documents

- Silicon Graphics Onyx4 UltimateVision User's Guide, 007-4634-002: https://irix7.com/techpubs/007-4634-002.pdf
- Silicon Graphics UltimateVision Graphics Porting Guide, 007-4297-001 (public URL not recorded)
- Silicon Graphics Onyx4 UltimateVision Start Here Guide, 007-4667 (revision and public URL not recorded)
- SGI Scalable Graphics Compositor User's Guide, 007-4602-002: https://www.infania.net/misc1/sgi_techpubs/techpubs/007-4602-002.pdf
- SGI OpenGL Multipipe User's Guide, 007-4318-015: https://irix7.com/techpubs/007-4318-015.pdf
- OpenGL on Silicon Graphics Systems, 007-2392-003: https://irix7.com/techpubs/007-2392-003.pdf

The SGI entries were found by title search; their contents have not been read for this workspace yet.

## Public drivers

- Linux kernel, radeon DRM driver for R3xx: `drivers/gpu/drm/radeon/` (`r300.c`, `r300_reg.h`, `r300d.h`, `reg_srcs/r300`): https://github.com/torvalds/linux (submodule `references/code/linux/`)
- Mesa, r300 Gallium driver and shader compiler: `src/gallium/drivers/r300/`, `include/pci_ids/r300_pci_ids.h`: https://gitlab.freedesktop.org/mesa/mesa (submodule `references/code/mesa/`; the classic r300 driver is in `references/code/mesa-7.11.2/`)
- Linux kernel, SGI SN2 PCI and crossbar headers as of Linux 2.6.5 (`include/asm-ia64/sn/pci/pciio.h`, `pci/bridge.h`, `pci/pic.h`, `xtalk/xwidget.h`), for the IRIX-derived `pciio_*` constants and the Bridge and PIC register layout: https://git.kernel.org/pub/scm/linux/kernel/git/tglx/history.git (tag v2.6.5)
- linux-firmware, `radeon/R200_cp.bin`, `radeon/R300_cp.bin` and `radeon/R420_cp.bin` (command-processor microcode images, compared, not copied): https://gitlab.com/kernel-firmware/linux-firmware
- VESA BIOS Extension (VBE) Core Functions Standard, for function 0x4f02/0x4f03 and mode 0x107 (version and public URL not recorded)
- Linux kernel, radeon DRM driver, legacy ATI BIOS tables: `drivers/gpu/drm/radeon/radeon_combios.c`, `radeon_bios.c` and `radeon_reg.h`: https://github.com/torvalds/linux (`radeon_combios.c` read at tag `v6.12`, the file at `https://raw.githubusercontent.com/torvalds/linux/v6.12/drivers/gpu/drm/radeon/radeon_combios.c`, for the undocumented-table check in option-roms.md)
- Linux kernel, `include/uapi/video/uvesafb.h` (the VESA information block layout): https://github.com/torvalds/linux
- EDK2, `MdePkg/Include/IndustryStandard/Pci22.h` (PCI expansion ROM header and PCI data structure, quoting the PCI Local Bus Specification 2.2): https://github.com/tianocore/edk2
- The PCI ID database, vendor 0x1002 entries: https://raw.githubusercontent.com/pciutils/pciids/master/pci.ids
