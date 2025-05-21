#include "dat.h"
#include "memory.h"

TIM_IMAGE Tim;
struct unk_data_9 * D_800B6D60;
s32 D_800B9830[2][2];

void func_80018FF0(u32 * addr) {
	TIM_IMAGE sp10;

	OpenTIM(addr);
	ReadTIM(&sp10);
	LoadImage(sp10.prect, sp10.paddr);
	if ((sp10.mode >> 3) & 1) {
		sp10.crect->w = sp10.crect->w * sp10.crect->h;
		sp10.crect->h = 1;
		LoadImage(sp10.crect, sp10.caddr);
	}
	DrawSync(0);
	Tim = sp10;
}

TIM_IMAGE * func_800190B0(void) {
	return &Tim;
}

void func_800190BC(u32 * addr, SVECTOR * arg1, RECT * arg2) {
	TIM_IMAGE sp10;

	OpenTIM(addr);
	ReadTIM(&sp10);
	sp10.prect->x = arg1->vx;
	sp10.prect->y = arg1->vy;
	LoadImage(sp10.prect, sp10.paddr);
	if ((sp10.mode >> 3) & 1) {
		LoadImage(arg2, sp10.caddr);
	}
	DrawSync(0);
}

void func_80019150(u32 * addr) {
	TIM_IMAGE sp10;

	OpenTIM(addr);
	ReadTIM(&sp10);
	LoadImage(sp10.prect, sp10.paddr);
	if ((sp10.mode >> 3) & 1) {
		sp10.crect->w = sp10.crect->w * sp10.crect->h;
		sp10.crect->h = 1;
		LoadImage(sp10.crect, sp10.caddr);
	}
	DrawSync(0);
}

void * func_800191E4(s32 * arg0, s32 arg1) {
	s32 temp_a0;
	void * temp_v0;
	s32 var_s1;
	s32 * temp_v1;
	s32 * var_s2;

	var_s2 = arg0;
	temp_a0 = *var_s2;
	temp_v1 = var_s2 + ((temp_a0) + 1);
	var_s1 = *temp_v1;
	if (arg1 == 1) {
		var_s1 += (temp_a0 + 2) * 4;
	} else {
		var_s2 = temp_v1 + 1;
	}
	temp_v0 = func_800193C0(var_s1);
	memcpy(temp_v0, var_s2, var_s1);
	return temp_v0;
}

void func_80019268(void) {
	memset(&D_800B9830, -1, 0x10);
}

s32 func_80019294(s32 arg0, s32 arg1) {
	return arg0 == D_800B9830[arg1][0];
}

void func_800192B8(s32 arg0, s32 arg1) {
	s32 temp_v0;

	temp_v0 = D_800B9830[arg1][0];
	D_800B9830[arg1][0] = arg0;
	D_800B9830[arg1][1] = temp_v0;
}

s32 func_800192D8(s32 arg0) {
	return D_800B9830[arg0][1];
}

s32 func_800192F4(s32 * arg0) {
	return *arg0;
}

u32 func_80019300(u8 * arg0, struct unk_data_8 * arg1) {
	u8 temp_a1;
	u32 temp_t2;
	u32 temp_t1;
	u32 var_a3;
	u32 var_v1;
	u8 temp_t0;
	u8 temp_v0;
	u8 temp_v0_2;
	u8 * temp_a2;
	u8 * temp_a2_2;
	u8 * var_a0;
	u8 * var_a2;

	var_a0 = arg0;
	var_a3 = 0;
	var_a2 = &arg1->unk5;
	temp_t2 = arg1->unk0;
	temp_t1 = arg1->unk4;
	do {
		if (var_a2[0] == temp_t1) {
			var_a2 += 1;
			temp_t0 = var_a2[0];
			var_a2 += 1;
			temp_v0_2 = var_a2[0];
			var_a2 += 1;
			temp_a1 = temp_v0_2;
			for (var_v1 = 0; var_v1 < temp_a1; var_v1++) {
				var_a0[0] = temp_t0;
				var_a0 += 1;
				var_a3 += 1;
			}
		} else {
			var_a0[0] = var_a2[0];
			var_a2 += 1;
			var_a0 += 1;
			var_a3 += 1;
		}
	} while (var_a3 < temp_t2);
	return var_a3;
}


/* Matched by AngheloAlf */
void func_80019384(struct unk_data_9 * arg0, s32 arg1) {
	struct unk_data_9 * v0 = D_800B6D60->unk0;

	v0->unk0 = arg0;
	v0->unk4 = arg0;
	v0->unk8 = -0x3E7;
	v0->unk4->unk0 = v0;
	v0->unk4->unk4 = v0;
	v0->unk4->unk8 = 0;
	v0->unk4->unkC = arg1;
}

