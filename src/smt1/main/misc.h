
/* Stuff not actually used by main.c */


enum tile_contents {
	EMPTY_TILE=0,
	UNK=1,
	PSN_TRAP=2,
	DMG_TRAP=3,
	RED_TRAP=4,
	PIT=5,
	EXIT=7,
	MESSAGE=10,
};

enum map {
	HERO_HOUSE = 0,
	NEIGHBOR_HOUSE = 1,
	ARCADE = 2,
	INOKASHIRA_PARK = 3,
	HOSPITAL_1F = 4,
	HOSPITAL_2F = 5,
	ECHO_BIRU_1F = 6,
	ECHO_BIRU_2F = 7,
	ECHO_BIRU_3F = 8,
	ECHO_BIRU_4F = 9,
	ECHO_BIRU_5F = 10,
	LABO_1F = 11,
	LABO_2F = 12,
	SHINJUKU_E = 13,
	SHINJUKU_W = 14,
	SHINJUKU = 15,
	SHINJUKU_UNDERGROUND = 16,
	DISCO = 17,
	SHINJUKU_BIRU_1F = 18,
	SHINJUKU_BIRU_2F = 19,
	TOKYO_GVMT_OFFICE = 20,
	SHINJUKU_W_BIRU = 21,
	ICHIGAYA_1F = 22,
	ICHIGAYA_2F = 23,
	ICHIGAYA_3F = 24,
	EMBASSY_TUNNEL = 26,
	EMBASSY_1F = 27,
	EMBASSY_2F = 28,
	VAJRADHATU = 29,
	SHINJUKU_AFTER = 32,
	SHIBUYA_1F = 33,
	SHIBUYA_2F = 34,
	MENTAL_WORLD = 35,
	ROPPONGI_TUNNEL = 36,
	ROPPONGI_1F = 37,
	ROPPONGI_2F = 38,
	ROPPONGI_3F = 39,
	ROPPONGI_B1F = 40,
	CROSSROAD_B1F = 41,
	CROSSROAD_B2F = 42,
	ROPPONGI_CROSSROAD_B1F = 43,
	ROPPONGI_CROSSROAD_B2F = 44,
	IKEBUKURO_CROSSROAD_B1F = 45,
	IKEBUKURO_CROSSROAD_B2F = 46,
	POLICE_B1F = 47,
	POLICE_1F = 48,
	POLICE_2F = 49,
	POLICE_3F = 50,
	POLICE_4F = 51,
	POLICE_5F = 52,
	TOKYO_TOWER_1F = 53,
	TOKYO_TOWER_30F = 54,
	TOKYO_TOWER_45F = 55,
	GINZA_NW = 56,
	GINZA_NE = 57,
	GINZA_SW = 58,
	GINZA_SE = 59,
	GINZA_B1F = 60,
	GINZA_B2F = 61,
	GINZA_B3F = 62,
	GINZA_TUNNEL = 63,
	SHINAGAWA_1F = 64,
	SHINAGAWA_2F = 65,
	SHINAGAWA_3F = 66,
	SHINAGAWA_4F = 67,
	SUGAMO_PRISON_1F = 68,
	SUGAMO_PRISON_2F = 69,
	SUGAMO_PRISON_3F = 70,
	SUGAMO_PRISON_4F = 71,
	SUGAMO_PRISON_5F = 72,
	UENO_1F = 73,
	UENO_2F = 74,
	UENO_3F = 75,
	UENO_B1F = 76,
	UENO_B2F = 77,
	TDL_1F = 78,
	TDL_2F = 79,
	TDL_3F = 80,
	TDL_4F = 81,
	TOKYO_GVMT_OFFICE_32F = 82,
	TOKYO_GVMT_OFFICE_L45F = 83,
	TOKYO_GVMT_OFFICE_L46F = 84,
	TOKYO_GVMT_OFFICE_L47F = 85,
	TOKYO_GVMT_OFFICE_L48F = 86,
	TOKYO_GVMT_OFFICE_R45F = 87,
	TOKYO_GVMT_OFFICE_R46F = 88,
	TOKYO_GVMT_OFFICE_R47F = 89,
	TOKYO_GVMT_OFFICE_R48F = 90,
	NORTH_MANOR = 91,
	EAST_MANOR = 92,
	WEST_MANOR = 93,
	SOUTH_MANOR = 94,
	PALACE_B1F = 95,
	PALACE_B2F = 96,
	PALACE_B3F = 97,
	PALACE_B4F = 98,
	PALACE_B5F = 99,
	DREAM_1 = 100,
	DREAM_2 = 101,
	DREAM_3 = 102,
	ECHO_DREAM_1F = 104,
	ECHO_DREAM_2F = 105,
	ECHO_DREAM_3F = 106,
	ECHO_DREAM_4F = 107,
	ECHO_DREAM_5F = 108,
	CATHEDRAL_TOP = 111,
	CATHEDRAL_1F = 112,
	CATHEDRAL_B1F = 113,
	CATHEDRAL_B2F = 114,
	CATHEDRAL_B3F = 115,
	CATHEDRAL_B4F = 116,
	CATHEDRAL_B5F = 117,
	CATHEDRAL_B6F = 118,
	CATHEDRAL_B7F = 119,
	CATHEDRAL_B8F = 120,
	CATHEDRAL_2F = 121,
	CATHEDRAL_3F = 122,
	CATHEDRAL_4F = 123,
	CATHEDRAL_5F = 124,
	CATHEDRAL_6F = 125,
	CATHEDRAL_7F = 126,
	CATHEDRAL_8F = 127,
	GINZA_TUNNEL_B1F = 128,
	GINZA_TUNNEL_B2F = 129,
	GINZA_TUNNEL_B2F2 = 132,
	INVALID=255
};

enum wall_type {
	NONE=0, // No wall is present.
	WALL=1, // A wall is present.
	SPECIAL=2, // Usage varies.
	DOOR=3 // A wall with a door in it is present.
};






struct moon_hud_object_data_subsubstruct {
	SPRT_8 s[2];
	POLY_FT4 p;
};

struct money_hud_object_data {
	struct moon_hud_object_data_subsubstruct p[2][2];
	s16 x, y;
	s16 motion;
	s8 motion_counter;
	u8 buffer;
};

struct overworld_character_geometry {
	POLY_FT4 p;
	DR_MODE d;
};

struct tile_walls {
	enum wall_type west_wall:2;
	enum wall_type south_wall:2;
	enum wall_type east_wall:2;
	enum wall_type north_wall:2;
};


struct struct_13 {
	s16 x, y;
	s32 unk4;
};

