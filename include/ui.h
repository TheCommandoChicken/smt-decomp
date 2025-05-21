#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libgs.h"
#include "object.h"
#include "common.h"

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

struct unk_data_23 {
	LINE_F2 l[2];
	u8 buffer;
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

void func_8001F984(s16, s16, s16, s16, u32, u32, s32, u8, s32);

extern struct object_ptrs * FirstObjectPtrPtr;
extern GsOT_TAG * OrderingTable;
