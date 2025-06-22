#include "graph.h"
#include "lib/memory.h"

/* data */
struct texture_data D_8009FC70[183] = {
	{16, 16, 0, 0, 0, 1, -1},
	{16, 16, 16, 0, 0, 1, -1},
	{16, 16, 32, 0, 0, 1, -1},
	{16, 16, 48, 0, 0, 1, -1},
	{16, 16, 64, 0, 0, 1, -1},
	{16, 16, 80, 0, 0, 1, -1},
	{16, 16, 96, 0, 0, 1, -1},
	{16, 16, 112, 0, 0, 1, -1},
	{16, 16, 0, 16, 0, 2, -1},
	{16, 16, 16, 16, 0, 2, -1},
	{16, 16, 32, 16, 0, 1, -1},
	{16, 16, 48, 16, 0, 2, -1},
	{16, 16, 64, 16, 0, 1, -1},
	{16, 16, 80, 16, 0, 2, -1},
	{16, 16, 96, 16, 0, 1, -1},
	{16, 16, 112, 16, 0, 2, -1},
	{16, 16, 0, 32, 0, 2, -1},
	{16, 16, 16, 32, 0, 1, -1},
	{16, 16, 32, 32, 0, 2, -1},
	{16, 16, 48, 32, 0, 1, -1},
	{16, 16, 64, 32, 0, 1, 1},
	{16, 16, 80, 32, 0, 1, 1},
	{16, 16, 96, 32, 0, 1, 1},
	{16, 16, 112, 32, 0, 1, 1},
	{16, 16, 0, 48, 0, 3, -1},
	{16, 16, 16, 48, 0, 3, -1},
	{16, 16, 32, 48, 0, 3, -1},
	{16, 16, 48, 48, 0, 3, -1},
	{16, 16, 64, 48, 0, 3, -1},
	{16, 16, 80, 48, 0, 3, -1},
	{16, 16, 96, 48, 0, 3, -1},
	{16, 16, 112, 48, 0, 3, -1},
	{16, 16, 0, 80, 0, 3, -1},
	{16, 16, 16, 80, 0, 3, -1},
	{16, 16, 32, 80, 0, 3, -1},
	{16, 16, 48, 80, 0, 3, -1},
	{16, 16, 64, 80, 0, 3, -1},
	{16, 16, 80, 80, 0, 3, -1},
	{16, 16, 96, 80, 0, 3, -1},
	{16, 16, 112, 80, 0, 3, -1},
	{16, 16, 0, 64, 0, 3, -1},
	{16, 16, 16, 64, 0, 3, -1},
	{16, 16, 32, 64, 0, 3, -1},
	{16, 16, 48, 64, 0, 3, -1},
	{16, 16, 64, 64, 0, 3, -1},
	{16, 16, 80, 64, 0, 3, -1},
	{16, 16, 96, 64, 0, 3, -1},
	{16, 16, 112, 64, 0, 3, -1},
	{8, 8, 56, 112, 0, 15, 0},
	{8, 8, 72, 112, 0, 15, 0},
	{8, 8, 64, 112, 0, 15, 0},
	{8, 8, 56, 120, 0, 15, 0},
	{8, 8, 72, 120, 0, 15, 0},
	{8, 8, 64, 120, 0, 15, 0},
	{8, 8, 56, 128, 0, 15, 0},
	{8, 8, 72, 128, 0, 15, 0},
	{8, 8, 64, 128, 0, 15, 0},
	{16, 16, 0, 96, 0, 0, -1},
	{16, 16, 24, 96, 0, 0, -1},
	{16, 16, 0, 120, 0, 0, -1},
	{16, 16, 24, 120, 0, 0, -1},
	{8, 16, 16, 96, 0, 0, -1},
	{16, 8, 0, 96, 0, 0, -1},
	{16, 8, 24, 96, 0, 0, -1},
	{8, 16, 16, 120, 0, 0, -1},
	{42, 18, 128, 56, 0, 15, 0},
	{14, 12, 128, 0, 0, 14, -1},
	{14, 12, 142, 0, 0, 14, -1},
	{14, 12, 156, 0, 0, 14, -1},
	{14, 12, 170, 0, 0, 14, -1},
	{128, 8, 128, 128, 0, 6, -1},
	{144, 16, 112, 136, 0, 0, -1},
	{144, 16, 112, 152, 0, 0, -1},
	{42, 10, 26, 150, 0, 0, -1},
	{10, 8, 0, 232, 0, 6, -1},
	{10, 8, 20, 232, 0, 6, -1},
	{10, 8, 30, 232, 0, 6, -1},
	{10, 8, 40, 232, 0, 6, -1},
	{10, 8, 50, 232, 0, 6, -1},
	{10, 8, 60, 232, 0, 6, -1},
	{10, 8, 70, 232, 0, 6, -1},
	{10, 8, 80, 232, 0, 6, -1},
	{10, 8, 90, 232, 0, 6, -1},
	{10, 8, 100, 232, 0, 6, -1},
	{16, 8, 0, 240, 0, 6, -1},
	{16, 8, 16, 240, 0, 6, -1},
	{68, 8, 0, 192, 0, 8, -1},
	{68, 8, 0, 192, 0, 9, -1},
	{16, 12, 120, 200, 0, 10, 1},
	{160, 8, 0, 248, 0, 0, -1},
	{22, 12, 1, 176, 0, 9, 0},
	{24, 16, 128, 40, 0, 15, -1},
	{24, 16, 152, 40, 0, 15, -1},
	{16, 16, 144, 24, 0, 15, -1},
	{16, 16, 128, 24, 0, 15, -1},
	{8, 16, 160, 24, 0, 15, 1},
	{8, 8, 168, 24, 0, 15, 1},
	{8, 8, 168, 32, 0, 15, 1},
	{8, 8, 40, 96, 0, 4, -1},
	{10, 10, 0, 136, 0, 4, -1},
	{10, 10, 40, 122, 0, 4, -1},
	{10, 10, 40, 112, 0, 3, -1},
	{124, 12, 0, 216, 0, 4, -1},
	{8, 8, 32, 176, 0, 6, -1},
	{12, 12, 0, 200, 0, 13, -1},
	{12, 12, 12, 200, 0, 13, -1},
	{12, 12, 24, 200, 0, 13, -1},
	{12, 12, 36, 200, 0, 13, -1},
	{12, 12, 48, 200, 0, 13, -1},
	{12, 12, 60, 200, 0, 13, -1},
	{12, 12, 72, 200, 0, 13, -1},
	{12, 12, 48, 176, 0, 1, -1},
	{12, 12, 60, 176, 0, 2, -1},
	{12, 12, 72, 176, 0, 1, -1},
	{12, 12, 84, 176, 0, 2, -1},
	{12, 12, 96, 176, 0, 1, -1},
	{12, 12, 108, 176, 0, 1, -1},
	{12, 12, 120, 176, 0, 2, -1},
	{12, 12, 132, 176, 0, 2, -1},
	{6, 12, 96, 200, 0, 1, -1},
	{6, 12, 102, 200, 0, 2, -1},
	{6, 12, 108, 200, 0, 1, -1},
	{16, 16, 206, 48, 0, 12, -1},
	{16, 16, 222, 48, 0, 12, -1},
	{16, 16, 238, 48, 0, 12, -1},
	{16, 16, 206, 64, 0, 12, -1},
	{16, 16, 222, 64, 0, 12, -1},
	{16, 16, 238, 64, 0, 12, -1},
	{16, 16, 238, 80, 0, 12, -1},
	{16, 16, 142, 192, 0, 12, -1},
	{16, 16, 158, 192, 0, 12, -1},
	{16, 16, 174, 192, 0, 12, -1},
	{16, 16, 190, 192, 0, 12, -1},
	{16, 16, 206, 192, 0, 12, -1},
	{16, 16, 222, 192, 0, 12, -1},
	{16, 16, 238, 192, 0, 12, -1},
	{8, 12, 120, 112, 0, 9, 1},
	{8, 12, 128, 112, 0, 9, 1},
	{8, 12, 136, 112, 0, 9, 1},
	{16, 16, 208, 0, 0, 13, -1},
	{16, 16, 224, 0, 0, 13, -1},
	{16, 16, 240, 0, 0, 13, -1},
	{16, 16, 208, 16, 0, 13, -1},
	{16, 16, 224, 16, 0, 13, -1},
	{16, 16, 240, 16, 0, 13, -1},
	{16, 16, 208, 32, 0, 13, -1},
	{16, 16, 224, 32, 0, 13, -1},
	{16, 16, 240, 32, 0, 13, -1},
	{12, 12, 144, 168, 0, 13, -1},
	{12, 12, 156, 168, 0, 13, -1},
	{12, 12, 168, 168, 0, 13, -1},
	{12, 12, 180, 168, 0, 13, -1},
	{12, 12, 192, 168, 0, 13, -1},
	{12, 12, 204, 168, 0, 13, -1},
	{12, 12, 216, 168, 0, 13, -1},
	{12, 12, 144, 180, 0, 13, -1},
	{12, 12, 156, 180, 0, 13, -1},
	{12, 12, 168, 180, 0, 13, -1},
	{12, 12, 180, 180, 0, 13, -1},
	{12, 12, 192, 180, 0, 13, -1},
	{16, 16, 144, 208, 0, 8, 1},
	{16, 16, 160, 208, 0, 8, 1},
	{16, 16, 176, 208, 0, 8, 1},
	{16, 16, 192, 208, 0, 8, 1},
	{16, 16, 208, 208, 0, 8, 1},
	{16, 16, 224, 208, 0, 8, 1},
	{16, 16, 128, 224, 0, 8, 1},
	{16, 16, 144, 224, 0, 8, 1},
	{16, 16, 160, 224, 0, 8, 1},
	{16, 16, 176, 224, 0, 8, 1},
	{16, 16, 192, 224, 0, 8, 1},
	{16, 16, 208, 224, 0, 8, 1},
	{16, 16, 224, 224, 0, 8, 1},
	{16, 16, 240, 224, 0, 8, 1},
	{16, 16, 160, 240, 0, 8, 1},
	{16, 16, 176, 240, 0, 8, 1},
	{16, 16, 192, 240, 0, 8, 1},
	{16, 16, 208, 240, 0, 8, 1},
	{12, 12, 96, 136, 0, 10, 3},
	{42, 14, 144, 112, 0, 14, 0},
	{10, 8, 110, 232, 0, 6, -1},
	{8, 8, 24, 176, 0, 15, -1},
	{42, 10, 192, 112, 0, 15, -1}};