struct party_hud_character_status_geometry {
	DR_MODE d0;
	SPRT_16 status_icon;
	DR_MODE d1;
	SPRT s0[2];
	SPRT hp_mp_numbers[2][3];
	POLY_F4 hp_bar_background;
	POLY_G4 hp_bar_foreground;
	POLY_F4 p0;
	POLY_F4 mp_bar_background;
	POLY_G4 mp_bar_foreground;
	POLY_F4 p1;
	DR_MODE dr_mode;
	POLY_F4 background;
};

struct party_hud_geometry_data {
	s16 x, y;
	u8 character_action;
	u8 unk5;
	u8 unk6;
	u8 unk7;
	CVECTOR color;
	struct struct_13 unkC;
	struct party_hud_character_status_geometry sg[2];
	POLY_G4 p[2][5];
};

struct party_hud_geometry_primitives {
	POLY_F4 p0;
	u32 unk18;
	u32 unk1C;
	POLY_F4 p1;
	POLY_F4 p2;
	POLY_F4 p3;
};

struct party_hud_object_data {
	struct party_hud_geometry_primitives p[2];
	struct party_hud_geometry_data d[6];
	s8 unk1CA8;
	s8 status;
	s8 organization;
	u8 buffer; /* Created by retype action */
};

struct overworld_character_object_data {
	struct overworld_character_geometry g[2];
	s16 x, y;
	s8 angle;
	s8 rotation_dir;
	u8 buffer;
	s8 unk6F;
	s8 changing_size; /* 0 = shrinking, 1 = minimum size reached, 2 = not changing, 3 = growing */
	s8 size;
	u8 unk72;
	u8 unk73;
	CVECTOR color;
	s8 color_offset;
	u8 unk79;
	u8 unk7A;
	u8 unk7B;
};



typedef struct moon_hud_object_data_substruct {
	struct moon_hud_object_data_subsubstruct field0_0x0;
	struct moon_hud_object_data_subsubstruct field1_0x48;
	struct moon_hud_object_data_subsubstruct field2_0x90;
	u8 field3_0xd8;
	u8 field4_0xd9;
	u8 field5_0xda;
	u8 field6_0xdb;
	u8 field7_0xdc;
	u8 field8_0xdd;
	u8 field9_0xde;
	u8 field10_0xdf;
	u8 field11_0xe0;
	u8 field12_0xe1;
	u8 field13_0xe2;
	u8 field14_0xe3;
	u8 field15_0xe4;
	u8 field16_0xe5;
	u8 field17_0xe6;
	u8 field18_0xe7;
	u8 field19_0xe8;
	u8 field20_0xe9;
	u8 field21_0xea;
	u8 field22_0xeb;
	u8 field23_0xec;
	u8 field24_0xed;
	u8 field25_0xee;
	u8 field26_0xef;
	u8 field27_0xf0;
	u8 field28_0xf1;
	u8 field29_0xf2;
	u8 field30_0xf3;
	u8 field31_0xf4;
	u8 field32_0xf5;
	u8 field33_0xf6;
	u8 field34_0xf7;
	u8 field35_0xf8;
	u8 field36_0xf9;
	u8 field37_0xfa;
	u8 field38_0xfb;
	u8 field39_0xfc;
	u8 field40_0xfd;
	u8 field41_0xfe;
	u8 field42_0xff;
	SPRT_16 field43_0x100;
	SPRT_16 field44_0x110;
} moon_hud_object_data_substruct;

typedef struct encounter_bar_geometry_3d {
	u8 field0_0x0;
	u8 field1_0x1;
	u8 field2_0x2;
	u8 field3_0x3;
	u8 field4_0x4;
	u8 field5_0x5;
	u8 field6_0x6;
	u8 field7_0x7;
	u8 field8_0x8;
	u8 field9_0x9;
	u8 field10_0xa;
	u8 field11_0xb;
	u8 field12_0xc;
	u8 field13_0xd;
	u8 field14_0xe;
	u8 field15_0xf;
	u8 field16_0x10;
	u8 field17_0x11;
	u8 field18_0x12;
	u8 field19_0x13;
	DR_MODE field20_0x14;
	POLY_G4 field21_0x20;
} encounter_bar_geometry_3d;

typedef struct compass_geometry {
	SPRT field0_0x0;
	SPRT field1_0x14;
	SPRT field2_0x28;
	SPRT field3_0x3c;
	u8 field4_0x50;
	u8 field5_0x51;
	u8 field6_0x52;
	u8 field7_0x53;
	SPRT field8_0x54;
	DR_MODE field9_0x68;
	u8 field10_0x74;
	u8 field11_0x75;
	u8 field12_0x76;
	u8 field13_0x77;
	u8 field14_0x78;
	u8 field15_0x79;
	u8 field16_0x7a;
	u8 field17_0x7b;
	u8 field18_0x7c;
	u8 field19_0x7d;
	u8 field20_0x7e;
	u8 field21_0x7f;
	u8 field22_0x80;
	u8 field23_0x81;
	u8 field24_0x82;
	u8 field25_0x83;
	u8 field26_0x84;
	u8 field27_0x85;
	u8 field28_0x86;
	u8 field29_0x87;
	u8 field30_0x88;
	u8 field31_0x89;
	u8 field32_0x8a;
	u8 field33_0x8b;
	u8 field34_0x8c;
	u8 field35_0x8d;
	u8 field36_0x8e;
	u8 field37_0x8f;
} compass_geometry;

typedef union navigation_hud_geometry {
	struct compass_geometry field0;
	struct moon_hud_object_data_substruct field1;
} navigation_hud_geometry;

