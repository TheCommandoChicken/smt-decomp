#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libapi.h"
#include "object.h"
#include "common.h"

#ifndef _MAIN_H_
#define _MAIN_H_

/* Handles starting the intro sequence. */
struct intro_manager {
	void * data_struct;
	struct object * obj;
	s8 unk8;
	s8 frame_counter;
	u16 unkA;
};


/* Created by func_800145CC */
struct unk_data_0 {
	s32 (*unk0)(void);
	u8 counter;
	u8 pad0, pad1, pad2;
};


/* Created by func_80014A2C */
/* Likely used for displaying menus. */
struct unk_data_1 {
	struct object * unk0;
	u16 * unk4[3];
	POLY_G4 g[2][5];
	POLY_F4 f[2][5];
	u8 menu_active;
	u8 unk269;
	u8 counter;
	u8 buffer;
};

/*
	Purpose unclear. Seems related to displaying dialogue and cutscenes?
*/
struct unknown_object_struct {
	u8 unk0;
	u8 unk1;
	s16 unk2;
	void * unk4;
	void * unk8;
	void * unkC;
	s32 unk10[2];
	s32 unk18;
	s32 unk1C;
	u8 unk20[0x40];
	s32 unk60;
	s32 unk64;
	u8 unk68[0x18];
	s32 unk80;
	u32 flags;
	u16 unk88;
	u16 unk8A;
	s16 unk8C;
	u8 unk8E[0x102];
	s32 unk190;
	s32 unk194;
	s16 unk198;
	u8 unk19A[0x16];
	s32 unk1B0;
	/* These contain pointers to objects for the sprites displayed on screen during the cutscene. */
	struct object * sprite0;
	struct object * sprite1;
	struct object * sprite2;
	struct object * sprite3;
	struct object * sprite4;
	struct object * sprite5;
	struct object * sprite6;
	struct object * sprite7;
	struct object * sprite8; /* Assumed. */
	struct object * sprite9;
	struct object * sprite10;
	struct object * sprite11;
	struct object * sprite12;
	struct object * sprite13;
	struct object * sprite14;
};


struct persistent_objects {
	struct object * intro_manager;	/* Handles the game's intro sequence. */
	struct object * screen_overlay; /* An overlay used to fade the screen to and from black. */
	struct object * party_hud;		/* UI element which displays the current party in 3D and during battles. */
	struct object * moon_hud;		/* UI element which displays the current moon phase. */
	struct object * money_hud;		/* UI element displaying the player's money. */
	struct object * mag_hud;		/*  UI element displaying the player's magnetite. */
	struct object * nav_hud;		/* Combination of the UI element showing the location in 2D, as well as the compass shown in 3D. */
	struct object * enc_bar;		/* Colored bar used to indicate the proximity of an encounter. */
	struct object * border;			/* The border drawn around the edges of the screen. */
	struct object * field_char;		/* The player character sprite shown in 2D. */
	struct unknown_object_struct * unk0;
	u32 * unk1;
};


struct pos_pair {
	DVECTOR pos[2];
};


struct unk_data_2 {
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


int main(void);
void start(void);
void Init(void);
void MainLoop(void);
void Empty(void);
void SysInit(void);
void VSyncCallbackFunc(void);
void DrawSyncCallbackFunc(void);
u32 Random(struct object * self);
struct object * GameInit(void);
void IntroManagerProc(struct object * self);
void func_800144D4(s8);
void EmptyProc(struct object * self);
void GameDataInit(void);
void func_800145CC(s32 (*)(void));
void func_80014698(struct object *);
s32 func_800147CC(void);
s32 func_80014804(void);
void func_8001489C(s32, s32, s32);
void func_800148D4(void);
void func_800148FC(s32);
void func_80014928(s32);
struct object * func_80014964(void);
void ClearUnknownStruct(void);
void func_800149E4(u32 *);
u32 * func_800149F0(s32);
s32 func_80014A18(struct object *);
struct object * func_80014A2C(void);
void func_80014AF4(struct object *);
void func_80014CD4(struct unk_data_1 *, s32);
void func_80014E34(struct object *);
void func_80014F44(struct object *);
void func_800150A0(struct object *);
struct object * func_8001513C(struct unk_data_1 *);

extern struct object * func_8001F5EC(void);
extern struct object * func_800253E8(s32);
extern struct object * func_8002276C(void);
extern struct object * func_80022B2C(void);
extern struct object * func_80022DFC(void);
extern struct object * func_80023148(void);
extern struct object * func_80023838(void);
extern struct object * func_80023F94(void);
extern struct object * func_800245D0(void);
extern struct unknown_object_struct * func_800527E8(void);
extern void * func_80019C58(s32, void *, s32, s32, s32, s32);
extern struct object * func_80117E70(s8);
extern struct object * func_8005B67C(s32, s32, s32);
extern u32 * func_8004C5A8(void);
extern struct object * func_800494D0(s32);
extern u16 * func_8004B888(s32);
extern struct object * func_80065F38(s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32);

/* rodata */
const u32 D_80010308 = 0x80117790;

/* Treated as extern by Init(), but placed in .sdata, suggesting that they are defined in another file. */
extern s32 D_800B6C54 /*= 0x8000*/;
extern s32 D_800B6C58 /*= 0x800000*/;

extern u8 D_80125368;
extern struct object_ptrs * FirstObjectPtrPtr;

#endif
