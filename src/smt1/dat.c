#include "common.h"

void func_80018FF0(void) {
    TIM_IMAGE sp10;
    u16 temp_lo;

    OpenTIM();
    ReadTIM(&sp10);
    LoadImage(sp10.prect, sp10.paddr);
    if ((sp10.mode >> 3) & 1) {
        temp_lo = sp10.crect->w * sp10.crect->h;
        sp10.prect->w = temp_lo;
        sp10.prect->h = 1U;
        LoadImage(sp10.crect, sp10.caddr);
    }
    DrawSync(0);
    Tim = sp10;
}

TIM_IMAGE* func_800190B0(void) {
    return &Tim;
}

void func_800190BC(s32 arg0, pos* arg1, RECT* arg2) {
    TIM_IMAGE sp10;

    OpenTIM(arg0);
    ReadTIM(&sp10);
    sp10.prect->x = arg1->x;
    sp10.prect->y = arg1->y;
    LoadImage(sp10.prect, sp10.paddr);
    if ((sp10.mode >> 3) & 1) {
        LoadImage(arg2, sp10.caddr);
    }
    DrawSync(0);
}

void func_80019150(void) {
    TIM_IMAGE sp10;
    u16 temp_lo;

    OpenTIM();
    ReadTIM(&sp10);
    LoadImage(sp10.prect, sp10.paddr);
    if ((sp10.mode >> 3) & 1) {
        temp_lo = sp10.crect->w * sp10.crect->h;
        sp10.crect->w = temp_lo;
        sp10.crect->h = 1;
        LoadImage(sp10.crect, sp10.caddr);
    }
    DrawSync(0);
}

s32 func_800191E4(s32* arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s1;
    s32* temp_v1;
    s32* var_s2;

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

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019294);

void func_800192B8(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32* temp_a1;

    temp_v0 = D_800B9830[arg1][0];
    D_800B9830[arg1][0] = arg0;
    D_800B9830[arg1][1] = temp_v0;
}

s32 func_800192D8(s32 arg0) {
    return D_800B9830[arg0][1];
}

s32 func_800192F4(s32* arg0) {
    return *arg0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019300);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019384);

object_data** func_800193C0(s32 arg0) {
    s32 temp_a0;
    s32 temp_a1;
    object_data* var_s0;

    if (0 <= arg0) {
        var_s0 = D_800B6D60[1];
        temp_a1 = (arg0 + 7) & ~7;
        while (var_s0 != D_800B6D60) {
            if (((var_s0->object).field2_0x8 != 1) && (temp_a0 = (var_s0->object).size, (temp_a0 >= temp_a1))) {
                if ((temp_a0 - temp_a1) >= 0x31) {
                    func_800194C4(var_s0, temp_a1);
                }
                break;
            }
            var_s0 = (var_s0->object).next;
        }
        if (var_s0 != D_800B6D60) {
            (var_s0->object).field2_0x8 = 1;
            return &(var_s0->object).field4_0x10;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019478);

void func_800194C4(object_data* arg0, s32 arg1) {
    s32* temp_a2;
    object_data* temp_v0;

    temp_v0 = (s8*)arg0 + arg1;
    temp_v0->object.field4_0x10 = arg0;
    temp_a2 = &temp_v0->object.field4_0x10;
    temp_a2[1] = arg0->object.next;
    temp_a2[2] = 0;
    temp_a2[3] = ((arg0->object.size - arg1) - 0x10);
    arg0->object.next->object.origin = temp_a2;
    arg0->object.next = temp_a2;
    arg0->object.size = arg1;
    if (arg0 == D_800B6D60[0]) {
        D_800B6D60[0] = temp_a2;
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019520);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001958C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_800195FC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_800196B4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_800198BC);

void func_80019950(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019958);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019C58);

s32 func_80019E48(s32 arg0) {
    return DataContainer.data[func_8001958C(arg0, 0, 1)].data_mirror;
}

s32 func_80019E84(void) {
    data_container* var_v1;
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
    data_container* var_a1;
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

void func_80019F20(data_struct* arg0) {
    func_800192B8(arg0->sector_offset, arg0->field1_0x4);
}

void func_80019F4C(data_struct* arg0) {
    arg0->field12_0x28 = 2;
    func_80019F70();
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_80019F70);

void func_8001A0B8(data_struct* arg0) {
    u32* temp_s0;

    temp_s0 = arg0->data;
    func_80019150(&temp_s0[(temp_s0[1] >> 2)]);
    func_80019150(&temp_s0[(temp_s0[2] >> 2)]);
    func_80019478(arg0->data);
    arg0->data = 0;
}

void func_8001A128(data_struct* arg0) {
    s32 temp_s3;
    s32 var_s0;
    s32 var_s2;
    s32* var_s1;
    
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

void func_8001A1CC(data_struct* arg0) {
    func_8004B7B8(arg0->sector_offset - 0x19, arg0->data);
}

void func_8001A1F4(data_struct* arg0) {
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

void func_8001A254(data_struct* arg0) {
    s32 temp_v0;

    temp_v0 = func_800193C0(func_800192F4(arg0->data));
    func_80019300(temp_v0, arg0->data);
    func_80019150(temp_v0);
    func_80019478(arg0->data);
    arg0->data = 0;
    func_80019478(temp_v0);
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001A2C0);

void func_8001A408(data_struct* arg0) {
    func_80018FF0(arg0->data);
    func_80019478(arg0->data);
    arg0->data = 0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001A444);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dat", func_8001A44C);
