
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
	short x, y;
	short motion;
	char motion_counter;
	unsigned char buffer;
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
	short x, y;
	long unk4;
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
	short x, y;
	unsigned char character_action;
	unsigned char unk5;
	unsigned char unk6;
	unsigned char unk7;
	CVECTOR color;
	struct struct_13 unkC;
	struct party_hud_character_status_geometry sg[2];
	POLY_G4 p[2][5];
};

struct party_hud_geometry_primitives {
	POLY_F4 p0;
	unsigned long unk18;
	unsigned long unk1C;
	POLY_F4 p1;
	POLY_F4 p2;
	POLY_F4 p3;
};

struct party_hud_object_data {
	struct party_hud_geometry_primitives p[2];
	struct party_hud_geometry_data d[6];
	char unk1CA8;
	char status;
	char organization;
	unsigned char buffer; /* Created by retype action */
};

struct overworld_character_object_data {
	struct overworld_character_geometry g[2];
	short x, y;
	char angle;
	char rotation_dir;
	unsigned char buffer;
	char unk6F;
	char changing_size; /* 0 = shrinking, 1 = minimum size reached, 2 = not changing, 3 = growing */
	char size;
	unsigned char unk72;
	unsigned char unk73;
	CVECTOR color;
	char color_offset;
	unsigned char unk79;
	unsigned char unk7A;
	unsigned char unk7B;
};



typedef struct moon_hud_object_data_substruct {
	struct moon_hud_object_data_subsubstruct field0_0x0;
	struct moon_hud_object_data_subsubstruct field1_0x48;
	struct moon_hud_object_data_subsubstruct field2_0x90;
	unsigned char field3_0xd8;
	unsigned char field4_0xd9;
	unsigned char field5_0xda;
	unsigned char field6_0xdb;
	unsigned char field7_0xdc;
	unsigned char field8_0xdd;
	unsigned char field9_0xde;
	unsigned char field10_0xdf;
	unsigned char field11_0xe0;
	unsigned char field12_0xe1;
	unsigned char field13_0xe2;
	unsigned char field14_0xe3;
	unsigned char field15_0xe4;
	unsigned char field16_0xe5;
	unsigned char field17_0xe6;
	unsigned char field18_0xe7;
	unsigned char field19_0xe8;
	unsigned char field20_0xe9;
	unsigned char field21_0xea;
	unsigned char field22_0xeb;
	unsigned char field23_0xec;
	unsigned char field24_0xed;
	unsigned char field25_0xee;
	unsigned char field26_0xef;
	unsigned char field27_0xf0;
	unsigned char field28_0xf1;
	unsigned char field29_0xf2;
	unsigned char field30_0xf3;
	unsigned char field31_0xf4;
	unsigned char field32_0xf5;
	unsigned char field33_0xf6;
	unsigned char field34_0xf7;
	unsigned char field35_0xf8;
	unsigned char field36_0xf9;
	unsigned char field37_0xfa;
	unsigned char field38_0xfb;
	unsigned char field39_0xfc;
	unsigned char field40_0xfd;
	unsigned char field41_0xfe;
	unsigned char field42_0xff;
	SPRT_16 field43_0x100;
	SPRT_16 field44_0x110;
} moon_hud_object_data_substruct;

typedef struct encounter_bar_geometry_3d {
	unsigned char field0_0x0;
	unsigned char field1_0x1;
	unsigned char field2_0x2;
	unsigned char field3_0x3;
	unsigned char field4_0x4;
	unsigned char field5_0x5;
	unsigned char field6_0x6;
	unsigned char field7_0x7;
	unsigned char field8_0x8;
	unsigned char field9_0x9;
	unsigned char field10_0xa;
	unsigned char field11_0xb;
	unsigned char field12_0xc;
	unsigned char field13_0xd;
	unsigned char field14_0xe;
	unsigned char field15_0xf;
	unsigned char field16_0x10;
	unsigned char field17_0x11;
	unsigned char field18_0x12;
	unsigned char field19_0x13;
	DR_MODE field20_0x14;
	POLY_G4 field21_0x20;
} encounter_bar_geometry_3d;

typedef struct compass_geometry {
	SPRT field0_0x0;
	SPRT field1_0x14;
	SPRT field2_0x28;
	SPRT field3_0x3c;
	unsigned char field4_0x50;
	unsigned char field5_0x51;
	unsigned char field6_0x52;
	unsigned char field7_0x53;
	SPRT field8_0x54;
	DR_MODE field9_0x68;
	unsigned char field10_0x74;
	unsigned char field11_0x75;
	unsigned char field12_0x76;
	unsigned char field13_0x77;
	unsigned char field14_0x78;
	unsigned char field15_0x79;
	unsigned char field16_0x7a;
	unsigned char field17_0x7b;
	unsigned char field18_0x7c;
	unsigned char field19_0x7d;
	unsigned char field20_0x7e;
	unsigned char field21_0x7f;
	unsigned char field22_0x80;
	unsigned char field23_0x81;
	unsigned char field24_0x82;
	unsigned char field25_0x83;
	unsigned char field26_0x84;
	unsigned char field27_0x85;
	unsigned char field28_0x86;
	unsigned char field29_0x87;
	unsigned char field30_0x88;
	unsigned char field31_0x89;
	unsigned char field32_0x8a;
	unsigned char field33_0x8b;
	unsigned char field34_0x8c;
	unsigned char field35_0x8d;
	unsigned char field36_0x8e;
	unsigned char field37_0x8f;
} compass_geometry;

typedef union navigation_hud_geometry {
	struct compass_geometry field0;
	struct moon_hud_object_data_substruct field1;
} navigation_hud_geometry;