/* sbss */
GsOT_TAG * MainOTPtr;					  /* 0x800B73CC */
s32 ActiveBuffer;						  /* 0x800B73D0 */
s8 BackgroundR, BackgroundG, BackgroundB; /* 0x800B73D4 */
GsOT_TAG D_800B73DC;					  /* 0x800B73DC */
s16 D_800B73E4;
GsOT_TAG * OrderingTable;				  /* 0x800B73E8 */
GsOT * OTPtr;							  /* 0x800B73EC */
/* bss */
GsOT OTData[2];						 /* 0x800BA0D8 */
GsOT_TAG MainOrderingTable[2][4096]; /* 0x800BA108 */
u8 D_800C2108[2][96000];			 /* 0x800C2108 */

DR_ENV D_800F0F08;					 /* 0x800F0F08 */
DR_ENV D_800F0F48;					 /* 0x800F0F48 */
GsOT_TAG OrderingTable50[2][50];	 /* 0x800F0F88 */


void func_8001A450(void) {
	return;
}

void func_8001A454(void) {
	RECT sp18;

	SetDispMask(0);
	ResetGraph(0);
	func_800816BC(0);
	GsInitGraph(0x140, 0xF0, 4, 1, 0);
	GsDefDispBuff(0, 0, 0, 0xF0);
	GsInit3D();
	sp18.x = 0;
	sp18.y = 0;
	sp18.w = 0x400;
	sp18.h = 0x200;
	func_8001A778(0, 0, 0);
	ClearImage(&sp18, 0, 0, 0);
	func_800832FC(0xA0, 0x46);
	OTData[0].length = 0xC;
	OTData[1].length = 0xC;
	OTData[0].org = &MainOrderingTable[0][0];
	OTData[1].org = &MainOrderingTable[1][0];
	OTData[0].tag = &MainOrderingTable[0][4095];
	OTData[1].tag = &MainOrderingTable[1][4095];
	OTData[1].point = 0;
	OTData[0].point = 0;
	OTData[1].offset = 0;
	OTData[0].offset = 0;
	D_800B73E4 = 0x640;
}


void func_8001A54C(void) {
	s32 buff;

	buff = GsGetActiveBuff();

	OrderingTable = &OrderingTable50[buff][0];
	OTPtr = &OTData[buff];
	GsSetWorkBase(&D_800C2108[buff][0]);
	ClearOTagR((u32 *)OrderingTable, 0x32);

	MainOTPtr = &MainOrderingTable[buff][0];
	ClearOTagR((u32 *)&MainOrderingTable[buff], 0x1000);

	ActiveBuffer = buff;
	ClearOTag((u32 *)&D_800B73DC, 2);
}


void func_8001A610(void) {
	DRAWENV sp10;
	DRAWENV sp70;
	RECT spD0;
	s16 var_v1;
	DRAWENV * var_v0;
	DRAWENV * var_v1_2;

	GsSwapDispBuff();
	spD0.x = 0;
	spD0.y = ActiveBuffer == 0 ? 0xF0 : 0;
	spD0.w = 0x140;
	spD0.h = 0xF0;
	ClearImage(&spD0, BackgroundR, BackgroundG, BackgroundB);
	GetDrawEnv(&sp10);
	sp70 = sp10;
	sp10.clip.x += 0x10;
	sp10.clip.y += 0x10;
	sp10.clip.w = 0x120;
	sp10.clip.h = 0x78;
	SetDrawEnv(&D_800F0F08, &sp10);
	SetDrawEnv(&D_800F0F48, &sp70);
	AddPrim(&D_800B73DC, &D_800F0F08);
	DrawOTag((u32 *)&D_800B73DC);
	setaddr(&MainOTPtr[70], 0xFFFFFF);
	DrawOTag((u32 *)&MainOTPtr[D_800B73E4]);
	AddPrim(&OrderingTable[0x31], &D_800F0F48);
	DrawOTag((u32 *)&OrderingTable[0x31]);
}


