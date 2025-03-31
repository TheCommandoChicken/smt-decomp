#include <common.h>

s32 main(void);
void start(void);
void Init(void);
void MainLoop(void);
void Empty(void);
void SysInit(void);
void VSyncCallbackFunc(void);
void DrawSyncCallbackFunc(void);
u32 Random(void);
persistent_objects* GameInit(void);
void GameManagerProc(object*);
void func_800144D4(s8);
void GameDataInit(void);
void func_800145CC(s32);
void func_80014698(object*);
s32 func_800147CC(void);
s32 func_80014804(void);
void func_8001489C(s32, s32, s32);
void func_800148D4(void);
void func_800148FC(s32);
void func_80014928(s32);
s32 func_80014964(void);
void func_8001497C(void);
void func_800149E4(s32);
s32 func_800149F0(s32);
s32 func_80014A18(object*);
object* func_80014A2C(void);
void func_80014E34(object*);
void func_80014F44(object*);
void func_800150A0(object*);
void func_8001513C(s32*);

s32 D_80010308;
s32 D_800B6C54;
s32 D_800B6C58;
u8 D_80125368;
s32 D_800B6C5C;
s32 D_800B74EC;

object** FirstObjectPtrPtr;
persistent_objects PersistentObjects;
unknown_object_struct* UnknownStruct[2];

typedef struct game_manager_data game_manager_data, *Pgame_manager_data;
typedef struct persistent_objects persistent_objects;
typedef struct object object, *Pobject;

typedef union object_data object_data, *Pobject_data;

typedef struct object_info object_info, *Pobject_info;

typedef struct overworld_data overworld_data, *Poverworld_data;

typedef struct dungeon_data dungeon_data, *Pdungeon_data;

typedef struct sprite_object sprite_object, *Psprite_object;

typedef struct poly_f3_object_data poly_f3_object_data, *Ppoly_f3_object_data;

typedef struct poly_ft3_object_data poly_ft3_object_data, *Ppoly_ft3_object_data;

typedef struct poly_g3_object_data poly_g3_object_data, *Ppoly_g3_object_data;

typedef struct poly_gt3_object_data poly_gt3_object_data, *Ppoly_gt3_object_data;

typedef struct poly_f4_object_data poly_f4_object_data, *Ppoly_f4_object_data;

typedef struct poly_ft4_object_data poly_ft4_object_data, *Ppoly_ft4_object_data;

typedef struct poly_g4_object_data poly_g4_object_data, *Ppoly_g4_object_data;

typedef struct poly_gt4_object_data poly_gt4_object_data, *Ppoly_gt4_object_data;

typedef struct line_f2_object_data line_f2_object_data, *Pline_f2_object_data;

typedef struct party_hud_object_data party_hud_object_data, *Pparty_hud_object_data;

typedef struct overworld_character_object_data overworld_character_object_data, *Poverworld_character_object_data;

typedef struct money_hud_object_data money_hud_object_data, *Pmoney_hud_object_data;

typedef struct border_object_data border_object_data, *Pborder_object_data;

typedef struct encounter_bar_object_data encounter_bar_object_data, *Pencounter_bar_object_data;

typedef struct moon_hud_object_data moon_hud_object_data, *Pmoon_hud_object_data;

typedef struct navigation_hud_object_data navigation_hud_object_data, *Pnavigation_hud_object_data;

typedef struct screen_overlay screen_overlay, *Pscreen_overlay;

typedef struct unknown_620_byte_struct unknown_620_byte_struct, *Punknown_620_byte_struct;

typedef struct list_object_data list_object_data, *Plist_object_data;

typedef struct overworld_graphics overworld_graphics, *Poverworld_graphics;

typedef struct GsVIEW2 GsVIEW2, *PGsVIEW2;

typedef struct _GsCOORDINATE2 _GsCOORDINATE2, *P_GsCOORDINATE2;

typedef struct _GsCOORDINATE2 GsCOORDINATE2;

typedef struct SVECTOR SVECTOR, *PSVECTOR;

typedef struct unknown_dobj2_struct unknown_dobj2_struct, *Punknown_dobj2_struct;

typedef struct dungeon_data_substruct dungeon_data_substruct, *Pdungeon_data_substruct;

typedef struct GsDOBJ2 GsDOBJ2, *PGsDOBJ2;

typedef struct VECTOR VECTOR, *PVECTOR;

typedef struct dungeon_init_data dungeon_init_data, *Pdungeon_init_data;

typedef struct dungeon_tile dungeon_tile, *Pdungeon_tile;

typedef enum tile_contents {
    Empty=0,
    FiftyPercentChanceOfDoingSomething=1,
    PoisonTrap=2,
    DamageTrap=3,
    RedDamageTrap=4,
    Pit=5,
    TileUnknown2=6,
    Exit=7,
    TileUnknown3=8,
    TileUnknown4=9,
    ShowMessage=10,
    TileUnknown5=11,
    TileUnknown6=12,
    TileUnknown7=13,
    TileUnknown8=14,
    TileUnknown9=15,
    TileUnknown10=16,
    TileUnknown11=17,
    TileUnknown12=18,
    TileUnknown13=19,
    TileUnknown14=20,
    TileUnknown15=21
} tile_contents;

typedef enum map {
    HeroHouse=0,
    NeighborHouse=1,
    Arcade=2,
    InogashiraPark=3,
    Hospital1F=4,
    Hospital2F=5,
    EchoBuilding1F=6,
    EchoBuilding2F=7,
    EchoBuilding3F=8,
    EchoBuilding4F=9,
    EchoBuilding5F=10,
    Laboratory1F=11,
    Laboratory2F=12,
    ShinjukuEast=13,
    ShinjukuWest=14,
    ShinjukuShoppingCenter=15,
    ShinjukuUndergroundPath=16,
    Disco=17,
    ShinjukuBuilding1F=18,
    ShinjukuBuilding2F=19,
    TokyoGovernmentOffice=20,
    ShinjukuWesternBuilding=21,
    IchigayaMilitaryBase1F=22,
    IchigayaMilitaryBase2F=23,
    IchigayaMilitaryBase3F=24,
    Unknown1=25,
    AmericanEmbassyTunnel=26,
    AmericanEmbassy1F=27,
    AmericanEmbassy2F=28,
    Vajradhatu=29,
    Unknown2=30,
    Unknown3=31,
    ShinjukuShoppingCenterApocalypse=32,
    ShibuyaBuilding1F=33,
    ShibuyaBuilding2F=34,
    HeroineMind=35,
    RoppongiPassage=36,
    Roppongi1F=37,
    Roppongi2F=38,
    Roppongi3F=39,
    RoppongiB1F=40,
    CrossroadsB3F=41,
    CrossroadsB2F=42,
    CrossroadsRoppongiB1F=43,
    CrossroadsRoppongiB2F=44,
    CrossroadsIkebukuroB1F=45,
    CrossroadsIkebukuroB2F=46,
    PoliceDepartmentB1F=47,
    PoliceDepartment1F=48,
    PoliceDepartment2F=49,
    PoliceDepartment3F=50,
    PoliceDepartment4F=51,
    PoliceDepartment5F=52,
    TokyoTower1F=53,
    TokyoTower30F=54,
    TokyoTower45F=55,
    GinzaNW=56,
    GinzaNE=57,
    GinzaSW=58,
    GinzaSE=59,
    GinzaB1F=60,
    GinzaB2F=61,
    GinzaB3F=62,
    GinzaTunnel=63,
    Shinagawa1F=64,
    Shinagawa2F=65,
    Shinagawa3F=66,
    Shinagawa4F=67,
    SugamoPrison1F=68,
    SugamoPrison2F=69,
    SugamoPrison3F=70,
    SugamoPrison4F=71,
    SugamoPrison5F=72,
    Ueno1F=73,
    Ueno2F=74,
    Ueno3F=75,
    UenoB1F=76,
    UenoB2F=77,
    DestinyLand1F=78,
    DestinyLand2F=79,
    DestinyLand3F=80,
    DestinyLand4F=81,
    TokyoGovernmentOffice32F=82,
    TokyoGovernmentOfficeL45F=83,
    TokyoGovernmentOfficeL46F=84,
    TokyoGovernmentOfficeL47F=85,
    TokyoGovernmentOfficeL48F=86,
    TokyoGovernmentOfficeR45F=87,
    TokyoGovernmentOfficeR46F=88,
    TokyoGovernmentOfficeR47F=89,
    TokyoGovernmentOfficeR48F=90,
    NorthManor=91,
    EastManor=92,
    WestManor=93,
    SouthManor=94,
    PalaceB1F=95,
    PalaceB2F=96,
    PalaceB3F=97,
    PalaceB4F=98,
    PalaceB5F=99,
    Dream1=100,
    Dream2=101,
    Dream3=102,
    Unknown4=103,
    EchoDream1F=104,
    EchoDream2F=105,
    EchoDream3F=106,
    EchoDream4F=107,
    EchoDream5F=108,
    Unknown5=109,
    Unknown6=110,
    CathedralTop=111,
    Cathedral1F=112,
    CathedralB1F=113,
    CathedralB2F=114,
    CathedralB3F=115,
    CathedralB4F=116,
    CathedralB5F=117,
    CathedralB6F=118,
    CathedralB7F=119,
    CathedralB8F=120,
    Cathedral2F=121,
    Cathedral3F=122,
    Cathedral4F=123,
    Cathedral5F=124,
    Cathedral6F=125,
    Cathedral7F=126,
    Cathedral8F=127,
    GinzaTunnelB1F=128,
    GinzaTunnelB2F=129,
    Unknown7=130,
    Unknown8=131,
    GinzaTunnelB2FAlt=132,
    Unused1=133,
    Unused2=134,
    Unused3=135,
    Unused4=136,
    Unused5=137,
    Unused6=138,
    Unused7=139,
    Unused8=140,
    Unused9=141,
    UnusedA=142,
    UnusedB=143,
    UnusedC=144,
    UnusedD=145,
    UnusedE=146,
    UnusedF=147,
    Unused10=148,
    Unused11=149,
    Unused12=150,
    Unused13=151,
    Unused14=152,
    Unused15=153,
    Unused16=154,
    Unused17=155,
    Unused18=156,
    Unused19=157,
    Unused1A=158,
    Unused1B=159,
    Unused1C=160,
    Unused1D=161,
    Unused1E=162,
    Unused1F=163,
    Unused20=164,
    Unused21=165,
    Unused22=166,
    Unused23=167,
    Unused24=168,
    Unused25=169,
    Unused26=170,
    Unused27=171,
    Unused28=172,
    Unused29=173,
    Unused2A=174,
    Unused2B=175,
    Unused2C=176,
    Unused2D=177,
    Unused2E=178,
    Unused2F=179,
    Unused30=180,
    Unused31=181,
    Unused32=182,
    Unused33=183,
    Unused34=184,
    Unused35=185,
    Unused36=186,
    Unused37=187,
    Unused38=188,
    Unused39=189,
    Unused3A=190,
    Unused3B=191,
    Unused3C=192,
    Unused3D=193,
    Unused3E=194,
    Unused3F=195,
    Unused40=196,
    Unused41=197,
    Unused42=198,
    Unused43=199,
    Unused44=200,
    Unused45=201,
    Unused46=202,
    Unused47=203,
    Unused48=204,
    Unused49=205,
    Unused4A=206,
    Unused4B=207,
    Unused4C=208,
    Unused4D=209,
    Unused4E=210,
    Unused4F=211,
    Unused50=212,
    Unused51=213,
    Unused52=214,
    Unused53=215,
    Unused54=216,
    Unused55=217,
    Unused56=218,
    Unused57=219,
    Unused58=220,
    Unused59=221,
    Unused5A=222,
    Unused5B=223,
    Unused5C=224,
    Unused5D=225,
    Unused5E=226,
    Unused5F=227,
    Unused60=228,
    Unused61=229,
    Unused62=230,
    Unused63=231,
    Unused64=232,
    Unused65=233,
    Unused66=234,
    Unused67=235,
    Unused68=236,
    Unused69=237,
    Unused6A=238,
    Unused6B=239,
    Unused6C=240,
    Unused6D=241,
    Unused6E=242,
    Unused6F=243,
    Unused70=244,
    Unused71=245,
    Unused72=246,
    Unused73=247,
    Unused74=248,
    Unused75=249,
    Unused76=250,
    Unused77=251,
    Unused78=252,
    Unused79=253,
    Unused7A=254,
    Invalid=255
} map;

