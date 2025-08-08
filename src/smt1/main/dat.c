#include "dat.h"
#include "memory.h"
#include "lib/libds.h"

TIM_IMAGE Tim;
struct unk_data_9 * D_800B6D60;
s32 D_800B9830[2][2];
extern s32 D_800B9850;
struct data_container DataContainer;
s32 SectorNumber;


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

void func_800190BC(u32 * addr, RECT * prect, RECT * crect, s32 arg3) {
	TIM_IMAGE sp10;

	OpenTIM(addr);
	ReadTIM(&sp10);
	sp10.prect->x = prect->x;
	sp10.prect->y = prect->y;
	LoadImage(sp10.prect, sp10.paddr);
	if ((sp10.mode >> 3) & 1) {
		LoadImage(crect, sp10.caddr);
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
	struct unk_data_9 * v0 = D_800B6D60->next;

	v0->next = arg0;
	v0->prev = arg0;
	v0->unk8 = -0x3E7;
	v0->prev->next = v0;
	v0->prev->prev = v0;
	v0->prev->unk8 = 0;
	v0->prev->unkC = arg1;
}

void * func_800193C0(s32 arg0) {
	s32 temp_a0;
	s32 temp_a1;
	struct unk_data_9 * var_s0;

	if (arg0 >= 0) {
		var_s0 = D_800B6D60->prev;
		arg0 = (arg0 + 7) & ~7;
		while (var_s0 != D_800B6D60) {
			if ((var_s0->unk8 != 1) && (var_s0->unkC >= arg0)) {
				if ((var_s0->unkC - arg0) >= 0x31) {
					func_800194C4(var_s0, arg0);
				}
				break;
			}
			var_s0 = var_s0->prev;
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
			func_80019520(temp_a0->next);
		}
	}
}

void func_800194C4(struct unk_data_9 * arg0, s32 arg1) {
	struct unk_data_9 * temp_a2;
	struct unk_data_9 * temp_v0;

	temp_v0 = (s8 *)arg0 + arg1;
	temp_v0[1].next = arg0;
	temp_a2 = &temp_v0[1];
	temp_a2->prev = arg0->prev;
	temp_a2->unk8 = 0;
	temp_a2->unkC = ((arg0->unkC - arg1) - 0x10);
	arg0->prev->next = temp_a2;
	arg0->prev = temp_a2;
	arg0->unkC = arg1;
	if (arg0 == D_800B6D60->next) {
		D_800B6D60->next = temp_a2;
	}
}

void func_80019520(struct unk_data_9 * arg0) {
	struct unk_data_9 * temp_v1;

	if (arg0->unk8 == 0) {
		temp_v1 = arg0->prev;
		if (temp_v1->unk8 == 0) {
			arg0->unkC += (0x10 + temp_v1->unkC);
			arg0->prev->prev->next = arg0;
			arg0->prev = arg0->prev->prev;
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


void func_800195FC(u16 start, u16 end, s16 (* arg2)[][2]) {
    s32 i;

    for (i = start + 1; i < end; i++) {
        s32 var_a3 = i - 1;
        s32 var_v0;
        s16 sp0[2];
        
        memcpy(sp0, (*arg2)[i], 4);
        var_v0 = (*arg2)[i][1];
        while (var_a3 >= start) {
            if (var_v0 < (*arg2)[var_a3][1]) {
                memcpy((*arg2)[var_a3 + 1], (*arg2)[var_a3], 4);
                var_a3--;
            } else {
                break;
            }
        }
        memcpy((*arg2)[var_a3 + 1], sp0, 4);
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_800196B4);


void func_800198BC(void) {
    DslFILE sp10;
    struct data_struct* var_s0;
    u32 var_s1;

    DsInit();
    DsSearchFile(&sp10, "\\DATA.BIN;1");
    SectorNumber = func_800743BC(&sp10);
    DataContainer.write_index = 0;
    DataContainer.index = 0;
    var_s0 = &DataContainer.data[0];
    for (var_s1 = 0; var_s1 < 0x20; var_s1++) {
        bzero(var_s0, 0x40);
        var_s0->status = 0;
        var_s0 += 1;
    }
    bzero(&D_800B9850, 0x80);
    func_80019268();
}


void func_80019950(void) {
}


void func_80019958(void) {
    u8 sp10[8];
    void (*temp_v0_5)(struct data_struct*);
    u32 temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_3;
    s32* temp_v1_2;
    u32 temp_v0_2;
    u32 var_s2;
    struct data_struct* temp_s0;

    var_s2 = 0;
    do {
        temp_s0 = &DataContainer.data[DataContainer.index];
        temp_v0 = temp_s0->status;
        switch (temp_v0) {
        case 1:
            func_800742AC(SectorNumber + ((u32)Data[temp_s0->sector_offset] / 0x800), &temp_s0->data_loc);
            temp_v1 = temp_s0->sector_offset;
            temp_a0 = temp_s0->field7_0x14;
            temp_v0_2 = (Data[temp_v1 + 1] - Data[temp_v1]) >> 0xB;
            temp_s0->data = temp_a0;
            temp_s0->sectors_size = temp_v0_2;
            temp_v0_3 = temp_v0_2 * 0x800;
            temp_s0->size0 = temp_v0_3;
            temp_s0->size1 = temp_v0_3;
            if (temp_a0 == 0) {
                temp_v0_4 = func_800193C0(temp_v0_3);
                temp_s0->data = temp_v0_4;
                if (temp_v0_4 == 0) {
                    temp_s0->status = 1;
                    return;
                }
            }
            temp_s0->data_mirror = temp_s0->data;
            if (temp_s0->field2_0x6 != 0) {
                temp_s0->data = func_800193C0(temp_s0->size1 + 0x20);
            }
            temp_s0->status = 2;
        case 2:
            if (DsRead(&temp_s0->data_loc, temp_s0->sectors_size, temp_s0->data, 0x80) == 0) {
                temp_s0->status = 8;
                return;
            }
            temp_s0->status = 3;
            temp_s0->wait_count = 0;
        case 3:
            temp_s0->wait_count += 1;
            temp_a0_2 = DsReadSync(&sp10);
            if ((temp_s0->wait_count >= 0xF0) || (temp_a0_2 == -1)) {
                if (temp_s0->field7_0x14 == 0) {
                    func_80019478(temp_s0->data_mirror);
                    temp_s0->data_mirror = 0;
                }
                if (temp_s0->field2_0x6 != 0) {
                    func_80019478(temp_s0->data);
                    temp_s0->data = 0;
                }
                temp_s0->status = 9;
                temp_s0->fail_count += 1;
                DsReadBreak();
                return;
            }
            if (temp_a0_2 == 0) {
                if (temp_s0->field2_0x6 != 0) {
                    temp_s0->status = 6;
                    return;
                }
                temp_s0->status = 5;
            case 5:
    block_23:
                temp_v1_2 = temp_s0->field9_0x1c;
                if (temp_v1_2 != 0) {
                    *temp_v1_2 = temp_s0->data;
                }
                temp_v0_5 = temp_s0->function;
                if (temp_v0_5 != 0) {
                    temp_v0_5(temp_s0);
                }
                if (temp_s0->field18_0x34 == 0) {
                    temp_s0->status = 4;
                }
                goto block_default;
            } else {
                return;
            }
            break;
        case 6:
            func_80019478(temp_s0->data);
            temp_s0->data = 0;
            temp_s0->status = 5;
            temp_s0->data = temp_s0->data_mirror;
            goto block_23;
        case 8:
            DsSystemStatus();
            return;
        case 9:
            if (DsReadSync(&sp10) == -1) {
                temp_s0->status = 1;
                DsReset();
                return;
            }
            break;
        default:
block_default:
            temp_v1_3 = DataContainer.index + 1;
            DataContainer.index += 1;
            if (temp_v1_3 == 0x20) {
                DataContainer.index = 0;
            }
            var_s2 += 1;
            if (var_s2 >= 0x20U) {
                return;
            } else {
                continue;
            }
        }
    } while (1);
}


s32 func_80019C58(s32 arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, s32 arg5) {
	void * var_v0;
	void * var_v0_2;
	s32 temp_a0;
	s32 temp_v1;
	u32 temp_a0_2;
	struct data_struct * temp_s0;

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
			temp_s0->unk28 = 1;
		} else {
			func_80040680(arg2 - 0x26D);
			temp_s0->unk28 = 0;
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
