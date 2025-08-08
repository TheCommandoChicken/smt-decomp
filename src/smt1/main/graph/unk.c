#include "unk.h"
#include "lib/memory.h"
#include "lib/libapi.h"

struct whatever_this_is D_800A0504[4] = {
	{0, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, -1, 0, 0, 0, 0, 0, 0},
	{0, 0, -1, 0, 0, 0, 0, 0, 0}};
RECT D_800A0584[2] = {
	{0, 0x1EA, 0, 0},
	{0, 0x1EA, 0, 0}};
RECT D_800A0594[2] = {
	{0x340, 0, 0, 0},
	{0x280, 256, 0, 0}};

void func_8001ECB0(s16 * arg0, struct thingy * arg1) {
	s16 * temp_v1_2;

	arg1->anim_frame = 0;
	arg1->game_frame = 0;
	arg1->unk4 = arg0[0];
	arg1->unk6 = arg0[1];
	temp_v1_2 = &arg0[2];
	arg1->unk10 = temp_v1_2;
	arg1->unk8 = temp_v1_2;
	temp_v1_2 = &arg0[16];
	arg1->unk14 = temp_v1_2;
	arg1->unkC = temp_v1_2;
}

s32 func_8001ECE8(struct thingy * arg0) {
	if (arg0->unk4 <= arg0->anim_frame) {
		arg0->anim_frame = 0;
		arg0->unk10 = arg0->unk8;
		arg0->unk14 = arg0->unkC;
		return 0;
	} else {
		return 1;
	}
}

void func_8001ED24(struct thingy * arg0) {
	if (arg0->game_frame >= (arg0->unk10[0] - 1)) {
		arg0->game_frame = 0;
		arg0->anim_frame++;
		arg0->unk10++;
		arg0->unk14 = (arg0->unk14 + 0x29);
		return;
	}
	arg0->game_frame += 1;
}

s16 * func_8001ED7C(s32 arg0) {
	return D_800A0504[arg0].unk4;
}

s32 func_8001ED98(s32 arg0) {
	s32 temp_v1;

	temp_v1 = D_800A0504[arg0].sect;
	if (temp_v1 > 15 && temp_v1 <= 20) {
		return 0;
	} else if (temp_v1 > 20 && temp_v1 <= 23) {
		return 1;
	} else if (temp_v1 > 44 && temp_v1 <= 46) {
		return 2;
	} else if (temp_v1 > 0x1EB && temp_v1 < 0x26C) {
		return 2;
	} else if (temp_v1 > 0x3FA && temp_v1 < 0x4CB) {
		return 2;
	} else {
		return 3;
	}
}

void func_8001EE1C(u8 arg0) {
	struct whatever_this_is * temp_s0;

	temp_s0 = &D_800A0504[arg0];
	temp_s0->unkA -= 1;
	if (temp_s0->unkA <= 0) {
		func_80019478(temp_s0->unk4);
		temp_s0->unk4 = 0;
		temp_s0->data = 0;
		temp_s0->sect = -1;
		bzero((u8 *)&temp_s0->unkC, sizeof(TIM_IMAGE));
	}
}

s32 func_8001EE8C(s32 sect) {
	s32 var_s1;
	s32 var_s1_2;
	struct whatever_this_is * var_s0;

	var_s0 = &D_800A0504[0];
	for (var_s1 = 0; var_s1 < 4; var_s1++) {
		if (sect == var_s0->sect) {
			var_s0->data = 0;
			var_s0->unkA += 1;
			return var_s1;
		}
		var_s0++;
	}
	var_s0 = &D_800A0504[0];
	for (var_s1 = 0; var_s1 < 4; var_s1++) {
		if (var_s0->sect == -1) {
			var_s0->data = func_80019C58(0, 0, sect, &var_s0->unk4, 0, 3);
			var_s0->sect = sect;
			var_s0->unkA = 1;
			return var_s1;
		}
		var_s0++;
	}
	return 0xFF;
}

/* 92.48% */
TIM_IMAGE * func_8001EF80(s32 arg0) {
	s32 temp_a0;
	s32 temp_s0_2;
	s32 temp_v0;
	s32 temp_v0_2;
	u32 temp_s0;
	u32 temp_s4;
	u32 * temp_a0_2;
	TIM_IMAGE * temp_s2;
	struct whatever_this_is * temp_s3;
	RECT * temp_v0_3;
	u32 * temp_v0_4;
	TIM_IMAGE * var_v0;

	temp_s3 = &D_800A0504[arg0];
	temp_a0 = temp_s3->data;
	if (temp_a0 == 0) {
		var_v0 = &temp_s3->unkC;
	} else if (func_80019ECC(temp_a0) == 0) {
		var_v0 = 0;
	} else {
		temp_v0 = func_8001ED98(arg0);
		var_v0 = &temp_s3->unkC;
		switch (temp_v0) {
		case 3:
			var_v0 = 0;
			break;
		case 0:
		case 1:
			temp_s3->unkC.mode = 0;
			var_v0->crect = &D_800A0584[temp_v0];
			var_v0->prect = &D_800A0594[temp_v0];
			break;
		case 2:
			temp_s4 = ((s32 *)temp_s3->unk4)[0] >> 2;
			temp_s0 = ((s32 *)temp_s3->unk4)[1] >> 2;
			OpenTIM(&temp_s3->unk4[temp_s0]);
			ReadTIM(var_v0);
			LoadImage(var_v0->prect, var_v0->paddr);
			if ((temp_s3->unkC.mode >> 3) & 1) {
				temp_v0_3 = var_v0->crect;
				var_v0->crect->w = (temp_v0_3->w * temp_v0_3->h);
				var_v0->crect->h = 1;
				LoadImage(var_v0->crect, var_v0->caddr);
			}
			DrawSync(0);
			temp_s0_2 = (temp_s0 - temp_s4) * 4;
			temp_v0_4 = (u32 *)func_800193C0(temp_s0_2);
			memcpy(temp_v0_4, &temp_s3->unk4[temp_s4], temp_s0_2);
			func_80019478(temp_s3->unk4);
			temp_s3->unk4 = temp_v0_4;
			break;
		default:
			break;
		}
	}
	return var_v0;
}

