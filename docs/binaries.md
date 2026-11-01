# Shipped binaries

One entry per file in the install set, in the order of [the binaries table](inventory/binaries.tsv). Each entry names the file by its install path and says what the file is and what was read in it. Counts and section facts come from `readelf` on the file as shipped. "Defined" means a symbol with a value in the file; "undefined" means a name the file imports. A role built from names and from the calls listed here is **inferred**. A fact read from the whole file, or from a routine's whole body, is **established**. Routine addresses are `.text` offsets in the named object unless the entry says otherwise.


## X server and its modules

- `etc/X11/gen-XF86Config` (Perl script, 889 lines, 28551 bytes): **inferred** from the lines read.
  The script runs the X server with the scan option at line 72 and parses the PCI list it prints.
  Before it writes anything it makes default timing files under `/var/X11/Xvc/`.
  Each pipe gets a `SG2_<n>_TimingTable` at line 104, holding `1280x1024_60` and VC index 1.
  Each compositor that `/sbin/hinv` reports gets a `SC2_<n>_TimingTable` (line 52).
  It writes `/etc/X11/XF86Config-4` with one device section per card, `Driver "fglrx"` at line 721.
  The screens are chained by the `Layout` routine at line 854.
  An old file is renamed to `.O` when a PCI ID it lists is gone, and the new file gets `.N` when only the device count changed (lines 128 to 157).

- `etc/config/xf86config_autoconfig` (3 bytes, the text `on` and a newline): **established** from the whole file.
  `etc/init.d/xf86config` asks `/sbin/chkconfig` for this flag before it runs the generator.
  With `on`, the boot script regenerates the X configuration.

- `etc/config/xf86config_autoreplace` (4 bytes, the text `off` and a newline): **established** from the whole file.
  `etc/init.d/xf86config` reads this flag before it moves `.N` over the live configuration.
  With `off`, the regenerated file stays beside the old one under the `.N` name.

- `etc/init.d/xf86config` (764 bytes, Bourne shell): **established** from the whole script.
  It sets the configuration paths and runs `/etc/X11/gen-XF86Config` when the autoconfig flag is on.
  The two flags it reads are `xf86config_autoconfig` and `xf86config_autoreplace`.
  When the autoreplace flag is on and the `.N` file is readable, it moves the old file to `.O` and the new one into place.
  Its verbose message names `/etc/X11/XF86Config.O`, which is not the name the variable sets.

- `usr/X11R6/bin/XFree86` (N32 MIPS-III executable, 2569788 bytes, stripped): **inferred** to be the X server core.
  `readelf` shows 2924 defined function symbols in the dynamic table and 237 undefined names.
  Its `NEEDED` entries are `libm.so`, `libdl.so` and `libc.so.1`, and it has no `.debug_info` section.
  Its strings include `-scanpci`, with the help text "execute the scanpci module and exit".
  The PCI scan that `etc/X11/gen-XF86Config` reads is produced by the `libscanpci.so` module this server loads.

- `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri.so` (N32 shared object, 76372 bytes, not stripped): **inferred** to be a direct-rendering screen driver for the multipipe build.
  It defines 81 functions, among them `__driCreateScreen` and `omp_initGLInterface`.
  It also exports `omp_initGLXInterface` and `OMPGetCurrentReadDrawable`.
  It carries its own copy of 76 `drm*` client routines.
  It imports 159 names, including the extension entry points `XShmPutImage` and `XSyncCreateCounter`.
  Its `NEEDED` entries are `libc.so.1` and `libGL.so`.

- `usr/X11R6/lib/modules/dri/SGIOMPdmx_dri64.so` (ELF64 MIPS-III shared object, 82088 bytes): **established** that its 81 defined function names are identical to those of the N32 build of this module.
  The comparison was of the two sorted lists.
  It imports 159 names and lists the same two `NEEDED` entries.
  **Inferred** that it is the 64-bit build of the same driver; the 5716 bytes of difference are the wider words of the same code and data.

