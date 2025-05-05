#include "sys/types.h"
#include "libgte.h"
#include "libgpu.h"
#include "object.h"
#include "common.h"

struct unk_data_31 {
    u8 u, v;
    u8 unk2;
    u8 unk3;
    s16 unk4;
    s16 unk6;
    s16 w, h;
    s16 unkC;
    s16 unkE;
};

struct unk_data_32 {
    s32 unk0;
    struct unk_data_31 unk4[100];
};

struct thingy {
	s16 anim_frame;
    s16 game_frame;
    s16 unk4;
    s16 unk6;
	s16 * unk8;
	s16 * unkC;
	s16 * unk10;
	struct unk_data_32 * unk14;
};

struct whatever_this_is {
	u32 data;
	void * unk4;
	s16 sect;
	s16 unkA;
	TIM_IMAGE unkC;
};

struct battle_animation {
    POLY_FT4 unk0[2][10];
    struct thingy unk320;
    s16 x, y;
    u16 t_page;
    u16 clut;
    u8 img;
    u8 unk341;
    u8 unk342;
    u8 unk343;
    u8 unk344;
    u8 unk345;
    u8 buffer;
};

void func_8001F25C(struct object *);
void func_8001F35C(struct object *);
void func_8001F388(struct battle_animation *, TIM_IMAGE *);
void func_8001F3FC(struct battle_animation *);

extern struct object_ptrs * FirstObjectPtrPtr;