"""generated from devices/gart/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 7a4b4167ec5845ba012d8b67a0e3e5a3042273b13933438c5f1985fdd2536629
AGP and PCI GART registers of the R3xx-class FireGL boards"""

UNIT = 'gart'
REGISTERS = {'agp_cntl': {'offset': 372, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'aic_cntl': {'offset': 464, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'aic_pt_base': {'offset': 472, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'aic_lo_addr': {'offset': 476, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'aic_hi_addr': {'offset': 480, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}}
WORDS = {}
FIELDS = {'agp_cntl': {'aperture_size': (5, 0)}, 'aic_cntl': {'dis_out_of_pci_gart_access': (1, 1), 'pcigart_translate_en': (0, 0)}, 'aic_pt_base': {}, 'aic_lo_addr': {}, 'aic_hi_addr': {}}
ENUMS = {}
FIELD_ENUM = {}
CONSTANTS = {}
TESTS = []


def decode(name, value):
    """Field name -> value for a register or word."""
    return {f: (value >> lo) & ((1 << (hi - lo + 1)) - 1) for f, (hi, lo) in FIELDS[name].items()}


def encode(name, **fields):
    v = 0
    for f, x in fields.items():
        hi, lo = FIELDS[name][f]
        if x >> (hi - lo + 1):
            raise ValueError('%s.%s: %d does not fit' % (name, f, x))
        v |= x << lo
    return v


def describe(name, value):
    """decode, with enum labels where the field has an enum."""
    out = {}
    for f, x in decode(name, value).items():
        e = ENUMS.get(FIELD_ENUM.get('%s.%s' % (name, f)))
        out[f] = e.get(x, x) if e else x
    return out


def selftest():
    for name, value, expect in TESTS:
        got = decode(name, value)
        for f, want in expect.items():
            assert got[f] == want, (name, hex(value), f, got[f], want)
    return len(TESTS)


if __name__ == '__main__':
    print('%s: %d vectors ok' % (UNIT, selftest()))