- `usr/X11R6/lib/modules/dri/fglrx_dri.so` (N32 shared object, 12888480 bytes, not stripped): **inferred** to be ATI's direct-rendering OpenGL driver for the Radeon family.
  `readelf` counts 9749 defined function symbols and 133 defined objects.
  It has 232 undefined names, and its `NEEDED` entries are `libm.so`, `libc.so.1`, `libGL.so` and `libX11.so`.
  Of the exported names, 1256 contain `R300` and 1232 contain `R200`.
  978 start with `gl`, and 45 start with `firegl` or `FIREGL`.

- `usr/X11R6/lib/modules/dri/fglrx_dri64.so` (ELF64 shared object, 14223320 bytes): **established** that its 9749 defined function names are identical to those of `fglrx_dri.so`.
  The comparison was of the two sorted lists.
  It has 231 undefined names where the N32 build has 232, and the same four `NEEDED` entries.
  **Inferred** that it is the 64-bit build of the same driver.

- `usr/X11R6/lib/modules/drivers/fglrx_drv.so` (N32 shared object, 700708 bytes): **inferred** to be the X server driver module for the card.
  It exports 178 defined functions and 34 objects, and imports 364 names.
  Its only `NEEDED` entry is `libc.so.1`.
  The exports include 13 `vfmt*` routines that read format files for three board families, such as `vfmtFindSG2FormatFile`.
  They also include 15 `SDB*` symbol-database routines and 15 `is1*` routines for the image-sync option, such as `is1Attach`.
  Overlay and stereo entries include `FIREGL_InitOverlay` and `QBS_EnableStereo`.
  66 exports carry the `R200` prefix, for example `R200Probe`, and none carry `R300`.

- `usr/X11R6/lib/modules/extensions/fglrx_glx.so` (N32 shared object, 12841224 bytes): **inferred** to be the server-side GLX extension of the same driver.
  It defines 9703 functions and 134 objects, and imports 113 names.
  It has no `NEEDED` entries.
  It exports 974 names that start with `gl`, 1256 that contain `R300` and 1232 that contain `R200`.
  None of its exports start with `firegl`.

- `usr/X11R6/lib/modules/extensions/libGLcore.so` (N32 shared object, 2002584 bytes): **inferred** to be the X server's software OpenGL core for indirect rendering.
  It defines 2868 functions and 31 objects, and imports 23 names.
  Its only `NEEDED` entry is `libc.so.1`.
  It exports 423 names that start with `gl` and 15 that start with `__glX`.
  No export contains `R300` or `R200`.

- `usr/X11R6/lib/modules/extensions/libdri.so` (N32 shared object, 78616 bytes): **inferred** to be the server half of the DRI extension.
  It defines 64 functions, of which 47 start with `DRI`, for example `DRIScreenInit` and `DRIQueryVersion`.
  Another 14 start with `XF86SerDRI`.
  It imports 71 names, and its only `NEEDED` entry is `libc.so.1`.

- `usr/X11R6/lib/modules/extensions/libglx.so` (N32 shared object, 721524 bytes): **inferred** to be the GLX protocol extension of the X server.
  It defines 879 functions, 824 of them starting with `__glX`.
  It imports 397 names.
  Its exports include `GlxExtensionInit` and `GlxInitVisuals`.
  It also exports `GlxSetFBConfigs` and `GlxSetVisualConfigs`, and the `SwapBarrierGone` and `SwapGroupGone` notices.

- `usr/X11R6/lib/modules/irix/libdrm.so` (N32 shared object, 58812 bytes): **inferred** to be the DRM client code the X modules link against.
  It defines 87 functions: 16 `drmAgp*`, 7 `drmHash*` and 9 `drmSL*`.
  It also exports the map and context calls `drmMap`, `drmOpen` and `drmAddMap`.
  It imports 33 names, 31 of them `xf86*` wrappers around the server's file and memory calls.
  Those wrappers include `xf86open`, `xf86ioctl` and `xf86mmap`.
  Its strings include `/dev/dri`.

- `usr/X11R6/lib/modules/irix/libfglrxdrm.so` (N32 shared object, 31128 bytes): **inferred** to be the card's kernel-interface code.
  All 45 of its defined functions start with `firegl_`.
  They include `firegl_InitDRM`, `firegl_InitCP` and `firegl_PM4Alloc`.
  It imports 12 names: `drmMap`, `drmUnmap`, `drmMalloc` and `drmFree`.
  It also imports six `xf86` wrappers for I/O and strings, and `sginap`, which is the IRIX sleep primitive.