typedef struct SPRT SPRT, *PSPRT;

typedef struct DR_MODE DR_MODE, *PDR_MODE;

typedef struct POLY_F3 POLY_F3, *PPOLY_F3;

typedef struct POLY_FT3 POLY_FT3, *PPOLY_FT3;

typedef struct POLY_G3 POLY_G3, *PPOLY_G3;

typedef struct POLY_GT3 POLY_GT3, *PPOLY_GT3;

typedef struct POLY_F4 POLY_F4, *PPOLY_F4;

typedef struct CVECTOR CVECTOR, *PCVECTOR;

typedef struct POLY_FT4 POLY_FT4, *PPOLY_FT4;

typedef struct POLY_G4 POLY_G4, *PPOLY_G4;

typedef struct POLY_GT4 POLY_GT4, *PPOLY_GT4;

typedef struct LINE_F2 LINE_F2, *PLINE_F2;

typedef struct party_hud_geometry_primitives party_hud_geometry_primitives, *Pparty_hud_geometry_primitives;

typedef struct party_hud_geometry_data party_hud_geometry_data, *Pparty_hud_geometry_data;

typedef struct overworld_character_geometry overworld_character_geometry, *Poverworld_character_geometry;

typedef struct money_hud_object_data_substruct money_hud_object_data_substruct, *Pmoney_hud_object_data_substruct;

typedef struct struct_7 struct_7, *Pstruct_7;

typedef struct pos pos, *Ppos;

typedef struct encounter_bar_object_data_substruct encounter_bar_object_data_substruct, *Pencounter_bar_object_data_substruct;

typedef struct moon_hud_object_data_substruct moon_hud_object_data_substruct, *Pmoon_hud_object_data_substruct;

typedef union navigation_hud_geometry navigation_hud_geometry, *Pnavigation_hud_geometry;

typedef struct color_anim color_anim, *Pcolor_anim;

typedef struct astruct_13 astruct_13, *Pastruct_13;

typedef struct SPRT_16 SPRT_16, *PSPRT_16;

typedef struct MATRIX MATRIX, *PMATRIX;

typedef struct GsCOORD2PARAM GsCOORD2PARAM, *PGsCOORD2PARAM;

typedef struct astruct_14 astruct_14, *Pastruct_14;

typedef struct tile_walls tile_walls, *Ptile_walls;

typedef struct struct_13 struct_13, *Pstruct_13;

typedef struct party_hud_character_status_geometry party_hud_character_status_geometry, *Pparty_hud_character_status_geometry;

typedef struct moon_hud_object_data_subsubstruct moon_hud_object_data_subsubstruct, *Pmoon_hud_object_data_subsubstruct;

typedef union encounter_bar_geometry encounter_bar_geometry, *Pencounter_bar_geometry;

typedef struct compass_geometry compass_geometry, *Pcompass_geometry;

typedef enum wall_type {
    NoWall=0,
    Wall=1,
    LockedDoor=2,
    Door=3
} wall_type;

typedef struct SPRT_8 SPRT_8, *PSPRT_8;

typedef struct encounter_bar_geometry_2d encounter_bar_geometry_2d, *Pencounter_bar_geometry_2d;

typedef struct encounter_bar_geometry_3d encounter_bar_geometry_3d, *Pencounter_bar_geometry_3d;

struct LINE_F2 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
};

struct POLY_G3 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 r1;
    u8 g1;
    u8 b1;
    u8 pad1;
    s16 x1;
    s16 y1;
    u8 r2;
    u8 g2;
    u8 b2;
    u8 pad2;
    s16 x2;
    s16 y2;
};

struct poly_g3_object_data {
    struct POLY_G3 poly[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s8 r0;
    u8 field9_0x47;
    s8 g0;
    u8 field11_0x49;
    s8 b0;
    u8 field13_0x4b;
    s8 r1;
    u8 field15_0x4d;
    s8 g1;
    u8 field17_0x4f;
    s8 b1;
    u8 field19_0x51;
    s8 r2;
    u8 field21_0x53;
    s8 g2;
    u8 field23_0x55;
    s8 b2;
    u8 field25_0x57;
    s16 ot_index;
    u8 field27_0x5a;
    u8 field28_0x5b;
    u32 flags;
};

struct SVECTOR {
    s16 vx;
    s16 vy;
    s16 vz;
    s16 pad;
};

struct SPRT_16 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x;
    s16 y;
    u8 u;
    u8 v;
    u16 clut;
};

struct DR_MODE {
    u32 tag;
    u32 code[2];
};

struct POLY_G4 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 r1;
    u8 g1;
    u8 b1;
    u8 pad1;
    s16 x1;
    s16 y1;
    u8 r2;
    u8 g2;
    u8 b2;
    u8 pad2;
    s16 x2;
    s16 y2;
    u8 r3;
    u8 g3;
    u8 b3;
    u8 pad3;
    s16 x3;
    s16 y3;
};

struct POLY_FT4 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 u0;
    u8 v0;
    u16 clut;
    s16 x1;
    s16 y1;
    u8 u1;
    u8 v1;
    u16 tpage;
    s16 x2;
    s16 y2;
    u8 u2;
    u8 v2;
    u16 pad1;
    s16 x3;
    s16 y3;
    u8 u3;
    u8 v3;
    u16 pad2;
};

struct overworld_graphics {
    struct SPRT_16 tiles0[300];
    struct DR_MODE tiles0_dr_modes[300];
    struct SPRT_16 tiles1[300];
    struct DR_MODE tiles1_dr_modes[300];
    struct POLY_FT4 field4_0x41a0;
    u8 field5_0x41c8;
    u8 field6_0x41c9;
    u8 field7_0x41ca;
    u8 field8_0x41cb;
    u8 field9_0x41cc;
    u8 field10_0x41cd;
    u8 field11_0x41ce;
    u8 field12_0x41cf;
    u8 field13_0x41d0;
    u8 field14_0x41d1;
    u8 field15_0x41d2;
    u8 field16_0x41d3;
    u8 field17_0x41d4;
    u8 field18_0x41d5;
    u8 field19_0x41d6;
    u8 field20_0x41d7;
    u8 field21_0x41d8;
    u8 field22_0x41d9;
    u8 field23_0x41da;
    u8 field24_0x41db;
    u8 field25_0x41dc;
    u8 field26_0x41dd;
    u8 field27_0x41de;
    u8 field28_0x41df;
    u8 field29_0x41e0;
    u8 field30_0x41e1;
    u8 field31_0x41e2;
    u8 field32_0x41e3;
    u8 field33_0x41e4;
    u8 field34_0x41e5;
    u8 field35_0x41e6;
    u8 field36_0x41e7;
    u8 field37_0x41e8;
    u8 field38_0x41e9;
    u8 field39_0x41ea;
    u8 field40_0x41eb;
    u8 field41_0x41ec;
    u8 field42_0x41ed;
    u8 field43_0x41ee;
    u8 field44_0x41ef;
    struct DR_MODE field45_0x41f0;
    struct POLY_G4 upper_overlay;
    struct POLY_G4 lower_overlay;
    struct DR_MODE overlay_dr_mode;
};

struct GsDOBJ2 {
    u32 attribute;
    GsCOORDINATE2 * coord2;
    u32 * tmd;
    u32 id;
};

struct SPRT_8 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 u0;
    u8 v0;
    u16 clut;
};

struct moon_hud_object_data_subsubstruct {
    struct SPRT_8 field0_0x0;
    struct SPRT_8 field1_0x10;
    struct POLY_FT4 field2_0x20;
};

struct money_hud_object_data_substruct {
    struct moon_hud_object_data_subsubstruct field0_0x0[2];
};

struct money_hud_object_data {
    struct money_hud_object_data_substruct field0_0x0[2];
    s16 x;
    s16 y;
    s16 motion;
    s8 motion_counter;
    s8 buffer; /* Created by retype action */
};

struct overworld_character_geometry {
    struct POLY_FT4 poly;
    struct DR_MODE dr_mode;
};

struct POLY_GT4 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 u0;
    u8 v0;
    u16 clut;
    u8 r1;
    u8 g1;
    u8 b1;
    u8 p1;
    s16 x1;
    s16 y1;
    u8 u1;
    u8 v1;
    u16 tpage;
    u8 r2;
    u8 g2;
    u8 b2;
    u8 p2;
    s16 x2;
    s16 y2;
    u8 u2;
    u8 v2;
    u16 pad2;
    u8 r3;
    u8 g3;
    u8 b3;
    u8 p3;
    s16 x3;
    s16 y3;
    u8 u3;
    u8 v3;
    u16 pad3;
};

struct poly_gt4_object_data {
    struct POLY_GT4 p[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s16 x3;
    s16 y3;
    u8 u0;
    u8 v0;
    u8 u1;
    u8 v1;
    u8 u2;
    u8 v2;
    u8 u3;
    u8 v3;
    u8 r0;
    u8 field19_0x83;
    u8 g0;
    u8 field21_0x85;
    u8 b0;
    u8 field23_0x87;
    u8 r1;
    u8 field25_0x89;
    u8 g1;
    u8 field27_0x8b;
    u8 b1;
    u8 field29_0x8d;
    u8 r2;
    u8 field31_0x8f;
    u8 g2;
    u8 field33_0x91;
    u8 b2;
    u8 field35_0x93;
    u8 r3;
    u8 field37_0x95;
    u8 g3;
    u8 field39_0x97;
    u8 b3;
    u8 field41_0x99;
    u8 field42_0x9a;
    u8 field43_0x9b;
    u8 field44_0x9c;
    u8 field45_0x9d;
    s16 ot_index;
    u32 flags;
};

struct POLY_GT3 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 u0;
    u8 v0;
    u16 clut;
    u8 r1;
    u8 g1;
    u8 b1;
    u8 p1;
    s16 x1;
    s16 y1;
    u8 u1;
    u8 v1;
    u16 tpage;
    u8 r2;
    u8 g2;
    u8 b2;
    u8 p2;
    s16 x2;
    s16 y2;
    u8 u2;
    u8 v2;
    u16 pad2;
};

struct poly_gt3_object_data {
    struct POLY_GT3 poly[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s8 u0;
    s8 v0;
    s8 u1;
    s8 v1;
    s8 u2;
    s8 v2;
    s8 r0;
    u8 field15_0x65;
    s8 g0;
    u8 field17_0x67;
    s8 b0;
    u8 field19_0x69;
    s8 r1;
    u8 field21_0x6b;
    s8 g1;
    u8 field23_0x6d;
    s8 b1;
    u8 field25_0x6f;
    s8 r2;
    u8 field27_0x71;
    s8 g2;
    u8 field29_0x73;
    s8 b2;
    u8 field31_0x75;
    u8 field32_0x76;
    u8 field33_0x77;
    u8 field34_0x78;
    u8 field35_0x79;
    s16 ot_index;
    u32 flags;
};

struct poly_g4_object_data {
    struct POLY_G4 poly[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s16 x3;
    s16 y3;
    u8 r0;
    u8 field11_0x5b;
    u8 g0;
    u8 field13_0x5d;
    u8 b0;
    u8 field15_0x5f;
    u8 r1;
    u8 field17_0x61;
    u8 g1;
    u8 field19_0x63;
    u8 b1;
    u8 field21_0x65;
    u8 r2;
    u8 field23_0x67;
    u8 g2;
    u8 field25_0x69;
    u8 b2;
    u8 field27_0x6b;
    u8 r3;
    u8 field29_0x6d;
    u8 g3;
    u8 field31_0x6f;
    u8 b3;
    u8 field33_0x71;
    s16 ot_index;
    u32 flags;
};

struct POLY_F3 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
};

struct POLY_F4 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s16 x3;
    s16 y3;
};