typedef struct navigation_hud_object_data {
	union navigation_hud_geometry field0_0x0;
	union navigation_hud_geometry field1_0x90;
	s16 x, y;
	s16 field4_0x124;
	s8 field5_0x126;
	s8 field6_0x127;
	s8 field7_0x128;
	s8 field8_0x129;
	u8 buffer;
	u8 field10_0x12b;
	u8 field11_0x12c;
	u8 field12_0x12d;
	u8 field13_0x12e;
	u8 field14_0x12f;
	u8 field15_0x130;
	u8 field16_0x131;
	u8 field17_0x132;
	u8 field18_0x133;
	u8 field19_0x134;
	u8 field20_0x135;
	u8 field21_0x136;
	u8 field22_0x137;
	u8 field23_0x138;
	u8 field24_0x139;
	u8 field25_0x13a;
	u8 field26_0x13b;
	u8 field27_0x13c;
	u8 field28_0x13d;
	u8 field29_0x13e;
	u8 field30_0x13f;
	u8 field31_0x140;
	u8 field32_0x141;
	u8 field33_0x142;
	u8 field34_0x143;
	u8 field35_0x144;
	u8 field36_0x145;
	u8 field37_0x146;
	u8 field38_0x147;
	u8 field39_0x148;
	u8 field40_0x149;
	u8 field41_0x14a;
	u8 field42_0x14b;
	u8 field43_0x14c;
	u8 field44_0x14d;
	u8 field45_0x14e;
	u8 field46_0x14f;
	u8 field47_0x150;
	u8 field48_0x151;
	u8 field49_0x152;
	u8 field50_0x153;
	u8 field51_0x154;
	u8 field52_0x155;
	u8 field53_0x156;
	u8 field54_0x157;
	u8 field55_0x158;
	u8 field56_0x159;
	u8 field57_0x15a;
	u8 field58_0x15b;
	u8 field59_0x15c;
	u8 field60_0x15d;
	u8 field61_0x15e;
	u8 field62_0x15f;
	u8 field63_0x160;
	u8 field64_0x161;
	u8 field65_0x162;
	u8 field66_0x163;
	u8 field67_0x164;
	u8 field68_0x165;
	u8 field69_0x166;
	u8 field70_0x167;
	u8 field71_0x168;
	u8 field72_0x169;
	u8 field73_0x16a;
	u8 field74_0x16b;
	u8 field75_0x16c;
	u8 field76_0x16d;
	u8 field77_0x16e;
	u8 field78_0x16f;
	u8 field79_0x170;
	u8 field80_0x171;
	u8 field81_0x172;
	u8 field82_0x173;
	u8 field83_0x174;
	u8 field84_0x175;
	u8 field85_0x176;
	u8 field86_0x177;
	u8 field87_0x178;
	u8 field88_0x179;
	u8 field89_0x17a;
	u8 field90_0x17b;
	u8 field91_0x17c;
	u8 field92_0x17d;
	u8 field93_0x17e;
	u8 field94_0x17f;
	u8 field95_0x180;
	u8 field96_0x181;
	u8 field97_0x182;
	u8 field98_0x183;
	u8 field99_0x184;
	u8 field100_0x185;
	u8 field101_0x186;
	u8 field102_0x187;
	u8 field103_0x188;
	u8 field104_0x189;
	u8 field105_0x18a;
	u8 field106_0x18b;
	u8 field107_0x18c;
	u8 field108_0x18d;
	u8 field109_0x18e;
	u8 field110_0x18f;
	u8 field111_0x190;
	u8 field112_0x191;
	u8 field113_0x192;
	u8 field114_0x193;
	u8 field115_0x194;
	u8 field116_0x195;
	u8 field117_0x196;
	u8 field118_0x197;
	u8 field119_0x198;
	u8 field120_0x199;
	u8 field121_0x19a;
	u8 field122_0x19b;
	u8 field123_0x19c;
	u8 field124_0x19d;
	u8 field125_0x19e;
	u8 field126_0x19f;
	u8 field127_0x1a0;
	u8 field128_0x1a1;
	u8 field129_0x1a2;
	u8 field130_0x1a3;
	u8 field131_0x1a4;
	u8 field132_0x1a5;
	u8 field133_0x1a6;
	u8 field134_0x1a7;
	u8 field135_0x1a8;
	u8 field136_0x1a9;
	u8 field137_0x1aa;
	u8 field138_0x1ab;
	u8 field139_0x1ac;
	u8 field140_0x1ad;
	u8 field141_0x1ae;
	u8 field142_0x1af;
	u8 field143_0x1b0;
	u8 field144_0x1b1;
	u8 field145_0x1b2;
	u8 field146_0x1b3;
	u8 field147_0x1b4;
	u8 field148_0x1b5;
	u8 field149_0x1b6;
	u8 field150_0x1b7;
	u8 field151_0x1b8;
	u8 field152_0x1b9;
	u8 field153_0x1ba;
	u8 field154_0x1bb;
	u8 field155_0x1bc;
	u8 field156_0x1bd;
	u8 field157_0x1be;
	u8 field158_0x1bf;
	u8 field159_0x1c0;
	u8 field160_0x1c1;
	u8 field161_0x1c2;
	u8 field162_0x1c3;
	u8 field163_0x1c4;
	u8 field164_0x1c5;
	u8 field165_0x1c6;
	u8 field166_0x1c7;
	u8 field167_0x1c8;
	u8 field168_0x1c9;
	u8 field169_0x1ca;
	u8 field170_0x1cb;
	u8 field171_0x1cc;
	u8 field172_0x1cd;
	u8 field173_0x1ce;
	u8 field174_0x1cf;
	u8 field175_0x1d0;
	u8 field176_0x1d1;
	u8 field177_0x1d2;
	u8 field178_0x1d3;
	u8 field179_0x1d4;
	u8 field180_0x1d5;
	u8 field181_0x1d6;
	u8 field182_0x1d7;
	u8 field183_0x1d8;
	u8 field184_0x1d9;
	u8 field185_0x1da;
	u8 field186_0x1db;
	u8 field187_0x1dc;
	u8 field188_0x1dd;
	u8 field189_0x1de;
	u8 field190_0x1df;
	u8 field191_0x1e0;
	u8 field192_0x1e1;
	u8 field193_0x1e2;
	u8 field194_0x1e3;
	u8 field195_0x1e4;
	u8 field196_0x1e5;
	u8 field197_0x1e6;
	u8 field198_0x1e7;
	u8 field199_0x1e8;
	u8 field200_0x1e9;
	u8 field201_0x1ea;
	u8 field202_0x1eb;
	u8 field203_0x1ec;
	u8 field204_0x1ed;
	u8 field205_0x1ee;
	u8 field206_0x1ef;
	u8 field207_0x1f0;
	u8 field208_0x1f1;
	u8 field209_0x1f2;
	u8 field210_0x1f3;
	u8 field211_0x1f4;
	u8 field212_0x1f5;
	u8 field213_0x1f6;
	u8 field214_0x1f7;
	u8 field215_0x1f8;
	u8 field216_0x1f9;
	u8 field217_0x1fa;
	u8 field218_0x1fb;
	u8 field219_0x1fc;
	u8 field220_0x1fd;
	u8 field221_0x1fe;
	u8 field222_0x1ff;
	u8 field223_0x200;
	u8 field224_0x201;
	u8 field225_0x202;
	u8 field226_0x203;
	u8 field227_0x204;
	u8 field228_0x205;
	u8 field229_0x206;
	u8 field230_0x207;
	u8 field231_0x208;
	u8 field232_0x209;
	u8 field233_0x20a;
	u8 field234_0x20b;
	u8 field235_0x20c;
	u8 field236_0x20d;
	u8 field237_0x20e;
	u8 field238_0x20f;
	u8 field239_0x210;
	u8 field240_0x211;
	u8 field241_0x212;
	u8 field242_0x213;
	u8 field243_0x214;
	u8 field244_0x215;
	u8 field245_0x216;
	u8 field246_0x217;
	u8 field247_0x218;
	u8 field248_0x219;
	u8 field249_0x21a;
	u8 field250_0x21b;
	u8 field251_0x21c;
	u8 field252_0x21d;
	u8 field253_0x21e;
	u8 field254_0x21f;
	u8 field255_0x220;
	u8 field256_0x221;
	u8 field257_0x222;
	u8 field258_0x223;
	u8 field259_0x224;
	u8 field260_0x225;
	u8 field261_0x226;
	u8 field262_0x227;
	u8 field263_0x228;
	u8 field264_0x229;
	u8 field265_0x22a;
	u8 field266_0x22b;
	u8 field267_0x22c;
	u8 field268_0x22d;
	u8 field269_0x22e;
	u8 field270_0x22f;
	u8 field271_0x230;
	u8 field272_0x231;
	u8 field273_0x232;
	u8 field274_0x233;
	u8 field275_0x234;
	u8 field276_0x235;
	u8 field277_0x236;
	u8 field278_0x237;
	u8 field279_0x238;
	u8 field280_0x239;
	u8 field281_0x23a;
	u8 field282_0x23b;
	u8 field283_0x23c;
	u8 field284_0x23d;
	u8 field285_0x23e;
	u8 field286_0x23f;
	u8 field287_0x240;
	u8 field288_0x241;
	u8 field289_0x242;
	u8 field290_0x243;
	u8 field291_0x244;
	u8 field292_0x245;
	u8 field293_0x246;
	u8 field294_0x247;
	u8 field295_0x248;
	u8 field296_0x249;
	u8 field297_0x24a;
	u8 field298_0x24b;
	u8 field299_0x24c;
	u8 field300_0x24d;
	u8 field301_0x24e;
	u8 field302_0x24f;
	u8 field303_0x250;
	u8 field304_0x251;
	u8 field305_0x252;
	u8 field306_0x253;
	u8 field307_0x254;
	u8 field308_0x255;
	u8 field309_0x256;
	u8 field310_0x257;
	u8 field311_0x258;
	u8 field312_0x259;
	u8 field313_0x25a;
	u8 field314_0x25b;
	u8 field315_0x25c;
	u8 field316_0x25d;
	u8 field317_0x25e;
	u8 field318_0x25f;
	u8 field319_0x260;
	u8 field320_0x261;
	u8 field321_0x262;
	u8 field322_0x263;
	u8 field323_0x264;
	u8 field324_0x265;
	u8 field325_0x266;
	u8 field326_0x267;
	u8 field327_0x268;
	u8 field328_0x269;
	u8 field329_0x26a;
	u8 field330_0x26b;
	u8 field331_0x26c;
	u8 field332_0x26d;
	u8 field333_0x26e;
	u8 field334_0x26f;
	u8 field335_0x270;
	u8 field336_0x271;
	u8 field337_0x272;
	u8 field338_0x273;
	u8 field339_0x274;
	u8 field340_0x275;
	u8 field341_0x276;
	u8 field342_0x277;
	u8 field343_0x278;
	u8 field344_0x279;
	u8 field345_0x27a;
	u8 field346_0x27b;
	u8 field347_0x27c;
	u8 field348_0x27d;
	u8 field349_0x27e;
	u8 field350_0x27f;
	u8 field351_0x280;
	u8 field352_0x281;
	u8 field353_0x282;
	u8 field354_0x283;
	u8 field355_0x284;
	u8 field356_0x285;
	u8 field357_0x286;
	u8 field358_0x287;
	u8 field359_0x288;
	u8 field360_0x289;
	u8 field361_0x28a;
	u8 field362_0x28b;
	u8 field363_0x28c;
	u8 field364_0x28d;
	u8 field365_0x28e;
	u8 field366_0x28f;
	u8 field367_0x290;
	u8 field368_0x291;
	u8 field369_0x292;
	u8 field370_0x293;
	u8 field371_0x294;
	u8 field372_0x295;
	u8 field373_0x296;
	u8 field374_0x297;
	u8 field375_0x298;
	u8 field376_0x299;
	u8 field377_0x29a;
	u8 field378_0x29b;
	u8 field379_0x29c;
	u8 field380_0x29d;
	u8 field381_0x29e;
	u8 field382_0x29f;
	u8 field383_0x2a0;
	u8 field384_0x2a1;
	u8 field385_0x2a2;
	u8 field386_0x2a3;
	u8 field387_0x2a4;
	u8 field388_0x2a5;
	u8 field389_0x2a6;
	u8 field390_0x2a7;
	u8 field391_0x2a8;
	u8 field392_0x2a9;
	u8 field393_0x2aa;
	u8 field394_0x2ab;
	u8 field395_0x2ac;
	u8 field396_0x2ad;
	u8 field397_0x2ae;
	u8 field398_0x2af;
	u8 field399_0x2b0;
	u8 field400_0x2b1;
	u8 field401_0x2b2;
	u8 field402_0x2b3;
	u8 field403_0x2b4;
	u8 field404_0x2b5;
	u8 field405_0x2b6;
	u8 field406_0x2b7;
	u8 field407_0x2b8;
	u8 field408_0x2b9;
	u8 field409_0x2ba;
	u8 field410_0x2bb;
	u8 field411_0x2bc;
	u8 field412_0x2bd;
	u8 field413_0x2be;
	u8 field414_0x2bf;
	u8 field415_0x2c0;
	u8 field416_0x2c1;
	u8 field417_0x2c2;
	u8 field418_0x2c3;
	u8 field419_0x2c4;
	u8 field420_0x2c5;
	u8 field421_0x2c6;
	u8 field422_0x2c7;
	u8 field423_0x2c8;
	u8 field424_0x2c9;
	u8 field425_0x2ca;
	u8 field426_0x2cb;
	u8 field427_0x2cc;
	u8 field428_0x2cd;
	u8 field429_0x2ce;
	u8 field430_0x2cf;
	u8 field431_0x2d0;
	u8 field432_0x2d1;
	u8 field433_0x2d2;
	u8 field434_0x2d3;
	u8 field435_0x2d4;
	u8 field436_0x2d5;
	u8 field437_0x2d6;
	u8 field438_0x2d7;
	u8 field439_0x2d8;
	u8 field440_0x2d9;
	u8 field441_0x2da;
	u8 field442_0x2db;
	u8 field443_0x2dc;
	u8 field444_0x2dd;
	u8 field445_0x2de;
	u8 field446_0x2df;
	u8 field447_0x2e0;
	u8 field448_0x2e1;
	u8 field449_0x2e2;
	u8 field450_0x2e3;
	u8 field451_0x2e4;
	u8 field452_0x2e5;
	u8 field453_0x2e6;
	u8 field454_0x2e7;
	u8 field455_0x2e8;
	u8 field456_0x2e9;
	u8 field457_0x2ea;
	u8 field458_0x2eb;
	u8 field459_0x2ec;
	u8 field460_0x2ed;
	u8 field461_0x2ee;
	u8 field462_0x2ef;
	u8 field463_0x2f0;
	u8 field464_0x2f1;
	u8 field465_0x2f2;
	u8 field466_0x2f3;
	u8 field467_0x2f4;
	u8 field468_0x2f5;
	u8 field469_0x2f6;
	u8 field470_0x2f7;
	u8 field471_0x2f8;
	u8 field472_0x2f9;
	u8 field473_0x2fa;
	u8 field474_0x2fb;
	u8 field475_0x2fc;
	u8 field476_0x2fd;
	u8 field477_0x2fe;
	u8 field478_0x2ff;
} navigation_hud_object_data;