typedef struct navigation_hud_object_data {
	union navigation_hud_geometry field0_0x0;
	union navigation_hud_geometry field1_0x90;
	short x, y;
	short field4_0x124;
	char field5_0x126;
	char field6_0x127;
	char field7_0x128;
	char field8_0x129;
	unsigned char buffer;
	unsigned char field10_0x12b;
	unsigned char field11_0x12c;
	unsigned char field12_0x12d;
	unsigned char field13_0x12e;
	unsigned char field14_0x12f;
	unsigned char field15_0x130;
	unsigned char field16_0x131;
	unsigned char field17_0x132;
	unsigned char field18_0x133;
	unsigned char field19_0x134;
	unsigned char field20_0x135;
	unsigned char field21_0x136;
	unsigned char field22_0x137;
	unsigned char field23_0x138;
	unsigned char field24_0x139;
	unsigned char field25_0x13a;
	unsigned char field26_0x13b;
	unsigned char field27_0x13c;
	unsigned char field28_0x13d;
	unsigned char field29_0x13e;
	unsigned char field30_0x13f;
	unsigned char field31_0x140;
	unsigned char field32_0x141;
	unsigned char field33_0x142;
	unsigned char field34_0x143;
	unsigned char field35_0x144;
	unsigned char field36_0x145;
	unsigned char field37_0x146;
	unsigned char field38_0x147;
	unsigned char field39_0x148;
	unsigned char field40_0x149;
	unsigned char field41_0x14a;
	unsigned char field42_0x14b;
	unsigned char field43_0x14c;
	unsigned char field44_0x14d;
	unsigned char field45_0x14e;
	unsigned char field46_0x14f;
	unsigned char field47_0x150;
	unsigned char field48_0x151;
	unsigned char field49_0x152;
	unsigned char field50_0x153;
	unsigned char field51_0x154;
	unsigned char field52_0x155;
	unsigned char field53_0x156;
	unsigned char field54_0x157;
	unsigned char field55_0x158;
	unsigned char field56_0x159;
	unsigned char field57_0x15a;
	unsigned char field58_0x15b;
	unsigned char field59_0x15c;
	unsigned char field60_0x15d;
	unsigned char field61_0x15e;
	unsigned char field62_0x15f;
	unsigned char field63_0x160;
	unsigned char field64_0x161;
	unsigned char field65_0x162;
	unsigned char field66_0x163;
	unsigned char field67_0x164;
	unsigned char field68_0x165;
	unsigned char field69_0x166;
	unsigned char field70_0x167;
	unsigned char field71_0x168;
	unsigned char field72_0x169;
	unsigned char field73_0x16a;
	unsigned char field74_0x16b;
	unsigned char field75_0x16c;
	unsigned char field76_0x16d;
	unsigned char field77_0x16e;
	unsigned char field78_0x16f;
	unsigned char field79_0x170;
	unsigned char field80_0x171;
	unsigned char field81_0x172;
	unsigned char field82_0x173;
	unsigned char field83_0x174;
	unsigned char field84_0x175;
	unsigned char field85_0x176;
	unsigned char field86_0x177;
	unsigned char field87_0x178;
	unsigned char field88_0x179;
	unsigned char field89_0x17a;
	unsigned char field90_0x17b;
	unsigned char field91_0x17c;
	unsigned char field92_0x17d;
	unsigned char field93_0x17e;
	unsigned char field94_0x17f;
	unsigned char field95_0x180;
	unsigned char field96_0x181;
	unsigned char field97_0x182;
	unsigned char field98_0x183;
	unsigned char field99_0x184;
	unsigned char field100_0x185;
	unsigned char field101_0x186;
	unsigned char field102_0x187;
	unsigned char field103_0x188;
	unsigned char field104_0x189;
	unsigned char field105_0x18a;
	unsigned char field106_0x18b;
	unsigned char field107_0x18c;
	unsigned char field108_0x18d;
	unsigned char field109_0x18e;
	unsigned char field110_0x18f;
	unsigned char field111_0x190;
	unsigned char field112_0x191;
	unsigned char field113_0x192;
	unsigned char field114_0x193;
	unsigned char field115_0x194;
	unsigned char field116_0x195;
	unsigned char field117_0x196;
	unsigned char field118_0x197;
	unsigned char field119_0x198;
	unsigned char field120_0x199;
	unsigned char field121_0x19a;
	unsigned char field122_0x19b;
	unsigned char field123_0x19c;
	unsigned char field124_0x19d;
	unsigned char field125_0x19e;
	unsigned char field126_0x19f;
	unsigned char field127_0x1a0;
	unsigned char field128_0x1a1;
	unsigned char field129_0x1a2;
	unsigned char field130_0x1a3;
	unsigned char field131_0x1a4;
	unsigned char field132_0x1a5;
	unsigned char field133_0x1a6;
	unsigned char field134_0x1a7;
	unsigned char field135_0x1a8;
	unsigned char field136_0x1a9;
	unsigned char field137_0x1aa;
	unsigned char field138_0x1ab;
	unsigned char field139_0x1ac;
	unsigned char field140_0x1ad;
	unsigned char field141_0x1ae;
	unsigned char field142_0x1af;
	unsigned char field143_0x1b0;
	unsigned char field144_0x1b1;
	unsigned char field145_0x1b2;
	unsigned char field146_0x1b3;
	unsigned char field147_0x1b4;
	unsigned char field148_0x1b5;
	unsigned char field149_0x1b6;
	unsigned char field150_0x1b7;
	unsigned char field151_0x1b8;
	unsigned char field152_0x1b9;
	unsigned char field153_0x1ba;
	unsigned char field154_0x1bb;
	unsigned char field155_0x1bc;
	unsigned char field156_0x1bd;
	unsigned char field157_0x1be;
	unsigned char field158_0x1bf;
	unsigned char field159_0x1c0;
	unsigned char field160_0x1c1;
	unsigned char field161_0x1c2;
	unsigned char field162_0x1c3;
	unsigned char field163_0x1c4;
	unsigned char field164_0x1c5;
	unsigned char field165_0x1c6;
	unsigned char field166_0x1c7;
	unsigned char field167_0x1c8;
	unsigned char field168_0x1c9;
	unsigned char field169_0x1ca;
	unsigned char field170_0x1cb;
	unsigned char field171_0x1cc;
	unsigned char field172_0x1cd;
	unsigned char field173_0x1ce;
	unsigned char field174_0x1cf;
	unsigned char field175_0x1d0;
	unsigned char field176_0x1d1;
	unsigned char field177_0x1d2;
	unsigned char field178_0x1d3;
	unsigned char field179_0x1d4;
	unsigned char field180_0x1d5;
	unsigned char field181_0x1d6;
	unsigned char field182_0x1d7;
	unsigned char field183_0x1d8;
	unsigned char field184_0x1d9;
	unsigned char field185_0x1da;
	unsigned char field186_0x1db;
	unsigned char field187_0x1dc;
	unsigned char field188_0x1dd;
	unsigned char field189_0x1de;
	unsigned char field190_0x1df;
	unsigned char field191_0x1e0;
	unsigned char field192_0x1e1;
	unsigned char field193_0x1e2;
	unsigned char field194_0x1e3;
	unsigned char field195_0x1e4;
	unsigned char field196_0x1e5;
	unsigned char field197_0x1e6;
	unsigned char field198_0x1e7;
	unsigned char field199_0x1e8;
	unsigned char field200_0x1e9;
	unsigned char field201_0x1ea;
	unsigned char field202_0x1eb;
	unsigned char field203_0x1ec;
	unsigned char field204_0x1ed;
	unsigned char field205_0x1ee;
	unsigned char field206_0x1ef;
	unsigned char field207_0x1f0;
	unsigned char field208_0x1f1;
	unsigned char field209_0x1f2;
	unsigned char field210_0x1f3;
	unsigned char field211_0x1f4;
	unsigned char field212_0x1f5;
	unsigned char field213_0x1f6;
	unsigned char field214_0x1f7;
	unsigned char field215_0x1f8;
	unsigned char field216_0x1f9;
	unsigned char field217_0x1fa;
	unsigned char field218_0x1fb;
	unsigned char field219_0x1fc;
	unsigned char field220_0x1fd;
	unsigned char field221_0x1fe;
	unsigned char field222_0x1ff;
	unsigned char field223_0x200;
	unsigned char field224_0x201;
	unsigned char field225_0x202;
	unsigned char field226_0x203;
	unsigned char field227_0x204;
	unsigned char field228_0x205;
	unsigned char field229_0x206;
	unsigned char field230_0x207;
	unsigned char field231_0x208;
	unsigned char field232_0x209;
	unsigned char field233_0x20a;
	unsigned char field234_0x20b;
	unsigned char field235_0x20c;
	unsigned char field236_0x20d;
	unsigned char field237_0x20e;
	unsigned char field238_0x20f;
	unsigned char field239_0x210;
	unsigned char field240_0x211;
	unsigned char field241_0x212;
	unsigned char field242_0x213;
	unsigned char field243_0x214;
	unsigned char field244_0x215;
	unsigned char field245_0x216;
	unsigned char field246_0x217;
	unsigned char field247_0x218;
	unsigned char field248_0x219;
	unsigned char field249_0x21a;
	unsigned char field250_0x21b;
	unsigned char field251_0x21c;
	unsigned char field252_0x21d;
	unsigned char field253_0x21e;
	unsigned char field254_0x21f;
	unsigned char field255_0x220;
	unsigned char field256_0x221;
	unsigned char field257_0x222;
	unsigned char field258_0x223;
	unsigned char field259_0x224;
	unsigned char field260_0x225;
	unsigned char field261_0x226;
	unsigned char field262_0x227;
	unsigned char field263_0x228;
	unsigned char field264_0x229;
	unsigned char field265_0x22a;
	unsigned char field266_0x22b;
	unsigned char field267_0x22c;
	unsigned char field268_0x22d;
	unsigned char field269_0x22e;
	unsigned char field270_0x22f;
	unsigned char field271_0x230;
	unsigned char field272_0x231;
	unsigned char field273_0x232;
	unsigned char field274_0x233;
	unsigned char field275_0x234;
	unsigned char field276_0x235;
	unsigned char field277_0x236;
	unsigned char field278_0x237;
	unsigned char field279_0x238;
	unsigned char field280_0x239;
	unsigned char field281_0x23a;
	unsigned char field282_0x23b;
	unsigned char field283_0x23c;
	unsigned char field284_0x23d;
	unsigned char field285_0x23e;
	unsigned char field286_0x23f;
	unsigned char field287_0x240;
	unsigned char field288_0x241;
	unsigned char field289_0x242;
	unsigned char field290_0x243;
	unsigned char field291_0x244;
	unsigned char field292_0x245;
	unsigned char field293_0x246;
	unsigned char field294_0x247;
	unsigned char field295_0x248;
	unsigned char field296_0x249;
	unsigned char field297_0x24a;
	unsigned char field298_0x24b;
	unsigned char field299_0x24c;
	unsigned char field300_0x24d;
	unsigned char field301_0x24e;
	unsigned char field302_0x24f;
	unsigned char field303_0x250;
	unsigned char field304_0x251;
	unsigned char field305_0x252;
	unsigned char field306_0x253;
	unsigned char field307_0x254;
	unsigned char field308_0x255;
	unsigned char field309_0x256;
	unsigned char field310_0x257;
	unsigned char field311_0x258;
	unsigned char field312_0x259;
	unsigned char field313_0x25a;
	unsigned char field314_0x25b;
	unsigned char field315_0x25c;
	unsigned char field316_0x25d;
	unsigned char field317_0x25e;
	unsigned char field318_0x25f;
	unsigned char field319_0x260;
	unsigned char field320_0x261;
	unsigned char field321_0x262;
	unsigned char field322_0x263;
	unsigned char field323_0x264;
	unsigned char field324_0x265;
	unsigned char field325_0x266;
	unsigned char field326_0x267;
	unsigned char field327_0x268;
	unsigned char field328_0x269;
	unsigned char field329_0x26a;
	unsigned char field330_0x26b;
	unsigned char field331_0x26c;
	unsigned char field332_0x26d;
	unsigned char field333_0x26e;
	unsigned char field334_0x26f;
	unsigned char field335_0x270;
	unsigned char field336_0x271;
	unsigned char field337_0x272;
	unsigned char field338_0x273;
	unsigned char field339_0x274;
	unsigned char field340_0x275;
	unsigned char field341_0x276;
	unsigned char field342_0x277;
	unsigned char field343_0x278;
	unsigned char field344_0x279;
	unsigned char field345_0x27a;
	unsigned char field346_0x27b;
	unsigned char field347_0x27c;
	unsigned char field348_0x27d;
	unsigned char field349_0x27e;
	unsigned char field350_0x27f;
	unsigned char field351_0x280;
	unsigned char field352_0x281;
	unsigned char field353_0x282;
	unsigned char field354_0x283;
	unsigned char field355_0x284;
	unsigned char field356_0x285;
	unsigned char field357_0x286;
	unsigned char field358_0x287;
	unsigned char field359_0x288;
	unsigned char field360_0x289;
	unsigned char field361_0x28a;
	unsigned char field362_0x28b;
	unsigned char field363_0x28c;
	unsigned char field364_0x28d;
	unsigned char field365_0x28e;
	unsigned char field366_0x28f;
	unsigned char field367_0x290;
	unsigned char field368_0x291;
	unsigned char field369_0x292;
	unsigned char field370_0x293;
	unsigned char field371_0x294;
	unsigned char field372_0x295;
	unsigned char field373_0x296;
	unsigned char field374_0x297;
	unsigned char field375_0x298;
	unsigned char field376_0x299;
	unsigned char field377_0x29a;
	unsigned char field378_0x29b;
	unsigned char field379_0x29c;
	unsigned char field380_0x29d;
	unsigned char field381_0x29e;
	unsigned char field382_0x29f;
	unsigned char field383_0x2a0;
	unsigned char field384_0x2a1;
	unsigned char field385_0x2a2;
	unsigned char field386_0x2a3;
	unsigned char field387_0x2a4;
	unsigned char field388_0x2a5;
	unsigned char field389_0x2a6;
	unsigned char field390_0x2a7;
	unsigned char field391_0x2a8;
	unsigned char field392_0x2a9;
	unsigned char field393_0x2aa;
	unsigned char field394_0x2ab;
	unsigned char field395_0x2ac;
	unsigned char field396_0x2ad;
	unsigned char field397_0x2ae;
	unsigned char field398_0x2af;
	unsigned char field399_0x2b0;
	unsigned char field400_0x2b1;
	unsigned char field401_0x2b2;
	unsigned char field402_0x2b3;
	unsigned char field403_0x2b4;
	unsigned char field404_0x2b5;
	unsigned char field405_0x2b6;
	unsigned char field406_0x2b7;
	unsigned char field407_0x2b8;
	unsigned char field408_0x2b9;
	unsigned char field409_0x2ba;
	unsigned char field410_0x2bb;
	unsigned char field411_0x2bc;
	unsigned char field412_0x2bd;
	unsigned char field413_0x2be;
	unsigned char field414_0x2bf;
	unsigned char field415_0x2c0;
	unsigned char field416_0x2c1;
	unsigned char field417_0x2c2;
	unsigned char field418_0x2c3;
	unsigned char field419_0x2c4;
	unsigned char field420_0x2c5;
	unsigned char field421_0x2c6;
	unsigned char field422_0x2c7;
	unsigned char field423_0x2c8;
	unsigned char field424_0x2c9;
	unsigned char field425_0x2ca;
	unsigned char field426_0x2cb;
	unsigned char field427_0x2cc;
	unsigned char field428_0x2cd;
	unsigned char field429_0x2ce;
	unsigned char field430_0x2cf;
	unsigned char field431_0x2d0;
	unsigned char field432_0x2d1;
	unsigned char field433_0x2d2;
	unsigned char field434_0x2d3;
	unsigned char field435_0x2d4;
	unsigned char field436_0x2d5;
	unsigned char field437_0x2d6;
	unsigned char field438_0x2d7;
	unsigned char field439_0x2d8;
	unsigned char field440_0x2d9;
	unsigned char field441_0x2da;
	unsigned char field442_0x2db;
	unsigned char field443_0x2dc;
	unsigned char field444_0x2dd;
	unsigned char field445_0x2de;
	unsigned char field446_0x2df;
	unsigned char field447_0x2e0;
	unsigned char field448_0x2e1;
	unsigned char field449_0x2e2;
	unsigned char field450_0x2e3;
	unsigned char field451_0x2e4;
	unsigned char field452_0x2e5;
	unsigned char field453_0x2e6;
	unsigned char field454_0x2e7;
	unsigned char field455_0x2e8;
	unsigned char field456_0x2e9;
	unsigned char field457_0x2ea;
	unsigned char field458_0x2eb;
	unsigned char field459_0x2ec;
	unsigned char field460_0x2ed;
	unsigned char field461_0x2ee;
	unsigned char field462_0x2ef;
	unsigned char field463_0x2f0;
	unsigned char field464_0x2f1;
	unsigned char field465_0x2f2;
	unsigned char field466_0x2f3;
	unsigned char field467_0x2f4;
	unsigned char field468_0x2f5;
	unsigned char field469_0x2f6;
	unsigned char field470_0x2f7;
	unsigned char field471_0x2f8;
	unsigned char field472_0x2f9;
	unsigned char field473_0x2fa;
	unsigned char field474_0x2fb;
	unsigned char field475_0x2fc;
	unsigned char field476_0x2fd;
	unsigned char field477_0x2fe;
	unsigned char field478_0x2ff;
} navigation_hud_object_data;