struct tile_walls {
    enum wall_type west_wall:2;
    enum wall_type south_wall:2;
    enum wall_type east_wall:2;
    enum wall_type north_wall:2;
};

struct pos {
    s16 x;
    s16 y;
};

struct CVECTOR {
    u8 r;
    u8 g;
    u8 b;
    u8 cd;
};

struct struct_13 {
    struct pos pos;
    s32 field1_0x4;
};

struct SPRT {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 u0;
    u8 v0;
    u16 clut;
    s16 w;
    s16 h;
};

struct party_hud_character_status_geometry {
    struct DR_MODE field0_0x0;
    struct SPRT_16 status_icon;
    struct DR_MODE field2_0x1c;
    struct SPRT field3_0x28[2];
    struct SPRT hp_mp_numbers[2][3];
    struct POLY_F4 hp_bar_background;
    struct POLY_G4 hp_bar_foreground;
    struct POLY_F4 field7_0x104;
    struct POLY_F4 mp_bar_background;
    struct POLY_G4 mp_bar_foreground;
    struct POLY_F4 field10_0x158;
    struct DR_MODE dr_mode;
    struct POLY_F4 background;
};

struct party_hud_geometry_data {
    struct pos field0_0x0;
    bool character_action;
    u8 field2_0x5;
    u8 field3_0x6;
    bool field4_0x7;
    struct CVECTOR field5_0x8;
    struct struct_13 field6_0xc;
    struct party_hud_character_status_geometry status_geom[2];
    struct POLY_G4 field8_0x33c[2][5];
};

struct party_hud_geometry_primitives {
    struct POLY_F4 field0_0x0;
    u8 field1_0x18;
    u8 field2_0x19;
    u8 field3_0x1a;
    u8 field4_0x1b;
    u8 field5_0x1c;
    u8 field6_0x1d;
    u8 field7_0x1e;
    u8 field8_0x1f;
    struct POLY_F4 field9_0x20;
    struct POLY_F4 field10_0x38;
    struct POLY_F4 field11_0x50;
};

struct party_hud_object_data {
    struct party_hud_geometry_primitives field0_0x0[2];
    struct party_hud_geometry_data field1_0xd0[6];
    s8 field2_0x1ca8;
    s8 status;
    s8 organization;
    u81 buffer; /* Created by retype action */
};

struct POLY_FT3 {
    u32 tag;
    u8 r0;
    u8 g0;
    u8 b0;
    u8 code;
    s16 x0;
    s16 y0;
    u8 u0;
    u8 v0;
    u16 clut;
    s16 x1;
    s16 y1;
    u8 u1;
    u8 v1;
    u16 tpage;
    s16 x2;
    s16 y2;
    u8 u2;
    u8 v2;
    u16 pad1;
};

struct overworld_character_object_data {
    struct overworld_character_geometry field0_0x0;
    struct overworld_character_geometry field1_0x34;
    s16 x;
    s16 y;
    s8 angle;
    s8 rotation_dir;
    s8 buffer;
    s8 field7_0x6f;
    s8 changing_size; /* 0 = shrinking, 1 = minimum size reached, 2 = not changing, 3 = growing */
    s8 size;
    u8 field10_0x72;
    u8 field11_0x73;
    struct CVECTOR color;
    s8 color_offset;
    u8 field14_0x79;
    u8 field15_0x7a;
    u8 field16_0x7b;
};

struct sprite_object {
    struct SPRT sprites[2];
    struct DR_MODE dr_modes[2];
    s16 buffer;
    s16 t_page;
    u16 clut;
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    s8 u;
    s8 v;
    s16 ot_index;
    u8 field12_0x52;
    u8 field13_0x53;
    u8 field14_0x54;
    u8 field15_0x55;
    u8 field16_0x56;
    u8 field17_0x57;
    u8 field18_0x58;
    u8 field19_0x59;
    u8 field20_0x5a;
    u8 field21_0x5b;
    s16 alt_frame_x_offset;
    s16 alt_frame_y_offset;
    s16 field24_0x60;
    s16 frame;
    u8 field26_0x64;
    u8 field27_0x65;
    u8 field28_0x66;
    u8 field29_0x67;
    u8 field30_0x68;
    u8 field31_0x69;
    u8 field32_0x6a;
    u8 field33_0x6b;
    u8 field34_0x6c;
    u8 field35_0x6d;
    u8 field36_0x6e;
    u8 field37_0x6f;
    u32 flags;
};

struct moon_hud_object_data_substruct {
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
    struct SPRT_16 field43_0x100;
    struct SPRT_16 field44_0x110;
};

struct encounter_bar_geometry_3d {
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
    struct DR_MODE field20_0x14;
    struct POLY_G4 field21_0x20;
};

struct compass_geometry {
    struct SPRT field0_0x0;
    struct SPRT field1_0x14;
    struct SPRT field2_0x28;
    struct SPRT field3_0x3c;
    u8 field4_0x50;
    u8 field5_0x51;
    u8 field6_0x52;
    u8 field7_0x53;
    struct SPRT field8_0x54;
    struct DR_MODE field9_0x68;
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
};

union navigation_hud_geometry {
    struct compass_geometry field0;
    struct money_hud_object_data_substruct field1;
};

struct navigation_hud_object_data {
    union navigation_hud_geometry field0_0x0;
    union navigation_hud_geometry field1_0x90;
    s16 x;
    s16 y;
    s16 field4_0x124;
    s8 field5_0x126;
    s8 field6_0x127;
    s8 field7_0x128;
    s8 field8_0x129;
    s8 buffer;
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
};

struct color_anim { /* Not 100% but this seems related to animating colors */
    s8 loops;
    s8 max_loops;
    s8 iteration;
    s8 max_iterations;
    s8 dir;
    u8 field5_0x5;
    u8 field6_0x6;
    u8 field7_0x7;
    struct CVECTOR forward_cvector;
    struct CVECTOR backward_cvector;
    int b;
    int g;
    int r;
};

struct encounter_bar_geometry_2d {
    struct DR_MODE field0_0x0;
    struct POLY_G4 field1_0xc;
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
};

union encounter_bar_geometry {
    struct encounter_bar_geometry_2d enc_bar_2d;
    struct encounter_bar_geometry_3d enc_bar_3d;
};

struct encounter_bar_object_data_substruct {
    struct SPRT sprite;
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
};

struct dungeon_data_substruct {
    struct GsDOBJ2 obj;
    u8 field1_0x10;
    u8 field2_0x11;
    s16 field3_0x12;
    s16 field4_0x14;
    u8 field5_0x16;
    u8 field6_0x17;
};

struct object {
    pointer proc_func;
    pointer kill_func;
    pointer hidden_behavior;
    pointer origin;
    struct object * prev;
    struct object * next;
    u32 order_priority;
    u32 field7_0x1c;
    u32 hidden;
    u32 field9_0x24;
    u32 active;
    s16 field11_0x2c;
    s16 field12_0x2e;
    s8 field13_0x30;
    s8 field14_0x31;
    s8 field15_0x32;
    s8 field16_0x33;
    union object_data * data;
    u32 type;
    s16 initialized;
    u8 field20_0x3e;
    u8 field21_0x3f;
};

struct moon_hud_object_data {
    struct moon_hud_object_data_substruct field0_0x0;
    struct moon_hud_object_data_substruct field1_0x120;
    s16 field2_0x240;
    s16 field3_0x242;
    s16 field4_0x244;
    s8 field5_0x246;
    s8 field6_0x247;
    s8 field7_0x248;
    s8 buffer; /* Created by retype action */
    u8 field9_0x24a;
    u8 field10_0x24b;
};

struct dungeon_tile {
    struct tile_walls walls;
    enum tile_contents contents;
};

struct list_object_data {
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
    s32 field19_0x18;
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
};

struct MATRIX {
    s16 m[3][3];
    s32 t[3];
};

struct _GsCOORDINATE2 {
    u32 flg;
    struct MATRIX coord;
    struct MATRIX workm;
    struct GsCOORD2PARAM * param;
    struct _GsCOORDINATE2 * super;
    struct _GsCOORDINATE2 * sub;
};

struct VECTOR {
    s32 vx;
    s32 vy;
    s32 vz;
    s32 pad;
};

struct unknown_dobj2_struct {
    s16 field0_0x0;
    s16 field1_0x2;
    s16 field2_0x4;
    u8 field3_0x6;
    u8 field4_0x7;
    struct GsDOBJ2 field5_0x8;
};

struct GsVIEW2 {
    struct MATRIX view;
    GsCOORDINATE2 * super;
};

struct astruct_14 {
    s32 field0_0x0;
    s32 field1_0x4;
    u32 x;
    u32 y;
};

struct dungeon_init_data {
    struct astruct_14 field0_0x0;
    u32 initial_dir; /* Created by retype action */
    s32 appearance;
    union object_data * door_text_id;
    s32 field4_0x1c;
    s32 field5_0x20;
};

