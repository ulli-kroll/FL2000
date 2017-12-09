// fl2000_big_table.c
//
// (c)Copyright 2017, Fresco Logic, Incorporated.
//
// The contents of this file are property of Fresco Logic, Incorporated and are strictly protected
// by Non Disclosure Agreements. Distribution in any form to unauthorized parties is strictly prohibited.
//
// Purpose: TODO: PLEASE RENAME THIS FILE TO SOMETHING USEFUL
//

#include "fl2000_include.h"

struct fl2000_timing_entry const big_table_24bit_r0[VGA_BIG_TABLE_SIZE] = {
	{ 640,480,60, 0x320, 0x60, 0x28, 0x20d, 0x2, 0x19, 0x85, 0x1d84, 0x5, 0x85, 0x5, 0x1d9c, 0x2800320, 0x600089, 0x1e0020d, 0x1c2001c, 0x85, 0x3f6119 },
	{ 640,480,73, 0x340, 0x28, 0x78, 0x208, 0x3, 0x14, 0x6d, 0x23a8, 0x3, 0x6d, 0x3, 0x23c8, 0x2800340, 0x2800a1, 0x1e00208, 0x1830018, 0x6d, 0x3c6113 },
	{ 640,480,75, 0x348, 0x40, 0x78, 0x1f4, 0x3, 0x10, 0x6a, 0x234c, 0x3, 0x6a, 0x2, 0x2364, 0x2800348, 0x4000b9, 0x1e001f4, 0x1430014, 0x6a, 0x3f6114 },
	{ 640,350,85, 0x340, 0x40, 0x60, 0x1bd, 0x3, 0x3c, 0x5e, 0x237c, 0xc, 0x5e, 0xb, 0x2384, 0x2800340, 0x4000a1, 0x15e01bd, 0x4030040, 0x5e, 0x6b6211 },
	{ 640,400,85, 0x340, 0x40, 0x60, 0x1bd, 0x3, 0x29, 0x5e, 0x234c, 0x8, 0x5e, 0x7, 0x2384, 0x2800340, 0x4000a1, 0x19001bd, 0x2d3002d, 0x5e, 0x6b6211 },
	{ 720,400,85, 0x3a8, 0x48, 0x6c, 0x1be, 0x3, 0x2a, 0x5e, 0x27b8, 0x8, 0x5e, 0x7, 0x280c, 0x2d003a8, 0x4800b5, 0x19001be, 0x2e3002e, 0x5e, 0x476114 },
	{ 800,600,56, 0x400, 0x48, 0x80, 0x271, 0x2, 0x16, 0x8e, 0x2910, 0x4, 0x8e, 0x3, 0x2944, 0x3200400, 0x4800c9, 0x2580271, 0x1920019, 0x8e, 0x2b410c },
	{ 640,480,85, 0x340, 0x38, 0x50, 0x1fd, 0x3, 0x19, 0x5e, 0x2874, 0x4, 0x5e, 0x3, 0x28a0, 0x2800340, 0x380089, 0x1e001fd, 0x1d3001d, 0x5e, 0x24410a },
	{ 800,600,60, 0x420, 0x80, 0x58, 0x274, 0x4, 0x17, 0x85, 0x2bf4, 0x4, 0x85, 0x3, 0x2c48, 0x3200420, 0x8000d9, 0x2580274, 0x1c4001c, 0x85, 0x80102 },
	{ 1024,768,43, 0x4f0, 0xb0, 0x38, 0x331, 0x4, 0x14, 0xba, 0x34ac, 0x4, 0xba, 0x3, 0x34b8, 0x40004f0, 0xb000e9, 0x3000331, 0x1940019, 0xba, 0x476110 },
	{ 848,480,60, 0x440, 0x70, 0x70, 0x205, 0x8, 0x17, 0x85, 0x2678, 0x6, 0x85, 0x6, 0x26a4, 0x3500440, 0x7000e1, 0x1e00205, 0x2080020, 0x85, 0x1b4108 },
	{ 800,600,75, 0x420, 0x50, 0xa0, 0x271, 0x3, 0x15, 0x6a, 0x3728, 0x3, 0x6a, 0x2, 0x3748, 0x3200420, 0x5000f1, 0x2580271, 0x1930019, 0x6a, 0x636114 },
	{ 800,600,72, 0x410, 0x78, 0x40, 0x29a, 0x6, 0x17, 0x6f, 0x3840, 0x3, 0x6f, 0x3, 0x3840, 0x3200410, 0x7800b9, 0x258029a, 0x1e6001e, 0x6f, 0xa0102 },
	{ 800,600,85, 0x418, 0x40, 0x98, 0x277, 0x3, 0x1b, 0x5e, 0x3e80, 0x3, 0x5e, 0x2, 0x3ef0, 0x3200418, 0x4000d9, 0x2580277, 0x1f3001f, 0x5e, 0x2d4108 },
	{ 1024,768,60, 0x540, 0x88, 0xa0, 0x326, 0x6, 0x1d, 0x85, 0x4894, 0x4, 0x85, 0x4, 0x48bc, 0x4000540, 0x880129, 0x3000326, 0x2460024, 0x85, 0xd2102 },
	{ 1280,720,60, 0x672, 0x28, 0xdc, 0x2ee, 0x5, 0x19, 0x85, 0x5460, 0x4, 0x85, 0x3, 0x5498, 0x5000672, 0x280105, 0x2d002ee, 0x1f5001f, 0x85, 0x346107 },
	{ 1024,768,70, 0x530, 0x88, 0x90, 0x326, 0x6, 0x1d, 0x72, 0x5490, 0x3, 0x72, 0x3, 0x54d8, 0x4000530, 0x880119, 0x3000326, 0x2460024, 0x72, 0xf2102 },
	{ 1024,768,75, 0x520, 0x60, 0xb0, 0x320, 0x3, 0x1c, 0x6a, 0x5a5c, 0x3, 0x6a, 0x2, 0x5a94, 0x4000520, 0x600111, 0x3000320, 0x2030020, 0x6a, 0x3f6108 },
	{ 1280,768,60, 0x680, 0x80, 0xc0, 0x31e, 0x7, 0x14, 0x85, 0x5950, 0x3, 0x85, 0x2, 0x5a00, 0x5000680, 0x800141, 0x300031e, 0x1c7001c, 0x85, 0x7f6208 },
	{ 1152,864,60, 0x640, 0x80, 0x100, 0x384, 0x3, 0x20, 0x85, 0x5b20, 0x4, 0x85, 0x3, 0x5b5c, 0x4800640, 0x800181, 0x3600384, 0x2430024, 0x85, 0x796207 },
	{ 1280,800,60, 0x690, 0x80, 0xc8, 0x33f, 0x6, 0x16, 0x85, 0x5d08, 0x3, 0x85, 0x2, 0x5dbc, 0x5000690, 0x800149, 0x320033f, 0x1d6001d, 0x85, 0x436108 },
	{ 1366,768,60, 0x700, 0x8f, 0xd5, 0x31e, 0x3, 0x18, 0x85, 0x5f50, 0x3, 0x85, 0x2, 0x600c, 0x5560700, 0x8f0165, 0x300031e, 0x1c3001c, 0x85, 0x676206 },
	{ 1360,768,60, 0x700, 0x70, 0x100, 0x31b, 0x6, 0x12, 0x85, 0x5ee4, 0x3, 0x85, 0x2, 0x5f44, 0x5500700, 0x700171, 0x300031b, 0x1960019, 0x85, 0x5e610b },
	{ 1024,768,85, 0x560, 0x60, 0xd0, 0x328, 0x3, 0x24, 0x5e, 0x6668, 0x3, 0x5e, 0x2, 0x6728, 0x4000560, 0x600131, 0x3000328, 0x2830028, 0x5e, 0x556109 },
	{ 1280,960,60, 0x708, 0x70, 0x138, 0x3e8, 0x3, 0x24, 0x85, 0x7080, 0x4, 0x85, 0x3, 0x70cc, 0x5000708, 0x7001a9, 0x3c003e8, 0x2830028, 0x85, 0x616109 },
	{ 1280,768,75, 0x6a0, 0x80, 0xd0, 0x325, 0x7, 0x1b, 0x6a, 0x70f4, 0x3, 0x6a, 0x2, 0x71ec, 0x50006a0, 0x800151, 0x3000325, 0x2370023, 0x6a, 0x294104 },
	{ 1440,900,60, 0x770, 0x98, 0xe8, 0x3a6, 0x6, 0x19, 0x85, 0x75bc, 0x3, 0x85, 0x2, 0x7684, 0x5a00770, 0x980181, 0x38403a6, 0x2060020, 0x85, 0x406106 },
	{ 1280,800,75, 0x6a0, 0x80, 0xd0, 0x346, 0x6, 0x1d, 0x6a, 0x75a8, 0x3, 0x6a, 0x2, 0x7698, 0x50006a0, 0x800151, 0x3200346, 0x2460024, 0x6a, 0x406106 },
	{ 1280,1024,60, 0x698, 0x70, 0xf8, 0x42a, 0x3, 0x26, 0x85, 0x7800, 0x4, 0x85, 0x3, 0x783c, 0x5000698, 0x700169, 0x400042a, 0x2a3002a, 0x85, 0x616109 },
	{ 1280,768,85, 0x6b0, 0x88, 0xd8, 0x329, 0x7, 0x1f, 0x5e, 0x8000, 0x3, 0x5e, 0x2, 0x811c, 0x50006b0, 0x880161, 0x3000329, 0x2770027, 0x5e, 0x2f4104 },
	{ 1400,1050,60, 0x748, 0x90, 0xe8, 0x441, 0x4, 0x20, 0x85, 0x858c, 0x3, 0x85, 0x2, 0x8658, 0x5780748, 0x900179, 0x41a0441, 0x2540025, 0x85, 0x496106 },
	{ 1280,800,85, 0x6b0, 0x88, 0xd8, 0x34b, 0x6, 0x22, 0x5e, 0x8558, 0x3, 0x5e, 0x2, 0x8688, 0x50006b0, 0x880161, 0x320034b, 0x2960029, 0x5e, 0x314104 },
	{ 1280,1024,75, 0x698, 0x90, 0xf8, 0x42a, 0x3, 0x26, 0x6a, 0x9698, 0x3, 0x6a, 0x2, 0x96dc, 0x5000698, 0x900189, 0x400042a, 0x2a3002a, 0x6a, 0x1b4102 },
	{ 1440,900,75, 0x790, 0x98, 0xf8, 0x3ae, 0x6, 0x21, 0x6a, 0x94e8, 0x3, 0x6a, 0x2, 0x95f8, 0x5a00790, 0x980191, 0x38403ae, 0x2860028, 0x6a, 0x526106 },
	{ 1680,1050,60, 0x8c0, 0xb0, 0x118, 0x441, 0x6, 0x1e, 0x85, 0xa040, 0x3, 0x85, 0x2, 0xa134, 0x69008c0, 0xb001c9, 0x41a0441, 0x2560025, 0x85, 0x756204 },
	{ 1920,1080,50, 0xa50, 0x2c, 0x94, 0x465, 0x5, 0x24, 0xa0, 0x9dcc, 0x4, 0xa0, 0x4, 0x9e34, 0x7800a50, 0x2c00c1, 0x4380465, 0x2a5002a, 0xa0, 0x596106 },
	{ 1920,1080,60, 0x898, 0x2c, 0x94, 0x465, 0x5, 0x24, 0x85, 0xbdd8, 0x3, 0x85, 0x3, 0xbe54, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x85, 0x596106 },
	{ 1280,960,85, 0x6c0, 0xa0, 0xe0, 0x3f3, 0x3, 0x2f, 0x5e, 0xa000, 0x3, 0x5e, 0x2, 0xa158, 0x50006c0, 0xa00181, 0x3c003f3, 0x3330033, 0x5e, 0x596106 },
	{ 1400,1050,75, 0x768, 0x90, 0xf8, 0x44b, 0x4, 0x2a, 0x6a, 0xa8e4, 0x3, 0x6a, 0x2, 0xaa1c, 0x5780768, 0x900189, 0x41a044b, 0x2f4002f, 0x6a, 0x7d6204 },
	{ 1440,900,85, 0x7a0, 0x98, 0x100, 0x3b4, 0x6, 0x27, 0x5e, 0xa8c0, 0x3, 0x5e, 0x2, 0xaa30, 0x5a007a0, 0x980199, 0x38403b4, 0x2e6002e, 0x5e, 0x3f6104 },
	{ 1280,1024,85, 0x6c0, 0xa0, 0xe0, 0x430, 0x3, 0x2c, 0x5e, 0xaaac, 0x3, 0x5e, 0x2, 0xab14, 0x50006c0, 0xa00181, 0x4000430, 0x3030030, 0x5e, 0x3f6104 },
	{ 1600,1200,60, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x85, 0xafc8, 0x4, 0x85, 0x3, 0xb03c, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x85, 0x616106 },
	{ 1600,1200,65, 0x879, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x7b, 0xbd14, 0x3, 0x7b, 0x3, 0xbe90, 0x6400879, 0xc001f1, 0x4b004e2, 0x3230032, 0x7b, 0x234102 },
	{ 1400,1050,85, 0x778, 0x98, 0x100, 0x451, 0x4, 0x30, 0x5e, 0xbf68, 0x3, 0x5e, 0x2, 0xc0e0, 0x5780778, 0x980199, 0x41a0451, 0x3540035, 0x5e, 0x244102 },
	{ 1680,1050,75, 0x8e0, 0xb0, 0x128, 0x44b, 0x6, 0x28, 0x6a, 0xcaac, 0x3, 0x6a, 0x2, 0xcc20, 0x69008e0, 0xb001d9, 0x41a044b, 0x2f6002f, 0x6a, 0x4b6104 },
	{ 1600,1200,70, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x72, 0xcc8c, 0x3, 0x72, 0x2, 0xcd98, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x72, 0x264102 },
	{ 1920,1200,60, 0xa20, 0xc8, 0x150, 0x4dd, 0x6, 0x24, 0x85, 0xd150, 0x3, 0x85, 0x2, 0xd2a0, 0x7800a20, 0xc80219, 0x4b004dd, 0x2b6002b, 0x85, 0x4d6104 },
	{ 1600,1200,75, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x6a, 0xdc98, 0x3, 0x6a, 0x2, 0xdd1c, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x6a, 0x516104 },
	{ 1792,1344,60, 0x9b8, 0x19, 0x29, 0x572, 0x3, 0x2e, 0x85, 0xdacc, 0x3, 0x85, 0x2, 0xdc1c, 0x70009b8, 0x190043, 0x5400572, 0x3230032, 0x85, 0x536104 },
	{ 1680,1050,85, 0x8f0, 0xb0, 0x130, 0x451, 0x6, 0x2e, 0x5e, 0xe5b0, 0x3, 0x5e, 0x2, 0xe770, 0x69008f0, 0xb001e1, 0x41a0451, 0x3560035, 0x5e, 0x2b4102 },
	{ 1856,1392,60, 0x9e0, 0xe0, 0x160, 0x59f, 0x3, 0x2b, 0x85, 0xeab4, 0x3, 0x85, 0x2, 0xeb54, 0x74009e0, 0xe00241, 0x570059f, 0x2f3002f, 0x85, 0x576104 },
	{ 1600,1200,85, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x5e, 0xf744, 0x2, 0x5e, 0x1, 0xf958, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x5e, 0x2e4102 },
	{ 1920,1440,60, 0xa28, 0xd0, 0x158, 0x5dc, 0x3, 0x38, 0x85, 0xfd20, 0x4, 0x85, 0x3, 0xfdc4, 0x7800a28, 0xd00229, 0x5a005dc, 0x3c3003c, 0x85, 0x2f4102 },
	{ 1920,1200,75, 0xa30, 0xd0, 0x158, 0x4e7, 0x6, 0x2e, 0x6a, 0x108b8, 0x3, 0x6a, 0x2, 0x10a68, 0x7800a30, 0xd00229, 0x4b004e7, 0x3560035, 0x6a, 0x314102 },
	{ 1792,1344,75, 0x998, 0xd8, 0x160, 0x589, 0x3, 0x45, 0x6a, 0x11774, 0x4, 0x6a, 0x3, 0x118bc, 0x7000998, 0xd80239, 0x5400589, 0x4930049, 0x6a, 0x346102 },
	{ 1600,1200,100, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x50, 0x12438, 0x2, 0x50, 0x1, 0x124f8, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x50, 0x366102 },
	{ 1920,1200,85, 0xa40, 0xd0, 0x160, 0x4ee, 0x6, 0x35, 0x5e, 0x12c00, 0x3, 0x5e, 0x2, 0x12e14, 0x7800a40, 0xd00231, 0x4b004ee, 0x3c6003c, 0x5e, 0x716202 },
	{ 1856,1392,75, 0xa00, 0xe0, 0x160, 0x5dc, 0x3, 0x68, 0x6a, 0x131d4, 0x6, 0x6a, 0x5, 0x133cc, 0x7400a00, 0xe00241, 0x57005dc, 0x6c3006c, 0x6a, 0x736202 },
	{ 1920,1440,75, 0xa50, 0xe0, 0x160, 0x5dc, 0x3, 0x38, 0x6a, 0x13da8, 0x3, 0x6a, 0x2, 0x13e68, 0x7800a50, 0xe00241, 0x5a005dc, 0x3c3003c, 0x6a, 0x776202 },
	{ 2560,1600,60, 0xdb0, 0x118, 0x1d8, 0x67a, 0x6, 0x31, 0x85, 0x17418, 0x3, 0x85, 0x2, 0x17600, 0xa000db0, 0x11802f1, 0x640067a, 0x3860038, 0x85, 0x466102 },
	{ 2560,1600,75, 0xdd0, 0x118, 0x1e8, 0x688, 0x6, 0x3f, 0x6a, 0x1d698, 0x3, 0x6a, 0x2, 0x1d938, 0xa000dd0, 0x1180301, 0x6400688, 0x4660046, 0x6a, 0x596102 },
	{ 2560,1600,85, 0xdd0, 0x118, 0x1e8, 0x692, 0x6, 0x49, 0x5e, 0x21558, 0x3, 0x5e, 0x2, 0x218d0, 0xa000dd0, 0x1180301, 0x6400692, 0x5060050, 0x5e, 0x646102 },
	{ 1920,1080,24, 0xac0, 0x30, 0x90, 0x465, 0x5, 0x24, 0x14d, 0x4bf0, 0xb, 0x14d, 0xa, 0x4c04, 0x7800ac0, 0x3000c1, 0x4380465, 0x2a5002a, 0x14d, 0x346107 },
	{ 1600,900,60, 0x708, 0x50, 0x60, 0x3e8, 0x3, 0x60, 0x85, 0x8ca0, 0xc, 0x85, 0xb, 0x8cfc, 0x6400708, 0x5000b1, 0x38403e8, 0x6430064, 0x85, 0x616109 },
	{ 1280,600,60, 0x670, 0x80, 0xb8, 0x26e, 0x3, 0x12, 0x85, 0x45c8, 0x3, 0x85, 0x2, 0x4628, 0x5000670, 0x800139, 0x258026e, 0x1630016, 0x85, 0x7b620a },
	{ 854,480,15, 0x440, 0x70, 0x70, 0x205, 0x8, 0x17, 0x215, 0x9b8, 0x1e, 0x215, 0x1e, 0x9b8, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x215, 0x1b4120 },
	{ 854,480,60, 0x440, 0x70, 0x70, 0x205, 0x8, 0x17, 0x85, 0x26c0, 0x6, 0x85, 0x6, 0x26e8, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x85, 0x1b4108 },
	{ 854,480,56, 0x41f, 0x3d, 0x5d, 0x21a, 0x3, 0x1d, 0x8e, 0x25d4, 0x7, 0x8e, 0x6, 0x25ec, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x8e, 0x59611c },
	{ 854,480,30, 0x41f, 0x3d, 0x5d, 0x21a, 0x3, 0x1d, 0x10a, 0x1430, 0xe, 0x10a, 0xe, 0x1440, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x10a, 0x3f6125 },
	{ 854,480,24, 0x527, 0x3d, 0x5d, 0x21a, 0x3, 0x1d, 0x14d, 0x1020, 0x12, 0x14d, 0x12, 0x102c, 0x3560527, 0x3d009b, 0x1e0021a, 0x2130021, 0x14d, 0x6d6220 },
	{ 2048,1152,60, 0x8a0, 0x20, 0x50, 0x4a1, 0x5, 0x19, 0x85, 0xd4b0, 0x2, 0x85, 0x1, 0xd5d8, 0x80008a0, 0x200071, 0x48004a1, 0x1f5001f, 0x85, 0x5e6106 },
	{ 1920,1200,60, 0xa20, 0xd0, 0xe2, 0x4da, 0x3, 0x26, 0x85, 0xd150, 0x3, 0x85, 0x2, 0xd220, 0x7800a20, 0xd001b3, 0x4b004da, 0x2a3002a, 0x85, 0x4d6104 },
	{ 1920,1080,30, 0x898, 0x2c, 0x94, 0x465, 0x5, 0x24, 0x10a, 0x5eec, 0x8, 0x10a, 0x7, 0x5f2c, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x10a, 0x346107 },
};