typedef struct color_anim { /* Not 100% but this seems related to animating colors */
	char loops;
	char max_loops;
	char iteration;
	char max_iterations;
	char dir;
	unsigned char field5_0x5;
	unsigned char field6_0x6;
	unsigned char field7_0x7;
	CVECTOR forward_cvector;
	CVECTOR backward_cvector;
	int r;
	int g;
	int b;
} color_anim;

typedef struct encounter_bar_geometry_2d {
	DR_MODE field0_0x0;
	POLY_G4 field1_0xc;
	unsigned char field2_0x30;
	unsigned char field3_0x31;
	unsigned char field4_0x32;
	unsigned char field5_0x33;
	unsigned char field6_0x34;
	unsigned char field7_0x35;
	unsigned char field8_0x36;
	unsigned char field9_0x37;
	unsigned char field10_0x38;
	unsigned char field11_0x39;
	unsigned char field12_0x3a;
	unsigned char field13_0x3b;
	unsigned char field14_0x3c;
	unsigned char field15_0x3d;
	unsigned char field16_0x3e;
	unsigned char field17_0x3f;
	unsigned char field18_0x40;
	unsigned char field19_0x41;
	unsigned char field20_0x42;
	unsigned char field21_0x43;
} encounter_bar_geometry_2d;

typedef union encounter_bar_geometry {
	struct encounter_bar_geometry_2d enc_bar_2d;
	struct encounter_bar_geometry_3d enc_bar_3d;
} encounter_bar_geometry;

typedef struct encounter_bar_object_data_substruct {
	SPRT sprite;
	union encounter_bar_geometry geometry;
	unsigned char field2_0x58;
	unsigned char field3_0x59;
	unsigned char field4_0x5a;
	unsigned char field5_0x5b;
	unsigned char field6_0x5c;
	unsigned char field7_0x5d;
	unsigned char field8_0x5e;
	unsigned char field9_0x5f;
	unsigned char field10_0x60;
	unsigned char field11_0x61;
	unsigned char field12_0x62;
	unsigned char field13_0x63;
	unsigned char field14_0x64;
	unsigned char field15_0x65;
	unsigned char field16_0x66;
	unsigned char field17_0x67;
	unsigned char field18_0x68;
	unsigned char field19_0x69;
	unsigned char field20_0x6a;
	unsigned char field21_0x6b;
	unsigned char field22_0x6c;
	unsigned char field23_0x6d;
	unsigned char field24_0x6e;
	unsigned char field25_0x6f;
	unsigned char field26_0x70;
	unsigned char field27_0x71;
	unsigned char field28_0x72;
	unsigned char field29_0x73;
	unsigned char field30_0x74;
	unsigned char field31_0x75;
	unsigned char field32_0x76;
	unsigned char field33_0x77;
	unsigned char field34_0x78;
	unsigned char field35_0x79;
	unsigned char field36_0x7a;
	unsigned char field37_0x7b;
	unsigned char field38_0x7c;
	unsigned char field39_0x7d;
	unsigned char field40_0x7e;
	unsigned char field41_0x7f;
	unsigned char field42_0x80;
	unsigned char field43_0x81;
	unsigned char field44_0x82;
	unsigned char field45_0x83;
	unsigned char field46_0x84;
	unsigned char field47_0x85;
	unsigned char field48_0x86;
	unsigned char field49_0x87;
	unsigned char field50_0x88;
	unsigned char field51_0x89;
	unsigned char field52_0x8a;
	unsigned char field53_0x8b;
	unsigned char field54_0x8c;
	unsigned char field55_0x8d;
	unsigned char field56_0x8e;
	unsigned char field57_0x8f;
	unsigned char field58_0x90;
	unsigned char field59_0x91;
	unsigned char field60_0x92;
	unsigned char field61_0x93;
	unsigned char field62_0x94;
	unsigned char field63_0x95;
	unsigned char field64_0x96;
	unsigned char field65_0x97;
	unsigned char field66_0x98;
	unsigned char field67_0x99;
	unsigned char field68_0x9a;
	unsigned char field69_0x9b;
	unsigned char field70_0x9c;
	unsigned char field71_0x9d;
	unsigned char field72_0x9e;
	unsigned char field73_0x9f;
	unsigned char field74_0xa0;
	unsigned char field75_0xa1;
	unsigned char field76_0xa2;
	unsigned char field77_0xa3;
	unsigned char field78_0xa4;
	unsigned char field79_0xa5;
	unsigned char field80_0xa6;
	unsigned char field81_0xa7;
	unsigned char field82_0xa8;
	unsigned char field83_0xa9;
	unsigned char field84_0xaa;
	unsigned char field85_0xab;
	unsigned char field86_0xac;
	unsigned char field87_0xad;
	unsigned char field88_0xae;
	unsigned char field89_0xaf;
	unsigned char field90_0xb0;
	unsigned char field91_0xb1;
	unsigned char field92_0xb2;
	unsigned char field93_0xb3;
	unsigned char field94_0xb4;
	unsigned char field95_0xb5;
	unsigned char field96_0xb6;
	unsigned char field97_0xb7;
	unsigned char field98_0xb8;
	unsigned char field99_0xb9;
	unsigned char field100_0xba;
	unsigned char field101_0xbb;
	unsigned char field102_0xbc;
	unsigned char field103_0xbd;
	unsigned char field104_0xbe;
	unsigned char field105_0xbf;
	unsigned char field106_0xc0;
	unsigned char field107_0xc1;
	unsigned char field108_0xc2;
	unsigned char field109_0xc3;
} encounter_bar_object_data_substruct;

