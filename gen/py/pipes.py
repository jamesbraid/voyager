"""generated from defs/pipes.toml by defs-gen - do not edit, change the source
per-pipe select and Z-buffer registers of the R3xx-class FireGL boards"""

UNIT = 'pipes'
REGISTERS = {'su_reg_dest': {'offset': 17096, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 15, 'grade': 'established'}, 'zb_bw_cntl': {'offset': 20252, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_hiz_offset': {'offset': 20292, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_hiz_wrindex': {'offset': 20296, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_hiz_dword': {'offset': 20300, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_hiz_rdindex': {'offset': 20304, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_hiz_pitch': {'offset': 20308, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_zpass_data': {'offset': 20312, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}, 'zb_zpass_addr': {'offset': 20316, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 0, 'grade': 'established'}}
WORDS = {}
FIELDS = {'su_reg_dest': {'pipe1': (3, 3), 'pipe0': (0, 0)}, 'zb_bw_cntl': {'hiz_min': (1, 1), 'hiz_enable': (0, 0)}, 'zb_hiz_offset': {'hiz_offset': (16, 2)}, 'zb_hiz_wrindex': {'index': (16, 2)}, 'zb_hiz_dword': {}, 'zb_hiz_rdindex': {'index': (16, 2)}, 'zb_hiz_pitch': {'pitch': (13, 4)}, 'zb_zpass_data': {}, 'zb_zpass_addr': {'address': (31, 2)}}
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
