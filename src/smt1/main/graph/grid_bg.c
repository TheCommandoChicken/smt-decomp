#include "ui.h"
#include "lib/memory.h"

void func_80027E40(struct object* arg0) {
    struct unk_data_21 * temp_s0;

    temp_s0 = arg0->data;
    func_8001830C(temp_s0->unk0);
    temp_s0->unk0 = 0;
}

void func_80027E74(struct object * arg0) {
	u16 sp20[0x20];
	s16 temp_a1;
	s32 temp_a0;
	s32 temp_v1;
	s16 var_a2;
	s32 var_v1;
	u16 temp_v0;
	struct unk_data_21 * temp_s0;

	temp_s0 = arg0->data;
	if (temp_s0->unk4 == 0) {
		if (func_80020EE0(temp_s0->unk0) == 3) {
			temp_s0->unk4 = 1;
		}
	} else {
		temp_a1 = temp_s0->unkE;
		if (temp_a1 == 0) {
			for (var_a2 = 0; var_a2 < (temp_s0->unk6 / 10); var_a2++) {
				sp20[var_a2] = temp_s0->unk8[var_a2];
			}
			sp20[var_a2++] = 0xEC;
			sp20[var_a2++] = 0;
			temp_s0->unk6 = (temp_s0->unk6 + temp_s0->unkC);
			func_80021DBC(&sp20, 0x1D, 0x8A, 5, 0, 0, temp_s0->unk18);
			if (temp_s0->unk8[temp_s0->unk6 / 10] == 0) {
				temp_s0->unkE = 1;
				temp_s0->unk6 = 0;
			}
		} else {
			func_80021DBC(temp_s0->unk8, 0x1D, 0x8A, 5, 0, 0, temp_s0->unk18);
			if (temp_s0->unk6++ < 9U) { /* This is stupid */
				func_80021DBC(&temp_s0->unk10, (temp_s0->unk14 * 0xC) + 0x1D, 0x8A, 5, 0, 0, temp_s0->unk18);
			}
			if (temp_s0->unk6 >= 0x15) {
				temp_s0->unk6 = 0;
			}
		}
	}
}

struct object * func_800280BC(u16 * arg0, s32 arg1, s32 arg2, s32 arg3) {
	s16 var_a0;
	u16 * temp;
	struct unk_data_21 * temp_s0;
	struct object * temp_v0;

	temp_v0 = CreateObject(&func_80027E74, &func_80027E40, FirstObjectPtrPtr->first, arg3, 0, sizeof(struct unk_data_21));
	if (temp_v0 == NULL) return NULL;
	bzero(temp_v0->data, sizeof(struct unk_data_21));
	temp_s0 = temp_v0->data;
	temp_s0->unkC = 0xA;
	temp_s0->unk6 = 0;
	temp_s0->unk8 = arg0;
	temp_s0->unkE = 0;
	temp_s0->unk0 = func_80020F44(0x18, 0x88, 0x110, 0x11, 0xE, 0x50000);
	temp_s0->unk4 = 0;
	temp = temp_s0->unk8;
	for (var_a0 = 0; temp[var_a0] != 0; var_a0++);
	temp_s0->unk14 = var_a0;
	temp_s0->unk10 = 0xEC;
	temp_s0->unk12 = 0;
	return temp_v0;
}

void func_800281BC(struct unk_data_9 * arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, u16 * arg5, u16 * arg6, u16 * arg7, u16 * arg8, s32 arg9) {
	s16 temp_s1;
	s16 temp_s1_2;
	s16 temp_s2;
	s16 temp_s3;
	POLY_G4 * temp_s0;

	temp_s0 = &arg0->p[arg0->buffer];
	SetPolyG4(temp_s0);
	temp_s1 = arg1 - 0xA0;
	temp_s2 = arg2 - 0x46;
	temp_s0->x0 = temp_s1;
	temp_s0->y0 = temp_s2;
	temp_s0->x1 = temp_s1 + arg3;
	temp_s0->y1 = temp_s2;
	temp_s0->x2 = temp_s1;
	temp_s0->y2 = temp_s2 + arg4;
	temp_s0->x3 = temp_s1 + arg3;
	temp_s0->y3 = temp_s2 + arg4;
	temp_s0->r0 = arg5[0];
	temp_s0->g0 = arg5[1];
	temp_s0->b0 = arg5[2];
	temp_s0->r1 = arg6[0];
	temp_s0->g1 = arg6[1];
	temp_s0->b1 = arg6[2];
	temp_s0->r2 = arg7[0];
	temp_s0->g2 = arg7[1];
	temp_s0->b2 = arg7[2];
	temp_s0->r3 = arg8[0];
	temp_s0->g3 = arg8[1];
	temp_s0->b3 = arg8[2];
	temp_s0->code |= 2;
	AddPrim(&OrderingTable[arg9], temp_s0);
	arg0->buffer ^= 1;
}

void func_80028350(struct object * arg0) {
	u32 sp28[4];
	s16 temp_a1;
	s32 temp_a2;
	s16 temp_v0_3;
	s16 var_s1;
	struct unk_data_22 * temp_s0;
	s32 buff;

	temp_s0 = arg0->data;
	buff = temp_s0->unk4C;
	sp28[0] = 0;
	sp28[1] = 0;
	sp28[2] = 0x39;
	sp28[3] = 0x39;
	func_8001D890(temp_s0->unk75A, temp_s0->unk75C, temp_s0->unk75E, temp_s0->unk760, &sp28, temp_s0->unk764, &temp_s0->p[buff]);

	for (var_s1 = (temp_s0->unk75A / 10) + 1; var_s1 < (((temp_s0->unk75A + temp_s0->unk75E) / 10) + 1); var_s1++) {
		temp_a1 = var_s1 * 10;
		func_80027D50(&temp_s0->l[var_s1], temp_a1, temp_s0->unk75C, temp_a1, (temp_s0->unk75C + temp_s0->unk760) - 1, 0x22, 0x25, 0x36, temp_s0->unk764 - 1);
	}

	for (temp_v0_3 = (temp_s0->unk75C / 10) + 1; temp_v0_3 < (((temp_s0->unk75C + temp_s0->unk760) / 10) + 1); temp_v0_3++) {
		temp_a2 = temp_v0_3 * 10;
		func_80027D50(&temp_s0->l[var_s1 + temp_v0_3], temp_s0->unk75A, temp_a2 - 3, temp_s0->unk75A + temp_s0->unk75E, temp_a2 - 3, 0x22, 0x25, 0x36, temp_s0->unk764 - 1);
	}
	temp_s0->unk4C ^= 1;
}

void func_80028644(struct object * arg0) {}

struct object * func_8002864C(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
	struct unk_data_22 * temp_a0;
	struct object * temp_v0;
	struct object * var_v0;

	temp_v0 = CreateObject(NULL, &func_80028644, FirstObjectPtrPtr->first, arg4, 0, sizeof(struct unk_data_22));
	if (temp_v0 == NULL) return NULL;
	bzero(temp_v0->data, sizeof(struct unk_data_22));
	temp_a0 = temp_v0->data;
	temp_a0->origin = temp_v0;
	temp_a0->unk75A = arg0;
	temp_a0->unk75C = arg1;
	temp_a0->unk75E = arg2;
	temp_a0->unk760 = arg3;
	temp_a0->unk764 = arg5;
	temp_a0->unk758 = 0;
	temp_a0->origin->proc_func = func_80028350;
	return temp_v0;
}
