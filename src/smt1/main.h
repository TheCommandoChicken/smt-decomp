#include "sys/types.h"
#include "libgte.h"
#include "libgpu.h"
#include "libapi.h"
#include "object.h"

#ifndef _MAIN_H_
#define _MAIN_H_

/* Handles starting the intro sequence. */
struct intro_manager {
	void * data_struct;
	struct object * obj;
	char unk8;
	char frame_counter;
	unsigned short unkA;
};


/* Created by func_800145CC */
struct unk_data_0 { 
	long (* unk0)(void);
	unsigned char counter;
	unsigned char pad0, pad1, pad2;
};


/* Created by func_80014A2C */
/* Likely used for displaying menus. */
struct unk_data_1 { 
	struct object * unk0;
	unsigned short * unk4[3];
	POLY_G4 g[2][5];
	POLY_F4 f[2][5];
	unsigned char menu_active;
	unsigned char unk269;
	unsigned char counter;
	unsigned char buffer;
};


struct unknown_object_struct {
	unsigned char unk0;
	unsigned char unk1;
	short unk2;
	void * unk4;
	void * unk8;
	unsigned long unkC;
	long unk10[2];
	long unk18;
	long unk1C;
	unsigned char unk20[0x40];
	long unk60;
	long unk64;
	unsigned char unk68[0x18];
	long unk80;
	unsigned long flags;
	unsigned short unk88;
	unsigned short unk8A;
	short unk8C;
	unsigned char unk8E[0x102];
	long unk190;
	long unk194;
	short unk198;
	unsigned char unk19A[0x16];
	long unk1B0;
	struct object * unk1B4;
	struct object * unk1B8;
	struct object * unk1BC;
	struct object * unk1C0;
	struct object * unk1C4;
	struct object * unk1C8;
	struct object * unk1CC;
	struct object * unk1D0;
	struct object * unk1D4; // Assumed
	struct object * unk1D8;
	struct object * unk1DC;
	struct object * unk1E0;
	struct object * unk1E4;
	struct object * unk1E8;
	struct object * unk1EC;
};


struct persistent_objects {
	struct object * intro_manager;			// Handles the game's intro sequence.
	struct object * screen_overlay;			// An overlay used to fade the screen to and from black.
	struct object * party_hud;				// UI element which displays the current party in 3D and during battles.
	struct object * moon_hud;				// UI element which displays the current moon phase.
	struct object * money_hud;				// UI element displaying the player's money.
	struct object * mag_hud;					// UI element displaying the player's magnetite.
	struct object * nav_hud;					// Combination of the UI element showing the location in 2D, as well as the compass shown in 3D.
	struct object * enc_bar;					// Colored bar used to indicate the proximity of an encounter.
	struct object * border;					// The border drawn around the edges of the screen.
	struct object * field_char;				// The player character sprite shown in 2D.
	struct unknown_object_struct * unk0;
	unsigned long * unk1;
};


struct pos_pair {
	DVECTOR pos[2];
};


struct astruct_13 {
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
	unsigned char field20_0x14;
	unsigned char field21_0x15;
	unsigned char field22_0x16;
	unsigned char field23_0x17;
	unsigned char field24_0x18;
	unsigned char field25_0x19;
	unsigned char field26_0x1a;
	unsigned char field27_0x1b;
	unsigned char field28_0x1c;
	unsigned char field29_0x1d;
	unsigned char field30_0x1e;
	unsigned char field31_0x1f;
	unsigned char field32_0x20;
	unsigned char field33_0x21;
	unsigned char field34_0x22;
	unsigned char field35_0x23;
	unsigned char field36_0x24;
	unsigned char field37_0x25;
	short field38_0x26;
	short field39_0x28;
	unsigned char field40_0x2a;
	unsigned char field41_0x2b;
	short field42_0x2c;
};


int main(void);
void start(void);
void Init(void);
void MainLoop(void);
void Empty(void);
void SysInit(void);
void VSyncCallbackFunc(void);
void DrawSyncCallbackFunc(void);
unsigned long Random(void);
struct object * GameInit(void);
void GameManagerProc(struct object * self);
void func_800144D4(char);
void EmptyProc(struct object * self);
void GameDataInit(void);
void func_800145CC(long (*)(void));
void func_80014698(struct object *);
long func_800147CC(void); 
long func_80014804(void);
void func_8001489C(long, long, long);
void func_800148D4(void);
void func_800148FC(long);
void func_80014928(long);
struct object * func_80014964(void);
void ClearUnknownStruct(void);
void func_800149E4(unsigned long *);
unsigned long * func_800149F0(long);
long func_80014A18(struct object *);
struct object * func_80014A2C(void);
void func_80014AF4(struct object *);
void func_80014CD4(struct unk_data_1 *, long);
void func_80014E34(struct object *);
void func_80014F44(struct object *);
void func_800150A0(struct object *);
struct object * func_8001513C(struct unk_data_1 *);

/* rodata */
const long D_80010308;

extern long D_800B6C54 = 0x8000; // Treated as extern by Init(), but placed in .sdata, suggesting that they are defined in another file.
extern long D_800B6C58 = 0x800000;
extern unsigned char D_80125368;
extern struct object_ptrs * FirstObjectPtrPtr;

extern struct object * func_8001F5EC(void);
extern struct object * func_800253E8(long);
extern struct object * func_8002276C(void);
extern struct object * func_80022B2C(void);
extern struct object * func_80022DFC(void);
extern struct object * func_80023148(void);
extern struct object * func_80023838(void);
extern struct object * func_80023F94(void);
extern struct object * func_800245D0(void);
extern struct unknown_object_struct * func_800527E8(void);
extern struct object * func_800180DC(void (*)(struct object *), void (*)(struct object *), struct object *, long, long, long);
extern void * func_80019C58(long, long, long, long, long, long);
extern struct object * func_80117E70(char);
extern struct object * func_8005B67C(long, long, long);
extern unsigned long * func_8004C5A8(void);
extern struct object * func_800494D0(long);
extern unsigned short * func_8004B888(long);
extern struct object * func_80065F38();

#endif