void * func_800193C0(s32 arg0) {
	s32 temp_a0;
	s32 temp_a1;
	struct unk_data_9 * var_s0;

	if (arg0 >= 0) {
		var_s0 = D_800B6D60->unk4;
		arg0 = (arg0 + 7) & ~7;
		while (var_s0 != D_800B6D60) {
			if ((var_s0->unk8 != 1) && (var_s0->unkC >= arg0)) {
				if ((var_s0->unkC - arg0) >= 0x31) {
					func_800194C4(var_s0, arg0);
				}
				break;
			}
			var_s0 = var_s0->unk4;
		}
		if (var_s0 != D_800B6D60) {
			var_s0->unk8 = 1;
			return &var_s0[1];
		}
	}
	return 0;
}

void func_80019478(struct unk_data_9 * arg0) {
	struct unk_data_9 * temp_a0;

	if (arg0 != NULL) {
		temp_a0 = &arg0[-1];
		if (temp_a0->unk8 == 1) {
			temp_a0->unk8 = 0;
			func_80019520(temp_a0);
			func_80019520(temp_a0->unk0);
		}
	}
}

void func_800194C4(struct unk_data_9 * arg0, s32 arg1) {
	struct unk_data_9 * temp_a2;
	struct unk_data_9 * temp_v0;

	temp_v0 = (s8 *)arg0 + arg1;
	temp_v0[1].unk0 = arg0;
	temp_a2 = &temp_v0[1];
	temp_a2->unk4 = arg0->unk4;
	temp_a2->unk8 = 0;
	temp_a2->unkC = ((arg0->unkC - arg1) - 0x10);
	arg0->unk4->unk0 = temp_a2;
	arg0->unk4 = temp_a2;
	arg0->unkC = arg1;
	if (arg0 == D_800B6D60->unk0) {
		D_800B6D60->unk0 = temp_a2;
	}
}

void func_80019520(struct unk_data_9 * arg0) {
	struct unk_data_9 * temp_v1;

	if (arg0->unk8 == 0) {
		temp_v1 = arg0->unk4;
		if (temp_v1->unk8 == 0) {
			arg0->unkC += (0x10 + temp_v1->unkC);
			arg0->unk4->unk4->unk0 = arg0;
			arg0->unk4 = arg0->unk4->unk4;
		}
	}
}

s32 func_8001958C(s32 arg0, s32 arg1, s32 arg2) {
	s32 var_a1;
	s32 var_v0;
	u32 var_v1;

	if (!(arg0 & ~(1 << arg1))) {
		return arg1;
	}
	var_a1 = arg1;
	for (var_v1 = 1; var_v1 < 0x20; var_v1++) {
		var_a1 += arg2;
		if (var_a1 >= 0x20) {
			var_a1 = 0;
		} else if (var_a1 < 0) {
			var_a1 = 0x1F;
		}
		var_v0 = 1 << var_a1;
		if (arg0 & var_v0) {
			break;
		}
	}
	return var_a1;
}

void func_800195FC(s32 arg0, s32 arg1, DVECTOR * arg2) {
	DVECTOR sp0;
	u16 temp_a0;
	u16 temp_a1;
	s32 var_a3;
	s32 var_t1;
	s32 var_v0;
	DVECTOR * var_t0;

	temp_a1 = arg1;
	temp_a0 = arg0;
	for (var_t1 = temp_a0 + 1; var_t1 < temp_a1; var_t1++) {
		var_a3 = var_t1 - 1;
		sp0 = arg2[var_t1];
		var_v0 = arg2[var_t1].vy;
		while (var_a3 >= temp_a0) {
			if (var_v0 < arg2[var_a3].vy) {
				arg2[var_a3 + 1] = arg2[var_a3];
				var_a3--;
			} else {
				break;
			}
		}
		arg2[var_a3 + 1] = sp0;
	}
}