/*
	Set background color.
*/
void func_8001A778(s8 r, s8 g, s8 b) {
	BackgroundR = r;
	BackgroundG = g;
	BackgroundB = b;
}


void func_8001A78C(s16 arg0) {
	D_800B73E4 = arg0;
}


/*
	Initialize sprite data.
*/
void func_8001A798(struct sprite_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetSprt(&arg0->s[i]);
	}
	arg0->x_offset = 0;
	arg0->y_offset = 0;
	arg0->unk60 = 0;
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}


void func_8001A830(struct sprite_data * arg0) {
	SPRT * sprt;
	DR_MODE * dr_mode;

	sprt = &arg0->s[arg0->buffer];
	dr_mode = &arg0->d[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY0(sprt, arg0->x, arg0->y);
	}
	if (!(arg0->flags & 2)) {
		setWH(sprt, arg0->w, arg0->h);
	}
	if (!(arg0->flags & 4)) {
		setUV0(sprt, arg0->u, arg0->v);
	}
	if (!(arg0->flags & 0x10)) {
		sprt->clut = arg0->clut;
	}
	if (!(arg0->flags & 0x20)) {
		if (arg0->unk60 != 0) {
			if (arg0->frame == 0) {
				setXY0(sprt, arg0->x + arg0->x_offset, arg0->y + arg0->y_offset);
			} else {
				setXY0(sprt, arg0->x - arg0->x_offset, arg0->y - arg0->y_offset);
			}
			if (arg0->unk60 != -1) {
				if (arg0->unk60 > 0) {
					arg0->unk60 -= 1;
				}
			}
			arg0->frame ^= 1;
		}
	}
	SetDrawMode(dr_mode, 1, 1, arg0->t_page, 0);
	AddPrim(&OrderingTable[arg0->ot_index], sprt);
	AddPrim(&OrderingTable[arg0->ot_index], dr_mode);
	arg0->buffer ^= 1;
}

void func_8001AA3C(struct sprite_data * arg0, struct sprite_init_data * arg1) {
	s32 i;

	arg0->x = (arg1->x - 0xA0);
	arg0->y = (arg1->y - 0x46);
	for (i = 0; i < 2; i++) {
		SetDrawMode(&arg0->d[i], 1, 1, arg1->tpage, 0);
		setXY0(&arg0->s[i], arg0->x, arg0->y);
		setUV0(&arg0->s[i], arg1->u, arg1->v);
		setWH(&arg0->s[i], arg1->w, arg1->h);
		setRGB0(&arg0->s[i], arg1->r, arg1->g, arg1->b);
		SetSemiTrans(&arg0->s[i], arg1->abe);
		SetShadeTex(&arg0->s[i], arg1->tge);
		arg0->s[i].clut = arg1->clut;
	}
	arg0->u = arg1->u;
	arg0->v = arg1->v;
	arg0->w = arg1->w;
	arg0->h = arg1->h;
	arg0->t_page = arg1->tpage;
	arg0->clut = arg1->clut;
	arg0->ot_index = arg1->ot_index;
}

