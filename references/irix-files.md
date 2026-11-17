# IRIX files needed for the R300 and R350 reverse engineering

This lists the proprietary SGI and ATI files a reader copies from their own IRIX
install or media into a local `root/` directory. They are not tracked in source
control. Paths only: this repository holds no file contents.

`root/` mirrors the IRIX filesystem. The directories `r300_kernel/`, `libgl/`,
`xserver/`, `dri/`, `gfxtools/`, `diags/`, `ucode/` and `firmware/` hold relative
symlinks into `root/`; section 3 is the map to make them from. They are created on your machine and are not committed.

## 1. IRIX 6.5.30 (primary)

The Onyx4 graphics files belong to the IP35 (Origin 350 and Onyx 350 class) host
and to the graphics board named `VOYAGER` in the install's machine tags
(`GFXBOARD=VOYAGER`). Every path below was found in the file lists of the IRIX
6.5.30 Installation Tools and Overlays (1 of 3) disc, where its entry carries that
tag or sits in the IP35 kernel set, and each was extracted from that disc to
confirm it exists. Nothing here was checked on a running Onyx4 install: layouts
differ by release and option, and missing paths are normal.

```files
/usr/cpu/sysgen/IP35boot/fglrx.o
/usr/cpu/sysgen/IP35boot/is1.o
/usr/cpu/sysgen/IP35boot/vga.a
/usr/cpu/sysgen/IP35boot/vgastubs.a
/usr/cpu/sysgen/IP35boot/gfxs.a
/usr/cpu/sysgen/IP35boot/kernel.o
/usr/cpu/sysgen/IP35boot/pciio.o
/usr/cpu/sysgen/IP35boot/pciio_ppb.o
/usr/cpu/sysgen/IP35boot/pciiox.o
/usr/cpu/sysgen/IP35boot/pcibr.o
/usr/cpu/sysgen/IP35boot/pic.o
/usr/cpu/sysgen/IP35boot/xbridge.o
/usr/cpu/sysgen/IP35boot/xtalk.o
/usr/cpu/sysgen/IP35boot/xswitch.o
/usr/cpu/sysgen/IP35boot/hubspc.o
/var/sysgen/master.d/fglrx
/var/sysgen/master.d/is1
/var/sysgen/master.d/vga
/var/sysgen/master.d/vgastubs
/var/sysgen/master.d/pciio_ppb
/usr/gfx/arch/IP35VOYAGER/libGL.so
/usr/gfx/arch/IP35VOYAGER/libGLcore.so
/usr/gfx/arch/IP35VOYAGER/libgl.so
/usr/gfx/arch/IP35VOYAGER32/libGL.so
/usr/gfx/arch/IP35VOYAGER32/libGLcore.so
/usr/gfx/arch/IP35VOYAGER32/libgl.so
/usr/gfx/arch/IP35VOYAGER64/libGL.so
/usr/gfx/arch/IP35VOYAGER64/libGLcore.so
/usr/X11R6/bin/XFree86
/usr/X11R6/lib/modules/drivers/fglrx_drv.so
/usr/X11R6/lib/modules/extensions/fglrx_glx.so
/usr/X11R6/lib/modules/extensions/libglx.so
/usr/X11R6/lib/modules/extensions/libdri.so
/usr/X11R6/lib/modules/extensions/libGLcore.so
/usr/X11R6/lib/modules/irix/libfglrxdrm.so
/usr/X11R6/lib/modules/irix/libdrm.so
/usr/X11R6/lib/modules/libint10.so
/usr/X11R6/lib/modules/libvbe.so
/usr/X11R6/lib/modules/libscanpci.so
/usr/X11R6/lib/modules/libpcidata.so
/usr/X11R6/lib/modules/dri/fglrx_dri.so
/usr/X11R6/lib/modules/dri/fglrx_dri64.so
/usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so
/usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so
/etc/X11/gen-XF86Config
/etc/config/xf86config_autoconfig
/etc/config/xf86config_autoreplace
/etc/init.d/xf86config
/usr/gfx/gfxtopology
/usr/gfx/sgcombine
/usr/gfx/VOYAGER/bin/sg2flash
/usr/gfx/VOYAGER/bin/vpm
/usr/gfx/ucode/VOYAGER/sg2.bin
/usr/gfx/ucode/VOYAGER/sg3.bin
/usr/gfx/ucode/VOYAGER/sg3a.bin
/usr/diags/SG/bin/biosemu
/usr/diags/SG/bin/olsg
/usr/diags/SG/bin/olsgsys
/usr/diags/SG/data
/usr/share/catman/u_man/cat1/olsg.z
/usr/share/catman/u_man/cat1/olsgsys.z
/usr/cpu/firmware/ip35prom.img
```

