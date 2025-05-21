#include "overlay.h"

struct object * ScreenOverlay;

struct object * func_8001F5EC(void) {
	struct object * temp_v0;
	struct screen_overlay * temp_v1;

	temp_v0 = CreateObject(func_8001FA28, 0, FirstObjectPtrPtr->first, 0xE9000000, 0, sizeof(struct screen_overlay));
	ScreenOverlay = temp_v0;
	if (temp_v0 == NULL) return NULL;
	temp_v1 = temp_v0->data;
	temp_v1->buffer = 0;
	temp_v1->animating = 2;
	func_80018410(ScreenOverlay, 0);
	return ScreenOverlay;
}

void func_8001F668(void) {
	func_8001F984(0, 0, 0x140, 0xF0, -1, 0, 2, 0xC, 1);
}

void func_8001F6B8(void) {
	func_8001F984(0, 0, 0x140, 0xF0, 0, -1, 2, 0xC, 1);
}

void func_8001F708(u8 arg0) {
	func_8001F984(0, 0, 0x140, 0xF0, -1, 0, 1, arg0, 1);
}

void func_8001F754(u8 arg0) {
	func_8001F984(0, 0, 0x140, 0xF0, 0, -1, 1, arg0, 1);
}

void func_8001F7A0(s32 arg0, u8 arg1) {
	RECT sp28[2] = {
		{0, 0, 0x140, 0xF0},
		{16, 16, 0x120, 0x78}};
	RECT * temp_v0;

	temp_v0 = &sp28[arg0];
	func_8001F984(temp_v0->x, temp_v0->y, temp_v0->w, temp_v0->h, -1, 0, 2, arg1, 1);
}

void func_8001F860(s32 arg0, u8 arg1) {
    RECT sp28[2] = {
		{0, 0, 0x140, 0xF0},
		{16, 16, 0x120, 0x78}};
	RECT * temp_v0;

	temp_v0 = &sp28[arg0];
    func_8001F984(temp_v0->x, temp_v0->y, temp_v0->w, temp_v0->h, 0, -1, 2, arg1, 1);
}

u8 func_8001F920(void) {
    return ((struct screen_overlay *)ScreenOverlay->data)->animating;
}

s32 func_8001F93C(void) {
    s32 var_v0;

    if (func_8001F920() == 2) {
        if (ScreenOverlay->hidden == 1) {
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}

void func_8001F984(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u32 arg4, u32 arg5, s32 arg6, u8 arg7, s32 arg8) {
    u32 temp_v0;
    struct screen_overlay * temp_s0;

    temp_s0 = ScreenOverlay->data;
    temp_s0->x = arg0;
    temp_s0->y = arg1;
    temp_s0->w = arg2;
    temp_s0->h = arg3;
    temp_v0 = func_8001FD3C(&temp_s0->color_anim, arg4, arg5, arg7, 1);
    temp_s0->size = arg8;
    temp_s0->t_page = arg6;
    temp_s0->animating = ((arg5 < arg4) ^ 1);
    memcpy(&temp_s0->color, &temp_v0, 4);
    func_80018448(ScreenOverlay);
}
