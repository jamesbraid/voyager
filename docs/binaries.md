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