typedef struct encounter_bar_geometry_2d {
	DR_MODE field0_0x0;
	POLY_G4 field1_0xc;
	u8 field2_0x30;
	u8 field3_0x31;
	u8 field4_0x32;
	u8 field5_0x33;
	u8 field6_0x34;
	u8 field7_0x35;
	u8 field8_0x36;
	u8 field9_0x37;
	u8 field10_0x38;
	u8 field11_0x39;
	u8 field12_0x3a;
	u8 field13_0x3b;
	u8 field14_0x3c;
	u8 field15_0x3d;
	u8 field16_0x3e;
	u8 field17_0x3f;
	u8 field18_0x40;
	u8 field19_0x41;
	u8 field20_0x42;
	u8 field21_0x43;
} encounter_bar_geometry_2d;

typedef union encounter_bar_geometry {
	struct encounter_bar_geometry_2d enc_bar_2d;
	struct encounter_bar_geometry_3d enc_bar_3d;
} encounter_bar_geometry;

typedef struct encounter_bar_object_data_substruct {
	SPRT sprite;
	union encounter_bar_geometry geometry;
	u8 field2_0x58;
	u8 field3_0x59;
	u8 field4_0x5a;
	u8 field5_0x5b;
	u8 field6_0x5c;
	u8 field7_0x5d;
	u8 field8_0x5e;
	u8 field9_0x5f;
	u8 field10_0x60;
	u8 field11_0x61;
	u8 field12_0x62;
	u8 field13_0x63;
	u8 field14_0x64;
	u8 field15_0x65;
	u8 field16_0x66;
	u8 field17_0x67;
	u8 field18_0x68;
	u8 field19_0x69;
	u8 field20_0x6a;
	u8 field21_0x6b;
	u8 field22_0x6c;
	u8 field23_0x6d;
	u8 field24_0x6e;
	u8 field25_0x6f;
	u8 field26_0x70;
	u8 field27_0x71;
	u8 field28_0x72;
	u8 field29_0x73;
	u8 field30_0x74;
	u8 field31_0x75;
	u8 field32_0x76;
	u8 field33_0x77;
	u8 field34_0x78;
	u8 field35_0x79;
	u8 field36_0x7a;
	u8 field37_0x7b;
	u8 field38_0x7c;
	u8 field39_0x7d;
	u8 field40_0x7e;
	u8 field41_0x7f;
	u8 field42_0x80;
	u8 field43_0x81;
	u8 field44_0x82;
	u8 field45_0x83;
	u8 field46_0x84;
	u8 field47_0x85;
	u8 field48_0x86;
	u8 field49_0x87;
	u8 field50_0x88;
	u8 field51_0x89;
	u8 field52_0x8a;
	u8 field53_0x8b;
	u8 field54_0x8c;
	u8 field55_0x8d;
	u8 field56_0x8e;
	u8 field57_0x8f;
	u8 field58_0x90;
	u8 field59_0x91;
	u8 field60_0x92;
	u8 field61_0x93;
	u8 field62_0x94;
	u8 field63_0x95;
	u8 field64_0x96;
	u8 field65_0x97;
	u8 field66_0x98;
	u8 field67_0x99;
	u8 field68_0x9a;
	u8 field69_0x9b;
	u8 field70_0x9c;
	u8 field71_0x9d;
	u8 field72_0x9e;
	u8 field73_0x9f;
	u8 field74_0xa0;
	u8 field75_0xa1;
	u8 field76_0xa2;
	u8 field77_0xa3;
	u8 field78_0xa4;
	u8 field79_0xa5;
	u8 field80_0xa6;
	u8 field81_0xa7;
	u8 field82_0xa8;
	u8 field83_0xa9;
	u8 field84_0xaa;
	u8 field85_0xab;
	u8 field86_0xac;
	u8 field87_0xad;
	u8 field88_0xae;
	u8 field89_0xaf;
	u8 field90_0xb0;
	u8 field91_0xb1;
	u8 field92_0xb2;
	u8 field93_0xb3;
	u8 field94_0xb4;
	u8 field95_0xb5;
	u8 field96_0xb6;
	u8 field97_0xb7;
	u8 field98_0xb8;
	u8 field99_0xb9;
	u8 field100_0xba;
	u8 field101_0xbb;
	u8 field102_0xbc;
	u8 field103_0xbd;
	u8 field104_0xbe;
	u8 field105_0xbf;
	u8 field106_0xc0;
	u8 field107_0xc1;
	u8 field108_0xc2;
	u8 field109_0xc3;
} encounter_bar_object_data_substruct;