- `usr/X11R6/lib/modules/libint10.so` (N32 shared object, 374964 bytes): **inferred** to be the public x86 emulator the server uses for real-mode BIOS calls.
  It defines 456 functions and 19 objects, and imports 56 names.
  Its only `NEEDED` entry is `libc.so.1`.
  Its exports include `X86EMU_exec` and `X86EMU_halt_sys`.
  The six memory accessors `Mem_rb` to `Mem_ww` are exported too, as are `bios_checksum` and `MapCurrentInt10`.
  The emulator names are the same as those the `vga.a` members define.

- `usr/X11R6/lib/modules/libpcidata.so` (N32 shared object, 86924 bytes): **established** from the symbol table that the module defines one function, `xf86SetupPciData`, 48 bytes long at address 0x401a00.
  It also defines one 12-byte object, `pcidataModuleData`, and imports no names.
  **Inferred** that the module carries the PCI vendor and device name table the scan output uses.

- `usr/X11R6/lib/modules/libscanpci.so` (N32 shared object, 157684 bytes): **established** from the symbol table that it exports four functions.
  They are `xf86SetupScanPci`, `xf86DisplayPCICardInfo`, `xf86FindPCIClassInCardList` and `xf86FindPCIClassInDeviceList`.
  It also exports a 12-byte object, `scanpciModuleData`, and imports three names: `xf86scanpci`, `xf86EnableIO` and `xf86MsgVerb`.
  **Inferred** that it is the module the server loads for `-scanpci`, since the server's string table names it.

- `usr/X11R6/lib/modules/libvbe.so` (N32 shared object, 26052 bytes): **inferred** to be the VESA BIOS Extensions wrapper.
  It defines 17 functions named `VBE*` or `vbe*`, for example `VBEGetVBEInfo` and `VBESetVBEMode`.
  It also exports `vbeDoEDID`.
  It imports 23 names from the emulator, among them `xf86InitInt10` and `xf86ExecX86int10`.
  Its other imports include `xf86Int10AllocPages` and `xf86InterpretEDID`.

## Board firmware

- `usr/cpu/firmware/ip35prom.img` (1480360 bytes, binary data): **established** that the eight bytes at offset 0x40 spell the ASCII text `JFKSWCSM`.
  Its strings include `ip35prom` and `ip27conf`.
  They also include `init_klcfg_vgagfx: Cannot add component. Node %d`.
  Router messages include `Set up Router: index %d, nic 0x%lx, meta %d, floc %d`.
  The router check prints `check_router_cfg: nasid %d is_voyager %d check_cfg = %d`.
  **Inferred** that this is the IP35 PROM that builds the node and router configuration.
  It also adds a VGA graphics component to the hardware graph, and its `is_voyager` flag tests for the VOYAGER board tag.

## Host and board kernel objects

- `usr/cpu/sysgen/IP35boot/fglrx.o` (REL, 567504 bytes): **established** that it defines 308 global functions and 25 objects, and imports 145 names.
  `fglrx_init` is the routine at address 0x84, 1172 bytes long.
  It calls `kmem_zalloc` at addresses 0xe8 and 0x114, and `find_fglrx_pipe` at 0x1e0.
  It calls `GfxRegisterBoard` at 0x264 and `init_mutex` at 0x344.
  It calls `mrlock_init` at 0x388 and 0x3b0, and `kmem_zone_init` at 0x420.
  Its only branch-likely site is 0x3f4, and its return path from 0x4e0 leaves through `pciio_iterate` at 0x510.
  **Inferred** that the object is ATI's FireGL kernel driver, the role `docs/kernel-attach.md` assigns it.

- `usr/cpu/sysgen/IP35boot/hubspc.o` (REL, 13056 bytes): **established** that it defines 13 global functions and imports 24 names.
  Its exports include `hubspc_open`, `hubspc_ioctl` and `hubspc_map`.
  It also exports `cpuprom_attach` and `prominfo_nodeget`.
  `hubspc_init` at address 0x354 (60 bytes) makes three `hubdev_register` calls.
  Those calls pass `mem_refcnt_attach`, `cpuprom_attach` and `l1_attach`.
  It then calls `spinlock_init` on `cpuprom_spinlock`.
  **Inferred** that it is the hub-side PROM and memory-count driver, which publishes its device nodes through `hwgraph_char_device_add`.