struct fl2000_timing_entry const big_table_16bit_r0[VGA_BIG_TABLE_SIZE] = {
	{ 640,480,60, 0x320, 0x60, 0x28, 0x20d, 0x2, 0x19, 0x85, 0x13b0, 0x5, 0x85, 0x5, 0x13c0, 0x2800320, 0x600089, 0x1e0020d, 0x1c2001c, 0x85, 0x3f6119 },
	{ 640,480,73, 0x340, 0x28, 0x78, 0x208, 0x3, 0x14, 0x6d, 0x17c4, 0x3, 0x6d, 0x3, 0x17dc, 0x2800340, 0x2800a1, 0x1e00208, 0x1830018, 0x6d, 0x3c6113 },
	{ 640,480,75, 0x348, 0x40, 0x78, 0x1f4, 0x3, 0x10, 0x6a, 0x1788, 0x3, 0x6a, 0x2, 0x1798, 0x2800348, 0x4000b9, 0x1e001f4, 0x1430014, 0x6a, 0x3f6114 },
	{ 640,350,85, 0x340, 0x40, 0x60, 0x1bd, 0x3, 0x3c, 0x5e, 0x17a8, 0xc, 0x5e, 0xb, 0x17ac, 0x2800340, 0x4000a1, 0x15e01bd, 0x4030040, 0x5e, 0x6b6211 },
	{ 640,400,85, 0x340, 0x40, 0x60, 0x1bd, 0x3, 0x29, 0x5e, 0x1788, 0x8, 0x5e, 0x7, 0x17ac, 0x2800340, 0x4000a1, 0x19001bd, 0x2d3002d, 0x5e, 0x6b6211 },
	{ 720,400,85, 0x3a8, 0x48, 0x6c, 0x1be, 0x3, 0x2a, 0x5e, 0x1a7c, 0x8, 0x5e, 0x7, 0x1ab4, 0x2d003a8, 0x4800b5, 0x19001be, 0x2e3002e, 0x5e, 0x476114 },
	{ 800,600,56, 0x400, 0x48, 0x80, 0x271, 0x2, 0x16, 0x8e, 0x1b60, 0x4, 0x8e, 0x3, 0x1b84, 0x3200400, 0x4800c9, 0x2580271, 0x1920019, 0x8e, 0x2b410c },
	{ 640,480,85, 0x340, 0x38, 0x50, 0x1fd, 0x3, 0x19, 0x5e, 0x1af8, 0x4, 0x5e, 0x3, 0x1b14, 0x2800340, 0x380089, 0x1e001fd, 0x1d3001d, 0x5e, 0x24410a },
	{ 800,600,60, 0x420, 0x80, 0x58, 0x274, 0x4, 0x17, 0x85, 0x1d4c, 0x4, 0x85, 0x3, 0x1d84, 0x3200420, 0x8000d9, 0x2580274, 0x1c4001c, 0x85, 0x80102 },
	{ 1024,768,43, 0x4f0, 0xb0, 0x38, 0x331, 0x4, 0x14, 0xba, 0x231c, 0x4, 0xba, 0x3, 0x2324, 0x40004f0, 0xb000e9, 0x3000331, 0x1940019, 0xba, 0x476110 },
	{ 848,480,60, 0x440, 0x70, 0x70, 0x205, 0x8, 0x17, 0x85, 0x19a8, 0x6, 0x85, 0x6, 0x19c4, 0x3500440, 0x7000e1, 0x1e00205, 0x2080020, 0x85, 0x1b4108 },
	{ 800,600,75, 0x420, 0x50, 0xa0, 0x271, 0x3, 0x15, 0x6a, 0x24c4, 0x3, 0x6a, 0x2, 0x24dc, 0x3200420, 0x5000f1, 0x2580271, 0x1930019, 0x6a, 0x636114 },
	{ 800,600,72, 0x410, 0x78, 0x40, 0x29a, 0x6, 0x17, 0x6f, 0x2580, 0x3, 0x6f, 0x3, 0x2580, 0x3200410, 0x7800b9, 0x258029a, 0x1e6001e, 0x6f, 0xa0102 },
	{ 800,600,85, 0x418, 0x40, 0x98, 0x277, 0x3, 0x1b, 0x5e, 0x29ac, 0x3, 0x5e, 0x2, 0x29f8, 0x3200418, 0x4000d9, 0x2580277, 0x1f3001f, 0x5e, 0x2d4108 },
	{ 1024,768,60, 0x540, 0x88, 0xa0, 0x326, 0x6, 0x1d, 0x85, 0x3064, 0x4, 0x85, 0x4, 0x307c, 0x4000540, 0x880129, 0x3000326, 0x2460024, 0x85, 0xd2102 },
	{ 1280,720,60, 0x672, 0x28, 0xdc, 0x2ee, 0x5, 0x19, 0x85, 0x3840, 0x4, 0x85, 0x3, 0x3868, 0x5000672, 0x280105, 0x2d002ee, 0x1f5001f, 0x85, 0x346107 },
	{ 1024,768,70, 0x530, 0x88, 0x90, 0x326, 0x6, 0x1d, 0x72, 0x3860, 0x3, 0x72, 0x3, 0x3890, 0x4000530, 0x880119, 0x3000326, 0x2460024, 0x72, 0xf2102 },
	{ 1024,768,75, 0x520, 0x60, 0xb0, 0x320, 0x3, 0x1c, 0x6a, 0x3c40, 0x3, 0x6a, 0x2, 0x3c64, 0x4000520, 0x600111, 0x3000320, 0x2030020, 0x6a, 0x3f6108 },
	{ 1280,768,60, 0x680, 0x80, 0xc0, 0x31e, 0x7, 0x14, 0x85, 0x3b8c, 0x3, 0x85, 0x2, 0x3c00, 0x5000680, 0x800141, 0x300031e, 0x1c7001c, 0x85, 0x7f6208 },
	{ 1152,864,60, 0x640, 0x80, 0x100, 0x384, 0x3, 0x20, 0x85, 0x3cc0, 0x4, 0x85, 0x3, 0x3ce8, 0x4800640, 0x800181, 0x3600384, 0x2430024, 0x85, 0x796207 },
	{ 1280,800,60, 0x690, 0x80, 0xc8, 0x33f, 0x6, 0x16, 0x85, 0x3e04, 0x3, 0x85, 0x2, 0x3e7c, 0x5000690, 0x800149, 0x320033f, 0x1d6001d, 0x85, 0x436108 },
	{ 1366,768,60, 0x700, 0x8f, 0xd5, 0x31e, 0x3, 0x18, 0x85, 0x3f8c, 0x3, 0x85, 0x2, 0x4008, 0x5560700, 0x8f0165, 0x300031e, 0x1c3001c, 0x85, 0x676206 },
	{ 1360,768,60, 0x700, 0x70, 0x100, 0x31b, 0x6, 0x12, 0x85, 0x3f44, 0x3, 0x85, 0x2, 0x3f84, 0x5500700, 0x700171, 0x300031b, 0x1960019, 0x85, 0x5e610b },
	{ 1024,768,85, 0x560, 0x60, 0xd0, 0x328, 0x3, 0x24, 0x5e, 0x4448, 0x3, 0x5e, 0x2, 0x44c8, 0x4000560, 0x600131, 0x3000328, 0x2830028, 0x5e, 0x556109 },
	{ 1280,960,60, 0x708, 0x70, 0x138, 0x3e8, 0x3, 0x24, 0x85, 0x4b00, 0x4, 0x85, 0x3, 0x4b34, 0x5000708, 0x7001a9, 0x3c003e8, 0x2830028, 0x85, 0x616109 },
	{ 1280,768,75, 0x6a0, 0x80, 0xd0, 0x325, 0x7, 0x1b, 0x6a, 0x4b4c, 0x3, 0x6a, 0x2, 0x4bf4, 0x50006a0, 0x800151, 0x3000325, 0x2370023, 0x6a, 0x294104 },
	{ 1440,900,60, 0x770, 0x98, 0xe8, 0x3a6, 0x6, 0x19, 0x85, 0x4e80, 0x3, 0x85, 0x2, 0x4f04, 0x5a00770, 0x980181, 0x38403a6, 0x2060020, 0x85, 0x406106 },
	{ 1280,800,75, 0x6a0, 0x80, 0xd0, 0x346, 0x6, 0x1d, 0x6a, 0x4e70, 0x3, 0x6a, 0x2, 0x4f10, 0x50006a0, 0x800151, 0x3200346, 0x2460024, 0x6a, 0x406106 },
	{ 1280,1024,60, 0x698, 0x70, 0xf8, 0x42a, 0x3, 0x26, 0x85, 0x5000, 0x4, 0x85, 0x3, 0x5028, 0x5000698, 0x700169, 0x400042a, 0x2a3002a, 0x85, 0x616109 },
	{ 1280,768,85, 0x6b0, 0x88, 0xd8, 0x329, 0x7, 0x1f, 0x5e, 0x5558, 0x3, 0x5e, 0x2, 0x5614, 0x50006b0, 0x880161, 0x3000329, 0x2770027, 0x5e, 0x2f4104 },
	{ 1400,1050,60, 0x748, 0x90, 0xe8, 0x441, 0x4, 0x20, 0x85, 0x5908, 0x3, 0x85, 0x2, 0x5990, 0x5780748, 0x900179, 0x41a0441, 0x2540025, 0x85, 0x496106 },
	{ 1280,800,85, 0x6b0, 0x88, 0xd8, 0x34b, 0x6, 0x22, 0x5e, 0x58e4, 0x3, 0x5e, 0x2, 0x59b0, 0x50006b0, 0x880161, 0x320034b, 0x2960029, 0x5e, 0x314104 },
	{ 1280,1024,75, 0x698, 0x90, 0xf8, 0x42a, 0x3, 0x26, 0x6a, 0x6468, 0x3, 0x6a, 0x2, 0x6494, 0x5000698, 0x900189, 0x400042a, 0x2a3002a, 0x6a, 0x1b4102 },
	{ 1440,900,75, 0x790, 0x98, 0xf8, 0x3ae, 0x6, 0x21, 0x6a, 0x6344, 0x3, 0x6a, 0x2, 0x63fc, 0x5a00790, 0x980191, 0x38403ae, 0x2860028, 0x6a, 0x526106 },
	{ 1680,1050,60, 0x8c0, 0xb0, 0x118, 0x441, 0x6, 0x1e, 0x85, 0x6ad8, 0x3, 0x85, 0x2, 0x6b78, 0x69008c0, 0xb001c9, 0x41a0441, 0x2560025, 0x85, 0x756204 },
	{ 1920,1080,50, 0xa50, 0x2c, 0x94, 0x465, 0x5, 0x24, 0xa0, 0x6934, 0x4, 0xa0, 0x4, 0x6978, 0x7800a50, 0x2c00c1, 0x4380465, 0x2a5002a, 0xa0, 0x596106 },
	{ 1920,1080,60, 0x898, 0x2c, 0x94, 0x465, 0x5, 0x24, 0x85, 0x7e90, 0x3, 0x85, 0x3, 0x7ee4, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x85, 0x596106 },
	{ 1280,960,85, 0x6c0, 0xa0, 0xe0, 0x3f3, 0x3, 0x2f, 0x5e, 0x6aac, 0x3, 0x5e, 0x2, 0x6b90, 0x50006c0, 0xa00181, 0x3c003f3, 0x3330033, 0x5e, 0x596106 },
	{ 1400,1050,75, 0x768, 0x90, 0xf8, 0x44b, 0x4, 0x2a, 0x6a, 0x7098, 0x3, 0x6a, 0x2, 0x7168, 0x5780768, 0x900189, 0x41a044b, 0x2f4002f, 0x6a, 0x7d6204 },
	{ 1440,900,85, 0x7a0, 0x98, 0x100, 0x3b4, 0x6, 0x27, 0x5e, 0x7080, 0x3, 0x5e, 0x2, 0x7178, 0x5a007a0, 0x980199, 0x38403b4, 0x2e6002e, 0x5e, 0x3f6104 },
	{ 1280,1024,85, 0x6c0, 0xa0, 0xe0, 0x430, 0x3, 0x2c, 0x5e, 0x71c8, 0x3, 0x5e, 0x2, 0x720c, 0x50006c0, 0xa00181, 0x4000430, 0x3030030, 0x5e, 0x3f6104 },
	{ 1600,1200,60, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x85, 0x7530, 0x4, 0x85, 0x3, 0x757c, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x85, 0x616106 },
	{ 1600,1200,65, 0x879, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x7b, 0x7e10, 0x3, 0x7b, 0x3, 0x7f0c, 0x6400879, 0xc001f1, 0x4b004e2, 0x3230032, 0x7b, 0x234102 },
	{ 1400,1050,85, 0x778, 0x98, 0x100, 0x451, 0x4, 0x30, 0x5e, 0x7f9c, 0x3, 0x5e, 0x2, 0x8094, 0x5780778, 0x980199, 0x41a0451, 0x3540035, 0x5e, 0x244102 },
	{ 1680,1050,75, 0x8e0, 0xb0, 0x128, 0x44b, 0x6, 0x28, 0x6a, 0x8720, 0x3, 0x6a, 0x2, 0x8818, 0x69008e0, 0xb001d9, 0x41a044b, 0x2f6002f, 0x6a, 0x4b6104 },
	{ 1600,1200,70, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x72, 0x8860, 0x3, 0x72, 0x2, 0x8910, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x72, 0x264102 },
	{ 1920,1200,60, 0xa20, 0xc8, 0x150, 0x4dd, 0x6, 0x24, 0x85, 0x8b8c, 0x3, 0x85, 0x2, 0x8c6c, 0x7800a20, 0xc80219, 0x4b004dd, 0x2b6002b, 0x85, 0x4d6104 },
	{ 1600,1200,75, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x6a, 0x9310, 0x3, 0x6a, 0x2, 0x9368, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x6a, 0x516104 },
	{ 1792,1344,60, 0x9b8, 0x19, 0x29, 0x572, 0x3, 0x2e, 0x85, 0x91e0, 0x3, 0x85, 0x2, 0x92c0, 0x70009b8, 0x190043, 0x5400572, 0x3230032, 0x85, 0x536104 },
	{ 1680,1050,85, 0x8f0, 0xb0, 0x130, 0x451, 0x6, 0x2e, 0x5e, 0x9920, 0x3, 0x5e, 0x2, 0x9a4c, 0x69008f0, 0xb001e1, 0x41a0451, 0x3560035, 0x5e, 0x2b4102 },
	{ 1856,1392,60, 0x9e0, 0xe0, 0x160, 0x59f, 0x3, 0x2b, 0x85, 0x9c78, 0x3, 0x85, 0x2, 0x9ce4, 0x74009e0, 0xe00241, 0x570059f, 0x2f3002f, 0x85, 0x576104 },
	{ 1600,1200,85, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x5e, 0xa4d8, 0x2, 0x5e, 0x1, 0xa63c, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x5e, 0x2e4102 },
	{ 1920,1440,60, 0xa28, 0xd0, 0x158, 0x5dc, 0x3, 0x38, 0x85, 0xa8c0, 0x4, 0x85, 0x3, 0xa930, 0x7800a28, 0xd00229, 0x5a005dc, 0x3c3003c, 0x85, 0x2f4102 },
	{ 1920,1200,75, 0xa30, 0xd0, 0x158, 0x4e7, 0x6, 0x2e, 0x6a, 0xb07c, 0x3, 0x6a, 0x2, 0xb19c, 0x7800a30, 0xd00229, 0x4b004e7, 0x3560035, 0x6a, 0x314102 },
	{ 1792,1344,75, 0x998, 0xd8, 0x160, 0x589, 0x3, 0x45, 0x6a, 0xba50, 0x4, 0x6a, 0x3, 0xbb28, 0x7000998, 0xd80239, 0x5400589, 0x4930049, 0x6a, 0x346102 },
	{ 1600,1200,100, 0x870, 0xc0, 0x130, 0x4e2, 0x3, 0x2e, 0x50, 0xc2d0, 0x2, 0x50, 0x1, 0xc350, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x50, 0x366102 },
	{ 1920,1200,85, 0xa40, 0xd0, 0x160, 0x4ee, 0x6, 0x35, 0x5e, 0xc800, 0x3, 0x5e, 0x2, 0xc964, 0x7800a40, 0xd00231, 0x4b004ee, 0x3c6003c, 0x5e, 0x716202 },
	{ 1856,1392,75, 0xa00, 0xe0, 0x160, 0x5dc, 0x3, 0x68, 0x6a, 0xcbe4, 0x6, 0x6a, 0x5, 0xcd34, 0x7400a00, 0xe00241, 0x57005dc, 0x6c3006c, 0x6a, 0x736202 },
	{ 1920,1440,75, 0xa50, 0xe0, 0x160, 0x5dc, 0x3, 0x38, 0x6a, 0xd3c4, 0x3, 0x6a, 0x2, 0xd444, 0x7800a50, 0xe00241, 0x5a005dc, 0x3c3003c, 0x6a, 0x776202 },
	{ 2560,1600,60, 0xdb0, 0x118, 0x1d8, 0x67a, 0x6, 0x31, 0x85, 0xf810, 0x3, 0x85, 0x2, 0xf954, 0xa000db0, 0x11802f1, 0x640067a, 0x3860038, 0x85, 0x466102 },
	{ 2560,1600,75, 0xdd0, 0x118, 0x1e8, 0x688, 0x6, 0x3f, 0x6a, 0x139bc, 0x3, 0x6a, 0x2, 0x13b7c, 0xa000dd0, 0x1180301, 0x6400688, 0x4660046, 0x6a, 0x596102 },
	{ 2560,1600,85, 0xdd0, 0x118, 0x1e8, 0x692, 0x6, 0x49, 0x5e, 0x16390, 0x3, 0x5e, 0x2, 0x165e0, 0xa000dd0, 0x1180301, 0x6400692, 0x5060050, 0x5e, 0x646102 },
	{ 1920,1080,24, 0xac0, 0x30, 0x90, 0x465, 0x5, 0x24, 0x14d, 0x32a0, 0xb, 0x14d, 0xa, 0x32b0, 0x7800ac0, 0x3000c1, 0x4380465, 0x2a5002a, 0x14d, 0x346107 },
	{ 1600,900,60, 0x708, 0x50, 0x60, 0x3e8, 0x3, 0x60, 0x85, 0x5dc0, 0xc, 0x85, 0xb, 0x5e00, 0x6400708, 0x5000b1, 0x38403e8, 0x6430064, 0x85, 0x616109 },
	{ 1280,600,60, 0x670, 0x80, 0xb8, 0x26e, 0x3, 0x12, 0x85, 0x2e84, 0x3, 0x85, 0x2, 0x2ec8, 0x5000670, 0x800139, 0x258026e, 0x1630016, 0x85, 0x7b620a },
	{ 854,480,15, 0x440, 0x70, 0x70, 0x205, 0x8, 0x17, 0x215, 0x67c, 0x1e, 0x215, 0x1e, 0x67c, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x215, 0x1b4120 },
	{ 854,480,60, 0x440, 0x70, 0x70, 0x205, 0x8, 0x17, 0x85, 0x19d4, 0x6, 0x85, 0x6, 0x19f0, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x85, 0x1b4108 },
	{ 854,480,56, 0x41f, 0x3d, 0x5d, 0x21a, 0x3, 0x1d, 0x8e, 0x1938, 0x7, 0x8e, 0x6, 0x1948, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x8e, 0x59611c },
	{ 854,480,30, 0x41f, 0x3d, 0x5d, 0x21a, 0x3, 0x1d, 0x10a, 0xd78, 0xe, 0x10a, 0xe, 0xd80, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x10a, 0x3f6125 },
	{ 854,480,24, 0x527, 0x3d, 0x5d, 0x21a, 0x3, 0x1d, 0x14d, 0xac0, 0x12, 0x14d, 0x12, 0xac8, 0x3560527, 0x3d009b, 0x1e0021a, 0x2130021, 0x14d, 0x6d6220 },
	{ 2048,1152,60, 0x8a0, 0x20, 0x50, 0x4a1, 0x5, 0x19, 0x85, 0x8dcc, 0x2, 0x85, 0x1, 0x8e90, 0x80008a0, 0x200071, 0x48004a1, 0x1f5001f, 0x85, 0x5e6106 },
	{ 1920,1200,60, 0xa20, 0xd0, 0xe2, 0x4da, 0x3, 0x26, 0x85, 0x8b8c, 0x3, 0x85, 0x2, 0x8c14, 0x7800a20, 0xd001b3, 0x4b004da, 0x2a3002a, 0x85, 0x4d6104 },
	{ 1920,1080,30, 0x898, 0x2c, 0x94, 0x465, 0x5, 0x24, 0x10a, 0x3f48, 0x8, 0x10a, 0x7, 0x3f74, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x10a, 0x346107 },
};

struct fl2000_timing_entry const *
fl2000_table_get_entry(
	uint32_t table_num,
	uint32_t width,
	uint32_t height,
	uint32_t freq)
{
	struct fl2000_timing_entry const * table;
	struct fl2000_timing_entry const * entry = NULL;
	uint32_t i;
	
	table = NULL;

	dbg_msg(TRACE_LEVEL_INFO, DBG_OTHER,
		 "Search table:%u width:%u height:%u freq:%u entry.",
		 table_num,
		 width,
		 height,
		 freq);

	switch (table_num) {
	case VGA_BIG_TABLE_24BIT_R0:
		table = big_table_24bit_r0;
		break;
	case VGA_BIG_TABLE_16BIT_R0:
		table = big_table_16bit_r0;
		break;
	default:
		table = big_table_16bit_r0;
		break;
	}

	for(i = 0; i < VGA_BIG_TABLE_SIZE; i++) {
		if (width == table[i].width &&
		    height == table[i].height &&
		    freq == table[i].freq) {
			dbg_msg(TRACE_LEVEL_INFO, DBG_OTHER,
				"Found matched set.");

			entry = &table[i];
			break;
		}
	}

    return entry;
}

// eof: fl2000_big_table.c
//
