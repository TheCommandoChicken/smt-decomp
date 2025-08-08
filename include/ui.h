#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libgs.h"
#include "object.h"
#include "common.h"

struct struct_13 {
    short x;
    short y;
    s32 unk4;
};

struct color_anim { /* Not 100% but this seems related to animating colors */
	s8 loops;
	s8 max_loops;
	s8 iteration;
	s8 max_iterations;
	s8 dir;
	u8 unk5;
	u8 unk6;
	u8 unk7;
	CVECTOR forward_cvector;
	CVECTOR backward_cvector;
	s32 r;
	s32 g;
	s32 b;
};

struct screen_overlay {
	POLY_F4 p[2];
	DR_MODE d[2];
	struct color_anim color_anim;
	s16 x;
	s16 y;
	s16 w;
	s16 h;
	CVECTOR color;
	s8 t_page;
	u8 animating;
	s8 size;
	s8 buffer;
};

struct unk_data_21 {
	s32 unk0;
	s16 unk4;
	s16 unk6;
	u16 * unk8;
	s16 unkC;
	s16 unkE;
	u16 unk10;
	u16 unk12;
	s16 unk14;
	s16 unk16;
	s16 unk18;
	s16 unk1A;
};

struct unk_data_9 {
	POLY_G4 p[2];
	u8 buffer;
};

struct unk_data_11 {
    SPRT s[2];
    POLY_FT4 p[2];
    DR_MODE d;
};

struct unk_data_23 {
	LINE_F2 l[2];
	u8 buffer;
};

struct unk_data_25 {
    POLY_G4 p[2];
    LINE_F2 l[35];
    DR_MODE d;
};

struct unk_data_22 {
	struct object * origin;
	POLY_G4 p[2];
	u8 unk4C;
	struct unk_data_23 l[50];
	s16 unk758;
	s16 unk75A;
	s16 unk75C;
	s16 unk75E;
	s16 unk760;
	s16 unk762;
	s32 unk764;
};

struct unk_struct {
    s8 unk0;
    s8 unk1;
    s8 unk2;
    s8 unk3;
    s8 unk4;
    s8 unk5;
    s8 unk6;
    s8 unk7;
    s32 unk8;
    s32 unkC;
};

struct unk_data_14 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u16 unk4;
    u16 unk6;
    u16 x;
    u16 y;
    s32 unkC;
    s32 unk10;
    s32 unk14;
};

struct unk_data_16 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s8 unkC;
    s8 unkD;
};

struct unk_data_15 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u8 unkC;
    u8 unkD;
    u8 unkE;
    u8 unkF;
    s32 unk10[0x58];
    s32* unk1A0;
    s32 unk1A4[0x11];
    s32 unk1E8;
    s16 unk1EC;
    s16 unk1EE;
    s32 unk1F0;
    s16 unk1F4;
    s8 unk1F6;
    s8 unk1F7;
    s8 unk1F8;
    s8 unk1F9;
    s16 unk1FA;
};

struct unk_data_10 {
    POLY_F4 p[6];
    DR_MODE dr_mode;
};

struct col1_rect {
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    u32 color;
};

struct col_rect {
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    u32 colors[4];
};

struct dialog_box {
    POLY_G4 p[2][5];
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    s16 unk170;
    s16 unk172;
    s16 unk174;
    s16 unk176;
    s16 unk178;
    u8 unk17A;
    u8 ot_index;
    u8 unk17C;
    u8 buffer;
    s16 unk17E;
};

struct unk_data_17 {
    SPRT s0;
    SPRT s1;
    POLY_FT4 p0;
    POLY_G4 p1[5];
    POLY_F4 p2;
    DR_MODE d;
};

struct unk_data_18 {
    struct unk_data_17 u[2];
    s16 x;
    s16 y;
    s16 unk254;
    s16 unk256;
    s16 unk258;
    s16 unk25A;
    u16** unk25C;
    u8 unk260;
    u8 unk261;
    u8 buffer;
};

struct text_sprt {
    SPRT sprt[921]; // Note that I'm not sure if this is actually how many SPRTs there are, this is just the max that fit.
    DR_MODE dr_mode;
};

struct font {
    u8 w;
    u8 h;
    u8 u;
    u8 v;
    s16 unk4;
    s16 unk6;
};

struct font FontData[7] = {
    {8, 16, 0, 0, 0x3D, 0x7810},
    {8, 8, 0x80, 0, 0x3D, 0x7810},
    {8, 10, 0x80, 32, 0x3D, 0x7810},
    {6, 8, 0x80, 0x48, 0x3D, 0x7810},
    {10, 10, 0, 0x82, 0x3D, 0x7950},
    {12, 12, 0, 0, 0x3E, 0x7950},
    {12, 12, 0, 0, 0x3F, 0x7950}
};

void func_8001F984(s16, s16, s16, s16, u32, u32, s32, u8, s32);
extern void func_8001FA28(struct object*);
extern u32 func_8001FD3C(struct color_anim*, u32, u32, u8, u8);
extern struct col_rect * func_80020D40(s16 x, s16 y, s16 w, s16 h, s32 arg4);
extern void func_8002103C(struct object* self);
extern u8 func_800210EC(struct dialog_box* arg0);
extern void func_8002121C(struct dialog_box* arg0, s32 arg1, s32 arg2);
extern struct object * func_80021764(s32 arg0, u16 ** arg1, s32 arg2, s32 arg3);
extern void func_80021818(struct object * arg0);
extern void func_800218CC(struct unk_data_18 * arg0);
extern void func_80021AD0(s16 x, s16 y, s32 ot_index, struct unk_data_25 * arg3);
extern void func_80021DBC(s16* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6);
void func_80021E80(s16* arg0, s16 x, s16 y, s16 arg3, s16 arg4, s16 arg5, s16 arg6);

extern struct object_ptrs * FirstObjectPtrPtr;
extern GsOT_TAG * OrderingTable;
extern struct object * D_800B73F0;