### Where each group goes

| Group | Files | Location under `root/` |
|---|---|---|
| Kernel (`r300_kernel/`) | `fglrx.o` (the FireGL driver object), `is1.o`, `vga.a` (members extracted with `ar x`), `vgastubs.a`, `kernel.o`, and the PCI and crossbar objects the cards attach through: `pciio.o`, `pciio_ppb.o`, `pciiox.o`, `pcibr.o`, `pic.o`, `xbridge.o`, `xtalk.o`, `xswitch.o`, `hubspc.o` | `usr/cpu/sysgen/IP35boot/` |
| Kernel configuration (`r300_kernel/config/`) | the `master.d` files of the driver objects above | `var/sysgen/master.d/` |
| GL libraries (`libgl/o32/`, `libgl/n32/`, `libgl/n64/`) | `libGL.so`, `libGLcore.so`, `libgl.so` (IrisGL) per ABI | `usr/gfx/arch/IP35VOYAGER/`, `IP35VOYAGER32/`, `IP35VOYAGER64/` |
| X server and modules (`xserver/`) | `XFree86`, `fglrx_drv.so`, `fglrx_glx.so`, `libglx.so`, `libdri.so`, `libGLcore.so`, `libfglrxdrm.so`, `libdrm.so`, `libint10.so`, `libvbe.so`, `libscanpci.so`, `libpcidata.so`, and the configuration generator and start-up script | `usr/X11R6/`, `etc/` |
| Direct-rendering drivers (`dri/`) | `fglrx_dri.so`, `fglrx_dri64.so`, `SGIOMPdmx_dri.so`, `SGIOMPdmx_dri64.so` | `usr/X11R6/lib/modules/dri/` |
| Board tools (`gfxtools/`) | `sg2flash`, `vpm`, `sgcombine`, `gfxtopology` | `usr/gfx/VOYAGER/bin/`, `usr/gfx/` |
| Diagnostics (`diags/`) | `biosemu`, `olsg`, `olsgsys` and the `data/` directory of test inputs | `usr/diags/SG/` |
| Option ROM images (`ucode/VOYAGER/`) | `sg2.bin`, `sg3.bin`, `sg3a.bin` | `usr/gfx/ucode/VOYAGER/` |
| Firmware (`firmware/`) | `ip35prom.img` | `usr/cpu/firmware/` |
| Manual pages | `olsg.z`, `olsgsys.z`, compressed; unpack with `instigator extract --unpack` | `usr/share/catman/u_man/cat1/` |

Copy a file from a disc with `instigator extract --unpack --path <install path> <iso> <outdir>`.

## 2. Copying the files

From media: extract each path in the block above with the command just given, into one output
directory, then `mkdir -p root` and copy or link the extracted tree there, keeping the layout.
From a running install: tar the paths and unpack them under `root/` on your workstation.
Compare the blocks in section 3 against `root/` to see what is missing.

## 3. Symlinks

These blocks are the link map. `archives` lines are `ARCHIVE LINKDIR`: the
archive's members are unpacked inside `root/` and linked into `LINKDIR`. `links`
lines are `LINK TARGET`, relative to the repository root.

```archives
root/usr/cpu/sysgen/IP35boot/vga.a r300_kernel
```

