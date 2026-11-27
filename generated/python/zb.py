"""generated from devices/zb/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 4
input sha256 eed73ffdc42030ce14850ecd8ff9b1a241d2c785d53276b348bfbdff9a247780
Z buffer and hierarchical Z registers of the R300 and R350 3D engine"""

UNIT = 'zb'
REGISTERS = {'cntl': {'offset': 20224, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'zstencilcntl': {'offset': 20228, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'stencilrefmask': {'offset': 20232, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'format': {'offset': 20240, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'ztop': {'offset': 20244, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'zcache_ctlstat': {'offset': 20248, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'depthoffset': {'offset': 20256, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'depthpitch': {'offset': 20260, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'depthclearvalue': {'offset': 20264, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'zmask_offset': {'offset': 20272, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'zmask_pitch': {'offset': 20276, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'zmask_wrindex': {'offset': 20280, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'zmask_dword': {'offset': 20284, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'zmask_rdindex': {'offset': 20288, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'inferred'}, 'depthxy_offset': {'offset': 20320, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'cntl': {'stencil_front_back': (4, 4), 'zsigned_compare': (3, 3), 'zwriteenable': (2, 2), 'z_enable': (1, 1), 'stencil_enable': (0, 0)}, 'zstencilcntl': {'stencilzfail_bf': (26, 24), 'stencilzpass_bf': (23, 21), 'stencilfail_bf': (20, 18), 'stencilfunc_bf': (17, 15), 'stencilzfail': (14, 12), 'stencilzpass': (11, 9), 'stencilfail': (8, 6), 'stencilfunc': (5, 3), 'zfunc': (2, 0)}, 'stencilrefmask': {'stencilwritemask': (23, 16), 'stencilmask': (15, 8), 'stencilref': (7, 0)}, 'format': {'peq8': (5, 5), 'invert': (4, 4), 'depthformat': (3, 0)}, 'ztop': {'ztop': (0, 0)}, 'zcache_ctlstat': {'zc_busy': (31, 31), 'zc_free': (1, 1), 'zc_flush': (0, 0)}, 'depthoffset': {'depthoffset': (31, 5)}, 'depthpitch': {'depthendian': (20, 19), 'depthmicrotile': (18, 17), 'depthmacrotile': (16, 16), 'depthpitch': (13, 2)}, 'depthclearvalue': {'depthclearvalue': (31, 0)}, 'zmask_offset': {}, 'zmask_pitch': {}, 'zmask_wrindex': {}, 'zmask_dword': {}, 'zmask_rdindex': {}, 'depthxy_offset': {'depthy_offset': (27, 17), 'depthx_offset': (11, 1)}}
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