- `usr/cpu/sysgen/IP35boot/is1.o` (REL, 88232 bytes): **established** that it defines 40 global functions and imports 70 names.
  The imports include `FGLRXReadRegister`, `FGLRXWriteRegister` and `fglrx_intr_list`.
  Those are the register and interrupt entries of `fglrx.o`.
  `is1_reg` at address 0x93c (176 bytes) makes one call, `pciio_driver_register` at 0x9b4.
  It returns 0 from the path that leaves at 0x9e4.
  **Inferred** that it is the image-sync driver, because its exports `is1_genlock_interrupt`, `is1_fire_swapready` and `is1_sync_pipes_request` name genlock and swap-ready work.

- `usr/cpu/sysgen/IP35boot/kernel.o` (REL, 1288752 bytes): **established** that it defines 1177 global functions and imports 320 names.
  It carries a full `.symtab` and DWARF data.
  Its names include `ULIsystrap`, `utlbmiss` and `tlbmiss`.
  **Inferred** from those names that it is the IP35 kernel core for exceptions and memory management.

- `usr/cpu/sysgen/IP35boot/pcibr.o` (REL, 300848 bytes): **established** that it defines 253 global functions and 22 objects.
  It imports 137 names, 29 of them `xtalk_*`.
  Its names include `pcibr_dmamap_alloc` and `pcibr_piomap_alloc`.
  They also include `pcibr_intr_connect` and `pcibr_error_intr_handler`.
  **Inferred** that it is the PCI bridge provider, which sets up DMA maps, I/O maps and interrupts for each slot.
  It sits on the crossbar's `xtalk` layer.

- `usr/cpu/sysgen/IP35boot/pciio.o` (REL, 47872 bytes): **established** that it defines 105 global functions.
  They include `pciio_device_attach` and `pciio_driver_register`.
  They also include `pciio_dmamap_alloc` and `pciio_config_get`.
  It imports 74 names.
  **Inferred** that it is the generic PCI device layer, with the driver table and the config and DMA entry points that the bridge providers plug into.

- `usr/cpu/sysgen/IP35boot/pciio_ppb.o` (REL, 27528 bytes): **established** that it defines five global functions, `pciio_ppb_init` among them.
  It also defines 13 local functions, `ppb_bus_reserve` and `ppb_scan` among them.
  `pciio_ppb_init` at address 0x1acc (116 bytes) calls `init_sema` at 0x1ae8.
  It calls `ppb_bus_reserve` inside a loop with head 0x1af4 and back branch 0x1b08.
  It calls `ppb_bus_reserve` once more with 255 at 0x1b10.
  It then calls `pciio_driver_register` at 0x1b2c.
  **Inferred** that it is the PCI-to-PCI bridge driver, the one that reserves bus numbers behind a bridge.

- `usr/cpu/sysgen/IP35boot/pciiox.o` (REL, 6120 bytes): **established** that it defines one global function, `pciiox_init`, 32 bytes long at address 0x0.
  It imports three names: `nic_vmc_add`, `pcibr_hints_fix_rrbs` and `xtalk_piotrans_addr`.
  Its only call is `nic_vmc_add` at address 0xc, with the table `pciiox_vmc`.
  It returns that call's result.
  **Inferred** that it is the extended PCI-X bridge set-up that registers its table with the NIC layer at boot.

- `usr/cpu/sysgen/IP35boot/pic.o` (REL, 32656 bytes): **established** that it defines 10 global functions, `pic_init` and `pic_attach` among them.
  It imports 141 names, including `xwidget_driver_register` and `pcibr_dmamap_alloc`.
  `pic_init` at address 0x0 (60 bytes) calls `pcibr_debug` at 0x10.
  It calls `xwidget_driver_register` at 0x28, passing 0x24 (36) and a record at `.rodata` offset 16.
  It returns that call's result.
  **Inferred** that it is the PIC widget driver, the bus-side ASIC driver that sits above `pcibr.o`.