typedef struct dungeon_data_substruct {
	GsDOBJ2 obj;
	u8 field1_0x10;
	u8 field2_0x11;
	s16 field3_0x12;
	s16 field4_0x14;
	u8 field5_0x16;
	u8 field6_0x17;
} dungeon_data_substruct;



typedef struct moon_hud_object_data {
	struct moon_hud_object_data_substruct field0_0x0;
	struct moon_hud_object_data_substruct field1_0x120;
	s16 field2_0x240;
	s16 field3_0x242;
	s16 field4_0x244;
	s8 field5_0x246;
	s8 field6_0x247;
	s8 field7_0x248;
	u8 buffer; /* Created by retype action */
	u8 field9_0x24a;
	u8 field10_0x24b;
} moon_hud_object_data;

typedef struct dungeon_tile {
	struct tile_walls walls;
	enum tile_contents contents;
} dungeon_tile;

typedef struct list_object_data {
	u8 field0_0x0;
	u8 field1_0x1;
	s16 field2_0x2;
	u16 list_len;
	u16 field4_0x6;
	u16 field5_0x8;
	u8 field6_0xa;
	u8 field7_0xb;
	u8 field8_0xc;
	u8 field9_0xd;
	u8 field10_0xe;
	u8 field11_0xf;
	s16 field12_0x10;
	u8 field13_0x12;
	u8 field14_0x13;
	u8 field15_0x14;
	u8 field16_0x15;
	u8 field17_0x16;
	u8 field18_0x17;
	int field19_0x18;
	u8 field20_0x1c;
	u8 field21_0x1d;
	u8 field22_0x1e;
	u8 field23_0x1f;
	u8 field24_0x20;
	u8 field25_0x21;
	u8 field26_0x22;
	u8 field27_0x23;
	s16 list_index;
	u16 field29_0x26;
	u16 field30_0x28;
	s16 field31_0x2a;
	u8 field32_0x2c;
	u8 field33_0x2d;
	s16 field34_0x2e;
	s16 field35_0x30;
	s16 field36_0x32;
	u8 field37_0x34;
	u8 field38_0x35;
	s16 field39_0x36;
	s16 loop;
	s16 field41_0x3a;
	u8 field42_0x3c;
	u8 field43_0x3d;
	s16 field44_0x3e;
	s16 field45_0x40;
	u8 field46_0x42;
	u8 field47_0x43;
	s16 field48_0x44;
	u16 field49_0x46;
	u8 field50_0x48;
	u8 field51_0x49;
	u8 field52_0x4a;
	u8 field53_0x4b;
	u8 field54_0x4c;
	u8 field55_0x4d;
	s8 field56_0x4e;
	u8 field57_0x4f;
	u8 field58_0x50;
	u8 field59_0x51;
	s16 field60_0x52;
	s16 field61_0x54;
	s16 field62_0x56;
	s16 field63_0x58;
	u8 field64_0x5a;
	u8 field65_0x5b;
	u8 field66_0x5c;
	u8 field67_0x5d;
	u8 field68_0x5e;
	u8 field69_0x5f;
	u8 field70_0x60;
	u8 field71_0x61;
	u8 field72_0x62;
	u8 field73_0x63;
	struct object * field74_0x64;
	u8 field75_0x68;
	u8 field76_0x69;
	u8 field77_0x6a;
	u8 field78_0x6b;
	struct object * field79_0x6c;
	struct object * field80_0x70;
	struct object * field81_0x74;
} list_object_data;





