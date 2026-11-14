# voyager

Notes on the ATI R300 and R350 in SGI's Onyx4 UltimateVision (FireGL X1 and X2), and how IRIX 6.5.30 on an IP35
drives them. VOYAGER is SGI's name for the board. This repository was called r300 until 2026-11-01.

It's a PC graphics chip in an SGI, so the open radeon drivers cover a lot of the chip and none of the IRIX side.
Everything is read from the IRIX binaries, the public IRIX 6.5.7 source, AMD's register references and the
radeon drivers. Where the radeon drivers and IRIX disagree, IRIX wins.

## What's covered

- **Registers:** display, interrupt and engine registers, plus the per-pipe select and Z-buffer ones.
- **Kernel driver:** how it finds and maps the card, its first writes, ioctls and interrupts. The card topology
  and bus rate are still open.
- **X server:** the X module, the FireGL DRM library and the helper modules, read routine by routine.
- **Direct rendering:** the o32, n32 and 64-bit drivers. The GL layer is ATI's own, so there's no SGI pipeline to
  document.
- **Microcode and ROMs:** command processor start-up and the microcode upload, and the three option ROM images.
  The vertex and fragment units aren't read yet.

Register pages are under [devices/](devices/README.md), the IRIX side under [software/](software/README.md).

## Using it

The headers and the crate live in [generated/](generated/). Don't edit them; they're built from the
`registers.toml` next to each device page.

To run the checks yourself:

```sh
git clone https://github.com/jamesbraid/voyager && cd voyager
tools/setup-clone.sh --root /path/to/your/irix/files
retools/tools/re-run retools/tools/defs/ci-check
```

You'll need Podman, git, python3 and your own IRIX files. [evidence/irix-files.md](evidence/irix-files.md) lists
which ones.

## How far along

Most binaries and ioctls are done. The registers and functions are well short of that. The open questions are in [questions/](questions/README.md).
If you spot a mistake or have a manual we don't, [open an issue](https://github.com/jamesbraid/voyager/issues).

| Table | Rows | % understood | % located or better |
|---|---:|---:|---:|
| [binaries](evidence/inventory/binaries.tsv) | 84 | 98.8 | 98.8 |
| [functions](evidence/inventory/functions.tsv) | 28840 | 5.1 | 56.8 |
| [mmio](evidence/inventory/mmio.tsv) | 440 | 41.4 | 55.9 |
| [ioctls](evidence/inventory/ioctls.tsv) | 75 | 94.7 | 100.0 |
| [spec-registers](evidence/inventory/spec-registers.tsv) | 207 | 27.5 | 46.4 |

## License

[BSD 3-Clause](LICENSE). The `retools/` scripts started life as gr4's and keep its notice. No SGI binaries in
here; bring your own.

## Credits

James Braid, plus a lot of Claude and Codex reading MIPS disassembly so I didn't have to.

Thanks to -

* Dominik Behr ([@techomancer](https://github.com/techomancer)) for [gr2](https://github.com/techomancer/gr2)
  and [gr4](https://github.com/techomancer/gr4), where the layout and working style come from
* The Linux, Mesa and X.Org radeon developers, and AMD for publishing the R300 register references
* Everyone keeping SGI manuals, `hinv` dumps and IRIX media online