typedef struct dungeon_data_substruct {
	GsDOBJ2 obj;
	unsigned char field1_0x10;
	unsigned char field2_0x11;
	short field3_0x12;
	short field4_0x14;
	unsigned char field5_0x16;
	unsigned char field6_0x17;
} dungeon_data_substruct;



typedef struct moon_hud_object_data {
	struct moon_hud_object_data_substruct field0_0x0;
	struct moon_hud_object_data_substruct field1_0x120;
	short field2_0x240;
	short field3_0x242;
	short field4_0x244;
	char field5_0x246;
	char field6_0x247;
	char field7_0x248;
	unsigned char buffer; /* Created by retype action */
	unsigned char field9_0x24a;
	unsigned char field10_0x24b;
} moon_hud_object_data;

typedef struct dungeon_tile {
	struct tile_walls walls;
	enum tile_contents contents;
} dungeon_tile;

typedef struct list_object_data {
	unsigned char field0_0x0;
	unsigned char field1_0x1;
	short field2_0x2;
	unsigned short list_len;
	unsigned short field4_0x6;
	unsigned short field5_0x8;
	unsigned char field6_0xa;
	unsigned char field7_0xb;
	unsigned char field8_0xc;
	unsigned char field9_0xd;
	unsigned char field10_0xe;
	unsigned char field11_0xf;
	short field12_0x10;
	unsigned char field13_0x12;
	unsigned char field14_0x13;
	unsigned char field15_0x14;
	unsigned char field16_0x15;
	unsigned char field17_0x16;
	unsigned char field18_0x17;
	int field19_0x18;
	unsigned char field20_0x1c;
	unsigned char field21_0x1d;
	unsigned char field22_0x1e;
	unsigned char field23_0x1f;
	unsigned char field24_0x20;
	unsigned char field25_0x21;
	unsigned char field26_0x22;
	unsigned char field27_0x23;
	short list_index;
	unsigned short field29_0x26;
	unsigned short field30_0x28;
	short field31_0x2a;
	unsigned char field32_0x2c;
	unsigned char field33_0x2d;
	short field34_0x2e;
	short field35_0x30;
	short field36_0x32;
	unsigned char field37_0x34;
	unsigned char field38_0x35;
	short field39_0x36;
	short loop;
	short field41_0x3a;
	unsigned char field42_0x3c;
	unsigned char field43_0x3d;
	short field44_0x3e;
	short field45_0x40;
	unsigned char field46_0x42;
	unsigned char field47_0x43;
	short field48_0x44;
	unsigned short field49_0x46;
	unsigned char field50_0x48;
	unsigned char field51_0x49;
	unsigned char field52_0x4a;
	unsigned char field53_0x4b;
	unsigned char field54_0x4c;
	unsigned char field55_0x4d;
	char field56_0x4e;
	unsigned char field57_0x4f;
	unsigned char field58_0x50;
	unsigned char field59_0x51;
	short field60_0x52;
	short field61_0x54;
	short field62_0x56;
	short field63_0x58;
	unsigned char field64_0x5a;
	unsigned char field65_0x5b;
	unsigned char field66_0x5c;
	unsigned char field67_0x5d;
	unsigned char field68_0x5e;
	unsigned char field69_0x5f;
	unsigned char field70_0x60;
	unsigned char field71_0x61;
	unsigned char field72_0x62;
	unsigned char field73_0x63;
	struct object * field74_0x64;
	unsigned char field75_0x68;
	unsigned char field76_0x69;
	unsigned char field77_0x6a;
	unsigned char field78_0x6b;
	struct object * field79_0x6c;
	struct object * field80_0x70;
	struct object * field81_0x74;
} list_object_data;

typedef struct unknown_dobj2_struct {
	short field0_0x0;
	short field1_0x2;
	short field2_0x4;
	unsigned char field3_0x6;
	unsigned char field4_0x7;
	GsDOBJ2 field5_0x8;
} unknown_dobj2_struct;

typedef struct astruct_14 {
	int field0_0x0;
	int field1_0x4;
	unsigned int x;
	unsigned int y;
} astruct_14;

typedef struct dungeon_init_data {
	struct astruct_14 field0_0x0;
	unsigned int initial_dir; /* Created by retype action */
	int appearance;
	union object_data * door_text_id;
	int field4_0x1c;
	int field5_0x20;
} dungeon_init_data;