/* 48.23% */
void func_800196B4(s32 arg0, s32 arg1, thingy * arg2[], void * arg3) {
	s16 temp_t1;
	s16 temp_v0;
	s16 var_t3;
	s16 var_t4;
	s32 temp_a0_2;
	s32 temp_a1;
	s32 temp_v1_2;
	s16 var_a0;
	s32 var_a1;
	s32 var_t2;
	u32 temp_a0;
	u32 temp_v1;
	u32 var_a1_2;
	u32 var_t0;
	s16 * temp_v0_2;
	s16 * temp_v1_3;
	s16 * temp_v1_4;
	thingy * var_a0_2;
	thingy * var_a3;
	thingy * var_v1;
	thingy * var_v1_2;
	u16 sp50[32];
	u16 sp90[32];
	thingy subroutine_arg24;

	var_t4 = arg0;
	temp_v0 = (arg0 + arg1) - 1;
	var_t3 = temp_v0;
	var_t2 = 0;
	if ((temp_v0 - arg0) < 0xB) {
		var_a0 = arg0;
	} else {
	loop_3:
		var_a1 = var_t4 << 0x10;
		do {
			temp_a1 = var_a1 >> 0x10;
			temp_t1 = arg2[(temp_a1 + var_t3) / 2]->unk2;
			var_a1_2 = temp_a1 - 1;
			var_t0 = var_t3 + 1;
			var_a3 = arg2[var_t0];
			var_a0_2 = arg2[var_a1_2 + 1];
		loop_5:
			var_a1_2 += 1;
			if (temp_t1 < var_a0_2->unk2) {
				var_v1 = arg2[var_a1_2];
				do {
					var_v1 += 1;
					var_a0_2 += 1;
					var_a1_2 += 1;
				} while (temp_t1 < var_v1->unk2);
			}
			var_v1_2 = arg2[var_t0];
			do {
				var_v1_2 -= 1;
				var_a3 -= 1;
				var_t0 -= 1;
			} while (var_v1_2->unk2 < temp_t1);
			if (var_a1_2 < var_t0) {
				subroutine_arg24 = *var_a0_2;
				*var_a0_2 = *var_a3;
				*var_a3 = subroutine_arg24;
				var_a0_2 += 1;
				goto loop_5;
			}
			temp_a0 = var_a1_2 - var_t4;
			temp_v1 = var_t3 - var_t0;
			if (temp_v1 < temp_a0) {
				temp_v1_2 = var_t2;
				if (temp_a0 >= 0xB) {
					var_t2 += 1;
					sp50[temp_v1_2] = var_t4;
					sp90[temp_v1_2] = (s16)(var_a1_2 - 1);
				}
				var_t4 = var_t0 + 1;
			} else {
				temp_a0_2 = var_t2 * 2;
				if (temp_v1 >= 0xB) {
					var_t2 += 1;
					sp50[temp_a0_2] = (s16)(var_t0 + 1);
					sp90[temp_a0_2] = var_t3;
				}
				var_t3 = var_a1_2 - 1;
			}
			var_a1 = var_t4 << 0x10;
		} while ((var_t3 - var_t4) >= 0xB);
		var_t2 -= 1;
		if (var_t2 != 0) {
			var_t4 = sp50[var_t2];
			var_t3 = sp90[var_t2];
			goto loop_3;
		}
		var_a0 = arg0;
	}
	func_800195FC(var_a0, arg1, var_a3);
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_800198BC);

void func_80019950(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019958);

s32 func_80019C58(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
	void * var_v0;
	void * var_v0_2;
	s32 temp_a0;
	s32 temp_v1;
	u32 temp_a0_2;
	data_struct * temp_s0;

	temp_s0 = &DataContainer.data[DataContainer.write_index];
	bzero(temp_s0, 0x40);
	if (arg2 < 8) {
		if (func_80019294(arg2, arg5) == 1) {
			return 0;
		}
		temp_s0->function = func_80019F20;
	} else if (arg2 == 0x26C) {
		temp_s0->function = func_80019F4C;
		temp_s0->field18_0x34 = 1;
	} else if (arg2 > 0x26C && arg2 < 0x286) {
		temp_s0->function = func_80019F70;
		temp_s0->field18_0x34 = 1;
		if (arg2 == 0x278) {
			temp_s0->field12_0x28 = 1;
		} else {
			func_80040680(arg2 - 0x26D);
			temp_s0->field12_0x28 = 0;
		}
	} else if (arg2 == 13) {
		temp_s0->function = func_8001A1F4;
	} else if ((arg2 == 12) || (arg2 > 13 && arg2 < 16)) {
		temp_s0->function = func_8001A254;
	} else if (arg2 == 10) {
		temp_s0->function = func_8001A2C0;
	} else if (arg2 == 9) {
		temp_s0->function = func_8001A128;
	} else if (arg2 > 24 && arg2 < 34) {
		temp_s0->function = func_8001A1CC;
	} else if (arg5 == 7) {
		temp_s0->function = func_8001A0B8;
	} else if (arg5 == 6) {
		temp_s0->function = func_8001A408;
	}
	temp_s0->field1_0x4 = arg5;
	temp_s0->field7_0x14 = arg1;
	temp_s0->field9_0x1c = arg3;
	temp_s0->status = 1;
	temp_s0->sector_offset = arg2;
	temp_s0->size0 = arg4;
	temp_a0 = 1 << DataContainer.write_index;
	DataContainer.write_index += 1;
	if (DataContainer.write_index == 0x20) {
		DataContainer.write_index = 0;
	}
	return temp_a0;
}

