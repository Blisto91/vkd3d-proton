static const DWORD gs_mismatch_ref_code_dxbc[] =
{
    0x43425844, 0x8138a2f9, 0x847969f1, 0x93405b34, 0x518843a8, 0x00000001, 0x000002dc, 0x00000003,
    0x0000002c, 0x000000b4, 0x0000014c, 0x4e475349, 0x00000080, 0x00000004, 0x00000008, 0x00000068,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x00000f0f, 0x00000074, 0x00000000, 0x00000000,
    0x00000003, 0x00000001, 0x00000707, 0x00000078, 0x00000001, 0x00000000, 0x00000003, 0x00000002,
    0x00000303, 0x0000007c, 0x00000002, 0x00000000, 0x00000001, 0x00000003, 0x00000f0f, 0x505f5653,
    0x5449534f, 0x004e4f49, 0x00477241, 0x00477261, 0x00675241, 0x3547534f, 0x00000090, 0x00000004,
    0x00000008, 0x00000000, 0x00000078, 0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000000f,
    0x00000000, 0x00000084, 0x00000000, 0x00000000, 0x00000003, 0x00000001, 0x00000807, 0x00000000,
    0x00000088, 0x00000001, 0x00000000, 0x00000003, 0x00000002, 0x00000c03, 0x00000000, 0x0000008c,
    0x00000002, 0x00000000, 0x00000001, 0x00000003, 0x0000000f, 0x505f5653, 0x5449534f, 0x004e4f49,
    0x00477241, 0x00477261, 0x00675241, 0x58454853, 0x00000188, 0x00020050, 0x00000062, 0x0100086a,
    0x05000061, 0x002010f2, 0x00000003, 0x00000000, 0x00000001, 0x0400005f, 0x00201072, 0x00000003,
    0x00000001, 0x0400005f, 0x00201032, 0x00000003, 0x00000002, 0x0400005f, 0x002010f2, 0x00000003,
    0x00000003, 0x02000068, 0x00000001, 0x0100185d, 0x0300008f, 0x00110000, 0x00000000, 0x0100085c,
    0x04000067, 0x001020f2, 0x00000000, 0x00000001, 0x03000065, 0x00102072, 0x00000001, 0x03000065,
    0x00102032, 0x00000002, 0x03000065, 0x001020f2, 0x00000003, 0x0200005e, 0x00000003, 0x05000036,
    0x00100012, 0x00000000, 0x00004001, 0x00000000, 0x01000030, 0x07000050, 0x00100022, 0x00000000,
    0x0010000a, 0x00000000, 0x00004001, 0x00000003, 0x03040003, 0x0010001a, 0x00000000, 0x07000036,
    0x001020f2, 0x00000000, 0x00a01e46, 0x0010000a, 0x00000000, 0x00000000, 0x07000036, 0x00102072,
    0x00000001, 0x00a01246, 0x0010000a, 0x00000000, 0x00000001, 0x07000036, 0x00102032, 0x00000002,
    0x00a01046, 0x0010000a, 0x00000000, 0x00000002, 0x07000036, 0x001020f2, 0x00000003, 0x00a01e46,
    0x0010000a, 0x00000000, 0x00000003, 0x03000075, 0x00110000, 0x00000000, 0x0700001e, 0x00100012,
    0x00000000, 0x0010000a, 0x00000000, 0x00004001, 0x00000001, 0x01000016, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE gs_mismatch_ref_dxbc = { gs_mismatch_ref_code_dxbc, sizeof(gs_mismatch_ref_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
static const BYTE gs_mismatch_ref_code_dxil[] =
{
    0x44, 0x58, 0x42, 0x43, 0x14, 0xe3, 0x3a, 0x73, 0x88, 0x7b, 0x18, 0xd4, 0x22, 0xde, 0xff, 0x9c, 0x9e, 0x84, 0x84, 0x6f, 0x01, 0x00, 0x00, 0x00, 0x9c, 0x09, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0xcc, 0x02, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0xa0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74,
    0x69, 0x6f, 0x6e, 0x00, 0x41, 0x72, 0x47, 0x00, 0x61, 0x72, 0x47, 0x00, 0x41, 0x52, 0x67, 0x00, 0x4f, 0x53, 0x47, 0x31, 0xa0, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x53, 0x56, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x41, 0x72, 0x47, 0x00, 0x61, 0x72, 0x47, 0x00, 0x41, 0x52, 0x67, 0x00, 0x50, 0x53, 0x56, 0x30, 0x2c, 0x01, 0x00, 0x00,
    0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x03, 0x00,
    0x04, 0x04, 0x00, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x41, 0x72, 0x47,
    0x00, 0x61, 0x72, 0x47, 0x00, 0x41, 0x52, 0x67, 0x00, 0x41, 0x72, 0x47, 0x00, 0x61, 0x72, 0x47, 0x00, 0x41, 0x52, 0x67, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44, 0x03, 0x03, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x43, 0x00, 0x03, 0x02, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x42, 0x00, 0x03, 0x02, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x03, 0x44, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x44, 0x03, 0x03, 0x04, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x43, 0x00, 0x03, 0x02, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x42, 0x00, 0x03, 0x02, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x01, 0x03, 0x44, 0x00, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x48, 0x41, 0x53, 0x48, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0x66, 0xd6, 0xad, 0x8a, 0xcf, 0xc8, 0xa6,
    0x96, 0x4b, 0xe3, 0xd1, 0xab, 0x72, 0x00, 0xf7, 0x44, 0x58, 0x49, 0x4c, 0xac, 0x06, 0x00, 0x00, 0x60, 0x00, 0x02, 0x00, 0xab, 0x01, 0x00, 0x00, 0x44, 0x58, 0x49, 0x4c, 0x00, 0x01, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x94, 0x06, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde, 0x21, 0x0c, 0x00, 0x00, 0xa2, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
    0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39, 0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x14, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42,
    0xa4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x52, 0x88, 0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42, 0xe4, 0x48, 0x0e, 0x90, 0x91, 0x22, 0xc4, 0x50,
    0x41, 0x51, 0x81, 0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x29, 0x46, 0x06, 0x51, 0x18, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07, 0x40, 0x02, 0xa8, 0x0d,
    0x84, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20, 0x01, 0x00, 0x00, 0x00, 0x49, 0x18, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42, 0x20, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00, 0x00,
    0x15, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09, 0x20, 0x64, 0x85, 0x04, 0x93, 0x22, 0xa4, 0x84, 0x04, 0x93, 0x22, 0xe3, 0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c,
    0x10, 0x50, 0x23, 0x00, 0x25, 0x00, 0x14, 0x66, 0x00, 0xe6, 0x08, 0xc0, 0x60, 0x8e, 0x00, 0x29, 0xc6, 0x20, 0x84, 0x14, 0x42, 0xa6, 0x18, 0x84, 0x10, 0x52, 0x08, 0xa1, 0x62, 0x00, 0x42, 0x48,
    0x19, 0xa4, 0x8a, 0x01, 0x08, 0x21, 0x85, 0x10, 0x2b, 0x03, 0x20, 0x85, 0xdc, 0x40, 0x40, 0x56, 0x90, 0x29, 0x80, 0x39, 0x82, 0x00, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87,
    0x36, 0x68, 0x87, 0x79, 0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xaf, 0x50, 0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d,
    0x90, 0x0e, 0x71, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x30, 0x07,
    0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06, 0xe6, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x73, 0x20,
    0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe6, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d, 0xe0, 0x0e, 0x78, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x76,
    0x40, 0x07, 0x43, 0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3c, 0x06, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x79, 0x10, 0x20,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xf2, 0x28, 0x40, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xe4, 0x61, 0x80, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x60, 0xc8, 0xe3, 0x00, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x16, 0x08, 0x00, 0x12, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14, 0x19, 0x11, 0x4c, 0x90,
    0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x22, 0x25, 0x30, 0x02, 0x50, 0x0e, 0xc5, 0x50, 0x06, 0xe5, 0x51, 0x04, 0x54, 0x4a, 0xa2, 0x0c, 0x0a, 0x61, 0x04, 0xa0, 0x08, 0x4a, 0xa1, 0x04, 0x28,
    0x8e, 0x55, 0x41, 0x50, 0x20, 0x10, 0x08, 0x04, 0x06, 0xa0, 0x00, 0x80, 0x08, 0x08, 0x01, 0x00, 0x08, 0x12, 0x20, 0x88, 0x80, 0x20, 0x04, 0x82, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x79, 0x18, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0xc4, 0x8e, 0x0c, 0x6f, 0xec, 0xed, 0x4d, 0x0c, 0x24, 0xc6, 0xe5, 0xc6, 0x45, 0x66, 0x06, 0x06, 0xc7,
    0xe5, 0x06, 0x04, 0xc5, 0x26, 0xa7, 0xac, 0x86, 0xa6, 0x4c, 0x26, 0x07, 0x26, 0x65, 0x43, 0x10, 0x4c, 0x10, 0x08, 0x63, 0x82, 0x40, 0x1c, 0x1b, 0x84, 0x81, 0x98, 0x20, 0x10, 0xc8, 0x06, 0x61,
    0x30, 0x28, 0x9c, 0xcd, 0x4d, 0x10, 0x88, 0x64, 0xc3, 0x80, 0x24, 0xc4, 0x04, 0x21, 0xa2, 0x36, 0x04, 0xcb, 0x04, 0x41, 0x00, 0x48, 0xb4, 0x85, 0xa5, 0xb9, 0x71, 0x99, 0xb2, 0xfa, 0x82, 0x7a,
    0x9b, 0x4b, 0xa3, 0x4b, 0x7b, 0x73, 0x9b, 0x20, 0x14, 0xcd, 0x04, 0xa1, 0x70, 0x36, 0x04, 0xc4, 0x04, 0xa1, 0x78, 0x26, 0x08, 0x05, 0x34, 0x41, 0x20, 0x94, 0x09, 0x02, 0xb1, 0x6c, 0x10, 0x2a,
    0x6b, 0xc3, 0x42, 0x3c, 0x50, 0x24, 0x4d, 0xc3, 0x44, 0x50, 0x17, 0x87, 0x20, 0xb9, 0xa3, 0x09, 0x42, 0x11, 0x6d, 0x10, 0x2a, 0x63, 0xc3, 0x32, 0x64, 0x10, 0x25, 0x69, 0x43, 0x34, 0x50, 0xdb,
    0x04, 0x81, 0x60, 0x38, 0x84, 0xc9, 0x1d, 0x6d, 0x08, 0x86, 0x0d, 0x42, 0x55, 0x6d, 0x58, 0x3a, 0x0f, 0xa2, 0x3e, 0x6d, 0xd0, 0x3a, 0x0a, 0x0c, 0x38, 0x04, 0x49, 0x9d, 0x4d, 0x10, 0x0a, 0x69,
    0x43, 0xd0, 0x4d, 0x10, 0x8a, 0x69, 0xc3, 0x52, 0x89, 0xc1, 0x18, 0x50, 0x64, 0x50, 0x06, 0xc3, 0x54, 0x51, 0xd7, 0x06, 0x02, 0xe3, 0xc2, 0xc0, 0x0c, 0x36, 0x0c, 0x67, 0x70, 0x06, 0xc0, 0x86,
    0xa2, 0xaa, 0x86, 0x61, 0xd8, 0x20, 0x0c, 0x69, 0xb0, 0xa1, 0x68, 0x1c, 0x34, 0x00, 0xd4, 0xa0, 0x0a, 0x1b, 0x9b, 0x5d, 0x9b, 0x4b, 0x1a, 0x59, 0x99, 0x1b, 0xdd, 0x94, 0x20, 0xa8, 0x42, 0x86,
    0xe7, 0x62, 0x57, 0x26, 0x37, 0x97, 0xf6, 0xe6, 0x36, 0x25, 0x20, 0x9a, 0x90, 0xe1, 0xb9, 0xd8, 0x85, 0xb1, 0xd9, 0x95, 0xc9, 0x4d, 0x09, 0x8c, 0x3a, 0x64, 0x78, 0x2e, 0x73, 0x68, 0x61, 0x64,
    0x65, 0x72, 0x4d, 0x6f, 0x64, 0x65, 0x6c, 0x53, 0x82, 0xa4, 0x0e, 0x19, 0x9e, 0x8b, 0x5d, 0x5a, 0xd9, 0x5d, 0x12, 0xd9, 0x14, 0x5d, 0x18, 0x5d, 0xd9, 0x94, 0x60, 0xa9, 0x43, 0x86, 0xe7, 0x52,
    0xe6, 0x46, 0x27, 0x97, 0x07, 0xf5, 0x96, 0xe6, 0x46, 0x37, 0x37, 0x25, 0x50, 0x03, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c, 0x66,
    0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3, 0x8c, 0x42, 0x80, 0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed, 0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e,
    0xc2, 0xc1, 0x1d, 0xce, 0xa1, 0x1c, 0x66, 0x30, 0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83, 0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78, 0x8c, 0x74, 0x70, 0x07, 0x7b,
    0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70, 0x07, 0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc, 0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3, 0xf0,
    0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d, 0xde, 0x21, 0x1c, 0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83, 0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83,
    0x3c, 0x84, 0x03, 0x3b, 0xcc, 0xf0, 0x14, 0x76, 0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68, 0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60, 0x07, 0x76, 0x28, 0x07, 0x76,
    0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80, 0x87, 0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98, 0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec, 0x30,
    0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xcc, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d, 0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43,
    0x39, 0x98, 0x43, 0x39, 0xc8, 0x43, 0x39, 0xb8, 0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03, 0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03, 0x3b, 0xb0, 0xc3, 0x8c, 0xc8,
    0x21, 0x07, 0x7c, 0x70, 0x03, 0x72, 0x10, 0x87, 0x73, 0x70, 0x03, 0x7b, 0x08, 0x07, 0x79, 0x60, 0x87, 0x70, 0xc8, 0x87, 0x77, 0xa8, 0x07, 0x7a, 0x98, 0x81, 0x3c, 0xe4, 0x80, 0x0f, 0x6e, 0x40,
    0x0f, 0xe5, 0xd0, 0x0e, 0xf0, 0x30, 0x83, 0x81, 0xc8, 0x01, 0x1f, 0xdc, 0x40, 0x1c, 0xe4, 0xa1, 0x1c, 0xc2, 0x61, 0x1d, 0xdc, 0x40, 0x1c, 0xe4, 0x01, 0x00, 0x00, 0x00, 0x71, 0x20, 0x00, 0x00,
    0x17, 0x00, 0x00, 0x00, 0x56, 0x00, 0x0d, 0x97, 0xef, 0x3c, 0x3e, 0xc1, 0x20, 0x13, 0x3b, 0x45, 0x04, 0xc0, 0x58, 0xc0, 0x34, 0x5c, 0xbe, 0xf3, 0xf8, 0x8b, 0x03, 0x0c, 0x62, 0xf3, 0x50, 0x93,
    0x5f, 0xdc, 0xb6, 0x09, 0x4c, 0xc3, 0xe5, 0x3b, 0x8f, 0xbf, 0x38, 0xc0, 0x20, 0x36, 0x0f, 0x35, 0xf9, 0xc8, 0x6d, 0xdb, 0x40, 0x35, 0x5c, 0xbe, 0xf3, 0xf8, 0xd2, 0xe4, 0x44, 0x04, 0x4a, 0x4d,
    0x0f, 0x35, 0xf9, 0xc5, 0x6d, 0x1b, 0x41, 0x35, 0x5c, 0xbe, 0xf3, 0xf8, 0xd2, 0xe4, 0x44, 0x04, 0x4a, 0x4d, 0x0f, 0x35, 0xf9, 0xc8, 0x6d, 0x1b, 0x00, 0xc1, 0x00, 0x48, 0x03, 0x00, 0x00, 0x00,
    0x61, 0x20, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x13, 0x04, 0x43, 0x2c, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x0a, 0xa1, 0x14, 0x4a, 0x38, 0x00, 0x00, 0xb3, 0x04, 0xc1, 0x40,
    0x05, 0x21, 0x06, 0x40, 0x17, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0x81, 0x11, 0x92, 0x94, 0x04, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x60, 0x64, 0xc5, 0x34, 0x1d, 0xc2, 0x88, 0x41, 0x02,
    0x80, 0x20, 0x18, 0x18, 0x9a, 0x41, 0x51, 0xca, 0x30, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0xc6, 0x76, 0x54, 0x95, 0x43, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0xa2, 0x1d, 0x96, 0xd5, 0x10,
    0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xa0, 0x68, 0x87, 0x65, 0x29, 0xc3, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x28, 0xda, 0x61, 0x59, 0x8c, 0x30, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x8a, 0x76,
    0x58, 0xd6, 0x13, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0xc1, 0x21, 0x97, 0xd5, 0x14, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x60, 0x74, 0x09, 0x76, 0x2d, 0xc6, 0x88, 0x41, 0x02, 0x80, 0x20,
    0x18, 0x18, 0x9e, 0x92, 0x61, 0xce, 0x31, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x4a, 0xa7, 0x68, 0x19, 0x34, 0x8c, 0x18, 0x24, 0x00, 0x08, 0x82, 0x81, 0xd2, 0x29, 0x5a, 0xd6, 0x08, 0x23, 0x06,
    0x09, 0x00, 0x82, 0x60, 0xa0, 0x74, 0x8a, 0x96, 0x3d, 0xc1, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x18, 0xdf, 0x42, 0x65, 0x10, 0x32, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x06, 0x18, 0x30, 0x95,
    0xe6, 0x24, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xa0, 0x7c, 0x8c, 0xb5, 0x49, 0xc2, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x28, 0x1f, 0x63, 0x6d, 0x4f, 0x30, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06,
    0x08, 0x18, 0x34, 0xd8, 0x26, 0x29, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0x80, 0x84, 0x81, 0x93, 0x71, 0xd0, 0x32, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x88, 0x18, 0x3c, 0x5a, 0x37, 0x31, 0x23,
    0x06, 0x09, 0x00, 0x82, 0x60, 0x80, 0x8c, 0x01, 0xb4, 0x79, 0x57, 0x33, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x8c, 0x18, 0x40, 0xdc, 0x67, 0x11, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xc0, 0x88,
    0x01, 0xc4, 0x7d, 0xd3, 0x30, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0x8c, 0x18, 0x40, 0xdc, 0x57, 0x09, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xc0, 0x88, 0x01, 0xc4, 0x7d, 0x58, 0x30, 0x62, 0x60,
    0x00, 0x20, 0x08, 0x06, 0x4e, 0x18, 0x3c, 0x96, 0x39, 0x60, 0x00, 0x83, 0xe1, 0x86, 0xa0, 0x03, 0x83, 0x59, 0x06, 0x21, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE gs_mismatch_ref_dxil = { gs_mismatch_ref_code_dxil, sizeof(gs_mismatch_ref_code_dxil) };
#undef UNUSED_ARRAY_ATTR