typedef struct dungeon_data {
	void * origin;
	union object_data * next;
	unsigned int status; /* Bit 4 = dark, Bit 8 = initialized, Bit 10 = in battle */
	GsVIEW2 view;
	GsCOORDINATE2 coordinates;
	SVECTOR rotation;
	short field6_0x88;
	short field7_0x8a;
	short field8_0x8c;
	unsigned char field9_0x8e;
	unsigned char field10_0x8f;
	GsCOORDINATE2 field11_0x90;
	GsCOORDINATE2 super;
	struct unknown_dobj2_struct dobj2_array[220];
	unsigned char field14_0x15d0;
	unsigned char field15_0x15d1;
	unsigned char field16_0x15d2;
	unsigned char field17_0x15d3;
	unsigned char field18_0x15d4;
	unsigned char field19_0x15d5;
	unsigned char field20_0x15d6;
	unsigned char field21_0x15d7;
	GsCOORDINATE2 coord_array[220];
	struct dungeon_data_substruct field23_0x5a98[2];
	GsDOBJ2 field24_0x5ac8;
	unsigned char field25_0x5ad8;
	unsigned char field26_0x5ad9;
	unsigned char field27_0x5ada;
	unsigned char field28_0x5adb;
	unsigned char field29_0x5adc;
	unsigned char field30_0x5add;
	unsigned char field31_0x5ade;
	unsigned char field32_0x5adf;
	unsigned char field33_0x5ae0;
	unsigned char field34_0x5ae1;
	unsigned char field35_0x5ae2;
	unsigned char field36_0x5ae3;
	unsigned char field37_0x5ae4;
	unsigned char field38_0x5ae5;
	unsigned char field39_0x5ae6;
	unsigned char field40_0x5ae7;
	unsigned char field41_0x5ae8;
	unsigned char field42_0x5ae9;
	unsigned char field43_0x5aea;
	unsigned char field44_0x5aeb;
	unsigned char field45_0x5aec;
	unsigned char field46_0x5aed;
	unsigned char field47_0x5aee;
	unsigned char field48_0x5aef;
	unsigned char field49_0x5af0;
	unsigned char field50_0x5af1;
	unsigned char field51_0x5af2;
	unsigned char field52_0x5af3;
	unsigned char field53_0x5af4;
	unsigned char field54_0x5af5;
	unsigned char field55_0x5af6;
	unsigned char field56_0x5af7;
	unsigned char field57_0x5af8;
	unsigned char field58_0x5af9;
	unsigned char field59_0x5afa;
	unsigned char field60_0x5afb;
	unsigned char field61_0x5afc;
	unsigned char field62_0x5afd;
	unsigned char field63_0x5afe;
	unsigned char field64_0x5aff;
	unsigned char field65_0x5b00;
	unsigned char field66_0x5b01;
	unsigned char field67_0x5b02;
	unsigned char field68_0x5b03;
	unsigned char field69_0x5b04;
	unsigned char field70_0x5b05;
	unsigned char field71_0x5b06;
	unsigned char field72_0x5b07;
	unsigned char field73_0x5b08;
	unsigned char field74_0x5b09;
	unsigned char field75_0x5b0a;
	unsigned char field76_0x5b0b;
	unsigned char field77_0x5b0c;
	unsigned char field78_0x5b0d;
	unsigned char field79_0x5b0e;
	unsigned char field80_0x5b0f;
	unsigned char field81_0x5b10;
	unsigned char field82_0x5b11;
	unsigned char field83_0x5b12;
	unsigned char field84_0x5b13;
	unsigned char field85_0x5b14;
	unsigned char field86_0x5b15;
	unsigned char field87_0x5b16;
	unsigned char field88_0x5b17;
	unsigned char field89_0x5b18;
	unsigned char field90_0x5b19;
	unsigned char field91_0x5b1a;
	unsigned char field92_0x5b1b;
	unsigned char field93_0x5b1c;
	unsigned char field94_0x5b1d;
	unsigned char field95_0x5b1e;
	unsigned char field96_0x5b1f;
	unsigned char field97_0x5b20;
	unsigned char field98_0x5b21;
	unsigned char field99_0x5b22;
	unsigned char field100_0x5b23;
	unsigned char field101_0x5b24;
	unsigned char field102_0x5b25;
	unsigned char field103_0x5b26;
	unsigned char field104_0x5b27;
	unsigned char field105_0x5b28;
	unsigned char field106_0x5b29;
	unsigned char field107_0x5b2a;
	unsigned char field108_0x5b2b;
	unsigned char field109_0x5b2c;
	unsigned char field110_0x5b2d;
	unsigned char field111_0x5b2e;
	unsigned char field112_0x5b2f;
	unsigned char field113_0x5b30;
	unsigned char field114_0x5b31;
	unsigned char field115_0x5b32;
	unsigned char field116_0x5b33;
	unsigned char field117_0x5b34;
	unsigned char field118_0x5b35;
	unsigned char field119_0x5b36;
	unsigned char field120_0x5b37;
	unsigned char field121_0x5b38;
	unsigned char field122_0x5b39;
	unsigned char field123_0x5b3a;
	unsigned char field124_0x5b3b;
	unsigned char field125_0x5b3c;
	unsigned char field126_0x5b3d;
	unsigned char field127_0x5b3e;
	unsigned char field128_0x5b3f;
	unsigned char field129_0x5b40;
	unsigned char field130_0x5b41;
	unsigned char field131_0x5b42;
	unsigned char field132_0x5b43;
	unsigned char field133_0x5b44;
	unsigned char field134_0x5b45;
	unsigned char field135_0x5b46;
	unsigned char field136_0x5b47;
	unsigned char field137_0x5b48;
	unsigned char field138_0x5b49;
	unsigned char field139_0x5b4a;
	unsigned char field140_0x5b4b;
	unsigned char field141_0x5b4c;
	unsigned char field142_0x5b4d;
	unsigned char field143_0x5b4e;
	unsigned char field144_0x5b4f;
	unsigned char field145_0x5b50;
	unsigned char field146_0x5b51;
	unsigned char field147_0x5b52;
	unsigned char field148_0x5b53;
	unsigned char field149_0x5b54;
	unsigned char field150_0x5b55;
	unsigned char field151_0x5b56;
	unsigned char field152_0x5b57;
	unsigned char field153_0x5b58;
	unsigned char field154_0x5b59;
	unsigned char field155_0x5b5a;
	unsigned char field156_0x5b5b;
	unsigned char field157_0x5b5c;
	unsigned char field158_0x5b5d;
	unsigned char field159_0x5b5e;
	unsigned char field160_0x5b5f;
	unsigned char field161_0x5b60;
	unsigned char field162_0x5b61;
	unsigned char field163_0x5b62;
	unsigned char field164_0x5b63;
	unsigned char field165_0x5b64;
	unsigned char field166_0x5b65;
	unsigned char field167_0x5b66;
	unsigned char field168_0x5b67;
	VECTOR light_scale_vect;
	short real_x_pos;
	short vertical_pos;
	short real_y_pos;
	short true_direction;
	short grid_x_pos; /* These mirrors only update once the movement animation finishes */
	short vertical_pos_mirror;
	short grid_y_pos;
	short grid_direction;
	short last_x_pos;
	short last_vertical_pos;
	short last_y_pos;
	short last_direction;
	short last_x_pos_mirror;
	short last_vertical_pos_mirror;
	short last_y_pos_mirror;
	short last_direction_mirror;
	unsigned char field186_0x5b98;
	unsigned char field187_0x5b99;
	unsigned char field188_0x5b9a;
	unsigned char field189_0x5b9b;
	unsigned char field190_0x5b9c;
	unsigned char field191_0x5b9d;
	unsigned char field192_0x5b9e;
	unsigned char field193_0x5b9f;
	short last_action; /* 0x64 if move, 0x80 if turn, 0x0f if bump. */
	short field195_0x5ba2;
	unsigned char field196_0x5ba4;
	unsigned char field197_0x5ba5;
	short field198_0x5ba6;
	short field199_0x5ba8;
	unsigned char field200_0x5baa;
	unsigned char field201_0x5bab;
	short running;
	short field203_0x5bae;
	short field204_0x5bb0;
	short control_locked; /* Created by retype action */
	unsigned char field206_0x5bb4;
	unsigned char field207_0x5bb5;
	unsigned char field208_0x5bb6;
	unsigned char field209_0x5bb7;
	int field210_0x5bb8;
	int step_counter; /* Created by retype action */
	unsigned char field212_0x5bc0;
	unsigned char field213_0x5bc1;
	short field214_0x5bc2;
	unsigned char field215_0x5bc4;
	unsigned char field216_0x5bc5;
	unsigned char field217_0x5bc6;
	unsigned char field218_0x5bc7;
	int return_function;
	int field220_0x5bcc;
	struct dungeon_init_data tile_data;
	int field222_0x5bf4;
	void * field223_0x5bf8;
	void * field224_0x5bfc;
	struct object * field225_0x5c00;
	int field226_0x5c04;
	struct object * field227_0x5c08;
	struct object * field228_0x5c0c;
	unsigned char field229_0x5c10;
	unsigned char field230_0x5c11;
	unsigned char field231_0x5c12;
	unsigned char field232_0x5c13;
	unsigned char field233_0x5c14;
	unsigned char field234_0x5c15;
	short last_move_dir;
	struct object * field236_0x5c18;
	unsigned char field237_0x5c1c;
	unsigned char field238_0x5c1d;
	unsigned char field239_0x5c1e;
	unsigned char field240_0x5c1f;
	unsigned char field241_0x5c20;
	unsigned char field242_0x5c21;
	unsigned char field243_0x5c22;
	unsigned char field244_0x5c23;
	unsigned char field245_0x5c24;
	unsigned char field246_0x5c25;
	unsigned char field247_0x5c26;
	unsigned char field248_0x5c27;
	unsigned char field249_0x5c28;
	unsigned char field250_0x5c29;
	unsigned char field251_0x5c2a;
	unsigned char field252_0x5c2b;
	unsigned char field253_0x5c2c;
	unsigned char field254_0x5c2d;
	unsigned char field255_0x5c2e;
	unsigned char field256_0x5c2f;
	unsigned char field257_0x5c30;
	unsigned char field258_0x5c31;
	unsigned char field259_0x5c32;
	unsigned char field260_0x5c33;
	unsigned char field261_0x5c34;
	unsigned char field262_0x5c35;
	unsigned char field263_0x5c36;
	unsigned char field264_0x5c37;
	unsigned char field265_0x5c38;
	unsigned char field266_0x5c39;
	unsigned char field267_0x5c3a;
	unsigned char field268_0x5c3b;
	unsigned char field269_0x5c3c;
	unsigned char field270_0x5c3d;
	unsigned char field271_0x5c3e;
	unsigned char field272_0x5c3f;
	unsigned char field273_0x5c40;
	unsigned char field274_0x5c41;
	unsigned char field275_0x5c42;
	unsigned char field276_0x5c43;
	unsigned char field277_0x5c44;
	unsigned char field278_0x5c45;
	unsigned char field279_0x5c46;
	unsigned char field280_0x5c47;
	unsigned char field281_0x5c48;
	unsigned char field282_0x5c49;
	unsigned char field283_0x5c4a;
	unsigned char field284_0x5c4b;
	unsigned char field285_0x5c4c;
	unsigned char field286_0x5c4d;
	unsigned char field287_0x5c4e;
	unsigned char field288_0x5c4f;
	unsigned char field289_0x5c50;
	unsigned char field290_0x5c51;
	unsigned char field291_0x5c52;
	unsigned char field292_0x5c53;
	unsigned char field293_0x5c54;
	unsigned char field294_0x5c55;
	unsigned char field295_0x5c56;
	unsigned char field296_0x5c57;
	int field297_0x5c58;
	int field298_0x5c5c;
	char * field299_0x5c60;
	unsigned char field300_0x5c64;
	unsigned char field301_0x5c65;
	unsigned char field302_0x5c66;
	unsigned char field303_0x5c67;
	unsigned char field304_0x5c68;
	unsigned char field305_0x5c69;
	unsigned char field306_0x5c6a;
	unsigned char field307_0x5c6b;
	unsigned char field308_0x5c6c;
	unsigned char field309_0x5c6d;
	unsigned char field310_0x5c6e;
	unsigned char field311_0x5c6f;
	unsigned char field312_0x5c70;
	unsigned char field313_0x5c71;
	unsigned char field314_0x5c72;
	unsigned char field315_0x5c73;
	unsigned char field316_0x5c74;
	unsigned char field317_0x5c75;
	unsigned char field318_0x5c76;
	unsigned char field319_0x5c77;
	unsigned char field320_0x5c78;
	unsigned char field321_0x5c79;
	unsigned char field322_0x5c7a;
	unsigned char field323_0x5c7b;
	unsigned char field324_0x5c7c;
	unsigned char field325_0x5c7d;
	unsigned char field326_0x5c7e;
	unsigned char field327_0x5c7f;
	unsigned char field328_0x5c80;
	unsigned char field329_0x5c81;
	unsigned char field330_0x5c82;
	unsigned char field331_0x5c83;
	unsigned char field332_0x5c84;
	unsigned char field333_0x5c85;
	unsigned char field334_0x5c86;
	unsigned char field335_0x5c87;
	unsigned char field336_0x5c88;
	unsigned char field337_0x5c89;
	unsigned char field338_0x5c8a;
	unsigned char field339_0x5c8b;
	unsigned char field340_0x5c8c;
	unsigned char field341_0x5c8d;
	unsigned char field342_0x5c8e;
	unsigned char field343_0x5c8f;
	unsigned char field344_0x5c90;
	unsigned char field345_0x5c91;
	unsigned char field346_0x5c92;
	unsigned char field347_0x5c93;
	unsigned char field348_0x5c94;
	unsigned char field349_0x5c95;
	unsigned char field350_0x5c96;
	unsigned char field351_0x5c97;
	unsigned char field352_0x5c98;
	unsigned char field353_0x5c99;
	unsigned char field354_0x5c9a;
	unsigned char field355_0x5c9b;
	unsigned char field356_0x5c9c;
	unsigned char field357_0x5c9d;
	unsigned char field358_0x5c9e;
	unsigned char field359_0x5c9f;
	unsigned char field360_0x5ca0;
	unsigned char field361_0x5ca1;
	unsigned char field362_0x5ca2;
	unsigned char field363_0x5ca3;
	unsigned char field364_0x5ca4;
	unsigned char field365_0x5ca5;
	unsigned char field366_0x5ca6;
	unsigned char field367_0x5ca7;
	unsigned char field368_0x5ca8;
	unsigned char field369_0x5ca9;
	unsigned char field370_0x5caa;
	unsigned char field371_0x5cab;
	unsigned char field372_0x5cac;
	unsigned char field373_0x5cad;
	unsigned char field374_0x5cae;
	unsigned char field375_0x5caf;
	unsigned char field376_0x5cb0;
	unsigned char field377_0x5cb1;
	unsigned char field378_0x5cb2;
	unsigned char field379_0x5cb3;
	unsigned char field380_0x5cb4;
	unsigned char field381_0x5cb5;
	unsigned char field382_0x5cb6;
	unsigned char field383_0x5cb7;
	unsigned char field384_0x5cb8;
	unsigned char field385_0x5cb9;
	unsigned char field386_0x5cba;
	unsigned char field387_0x5cbb;
	unsigned char field388_0x5cbc;
	unsigned char field389_0x5cbd;
	unsigned char field390_0x5cbe;
	unsigned char field391_0x5cbf;
	unsigned char field392_0x5cc0;
	unsigned char field393_0x5cc1;
	unsigned char field394_0x5cc2;
	unsigned char field395_0x5cc3;
	unsigned char field396_0x5cc4;
	unsigned char field397_0x5cc5;
	unsigned char field398_0x5cc6;
	unsigned char field399_0x5cc7;
	unsigned char field400_0x5cc8;
	unsigned char field401_0x5cc9;
	unsigned char field402_0x5cca;
	unsigned char field403_0x5ccb;
	unsigned char field404_0x5ccc;
	unsigned char field405_0x5ccd;
	unsigned char field406_0x5cce;
	unsigned char field407_0x5ccf;
	unsigned char field408_0x5cd0;
	unsigned char field409_0x5cd1;
	unsigned char field410_0x5cd2;
	unsigned char field411_0x5cd3;
	unsigned char field412_0x5cd4;
	unsigned char field413_0x5cd5;
	unsigned char field414_0x5cd6;
	unsigned char field415_0x5cd7;
	unsigned char field416_0x5cd8;
	unsigned char field417_0x5cd9;
	unsigned char field418_0x5cda;
	unsigned char field419_0x5cdb;
	unsigned char field420_0x5cdc;
	unsigned char field421_0x5cdd;
	unsigned char field422_0x5cde;
	unsigned char field423_0x5cdf;
	unsigned char field424_0x5ce0;
	unsigned char field425_0x5ce1;
	unsigned char field426_0x5ce2;
	unsigned char field427_0x5ce3;
	unsigned char field428_0x5ce4;
	unsigned char field429_0x5ce5;
	unsigned char field430_0x5ce6;
	unsigned char field431_0x5ce7;
	unsigned char field432_0x5ce8;
	unsigned char field433_0x5ce9;
	unsigned char field434_0x5cea;
	unsigned char field435_0x5ceb;
	unsigned char field436_0x5cec;
	unsigned char field437_0x5ced;
	unsigned char field438_0x5cee;
	unsigned char field439_0x5cef;
	unsigned char field440_0x5cf0;
	unsigned char field441_0x5cf1;
	unsigned char field442_0x5cf2;
	unsigned char field443_0x5cf3;
	unsigned char field444_0x5cf4;
	unsigned char field445_0x5cf5;
	unsigned char field446_0x5cf6;
	unsigned char field447_0x5cf7;
	unsigned char field448_0x5cf8;
	unsigned char field449_0x5cf9;
	unsigned char field450_0x5cfa;
	unsigned char field451_0x5cfb;
	unsigned char field452_0x5cfc;
	unsigned char field453_0x5cfd;
	unsigned char field454_0x5cfe;
	unsigned char field455_0x5cff;
	unsigned char field456_0x5d00;
	unsigned char field457_0x5d01;
	unsigned char field458_0x5d02;
	unsigned char field459_0x5d03;
	unsigned char field460_0x5d04;
	unsigned char field461_0x5d05;
	unsigned char field462_0x5d06;
	unsigned char field463_0x5d07;
	unsigned char field464_0x5d08;
	unsigned char field465_0x5d09;
	unsigned char field466_0x5d0a;
	unsigned char field467_0x5d0b;
	unsigned char field468_0x5d0c;
	unsigned char field469_0x5d0d;
	unsigned char field470_0x5d0e;
	unsigned char field471_0x5d0f;
	unsigned char field472_0x5d10;
	unsigned char field473_0x5d11;
	unsigned char field474_0x5d12;
	unsigned char field475_0x5d13;
	unsigned char field476_0x5d14;
	unsigned char field477_0x5d15;
	unsigned char field478_0x5d16;
	unsigned char field479_0x5d17;
	unsigned char field480_0x5d18;
	unsigned char field481_0x5d19;
	unsigned char field482_0x5d1a;
	unsigned char field483_0x5d1b;
	unsigned char field484_0x5d1c;
	unsigned char field485_0x5d1d;
	unsigned char field486_0x5d1e;
	unsigned char field487_0x5d1f;
	unsigned char field488_0x5d20;
	unsigned char field489_0x5d21;
	unsigned char field490_0x5d22;
	unsigned char field491_0x5d23;
	unsigned char field492_0x5d24;
	unsigned char field493_0x5d25;
	unsigned char field494_0x5d26;
	unsigned char field495_0x5d27;
	unsigned char field496_0x5d28;
	unsigned char field497_0x5d29;
	unsigned char field498_0x5d2a;
	unsigned char field499_0x5d2b;
	unsigned char field500_0x5d2c;
	unsigned char field501_0x5d2d;
	unsigned char field502_0x5d2e;
	unsigned char field503_0x5d2f;
	unsigned char field504_0x5d30;
	unsigned char field505_0x5d31;
	unsigned char field506_0x5d32;
	unsigned char field507_0x5d33;
	unsigned char field508_0x5d34;
	unsigned char field509_0x5d35;
	unsigned char field510_0x5d36;
	unsigned char field511_0x5d37;
	unsigned char field512_0x5d38;
	unsigned char field513_0x5d39;
	unsigned char field514_0x5d3a;
	unsigned char field515_0x5d3b;
	unsigned char field516_0x5d3c;
	unsigned char field517_0x5d3d;
	unsigned char field518_0x5d3e;
	unsigned char field519_0x5d3f;
	unsigned char field520_0x5d40;
	unsigned char field521_0x5d41;
	unsigned char field522_0x5d42;
	unsigned char field523_0x5d43;
	unsigned char field524_0x5d44;
	unsigned char field525_0x5d45;
	unsigned char field526_0x5d46;
	unsigned char field527_0x5d47;
	unsigned char field528_0x5d48;
	unsigned char field529_0x5d49;
	unsigned char field530_0x5d4a;
	unsigned char field531_0x5d4b;
	unsigned char field532_0x5d4c;
	unsigned char field533_0x5d4d;
	unsigned char field534_0x5d4e;
	unsigned char field535_0x5d4f;
	unsigned char field536_0x5d50;
	unsigned char field537_0x5d51;
	unsigned char field538_0x5d52;
	unsigned char field539_0x5d53;
	unsigned char field540_0x5d54;
	unsigned char field541_0x5d55;
	unsigned char field542_0x5d56;
	unsigned char field543_0x5d57;
	unsigned char field544_0x5d58;
	unsigned char field545_0x5d59;
	unsigned char field546_0x5d5a;
	unsigned char field547_0x5d5b;
	unsigned char field548_0x5d5c;
	unsigned char field549_0x5d5d;
	unsigned char field550_0x5d5e;
	unsigned char field551_0x5d5f;
	unsigned char field552_0x5d60;
	unsigned char field553_0x5d61;
	unsigned char field554_0x5d62;
	unsigned char field555_0x5d63;
	int field556_0x5d64;
	short field557_0x5d68;
	unsigned char field558_0x5d6a;
	char buffer;
	short flags;
	short brightness;
	short falling_counter_0;
	short falling_counter;
	char falling_status; /* Created by retype action */
	unsigned char field565_0x5d75;
	short field566_0x5d76;
	unsigned char field567_0x5d78;
	unsigned char field568_0x5d79;
	unsigned char field569_0x5d7a;
	unsigned char field570_0x5d7b;
	unsigned char field571_0x5d7c;
	unsigned char field572_0x5d7d;
	unsigned char field573_0x5d7e;
	unsigned char field574_0x5d7f;
	unsigned int field575_0x5d80;
	unsigned char field576_0x5d84;
	unsigned char field577_0x5d85;
	unsigned char field578_0x5d86;
	unsigned char field579_0x5d87;
	unsigned char field580_0x5d88;
	unsigned char field581_0x5d89;
	unsigned char field582_0x5d8a;
	unsigned char field583_0x5d8b;
	unsigned char field584_0x5d8c;
	unsigned char field585_0x5d8d;
	unsigned char field586_0x5d8e;
	unsigned char field587_0x5d8f;
	short x_translation_offset;
	short y_translation_offset;
	short dungeon_width;
	unsigned char field591_0x5d96;
	unsigned char field592_0x5d97;
	unsigned char field593_0x5d98;
	unsigned char field594_0x5d99;
	unsigned char field595_0x5d9a;
	unsigned char field596_0x5d9b;
	unsigned char field597_0x5d9c;
	unsigned char field598_0x5d9d;
	unsigned char field599_0x5d9e;
	unsigned char field600_0x5d9f;
	unsigned char field601_0x5da0;
	unsigned char field602_0x5da1;
	unsigned char field603_0x5da2;
	unsigned char field604_0x5da3;
	short index;
	struct dungeon_tile layout[625];
	char culling_data[625];
	unsigned char field608_0x64f9;
	unsigned char field609_0x64fa;
	unsigned char field610_0x64fb;
	short current_tile_contents;
	enum tile_contents field612_0x64fe;
	unsigned char field613_0x64ff;
	void * lighting_brightness_addr; /* Created by retype action */
	unsigned char field615_0x6504;
	unsigned char field616_0x6505;
	unsigned char field617_0x6506;
	unsigned char dark;
	short x_offset;
	enum map map_id;
	char field621_0x650c;
	unsigned char field622_0x650d;
	unsigned char field623_0x650e;
	unsigned char field624_0x650f;
	unsigned int * buffer_0_img;
	unsigned int * buffer_1_img;
	int field627_0x6518;
	unsigned char field628_0x651c;
	unsigned char field629_0x651d;
	unsigned char field630_0x651e;
	unsigned char field631_0x651f;
} dungeon_data;