struct dungeon_data {
    pointer origin;
    union object_data * next;
    u32 status; /* Bit 4 = dark, Bit 8 = initialized, Bit 10 = in battle */
    struct GsVIEW2 view;
    GsCOORDINATE2 coordinates;
    struct SVECTOR rotation;
    s16 field6_0x88;
    s16 field7_0x8a;
    s16 field8_0x8c;
    u8 field9_0x8e;
    u8 field10_0x8f;
    GsCOORDINATE2 field11_0x90;
    GsCOORDINATE2 super;
    struct unknown_dobj2_struct dobj2_array[220];
    u8 field14_0x15d0;
    u8 field15_0x15d1;
    u8 field16_0x15d2;
    u8 field17_0x15d3;
    u8 field18_0x15d4;
    u8 field19_0x15d5;
    u8 field20_0x15d6;
    u8 field21_0x15d7;
    GsCOORDINATE2 coord_array[220];
    struct dungeon_data_substruct field23_0x5a98[2];
    struct GsDOBJ2 field24_0x5ac8;
    u8 field25_0x5ad8;
    u8 field26_0x5ad9;
    u8 field27_0x5ada;
    u8 field28_0x5adb;
    u8 field29_0x5adc;
    u8 field30_0x5add;
    u8 field31_0x5ade;
    u8 field32_0x5adf;
    u8 field33_0x5ae0;
    u8 field34_0x5ae1;
    u8 field35_0x5ae2;
    u8 field36_0x5ae3;
    u8 field37_0x5ae4;
    u8 field38_0x5ae5;
    u8 field39_0x5ae6;
    u8 field40_0x5ae7;
    u8 field41_0x5ae8;
    u8 field42_0x5ae9;
    u8 field43_0x5aea;
    u8 field44_0x5aeb;
    u8 field45_0x5aec;
    u8 field46_0x5aed;
    u8 field47_0x5aee;
    u8 field48_0x5aef;
    u8 field49_0x5af0;
    u8 field50_0x5af1;
    u8 field51_0x5af2;
    u8 field52_0x5af3;
    u8 field53_0x5af4;
    u8 field54_0x5af5;
    u8 field55_0x5af6;
    u8 field56_0x5af7;
    u8 field57_0x5af8;
    u8 field58_0x5af9;
    u8 field59_0x5afa;
    u8 field60_0x5afb;
    u8 field61_0x5afc;
    u8 field62_0x5afd;
    u8 field63_0x5afe;
    u8 field64_0x5aff;
    u8 field65_0x5b00;
    u8 field66_0x5b01;
    u8 field67_0x5b02;
    u8 field68_0x5b03;
    u8 field69_0x5b04;
    u8 field70_0x5b05;
    u8 field71_0x5b06;
    u8 field72_0x5b07;
    u8 field73_0x5b08;
    u8 field74_0x5b09;
    u8 field75_0x5b0a;
    u8 field76_0x5b0b;
    u8 field77_0x5b0c;
    u8 field78_0x5b0d;
    u8 field79_0x5b0e;
    u8 field80_0x5b0f;
    u8 field81_0x5b10;
    u8 field82_0x5b11;
    u8 field83_0x5b12;
    u8 field84_0x5b13;
    u8 field85_0x5b14;
    u8 field86_0x5b15;
    u8 field87_0x5b16;
    u8 field88_0x5b17;
    u8 field89_0x5b18;
    u8 field90_0x5b19;
    u8 field91_0x5b1a;
    u8 field92_0x5b1b;
    u8 field93_0x5b1c;
    u8 field94_0x5b1d;
    u8 field95_0x5b1e;
    u8 field96_0x5b1f;
    u8 field97_0x5b20;
    u8 field98_0x5b21;
    u8 field99_0x5b22;
    u8 field100_0x5b23;
    u8 field101_0x5b24;
    u8 field102_0x5b25;
    u8 field103_0x5b26;
    u8 field104_0x5b27;
    u8 field105_0x5b28;
    u8 field106_0x5b29;
    u8 field107_0x5b2a;
    u8 field108_0x5b2b;
    u8 field109_0x5b2c;
    u8 field110_0x5b2d;
    u8 field111_0x5b2e;
    u8 field112_0x5b2f;
    u8 field113_0x5b30;
    u8 field114_0x5b31;
    u8 field115_0x5b32;
    u8 field116_0x5b33;
    u8 field117_0x5b34;
    u8 field118_0x5b35;
    u8 field119_0x5b36;
    u8 field120_0x5b37;
    u8 field121_0x5b38;
    u8 field122_0x5b39;
    u8 field123_0x5b3a;
    u8 field124_0x5b3b;
    u8 field125_0x5b3c;
    u8 field126_0x5b3d;
    u8 field127_0x5b3e;
    u8 field128_0x5b3f;
    u8 field129_0x5b40;
    u8 field130_0x5b41;
    u8 field131_0x5b42;
    u8 field132_0x5b43;
    u8 field133_0x5b44;
    u8 field134_0x5b45;
    u8 field135_0x5b46;
    u8 field136_0x5b47;
    u8 field137_0x5b48;
    u8 field138_0x5b49;
    u8 field139_0x5b4a;
    u8 field140_0x5b4b;
    u8 field141_0x5b4c;
    u8 field142_0x5b4d;
    u8 field143_0x5b4e;
    u8 field144_0x5b4f;
    u8 field145_0x5b50;
    u8 field146_0x5b51;
    u8 field147_0x5b52;
    u8 field148_0x5b53;
    u8 field149_0x5b54;
    u8 field150_0x5b55;
    u8 field151_0x5b56;
    u8 field152_0x5b57;
    u8 field153_0x5b58;
    u8 field154_0x5b59;
    u8 field155_0x5b5a;
    u8 field156_0x5b5b;
    u8 field157_0x5b5c;
    u8 field158_0x5b5d;
    u8 field159_0x5b5e;
    u8 field160_0x5b5f;
    u8 field161_0x5b60;
    u8 field162_0x5b61;
    u8 field163_0x5b62;
    u8 field164_0x5b63;
    u8 field165_0x5b64;
    u8 field166_0x5b65;
    u8 field167_0x5b66;
    u8 field168_0x5b67;
    struct VECTOR light_scale_vect;
    s16 real_x_pos;
    s16 vertical_pos;
    s16 real_y_pos;
    s16 true_direction;
    s16 grid_x_pos; /* These mirrors only update once the movement animation finishes */
    s16 vertical_pos_mirror;
    s16 grid_y_pos;
    s16 grid_direction;
    s16 last_x_pos;
    s16 last_vertical_pos;
    s16 last_y_pos;
    s16 last_direction;
    s16 last_x_pos_mirror;
    s16 last_vertical_pos_mirror;
    s16 last_y_pos_mirror;
    s16 last_direction_mirror;
    u8 field186_0x5b98;
    u8 field187_0x5b99;
    u8 field188_0x5b9a;
    u8 field189_0x5b9b;
    u8 field190_0x5b9c;
    u8 field191_0x5b9d;
    u8 field192_0x5b9e;
    u8 field193_0x5b9f;
    s16 last_action; /* 0x64 if move, 0x80 if turn, 0x0f if bump. */
    s16 field195_0x5ba2;
    u8 field196_0x5ba4;
    u8 field197_0x5ba5;
    s16 field198_0x5ba6;
    s16 field199_0x5ba8;
    u8 field200_0x5baa;
    u8 field201_0x5bab;
    s16 running;
    s16 field203_0x5bae;
    s16 field204_0x5bb0;
    s16 control_locked; /* Created by retype action */
    u8 field206_0x5bb4;
    u8 field207_0x5bb5;
    u8 field208_0x5bb6;
    u8 field209_0x5bb7;
    s32 field210_0x5bb8;
    s32 step_counter; /* Created by retype action */
    u8 field212_0x5bc0;
    u8 field213_0x5bc1;
    s16 field214_0x5bc2;
    u8 field215_0x5bc4;
    u8 field216_0x5bc5;
    u8 field217_0x5bc6;
    u8 field218_0x5bc7;
    s32 return_function;
    s32 field220_0x5bcc;
    struct dungeon_init_data tile_data;
    s32 field222_0x5bf4;
    pointer field223_0x5bf8;
    pointer field224_0x5bfc;
    struct object * field225_0x5c00;
    s32 field226_0x5c04;
    struct object * field227_0x5c08;
    struct object * field228_0x5c0c;
    u8 field229_0x5c10;
    u8 field230_0x5c11;
    u8 field231_0x5c12;
    u8 field232_0x5c13;
    u8 field233_0x5c14;
    u8 field234_0x5c15;
    s16 last_move_dir;
    struct object * field236_0x5c18;
    u8 field237_0x5c1c;
    u8 field238_0x5c1d;
    u8 field239_0x5c1e;
    u8 field240_0x5c1f;
    u8 field241_0x5c20;
    u8 field242_0x5c21;
    u8 field243_0x5c22;
    u8 field244_0x5c23;
    u8 field245_0x5c24;
    u8 field246_0x5c25;
    u8 field247_0x5c26;
    u8 field248_0x5c27;
    u8 field249_0x5c28;
    u8 field250_0x5c29;
    u8 field251_0x5c2a;
    u8 field252_0x5c2b;
    u8 field253_0x5c2c;
    u8 field254_0x5c2d;
    u8 field255_0x5c2e;
    u8 field256_0x5c2f;
    u8 field257_0x5c30;
    u8 field258_0x5c31;
    u8 field259_0x5c32;
    u8 field260_0x5c33;
    u8 field261_0x5c34;
    u8 field262_0x5c35;
    u8 field263_0x5c36;
    u8 field264_0x5c37;
    u8 field265_0x5c38;
    u8 field266_0x5c39;
    u8 field267_0x5c3a;
    u8 field268_0x5c3b;
    u8 field269_0x5c3c;
    u8 field270_0x5c3d;
    u8 field271_0x5c3e;
    u8 field272_0x5c3f;
    u8 field273_0x5c40;
    u8 field274_0x5c41;
    u8 field275_0x5c42;
    u8 field276_0x5c43;
    u8 field277_0x5c44;
    u8 field278_0x5c45;
    u8 field279_0x5c46;
    u8 field280_0x5c47;
    u8 field281_0x5c48;
    u8 field282_0x5c49;
    u8 field283_0x5c4a;
    u8 field284_0x5c4b;
    u8 field285_0x5c4c;
    u8 field286_0x5c4d;
    u8 field287_0x5c4e;
    u8 field288_0x5c4f;
    u8 field289_0x5c50;
    u8 field290_0x5c51;
    u8 field291_0x5c52;
    u8 field292_0x5c53;
    u8 field293_0x5c54;
    u8 field294_0x5c55;
    u8 field295_0x5c56;
    u8 field296_0x5c57;
    s32 field297_0x5c58;
    s32 field298_0x5c5c;
    s8 * field299_0x5c60;
    u8 field300_0x5c64;
    u8 field301_0x5c65;
    u8 field302_0x5c66;
    u8 field303_0x5c67;
    u8 field304_0x5c68;
    u8 field305_0x5c69;
    u8 field306_0x5c6a;
    u8 field307_0x5c6b;
    u8 field308_0x5c6c;
    u8 field309_0x5c6d;
    u8 field310_0x5c6e;
    u8 field311_0x5c6f;
    u8 field312_0x5c70;
    u8 field313_0x5c71;
    u8 field314_0x5c72;
    u8 field315_0x5c73;
    u8 field316_0x5c74;
    u8 field317_0x5c75;
    u8 field318_0x5c76;
    u8 field319_0x5c77;
    u8 field320_0x5c78;
    u8 field321_0x5c79;
    u8 field322_0x5c7a;
    u8 field323_0x5c7b;
    u8 field324_0x5c7c;
    u8 field325_0x5c7d;
    u8 field326_0x5c7e;
    u8 field327_0x5c7f;
    u8 field328_0x5c80;
    u8 field329_0x5c81;
    u8 field330_0x5c82;
    u8 field331_0x5c83;
    u8 field332_0x5c84;
    u8 field333_0x5c85;
    u8 field334_0x5c86;
    u8 field335_0x5c87;
    u8 field336_0x5c88;
    u8 field337_0x5c89;
    u8 field338_0x5c8a;
    u8 field339_0x5c8b;
    u8 field340_0x5c8c;
    u8 field341_0x5c8d;
    u8 field342_0x5c8e;
    u8 field343_0x5c8f;
    u8 field344_0x5c90;
    u8 field345_0x5c91;
    u8 field346_0x5c92;
    u8 field347_0x5c93;
    u8 field348_0x5c94;
    u8 field349_0x5c95;
    u8 field350_0x5c96;
    u8 field351_0x5c97;
    u8 field352_0x5c98;
    u8 field353_0x5c99;
    u8 field354_0x5c9a;
    u8 field355_0x5c9b;
    u8 field356_0x5c9c;
    u8 field357_0x5c9d;
    u8 field358_0x5c9e;
    u8 field359_0x5c9f;
    u8 field360_0x5ca0;
    u8 field361_0x5ca1;
    u8 field362_0x5ca2;
    u8 field363_0x5ca3;
    u8 field364_0x5ca4;
    u8 field365_0x5ca5;
    u8 field366_0x5ca6;
    u8 field367_0x5ca7;
    u8 field368_0x5ca8;
    u8 field369_0x5ca9;
    u8 field370_0x5caa;
    u8 field371_0x5cab;
    u8 field372_0x5cac;
    u8 field373_0x5cad;
    u8 field374_0x5cae;
    u8 field375_0x5caf;
    u8 field376_0x5cb0;
    u8 field377_0x5cb1;
    u8 field378_0x5cb2;
    u8 field379_0x5cb3;
    u8 field380_0x5cb4;
    u8 field381_0x5cb5;
    u8 field382_0x5cb6;
    u8 field383_0x5cb7;
    u8 field384_0x5cb8;
    u8 field385_0x5cb9;
    u8 field386_0x5cba;
    u8 field387_0x5cbb;
    u8 field388_0x5cbc;
    u8 field389_0x5cbd;
    u8 field390_0x5cbe;
    u8 field391_0x5cbf;
    u8 field392_0x5cc0;
    u8 field393_0x5cc1;
    u8 field394_0x5cc2;
    u8 field395_0x5cc3;
    u8 field396_0x5cc4;
    u8 field397_0x5cc5;
    u8 field398_0x5cc6;
    u8 field399_0x5cc7;
    u8 field400_0x5cc8;
    u8 field401_0x5cc9;
    u8 field402_0x5cca;
    u8 field403_0x5ccb;
    u8 field404_0x5ccc;
    u8 field405_0x5ccd;
    u8 field406_0x5cce;
    u8 field407_0x5ccf;
    u8 field408_0x5cd0;
    u8 field409_0x5cd1;
    u8 field410_0x5cd2;
    u8 field411_0x5cd3;
    u8 field412_0x5cd4;
    u8 field413_0x5cd5;
    u8 field414_0x5cd6;
    u8 field415_0x5cd7;
    u8 field416_0x5cd8;
    u8 field417_0x5cd9;
    u8 field418_0x5cda;
    u8 field419_0x5cdb;
    u8 field420_0x5cdc;
    u8 field421_0x5cdd;
    u8 field422_0x5cde;
    u8 field423_0x5cdf;
    u8 field424_0x5ce0;
    u8 field425_0x5ce1;
    u8 field426_0x5ce2;
    u8 field427_0x5ce3;
    u8 field428_0x5ce4;
    u8 field429_0x5ce5;
    u8 field430_0x5ce6;
    u8 field431_0x5ce7;
    u8 field432_0x5ce8;
    u8 field433_0x5ce9;
    u8 field434_0x5cea;
    u8 field435_0x5ceb;
    u8 field436_0x5cec;
    u8 field437_0x5ced;
    u8 field438_0x5cee;
    u8 field439_0x5cef;
    u8 field440_0x5cf0;
    u8 field441_0x5cf1;
    u8 field442_0x5cf2;
    u8 field443_0x5cf3;
    u8 field444_0x5cf4;
    u8 field445_0x5cf5;
    u8 field446_0x5cf6;
    u8 field447_0x5cf7;
    u8 field448_0x5cf8;
    u8 field449_0x5cf9;
    u8 field450_0x5cfa;
    u8 field451_0x5cfb;
    u8 field452_0x5cfc;
    u8 field453_0x5cfd;
    u8 field454_0x5cfe;
    u8 field455_0x5cff;
    u8 field456_0x5d00;
    u8 field457_0x5d01;
    u8 field458_0x5d02;
    u8 field459_0x5d03;
    u8 field460_0x5d04;
    u8 field461_0x5d05;
    u8 field462_0x5d06;
    u8 field463_0x5d07;
    u8 field464_0x5d08;
    u8 field465_0x5d09;
    u8 field466_0x5d0a;
    u8 field467_0x5d0b;
    u8 field468_0x5d0c;
    u8 field469_0x5d0d;
    u8 field470_0x5d0e;
    u8 field471_0x5d0f;
    u8 field472_0x5d10;
    u8 field473_0x5d11;
    u8 field474_0x5d12;
    u8 field475_0x5d13;
    u8 field476_0x5d14;
    u8 field477_0x5d15;
    u8 field478_0x5d16;
    u8 field479_0x5d17;
    u8 field480_0x5d18;
    u8 field481_0x5d19;
    u8 field482_0x5d1a;
    u8 field483_0x5d1b;
    u8 field484_0x5d1c;
    u8 field485_0x5d1d;
    u8 field486_0x5d1e;
    u8 field487_0x5d1f;
    u8 field488_0x5d20;
    u8 field489_0x5d21;
    u8 field490_0x5d22;
    u8 field491_0x5d23;
    u8 field492_0x5d24;
    u8 field493_0x5d25;
    u8 field494_0x5d26;
    u8 field495_0x5d27;
    u8 field496_0x5d28;
    u8 field497_0x5d29;
    u8 field498_0x5d2a;
    u8 field499_0x5d2b;
    u8 field500_0x5d2c;
    u8 field501_0x5d2d;
    u8 field502_0x5d2e;
    u8 field503_0x5d2f;
    u8 field504_0x5d30;
    u8 field505_0x5d31;
    u8 field506_0x5d32;
    u8 field507_0x5d33;
    u8 field508_0x5d34;
    u8 field509_0x5d35;
    u8 field510_0x5d36;
    u8 field511_0x5d37;
    u8 field512_0x5d38;
    u8 field513_0x5d39;
    u8 field514_0x5d3a;
    u8 field515_0x5d3b;
    u8 field516_0x5d3c;
    u8 field517_0x5d3d;
    u8 field518_0x5d3e;
    u8 field519_0x5d3f;
    u8 field520_0x5d40;
    u8 field521_0x5d41;
    u8 field522_0x5d42;
    u8 field523_0x5d43;
    u8 field524_0x5d44;
    u8 field525_0x5d45;
    u8 field526_0x5d46;
    u8 field527_0x5d47;
    u8 field528_0x5d48;
    u8 field529_0x5d49;
    u8 field530_0x5d4a;
    u8 field531_0x5d4b;
    u8 field532_0x5d4c;
    u8 field533_0x5d4d;
    u8 field534_0x5d4e;
    u8 field535_0x5d4f;
    u8 field536_0x5d50;
    u8 field537_0x5d51;
    u8 field538_0x5d52;
    u8 field539_0x5d53;
    u8 field540_0x5d54;
    u8 field541_0x5d55;
    u8 field542_0x5d56;
    u8 field543_0x5d57;
    u8 field544_0x5d58;
    u8 field545_0x5d59;
    u8 field546_0x5d5a;
    u8 field547_0x5d5b;
    u8 field548_0x5d5c;
    u8 field549_0x5d5d;
    u8 field550_0x5d5e;
    u8 field551_0x5d5f;
    u8 field552_0x5d60;
    u8 field553_0x5d61;
    u8 field554_0x5d62;
    u8 field555_0x5d63;
    s32 field556_0x5d64;
    s16 field557_0x5d68;
    u8 field558_0x5d6a;
    s8 buffer;
    s16 flags;
    s16 brightness;
    s16 falling_counter_0;
    s16 falling_counter;
    s8 falling_status; /* Created by retype action */
    u8 field565_0x5d75;
    s16 field566_0x5d76;
    u8 field567_0x5d78;
    u8 field568_0x5d79;
    u8 field569_0x5d7a;
    u8 field570_0x5d7b;
    u8 field571_0x5d7c;
    u8 field572_0x5d7d;
    u8 field573_0x5d7e;
    u8 field574_0x5d7f;
    u32 field575_0x5d80;
    u8 field576_0x5d84;
    u8 field577_0x5d85;
    u8 field578_0x5d86;
    u8 field579_0x5d87;
    u8 field580_0x5d88;
    u8 field581_0x5d89;
    u8 field582_0x5d8a;
    u8 field583_0x5d8b;
    u8 field584_0x5d8c;
    u8 field585_0x5d8d;
    u8 field586_0x5d8e;
    u8 field587_0x5d8f;
    s16 x_translation_offset;
    s16 y_translation_offset;
    s16 dungeon_width;
    u8 field591_0x5d96;
    u8 field592_0x5d97;
    u8 field593_0x5d98;
    u8 field594_0x5d99;
    u8 field595_0x5d9a;
    u8 field596_0x5d9b;
    u8 field597_0x5d9c;
    u8 field598_0x5d9d;
    u8 field599_0x5d9e;
    u8 field600_0x5d9f;
    u8 field601_0x5da0;
    u8 field602_0x5da1;
    u8 field603_0x5da2;
    u8 field604_0x5da3;
    s16 index;
    struct dungeon_tile layout[625];
    s8 culling_data[625];
    u8 field608_0x64f9;
    u8 field609_0x64fa;
    u8 field610_0x64fb;
    s16 current_tile_contents;
    enum tile_contents field612_0x64fe;
    u8 field613_0x64ff;
    pointer lighting_brightness_addr; /* Created by retype action */
    u8 field615_0x6504;
    u8 field616_0x6505;
    u8 field617_0x6506;
    bool dark;
    s16 x_offset;
    enum map map_id;
    s8 field621_0x650c;
    u8 field622_0x650d;
    u8 field623_0x650e;
    u8 field624_0x650f;
    u32 * buffer_0_img;
    u32 * buffer_1_img;
    s32 field627_0x6518;
    u8 field628_0x651c;
    u8 field629_0x651d;
    u8 field630_0x651e;
    u8 field631_0x651f;
};

