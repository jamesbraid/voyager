"""generated from devices/rs/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 edb28dd4e62253a48534c96dbcd487bceba38c394a9adcbf775935987876084e
rasteriser interpolator registers of the R300 and R350 3D engine"""

UNIT = 'rs'
REGISTERS = {'count': {'offset': 17152, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'inst_count': {'offset': 17156, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ip': {'offset': 17168, 'access': 'rw', 'width': 32, 'count': 8, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'inst': {'offset': 17200, 'access': 'rw', 'width': 32, 'count': 16, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'count': {'hires_en': (18, 18), 'w_addr': (17, 12), 'w_count': (11, 11), 'ic_count': (10, 7), 'it_count': (6, 0)}, 'inst_count': {'tx_offset': (7, 5), 'w_en': (4, 4), 'inst_count': (3, 0)}, 'ip': {'sel_q': (24, 22), 'sel_r': (21, 19), 'sel_t': (18, 16), 'sel_s': (15, 13), 'col_fmt': (12, 9), 'col_ptr': (8, 6), 'tex_ptr': (5, 0)}, 'inst': {'col_bias': (24, 23), 'tex_adj': (22, 22), 'col_addr': (21, 17), 'col_cn': (16, 14), 'col_id': (13, 11), 'tex_addr': (10, 6), 'tex_cn': (5, 3), 'tex_id': (2, 0)}}
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