s32 func_80019E48(s32 arg0) {
	return DataContainer.data[func_8001958C(arg0, 0, 1)].data_mirror;
}

s32 func_80019E84(void) {
	data_container * var_v1;
	u32 var_a0;

	var_v1 = &DataContainer;
	for (var_a0 = 0; var_a0 < 0x20; var_a0++) {
		if (var_v1->data[var_a0].status != 0) {
			if (var_v1->data[var_a0].status != 4) {
				return 0;
			}
		}
	}
	return 1;
}

s32 func_80019ECC(s32 arg0) {
	data_container * var_a1;
	u32 i;

	var_a1 = &DataContainer;
	for (i = 0; i < 0x20; i++) {
		if (arg0 & (1 << i)) {
			if (var_a1->data[i].status != 4) {
				return 0;
			}
		}
	}
	return 1;
}

void func_80019F20(data_struct * arg0) {
	func_800192B8(arg0->sector_offset, arg0->field1_0x4);
}

void func_80019F4C(data_struct * arg0) {
	arg0->field12_0x28 = 2;
	func_80019F70();
}

void func_80019F70(data_struct * arg0) {
	s16 temp_s0_2;
	s32 temp_s1;
	s32 temp_s4;
	s32 temp_s5;
	u8 * temp_v0_2;
	s32 temp_v1_2;
	s32 var_a1;
	s32 * temp_s0;
	s32 * temp_v0;
	s32 * var_a0;
	u8 temp_v1;

	temp_v1 = arg0->field19_0x35;
	temp_s5 = arg0->field12_0x28;
	switch (temp_v1) { /* irregular */
	case 0:
		temp_s0 = arg0->data;
		temp_s4 = *(*(s32 *)arg0->data + (s32 *)arg0->data);
		temp_s1 = *(*(s32 *)arg0->data + (s32 *)arg0->data - 1);
		temp_v0_2 = func_800193C0(temp_s4);
		memcpy(temp_v0_2, arg0->data, temp_s4);
		temp_s0_2 = func_8003F7A4(&temp_v0_2[temp_s1], -1, temp_s5);
		var_a0 = temp_v0_2 + 4;
		temp_v1_2 = temp_s0[0] - 2;
		for (var_a1 = 0; var_a1 < temp_v1_2; var_a1++) {
			*var_a0 += temp_v0_2;
			var_a0 += 1;
		}
		func_8003F814((u8 *)arg0->data + temp_s4, temp_s0_2);
		func_800406F4(temp_s5, temp_s0_2, temp_v0_2);
		arg0->field19_0x35 = 1;
		return;
	case 1:
		if (func_8003F574() != 0) {
			func_8003F480(0x7F, 0x7F);
			arg0->field18_0x34 = 0;
			func_80019478(arg0->data);
			arg0->data = 0;
		}
		return;
	}
}

void func_8001A0B8(data_struct * arg0) {
	u32 * temp_s0;

	temp_s0 = arg0->data;
	func_80019150(&temp_s0[(temp_s0[1] >> 2)]);
	func_80019150(&temp_s0[(temp_s0[2] >> 2)]);
	func_80019478(arg0->data);
	arg0->data = 0;
}

void func_8001A128(data_struct * arg0) {
	s32 temp_s3;
	s32 var_s0;
	s32 var_s2;
	s32 * var_s1;

	var_s2 = func_800191E4(arg0->data, 0);
	var_s1 = arg0->data;
	temp_s3 = var_s1[0];

	for (var_s0 = 0; temp_s3 > var_s0; var_s0++) {
		func_8004B7B8(var_s0, var_s2);
		var_s1 += 1;
		var_s2 += var_s1[1] - var_s1[0];
	}
	func_80019478(arg0->data);
	arg0->data = 0;
}

void func_8001A1CC(data_struct * arg0) {
	func_8004B7B8(arg0->sector_offset - 0x19, arg0->data);
}

void func_8001A1F4(data_struct * arg0) {
	s16 sp10[4];

	sp10[1] = 0x1ED;
	sp10[2] = 0xF0;
	sp10[0] = 0;
	sp10[3] = 4;
	LoadImage(&sp10, arg0->data);
	DrawSync(0);
	func_80019478(arg0->data);
	arg0->data = 0;
}

void func_8001A254(data_struct * arg0) {
	s32 temp_v0;

	temp_v0 = func_800193C0(func_800192F4(arg0->data));
	func_80019300(temp_v0, arg0->data);
	func_80019150(temp_v0);
	func_80019478(arg0->data);
	arg0->data = 0;
	func_80019478(temp_v0);
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001A2C0);

void func_8001A408(data_struct * arg0) {
	func_80018FF0(arg0->data);
	func_80019478(arg0->data);
	arg0->data = 0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001A444);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001A44C);