typedef struct dungeon_init_data {
	struct astruct_14 field0_0x0;
	unsigned int initial_dir; /* Created by retype action */
	int appearance;
	union object_data * door_text_id;
	int field4_0x1c;
	int field5_0x20;
} dungeon_init_data;









typedef struct struct_7 {
	POLY_FT4 polys[4];
	SPRT_16 sprts[4];
	DR_MODE dr_mode;
} struct_7;

typedef struct border_object_data {
	struct struct_7 geom[2];
	struct pos pos;
	s8 buffer; /* Created by retype action */
	u8 field3_0x1dd;
	u8 field4_0x1de;
	u8 field5_0x1df;
} border_object_data;







typedef struct encounter_bar_object_data {
	struct encounter_bar_object_data_substruct geometry[2];
	int proximity_1;
	int proximity_2;
	s16 keep_synced;
	s8 buffer;
	u8 field5_0x193;
} encounter_bar_object_data;

typedef struct object_info {
	void * origin;
	union object_data * next;
	unsigned int field2_0x8;
	unsigned int size;
	union object_data * field4_0x10;
	union object_data * field5_0x14;
	u8 * field6_0x18;
	u8 field7_0x1c;
	u8 field8_0x1d;
	u8 field9_0x1e;
	u8 field10_0x1f;
	u8 field11_0x20;
	u8 field12_0x21;
	u8 field13_0x22;
	u8 field14_0x23;
	u8 field15_0x24;
	u8 field16_0x25;
	u8 field17_0x26;
	u8 field18_0x27;
	u8 field19_0x28;
	u8 field20_0x29;
	u8 field21_0x2a;
	u8 field22_0x2b;
	u8 field23_0x2c;
	u8 field24_0x2d;
	u8 field25_0x2e;
	u8 field26_0x2f;
	u8 field27_0x30;
	u8 field28_0x31;
	u8 field29_0x32;
	u8 field30_0x33;
	union object_data * field31_0x34;
	u8 field32_0x38;
	u8 field33_0x39;
	u8 field34_0x3a;
	u8 field35_0x3b;
	u8 field36_0x3c;
	u8 field37_0x3d;
	u8 field38_0x3e;
	u8 field39_0x3f;
	u16 field40_0x40;
	s16 field41_0x42;
	u16 field42_0x44;
	s16 field43_0x46;
	s16 field44_0x48;
	u16 field45_0x4a;
	u16 field46_0x4c;
	u8 field47_0x4e;
	u8 field48_0x4f;
	s16 field49_0x50;
	u8 field50_0x52;
	u8 field51_0x53;
	u8 field52_0x54;
	u8 field53_0x55;
	u8 field54_0x56;
	u8 field55_0x57;
	u8 field56_0x58;
	u8 field57_0x59;
	u8 field58_0x5a;
	u8 field59_0x5b;
	s16 field60_0x5c;
	s16 field61_0x5e;
	s16 field62_0x60;
	u16 field63_0x62;
	u8 field64_0x64;
	u8 field65_0x65;
	u8 field66_0x66;
	u8 field67_0x67;
	u16 x_pos; /* Created by retype action */
	u16 y_pos; /* Created by retype action */
	u8 field70_0x6c;
	u8 field71_0x6d;
	u8 field72_0x6e;
	u8 field73_0x6f;
	unsigned int field74_0x70;
	u8 field75_0x74;
	u8 field76_0x75;
	u8 field77_0x76;
	u8 field78_0x77;
	u8 field79_0x78;
	u8 field80_0x79;
	u8 field81_0x7a;
	u8 field82_0x7b;
	u8 field83_0x7c;
	u8 field84_0x7d;
	u8 field85_0x7e;
	u8 field86_0x7f;
	u8 field87_0x80;
	u8 field88_0x81;
	u8 field89_0x82;
	u8 field90_0x83;
	u8 field91_0x84;
	u8 field92_0x85;
	u8 field93_0x86;
	u8 field94_0x87;
	u8 field95_0x88;
	u8 field96_0x89;
	u8 field97_0x8a;
	u8 field98_0x8b;
	u8 field99_0x8c;
	u8 field100_0x8d;
	u8 field101_0x8e;
	u8 field102_0x8f;
	u8 field103_0x90;
	u8 field104_0x91;
	u8 field105_0x92;
	u8 field106_0x93;
	u8 field107_0x94;
	u8 field108_0x95;
	u8 field109_0x96;
	u8 field110_0x97;
	u8 field111_0x98;
	u8 field112_0x99;
	u8 field113_0x9a;
	u8 field114_0x9b;
	u8 field115_0x9c;
	u8 field116_0x9d;
	u8 field117_0x9e;
	u8 field118_0x9f;
	u8 field119_0xa0;
	u8 field120_0xa1;
	u8 field121_0xa2;
	u8 field122_0xa3;
	u8 field123_0xa4;
	u8 field124_0xa5;
	u8 field125_0xa6;
	u8 field126_0xa7;
	u8 field127_0xa8;
	u8 field128_0xa9;
	u8 field129_0xaa;
	u8 field130_0xab;
	u8 field131_0xac;
	u8 field132_0xad;
	u8 field133_0xae;
	u8 field134_0xaf;
	u8 field135_0xb0;
	u8 field136_0xb1;
	u8 field137_0xb2;
	u8 field138_0xb3;
	u8 field139_0xb4;
	u8 field140_0xb5;
	u8 field141_0xb6;
	u8 field142_0xb7;
	u8 field143_0xb8;
	u8 field144_0xb9;
	u8 field145_0xba;
	u8 field146_0xbb;
	u8 field147_0xbc;
	u8 field148_0xbd;
	u8 field149_0xbe;
	u8 field150_0xbf;
	u8 field151_0xc0;
	u8 field152_0xc1;
	u8 field153_0xc2;
	u8 field154_0xc3;
	u8 field155_0xc4;
	u8 field156_0xc5;
	u8 field157_0xc6;
	u8 field158_0xc7;
	u8 field159_0xc8;
	u8 field160_0xc9;
	u8 field161_0xca;
	u8 field162_0xcb;
	u8 field163_0xcc;
	u8 field164_0xcd;
	u8 field165_0xce;
	u8 field166_0xcf;
	u8 field167_0xd0;
	u8 field168_0xd1;
	u8 field169_0xd2;
	u8 field170_0xd3;
	u8 field171_0xd4;
	u8 field172_0xd5;
	u8 field173_0xd6;
	u8 field174_0xd7;
	u8 field175_0xd8;
	u8 field176_0xd9;
	u8 field177_0xda;
	u8 field178_0xdb;
	u8 field179_0xdc;
	u8 field180_0xdd;
	u8 field181_0xde;
	u8 field182_0xdf;
	u8 field183_0xe0;
	u8 field184_0xe1;
	u8 field185_0xe2;
	u8 field186_0xe3;
	u8 field187_0xe4;
	u8 field188_0xe5;
	u8 field189_0xe6;
	u8 field190_0xe7;
	u8 field191_0xe8;
	u8 field192_0xe9;
	u8 field193_0xea;
	u8 field194_0xeb;
	u8 field195_0xec;
	u8 field196_0xed;
	u8 field197_0xee;
	u8 field198_0xef;
	u8 field199_0xf0;
	u8 field200_0xf1;
	u8 field201_0xf2;
	u8 field202_0xf3;
	u8 field203_0xf4;
	u8 field204_0xf5;
	u8 field205_0xf6;
	u8 field206_0xf7;
	u8 field207_0xf8;
	u8 field208_0xf9;
	u8 field209_0xfa;
	u8 field210_0xfb;
	u8 field211_0xfc;
	u8 field212_0xfd;
	u8 field213_0xfe;
	u8 field214_0xff;
	u8 field215_0x100;
	u8 field216_0x101;
	u8 field217_0x102;
	u8 field218_0x103;
	u8 field219_0x104;
	u8 field220_0x105;
	u8 field221_0x106;
	u8 field222_0x107;
	u8 field223_0x108;
	u8 field224_0x109;
	u8 field225_0x10a;
	u8 field226_0x10b;
	u8 field227_0x10c;
	u8 field228_0x10d;
	u8 field229_0x10e;
	u8 field230_0x10f;
	u8 field231_0x110;
	u8 field232_0x111;
	u8 field233_0x112;
	u8 field234_0x113;
	u8 field235_0x114;
	u8 field236_0x115;
	u8 field237_0x116;
	u8 field238_0x117;
	u8 field239_0x118;
	u8 field240_0x119;
	u8 field241_0x11a;
	u8 field242_0x11b;
	u8 field243_0x11c;
	u8 field244_0x11d;
	u8 field245_0x11e;
	u8 field246_0x11f;
	u8 field247_0x120;
	u8 field248_0x121;
	u8 field249_0x122;
	u8 field250_0x123;
	u8 field251_0x124;
	u8 field252_0x125;
	u8 field253_0x126;
	u8 field254_0x127;
	u8 field255_0x128;
	u8 field256_0x129;
	u8 field257_0x12a;
	u8 field258_0x12b;
	u8 field259_0x12c;
	u8 field260_0x12d;
	u8 field261_0x12e;
	u8 field262_0x12f;
	u8 field263_0x130;
	u8 field264_0x131;
	u8 field265_0x132;
	u8 field266_0x133;
	u8 field267_0x134;
	u8 field268_0x135;
	u8 field269_0x136;
	u8 field270_0x137;
	u8 field271_0x138;
	u8 field272_0x139;
	u8 field273_0x13a;
	u8 field274_0x13b;
	u8 field275_0x13c;
	u8 field276_0x13d;
	u8 field277_0x13e;
	u8 field278_0x13f;
	u8 field279_0x140;
	u8 field280_0x141;
	u8 field281_0x142;
	u8 field282_0x143;
	u8 field283_0x144;
	u8 field284_0x145;
	u8 field285_0x146;
	u8 field286_0x147;
	u8 field287_0x148;
	u8 field288_0x149;
	u8 field289_0x14a;
	u8 field290_0x14b;
	u8 field291_0x14c;
	u8 field292_0x14d;
	u8 field293_0x14e;
	u8 field294_0x14f;
	u8 field295_0x150;
	u8 field296_0x151;
	u8 field297_0x152;
	u8 field298_0x153;
	u8 field299_0x154;
	u8 field300_0x155;
	u8 field301_0x156;
	u8 field302_0x157;
	u8 field303_0x158;
	u8 field304_0x159;
	u8 field305_0x15a;
	u8 field306_0x15b;
	u8 field307_0x15c;
	u8 field308_0x15d;
	u8 field309_0x15e;
	u8 field310_0x15f;
	u8 field311_0x160;
	u8 field312_0x161;
	u8 field313_0x162;
	u8 field314_0x163;
	u8 field315_0x164;
	u8 field316_0x165;
	u8 field317_0x166;
	u8 field318_0x167;
	u8 field319_0x168;
	u8 field320_0x169;
	u8 field321_0x16a;
	u8 field322_0x16b;
	u8 field323_0x16c;
	u8 field324_0x16d;
	u8 field325_0x16e;
	u8 field326_0x16f;
	u8 field327_0x170;
	u8 field328_0x171;
	u8 field329_0x172;
	u8 field330_0x173;
	u8 field331_0x174;
	u8 field332_0x175;
	u8 field333_0x176;
	u8 field334_0x177;
	u8 field335_0x178;
	u8 field336_0x179;
	u8 field337_0x17a;
	u8 field338_0x17b;
	u8 field339_0x17c;
	u8 field340_0x17d;
	u8 field341_0x17e;
	u8 field342_0x17f;
	u8 field343_0x180;
	u8 field344_0x181;
	u8 field345_0x182;
	u8 field346_0x183;
	u8 field347_0x184;
	u8 field348_0x185;
	u8 field349_0x186;
	u8 field350_0x187;
	u8 field351_0x188;
	u8 field352_0x189;
	u8 field353_0x18a;
	u8 field354_0x18b;
	u8 field355_0x18c;
	u8 field356_0x18d;
	u8 field357_0x18e;
	u8 field358_0x18f;
	u8 field359_0x190;
	u8 field360_0x191;
	u8 field361_0x192;
	u8 field362_0x193;
	u8 field363_0x194;
	u8 field364_0x195;
	u8 field365_0x196;
	u8 field366_0x197;
	u8 field367_0x198;
	u8 field368_0x199;
	u8 field369_0x19a;
	u8 field370_0x19b;
	u8 field371_0x19c;
	u8 field372_0x19d;
	u8 field373_0x19e;
	u8 field374_0x19f;
	u8 field375_0x1a0;
	u8 field376_0x1a1;
	u8 field377_0x1a2;
	u8 field378_0x1a3;
	u8 field379_0x1a4;
	u8 field380_0x1a5;
	u8 field381_0x1a6;
	u8 field382_0x1a7;
	u8 field383_0x1a8;
	u8 field384_0x1a9;
	u8 field385_0x1aa;
	u8 field386_0x1ab;
	u8 field387_0x1ac;
	u8 field388_0x1ad;
	u8 field389_0x1ae;
	u8 field390_0x1af;
	u8 field391_0x1b0;
	u8 field392_0x1b1;
	u8 field393_0x1b2;
	u8 field394_0x1b3;
	u8 field395_0x1b4;
	u8 field396_0x1b5;
	u8 field397_0x1b6;
	u8 field398_0x1b7;
	u8 field399_0x1b8;
	u8 field400_0x1b9;
	u8 field401_0x1ba;
	u8 field402_0x1bb;
	u8 field403_0x1bc;
	u8 field404_0x1bd;
	u8 field405_0x1be;
	u8 field406_0x1bf;
	u8 field407_0x1c0;
	u8 field408_0x1c1;
	u8 field409_0x1c2;
	u8 field410_0x1c3;
	u8 field411_0x1c4;
	u8 field412_0x1c5;
	u8 field413_0x1c6;
	u8 field414_0x1c7;
	u8 field415_0x1c8;
	u8 field416_0x1c9;
	u8 field417_0x1ca;
	u8 field418_0x1cb;
	u8 field419_0x1cc;
	u8 field420_0x1cd;
	u8 field421_0x1ce;
	u8 field422_0x1cf;
	u8 field423_0x1d0;
	u8 field424_0x1d1;
	u8 field425_0x1d2;
	u8 field426_0x1d3;
	u8 field427_0x1d4;
	u8 field428_0x1d5;
	u8 field429_0x1d6;
	u8 field430_0x1d7;
	u8 field431_0x1d8;
	u8 field432_0x1d9;
	u8 field433_0x1da;
	u8 field434_0x1db;
	u8 field435_0x1dc;
	u8 field436_0x1dd;
	u8 field437_0x1de;
	u8 field438_0x1df;
	u8 field439_0x1e0;
	u8 field440_0x1e1;
	u8 field441_0x1e2;
	u8 field442_0x1e3;
	u8 field443_0x1e4;
	u8 field444_0x1e5;
	u8 field445_0x1e6;
	u8 field446_0x1e7;
	u8 field447_0x1e8;
	u8 field448_0x1e9;
	u8 field449_0x1ea;
	u8 field450_0x1eb;
	u8 field451_0x1ec;
	u8 field452_0x1ed;
	u8 field453_0x1ee;
	u8 field454_0x1ef;
	u8 field455_0x1f0;
	u8 field456_0x1f1;
	u8 field457_0x1f2;
	u8 field458_0x1f3;
	u8 field459_0x1f4;
	u8 field460_0x1f5;
	u8 field461_0x1f6;
	u8 field462_0x1f7;
	u8 field463_0x1f8;
	u8 field464_0x1f9;
	u8 field465_0x1fa;
	u8 field466_0x1fb;
	u8 field467_0x1fc;
	u8 field468_0x1fd;
	u8 field469_0x1fe;
	u8 field470_0x1ff;
} object_info;

typedef union object_data {
	struct object_info object;
	struct field_map_data field;
	struct dungeon_data dungeon;
	struct sprite_object sprite;
	struct poly_f3_data poly_f3;
	struct poly_ft3_data poly_ft3;
	struct poly_g3_data poly_g3;
	struct poly_gt3_data poly_gt3;
	struct poly_f4_data poly_f4;
	struct poly_ft4_data poly_ft4;
	struct poly_g4_data poly_g4;
	struct poly_gt4_data poly_gt4;
	struct line_f2_object_data line_f2;
	struct party_hud_object_data party_hud;
	struct overworld_character_object_data field_character;
	struct money_hud_object_data money_hud;
	struct border_object_data border;
	struct encounter_bar_object_data encounter_bar;
	struct moon_hud_object_data moon_hud;
	struct navigation_hud_object_data nav_hud;
	struct screen_overlay overlay;
	struct unk_data_1 unk_1;
	struct list_object_data list;
} object_data;