typedef struct struct_7 {
	POLY_FT4 polys[4];
	SPRT_16 sprts[4];
	DR_MODE dr_mode;
} struct_7;

typedef struct border_object_data {
	struct struct_7 geom[2];
	struct pos pos;
	char buffer; /* Created by retype action */
	unsigned char field3_0x1dd;
	unsigned char field4_0x1de;
	unsigned char field5_0x1df;
} border_object_data;



typedef struct screen_overlay {
	POLY_F4 p[2];
	DR_MODE dr_modes[2];
	struct color_anim color_anim;
	short x;
	short y;
	short w;
	short h;
	CVECTOR color;
	char t_page;
	unsigned char animating;
	char size;
	char buffer;
	unsigned char field12_0x74;
	unsigned char field13_0x75;
	unsigned char field14_0x76;
	unsigned char field15_0x77;
	unsigned char field16_0x78;
	unsigned char field17_0x79;
	unsigned char field18_0x7a;
	unsigned char field19_0x7b;
} screen_overlay;



typedef struct encounter_bar_object_data {
	struct encounter_bar_object_data_substruct geometry[2];
	int proximity_1;
	int proximity_2;
	short keep_synced;
	char buffer;
	unsigned char field5_0x193;
} encounter_bar_object_data;

typedef struct object_info {
	void * origin;
	union object_data * next;
	unsigned int field2_0x8;
	unsigned int size;
	union object_data * field4_0x10;
	union object_data * field5_0x14;
	unsigned char * field6_0x18;
	unsigned char field7_0x1c;
	unsigned char field8_0x1d;
	unsigned char field9_0x1e;
	unsigned char field10_0x1f;
	unsigned char field11_0x20;
	unsigned char field12_0x21;
	unsigned char field13_0x22;
	unsigned char field14_0x23;
	unsigned char field15_0x24;
	unsigned char field16_0x25;
	unsigned char field17_0x26;
	unsigned char field18_0x27;
	unsigned char field19_0x28;
	unsigned char field20_0x29;
	unsigned char field21_0x2a;
	unsigned char field22_0x2b;
	unsigned char field23_0x2c;
	unsigned char field24_0x2d;
	unsigned char field25_0x2e;
	unsigned char field26_0x2f;
	unsigned char field27_0x30;
	unsigned char field28_0x31;
	unsigned char field29_0x32;
	unsigned char field30_0x33;
	union object_data * field31_0x34;
	unsigned char field32_0x38;
	unsigned char field33_0x39;
	unsigned char field34_0x3a;
	unsigned char field35_0x3b;
	unsigned char field36_0x3c;
	unsigned char field37_0x3d;
	unsigned char field38_0x3e;
	unsigned char field39_0x3f;
	unsigned short field40_0x40;
	short field41_0x42;
	unsigned short field42_0x44;
	short field43_0x46;
	short field44_0x48;
	unsigned short field45_0x4a;
	unsigned short field46_0x4c;
	unsigned char field47_0x4e;
	unsigned char field48_0x4f;
	short field49_0x50;
	unsigned char field50_0x52;
	unsigned char field51_0x53;
	unsigned char field52_0x54;
	unsigned char field53_0x55;
	unsigned char field54_0x56;
	unsigned char field55_0x57;
	unsigned char field56_0x58;
	unsigned char field57_0x59;
	unsigned char field58_0x5a;
	unsigned char field59_0x5b;
	short field60_0x5c;
	short field61_0x5e;
	short field62_0x60;
	unsigned short field63_0x62;
	unsigned char field64_0x64;
	unsigned char field65_0x65;
	unsigned char field66_0x66;
	unsigned char field67_0x67;
	unsigned short x_pos; /* Created by retype action */
	unsigned short y_pos; /* Created by retype action */
	unsigned char field70_0x6c;
	unsigned char field71_0x6d;
	unsigned char field72_0x6e;
	unsigned char field73_0x6f;
	unsigned int field74_0x70;
	unsigned char field75_0x74;
	unsigned char field76_0x75;
	unsigned char field77_0x76;
	unsigned char field78_0x77;
	unsigned char field79_0x78;
	unsigned char field80_0x79;
	unsigned char field81_0x7a;
	unsigned char field82_0x7b;
	unsigned char field83_0x7c;
	unsigned char field84_0x7d;
	unsigned char field85_0x7e;
	unsigned char field86_0x7f;
	unsigned char field87_0x80;
	unsigned char field88_0x81;
	unsigned char field89_0x82;
	unsigned char field90_0x83;
	unsigned char field91_0x84;
	unsigned char field92_0x85;
	unsigned char field93_0x86;
	unsigned char field94_0x87;
	unsigned char field95_0x88;
	unsigned char field96_0x89;
	unsigned char field97_0x8a;
	unsigned char field98_0x8b;
	unsigned char field99_0x8c;
	unsigned char field100_0x8d;
	unsigned char field101_0x8e;
	unsigned char field102_0x8f;
	unsigned char field103_0x90;
	unsigned char field104_0x91;
	unsigned char field105_0x92;
	unsigned char field106_0x93;
	unsigned char field107_0x94;
	unsigned char field108_0x95;
	unsigned char field109_0x96;
	unsigned char field110_0x97;
	unsigned char field111_0x98;
	unsigned char field112_0x99;
	unsigned char field113_0x9a;
	unsigned char field114_0x9b;
	unsigned char field115_0x9c;
	unsigned char field116_0x9d;
	unsigned char field117_0x9e;
	unsigned char field118_0x9f;
	unsigned char field119_0xa0;
	unsigned char field120_0xa1;
	unsigned char field121_0xa2;
	unsigned char field122_0xa3;
	unsigned char field123_0xa4;
	unsigned char field124_0xa5;
	unsigned char field125_0xa6;
	unsigned char field126_0xa7;
	unsigned char field127_0xa8;
	unsigned char field128_0xa9;
	unsigned char field129_0xaa;
	unsigned char field130_0xab;
	unsigned char field131_0xac;
	unsigned char field132_0xad;
	unsigned char field133_0xae;
	unsigned char field134_0xaf;
	unsigned char field135_0xb0;
	unsigned char field136_0xb1;
	unsigned char field137_0xb2;
	unsigned char field138_0xb3;
	unsigned char field139_0xb4;
	unsigned char field140_0xb5;
	unsigned char field141_0xb6;
	unsigned char field142_0xb7;
	unsigned char field143_0xb8;
	unsigned char field144_0xb9;
	unsigned char field145_0xba;
	unsigned char field146_0xbb;
	unsigned char field147_0xbc;
	unsigned char field148_0xbd;
	unsigned char field149_0xbe;
	unsigned char field150_0xbf;
	unsigned char field151_0xc0;
	unsigned char field152_0xc1;
	unsigned char field153_0xc2;
	unsigned char field154_0xc3;
	unsigned char field155_0xc4;
	unsigned char field156_0xc5;
	unsigned char field157_0xc6;
	unsigned char field158_0xc7;
	unsigned char field159_0xc8;
	unsigned char field160_0xc9;
	unsigned char field161_0xca;
	unsigned char field162_0xcb;
	unsigned char field163_0xcc;
	unsigned char field164_0xcd;
	unsigned char field165_0xce;
	unsigned char field166_0xcf;
	unsigned char field167_0xd0;
	unsigned char field168_0xd1;
	unsigned char field169_0xd2;
	unsigned char field170_0xd3;
	unsigned char field171_0xd4;
	unsigned char field172_0xd5;
	unsigned char field173_0xd6;
	unsigned char field174_0xd7;
	unsigned char field175_0xd8;
	unsigned char field176_0xd9;
	unsigned char field177_0xda;
	unsigned char field178_0xdb;
	unsigned char field179_0xdc;
	unsigned char field180_0xdd;
	unsigned char field181_0xde;
	unsigned char field182_0xdf;
	unsigned char field183_0xe0;
	unsigned char field184_0xe1;
	unsigned char field185_0xe2;
	unsigned char field186_0xe3;
	unsigned char field187_0xe4;
	unsigned char field188_0xe5;
	unsigned char field189_0xe6;
	unsigned char field190_0xe7;
	unsigned char field191_0xe8;
	unsigned char field192_0xe9;
	unsigned char field193_0xea;
	unsigned char field194_0xeb;
	unsigned char field195_0xec;
	unsigned char field196_0xed;
	unsigned char field197_0xee;
	unsigned char field198_0xef;
	unsigned char field199_0xf0;
	unsigned char field200_0xf1;
	unsigned char field201_0xf2;
	unsigned char field202_0xf3;
	unsigned char field203_0xf4;
	unsigned char field204_0xf5;
	unsigned char field205_0xf6;
	unsigned char field206_0xf7;
	unsigned char field207_0xf8;
	unsigned char field208_0xf9;
	unsigned char field209_0xfa;
	unsigned char field210_0xfb;
	unsigned char field211_0xfc;
	unsigned char field212_0xfd;
	unsigned char field213_0xfe;
	unsigned char field214_0xff;
	unsigned char field215_0x100;
	unsigned char field216_0x101;
	unsigned char field217_0x102;
	unsigned char field218_0x103;
	unsigned char field219_0x104;
	unsigned char field220_0x105;
	unsigned char field221_0x106;
	unsigned char field222_0x107;
	unsigned char field223_0x108;
	unsigned char field224_0x109;
	unsigned char field225_0x10a;
	unsigned char field226_0x10b;
	unsigned char field227_0x10c;
	unsigned char field228_0x10d;
	unsigned char field229_0x10e;
	unsigned char field230_0x10f;
	unsigned char field231_0x110;
	unsigned char field232_0x111;
	unsigned char field233_0x112;
	unsigned char field234_0x113;
	unsigned char field235_0x114;
	unsigned char field236_0x115;
	unsigned char field237_0x116;
	unsigned char field238_0x117;
	unsigned char field239_0x118;
	unsigned char field240_0x119;
	unsigned char field241_0x11a;
	unsigned char field242_0x11b;
	unsigned char field243_0x11c;
	unsigned char field244_0x11d;
	unsigned char field245_0x11e;
	unsigned char field246_0x11f;
	unsigned char field247_0x120;
	unsigned char field248_0x121;
	unsigned char field249_0x122;
	unsigned char field250_0x123;
	unsigned char field251_0x124;
	unsigned char field252_0x125;
	unsigned char field253_0x126;
	unsigned char field254_0x127;
	unsigned char field255_0x128;
	unsigned char field256_0x129;
	unsigned char field257_0x12a;
	unsigned char field258_0x12b;
	unsigned char field259_0x12c;
	unsigned char field260_0x12d;
	unsigned char field261_0x12e;
	unsigned char field262_0x12f;
	unsigned char field263_0x130;
	unsigned char field264_0x131;
	unsigned char field265_0x132;
	unsigned char field266_0x133;
	unsigned char field267_0x134;
	unsigned char field268_0x135;
	unsigned char field269_0x136;
	unsigned char field270_0x137;
	unsigned char field271_0x138;
	unsigned char field272_0x139;
	unsigned char field273_0x13a;
	unsigned char field274_0x13b;
	unsigned char field275_0x13c;
	unsigned char field276_0x13d;
	unsigned char field277_0x13e;
	unsigned char field278_0x13f;
	unsigned char field279_0x140;
	unsigned char field280_0x141;
	unsigned char field281_0x142;
	unsigned char field282_0x143;
	unsigned char field283_0x144;
	unsigned char field284_0x145;
	unsigned char field285_0x146;
	unsigned char field286_0x147;
	unsigned char field287_0x148;
	unsigned char field288_0x149;
	unsigned char field289_0x14a;
	unsigned char field290_0x14b;
	unsigned char field291_0x14c;
	unsigned char field292_0x14d;
	unsigned char field293_0x14e;
	unsigned char field294_0x14f;
	unsigned char field295_0x150;
	unsigned char field296_0x151;
	unsigned char field297_0x152;
	unsigned char field298_0x153;
	unsigned char field299_0x154;
	unsigned char field300_0x155;
	unsigned char field301_0x156;
	unsigned char field302_0x157;
	unsigned char field303_0x158;
	unsigned char field304_0x159;
	unsigned char field305_0x15a;
	unsigned char field306_0x15b;
	unsigned char field307_0x15c;
	unsigned char field308_0x15d;
	unsigned char field309_0x15e;
	unsigned char field310_0x15f;
	unsigned char field311_0x160;
	unsigned char field312_0x161;
	unsigned char field313_0x162;
	unsigned char field314_0x163;
	unsigned char field315_0x164;
	unsigned char field316_0x165;
	unsigned char field317_0x166;
	unsigned char field318_0x167;
	unsigned char field319_0x168;
	unsigned char field320_0x169;
	unsigned char field321_0x16a;
	unsigned char field322_0x16b;
	unsigned char field323_0x16c;
	unsigned char field324_0x16d;
	unsigned char field325_0x16e;
	unsigned char field326_0x16f;
	unsigned char field327_0x170;
	unsigned char field328_0x171;
	unsigned char field329_0x172;
	unsigned char field330_0x173;
	unsigned char field331_0x174;
	unsigned char field332_0x175;
	unsigned char field333_0x176;
	unsigned char field334_0x177;
	unsigned char field335_0x178;
	unsigned char field336_0x179;
	unsigned char field337_0x17a;
	unsigned char field338_0x17b;
	unsigned char field339_0x17c;
	unsigned char field340_0x17d;
	unsigned char field341_0x17e;
	unsigned char field342_0x17f;
	unsigned char field343_0x180;
	unsigned char field344_0x181;
	unsigned char field345_0x182;
	unsigned char field346_0x183;
	unsigned char field347_0x184;
	unsigned char field348_0x185;
	unsigned char field349_0x186;
	unsigned char field350_0x187;
	unsigned char field351_0x188;
	unsigned char field352_0x189;
	unsigned char field353_0x18a;
	unsigned char field354_0x18b;
	unsigned char field355_0x18c;
	unsigned char field356_0x18d;
	unsigned char field357_0x18e;
	unsigned char field358_0x18f;
	unsigned char field359_0x190;
	unsigned char field360_0x191;
	unsigned char field361_0x192;
	unsigned char field362_0x193;
	unsigned char field363_0x194;
	unsigned char field364_0x195;
	unsigned char field365_0x196;
	unsigned char field366_0x197;
	unsigned char field367_0x198;
	unsigned char field368_0x199;
	unsigned char field369_0x19a;
	unsigned char field370_0x19b;
	unsigned char field371_0x19c;
	unsigned char field372_0x19d;
	unsigned char field373_0x19e;
	unsigned char field374_0x19f;
	unsigned char field375_0x1a0;
	unsigned char field376_0x1a1;
	unsigned char field377_0x1a2;
	unsigned char field378_0x1a3;
	unsigned char field379_0x1a4;
	unsigned char field380_0x1a5;
	unsigned char field381_0x1a6;
	unsigned char field382_0x1a7;
	unsigned char field383_0x1a8;
	unsigned char field384_0x1a9;
	unsigned char field385_0x1aa;
	unsigned char field386_0x1ab;
	unsigned char field387_0x1ac;
	unsigned char field388_0x1ad;
	unsigned char field389_0x1ae;
	unsigned char field390_0x1af;
	unsigned char field391_0x1b0;
	unsigned char field392_0x1b1;
	unsigned char field393_0x1b2;
	unsigned char field394_0x1b3;
	unsigned char field395_0x1b4;
	unsigned char field396_0x1b5;
	unsigned char field397_0x1b6;
	unsigned char field398_0x1b7;
	unsigned char field399_0x1b8;
	unsigned char field400_0x1b9;
	unsigned char field401_0x1ba;
	unsigned char field402_0x1bb;
	unsigned char field403_0x1bc;
	unsigned char field404_0x1bd;
	unsigned char field405_0x1be;
	unsigned char field406_0x1bf;
	unsigned char field407_0x1c0;
	unsigned char field408_0x1c1;
	unsigned char field409_0x1c2;
	unsigned char field410_0x1c3;
	unsigned char field411_0x1c4;
	unsigned char field412_0x1c5;
	unsigned char field413_0x1c6;
	unsigned char field414_0x1c7;
	unsigned char field415_0x1c8;
	unsigned char field416_0x1c9;
	unsigned char field417_0x1ca;
	unsigned char field418_0x1cb;
	unsigned char field419_0x1cc;
	unsigned char field420_0x1cd;
	unsigned char field421_0x1ce;
	unsigned char field422_0x1cf;
	unsigned char field423_0x1d0;
	unsigned char field424_0x1d1;
	unsigned char field425_0x1d2;
	unsigned char field426_0x1d3;
	unsigned char field427_0x1d4;
	unsigned char field428_0x1d5;
	unsigned char field429_0x1d6;
	unsigned char field430_0x1d7;
	unsigned char field431_0x1d8;
	unsigned char field432_0x1d9;
	unsigned char field433_0x1da;
	unsigned char field434_0x1db;
	unsigned char field435_0x1dc;
	unsigned char field436_0x1dd;
	unsigned char field437_0x1de;
	unsigned char field438_0x1df;
	unsigned char field439_0x1e0;
	unsigned char field440_0x1e1;
	unsigned char field441_0x1e2;
	unsigned char field442_0x1e3;
	unsigned char field443_0x1e4;
	unsigned char field444_0x1e5;
	unsigned char field445_0x1e6;
	unsigned char field446_0x1e7;
	unsigned char field447_0x1e8;
	unsigned char field448_0x1e9;
	unsigned char field449_0x1ea;
	unsigned char field450_0x1eb;
	unsigned char field451_0x1ec;
	unsigned char field452_0x1ed;
	unsigned char field453_0x1ee;
	unsigned char field454_0x1ef;
	unsigned char field455_0x1f0;
	unsigned char field456_0x1f1;
	unsigned char field457_0x1f2;
	unsigned char field458_0x1f3;
	unsigned char field459_0x1f4;
	unsigned char field460_0x1f5;
	unsigned char field461_0x1f6;
	unsigned char field462_0x1f7;
	unsigned char field463_0x1f8;
	unsigned char field464_0x1f9;
	unsigned char field465_0x1fa;
	unsigned char field466_0x1fb;
	unsigned char field467_0x1fc;
	unsigned char field468_0x1fd;
	unsigned char field469_0x1fe;
	unsigned char field470_0x1ff;
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