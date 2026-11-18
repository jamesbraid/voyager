"""generated from devices/su/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 27e3a56aa0329a5f09ed7dc6f590fcc82a75e49b2b88a9c924ec399bc0eb3377
setup unit registers of the R300 and R350 3D engine"""

UNIT = 'su'
REGISTERS = {'tex_wrap': {'offset': 17056, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'poly_offset_front_scale': {'offset': 17060, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'poly_offset_front_offset': {'offset': 17064, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'poly_offset_back_scale': {'offset': 17068, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'poly_offset_back_offset': {'offset': 17072, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'poly_offset_enable': {'offset': 17076, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'cull_mode': {'offset': 17080, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'depth_scale': {'offset': 17088, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'depth_offset': {'offset': 17092, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'tex_wrap': {'t7c3': (31, 31), 't7c2': (30, 30), 't7c1': (29, 29), 't7c0': (28, 28), 't6c3': (27, 27), 't6c2': (26, 26), 't6c1': (25, 25), 't6c0': (24, 24), 't5c3': (23, 23), 't5c2': (22, 22), 't5c1': (21, 21), 't5c0': (20, 20), 't4c3': (19, 19), 't4c2': (18, 18), 't4c1': (17, 17), 't4c0': (16, 16), 't3c3': (15, 15), 't3c2': (14, 14), 't3c1': (13, 13), 't3c0': (12, 12), 't2c3': (11, 11), 't2c2': (10, 10), 't2c1': (9, 9), 't2c0': (8, 8), 't1c3': (7, 7), 't1c2': (6, 6), 't1c1': (5, 5), 't1c0': (4, 4), 't0c3': (3, 3), 't0c2': (2, 2), 't0c1': (1, 1), 't0c0': (0, 0)}, 'poly_offset_front_scale': {'scale': (31, 0)}, 'poly_offset_front_offset': {'offset': (31, 0)}, 'poly_offset_back_scale': {'scale': (31, 0)}, 'poly_offset_back_offset': {'offset': (31, 0)}, 'poly_offset_enable': {'para_enable': (2, 2), 'back_enable': (1, 1), 'front_enable': (0, 0)}, 'cull_mode': {'face': (2, 2), 'cull_back': (1, 1), 'cull_front': (0, 0)}, 'depth_scale': {}, 'depth_offset': {'offset': (31, 0)}}
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
