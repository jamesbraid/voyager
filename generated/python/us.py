"""generated from devices/us/registers.toml by defs-gen - do not edit, change the source
SPDX-License-Identifier: BSD-3-Clause
defs-gen 2
input sha256 80becab3c0b740e55268ba2bbbe58a6b232c7a30e094a0abfae67f17f4dc7017
fragment shader (unified shader) registers of the R300 and R350 3D engine"""

UNIT = 'us'
REGISTERS = {'config': {'offset': 17920, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'pixsize': {'offset': 17924, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'code_offset': {'offset': 17928, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'code_addr': {'offset': 17936, 'access': 'rw', 'width': 32, 'count': 4, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'tex_inst': {'offset': 17952, 'access': 'rw', 'width': 32, 'count': 32, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'out_fmt': {'offset': 18084, 'access': 'rw', 'width': 32, 'count': 4, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'w_fmt': {'offset': 18100, 'access': 'rw', 'width': 32, 'count': 1, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_rgb_addr': {'offset': 18112, 'access': 'rw', 'width': 32, 'count': 64, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_alpha_addr': {'offset': 18368, 'access': 'rw', 'width': 32, 'count': 64, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_rgb_inst': {'offset': 18624, 'access': 'rw', 'width': 32, 'count': 64, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_alpha_inst': {'offset': 18880, 'access': 'rw', 'width': 32, 'count': 64, 'stride': 4, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_const_r': {'offset': 19456, 'access': 'rw', 'width': 32, 'count': 32, 'stride': 16, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_const_g': {'offset': 19460, 'access': 'rw', 'width': 32, 'count': 32, 'stride': 16, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_const_b': {'offset': 19464, 'access': 'rw', 'width': 32, 'count': 32, 'stride': 16, 'space': None, 'reset': 'unknown', 'grade': 'established'}, 'alu_const_a': {'offset': 19468, 'access': 'rw', 'width': 32, 'count': 32, 'stride': 16, 'space': None, 'reset': 'unknown', 'grade': 'established'}}
WORDS = {}
FIELDS = {'config': {'first_tex': (3, 3), 'nlevel': (2, 0)}, 'pixsize': {'pix_size': (4, 0)}, 'code_offset': {'tex_size': (23, 18), 'tex_offset': (17, 13), 'alu_size': (12, 6), 'alu_offset': (5, 0)}, 'code_addr': {'w_out': (23, 23), 'rgba_out': (22, 22), 'tex_size': (21, 17), 'tex_start': (16, 12), 'alu_size': (11, 6), 'alu_start': (5, 0)}, 'tex_inst': {'omod': (18, 18), 'inst': (17, 15), 'tex_id': (14, 11), 'dst_addr': (10, 6), 'src_addr': (4, 0)}, 'out_fmt': {'out_sign': (19, 16), 'c3_sel': (15, 14), 'c2_sel': (13, 12), 'c1_sel': (11, 10), 'c0_sel': (9, 8), 'out_fmt': (4, 0)}, 'w_fmt': {'w_src': (2, 2), 'w_fmt': (1, 0)}, 'alu_rgb_addr': {'target': (30, 29), 'omask': (28, 26), 'wmask': (25, 23), 'addrd': (22, 18), 'addr2': (17, 12), 'addr1': (11, 6), 'addr0': (5, 0)}, 'alu_alpha_addr': {'stat_we': (31, 28), 'omask_w': (27, 27), 'target': (26, 25), 'omask': (24, 24), 'wmask': (23, 23), 'addrd': (22, 18), 'addr2': (17, 12), 'addr1': (11, 6), 'addr0': (5, 0)}, 'alu_rgb_inst': {'nop': (31, 31), 'clamp': (30, 30), 'omod': (29, 27), 'op': (26, 23), 'srcp_op': (22, 21), 'mod_c': (20, 19), 'sel_c': (18, 14), 'mod_b': (13, 12), 'sel_b': (11, 7), 'mod_a': (6, 5), 'sel_a': (4, 0)}, 'alu_alpha_inst': {'clamp': (30, 30), 'omod': (29, 27), 'op': (26, 23), 'srcp_op': (22, 21), 'mod_c': (20, 19), 'sel_c': (18, 14), 'mod_b': (13, 12), 'sel_b': (11, 7), 'mod_a': (6, 5), 'sel_a': (4, 0)}, 'alu_const_r': {'kr': (23, 0)}, 'alu_const_g': {'kg': (23, 0)}, 'alu_const_b': {'kb': (23, 0)}, 'alu_const_a': {'ka': (23, 0)}}
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