struct line_f2_object_data {
    struct LINE_F2 l[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 len;
    s16 ot_index;
    u8 field6_0x2a;
    struct CVECTOR color;
    u8 field8_0x2f;
    u32 flags;
};

struct overworld_data {
    pointer origin;
    union object_data * next;
    u32 field2_0x8;
    u32 field3_0xc;
    union object_data * field4_0x10;
    u8 field5_0x14;
    u8 field6_0x15;
    u8 field7_0x16;
    u8 field8_0x17;
    s16 appearance;
    u8 field10_0x1a;
    u8 field11_0x1b;
    u8 field12_0x1c;
    u8 field13_0x1d;
    u8 field14_0x1e;
    u8 field15_0x1f;
    u8 field16_0x20;
    u8 field17_0x21;
    u8 field18_0x22;
    u8 field19_0x23;
    u8 field20_0x24;
    u8 field21_0x25;
    u8 field22_0x26;
    u8 field23_0x27;
    s16 x_scroll;
    s16 y_scroll;
    u32 step_counter;
    s8 mute;
    u8 field28_0x31;
    u8 field29_0x32;
    u8 field30_0x33;
    struct overworld_graphics tile_data[2];
    u8 field32_0x84d4;
    u8 field33_0x84d5;
    u8 field34_0x84d6;
    u8 field35_0x84d7;
    s8 buffer; /* Created by retype action */
    u8 field37_0x84d9;
    u8 field38_0x84da;
    u8 field39_0x84db;
    s16 x_pos;
    s16 y_pos;
    s16 movement_dir;
    s16 x_motion;
    s16 y_motion;
    s16 motion_countdown;
    s16 character_x_offset;
    s16 character_y_offset;
    s8 screen_edge_flags;
    s8 speed_modifier; /* This probably does more but so far all I've seen it do is make you move slower */
    u8 field50_0x84ee;
    u8 field51_0x84ef;
    u8 field52_0x84f0;
    u8 field53_0x84f1;
    u8 field54_0x84f2;
    u8 field55_0x84f3;
    s32 field56_0x84f4;
    u32 random_encounter; /* If bit 0 of the highest byte is on then a random encounter happens */
    s32 field58_0x84fc;
    u8 field59_0x8500;
    u8 field60_0x8501;
    u8 field61_0x8502;
    u8 field62_0x8503;
    u32 field63_0x8504;
    u8 field64_0x8508;
    u8 field65_0x8509;
    u8 field66_0x850a;
    u8 field67_0x850b;
    u8 field68_0x850c;
    u8 field69_0x850d;
    u8 field70_0x850e;
    u8 field71_0x850f;
    u8 field72_0x8510;
    u8 field73_0x8511;
    u8 field74_0x8512;
    u8 field75_0x8513;
    u8 field76_0x8514;
    u8 field77_0x8515;
    u8 field78_0x8516;
    u8 field79_0x8517;
    u8 field80_0x8518;
    u8 field81_0x8519;
    u8 field82_0x851a;
    u8 field83_0x851b;
    u8 field84_0x851c;
    u8 field85_0x851d;
    u8 field86_0x851e;
    u8 field87_0x851f;
    u8 field88_0x8520;
    u8 field89_0x8521;
    u8 field90_0x8522;
    u8 field91_0x8523;
    u8 field92_0x8524;
    u8 field93_0x8525;
    u8 field94_0x8526;
    u8 field95_0x8527;
    u8 field96_0x8528;
    u8 field97_0x8529;
    u8 field98_0x852a;
    u8 field99_0x852b;
    u16 event;
    s8 field101_0x852e;
    u8 field102_0x852f;
    u8 field103_0x8530;
    u8 field104_0x8531;
    u8 field105_0x8532;
    u8 field106_0x8533;
};

struct unknown_620_s8_struct {
    u8 field0_0x0;
    u8 field1_0x1;
    u8 field2_0x2;
    u8 field3_0x3;
    s32 field4_0x4;
    u8 field5_0x8;
    u8 field6_0x9;
    u8 field7_0xa;
    u8 field8_0xb;
    u8 field9_0xc;
    u8 field10_0xd;
    u8 field11_0xe;
    u8 field12_0xf;
    struct POLY_G4 buffer_0_g4;
    struct astruct_13 * field14_0x34;
    u8 field15_0x38;
    u8 field16_0x39;
    u8 field17_0x3a;
    u8 field18_0x3b;
    u8 field19_0x3c;
    u8 field20_0x3d;
    u8 field21_0x3e;
    u8 field22_0x3f;
    u8 field23_0x40;
    u8 field24_0x41;
    u8 field25_0x42;
    u8 field26_0x43;
    u8 field27_0x44;
    u8 field28_0x45;
    u8 field29_0x46;
    u8 field30_0x47;
    u8 field31_0x48;
    u8 field32_0x49;
    u8 field33_0x4a;
    u8 field34_0x4b;
    u8 field35_0x4c;
    u8 field36_0x4d;
    u8 field37_0x4e;
    u8 field38_0x4f;
    u8 field39_0x50;
    u8 field40_0x51;
    u8 field41_0x52;
    u8 field42_0x53;
    u8 field43_0x54;
    u8 field44_0x55;
    u8 field45_0x56;
    u8 field46_0x57;
    u8 field47_0x58;
    u8 field48_0x59;
    u8 field49_0x5a;
    u8 field50_0x5b;
    u8 field51_0x5c;
    u8 field52_0x5d;
    u8 field53_0x5e;
    u8 field54_0x5f;
    u8 field55_0x60;
    u8 field56_0x61;
    u8 field57_0x62;
    u8 field58_0x63;
    u8 field59_0x64;
    u8 field60_0x65;
    u8 field61_0x66;
    u8 field62_0x67;
    u8 field63_0x68;
    u8 field64_0x69;
    u8 field65_0x6a;
    u8 field66_0x6b;
    u8 field67_0x6c;
    u8 field68_0x6d;
    u8 field69_0x6e;
    u8 field70_0x6f;
    u8 field71_0x70;
    u8 field72_0x71;
    u8 field73_0x72;
    u8 field74_0x73;
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
    struct POLY_G4 buffer_1_g4;
    u8 field156_0xe8;
    u8 field157_0xe9;
    u8 field158_0xea;
    u8 field159_0xeb;
    u8 field160_0xec;
    u8 field161_0xed;
    u8 field162_0xee;
    u8 field163_0xef;
    u8 field164_0xf0;
    u8 field165_0xf1;
    u8 field166_0xf2;
    u8 field167_0xf3;
    u8 field168_0xf4;
    u8 field169_0xf5;
    u8 field170_0xf6;
    u8 field171_0xf7;
    u8 field172_0xf8;
    u8 field173_0xf9;
    u8 field174_0xfa;
    u8 field175_0xfb;
    u8 field176_0xfc;
    u8 field177_0xfd;
    u8 field178_0xfe;
    u8 field179_0xff;
    u8 field180_0x100;
    u8 field181_0x101;
    u8 field182_0x102;
    u8 field183_0x103;
    u8 field184_0x104;
    u8 field185_0x105;
    u8 field186_0x106;
    u8 field187_0x107;
    u8 field188_0x108;
    u8 field189_0x109;
    u8 field190_0x10a;
    u8 field191_0x10b;
    u8 field192_0x10c;
    u8 field193_0x10d;
    u8 field194_0x10e;
    u8 field195_0x10f;
    u8 field196_0x110;
    u8 field197_0x111;
    u8 field198_0x112;
    u8 field199_0x113;
    u8 field200_0x114;
    u8 field201_0x115;
    u8 field202_0x116;
    u8 field203_0x117;
    u8 field204_0x118;
    u8 field205_0x119;
    u8 field206_0x11a;
    u8 field207_0x11b;
    u8 field208_0x11c;
    u8 field209_0x11d;
    u8 field210_0x11e;
    u8 field211_0x11f;
    u8 field212_0x120;
    u8 field213_0x121;
    u8 field214_0x122;
    u8 field215_0x123;
    u8 field216_0x124;
    u8 field217_0x125;
    u8 field218_0x126;
    u8 field219_0x127;
    u8 field220_0x128;
    u8 field221_0x129;
    u8 field222_0x12a;
    u8 field223_0x12b;
    u8 field224_0x12c;
    u8 field225_0x12d;
    u8 field226_0x12e;
    u8 field227_0x12f;
    u8 field228_0x130;
    u8 field229_0x131;
    u8 field230_0x132;
    u8 field231_0x133;
    u8 field232_0x134;
    u8 field233_0x135;
    u8 field234_0x136;
    u8 field235_0x137;
    u8 field236_0x138;
    u8 field237_0x139;
    u8 field238_0x13a;
    u8 field239_0x13b;
    u8 field240_0x13c;
    u8 field241_0x13d;
    u8 field242_0x13e;
    u8 field243_0x13f;
    u8 field244_0x140;
    u8 field245_0x141;
    u8 field246_0x142;
    u8 field247_0x143;
    u8 field248_0x144;
    u8 field249_0x145;
    u8 field250_0x146;
    u8 field251_0x147;
    u8 field252_0x148;
    u8 field253_0x149;
    u8 field254_0x14a;
    u8 field255_0x14b;
    u8 field256_0x14c;
    u8 field257_0x14d;
    u8 field258_0x14e;
    u8 field259_0x14f;
    u8 field260_0x150;
    u8 field261_0x151;
    u8 field262_0x152;
    u8 field263_0x153;
    u8 field264_0x154;
    u8 field265_0x155;
    u8 field266_0x156;
    u8 field267_0x157;
    u8 field268_0x158;
    u8 field269_0x159;
    u8 field270_0x15a;
    u8 field271_0x15b;
    u8 field272_0x15c;
    u8 field273_0x15d;
    u8 field274_0x15e;
    u8 field275_0x15f;
    u8 field276_0x160;
    u8 field277_0x161;
    u8 field278_0x162;
    u8 field279_0x163;
    u8 field280_0x164;
    u8 field281_0x165;
    u8 field282_0x166;
    u8 field283_0x167;
    u8 field284_0x168;
    u8 field285_0x169;
    u8 field286_0x16a;
    u8 field287_0x16b;
    u8 field288_0x16c;
    u8 field289_0x16d;
    u8 field290_0x16e;
    u8 field291_0x16f;
    u8 field292_0x170;
    u8 field293_0x171;
    u8 field294_0x172;
    u8 field295_0x173;
    u8 field296_0x174;
    u8 field297_0x175;
    u8 field298_0x176;
    u8 field299_0x177;
    struct POLY_F4 buffer_0_f4;
    u8 field301_0x190;
    u8 field302_0x191;
    u8 field303_0x192;
    u8 field304_0x193;
    u8 field305_0x194;
    u8 field306_0x195;
    u8 field307_0x196;
    u8 field308_0x197;
    u8 field309_0x198;
    u8 field310_0x199;
    u8 field311_0x19a;
    u8 field312_0x19b;
    u8 field313_0x19c;
    u8 field314_0x19d;
    u8 field315_0x19e;
    u8 field316_0x19f;
    u8 field317_0x1a0;
    u8 field318_0x1a1;
    u8 field319_0x1a2;
    u8 field320_0x1a3;
    u8 field321_0x1a4;
    u8 field322_0x1a5;
    u8 field323_0x1a6;
    u8 field324_0x1a7;
    u8 field325_0x1a8;
    u8 field326_0x1a9;
    u8 field327_0x1aa;
    u8 field328_0x1ab;
    u8 field329_0x1ac;
    u8 field330_0x1ad;
    u8 field331_0x1ae;
    u8 field332_0x1af;
    u8 field333_0x1b0;
    u8 field334_0x1b1;
    u8 field335_0x1b2;
    u8 field336_0x1b3;
    u8 field337_0x1b4;
    u8 field338_0x1b5;
    u8 field339_0x1b6;
    u8 field340_0x1b7;
    u8 field341_0x1b8;
    u8 field342_0x1b9;
    u8 field343_0x1ba;
    u8 field344_0x1bb;
    u8 field345_0x1bc;
    u8 field346_0x1bd;
    u8 field347_0x1be;
    u8 field348_0x1bf;
    u8 field349_0x1c0;
    u8 field350_0x1c1;
    u8 field351_0x1c2;
    u8 field352_0x1c3;
    u8 field353_0x1c4;
    u8 field354_0x1c5;
    u8 field355_0x1c6;
    u8 field356_0x1c7;
    u8 field357_0x1c8;
    u8 field358_0x1c9;
    u8 field359_0x1ca;
    u8 field360_0x1cb;
    u8 field361_0x1cc;
    u8 field362_0x1cd;
    u8 field363_0x1ce;
    u8 field364_0x1cf;
    u8 field365_0x1d0;
    u8 field366_0x1d1;
    u8 field367_0x1d2;
    u8 field368_0x1d3;
    u8 field369_0x1d4;
    u8 field370_0x1d5;
    u8 field371_0x1d6;
    u8 field372_0x1d7;
    struct POLY_F4 buffer_1_f4;
    u8 field374_0x1f0;
    u8 field375_0x1f1;
    u8 field376_0x1f2;
    u8 field377_0x1f3;
    u8 field378_0x1f4;
    u8 field379_0x1f5;
    u8 field380_0x1f6;
    u8 field381_0x1f7;
    u8 field382_0x1f8;
    u8 field383_0x1f9;
    u8 field384_0x1fa;
    u8 field385_0x1fb;
    u8 field386_0x1fc;
    u8 field387_0x1fd;
    u8 field388_0x1fe;
    u8 field389_0x1ff;
    u8 field390_0x200;
    u8 field391_0x201;
    u8 field392_0x202;
    u8 field393_0x203;
    u8 field394_0x204;
    u8 field395_0x205;
    u8 field396_0x206;
    u8 field397_0x207;
    u8 field398_0x208;
    u8 field399_0x209;
    u8 field400_0x20a;
    u8 field401_0x20b;
    u8 field402_0x20c;
    u8 field403_0x20d;
    u8 field404_0x20e;
    u8 field405_0x20f;
    u8 field406_0x210;
    u8 field407_0x211;
    u8 field408_0x212;
    u8 field409_0x213;
    u8 field410_0x214;
    u8 field411_0x215;
    u8 field412_0x216;
    u8 field413_0x217;
    u8 field414_0x218;
    u8 field415_0x219;
    u8 field416_0x21a;
    u8 field417_0x21b;
    u8 field418_0x21c;
    u8 field419_0x21d;
    u8 field420_0x21e;
    u8 field421_0x21f;
    u8 field422_0x220;
    u8 field423_0x221;
    u8 field424_0x222;
    u8 field425_0x223;
    u8 field426_0x224;
    u8 field427_0x225;
    u8 field428_0x226;
    u8 field429_0x227;
    u8 field430_0x228;
    u8 field431_0x229;
    u8 field432_0x22a;
    u8 field433_0x22b;
    u8 field434_0x22c;
    u8 field435_0x22d;
    u8 field436_0x22e;
    u8 field437_0x22f;
    u8 field438_0x230;
    u8 field439_0x231;
    u8 field440_0x232;
    u8 field441_0x233;
    u8 field442_0x234;
    u8 field443_0x235;
    u8 field444_0x236;
    u8 field445_0x237;
    u8 field446_0x238;
    u8 field447_0x239;
    u8 field448_0x23a;
    u8 field449_0x23b;
    u8 field450_0x23c;
    u8 field451_0x23d;
    u8 field452_0x23e;
    u8 field453_0x23f;
    u8 field454_0x240;
    u8 field455_0x241;
    u8 field456_0x242;
    u8 field457_0x243;
    u8 field458_0x244;
    u8 field459_0x245;
    u8 field460_0x246;
    u8 field461_0x247;
    u8 field462_0x248;
    u8 field463_0x249;
    u8 field464_0x24a;
    u8 field465_0x24b;
    u8 field466_0x24c;
    u8 field467_0x24d;
    u8 field468_0x24e;
    u8 field469_0x24f;
    u8 field470_0x250;
    u8 field471_0x251;
    u8 field472_0x252;
    u8 field473_0x253;
    u8 field474_0x254;
    u8 field475_0x255;
    u8 field476_0x256;
    u8 field477_0x257;
    u8 field478_0x258;
    u8 field479_0x259;
    u8 field480_0x25a;
    u8 field481_0x25b;
    u8 field482_0x25c;
    u8 field483_0x25d;
    u8 field484_0x25e;
    u8 field485_0x25f;
    u8 field486_0x260;
    u8 field487_0x261;
    u8 field488_0x262;
    u8 field489_0x263;
    u8 field490_0x264;
    u8 field491_0x265;
    u8 field492_0x266;
    u8 field493_0x267;
    u8 field494_0x268;
    u8 field495_0x269;
    u8 field496_0x26a;
    u8 buffer; /* Created by retype action */
};

struct poly_f3_object_data {
    struct POLY_F3 poly[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    u8 r;
    u8 field9_0x37;
    u8 g;
    u8 field11_0x39;
    u8 b;
    u8 field13_0x3b;
    s16 ot_index;
    u8 field15_0x3e;
    u8 field16_0x3f;
    u32 flags;
};

struct poly_f4_object_data {
    struct POLY_F4 poly[2];
    struct DR_MODE dr_modes[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s16 x3;
    s16 y3;
    struct CVECTOR color;
    s16 field12_0x5e;
    s16 t_page;
    s16 ot_index;
    u32 flags;
    u8 field16_0x68;
    u8 field17_0x69;
    u8 field18_0x6a;
    u8 field19_0x6b;
    u8 field20_0x6c;
    u8 field21_0x6d;
    u8 field22_0x6e;
    u8 field23_0x6f;
    u8 field24_0x70;
    u8 field25_0x71;
    u8 field26_0x72;
    u8 field27_0x73;
    u8 field28_0x74;
    u8 field29_0x75;
    u8 field30_0x76;
    u8 field31_0x77;
    u16 parent_flags;
    u8 field33_0x7a;
    u8 field34_0x7b;
    u8 field35_0x7c;
    u8 field36_0x7d;
    u8 field37_0x7e;
    u8 field38_0x7f;
    u8 field39_0x80;
    u8 field40_0x81;
    u8 field41_0x82;
    u8 field42_0x83;
    u8 field43_0x84;
    u8 field44_0x85;
    u8 field45_0x86;
    u8 field46_0x87;
    u8 field47_0x88;
    u8 field48_0x89;
    u8 field49_0x8a;
    u8 field50_0x8b;
    u8 field51_0x8c;
    u8 field52_0x8d;
    u8 field53_0x8e;
    u8 field54_0x8f;
    u8 field55_0x90;
    u8 field56_0x91;
    u8 field57_0x92;
    u8 field58_0x93;
    u8 field59_0x94;
    u8 field60_0x95;
    u8 field61_0x96;
    u8 field62_0x97;
    u8 field63_0x98;
    u8 field64_0x99;
    u8 field65_0x9a;
    u8 field66_0x9b;
    u8 field67_0x9c;
    u8 field68_0x9d;
    u8 field69_0x9e;
    u8 field70_0x9f;
    s16 parent_buffer;
    u8 field72_0xa2;
    u8 field73_0xa3;
    u8 field74_0xa4;
    u8 field75_0xa5;
    u8 field76_0xa6;
    u8 field77_0xa7;
    u8 field78_0xa8;
    u8 field79_0xa9;
    u8 field80_0xaa;
    u8 field81_0xab;
    u8 field82_0xac;
    u8 field83_0xad;
    u8 field84_0xae;
    u8 field85_0xaf;
    u8 field86_0xb0;
    u8 field87_0xb1;
    u8 field88_0xb2;
    u8 field89_0xb3;
    u8 field90_0xb4;
    u8 field91_0xb5;
    u8 field92_0xb6;
    u8 field93_0xb7;
    u8 field94_0xb8;
    u8 field95_0xb9;
    u8 field96_0xba;
    u8 field97_0xbb;
    u8 field98_0xbc;
    u8 field99_0xbd;
    u8 field100_0xbe;
    u8 field101_0xbf;
    u8 field102_0xc0;
    u8 field103_0xc1;
    u8 field104_0xc2;
    u8 field105_0xc3;
    u8 field106_0xc4;
    u8 field107_0xc5;
    u8 field108_0xc6;
    u8 field109_0xc7;
    u8 field110_0xc8;
    u8 field111_0xc9;
    u8 field112_0xca;
    u8 field113_0xcb;
    u8 field114_0xcc;
    u8 field115_0xcd;
    u8 field116_0xce;
    u8 field117_0xcf;
    u8 field118_0xd0;
    u8 field119_0xd1;
    u8 field120_0xd2;
    u8 field121_0xd3;
    u8 field122_0xd4;
    u8 field123_0xd5;
    u8 field124_0xd6;
    u8 field125_0xd7;
    u8 field126_0xd8;
    u8 field127_0xd9;
    u8 field128_0xda;
    u8 field129_0xdb;
    u8 field130_0xdc;
    u8 field131_0xdd;
    u8 field132_0xde;
    u8 field133_0xdf;
    u8 field134_0xe0;
    u8 field135_0xe1;
    u8 field136_0xe2;
    u8 field137_0xe3;
    u8 field138_0xe4;
    u8 field139_0xe5;
    u8 field140_0xe6;
    u8 field141_0xe7;
    u8 field142_0xe8;
    u8 field143_0xe9;
    u8 field144_0xea;
    u8 field145_0xeb;
    u8 field146_0xec;
    u8 field147_0xed;
    u8 field148_0xee;
    u8 field149_0xef;
    u8 field150_0xf0;
    u8 field151_0xf1;
    u8 field152_0xf2;
    u8 field153_0xf3;
    u8 field154_0xf4;
    u8 field155_0xf5;
    u8 field156_0xf6;
    u8 field157_0xf7;
    u8 field158_0xf8;
    u8 field159_0xf9;
    u8 field160_0xfa;
    u8 field161_0xfb;
    u8 field162_0xfc;
    u8 field163_0xfd;
    u8 field164_0xfe;
    u8 field165_0xff;
    u8 field166_0x100;
    u8 field167_0x101;
    u8 field168_0x102;
    u8 field169_0x103;
};

struct struct_7 {
    struct POLY_FT4 polys[4];
    struct SPRT_16 sprts[4];
    struct DR_MODE dr_mode;
};

struct border_object_data {
    struct struct_7 geom[2];
    struct pos pos;
    s8 buffer; /* Created by retype action */
    u8 field3_0x1dd;
    u8 field4_0x1de;
    u8 field5_0x1df;
};

struct GsCOORD2PARAM {
    struct VECTOR scale;
    struct SVECTOR rotate;
    struct VECTOR trans;
};

struct poly_ft4_object_data {
    struct POLY_FT4 p0[2];
    struct POLY_FT4 p1[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s16 x3;
    s16 y3;
    s8 u0;
    s8 v0;
    s8 u1;
    s8 v1;
    s8 u2;
    s8 v2;
    s8 u3;
    s8 v3;
    u16 r;
    u16 g;
    u16 b;
    u8 field22_0xc0;
    u8 field23_0xc1;
    u8 field24_0xc2;
    u8 field25_0xc3;
    u8 field26_0xc4;
    u8 field27_0xc5;
    u16 clut;
    s16 ot_index;
    u8 field30_0xca;
    u8 field31_0xcb;
    uint brighten_darken;
    s16 update_p1;
    s16 field34_0xd2;
    s16 x_offset;
    s16 y_offset;
    s16 field37_0xd8;
    s16 frame;
    u8 field39_0xdc;
    u8 field40_0xdd;
    u8 field41_0xde;
    u8 field42_0xdf;
    u32 flags;
};

struct screen_overlay {
    struct POLY_F4 p[2];
    struct DR_MODE dr_modes[2];
    struct color_anim color_anim;
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    struct CVECTOR color;
    s8 t_page;
    bool animating;
    s8 size;
    s8 buffer;
    u8 field12_0x74;
    u8 field13_0x75;
    u8 field14_0x76;
    u8 field15_0x77;
    u8 field16_0x78;
    u8 field17_0x79;
    u8 field18_0x7a;
    u8 field19_0x7b;
};

struct poly_ft3_object_data {
    struct POLY_FT3 poly[2];
    s16 buffer;
    s16 x0;
    s16 y0;
    s16 x1;
    s16 y1;
    s16 x2;
    s16 y2;
    s8 u0;
    s8 v0;
    s8 u1;
    s8 v1;
    s8 u2;
    s8 v2;
    u8 field14_0x54;
    u8 field15_0x55;
    u8 field16_0x56;
    u8 field17_0x57;
    u8 field18_0x58;
    u8 field19_0x59;
    u8 field20_0x5a;
    u8 field21_0x5b;
    u8 field22_0x5c;
    u8 field23_0x5d;
    s16 ot_index;
    u32 flags;
};

struct encounter_bar_object_data {
    struct encounter_bar_object_data_substruct geometry[2];
    s32 proximity_1;
    s32 proximity_2;
    s16 keep_synced;
    s8 buffer;
    u8 field5_0x193;
};

struct object_info {
    pointer origin;
    union object_data * next;
    u32 field2_0x8;
    u32 size;
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
    u32 field74_0x70;
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
};

union object_data {
    struct object_info object;
    struct overworld_data overworld;
    struct dungeon_data dungeon;
    struct sprite_object sprite;
    struct poly_f3_object_data poly_f3;
    struct poly_ft3_object_data poly_ft3;
    struct poly_g3_object_data poly_g3;
    struct poly_gt3_object_data poly_gt3;
    struct poly_f4_object_data poly_f4;
    struct poly_ft4_object_data poly_ft4;
    struct poly_g4_object_data poly_g4;
    struct poly_gt4_object_data poly_gt4;
    struct line_f2_object_data line_f2;
    struct party_hud_object_data party_hud;
    struct overworld_character_object_data field_character;
    struct money_hud_object_data money_hud;
    struct border_object_data border;
    struct encounter_bar_object_data encounter_bar;
    struct moon_hud_object_data moon_hud;
    struct navigation_hud_object_data nav_hud;
    struct screen_overlay overlay;
    struct unknown_620_byte_struct six_twenty_byte_struct;
    struct list_object_data list;
};

struct game_manager_data {
    u32 data_struct;
    struct object * field1_0x4;
    s8 field2_0x8;
    s8 frame_counter;
    u8 field4_0xa;
    u8 field5_0xb;
};

struct astruct_13 {
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
    u8 field20_0x14;
    u8 field21_0x15;
    u8 field22_0x16;
    u8 field23_0x17;
    u8 field24_0x18;
    u8 field25_0x19;
    u8 field26_0x1a;
    u8 field27_0x1b;
    u8 field28_0x1c;
    u8 field29_0x1d;
    u8 field30_0x1e;
    u8 field31_0x1f;
    u8 field32_0x20;
    u8 field33_0x21;
    u8 field34_0x22;
    u8 field35_0x23;
    u8 field36_0x24;
    u8 field37_0x25;
    s16 field38_0x26;
    s16 field39_0x28;
    u8 field40_0x2a;
    u8 field41_0x2b;
    s16 field42_0x2c;
};

typedef struct unknown_object_struct unknown_object_struct, *Punknown_object_struct;

struct unknown_object_struct {
    u8 field0_0x0;
    u8 field1_0x1;
    s16 field2_0x2;
    union object_data * field3_0x4;
    pointer field4_0x8;
    u32 field5_0xc;
    s32 field6_0x10;
    u32 field7_0x14;
    s32 field8_0x18;
    s32 field9_0x1c;
    u8 field10_0x20;
    u8 field11_0x21;
    u8 field12_0x22;
    u8 field13_0x23;
    u8 field14_0x24;
    u8 field15_0x25;
    u8 field16_0x26;
    u8 field17_0x27;
    u8 field18_0x28;
    u8 field19_0x29;
    u8 field20_0x2a;
    u8 field21_0x2b;
    u8 field22_0x2c;
    u8 field23_0x2d;
    u8 field24_0x2e;
    u8 field25_0x2f;
    u8 field26_0x30;
    u8 field27_0x31;
    u8 field28_0x32;
    u8 field29_0x33;
    u8 field30_0x34;
    u8 field31_0x35;
    u8 field32_0x36;
    u8 field33_0x37;
    u8 field34_0x38;
    u8 field35_0x39;
    u8 field36_0x3a;
    u8 field37_0x3b;
    u8 field38_0x3c;
    u8 field39_0x3d;
    u8 field40_0x3e;
    u8 field41_0x3f;
    u8 field42_0x40;
    u8 field43_0x41;
    u8 field44_0x42;
    u8 field45_0x43;
    u8 field46_0x44;
    u8 field47_0x45;
    u8 field48_0x46;
    u8 field49_0x47;
    u8 field50_0x48;
    u8 field51_0x49;
    u8 field52_0x4a;
    u8 field53_0x4b;
    u8 field54_0x4c;
    u8 field55_0x4d;
    u8 field56_0x4e;
    u8 field57_0x4f;
    u8 field58_0x50;
    u8 field59_0x51;
    u8 field60_0x52;
    u8 field61_0x53;
    u8 field62_0x54;
    u8 field63_0x55;
    u8 field64_0x56;
    u8 field65_0x57;
    u8 field66_0x58;
    u8 field67_0x59;
    u8 field68_0x5a;
    u8 field69_0x5b;
    u8 field70_0x5c;
    u8 field71_0x5d;
    u8 field72_0x5e;
    u8 field73_0x5f;
    s32 field74_0x60;
    s32 field75_0x64;
    u8 field76_0x68;
    u8 field77_0x69;
    u8 field78_0x6a;
    u8 field79_0x6b;
    u8 field80_0x6c;
    u8 field81_0x6d;
    u8 field82_0x6e;
    u8 field83_0x6f;
    u8 field84_0x70;
    u8 field85_0x71;
    u8 field86_0x72;
    u8 field87_0x73;
    u8 field88_0x74;
    u8 field89_0x75;
    u8 field90_0x76;
    u8 field91_0x77;
    u8 field92_0x78;
    u8 field93_0x79;
    u8 field94_0x7a;
    u8 field95_0x7b;
    u8 field96_0x7c;
    u8 field97_0x7d;
    u8 field98_0x7e;
    u8 field99_0x7f;
    s32 field100_0x80;
    s32 flags;
    u16 field102_0x88;
    u16 field103_0x8a;
    s16 field104_0x8c;
    u8 field105_0x8e;
    u8 field106_0x8f;
    u8 field107_0x90;
    u8 field108_0x91;
    u8 field109_0x92;
    u8 field110_0x93;
    u8 field111_0x94;
    u8 field112_0x95;
    u8 field113_0x96;
    u8 field114_0x97;
    u8 field115_0x98;
    u8 field116_0x99;
    u8 field117_0x9a;
    u8 field118_0x9b;
    u8 field119_0x9c;
    u8 field120_0x9d;
    u8 field121_0x9e;
    u8 field122_0x9f;
    u8 field123_0xa0;
    u8 field124_0xa1;
    u8 field125_0xa2;
    u8 field126_0xa3;
    u8 field127_0xa4;
    u8 field128_0xa5;
    u8 field129_0xa6;
    u8 field130_0xa7;
    u8 field131_0xa8;
    u8 field132_0xa9;
    u8 field133_0xaa;
    u8 field134_0xab;
    u8 field135_0xac;
    u8 field136_0xad;
    u8 field137_0xae;
    u8 field138_0xaf;
    u8 field139_0xb0;
    u8 field140_0xb1;
    u8 field141_0xb2;
    u8 field142_0xb3;
    u8 field143_0xb4;
    u8 field144_0xb5;
    u8 field145_0xb6;
    u8 field146_0xb7;
    u8 field147_0xb8;
    u8 field148_0xb9;
    u8 field149_0xba;
    u8 field150_0xbb;
    u8 field151_0xbc;
    u8 field152_0xbd;
    u8 field153_0xbe;
    u8 field154_0xbf;
    u8 field155_0xc0;
    u8 field156_0xc1;
    u8 field157_0xc2;
    u8 field158_0xc3;
    u8 field159_0xc4;
    u8 field160_0xc5;
    u8 field161_0xc6;
    u8 field162_0xc7;
    u8 field163_0xc8;
    u8 field164_0xc9;
    u8 field165_0xca;
    u8 field166_0xcb;
    u8 field167_0xcc;
    u8 field168_0xcd;
    u8 field169_0xce;
    u8 field170_0xcf;
    u8 field171_0xd0;
    u8 field172_0xd1;
    u8 field173_0xd2;
    u8 field174_0xd3;
    u8 field175_0xd4;
    u8 field176_0xd5;
    u8 field177_0xd6;
    u8 field178_0xd7;
    u8 field179_0xd8;
    u8 field180_0xd9;
    u8 field181_0xda;
    u8 field182_0xdb;
    u8 field183_0xdc;
    u8 field184_0xdd;
    u8 field185_0xde;
    u8 field186_0xdf;
    u8 field187_0xe0;
    u8 field188_0xe1;
    u8 field189_0xe2;
    u8 field190_0xe3;
    u8 field191_0xe4;
    u8 field192_0xe5;
    u8 field193_0xe6;
    u8 field194_0xe7;
    u8 field195_0xe8;
    u8 field196_0xe9;
    u8 field197_0xea;
    u8 field198_0xeb;
    u8 field199_0xec;
    u8 field200_0xed;
    u8 field201_0xee;
    u8 field202_0xef;
    u8 field203_0xf0;
    u8 field204_0xf1;
    u8 field205_0xf2;
    u8 field206_0xf3;
    u8 field207_0xf4;
    u8 field208_0xf5;
    u8 field209_0xf6;
    u8 field210_0xf7;
    u8 field211_0xf8;
    u8 field212_0xf9;
    u8 field213_0xfa;
    u8 field214_0xfb;
    u8 field215_0xfc;
    u8 field216_0xfd;
    u8 field217_0xfe;
    u8 field218_0xff;
    u8 field219_0x100;
    u8 field220_0x101;
    u8 field221_0x102;
    u8 field222_0x103;
    u8 field223_0x104;
    u8 field224_0x105;
    u8 field225_0x106;
    u8 field226_0x107;
    u8 field227_0x108;
    u8 field228_0x109;
    u8 field229_0x10a;
    u8 field230_0x10b;
    u8 field231_0x10c;
    u8 field232_0x10d;
    u8 field233_0x10e;
    u8 field234_0x10f;
    u8 field235_0x110;
    u8 field236_0x111;
    u8 field237_0x112;
    u8 field238_0x113;
    u8 field239_0x114;
    u8 field240_0x115;
    u8 field241_0x116;
    u8 field242_0x117;
    u8 field243_0x118;
    u8 field244_0x119;
    u8 field245_0x11a;
    u8 field246_0x11b;
    u8 field247_0x11c;
    u8 field248_0x11d;
    u8 field249_0x11e;
    u8 field250_0x11f;
    u8 field251_0x120;
    u8 field252_0x121;
    u8 field253_0x122;
    u8 field254_0x123;
    u8 field255_0x124;
    u8 field256_0x125;
    u8 field257_0x126;
    u8 field258_0x127;
    u8 field259_0x128;
    u8 field260_0x129;
    u8 field261_0x12a;
    u8 field262_0x12b;
    u8 field263_0x12c;
    u8 field264_0x12d;
    u8 field265_0x12e;
    u8 field266_0x12f;
    u8 field267_0x130;
    u8 field268_0x131;
    u8 field269_0x132;
    u8 field270_0x133;
    u8 field271_0x134;
    u8 field272_0x135;
    u8 field273_0x136;
    u8 field274_0x137;
    u8 field275_0x138;
    u8 field276_0x139;
    u8 field277_0x13a;
    u8 field278_0x13b;
    u8 field279_0x13c;
    u8 field280_0x13d;
    u8 field281_0x13e;
    u8 field282_0x13f;
    u8 field283_0x140;
    u8 field284_0x141;
    u8 field285_0x142;
    u8 field286_0x143;
    u8 field287_0x144;
    u8 field288_0x145;
    u8 field289_0x146;
    u8 field290_0x147;
    u8 field291_0x148;
    u8 field292_0x149;
    u8 field293_0x14a;
    u8 field294_0x14b;
    u8 field295_0x14c;
    u8 field296_0x14d;
    u8 field297_0x14e;
    u8 field298_0x14f;
    u8 field299_0x150;
    u8 field300_0x151;
    u8 field301_0x152;
    u8 field302_0x153;
    u8 field303_0x154;
    u8 field304_0x155;
    u8 field305_0x156;
    u8 field306_0x157;
    u8 field307_0x158;
    u8 field308_0x159;
    u8 field309_0x15a;
    u8 field310_0x15b;
    u8 field311_0x15c;
    u8 field312_0x15d;
    u8 field313_0x15e;
    u8 field314_0x15f;
    u8 field315_0x160;
    u8 field316_0x161;
    u8 field317_0x162;
    u8 field318_0x163;
    u8 field319_0x164;
    u8 field320_0x165;
    u8 field321_0x166;
    u8 field322_0x167;
    u8 field323_0x168;
    u8 field324_0x169;
    u8 field325_0x16a;
    u8 field326_0x16b;
    u8 field327_0x16c;
    u8 field328_0x16d;
    u8 field329_0x16e;
    u8 field330_0x16f;
    u8 field331_0x170;
    u8 field332_0x171;
    u8 field333_0x172;
    u8 field334_0x173;
    u8 field335_0x174;
    u8 field336_0x175;
    u8 field337_0x176;
    u8 field338_0x177;
    u8 field339_0x178;
    u8 field340_0x179;
    u8 field341_0x17a;
    u8 field342_0x17b;
    u8 field343_0x17c;
    u8 field344_0x17d;
    u8 field345_0x17e;
    u8 field346_0x17f;
    u8 field347_0x180;
    u8 field348_0x181;
    u8 field349_0x182;
    u8 field350_0x183;
    u8 field351_0x184;
    u8 field352_0x185;
    u8 field353_0x186;
    u8 field354_0x187;
    u8 field355_0x188;
    u8 field356_0x189;
    u8 field357_0x18a;
    u8 field358_0x18b;
    u8 field359_0x18c;
    u8 field360_0x18d;
    u8 field361_0x18e;
    u8 field362_0x18f;
    s32 field363_0x190;
    s32 field364_0x194;
    s16 field365_0x198;
    u8 field366_0x19a;
    u8 field367_0x19b;
    u8 field368_0x19c;
    u8 field369_0x19d;
    u8 field370_0x19e;
    u8 field371_0x19f;
    u8 field372_0x1a0;
    u8 field373_0x1a1;
    u8 field374_0x1a2;
    u8 field375_0x1a3;
    u8 field376_0x1a4;
    u8 field377_0x1a5;
    u8 field378_0x1a6;
    u8 field379_0x1a7;
    u8 field380_0x1a8;
    u8 field381_0x1a9;
    u8 field382_0x1aa;
    u8 field383_0x1ab;
    u8 field384_0x1ac;
    u8 field385_0x1ad;
    u8 field386_0x1ae;
    u8 field387_0x1af;
    s32 field388_0x1b0;
    struct object * field389_0x1b4;
    struct object * field390_0x1b8;
    struct object * field391_0x1bc;
    struct object * field392_0x1c0;
    struct object * field393_0x1c4;
    struct object * field394_0x1c8;
    struct object * field395_0x1cc;
    struct object * field396_0x1d0;
    u8 field397_0x1d4;
    u8 field398_0x1d5;
    u8 field399_0x1d6;
    u8 field400_0x1d7;
    struct object * field401_0x1d8;
    struct object * field402_0x1dc;
    struct object * field403_0x1e0;
    struct object * field404_0x1e4;
    struct object * field405_0x1e8;
    struct object * field406_0x1ec;
};

struct persistent_objects {
    object* game_manager;
    object* screen_overlay;
    object* party_hud;
    object* moon_hud;
    object* money_hud;
    object* mag_hud;
    object* nav_hud;
    object* enc_bar;
    object* border;
    object* field_char;
    unknown_object_struct* unk0;
    s32 unk1;
};