u8 func_8001F134(struct object * arg0) {
	return ((struct battle_animation *)arg0->data)->unk341;
}

void func_8001F148(struct object * arg0, s32 arg1, s32 arg2) {
	struct battle_animation * temp_v0;

	temp_v0 = arg0->data;
	temp_v0->unk342 = arg1;
	temp_v0->unk343 = arg2;
}


void func_8001F15C(struct object * arg0, s16 arg1, s16 arg2) {
	struct battle_animation * temp_v0;

	temp_v0 = arg0->data;
	temp_v0->x = arg1;
	temp_v0->y = arg2;
}

void func_8001F170(struct object * arg0, s8 arg1) {
	((struct battle_animation *)arg0->data)->unk344 = arg1;
}

struct object * func_8001F17C(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
	u8 temp_v0_2;
	struct battle_animation * temp_s0;
	struct object * temp_v0;

	temp_v0 = CreateObject(func_8001F25C, func_8001F35C, FirstObjectPtrPtr->first, arg4, 0, sizeof(struct battle_animation));
	temp_s0 = temp_v0->data;
	temp_s0->unk342 = 3;
	temp_s0->unk343 = 3;
	temp_s0->x = arg1;
	temp_s0->y = arg2;
	temp_s0->unk341 = 0;
	temp_s0->unk344 = 0xFF;
	temp_s0->unk345 = arg3;
	temp_s0->buffer = 0;
	temp_s0->img = func_8001EE8C(arg0);
	if (temp_s0->img == 0xFF) {
		func_8001830C(temp_v0);
		temp_v0 = 0;
	}
	return temp_v0;
}

void func_8001F25C(struct object * arg0) {
	TIM_IMAGE * temp_v0;
	u8 temp_a0;
	u8 temp_v1;
	struct battle_animation * temp_s0;
	void * var_s1;

	temp_s0 = arg0->data;
	switch (temp_s0->unk341) {
	case 0:
		temp_v0 = func_8001EF80(temp_s0->img);
		if (temp_v0 != NULL) {
			func_8001F388(temp_s0, temp_v0);
			break;
		}
		return;
	case 1:
		var_s1 = &temp_s0->unk320;
		if (func_8001ECE8(var_s1) != 1) {
			break;
		}
		func_8001F3FC(temp_s0);
		if (temp_s0->unk320.anim_frame != temp_s0->unk344) {
			func_8001ED24(var_s1);
			return;
		}
		return;
	case 2:
		var_s1 = &temp_s0->unk320;
		func_8001ECE8(var_s1);
		func_8001F3FC(temp_s0);
		if (temp_s0->unk320.anim_frame != temp_s0->unk344) {
			func_8001ED24(var_s1);
			return;
		}
		return;
	case 4:
		RemoveObject(arg0);
		return;
	case 3:
		break;
	}
	temp_s0->unk341 = temp_s0->unk342;
	temp_s0->unk342 = temp_s0->unk343;
	temp_s0->unk343 = 3;
}

void func_8001F35C(struct object * arg0) {
	func_8001EE1C(((struct battle_animation *)arg0->data)->img);
}

void func_8001F388(struct battle_animation * arg0, TIM_IMAGE * arg1) {
	RECT * temp_v0;

	temp_v0 = arg1->prect;
	arg0->t_page = GetTPage(arg1->mode & 7, 0, temp_v0->x, temp_v0->y);
	arg0->clut = getClut(0, arg1->crect->y);
	func_8001ECB0(func_8001ED7C(arg0->img), &arg0->unk320);
}

void func_8001F3FC(struct battle_animation * arg0) {
	s16 var_a0;
	s16 var_a1;
	s32 var_s4;
	struct unk_data_32 * temp_s6;
	u8 * var_s2;
	u8 * var_s5;
	struct unk_data_31 * var_s0;
	POLY_FT4 * var_s1;

	temp_s6 = arg0->unk320.unk14;
	var_s1 = &arg0->unk0[arg0->buffer][0];
	var_s0 = &arg0->unk320.unk14->unk4;
	for (var_s4 = 0; var_s4 < temp_s6->unk0; var_s4++) {
		s16 temp1 = (arg0->t_page | var_s0->unk6);
		s16 temp2 = ((arg0->x + var_s0->unk2) - 0x80);
		s16 temp3 = ((arg0->y + var_s0->unk3) - 0x80);
		s16 temp0 = ((arg0->clut & 0xFF9F) | (var_s0->unk4 & 0x60));

		AddPolyFT4(temp2, temp3, var_s0->w, var_s0->h, var_s0->u, var_s0->v, var_s0->w, var_s0->h, 0x80808080, temp0, temp1, arg0->unk345, var_s1);
		var_s1->code |= 3;
		if (var_s0->unkC < 0) {
			FlipPolyFT4H(var_s1);
		}
		if (var_s0->unkE < 0) {
			FlipPolyFT4V(var_s1);
		}
		if (var_s0->unk6 & 0x400) {
			var_a0 = abs(var_s0->unkC);
			var_a1 = abs(var_s0->unkE);
			func_8001DAEC(var_a0, var_a1, 1, 1, var_s1);
		}
		var_s0++;
		var_s1++;
	}
	arg0->buffer ^= 1;
}