```links
r300_kernel/fglrx.o root/usr/cpu/sysgen/IP35boot/fglrx.o
r300_kernel/is1.o root/usr/cpu/sysgen/IP35boot/is1.o
r300_kernel/vgastubs.a root/usr/cpu/sysgen/IP35boot/vgastubs.a
r300_kernel/gfxs.a root/usr/cpu/sysgen/IP35boot/gfxs.a
r300_kernel/kernel.o root/usr/cpu/sysgen/IP35boot/kernel.o
r300_kernel/pciio.o root/usr/cpu/sysgen/IP35boot/pciio.o
r300_kernel/pciio_ppb.o root/usr/cpu/sysgen/IP35boot/pciio_ppb.o
r300_kernel/pciiox.o root/usr/cpu/sysgen/IP35boot/pciiox.o
r300_kernel/pcibr.o root/usr/cpu/sysgen/IP35boot/pcibr.o
r300_kernel/pic.o root/usr/cpu/sysgen/IP35boot/pic.o
r300_kernel/xbridge.o root/usr/cpu/sysgen/IP35boot/xbridge.o
r300_kernel/xtalk.o root/usr/cpu/sysgen/IP35boot/xtalk.o
r300_kernel/xswitch.o root/usr/cpu/sysgen/IP35boot/xswitch.o
r300_kernel/hubspc.o root/usr/cpu/sysgen/IP35boot/hubspc.o
r300_kernel/config/fglrx root/var/sysgen/master.d/fglrx
r300_kernel/config/is1 root/var/sysgen/master.d/is1
r300_kernel/config/vga root/var/sysgen/master.d/vga
r300_kernel/config/vgastubs root/var/sysgen/master.d/vgastubs
r300_kernel/config/pciio_ppb root/var/sysgen/master.d/pciio_ppb
libgl/o32/libGL.so root/usr/gfx/arch/IP35VOYAGER/libGL.so
libgl/o32/libGLcore.so root/usr/gfx/arch/IP35VOYAGER/libGLcore.so
libgl/o32/libgl.so root/usr/gfx/arch/IP35VOYAGER/libgl.so
libgl/n32/libGL.so root/usr/gfx/arch/IP35VOYAGER32/libGL.so
libgl/n32/libGLcore.so root/usr/gfx/arch/IP35VOYAGER32/libGLcore.so
libgl/n32/libgl.so root/usr/gfx/arch/IP35VOYAGER32/libgl.so
libgl/n64/libGL.so root/usr/gfx/arch/IP35VOYAGER64/libGL.so
libgl/n64/libGLcore.so root/usr/gfx/arch/IP35VOYAGER64/libGLcore.so
xserver/XFree86 root/usr/X11R6/bin/XFree86
xserver/fglrx_drv.so root/usr/X11R6/lib/modules/drivers/fglrx_drv.so
xserver/fglrx_glx.so root/usr/X11R6/lib/modules/extensions/fglrx_glx.so
xserver/libglx.so root/usr/X11R6/lib/modules/extensions/libglx.so
xserver/libdri.so root/usr/X11R6/lib/modules/extensions/libdri.so
xserver/libGLcore.so root/usr/X11R6/lib/modules/extensions/libGLcore.so
xserver/libfglrxdrm.so root/usr/X11R6/lib/modules/irix/libfglrxdrm.so
xserver/libdrm.so root/usr/X11R6/lib/modules/irix/libdrm.so
xserver/libint10.so root/usr/X11R6/lib/modules/libint10.so
xserver/libvbe.so root/usr/X11R6/lib/modules/libvbe.so
xserver/libscanpci.so root/usr/X11R6/lib/modules/libscanpci.so
xserver/libpcidata.so root/usr/X11R6/lib/modules/libpcidata.so
dri/fglrx_dri.so root/usr/X11R6/lib/modules/dri/fglrx_dri.so
dri/fglrx_dri64.so root/usr/X11R6/lib/modules/dri/fglrx_dri64.so
dri/SGIOMPdmx_dri.so root/usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so
dri/SGIOMPdmx_dri64.so root/usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so
xserver/gen-XF86Config root/etc/X11/gen-XF86Config
xserver/xf86config_autoconfig root/etc/config/xf86config_autoconfig
xserver/xf86config_autoreplace root/etc/config/xf86config_autoreplace
xserver/xf86config root/etc/init.d/xf86config
gfxtools/gfxtopology root/usr/gfx/gfxtopology
gfxtools/sgcombine root/usr/gfx/sgcombine
gfxtools/sg2flash root/usr/gfx/VOYAGER/bin/sg2flash
gfxtools/vpm root/usr/gfx/VOYAGER/bin/vpm
ucode/VOYAGER/sg2.bin root/usr/gfx/ucode/VOYAGER/sg2.bin
ucode/VOYAGER/sg3.bin root/usr/gfx/ucode/VOYAGER/sg3.bin
ucode/VOYAGER/sg3a.bin root/usr/gfx/ucode/VOYAGER/sg3a.bin
diags/biosemu root/usr/diags/SG/bin/biosemu
diags/olsg root/usr/diags/SG/bin/olsg
diags/olsgsys root/usr/diags/SG/bin/olsgsys
diags/data root/usr/diags/SG/data
firmware/ip35prom.img root/usr/cpu/firmware/ip35prom.img
```

## 4. Not yet in scope

Other releases (none is surveyed yet),
the IP35 PROM as readable code (the image is not an ELF), and the `x_eoe` X11 libraries that are not
specific to the FireGL driver are not listed. Add a path here, with the reason, when a question needs it.