void func_8001ABAC(struct poly_f4_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyF4(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001AC38(struct poly_f4_data * arg0) {
	POLY_F4 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY4(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(p, arg0->color.r, arg0->color.g, arg0->color.b);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	if (arg0->unk5E != 0) {
		SetDrawMode(&arg0->d[arg0->buffer], 1, 1, GetTPage(0, arg0->tpage, 0, 0), 0);
		AddPrim(&OrderingTable[arg0->ot_index], &arg0->d[arg0->buffer]);
	}
	arg0->buffer ^= 1;
}

void func_8001ADD0(struct poly_f4_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	arg0->x3 = (arg1->x3 - 0xA0);
	arg0->y3 = (arg1->y3 - 0x46);
	for (i = 0; i < 2; i++) {
		SetShadeTex(&arg0->p[i], arg1->tge);
		SetSemiTrans(&arg0->p[i], arg1->abe);
		setXY4(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
	}
	arg0->color.r = arg1->r0;
	arg0->color.g = arg1->g0;
	arg0->color.b = arg1->b0;
	arg0->unk5E = arg1->abe;
	arg0->tpage = arg1->unk30;
	arg0->ot_index = arg1->ot_index;
}

void func_8001AF78(struct poly_ft4_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyFT4(&arg0->p0[i]);
	}
	arg0->brighten_darken = 0;
	arg0->update_p1 = 0;
	arg0->x_offset = 0;
	arg0->y_offset = 0;
	arg0->unkD8 = 0;
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

/* Matched with help from dezgeg */
void func_8001B018(struct poly_ft4_data * arg0) {
	POLY_FT4 * p1;
	POLY_FT4 * p0;

	p0 = &arg0->p0[arg0->buffer];
	p1 = &arg0->p1[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY4(p0, arg0->x0, arg0->y0, arg0->x1, arg0->y1,
			arg0->x2, arg0->y2, arg0->x3, arg0->y3);
		if (arg0->update_p1 > 0) {
			setXY4(p1, arg0->x0, arg0->y0, arg0->x1, arg0->y1,
				arg0->x2, arg0->y2, arg0->x3, arg0->y3);
		}
	}
	if (!(arg0->flags & 4)) {
		setUV4(p0, arg0->u0, arg0->v0, arg0->u1, arg0->v1,
			arg0->u2, arg0->v2, arg0->u3, arg0->v3);
		if (arg0->update_p1 > 0) {
			setUV4(p1, arg0->u0, arg0->v0, arg0->u1, arg0->v1,
				arg0->u2, arg0->v2, arg0->u3, arg0->v3);
		}
	}
	if (!(arg0->flags & 0x10)) {
		p0->clut = arg0->clut;
		if (arg0->update_p1 > 0) {
			p1->clut = arg0->clut;
		}
	}
	if (!(arg0->flags & 0x20)) {
		switch (arg0->brighten_darken) {
		case 1:
			if (arg0->r > 0) {
				arg0->r -= arg0->update_p1;
				arg0->g = arg0->r;
				arg0->b = arg0->r;
			} else {
				arg0->brighten_darken = 0;
			}
			if (arg0->r < 0) {
				arg0->r = 0;
				arg0->g = 0;
				arg0->b = 0;
			}
			break;
		case 2:
			if (arg0->r < 0x80) {
				arg0->r += arg0->update_p1;
				arg0->g = arg0->r;
				arg0->b = arg0->r;
			} else {
				arg0->brighten_darken = 0;
			}
			if (arg0->r >= 0x81) {
				arg0->r = 0x80;
				arg0->g = 0x80;
				arg0->b = 0x80;
			}
			break;
		}
		if (arg0->unkD8 != 0) {
			if (arg0->frame != 0) {
				setXY4(p0, arg0->x0 + arg0->x_offset, arg0->y0 + arg0->y_offset,
					arg0->x1 + arg0->x_offset, arg0->y1 + arg0->y_offset,
					arg0->x2 + arg0->x_offset, arg0->y2 + arg0->y_offset,
					arg0->x3 + arg0->x_offset, arg0->y3 + arg0->y_offset);
				if (arg0->update_p1 > 0) {
					setXY4(p1, arg0->x0 + arg0->x_offset, arg0->y0 + arg0->y_offset,
						arg0->x1 + arg0->x_offset, arg0->y1 + arg0->y_offset,
						arg0->x2 + arg0->x_offset, arg0->y2 + arg0->y_offset,
						arg0->x3 + arg0->x_offset, arg0->y3 + arg0->y_offset);
				}
			} else {
				setXY4(p0, arg0->x0 - arg0->x_offset, arg0->y0 - arg0->y_offset,
					arg0->x1 - arg0->x_offset, arg0->y1 - arg0->y_offset,
					arg0->x2 - arg0->x_offset, arg0->y2 - arg0->y_offset,
					arg0->x3 - arg0->x_offset, arg0->y3 - arg0->y_offset);
				if (arg0->update_p1 > 0) {
					setXY4(p1, arg0->x0 - arg0->x_offset, arg0->y0 - arg0->y_offset,
						arg0->x1 - arg0->x_offset, arg0->y1 - arg0->y_offset,
						arg0->x2 - arg0->x_offset, arg0->y2 - arg0->y_offset,
						arg0->x3 - arg0->x_offset, arg0->y3 - arg0->y_offset);
				}
			}
			if (arg0->unkD8 > 0) {
				arg0->unkD8 -= 1;
			}
			arg0->frame ^= 1;
		}
	}
	if (arg0->r > 0) {
		if (arg0->update_p1 > 0) {
			setRGB0(p0, arg0->r, arg0->g, arg0->b);
			AddPrim(&OrderingTable[arg0->ot_index], p1);
		}
		AddPrim(&OrderingTable[arg0->ot_index], p0);
	}
	arg0->buffer ^= 1;
}

void func_8001B654(struct poly_ft4_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	arg0->x3 = (arg1->x3 - 0xA0);
	arg0->y3 = (arg1->y3 - 0x46);
	for (i = 0; i < 2; i++) {
		SetSemiTrans(&arg0->p0[i], arg1->abe);
		SetShadeTex(&arg0->p0[i], arg1->tge);
		setXY4(&arg0->p0[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
		arg0->p0[i].tpage = arg1->tpage;
		arg0->p0[i].clut = arg1->clut;
	}
	arg0->u0 = arg1->u0;
	arg0->v0 = arg1->v0;
	arg0->u1 = arg1->u1;
	arg0->v1 = arg1->v1;
	arg0->u2 = arg1->u2;
	arg0->v2 = arg1->v2;
	arg0->u3 = arg1->u3;
	arg0->v3 = arg1->v3;
	arg0->r = arg1->r0;
	arg0->g = arg1->g0;
	arg0->b = arg1->b0;
	arg0->tpage = arg1->tpage;
	arg0->clut = arg1->clut;
	arg0->unkC0 = arg1->unk28;
	arg0->unkC2 = arg1->unk2A;
	arg0->ot_index = arg1->ot_index;
}


void func_8001B8EC(struct poly_g4_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyG4(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001B978(struct poly_g4_data * arg0) {
	POLY_G4 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY4(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(p, arg0->r0, arg0->g0, arg0->b0);
		setRGB1(p, arg0->r1, arg0->g1, arg0->b1);
		setRGB2(p, arg0->r2, arg0->g2, arg0->b2);
		setRGB3(p, arg0->r3, arg0->g3, arg0->b3);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	arg0->buffer ^= 1;
}

void func_8001BAEC(struct poly_g4_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	arg0->x3 = (arg1->x3 - 0xA0);
	arg0->y3 = (arg1->y3 - 0x46);
	for (i = 0; i < 2; i++) {
		setXY4(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
		setRGB0(&arg0->p[i], arg1->r0, arg1->g0, arg1->b0);
		setRGB1(&arg0->p[i], arg1->r1, arg1->g1, arg1->b1);
		setRGB2(&arg0->p[i], arg1->r2, arg1->g2, arg1->b2);
		setRGB3(&arg0->p[i], arg1->r2, arg1->g3, arg1->b3); // R2 is used erroneously here.
		SetShadeTex(&arg0->p[i], arg1->tge);
		SetSemiTrans(&arg0->p[i], arg1->abe);
	}
	arg0->r0 = arg1->r0;
	arg0->g0 = arg1->g0;
	arg0->b0 = arg1->b0;
	arg0->r1 = arg1->r1;
	arg0->g1 = arg1->g1;
	arg0->b1 = arg1->b1;
	arg0->r2 = arg1->r2;
	arg0->g2 = arg1->g2;
	arg0->b2 = arg1->b2;
	arg0->r3 = arg1->r3;
	arg0->g3 = arg1->g3;
	arg0->b3 = arg1->b3;
	arg0->ot_index = arg1->ot_index;
}

void func_8001BD58(struct poly_gt4_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyGT4(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001BDE4(struct poly_gt4_data * arg0) {
	POLY_GT4 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY4(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
	}
	if (!(arg0->flags & 4)) {
		setUV4(p, arg0->u0, arg0->v0, arg0->u1, arg0->v1, arg0->u2, arg0->v2, arg0->u3, arg0->v3);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(p, arg0->r0, arg0->g0, arg0->b0);
		setRGB1(p, arg0->r1, arg0->g1, arg0->b1);
		setRGB2(p, arg0->r2, arg0->g2, arg0->b2);
		setRGB3(p, arg0->r3, arg0->g3, arg0->b3);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	arg0->buffer ^= 1;
}

void func_8001BFD4(struct poly_gt4_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	arg0->x3 = (arg1->x3 - 0xA0);
	arg0->y3 = (arg1->y3 - 0x46);
	for (i = 0; i < 2; i++) {
		SetSemiTrans(&arg0->p[i], arg1->abe);
		SetShadeTex(&arg0->p[i], arg1->tge);
		setXY4(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2, arg0->x3, arg0->y3);
		setUV4(&arg0->p[i], arg1->u0, arg1->v0, arg1->u1, arg1->v1, arg1->u2, arg1->v2, arg1->u3, arg1->v3);
		setRGB0(&arg0->p[i], arg1->r0, arg1->g0, arg1->b0);
		setRGB1(&arg0->p[i], arg1->r1, arg1->g1, arg1->b1);
		setRGB2(&arg0->p[i], arg1->r2, arg1->g2, arg1->b2);
		setRGB3(&arg0->p[i], arg1->r3, arg1->g3, arg1->b3);
		arg0->p[i].tpage = arg1->tpage;
		arg0->p[i].clut = arg1->clut;
	}
	arg0->u0 = arg1->u0;
	arg0->v0 = arg1->v0;
	arg0->u1 = arg1->u1;
	arg0->v1 = arg1->v1;
	arg0->u2 = arg1->u2;
	arg0->v2 = arg1->v2;
	arg0->u3 = arg1->u3;
	arg0->v3 = arg1->v3;
	arg0->r0 = arg1->r0;
	arg0->g0 = arg1->g0;
	arg0->b0 = arg1->b0;
	arg0->r1 = arg1->r1;
	arg0->g1 = arg1->g1;
	arg0->b1 = arg1->b1;
	arg0->r2 = arg1->r2;
	arg0->g2 = arg1->g2;
	arg0->b2 = arg1->b2;
	arg0->r3 = arg1->r3;
	arg0->g3 = arg1->g3;
	arg0->b3 = arg1->b3;
	arg0->ot_index = arg1->ot_index;
}

void func_8001C314(struct poly_f3_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyF3(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001C3A0(struct poly_f3_data * arg0) {
	POLY_F3 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY3(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(p, arg0->r, arg0->g, arg0->b);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	arg0->buffer ^= 1;
}

void func_8001C4A4(struct poly_f3_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	for (i = 0; i < 2; i++) {
		SetShadeTex(&arg0->p[i], arg1->tge);
		SetSemiTrans(&arg0->p[i], arg1->abe);
		setXY3(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
		setRGB0(&arg0->p[i], arg1->r0, arg1->g0, arg1->b0);
	}
	arg0->r = arg1->r0;
	arg0->g = arg1->g0;
	arg0->b = arg1->b0;
	arg0->ot_index = arg1->ot_index;
}

void func_8001C5FC(struct poly_ft3_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyFT3(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001C688(struct poly_ft3_data * arg0) {
	POLY_FT3 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY3(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
	}
	if (!(arg0->flags & 4)) {
		setUV3(p, arg0->u0, arg0->v0, arg0->u1, arg0->v1, arg0->u2, arg0->v2);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	arg0->buffer ^= 1;
}

void func_8001C78C(struct poly_ft3_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	for (i = 0; i < 2; i++) {
		SetSemiTrans(&arg0->p[i], arg1->abe);
		SetShadeTex(&arg0->p[i], arg1->tge);
		setXY3(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
		setUV3(&arg0->p[i], arg1->u0, arg1->v0, arg1->u1, arg1->v1, arg1->u2, arg1->v2);
		setRGB0(&arg0->p[i], arg1->r0, arg1->g0, arg1->b0);
		arg0->p[i].tpage = arg1->tpage;
		arg0->p[i].clut = arg1->clut;
	}
	arg0->u0 = arg1->u0;
	arg0->v0 = arg1->v0;
	arg0->u1 = arg1->u1;
	arg0->v1 = arg1->v1;
	arg0->u2 = arg1->u2;
	arg0->v2 = arg1->v2;
	arg0->r = arg1->r0;
	arg0->g = arg1->g0;
	arg0->b = arg1->b0;
	arg0->tpage = arg1->tpage;
	arg0->clut = arg1->clut;
	arg0->ot_index = arg1->ot_index;
}

void func_8001C9A4(struct poly_g3_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyG3(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001CA30(struct poly_g3_data * arg0) {
	POLY_G3 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY3(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(p, arg0->r0, arg0->g0, arg0->b0);
		setRGB1(p, arg0->r1, arg0->g1, arg0->b1);
		setRGB2(p, arg0->r2, arg0->g2, arg0->b2);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	arg0->buffer ^= 1;
}

void func_8001CB68(struct poly_g3_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	for (i = 0; i < 2; i++) {
		setXY3(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
		setRGB0(&arg0->p[i], arg1->r0, arg1->g0, arg1->b0);
		setRGB1(&arg0->p[i], arg1->r1, arg1->g1, arg1->b1);
		setRGB2(&arg0->p[i], arg1->r2, arg1->g2, arg1->b2);
		SetShadeTex(&arg0->p[i], arg1->tge);
		SetSemiTrans(&arg0->p[i], arg1->abe);
	}
	arg0->r0 = arg1->r0;
	arg0->g0 = arg1->g0;
	arg0->b0 = arg1->b0;
	arg0->r1 = arg1->r1;
	arg0->g1 = arg1->g1;
	arg0->b1 = arg1->b1;
	arg0->r2 = arg1->r2;
	arg0->g2 = arg1->g2;
	arg0->b2 = arg1->b2;
	arg0->ot_index = arg1->ot_index;
}

void func_8001CD54(struct poly_gt3_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetPolyGT3(&arg0->p[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001CDE0(struct poly_gt3_data * arg0) {
	POLY_GT3 * p;

	p = &arg0->p[arg0->buffer];
	if (!(arg0->flags & 1)) {
		setXY3(p, arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
	}
	if (!(arg0->flags & 4)) {
		setUV3(p, arg0->u0, arg0->v0, arg0->u1, arg0->v1, arg0->u2, arg0->v2);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(p, arg0->r0, arg0->g0, arg0->b0);
		setRGB1(p, arg0->r1, arg0->g1, arg0->b1);
		setRGB2(p, arg0->r2, arg0->g2, arg0->b2);
	}
	AddPrim(&OrderingTable[arg0->ot_index], p);
	arg0->buffer ^= 1;
}

void func_8001CF74(struct poly_gt3_data * arg0, struct poly_init_data * arg1) {
	s32 i;

	arg0->x0 = (arg1->x0 - 0xA0);
	arg0->y0 = (arg1->y0 - 0x46);
	arg0->x1 = (arg1->x1 - 0xA0);
	arg0->y1 = (arg1->y1 - 0x46);
	arg0->x2 = (arg1->x2 - 0xA0);
	arg0->y2 = (arg1->y2 - 0x46);
	for (i = 0; i < 2; i++) {
		SetSemiTrans(&arg0->p[i], arg1->abe);
		SetShadeTex(&arg0->p[i], arg1->tge);
		setXY3(&arg0->p[i], arg0->x0, arg0->y0, arg0->x1, arg0->y1, arg0->x2, arg0->y2);
		setUV3(&arg0->p[i], arg1->u0, arg1->v0, arg1->u1, arg1->v1, arg1->u2, arg1->v2);
		setRGB0(&arg0->p[i], arg1->r0, arg1->g0, arg1->b0);
		setRGB1(&arg0->p[i], arg1->r1, arg1->g1, arg1->b1);
		setRGB2(&arg0->p[i], arg1->r2, arg1->g2, arg1->b2);
		arg0->p[i].tpage = arg1->tpage;
		arg0->p[i].clut = arg1->clut;
	}
	arg0->u0 = arg1->u0;
	arg0->v0 = arg1->v0;
	arg0->u1 = arg1->u1;
	arg0->v1 = arg1->v1;
	arg0->u2 = arg1->u2;
	arg0->v2 = arg1->v2;
	arg0->r0 = arg1->r0;
	arg0->g0 = arg1->g0;
	arg0->b0 = arg1->b0;
	arg0->r1 = arg1->r1;
	arg0->g1 = arg1->g1;
	arg0->b1 = arg1->b1;
	arg0->r2 = arg1->r2;
	arg0->g2 = arg1->g2;
	arg0->b2 = arg1->b2;
	arg0->ot_index = arg1->ot_index;
}

void func_8001D204(struct line_f2_data * arg0) {
	s32 i;

	for (i = 0; i < 2; i++) {
		SetLineF2(&arg0->l[i]);
	}
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001D290(struct line_f2_data * arg0) {
	LINE_F2 * l;

	l = &arg0->l[arg0->buffer];
	if (!(arg0->flags & 2)) {
		setXY2(l, arg0->x, arg0->y, (arg0->x + arg0->len) - 1, arg0->y);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(l, arg0->color.r, arg0->color.g, arg0->color.b);
	}
	AddPrim(&OrderingTable[arg0->ot_index], l);
	arg0->buffer ^= 1;
}

void func_8001D364(struct line_f2_data * arg0, struct line_init_data * arg1) {
	s32 i;

	for (i = 0; i < 2; i++) {
		setXY2(&arg0->l[i], arg1->x, arg1->y, (arg1->x + arg1->len) - 1, arg1->y);
		setRGB0(&arg0->l[i], arg1->r, arg1->g, arg1->b);
	}
	arg0->x = (arg1->x - 0xA0);
	arg0->y = (arg1->y - 0x46);
	arg0->len = arg1->len;
	arg0->ot_index = arg1->ot_index;
	arg0->color.r = arg1->r;
	arg0->color.g = arg1->g;
	arg0->color.b = arg1->b;
}

void func_8001D440(s32 arg0, s16 * arg1) {
	arg1[0] = (arg0 & 0xF) * 0x40;
	arg1[1] = (arg0 & 0x10) * 0x10;
}

void func_8001D45C(u32 arg0, s16 * arg1) {
	arg1[0] = ((arg0 & 0x3F) * 0x10);
	arg1[1] = ((arg0 & 0x7FC0) / 0x40);
}

void AddDrawMode(s32 dfe, s32 dtd, s32 tpage, RECT * tw, s32 ot_index, DR_MODE * p) {
	setDrawMode(p, dfe, dtd, tpage, tw);
	AddPrim(&OrderingTable[ot_index], p);
}

void AddSprt(s16 x, s16 y, s16 w, s16 h, u8 u, u8 v, u32 color, u16 clut, s32 ot_index, SPRT * p) {
	setSprt(p);
	setXY0(p, x - 0xA0, y - 0x46);
	setUV0(p, u, v);
	setRGB0FromU32(p, color);
	setWH(p, w, h);
	p->clut = clut;
	AddPrim(&OrderingTable[ot_index], p);
}

void AddSprt8(s16 x, s16 y, u8 u, u8 v, u32 color, u16 clut, s32 ot_index, SPRT_8 * p) {
	setSprt8(p);
	setXY0(p, x - 0xA0, y - 0x46);
	setUV0(p, u, v);
	setRGB0FromU32(p, color);
	p->clut = clut;
	AddPrim(&OrderingTable[ot_index], p);
}

void AddSprt16(s16 x, s16 y, u8 u, u8 v, u32 color, u16 clut, s32 ot_index, SPRT_16 * p) {
	setSprt16(p);
	setXY0(p, x - 0xA0, y - 0x46);
	setUV0(p, u, v);
	setRGB0FromU32(p, color);
	p->clut = clut;
	AddPrim(&OrderingTable[ot_index], p);
}

void AddLineF2(s16 * x, s16 * y, u32 color, s32 ot_index, LINE_F2 * p) {
	setLineF2(p);
	setXY2(p, x[0] - 0xA0, y[0] - 0x46, x[1] - 0xA0, y[1] - 0x46);
	setRGB0FromU32(p, color);
	AddPrim(&OrderingTable[ot_index], p);
}

void func_8001D754(u16 * arg0, u16 * arg1, s32 arg2, s32 arg3, s32 arg4, POLY_F4 * arg5) {
	s16 * temp_t0;
	s16 * var_t0;
	s32 temp_a3;
	s32 var_t1;
	u16 temp_v0;
	u16 temp_v0_2;
	u16 * var_a0;
	u16 * var_a1;

	var_a0 = arg0;
	var_a1 = arg1;
	var_t0 = &arg5->x0;
	*((s8 *)&arg5->tag + 3) = arg2 + 2;
	temp_a3 = (arg3 & 0xFFFFFF) | 0x4C000000;
	memcpy(&arg5->r0, &temp_a3, 4);
	for (var_t1 = 0; var_t1 < arg2; var_t1++) {
		*var_t0 = *var_a0 - 0xA0;
		var_t0++;
		*var_t0 = *var_a1 - 0x46;
		var_t0++;
		var_a0++;
		var_a1++;
	}
	*(u32 *)var_t0 = 0x55555555;
	AddPrim(&OrderingTable[arg4], arg5);
}

void AddPolyF4(s16 x, s16 y, s16 w, s16 h, u32 color, s32 ot_index, POLY_F4 * p) {
	setPolyF4(p);
	setXYWH(p, x - 0xA0, y - 0x46, w, h);
	setRGB0FromU32(p, color);
	AddPrim(&OrderingTable[ot_index], p);
}

void AddPolyG4(s16 x, s16 y, s16 w, s16 h, u32 * color, s32 ot_index, POLY_G4 * p) {
	setPolyG4(p);
	setXYWH(p, x - 0xA0, y - 0x46, w, h);
	setRGB0FromU32(p, color[0]);
	setRGB1FromU32(p, color[1]);
	setRGB2FromU32(p, color[2]);
	setRGB3FromU32(p, color[3]);
	AddPrim(&OrderingTable[ot_index], p);
}

void AddPolyFT4(s16 x, s16 y, s16 w, s16 h, u8 u, u8 v, s8 tw, s8 th, u32 color, s16 tpage, s16 clut, s32 ot_index, POLY_FT4 * p) {
	setPolyFT4(p);
	setXYWH(p, x - 0xA0, y - 0x46, w, h);
	setRGB0FromU32(p, color);
	setUVWH(p, u, v, tw, th);
	p->tpage = tpage;
	p->clut = clut;
	AddPrim(&OrderingTable[ot_index], p);
}

void FlipPolyFT4H(POLY_FT4 * arg0) {
	s16 x0;
	s16 x2;

	x0 = arg0->x0;
	x2 = arg0->x2;
	arg0->x0 = arg0->x1;
	arg0->x2 = arg0->x3;
	arg0->x1 = x0;
	arg0->x3 = x2;
}

void FlipPolyFT4V(POLY_FT4 * arg0) {
	s16 y0;
	s16 y1;

	y0 = arg0->y0;
	y1 = arg0->y1;
	arg0->y0 = arg0->y2;
	arg0->y1 = arg0->y3;
	arg0->y2 = y0;
	arg0->y3 = y1;
}

void func_8001DAEC(s32 arg0, s32 arg1, s8 arg2, s32 arg3, POLY_FT4 * arg4) {
	s16 temp_a0;
	s16 temp_t1;
	s16 temp_v1;
	s16 temp_v1_3;
	s32 temp_a0_2;
	s32 temp_a1;
	s32 temp_a1_2;
	u8 temp_a2;
	s32 temp_v1_2;

	temp_a0 = arg4->x1 - arg4->x0;
	temp_v1 = arg4->x3 - arg4->x2;
	temp_a2 = arg2 & 0x7F;
	switch (temp_a2) { /* irregular */
	case 0:
		arg4->x1 = (arg4->x0 + ((temp_a0 * arg0) >> 0xC));
		arg4->x3 = (arg4->x2 + ((temp_v1 * arg0) >> 0xC));
		break;
	case 2:
		arg4->x0 = (arg4->x1 - ((temp_a0 * arg0) >> 0xC));
		arg4->x2 = (arg4->x3 - ((temp_v1 * arg0) >> 0xC));
		break;
	default:
		temp_v1_2 = (temp_a0 - ((temp_a0 * arg0) >> 0xC)) >> 1;
		temp_a1 = (temp_v1 - ((temp_v1 * arg0) >> 0xC)) >> 1;
		arg4->x0 += temp_v1_2;
		arg4->x1 -= temp_v1_2;
		arg4->x2 += temp_a1;
		arg4->x3 -= temp_a1;
		break;
	}
	if ((arg0 >= 0x1800) && (arg2 & 0x80)) {
		arg4->u1 -= 1;
		arg4->u3 -= 1;
	}
	temp_t1 = arg4->y2 - arg4->y0;
	temp_v1_3 = arg4->y3 - arg4->y1;
	temp_a2 = arg3 & 0x7F;
	switch (temp_a2) { /* switch 1; irregular */
	case 0:			   /* switch 1 */
		arg4->y2 = (arg4->y0 + ((temp_t1 * arg1) >> 0xC));
		arg4->y3 = (arg4->y1 + ((temp_v1_3 * arg1) >> 0xC));
		break;
	case 2:			   /* switch 1 */
		arg4->y0 = (arg4->y2 - ((temp_t1 * arg1) >> 0xC));
		arg4->y1 = (arg4->y3 - ((temp_v1_3 * arg1) >> 0xC));
		break;
	default:		   /* switch 1 */
		temp_a1_2 = (temp_t1 - ((temp_t1 * arg1) >> 0xC)) >> 1;
		temp_a0_2 = (temp_v1_3 - ((temp_v1_3 * arg1) >> 0xC)) >> 1;
		arg4->y0 += temp_a1_2;
		arg4->y1 += temp_a0_2;
		arg4->y2 -= temp_a1_2;
		arg4->y3 -= temp_a0_2;
		break;
	}
	if ((arg1 >= 0x1800) && (arg3 & 0x80)) {
		arg4->v2 -= 1;
		arg4->v3 -= 1;
	}
}

void func_8001DD90(s32 zr, s32 xr, s16 xt, s16 yt, POLY_FT4 * arg4) {
	SVECTOR sp10[4];
	SVECTOR sp30[4];
	MATRIX sp50;
	s32 sp70;
	SVECTOR * var_s4;
	s32 temp_s0;
	s32 temp_s1;
	s32 i;
	SVECTOR * var_s5;

	sp50 = D_801112F8;
	RotMatrixZ(zr & 0xFFF, &sp50);
	RotMatrixX(xr & 0xFFF, &sp50);
	SetRotMatrix(&sp50);
	temp_s1 = (arg4->x1 - arg4->x0) >> 1;
	temp_s0 = (arg4->y2 - arg4->y0) >> 1;
	sp50.t[0] = arg4->x0 + temp_s1 + xt;
	sp50.t[1] = arg4->y0 + temp_s0 + yt;
	SetTransMatrix(&sp50);
	sp10[0].vx = -temp_s1;
	sp10[0].vy = -temp_s0;
	sp10[0].vz = 0;
	sp10[1].vx = temp_s1;
	sp10[1].vy = -temp_s0;
	sp10[1].vz = 0;
	sp10[2].vx = -temp_s1;
	sp10[2].vy = temp_s0;
	sp10[2].vz = 0;
	sp10[3].vx = temp_s1;
	sp10[3].vy = temp_s0;
	sp10[3].vz = 0;
	for (i = 0; i < 4; i++) {
		RotTransSV(&sp10[i], &sp30[i], &sp70);
	}
	arg4->x0 = sp30[0].vx;
	arg4->y0 = sp30[0].vy;
	arg4->x1 = sp30[1].vx;
	arg4->y1 = sp30[1].vy;
	arg4->x2 = sp30[2].vx;
	arg4->y2 = sp30[2].vy;
	arg4->x3 = sp30[3].vx;
	arg4->y3 = sp30[3].vy;
}

struct texture_data GetTextureInitData(s32 arg1) {
	struct texture_data sp0;

	memcpy(&sp0, &D_8009FC70[arg1], 0xC);
	return sp0;
}

struct object * func_8001E004(s16 tid, s16 x, s16 y, s16 ot_index, s32 arg4) {
	struct sprite_init_data sp18;
	struct texture_data sp30;
	u16 var_a1;
	struct object * temp_v0;

	temp_v0 = CreateObject(0, 0, FirstObjectPtrPtr->first, arg4, 1, sizeof(struct sprite_data));
	if (temp_v0 == NULL) return NULL;
	sp30 = GetTextureInitData(tid);
	sp18.x = x;
	sp18.y = y;
	sp18.w = sp30.w;
	sp18.h = sp30.h;
	if (sp30.unkA == -1) {
		sp18.abe = 0;
		var_a1 = 0;
	} else {
		sp18.abe = 1;
		var_a1 = sp30.unkA;
	}
	sp18.tge = 1;
	sp18.b = 0x80;
	sp18.g = 0x80;
	sp18.r = 0x80;
	sp18.u = sp30.u;
	sp18.v = sp30.v;
	sp18.ot_index = ot_index;
	sp18.tpage = getTPage(0, var_a1, 0x2C0 - (sp30.unk6 << 6), 0x100);
	sp18.clut = ((((sp30.unk8) >> 0x4) + 0x1E0) << 6) | (sp30.unk8 & 0xF);
	func_8001AA3C(temp_v0->data, &sp18);
	return temp_v0;
}

void func_8001E16C(struct sprite_data * arg0) {
	s32 i;

	for (i = 0; i < 0x1C; i++) {
		func_8001A798(&arg0[i]);
		arg0[i].buffer = 0;
	}
}

void func_8001E1B4(struct box_data * arg0) {
	s32 var_s4;

	for (var_s4 = 0; var_s4 < 2; var_s4++) {
		func_80095A9C(&arg0->l0[var_s4]);
		func_80095A9C(&arg0->l1[var_s4]);
		func_80095A9C(&arg0->l2[var_s4]);
		func_80095A9C(&arg0->l3[var_s4]);
	}
	arg0->unk90 = 0;
	arg0->unk92 = 0;
	arg0->unk94 = 0;
	arg0->buffer = 0;
	arg0->flags &= -2;
	arg0->flags &= -3;
	arg0->flags &= -5;
	arg0->flags &= -9;
	arg0->flags &= -0x11;
	arg0->flags &= -0x21;
}

void func_8001E294(struct box_data * arg0) {
	s16 temp_v1;
	LINE_F2 * l0;
	LINE_F2 * l1;
	LINE_F2 * l2;
	LINE_F2 * l3;

	l0 = &arg0->l0[arg0->buffer];
	l1 = &arg0->l1[arg0->buffer];
	l2 = &arg0->l2[arg0->buffer];
	l3 = &arg0->l3[arg0->buffer];

	if (!(arg0->flags & 2)) {
		setXY2(l0, arg0->x, arg0->y, (arg0->x + arg0->w) - 1, arg0->y);
		setXY2(l1, (arg0->x + arg0->w) - 1, arg0->y, (arg0->x + arg0->w) - 1, (arg0->y + arg0->h) - 1);
		setXY2(l2, arg0->x, (arg0->y + arg0->h) - 1, (arg0->x + arg0->w) - 1, (arg0->y + arg0->h) - 1);
		setXY2(l3, arg0->x, arg0->y, arg0->x, (arg0->y + arg0->h) - 1);
	}
	if (!(arg0->flags & 8)) {
		setRGB0(l0, arg0->r, arg0->g, arg0->b);
		setRGB0(l1, arg0->r, arg0->g, arg0->b);
		setRGB0(l2, arg0->r, arg0->g, arg0->b);
		setRGB0(l3, arg0->r, arg0->g, arg0->b);
	}
	temp_v1 = arg0->unk94;
	if (temp_v1 != 0) {
		if (temp_v1 != -1) {
			if (temp_v1 > 0) {
				arg0->unk94 -= 1;
			}
		}
		arg0->unk96 ^= 1;
	}
	AddPrim(&OrderingTable[arg0->ot_index], l0);
	AddPrim(&OrderingTable[arg0->ot_index], l1);
	AddPrim(&OrderingTable[arg0->ot_index], l2);
	AddPrim(&OrderingTable[arg0->ot_index], l3);
	arg0->buffer ^= 1;
}

void func_8001E578(struct filled_box_data * arg0, struct box_init_data * arg1) {
	s32 i;
	LINE_F2 * l3;
	LINE_F2 * l2;
	LINE_F2 * l1;
	LINE_F2 * l0;


	for (i = 0; i < 2; i++) {
		l0 = &arg0->b.l0[i];
		setXY2(l0, arg1->x - 0xA0, arg1->y - 0x46, (arg1->x + arg1->w) - 0xA0, arg1->y - 0x46);
		l1 = l0 + 2;
		setXY2(l1, (arg1->x + arg1->w) - 0xA0, arg1->y - 0x46, (arg1->x + arg1->w) - 0xA0, (arg1->y + arg1->h) - 0x46);
		l2 = l0 + 4;
		setXY2(l2, arg1->x - 0xA0, (arg1->y + arg1->h) - 0x46, (arg1->x + arg1->w) - 0xA0, (arg1->y + arg1->h) - 0x46);
		l3 = l0 + 6;
		setXY2(l3, arg1->x - 0xA0, arg1->y - 0x46, arg1->x - 0xA0, (arg1->y + arg1->h) - 0x46);
		setRGB0(l0, arg1->r0, arg1->g0, arg1->b0);
		setRGB0(l1, arg1->r0, arg1->g0, arg1->b0);
		setRGB0(l2, arg1->r0, arg1->g0, arg1->b0);
		setRGB0(l3, arg1->r0, arg1->g0, arg1->b0);
	}
	arg0->b.x = (arg1->x - 0xA0);
	arg0->b.y = (arg1->y - 0x46);
	arg0->b.w = arg1->w;
	arg0->b.h = arg1->h;
	arg0->b.ot_index = arg1->ot_index;
	arg0->b.r = arg1->r0;
	arg0->b.g = arg1->g0;
	arg0->b.b = arg1->b0;
}


/*
	Procedure function for a filled box object.
*/
void FilledBoxProc(struct object * self) {
	struct filled_box_data * data;

	data = self->data;
	if (self->initialized > 0) {
		if (!(data->unk118 & 0x10)) {
			data->b.x = (data->x - 160);
			data->b.y = (data->y - 70);
			data->b.w = data->w;
			data->b.h = data->h;
			func_8001E294(&data->b);
		}
		if (data->unk118 & 1) {		   // The polygon is a POLY_F4.
			setXYWH(&data->p.f, data->x - 160, data->y - 70, data->w, data->h);
			func_8001AC38(&data->p.f);
		} else if (data->unk118 & 2) { // The polygon is a POLY_G4.
			setXYWH(&data->p.g, data->x - 160, data->y - 70, data->w, data->h);
			func_8001B978(&data->p.g);
		}
		AddDrawMode(0, 1, getTPage(0, data->abr, 0, 0) | 0x1B, 0, data->ot_index, &data->unk128[data->buffer]);
		data->buffer ^= 1;
	}
}

struct object * func_8001E9BC(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u32 arg4, u32 arg5, u32 arg6, u32 arg7, u32 arg8, s16 arg9, s16 argA, s32 argB, s32 argC) {
	struct box_init_data sp18;
	struct poly_init_data sp28;
	struct filled_box_data * temp_s0;
	struct object * temp_v0;

	temp_v0 = CreateObject(FilledBoxProc, 0, FirstObjectPtrPtr->first, argB, 0, sizeof(struct filled_box_data));
	if (temp_v0 == 0) return 0;
	temp_s0 = temp_v0->data;
	if ((arg9 & 0x10) == 0) {
		func_8001E1B4(&temp_s0->b);
	}
	if (arg9 & 1) {
		func_8001ABAC(&temp_s0->p.f);
	} else if (arg9 & 2) {
		func_8001B8EC(&temp_s0->p.g);
	}
	temp_s0->x = arg0;
	temp_s0->y = arg1;
	temp_s0->w = arg2;
	temp_s0->h = arg3;
	temp_s0->buffer = 0;
	if (!(arg9 & 0x10)) {
		sp18.x = temp_s0->x;
		sp18.y = temp_s0->y;
		sp18.w = temp_s0->w;
		sp18.h = temp_s0->h;
		setRGB0Froms32(&sp18, arg4);
		sp18.ot_index = argC;
		func_8001E578(temp_s0, &sp18);
	}
	setXYWH(&sp28, temp_s0->x, temp_s0->y, temp_s0->w, temp_s0->h);
	setRGB0FromU32(&sp28, arg5);
	if (arg9 & 2) {
		setRGB1FromU32(&sp28, arg6);
		setRGB2FromU32(&sp28, arg7);
		setRGB3FromU32(&sp28, arg8);
	}
	if (argA != -1) {
		sp28.abe = 1;
		sp28.unk30 = argA;
		temp_s0->abr = argA;
	} else {
		sp28.abe = 0;
		sp28.unk30 = 0;
		temp_s0->abr = 0U;
	}

	sp28.tge = 1;
	sp28.ot_index = argC;

	if (arg9 & 1) {
		func_8001ADD0(&temp_s0->p.f, &sp28);
	} else if (arg9 & 2) {
		func_8001BAEC(&temp_s0->p.g, &sp28);
	}
	temp_s0->unk118 = arg9;
	temp_s0->ot_index = argC;
	return temp_v0;
}
