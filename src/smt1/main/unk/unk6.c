#include "common.h"
#include "object.h"
#include "unk6.h"
#include "main.h"

struct object * func_800470E4(s16 arg0, s16 arg1, s16 arg2, s16 (* arg3)[43], struct object * arg4, s32 priority, s16 arg6) {
    struct unk_data_600 * dat;
    struct object * var_s1;

    if ((arg4 != NULL) && (arg4->unk2C == 1)) {
        var_s1 = arg4;
        dat = var_s1->data;
        dat->unk791C = 0;
        dat->unk791E = dat->unk78F2;
    } else {
        var_s1 = CreateObject(
            func_8004725C, func_800472B4, FirstObjectPtrPtr->first, 
            priority, OBJ_TYPE_DEFAULT, sizeof(struct unk_data_600)
        );
        if (var_s1 == NULL) return NULL;
        dat = var_s1->data;
        dat->unk7914 = func_800492B0(0x117, 0xD4, arg6, priority);
        dat->unk7914->initialized = 0;
        dat->unk78F2 = 1;
        dat->unk791E = 0;
        dat->unk791C = 0;
    }
    func_80048538(dat, arg0, arg1, arg2, arg6);
    dat->unk7908 = arg3;
    dat->unk790C = 0;
    dat->unk7910 = 0;
    func_800488CC(dat);
    if (func_8004731C(dat, arg3) != 0) {
        dat->unk791E += 1;
    }
    dat->unk78F6 = dat->unk791E;
    return var_s1;
}


void func_8004725C(struct object * self) {
    struct unk_data_600 * dat = self->data;
    if (self->initialized) {
        switch (dat->unk7902) {
        case 1:
            func_80048380(dat);
            break;
        case 0:
        default:
            func_80048140(dat);
        }
    }
}


void func_800472B4(struct object * self) {
    RemoveObject(((struct unk_data_600 *)self->data)->unk7914);
}


void func_800472E0(s32 arg0) {
    s16 sp10[8];

    func_800489D0(&sp10, func_8004E920());
    func_8004731C(arg0, &sp10);
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004731C);

void func_80047E78(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, struct unk_data_603 * arg5, s16* arg6, u8 arg7, u8 arg8, u8 arg9) {
    func_80048578(
        arg0, arg1, arg2, arg3, arg4, ((s32*)arg6)[2],
         arg6[2], &arg5->unk0[arg6[0]], arg7, arg8, arg9, 
         arg6[0], arg6[1]
        );
    *(&arg5->unk0[arg6[0]].flags) &= ~1; // why
    *(&arg5->unk0[arg6[0]].flags) &= ~2;
    *(&arg5->unk0[arg6[0]].flags) &= ~4;
    *(&arg5->unk0[arg6[0]].flags) &= ~8;
    *(&arg5->unk0[arg6[0]].flags) &= ~16;
    *(&arg5->unk0[arg6[0]].flags) &= ~32;
    arg5->unkD20[arg6[0]] += arg3;
    arg5->unkD58 += 1;
    arg6[0] += 1;
}


s32 func_80048064(struct unk_data_603 * dat, s16 arg1) {
    s32 i;

    for (i = 0; dat->unkD58 > i; i++) {
        if (arg1 != 0) {
            dat->unkD20[i] = 0;
        }
        if (dat->unkD20[i] > 0) {
            dat->unkD20[i] -= 1;
            if (arg1 != 0) {
                dat->unkD20[i] -= dat->unkD66;
            }
            if (dat->unkD20[i] < 0) {
                dat->unkD20[i] = 0;
                func_8001A830(&dat->unk0[i]);
                return 1;
            } else {
                return 0;
            }
        }
        func_8001A830(&dat->unk0[i]);
    }
    return 1;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80048140);

void func_80048380(struct unk_data_600 * dat) {
    s32 var_s0;

    func_80048E74(dat, 3);
    dat->unk78F8 = (dat->unk78F4 < dat->unk78F6);
    if (dat->unk78F8 == 0) {
        dat->unk78F2 = 0;
        dat->unk7900 = (dat->unk78F8 == 0);
        return;
    }
    var_s0 = dat->unk78F4;
    while (var_s0 < dat->unk78F2) {
        func_80048064(&dat->unk0[var_s0], 1);
        var_s0 += 1;
    }
}


void func_80048438(struct unk_data_600 * dat) {
    s32 i;
    s32 j;

    for (i = 0; dat->unk78F6 > i; i++) {
        for (j = 0; j < dat->unk0[i].unkD58; j++) {
            dat->unk0[i].unkD20[j] = 0;
        }
        if (dat->unk0[i].unkD6E != 0) break; 
    }
}


void func_800484B0(struct unk_data_600 * dat, s16 arg1) {
    s32 i;
    s32 j;

    for (i = 0; dat->unk78F6 > i; i++) {
        for (j = 0; dat->unk0[i].unkD58 > j; j++) {
            if (dat->unk0[i].unkD20[j] > 0) {
                dat->unk0[i].unkD20[j] = arg1;
            }
        }
        if (dat->unk0[i].unkD6E != 0) break;
    }
}


void func_80048538(struct unk_data_600 * arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4) {
    arg0->unk78F0 = 0;
    arg0->unk78F4 = 0;
    arg0->unk78F8 = 0;
    arg0->unk78FA = 0;
    arg0->unk78FC = -1;
    arg0->unk78FE = -1;
    arg0->unk7900 = 0;
    arg0->unk7902 = 0;
    arg0->unk7904 = arg1;
    arg0->unk7906 = arg2;
    arg0->unk78F6 = 0;
    arg0->unk7918 = arg3;
    arg0->unk7928 = arg4;
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80048578);

void func_80048894(struct unk_data_603 * arg0) {
    s16 var_v1;
    
    for (var_v1 = 0; var_v1 < 28; var_v1++) {
        arg0->unkD20[var_v1] = 0;
    }
}


void func_800488CC(struct unk_data_600 * arg0) {
    func_8001E16C(&arg0->unk0[arg0->unk791E].unk0[0]);
    func_80048894(&arg0->unk0[arg0->unk791E]);
    arg0->unk7924 = 0;
    arg0->unk7920 = 0;
    arg0->unk0[arg0->unk791E].unkD58 = 0;
    arg0->unk0[arg0->unk791E].unkD6E = 0;
    arg0->unk0[arg0->unk791E].unkD66 = arg0->unk7918;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800489D0);

s32 func_80048AE4(s16* arg0, s32 arg1, s32 arg2, s16 arg3) {
    s16 sp10[8];
    s16 var_v1;
    s16* temp_s0;
    s32 temp_s3 = func_800489D0(&sp10[0], arg1);
    
    for (var_v1 = 0; arg2 > var_v1; var_v1++) {
        arg0[var_v1] = arg3;
    }
    temp_s0 = &arg0[arg2];
    memcpy(temp_s0 - temp_s3, &sp10, temp_s3 * 2);
    temp_s0[0] = 0;
    return temp_s3;
}


s32 func_80048B84(s32 arg0, s32 arg1) {
    s32 var_a2 = 1;
    s32 var_v1;

    for (var_v1 = 0; arg1 > var_v1; var_v1++) {
        var_a2 *= arg0;
    }
    return var_a2;
}


void func_80048BB4(struct unk_data_600 * arg0) {
    s32 i = 0;

    arg0->unk78FC = -1;
    for (; i < 4; i++) {
        if (func_80018F14(0, i + 12)) {
            arg0->unk78FC = i + 12;
        }
    }
    for (i = 0; i < 4; i++) {
        if (func_80018F14(0, i + 4)) {
            arg0->unk78FC = i + 4;
        }
    }
    arg0->unk78FE = -1;
    for (i = 0; i < 4; i++) {
        if (func_80018EE8(0, i + 12)) {
            arg0->unk78FE = i + 12;
        }
    }
    for (i = 0; i < 4; i++) {
        if (func_80018F14(0, i + 4)) {
            arg0->unk78FE = i + 4;
        }
    }
    if ((arg0->unk78F0 == 0) && 
        (func_80018EE8(0, 0xD) == 0) && 
        (func_80018EE8(0, 0xE) == 0) && 
        (func_80018EE8(0, 0xF) == 0) && 
        (func_80018EE8(0, 0xC) == 0) && 
        (func_80018EE8(0, 4) == 0) && 
        (func_80018EE8(0, 5) == 0) && 
        (func_80018EE8(0, 6) == 0) && 
        (func_80018EE8(0, 7) == 0)) {
        arg0->unk78F0 = 1;
    }
}


void func_80048D3C(void) {
    s16 sp20[43] = {
        1, 1,
        1, 1,
        1, 0x800,
        2, 2,
        2, 2,
        2, 0x800,
        3, 3,
        3, 3,
        3, 0x800,
        4, 4,
        4, 4,
        4, 0x800,
        5, 5,
        5, 5,
        5, 0x800,
        6, 6,
        6, 6,
        6, 0x800,
        7, 7,
        7, 7,
        7, 0x800
    };

    func_800470E4(0x64, 0x48, 0xA, sp20, 0, 0x0F000000, 5);
}


s16 func_80048E30(struct unk_data_600 * arg0) {
    s32 var_v1 = (arg0->unk78F2 - 1 >= 0) ? arg0->unk78F2 - 1 : 0;
    return arg0->unk0[var_v1].unkD6E;
}


s32 func_80048E74(struct unk_data_600 * arg0, s16 arg1) {
    arg0->unk78FA += arg1;
    if (arg0->unk78FA >= 0xD) {
        arg0->unk78FA -= 12;
        arg0->unk78F4 += 1;
        if (arg0->unk78F4 < arg0->unk78F6) {
            func_800490A4(arg0);
            func_80048F10(arg0, arg0->unk78FA);
        }
        return 1;
    } else {
        func_80048F10(arg0, arg1);
        return 0;
    }
}


void func_80048F10(struct unk_data_600 * arg0, s16 arg1) {
    s32 var_t0;
    s32 var_t2;

    for (var_t2 = arg0->unk78F4 + 1; var_t2 < arg0->unk78F6; var_t2++) {
        for (var_t0 = 0; var_t0 < arg0->unk0[var_t2].unkD58; var_t0++) {
            arg0->unk0[var_t2].unk0[var_t0].y -= arg1;
        }
    }
    for (var_t0 = 0; var_t0 < arg0->unk0[arg0->unk78F4].unkD58; var_t0++) {
        arg0->unk0[arg0->unk78F4].unk0[var_t0].v += arg1;
        arg0->unk0[arg0->unk78F4].unk0[var_t0].h -= arg1;
    }
}


void func_800490A4(struct unk_data_600 * arg0) {
    s32 var_t0;
    s32 var_a2;

    for (var_t0 = arg0->unk78F4; var_t0 < arg0->unk78F6; var_t0++) {
        for (var_a2 = 0; var_a2 < arg0->unk0[var_t0].unkD58; var_a2++) {
            arg0->unk0[var_t0].unk0[var_a2].y = ((arg0->unk7906 + ((var_t0 - arg0->unk78F4) * 0xD)) - 0x46);
        }
    }
}


void func_80049158(struct object ** arg0, s16 arg1, s16 arg2, s16 * arg3, s16 arg4) {
    *arg0 = func_800470E4(arg1, arg2, func_80049284(), arg3, *arg0, 0xA20000, arg4);
    (*arg0)->initialized = 0;
}


void func_800491F0(struct unknown_object_struct * arg0) {
    RemoveObject(arg0->sprite12);
}


void func_80049214(struct unk_data_600 * arg0) {
    arg0->unk7902 = 1;
    arg0->unk78F8 = 1;
}


s32 func_80049224(void) {
    if (!func_8004C06C(FLAG_CURRENCY_CHANGED)) {
        return 0xD2;
    } else {
        return 0xEB;
    }
}


s32 func_80049254(void) {
    if (!func_8004C06C(FLAG_CURRENCY_CHANGED)) {
        return 0x5C;
    } else {
        return 0x5E;
    }
}


s32 func_80049284(void) {
    if (D_800B72AC->settings.unk0 == 0) {
        return 1;
    } else {
        return D_800B72AC->settings.unk0 != 1;
    }
}


struct object * func_800492B0(s16 x, s16 y, s32 arg2, u32 arg3) {
    struct sprite_init_data sp18;
    struct texture_data sp30;
    u16 var_a3;
    struct object * temp_v0 = CreateObject(
        func_80049424, NULL, FirstObjectPtrPtr->first, 
        arg3, OBJ_TYPE_DEFAULT, sizeof(struct unk_data_700)
    );
    struct unk_data_700 * temp_s0;
    if (temp_v0 == NULL) return NULL;
    temp_s0 = temp_v0->data;
    bzero(temp_s0, 0x80);
    temp_s0->unk0 = 0;
    temp_s0->unk7C = 0;
    func_8001A798(&temp_s0->unk4);
    sp30 = GetTextureInitData(0x62);
    sp18.x = x;
    sp18.y = y;
    sp18.w = sp30.w;
    sp18.h = sp30.h;
    if (sp30.unkA == -1) {
        sp18.abe = 0;
        var_a3 = 0;
    } else {
        sp18.abe = 1;
        var_a3 = sp30.unkA;
    }
    sp18.tge = 1;
    sp18.b = 0x80;
    sp18.g = 0x80;
    sp18.r = 0x80;
    sp18.ot_index = arg2;
    sp18.u = sp30.u;
    sp18.v = sp30.v;
    sp18.tpage = getTPage(0, var_a3, (0x2C0 - (sp30.unk6 << 6)), 0x100);
    sp18.clut = (((sp30.unk8 >> 4) + 0x1E0) << 6) | (sp30.unk8 & 0xF);
    func_8001AA3C(&temp_s0->unk4, &sp18);
    return temp_v0;
}


void func_80049424(struct object * arg0) {
    struct unk_data_700 * temp_s0 = arg0->data;
    
    if (arg0->initialized == 0) {
        temp_s0->unk0 = 0;
    } else {
        if (temp_s0->unk7C != 0) {
            func_8001A830(&temp_s0->unk4);
        }
        if (temp_s0->unk0 < 8) {
            temp_s0->unk0 += 1;
        } else {
            temp_s0->unk0 = 0;
            temp_s0->unk7C ^= 1;
        }
    }
}


void func_8004949C(struct unk_data_600 * arg0) {
    arg0->unk0[arg0->unk78F2 - 1].unkD6E = 0;
}


struct object * func_800494D0(s32 arg0) {
    s16 var_s0 = 0;
    struct unk_data_701 * temp_s1;
    struct object * temp_v0 = CreateObject(
        func_800495FC, func_800498EC, FirstObjectPtrPtr->first, 
        arg0, OBJ_TYPE_DEFAULT, 0x1430
    );
    if (temp_v0 == NULL) return NULL;
    temp_s1 = temp_v0->data;
    bzero(temp_s1, 0x1430);
    temp_s1->unk808 = arg0;
    temp_s1->unk814 = 0;
    temp_s1->unk818 = 0;
    for (var_s0 = 0; var_s0 < 8; var_s0++) {
        temp_s1->unk81A[var_s0] = 0;
    }
    temp_s1->unk142C = 0;
    func_8005DEF4(temp_s1, 0xE);
    func_8005DD14(&temp_s1->unk510, 0x10, 0x10, 0x120, 0x10, 0xD);
    func_8005DD14(&temp_s1->unk68C, 0x18, 0xA1, 0x110, 0x3D, 0xD);
    func_80049A70(temp_s1);
    func_800499C0(temp_s1);
    return temp_v0;
}


void func_800495FC(struct object * arg0) {
    s16 sp20;
    s16 sp22;
    s16 temp_v0_4;
    s32 temp_v0_3;
    struct unk_data_701 * temp_s2 = arg0->data;
    s16 temp_s1 = temp_s2->unk818;
    s16 temp_s3 = temp_s2->unk81A[temp_s2->unk818];
    
    if (temp_s2->unk814 != 0) {
        RemoveObject(arg0);
        return;
    }
    func_8004A28C(&temp_s2->unk812, &temp_s2->unk810);
    if (temp_s2->unk810 == 4) {
        temp_s2->unk818 -= 1;
        temp_s2->unk818 = func_800648E0(8, temp_s2->unk818);
    } else if (temp_s2->unk810 == 6) {
        temp_s2->unk818 += 1;
        temp_s2->unk818 = func_800648E0(8, temp_s2->unk818);
    } else if (temp_s2->unk810 == 5) {
        temp_s2->unk81A[temp_s2->unk818] += 1;
        temp_s2->unk81A[temp_s2->unk818] = func_800648E0(temp_s2->unk9A8[temp_s2->unk818 * 0xC0], temp_s2->unk81A[temp_s2->unk818]);
    } else if (temp_s2->unk810 == 7) {
        temp_s2->unk81A[temp_s2->unk818] -= 1;
        temp_s2->unk81A[temp_s2->unk818] = func_800648E0(temp_s2->unk9A8[temp_s2->unk818 * 0xC0], temp_s2->unk81A[temp_s2->unk818]);
    } else {
        if (temp_s2->unk812 == 0xD) {
            if (temp_s2->unk818 != 7) {
                temp_s2->unk81A[temp_s2->unk818] += 1;
                temp_s2->unk81A[temp_s2->unk818] = func_800648E0(temp_s2->unk9A8[temp_s2->unk818 * 0xC0], temp_s2->unk81A[temp_s2->unk818]);
            }
        }
    }
    if ((temp_s2->unk818 != temp_s1) || (temp_s2->unk81A[temp_s2->unk818] != temp_s3)) {
        func_8003FFE4(1);
    }
    if (temp_s2->unk812 == 0xD) {
        if (temp_s2->unk818 == 7) {
            func_8004995C(temp_s2);
            func_8003FFE4(2);
            RemoveObject(arg0);
            return;
        }
    }
    if (temp_s2->unk812 == 0xF) {
        func_8003FFE4(4);
        RemoveObject(arg0);
        return;
    }
    if (temp_s2->unk812 == 0xE) {
        func_8003FFE4(3);
        temp_s2->unk818 = 7;
    }
    func_8005DD40(&temp_s2->unk510);
    sp20 = 0;
    sp22 = 0;
    temp_v0_3 = func_8004B888(0x299);
    func_8004A174(temp_s2->unk678, temp_s2->unk67A, temp_s2->unk67C, temp_s2->unk67E, &sp20, &sp22, (func_80065194(temp_v0_3) * 8), 0xA);
    func_80021DBC(temp_v0_3, sp20, sp22, 4, 0xA, 0, 0xC);
    func_8005DD40(&temp_s2->unk68C);
    func_80049BF4(temp_s2);
    func_8005DF00(temp_s2);
    temp_s2->unk142C += 1;
    temp_s2->unk142C = func_800648E0(0x14, temp_s2->unk142C);
}


void func_800498EC(void) {
    func_8004990C();
}


s32 func_8004990C(void) {
    if (D_800B72AC->settings.unkA == 0) {
        func_800409C4();
    } else if (D_800B72AC->settings.unkA == 1) {
        func_80040984();
    }
    return 1;
}


s32 func_8004995C(struct unk_data_701 * arg0) {
    struct settings * temp_v0 = &D_800B72AC->settings;
    
    temp_v0->unk0 = arg0->unk81A[0];
    temp_v0->unk2 = arg0->unk81A[1];
    temp_v0->unk4 = arg0->unk81A[2];
    temp_v0->unk8 = arg0->unk81A[3];
    temp_v0->unk6 = arg0->unk81A[4];
    temp_v0->unkC = arg0->unk81A[5];
    temp_v0->unkA = arg0->unk81A[6];
    return 1;
}


s32 func_800499C0(struct unk_data_701 * arg0) {
    struct settings * temp_v1 = &D_800B72AC->settings;
    arg0->unk81A[0] = temp_v1->unk0;
    arg0->unk81A[1] = temp_v1->unk2;
    arg0->unk81A[2] = temp_v1->unk4;
    arg0->unk81A[3] = temp_v1->unk8;
    arg0->unk81A[4] = temp_v1->unk6;
    arg0->unk81A[5] = temp_v1->unkC;
    arg0->unk81A[6] = temp_v1->unkA = (D_800FADF4[0] == 0);
    return 1;
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80049A34);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80049A70);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80049BF4);

void func_8004A174(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16* arg4, s16* arg5, s16 arg6, s16 arg7) {
    *arg4 = arg0 + ((arg2 - arg6) >> 1);
    *arg5 = arg1 + ((arg3 - arg7) >> 1);
}


s32 func_8004A1C0(struct unk_data_701 * arg0) {
    return (arg0->unk142C < 10) ? 5 : 0;
}


s32 func_8004A1E0(struct unk_data_701 * arg0, s16 arg1, s16* arg2) {
    if (arg0->unk818 == arg1) {
        *arg2 = func_8004A1C0(arg0);
        return 1;
    } else {
        *arg2 = 0;
        return 0;
    }
}


s32 func_8004A22C(struct unk_data_701 * arg0, s16 arg1, s16 arg2, s16* arg3) {
    if (arg0->unk81A[arg1] == arg2) {
        if (arg0->unk818 == arg1) {
            *arg3 = 5;
            return 1;
        } else {
            *arg3 = 4;
            return 0;
        }
    } else {
        *arg3 = 1;
        return 0;
    }
}


void func_8004A28C(s16* arg0, s16* arg1) {
    s32 var_s1;
    
    *arg0 = -1;
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        if (var_s1 + 12 == 0xD) {
            if (func_80018F40(0, var_s1 + 12)) {
               *arg0 = var_s1 + 12; 
            }
        } else {
            if (func_80018F14(0, var_s1 + 12)) {
               *arg0 = var_s1 + 12; 
            }
        }
    }
    *arg1 = -1;
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        if (func_80018F40(0, var_s1 + 4)) {
            *arg1 = var_s1 + 4;
        }
    }
}


s32 func_8004A358(s32 x, s32 y, s32 w, s32 h, s32 isbg) {
    bzero(&D_8010BE80, 0x24);
    if (w == 0) {
        w = 0x1E;
    }
    if (h == 0) {
        h = 0x14;
    }
    D_8010BE80.w = w;
    D_8010BE80.h = h;
    D_8010BE80.n = w * h;
    D_8010BE80.stream_id = FntOpen(x, y, D_8010BE80.w * 8, (D_8010BE80.h + 1) * 8, isbg, D_8010BE80.n * 2);
    D_8010BE80.unk10 = func_800193C0((D_8010BE80.n * 2) + (D_8010BE80.w * 8));
    if (D_8010BE80.unk10 == 0) return -1;
    memset(D_8010BE80.unk10, 0x20, D_8010BE80.n);
    D_8010BE80.unk14 = &((u8*)D_8010BE80.unk10)[D_8010BE80.n];
    memset(D_8010BE80.unk14, 1, D_8010BE80.n);
    D_8010BE80.unk1C = 1;
    D_8010BE80.unk18 = &((u8*)D_8010BE80.unk14)[D_8010BE80.n];
    return 0;
}


void func_8004A488(void) {
    func_80019478(D_8010BE80.unk10);
    D_8010BE80.unk10 = 0;
}


void func_8004A4BC(void) {
    memmove(D_8010BE80.unk10, &((u8*)D_8010BE80.unk10)[D_8010BE80.w], D_8010BE80.n - D_8010BE80.w);
    memset(&((u8*)D_8010BE80.unk10)[D_8010BE80.n - D_8010BE80.w], 0x20, D_8010BE80.w);
    memset(&((u8*)D_8010BE80.unk14)[D_8010BE80.n - D_8010BE80.w], D_8010BE80.unk1C, D_8010BE80.w);
    D_8010BE80.unk20 = (D_8010BE80.n - D_8010BE80.w);
}


void func_8004A544(char arg0) {
    if (D_8010BE80.unk20 >= D_8010BE80.n) {
        func_8004A4BC();
    }
    D_8010BE80.unk10[D_8010BE80.unk20] = arg0;
    D_8010BE80.unk14[D_8010BE80.unk20] = D_8010BE80.unk1C;
    D_8010BE80.unk20 += 1;
}


s32 func_8004A5C8(u8* arg0) {
    s32 var_s0 = 1;

    switch (arg0[0]) {
    default:
        break;
    case 10:
    case 13:
        if (((D_8010BE80.unk20 / D_8010BE80.w) + 1) * D_8010BE80.w >= D_8010BE80.n) {
            func_8004A4BC();
        } else {
            D_8010BE80.unk20 = ((D_8010BE80.unk20 / D_8010BE80.w) + 1) * D_8010BE80.w;
        }
        break;
    case 1:
        D_8010BE80.unk1C = arg0[1];
        if (D_8010BE80.unk1C >= 8) {
            D_8010BE80.unk1C = 1;
        }
        var_s0 = 2;
    }
    return var_s0;
}


void func_8004A6BC(u8* arg0) {
    while (*arg0 != 0) {
        if (*arg0 < 0x20) {
            arg0 = &arg0[func_8004A5C8(arg0)];
        } else {
            func_8004A544(*arg0);
            arg0++;
        }
    }
}


void func_8004A718(void) {
    s32 temp = D_8010BE80.n;
    memset(D_8010BE80.unk10, ' ', temp);
    memset(D_8010BE80.unk14, D_8010BE80.unk1C, temp);
    D_8010BE80.unk20 = 0;
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004A76C);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004A960);


u8 (* func_8004AA8C(s32 arg0))[4] {
    return &D_800A9818[arg0];
}

// Get resistance.
s32 func_8004AAA0(s32 resist, s32 elem) {
    u8 var_v0 = D_800A9034[(resist * 8) + elem / 2];
    if (!(elem & 1)) {
        var_v0 >>= 4;
    }
    return var_v0 & 0xF;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004AADC);

// Get demon's HP.
s16 func_8004AB60(s32 d) {
    return D_800B72A0[d].hp;
}


// Get demon's MP.
s16 func_8004AB88(s32 d) {
    return D_800B72A0[d].mp;
}


s32 func_8004ABB0(s32 arg0) {
    if (arg0 < 0) {
        return -1;
    } else if (arg0 >= 295) {
        return D_800A9A2C[arg0 - 294];
    } else {
        return D_800B72A0[arg0].race;
    }
}


s32 func_8004AC04(s32 arg0) {
    return func_8004B608(func_8004ABB0(arg0));
}


// Get demon's resistance type.
s32 func_8004AC2C(s32 arg0) {
    return D_800B72A0[arg0].resist;
}


u8 func_8004AC54(s32 arg0) {
    return D_800B72A0[arg0].atkn;
}


u32 func_8004AC7C(s32 arg0) {
    return D_800B72A0[arg0].moon >> 4;
}


s32 func_8004ACA4(s32 arg0) {
    return D_800B72A0[arg0].moon & 0xF;
}


u32 func_8004ACCC(s32 arg0) {
    return D_800B72A0[arg0].unk15 >> 4;
}


s32 func_8004ACF4(s32 arg0) {
    return D_800B72A0[arg0].unk15 & 0xF;
}


u32 func_8004AD1C(s32 arg0) {
    return D_800B72A0[arg0].unk17 >> 4;
}


s32 func_8004AD44(s32 arg0) {
    return D_800B72A0[arg0].unk17 & 0xF;
}


s32 func_8004AD6C(s32 arg0) {
    return func_8004AD44(arg0);
}


s32 func_8004AD8C(s32 arg0) {
    return D_800B72A0[arg0].drop;
}


s32 func_8004ADB4(s32 arg0) {
    return D_800B72A0[arg0].alignment;
}


s32 func_8004ADDC(s32 arg0) {
    return D_800B72A0[arg0].level;
}


u8 func_8004AE04(s32 arg0) {
    return D_800B72A0[arg0].unk19;
}


// Get demon's magnetite cost.
s32 func_8004AE2C(s32 arg0) {
    return D_800B72A0[arg0].cp;
}


s32 func_8004AE54(s32 arg0) {
    s32 var_v0 = func_8004ADDC(arg0) * 8;
    return var_v0 == 0 ? 1 : var_v0;
}


s32 func_8004AE84(s32 arg0) {
    return func_8004ADDC(arg0) * 4;
}


u8 func_8004AEA4(s32 tbl) {
    return EncounterTables[(tbl * 16) + (func_8004E780() & 0xF)];
}


s32 func_8004AEEC(s32 arg0, s32 arg1) {
    s32 var_a2;

    for (var_a2 = 0; (*D_800A7F0C[arg0])[var_a2] != arg1; var_a2++);
    if (var_a2 >= 16) return -1;
    else return var_a2;
}


s32 func_8004AF48(s32 arg0) {
    return func_8004AADC(0, arg0);
}


s32 func_8004AF6C(s32 arg0) {
    s8 sp10[8] = {
        0, -1, -2, -3,
        3, 2, 1, 0
    };
    s32 var_s0 = func_8004AC7C(arg0);
    
    if (var_s0 >= 8) {
        var_s0 -= 7;
    } else {
        var_s0 += sp10[(func_8004E780() & 7)];
        if (var_s0 <= 0) {
            var_s0 = 1;
        } else if (var_s0 >= 9) {
            var_s0 = 8;
        }
    }
    return var_s0;
}


s32 func_8004B014(void) {
    return D_800A9A3C[func_8004ABB0()];
}


s32 func_8004B044(s32 tbl, s32 level) {
    s32 i;
    u8* var_s1 = &EncounterTables[tbl * 16];
    
    for (i = 0; i < 16; i++) {
        if (func_8004ADDC(*var_s1++) < level) return 1;
    }
    return 0;
}


s32 func_8004B0B4(s32 arg0) {
    return D_800A9554[arg0].unk2;
}


s32 func_8004B0D8(s32 arg0) {
    return D_800A9554[arg0].unk0 & 0xF;
}


s32 func_8004B0FC(s32 arg0) {
    return D_800A9554[arg0].unk0 & 0xF0;
}


s32 func_8004B120(s32 arg0) {
    return D_800A9554[arg0].unk3;
}


s32 func_8004B144(s32 arg0) {
    return D_800A9554[arg0].unk4;
}


s32 func_8004B168(s32 arg0) {
    return D_800A9554[arg0].unk1;
}


u8 * func_8004B18C(s32 arg0) {
    return D_800A7FF8[arg0];
}


u8 * func_8004B1A8(s32 arg0) {
    return D_800A8214[arg0];
}


s32 func_8004B1C4(s32 arg0) {
    u16 temp_v1 = D_800A82B4[arg0][0];
    s32 temp_s0 = temp_v1 * 10;
    if (!func_8004C06C(FLAG_CURRENCY_CHANGED)) {
        temp_s0 *= 10;
    }
    return temp_s0;
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004B228);


s32 func_8004B290(s32 arg0) {
    return D_800AC9DC[arg0];
}


u8 (* func_8004B2AC(s32 arg0))[3] {
    return &D_800AC9BC[arg0];
}


s32 func_8004B2C4(s32 arg0) {
    if (arg0 < 0x40) {
        return 1;
    } else if (arg0 < 0x50) {
        return 2;
    } else if (arg0 < 0x60){
        return 4;
    } else if (arg0 < 0x78) {
        return 8;
    } else if (arg0 < 0x90) {
        return 16;
    } else if (arg0 < 0xA0) {
        return 32;
    } else if (arg0 < 0xB0) {
        return 64;
    } else if (arg0 < 0xE4) {
        s32 sp10;
        s32 var_v1;
        
        func_8004B3B8(arg0, 0xA, &sp10);
        var_v1 = (sp10 * 8) & 0x200;
        if (sp10 & 0x80) {
            var_v1 |= 0x400;
        }
        return var_v1;
    } else if (arg0 < 0xF0) {
        return 128;
    } else {
        return 256;
    }
}


void func_8004B37C(u8* arg0, u8* arg1) {
    s32 var_v1;

    for (var_v1 = 0; var_v1 < 3; var_v1++) {
        *arg1 = *arg0 >> 4;
        arg1++;
        *arg1 = *arg0 & 0xF;
        arg0++;
        arg1++;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004B3B8);

u8 func_8004B528(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_t0;
    u8 (* var_a3)[4] = &D_800AC9F0[0];
    
    for (var_t0 = 0; var_t0 < 8; var_t0++, var_a3++) {
        if ((arg0 != (*var_a3)[0]) && (arg0 != (*var_a3)[1]) && (arg0 != (*var_a3)[2])) {
            continue;
        } else if ((arg1 == (*var_a3)[0]) || (arg1 == (*var_a3)[1]) || (arg1 == (*var_a3)[2])) {
            if ((arg2 == (*var_a3)[0]) || (arg2 == (*var_a3)[1]) || (arg2 == (*var_a3)[2])) {
                return (*var_a3)[3];
            }
        }
    }
    return 0xFF;
}


s32 func_8004B5F0(s32 arg0) {
    return D_800ACA10[arg0 - 0xE4];
}


s32 func_8004B608(s32 arg0) {
    return D_800ACA1C[arg0];
}


s32 func_8004B620(s32 arg0) {
    return D_800ACA44[arg0];
}


s32 func_8004B638(s32 arg0) {
    u32 var_v1;
    
    for (var_v1 = 0; var_v1 < 12; var_v1++) {
        if (D_800ACA6C[var_v1] == arg0) return 1;
    }
    return 0;
}


// Get name of item.
u16 * func_8004B674(s32 arg0) {
    return ItemNames[arg0];
}


// Get name of demon.
u16 * func_8004B690(s32 arg0) {
    return DemonNames[arg0];
}


// Get name of skill.
u16 * func_8004B6AC(s32 arg0) {
    return SkillNames[arg0];
}


// Get name of demon's race.
u16 * func_8004B6C8(s32 arg0) {
    return DemonRaces[arg0];
}


void func_8004B6E4(s32 arg0, void * arg1) {
    D_8010BEA8[arg0] = arg1;
}


void func_8004B6FC(s32 arg0) {
    func_80019478(D_8010BEA8[arg0]);
    D_8010BEA8[arg0] = NULL;
}


void* func_8004B738(s32 arg0, s32 arg1) {
    u16* temp_a0 = D_8010BEA8[arg0];
    
    return &temp_a0[temp_a0[0]] + (temp_a0[arg1 + 1]);
}


void func_8004B770(void * arg0) {
    func_8004B6E4(0, arg0);
}


void * func_8004B794(s32 arg0) {
    return func_8004B738(0, arg0);
}


void func_8004B7B8(s32 arg0, void * arg1) {
    func_8004B6E4(arg0, arg1);
}


void * func_8004B7D8(s32 arg0, s32 arg1) {
    return func_8004B738(arg0, arg1);
}


void func_8004B7F8(void * arg0) {
    func_8004B6E4(2, arg0);
}


void * func_8004B81C(s32 arg0) {
    return func_8004B738(2, arg0);
}


void * func_8004B840(s32 arg0) {
    return func_8004B738(2, arg0 + 0x100);
}


void func_8004B864(void * arg0) {
    func_8004B6E4(1, arg0);
}


void * func_8004B888(s32 arg0) {
    return func_8004B738(1, arg0);
}


void func_8004B8AC(void * arg0) {
    func_8004B6E4(3, arg0);
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004B8D0);

void * func_8004B918(s32 arg0) {
    return func_8004B888(arg0 + 9);
}


void * func_8004B938(s32 arg0) {
    return func_8004B888(arg0 + 0x1E4);
}


void * func_8004B958(s32 arg0) {
    return func_8004B888(arg0 + 0x174);
}


void * func_8004B978(s32 arg0) {
    return func_8004B888(arg0);
}


void * func_8004B998(s32 arg0) {
    return func_8004B888(arg0 + 0x1C);
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004B9B8);

void func_8004BB10(struct character_data * arg0) {
    func_8004B9B8(arg0->level, &arg0->str, &arg0->unk4E);
}


s32 func_8004BB3C(s32 exp) {
    s32 var_v1;

    for (var_v1 = 1; var_v1 < 100; var_v1++) {
        if (D_800ACA78[var_v1] > exp) return var_v1;
    }
    return 99;
}


s32 func_8004BB80(s32 arg0) {
    return D_800ACA78[arg0 - 1];
}


s32 func_8004BBA0(s32 arg0) {
    return func_8004ADDC(arg0) * 32;
}


void func_8004BBC0(void) {
    s32 i;

    bzero(D_800B72AC, 0x173C);
    for (i = 0; i < 256; i++) {
        D_800B72AC->inventory[var_s0].item = var_s0;
    }
    for (i = 0; i < 24; i++) {
        func_8004BCD4(&D_800B72AC->characters[var_s0], var_s0);
    }
    for (i = 0; i < 6; i++) {
        D_800B72AC->party[var_s0] = -1;
    }
    func_8004C08C(0xFF);
    for (i = 0; i < 6; i++) {
        func_8004DC84(i);
        func_8004C94C(i, func_8004C92C(i));
        func_8004C988(i, func_8004C9A4(i));
    }
    func_8004C6E8(5);
    func_8006B960();
    func_8004C530(0, 1, 0, 2);
}


// Load the given human into the given character slot with default stats.
void func_8004BCD4(struct character_data * chara, s32 human) {
    u16 alignment_lookup[4] = {
        0x8000, 0x8000,
        0x0000, 0xFF00
    };
    u8 gender_lookup[4] = {
        0, 1, 0, 0
    };

    bzero(chara, 0x7C);
    chara->base_stats.itl = 5;
    chara->base_stats.str = 5;
    chara->base_stats.vit = 5;
    chara->base_stats.mag = 5;
    chara->base_stats.lck = 5;
    chara->base_stats.spd = 5;
    chara->level = 1;
    chara->stats = chara->base_stats;
    chara->gun = 0xFFFF;
    chara->sword = 0xFFFF;
    chara->armor = 0xFFFF;
    chara->helmet = 0xFFFF;
    chara->leggings = 0xFFFF;
    chara->glove = 0xFFFF;
    chara->bullets = 0xFFFF;
    chara->slot = human;
    if (human < 4) {
        chara->gender = gender_lookup[human];
        chara->alignment = alignment_lookup[human];
        chara->id = (human - 0x8000);
    }
}


void func_8004BDF8(s32 arg0) {
    u8 sp10[21] = { // Once again they use a 1D array where a 2D array would make more sense.
        0x7, 0x42, 0x63, 0x7C, 0x93, 0xA4, 0x53,
        0x1, 0x41, 0x60, 0x78, 0x90, 0xA0, 0x50,
        0x3, 0x42, 0x61, 0x79, 0x91, 0xA1, 0x50
    };
    s32 i;

    if (arg0 - 1 >= 0) {
        for (i = 0; i < 7; i++) {
            func_8004CDFC(arg0, i, sp10[((arg0 - 1) * 7) + i]);
            func_8004DB70(arg0);
        }
    }
}


// Load the given demon into the given character slot in memory.
void func_8004BED8(s32 slot, s32 demon) {
    s32 var_a0;
    
    struct character_data * temp_s2 = &D_800B72AC->characters[slot];
    struct demon_data * temp_s3 = &D_800B72A0[demon];
    bzero(temp_s2, 0x7C);
    temp_s2->slot = slot;
    temp_s2->id = demon;
    temp_s2->flags = -0x8000;
    temp_s2->gender = temp_s3->race;
    temp_s2->max_hp = temp_s2->hp = temp_s3->hp;
    temp_s2->max_mp = temp_s2->mp = temp_s3->mp;
    temp_s2->level = temp_s3->level;
    temp_s2->alignment = (temp_s3->alignment << 8);
    func_8004CCB0(slot, 0xA);
    func_8006B91C(slot, 0xA);
    temp_s2->stats.str = temp_s3->str;
    temp_s2->stats.itl = temp_s3->itl;
    temp_s2->stats.mag = temp_s3->mag;
    temp_s2->stats.vit = temp_s3->vit;
    temp_s2->stats.spd = temp_s3->spd;
    temp_s2->stats.lck = temp_s3->lck;
    temp_s2->base_stats = temp_s2->stats;
    temp_s2->alignment = (temp_s3->alignment << 8);
    for (var_a0 = 0; var_a0 < 3; var_a0++) {
        temp_s2->skills[var_a0] = temp_s3->skills[var_a0];
    }
    func_8004B9B8(temp_s2->level, &temp_s2->stats, &temp_s2->unk4E);
}


// Get event flag.
s32 func_8004C06C(u32 flag) {
    return D_800B72AC->event_flags[(flag / 8)] >> (flag & 7) & 1;
}


// Set event flag.
void func_8004C08C(u32 flag) {
    D_800B72AC->event_flags[flag / 8] |= (1 << (flag & 7));
}


// Clear event flag.
void func_8004C0B4(u32 flag) {
    D_800B72AC->event_flags[flag / 8] &= ~(1 << (flag & 7));
}


s32 func_8004C0E0(s32 arg0, s32 arg1) {
    s32 var_v1 = D_800B72AC->unk2[arg0];
    var_v1 += arg1;
    if (var_v1 < 0) {
        var_v1 = 0;
    } else if (var_v1 >= 0x100) {
        var_v1 = 0xFF;
    }
    D_800B72AC->unk2[arg0] = var_v1;
    return var_v1;
}


s32 func_8004C130(s32 arg0) {
    return D_800B72AC->unk2[arg0];
}


void func_8004C148(s32 arg0, u8 arg1) {
    D_800B72AC->unk1[arg0] = arg1;
}


s32 func_8004C15C(s32 arg0) {
    return D_800B72AC->unk1[arg0];
}


// Get reconstruction flag.
s32 func_8004C174(u32 arg0) {
    return D_800B72AC->recon_flags[arg0 / 8] >> (arg0 & 7) & 1;
}


// Set reconstruction flag.
void func_8004C194(u32 arg0) {
    D_800B72AC->recon_flags[arg0 / 8] |= 1 << (arg0 & 7);
}


// Set terminal flag.
void func_8004C1BC(s32 arg0) {
    D_800B72AC->terminal_flags |= (1 << arg0);
}


// Unset terminal flag.
// Removes all appropriate terminal flags for the section of the story you're in, then unsets the given flag.
u16 func_8004C1D8(s32 arg0) {
    u16 temp_s1 = ~(1 << arg0);
    u16 temp_s0 = D_800B72AC->terminal_flags;

    if (func_8004C06C(FLAG_APOCALYPSE)) {
        temp_s0 &= 0b1111111111111100;
    } else {
        temp_s0 |= 0b0000000000000011;
    }
    if (func_8004C06C(FLAG_FLOOD)) {
        temp_s0 &= 0b0011000110000000;
    }
    return temp_s0 & temp_s1;
}


// Get treasure flag.
s32 func_8004C248(u32 arg0) {
    return D_800B72AC->treasure_flags[arg0 / 8] >> (arg0 & 7) & 1;
}


// Set treasure flag.
void func_8004C268(u32 arg0) {
    D_800B72AC->treasure_flags[arg0 / 8] |= 1 << (arg0 & 7);
}


s32 func_8004C290(u32 arg0) {
    return D_800B72AC->unk1296[arg0 / 8] >> (arg0 & 7) & 1;
}


void func_8004C2B0(u32 arg0) {
    D_800B72AC->unk1296[arg0 / 8] |= 1 << (arg0 & 7);
}


void func_8004C2D8(u32 arg0) {
    D_800B72AC->unk1296[arg0 / 8] &= ~(1 << (arg0 & 7));
}


void func_8004C304(void) {
    s16 var_a1;

    for (var_a1 = 0; var_a1 < 16; var_a1++) {
        D_800B72AC->unk1296[var_a1] = 0;
    }
}


// Get analysis flag.
s32 func_8004C33C(u32 arg0) {
    if (arg0 >= 256) return 0;
    return D_800B72AC->analysis_flags[arg0 / 8] >> (arg0 & 7) & 1;
}


// Set analysis flag.
void func_8004C370(u32 arg0) {
    if (arg0 < 0x100) {
        D_800B72AC->analysis_flags[arg0 / 8] |= 1 << (arg0 & 7);
    }
}


// Get moon phase without subphase.
s32 func_8004C3A8(void) {
    return (D_800B72AC->moon_phase >> 4) & 0xF;
}


// Get moon phase ID.
s32 func_8004C3C4(void) {
    u8 sp0[16] = {
        0, 1, 2, 3,
        4, 5, 6, 7,
        8, 7, 6, 5,
        4, 3, 2, 1
    };
    return sp0[(D_800B72AC->moon_phase >> 4) & 0xF];
}


// Get moon phase with subphase.
s32 func_8004C438(void) {
    return D_800B72AC->moon_phase;
}


// Increment moon (sub)phase by the given amount.
void func_8004C44C(s32 arg0) {
    D_800B72AC->last_moon_phase = D_800B72AC->moon_phase;
    D_800B72AC->moon_phase += arg0;
    D_800B72AC->moon_phase &= 0xFF;
    func_8004FA60();
}


// Get if the moon phase has changed.
s32 func_8004C488(void) {
    return (D_800B72AC->last_moon_phase & 0xF0) != (D_800B72AC->moon_phase & 0xF0);
}


void func_8004C4AC(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    bzero(D_800B72AC->unk12A8, 0x24);
    D_800B72AC->unk12A8[1] = func_80044114();
    D_800B72AC->unk12A8[2] = arg0;
    D_800B72AC->unk12A8[3] = arg1;
    D_800B72AC->unk12A8[5] = arg2;
    D_800B72AC->unk12A8[4] = arg3;
}


s32* func_8004C524(void) {
    return D_800B72AC->unk12A8;
}


void func_8004C530(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    bzero(D_800B72AC->unk12CC, 0x24);
    D_800B72AC->unk12CC[1] = func_80044114();
    D_800B72AC->unk12CC[2] = arg0;
    D_800B72AC->unk12CC[3] = arg1;
    D_800B72AC->unk12CC[5] = arg2;
    D_800B72AC->unk12CC[4] = arg3;
}


s32 (* func_8004C5A8(void))[9] {
    return D_800B72AC->unk12CC;
}


void func_8004C5B4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    bzero(D_800B72AC->unk12F0, 0x24);
    D_800B72AC->unk12F0[1] = func_80044114();
    D_800B72AC->unk12F0[2] = arg0;
    D_800B72AC->unk12F0[3] = arg1;
    D_800B72AC->unk12F0[5] = arg2;
    D_800B72AC->unk12F0[4] = arg3;
}


s32* func_8004C62C(void) {
    return D_800B72AC->unk12F0;
}


// Get character at position in active party.
s32 func_8004C638(s32 arg0) {
    return D_800B72AC->party[arg0];
}


void func_8004C650(s32 arg0, s32 arg1) {
    D_800B72AC->party[arg0] = arg1;
}


s16 func_8004C664(s32 arg0) {
    return D_800B72AC->organized_party[arg0];
}


void func_8004C67C(s32 arg0, s32 arg1) {
    D_800B72AC->organized_party[arg0] = arg1;
}


void func_8004C690(s32 arg0) {
    D_800B72AC->unk3 = arg0;
}


u16 func_8004C69C(void) {
    return D_800B72AC->unk3;
}


void func_8004C6B0(s32 arg0) {
    D_800B72AC->unk128C &= arg0;
}


void func_8004C6CC(u16 arg0) {
    D_800B72AC->unk128C |= arg0;
}


void func_8004C6E8(u16 arg0) {
    D_800B72AC->unk1294 = arg0;
}


s32 func_8004C6F4(void) {
    return D_800B72AC->unk1294;
}


s32 func_8004C708(s32 arg0) {
    return (D_800B72AC->money >= arg0);
}


void func_8004C724(s32 arg0) {
    D_800B72AC->money += arg0;
    if (D_800B72AC->money > 999999) {
        D_800B72AC->money = 999999;
    } else if (D_800B72AC->money < 0) {
        D_800B72AC->money = 0;
    }
}


s32 func_8004C760(void) {
    return D_800B72AC->money;
}


s32 func_8004C774(s32 arg0) {
    return (D_800B72AC->magnetite >= arg0);
}


// Change magnetite.
s32 func_8004C790(s32 arg0) {
    D_800B72AC->magnetite += arg0;
    if (D_800B72AC->magnetite > 99999) {
        D_800B72AC->magnetite = 99999;
    } else if (D_800B72AC->magnetite < 0) {
        D_800B72AC->magnetite = 0;
    }
    return D_800B72AC->magnetite;
}


// Get magnetite.
s32 func_8004C7D8(void) {
    return D_800B72AC->magnetite;
}


void func_8004C7EC(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg1] = D_800B72AC->characters[arg0];
}


// Get status.
u16 func_8004C85C(s32 arg0) {
    return D_800B72AC->characters[arg0].status;
}


s32 func_8004C87C(s32 arg0) {
    return (func_8004C85C(arg0) & 0xC000) != 0;
}


void func_8004C8A0(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].status &= arg1;
}


void func_8004C8C8(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].status |= arg1;
}


void func_8004C8F0(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].status = arg1;
}


// Get current HP.
s16 func_8004C90C(s32 arg0) {
    return D_800B72AC->characters[arg0].hp;
}


// Get max HP.
s16 func_8004C92C(s32 arg0) {
    return D_800B72AC->characters[arg0].max_hp;
}


// Set current HP.
void func_8004C94C(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].hp = arg1;
}


// Get current MP.
s16 func_8004C968(s32 arg0) {
    return D_800B72AC->characters[arg0].mp;
}


// Set current MP.
void func_8004C988(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].mp = arg1;
}


// Get max MP.
s16 func_8004C9A4(s32 arg0) {
    return D_800B72AC->characters[arg0].max_mp;
}


// Get character ID
s16 func_8004C9C4(s32 arg0) {
    return D_800B72AC->characters[arg0].id;
}


s32 func_8004C9E4(s32 arg0) {
    return D_800B72AC->characters[arg0].gender;
}


void func_8004CA04(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].exp = arg1;
}


// Get level.
s32 func_8004CA20(s32 arg0) {
    return D_800B72AC->characters[arg0].level;
}


void func_8004CA40(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].level = arg1;
}


s32 func_8004CA5C(s32 arg0) {
    return D_800B72AC->characters[arg0].flags != 0;
}


s32 func_8004CA7C(s32 arg0) {
    if (func_8004CA5C(arg0) && (func_8004C85C(arg0) & 0xF070) == 0) {
        return 1;
    } else {
        return 0;
    }
}


s32 func_8004CAC0(s32 arg0) {
    if (func_8004CA5C(arg0) && (func_8004C87C(arg0) == 0)) {
        return 1;
    } else {
        return 0;
    }
}


void func_8004CB04(s32 arg0) {
    D_800B72AC->characters[arg0].flags = 0;
}


void func_8004CB20(s32 arg0) {
    D_800B72AC->characters[arg0].flags = -0x8000;
}


void func_8004CB40(s32 arg0) {
    D_800B72AC->characters[arg0].flags = -0x4000;
}


void func_8004CB60(s32 arg0) {
    D_800B72AC->characters[arg0].flags &= 0xBFFF;
}


s32 func_8004CB88(s32 arg0) {
    return (D_800B72AC->characters[arg0].flags & 0x4000) > 0;
}


s32 func_8004CBB0(s32 arg0) {
    s32 var_v1;

    for (var_v1 = 0; var_v1 < 6; var_v1++) {
        if (D_800B72AC->party[var_v1] == arg0) return var_v1;
    }
    return -1;
}


s32 func_8004CBEC(s32 arg0) {
    s32 temp_v0 = func_8004CBB0(arg0);
    return (temp_v0 < 0) ? -1 : temp_v0 >= 3;
}


void func_8004CC20(s16 arg0) {
    s32 var_a1;

    for (var_a1 = 0; var_a1 < 6; var_a1++) {
        if (D_800B72AC->party[var_a1] < 0) {
            D_800B72AC->party[var_a1] = arg0;
            return;
        }
    }
}


void func_8004CC58(s32 arg0) {
    s32 var_a1;

    for (var_a1 = 0; var_a1 < 6; var_a1++) {
        if (D_800B72AC->party[var_a1] == arg0) {
            D_800B72AC->party[var_a1] = -1;
            func_8004CB60(arg0);
            return;
        }
    }
}


void func_8004CCB0(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].action = arg1;
}


s32 func_8004CCCC(s32 arg0) {
    return D_800B72AC->characters[arg0].action;
}


void func_8004CCEC(s32 arg0, s32 arg1) {
    D_800B72AC->characters[arg0].unk66 = arg1;
}


s32 func_8004CD08(s32 arg0) {
    return D_800B72AC->characters[arg0].unk66;
}


s32 func_8004CD28(s32 arg0, s16 * arg1) {
    s16 * var_s2 = (memset(arg1, -1, 0x10), arg1);
    s32 var_s3 = 0;
    s32 var_s1;

    for (var_s1 = 0; var_s1 < 7; var_s1++, var_s2++) {
        s32 temp_v0 = func_8004CE78(arg0, var_s1);
        if ((temp_v0 != -1) && (var_s1 != 6)) {
            s32 sp10;
            func_8004B3B8(temp_v0, 6, &sp10);
            if (sp10 & 0x100) {
                *var_s2 = temp_v0;
                var_s3 = 1;
            }
        }
    }
    return var_s3;
}


// Set equipment.
void func_8004CDFC(s32 chara, s32 slot, s32 item) {
    struct equipment* equip = &D_800B72AC->characters[chara].equipment;
    
    switch (slot) {
    case 0:
        equip->sword = item;
        break;
    case 1:
        equip->gun = item;
        break;
    case 2:
        equip->helmet = item;
        break;
    case 3:
        equip->armor = item;
        break;
    case 4:
        equip->glove = item;
        break;
    case 5:
        equip->leggings = item;
        break;
    case 6:
        equip->bullets = item;
    default:
        break;
    }
}


// Get equipment.
s32 func_8004CE78(s32 chara, s32 slot) {
    struct equipment* equip = &D_800B72AC->characters[chara].equipment;
    
    switch (slot) {
    case 0:
        return equip->sword;
    case 1:
        return equip->gun;
    case 2:
        return equip->helmet;
    case 3:
        return equip->armor;
    case 4:
        return equip->glove;
    case 5:
        return equip->leggings;
    case 6:
        return equip->bullets;
    default:
        return 0;
    }
}


// Get attack power.
s32 func_8004CF14(s32 chara, s32 gun) {
    return (gun) ? 
        D_800B72AC->characters[chara].gun_attack : 
        D_800B72AC->characters[chara].melee_attack;
}


// Get attack accuracy.
s32 func_8004CF54(s32 chara, s32 gun) {
    return (gun) ? 
        D_800B72AC->characters[chara].gun_accuracy :
        D_800B72AC->characters[chara].melee_accuracy;
}


// Get magic power.
s32 func_8004CF94(s32 chara) {
    return D_800B72AC->characters[chara].magic_power;
}


// Get magic effect.
s32 func_8004CFB4(s32 chara) {
    return D_800B72AC->characters[chara].magic_effect;
}


// Get evasion.
s32 func_8004CFD4(s32 chara) {
    return D_800B72AC->characters[chara].evasion;
}


// Get defense.
s32 func_8004CFF4(s32 chara) {
    return D_800B72AC->characters[chara].defense;
}


// Get strength stat.
u16 func_8004D014(s32 chara) {
    return D_800B72AC->characters[chara].stats.str;
}


// Get intelligence stat.
u16 func_8004D040(s32 chara) {
    return D_800B72AC->characters[chara].stats.itl;
}


// Get magic stat.
u16 func_8004D06C(s32 chara) {
    return D_800B72AC->characters[chara].stats.mag;
}


// Get vitality stat.
u16 func_8004D098(s32 chara) {
    return D_800B72AC->characters[chara].stats.vit;
}


// Get agility stat.
u16 func_8004D0C4(s32 chara) {
    return D_800B72AC->characters[chara].stats.spd;
}


// Get luck stat.
u16 func_8004D0F0(s32 chara) {
    return D_800B72AC->characters[chara].stats.lck;
}


s32 func_8004D11C(s32 chara, u32 stat) {
    s32 out;
    switch (stat) {
    case 0:
        out = func_8004D014(chara);
        break;
    case 1:
        out = func_8004D040(chara);
        break;
    case 2:
        out = func_8004D06C(chara);
        break;
    case 3:
        out = func_8004D098(chara);
        break;
    case 4:
        out = func_8004D0C4(chara);
        break;
    case 5:
        out = func_8004D0F0(chara);
        break;
    }
    return out;
}


// Limits a stat to the range 0-40.
s32 func_8004D1B8(s32 arg0) {
    if (arg0 < 0) {
        arg0 = 0;
    } else if (arg0 > 40) {
        arg0 = 40;
    }
    return arg0;
}


s32 func_8004D1DC(s32 chara, u32 stat, s32 change) {
    s32 out;
    struct stats* temp_s0 = &D_800B72AC->characters[chara].base_stats;
    
    switch (stat) {
    case 0:
        out = temp_s0->str = func_8004D1B8(temp_s0->str + change);
        break;
    case 1:
        out = temp_s0->itl = func_8004D1B8(temp_s0->itl + change);
        break;
    case 2:
        out = temp_s0->mag = func_8004D1B8(temp_s0->mag + change);
        break;
    case 3:
        out = temp_s0->vit = func_8004D1B8(temp_s0->vit + change);
        break;
    case 4:
        out = temp_s0->spd = func_8004D1B8(temp_s0->spd + change);
        break;
    case 5:
        out = temp_s0->lck = func_8004D1B8(temp_s0->lck + change);
        break;
    }
    return out;
}


s32 func_8004D2E0(s32 chara, s32 stat) {
    return func_8004D1DC(chara, stat, 0);
}


// Get whether the HP exceeds the maximum.
s32 func_8004D300(s32 chara) {
    return (D_800B72AC->characters[chara].hp >= D_800B72AC->characters[chara].max_hp);
}


// Get whether the MP exceeds the maximum.
s32 func_8004D32C(s32 chara) {
    return (D_800B72AC->characters[chara].mp >= D_800B72AC->characters[chara].max_mp);
}


// Set HP to max.
void func_8004D358(s32 chara) {
    if (D_800B72AC->characters[chara].hp < D_800B72AC->characters[chara].max_hp) {
        D_800B72AC->characters[chara].hp = D_800B72AC->characters[chara].max_hp;
    }
}


// Set MP to max.
void func_8004D394(s32 chara) {
    if (D_800B72AC->characters[chara].mp < D_800B72AC->characters[chara].max_mp) {
        D_800B72AC->characters[chara].mp = D_800B72AC->characters[chara].max_mp;
    }
}


// Change HP and cap at 999.
s16 func_8004D3D0(s32 arg0, s32 arg1) {
    struct character_data* temp_v1 = &D_800B72AC->characters[arg0];
    
    temp_v1->hp += arg1;
    if (temp_v1->hp < 0) {
        temp_v1->hp = 0;
    } else if ((arg0 < 16) && (temp_v1->hp > 999)) {
        temp_v1->hp = 999;
    }
    return temp_v1->hp;
}


// Change HP and cap at max.
s16 func_8004D42C(s32 arg0, s32 arg1) {
    struct character_data* temp_a0;

    func_8004D3D0(arg0, arg1);
    temp_a0 = &D_800B72AC->characters[arg0];
    if (temp_a0->hp > temp_a0->max_hp) {
        temp_a0->hp = temp_a0->max_hp;
    }
    return temp_a0->hp;
}


// Change HP by a percentage of the max.
void func_8004D488(s32 arg0, s32 arg1) {
    func_8004D3D0(arg0, (D_800B72AC->characters[arg0].hp * arg1) / 100);
}


// Change MP and cap at 999. Erroneously returns the HP value.
s16 func_8004D4E4(s32 arg0, s32 arg1) {
    struct character_data* temp_v1 = &D_800B72AC->characters[arg0];
    
    temp_v1->mp += arg1;
    if (temp_v1->mp < 0) {
        temp_v1->mp = 0;
    } else if (temp_v1->mp > 999) {
        temp_v1->mp = 999;
    }
    return temp_v1->hp;
}


// Change MP and cap at max. Erroneously returns the HP value.
s16 func_8004D538(s32 arg0, s32 arg1) {
    struct character_data* temp_v1 = &D_800B72AC->characters[arg0];
    
    temp_v1->mp += arg1;
    if (temp_v1->mp < 0) {
        temp_v1->mp = 0;
    } else if (temp_v1->max_mp < temp_v1->mp) {
        temp_v1->mp = temp_v1->max_mp;
    }
    return temp_v1->hp;
}


// Returns the provided character's resistance to the provided element.
s32 func_8004D59C(s32 chara, s32 elem) {
    s32 resistance;
    s32 i;
    s32 var_s1 = 1000;

    // Check if the provided character index is a human party member.
    if (chara < 4) { 
        // If it is human, we loop through their armor slots and check 
        // each of their resistances to the provided element, using the best resistance.
        for (i = 0; i < 4; i++) {
            // Get the character's armor.
            s32 armor = func_8004CE78(chara, i + 2);
            s32 out = armor;

            // If armor is present we continue.
            if (armor >= 0) {
                // Get the item's resistance value. 
                // No check is made for whether the provided item is actually armor,
                // so if a weapon were equipped in an armor slot this would use the attack number.
                func_8004B3B8(armor, 7, &out);

                // Lookup the resistance type's resistance to the element.
                resistance = func_8004AAA0(out + 0x24, elem);

                // If the resistance isn't a special case (reflect or absorb), 
                // then we check if it's better than the best known resistance,
                // and save it if it is. Otherwise we just return the value.
                // This also has the effect of meaning that an item that gives
                // reflect 1/2 equipped in an earlier slot will always take precedence,
                // even if an item in a later slot provides absorb or full reflect.
                if (resistance < 0xD) {
                    if (resistance < var_s1) {
                        var_s1 = resistance;
                    }
                } else {
                    return resistance;
                }
            }

        }

        // If we didn't find a resistance, just use 8/8, otherwise return the value we found.
        if (var_s1 == 1000) {
            return 8;
        } else {
            return var_s1;
        }
    } else {
        // If the provided character is a demon, we get their ID, 
        // find that demon's resistance type, and then return that type's 
        // resistance to the element we're checking.
        return func_8004AAA0(func_8004AC2C(func_8004C9C4(chara)), elem);
    }
}


s32 func_8004D680(s32 arg0) {
    s32 var_s0;
    s32 var_s1 = 0;

    for (var_s0 = 0; var_s0 < 6; var_s0++) {
        s16 temp_a0 = D_800B72AC->party[var_s0];
        if (temp_a0 >= 0) {
            u16 temp_v1 = func_8004D11C(temp_a0, arg0);
            var_s1 = max(temp_v1, var_s1);
        }
    }
    return var_s1;
}


s32 func_8004D700(u32 stat) {
    s32 var_s0 = func_8004D11C(16, stat);
    
    if (func_ovr2_80122214()) {
        u16 temp_v1 = func_8004D11C(20, stat);
        var_s0 = max(temp_v1, var_s0);
    }
    return var_s0;
}


s32 func_8004D764(void) {
    s32 var_s0;
    s32 var_s1 = 0;

    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_8004CA5C(var_s0)) {
            var_s1 += 1;
        }
    }
    return var_s1;
}


s32 func_8004D7B4(void) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_8004CAC0(var_s0)) return var_s0;
    }
    return 0;
}


s32 func_8004D7F4(s32 arg0, u32 arg1) {
    u16* var_s0 = &D_800ACC08;
    if ((arg1 & 0xFFFF) == 0) {
        return 0;
    }
    while (1) {
        if (arg1 & 0x8000) break;
        arg1 *= 2;
        var_s0++;
    }
    return (*var_s0 & func_8004C85C(arg0)) == 0;
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004D854);

void func_8004DB70(s32 arg0) {
    struct character_data* temp_s0 = &D_800B72AC->characters[arg0];
    struct stats* temp_s1 = &temp_s0->stat_mods;

    func_8004DCBC(&temp_s0->equipment, temp_s1);
    func_8004DDA8(temp_s0);
    func_8004E7F8(temp_s1, &temp_s0->base_stats, &temp_s0->stats);
    func_8004D854(temp_s0);
}


void func_8004DBD8(s32 arg0, s32 arg1) {
    struct character_data* temp_a0 = &D_800B72AC->characters[arg0];
    
    if (arg1 == 1) {
        temp_a0->melee_accuracy = (temp_a0->melee_accuracy * 7) / 8;
        temp_a0->gun_accuracy = (temp_a0->gun_accuracy * 7) / 8;
        temp_a0->defense = (temp_a0->defense * 9) / 8;
        temp_a0->evasion = (temp_a0->evasion * 9) / 8;
    }
}


void func_8004DC84(s32 arg0) {
    func_8004DB70(arg0);
    func_8004DBD8(arg0, func_8004CBEC(arg0));
}


void func_8004DCBC(struct equipment* arg0, struct stats* arg1) {
    struct stats sp10;
    s16 sp18[7];
    s32 var_s1;

    bzero(arg1, 6);
    sp18[0] = arg0->sword;
    sp18[1] = arg0->gun;
    sp18[2] = arg0->helmet;
    sp18[3] = arg0->armor;
    sp18[4] = arg0->glove;
    sp18[5] = arg0->leggings;
    sp18[6] = arg0->bullets;
    for (var_s1 = 0; var_s1 < 7; var_s1++) {
        if (sp18[var_s1] >= 0) {
            func_8004B3B8(sp18[var_s1], 5, &sp10);
            func_8004E7F8(arg1, &sp10, arg1);
        }
    }
}


s32 func_8004DD88(s32 arg0, s32 arg1) {
    s32 temp_a0 = (arg0 + arg1) - 40;
    
    if (temp_a0 > 0) {
        arg1 -= temp_a0;
    }
    return arg1;
}


void func_8004DDA8(struct character_data* arg0) {
    struct stats* temp_s2 = &arg0->base_stats;
    struct stats* temp_s1 = &arg0->stat_mods;

    temp_s1->str = func_8004DD88(temp_s2->str, temp_s1->str);
    temp_s1->itl = func_8004DD88(temp_s2->itl, temp_s1->itl);
    temp_s1->mag = func_8004DD88(temp_s2->mag, temp_s1->mag);
    temp_s1->vit = func_8004DD88(temp_s2->vit, temp_s1->vit);
    temp_s1->spd = func_8004DD88(temp_s2->spd, temp_s1->spd);
    temp_s1->lck = func_8004DD88(temp_s2->lck, temp_s1->lck);
}


void func_8004DE54(struct equipment* arg0, s32* arg1, s32* arg2) {
    s32 sp10[4];
    s32 sp20[1];
    s32 var_s2;

    sp10[0] = arg0->helmet;
    sp10[1] = arg0->armor;
    sp10[2] = arg0->glove;
    sp10[3] = arg0->leggings;
    *arg2 = 0;
    *arg1 = 0;
    for (var_s2 = 0; var_s2 < 4; var_s2++) {
        s32 temp = sp10[var_s2];
        if (temp >= 0) {
            func_8004B3B8(temp, 8, &sp20);
            *arg1 += sp20[0];
            func_8004B3B8(temp, 9, &sp20);
            *arg2 += sp20[0];
        }
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004DF34);

void func_8004E000(s32 arg0) {
    s32 var_a0;
    u8* var_s0 = D_800ACC54[arg0];
    struct character_data* temp_s1 = &D_800B72AC->characters[arg0];
    s32 temp_v0 = func_8004DF34(arg0);
    
    for (var_a0 = 0; var_a0 < temp_v0; var_a0++) {
        temp_s1->skills[var_a0] = *var_s0++;
    }
    temp_s1->skills[var_a0] = 0xFF;
}


s32 func_8004E084(s32 arg0, s32 arg1) {
    return D_800B72AC->characters[arg0].skills[arg1];
}


s32 func_8004E0A8(s32 arg0, u8 arg1) {
    s32 var_s0 = 0;
    s32 var_s1 = 0;

    if (arg0 >= 4) {
        for (; var_s0 < 3; var_s0++) {
            u8 temp_a0 = func_8004E084(arg0, var_s0);
            if (temp_a0 != 0xFF) {
                if ((temp_a0 < 0x40) && (func_8004B0FC(temp_a0) & arg1)) {
                    var_s1 += 1;
                }
            }
        }
    } else {
        for (;; var_s0++) {
            u8 temp_a0 = func_8004E084(arg0, var_s0);
            if (temp_a0 != 0xFF) {
                if (func_8004B0FC(temp_a0) & arg1) {
                    var_s1 += 1;
                }
            } else {
                break;
            }
        }
    }
    return var_s1;
}


// Get the number of demons you can have summoned at once.
s32 func_8004E190(void) {
    s32 var_v0 = 3;

    if (func_8004C06C(FLAG_SUMMON_UPGRADE)) {
        var_v0 = 4;
    }
    return var_v0;
}


s32 func_8004E1C8(void) {
    s32 var_a1 = 0;
    s32 var_a0;

    for (var_a0 = 0; var_a0 < 6; var_a0++) {
        if (D_800B72AC->party[var_a0] >= 0) {
            var_a1 += 1;
        }
    }
    return var_a1;
}


s32 func_8004E204(s32 arg0) {
    s32 var_s0;

    for (var_s0 = 4; var_s0 < 16; var_s0++) {
        if (func_8004CA5C(var_s0)) {
            if ((func_8004C9C4(var_s0) == arg0)) {
                return var_s0;
            }
        }
    }
    return -1;
}


s32 func_8004E268(void) {
    s32 var_s0;
    s32 temp_v1 = func_8004EC1C();
    
    for (var_s0 = 4; var_s0 < temp_v1 + 4; var_s0++) {
        if (func_8004CA5C(var_s0) == 0) {
            return var_s0;
        }
    }
    return -1;
}


// Get the quantity of an item in the inventory.
u8 func_8004E2C8(s32 item) {
    struct inventory_entry* var_v1 = D_800B72AC->inventory;
    s32 var_a1;
    
    for (var_a1 = 0; var_a1 < 256; var_a1++) {
        if (var_v1[var_a1].item == item) {
            return var_v1[var_a1].quantity;
        }
    }
    return 0;
}


s32 func_8004E304(s32 item) {
    struct inventory_entry* var_s0 = D_800B72AC->inventory;
    s32 var_v1;
    
    for (var_v1 = 0; var_v1 < 256; var_v1++) {
        if (var_s0[var_v1].item == item) {
            return var_s0[var_v1].quantity + func_80064570(0, item);
        }
    }
    return 0;
}


s32 func_8004E364(s32 arg0, s32 arg1) {
    s32 var_t0;
    s32 var_v1 = 0;
    struct inventory_entry* var_a3 = D_800B72AC->inventory;
    
    for (var_t0 = 0; var_t0 < 256; var_t0++) {
        if (var_a3->item == arg0) {
            var_v1 = var_a3->quantity;
            var_v1 += arg1;
            if (var_v1 < 0) {
                var_v1 = 0;
            } else if (var_v1 >= 100) {
                var_v1 = 99;
            }
            var_a3->quantity = var_v1;
        }
        var_a3++;
    }
    return var_v1;
}


s32 func_8004E3D0(void) {
    s32 var_a0;
    struct inventory_entry* var_v1 = D_800B72AC->inventory;

    // Iterate through the player's inventory.
    for (var_a0 = 0; var_a0 < 256; var_a0++) {
        // Is this item present in the inventory?
        if (var_v1[var_a0].quantity != 0) {
            // Is this item a key item?
            if (var_v1[var_a0].item < 240) {
                return 1;
            }
        }
    }
    return 0;
}


s32 func_8004E420(void) {
    s32 var_a0;
    s32 var_a1 = 0;
    struct inventory_entry* var_v1 = D_800B72AC->inventory;
    
    for (var_a0 = 0; var_a0 < 256; var_a0++) {
        if ((var_v1[var_a0].quantity != 0) && ((u8)(var_v1[var_a0].item + 28) < 11)) {
            var_a1 += 1;
        }
    }
    return var_a1;
}


s32 func_8004E478(s32 arg0, struct inventory_entry* arg1) {
    s32 var_s0;
    s32 var_s3 = 0;

    for (var_s0 = 0; var_s0 < 256; var_s0++) {
        if (D_800B72AC->inventory[var_s0].quantity != 0) {
            if (func_8004B2C4(D_800B72AC->inventory[var_s0].item) & arg0) {
                if (arg1 != NULL) *arg1++ = D_800B72AC->inventory[var_s0];
                var_s3 += 1;
            }
        }
    }
    return var_s3;
}


s32 func_8004E534(s32 arg0, struct inventory_entry* arg1) {
    s32 var_s1;
    s32 var_s3 = 0;

    for (var_s1 = 0; var_s1 < 256; var_s1++) {
        if ((func_8004E304(D_800B72AC->inventory[var_s1].item) != 0) && 
            (func_8004B2C4(D_800B72AC->inventory[var_s1].item) & arg0)) {
            if (arg1 != NULL) *arg1++ = D_800B72AC->inventory[var_s1];
            var_s3 += 1;
        }
    }
    return var_s3;
}


// Get character's alignment as an ID.
s32 func_8004E600(s32 chara) {
    if ((D_800B72AC->characters[chara].alignment >> 8) < 0x70) {
        // Character is law aligned.
        return 0;
    } else if ((D_800B72AC->characters[chara].alignment >> 8) < 0x90) {
        // Character is neutral aligned.
        return 1;
    } else {
        // Character is chaos aligned.
        return 2;
    }
}


// Increment the provided character's alignment by the provided amount, so long as alignment isn't locked.
// Returns the new alignment as an ID.
s32 func_8004E648(s32 chara, s32 x) {
    if (!func_8004C06C(FLAG_ALIGNMENT_LOCKED)) {
        s32 align = D_800B72AC->characters[chara].alignment;
        align += x;
        if (align < 0) {
            align = 0;
        } else if (align > 0xFFFF) {
            align = 0xFFFF;
        }
        D_800B72AC->characters[chara].alignment = align;
    }
    return func_8004E600(chara);
}


// Set the provided character's alignment to the given value.
void func_8004E6E0(s32 chara, s32 a) {
    D_800B72AC->characters[chara].alignment = a;
}


// Get the provided character's alignment.
s32 func_8004E6FC(s32 arg0) {
    return D_800B72AC->characters[arg0].alignment;
}


// Check alignment compatibility.
s32 func_8004E71C(s32 arg0, s32 arg1) {
    s32 temp_s0 = func_8004E600(arg0);
    s32 temp_v1 = func_8004E600(arg1);
    
    if (temp_s0 == 0) {
        if (temp_v1 == 2) {
            return 0;
        }
    } else if (temp_s0 == 2) {
        if (temp_v1 == 0) {
            return 0;
        }
    }
    return 1;
}


// Get a random 8-bit value.
u32 func_8004E780(void) {
    return rand();
}


// Performs a rounded division operation.
s32 func_8004E7A0(s32 dividend, s32 divisor) {
    if (divisor == 0) {
        divisor = 1;
    }
    return (dividend / divisor) + ((dividend % divisor) >= (divisor / 2));
}


void func_8004E7F8(struct stats* arg0, struct stats* arg1, struct stats* arg2) {
    arg2->str = arg0->str + arg1->str;
    arg2->itl = arg0->itl + arg1->itl;
    arg2->mag = arg0->mag + arg1->mag;
    arg2->vit = arg0->vit + arg1->vit;
    arg2->spd = arg0->spd + arg1->spd;
    arg2->lck = arg0->lck + arg1->lck;
}


// Copies the provided name into the character's name slot.
void func_8004E874(s32 arg0, u16* arg1) {
    s32 var_a2;
    u16* var_v1 = D_800B72AC->names[arg0];

    for (var_a2 = 0; var_a2 < 9; var_a2++) {
        *var_v1++ = *arg1++;
    }
}


// Get the character's name.
u16* func_8004E8B4(s32 arg0) {
    return D_800B72AC->names[arg0];
}


u16 * func_8004E8D0(void) {
    if (D_800B72B0->unk14 < 0) {
        return func_8004E8B4(D_800B72B0->unk14 & 0xF);
    } else {
        return func_8004B690(D_800B72B0->unk14);
    }
}


void func_8004E914(s32 arg0) {
    D_800B72B0->unk0 = arg0;
}


s32 func_8004E920(void) {
    return D_800B72B0->unk0;
}


void func_8004E934(s32 arg0, s32 arg1) {
    D_800B72B0->unk4[arg1] = arg0;
}


s16 func_8004E948(s32 arg0) {
    return D_800B72B0->unk4[arg0];
}


void func_8004E960(s32 arg0) {
    D_800B72B0->unk18 = arg0;
}


s16 func_8004E96C(void) {
    return D_800B72B0->unk18;
}


void func_8004E980(s32 arg0, s32 arg1) {
    D_800B72B0->unk8[arg1] = arg0;
}


s16 func_8004E994(s32 arg0) {
    return D_800B72B0->unk8[arg0];
}


void func_8004E9AC(s32 arg0, s32 arg1) {
    D_800B72B0->unk10[arg1] = arg0;
}


s16 func_8004E9C0(s32 arg0) {
    return D_800B72B0->unk10[arg0];
}


void func_8004E9D8(s32 arg0) {
    D_800B72B0->unk16 = arg0;
}


s16 func_8004E9E4(void) {
    return D_800B72B0->unk16;
}


void func_8004E9F8(s32 arg0) {
    D_800B72B0->unk1E = arg0;
}


s16 func_8004EA04(void) {
    return D_800B72B0->unk1E;
}


void func_8004EA18(s32 arg0) {
    D_800B72B0->unk20 = arg0;
}


s16 func_8004EA24(void) {
    return D_800B72B0->unk20;
}


void func_8004EA38(s32 arg0, s32 arg1) {
    D_800B72B0->unk22[arg1] = arg0;
}


s16 func_8004EA4C(s32 arg0) {
    return D_800B72B0->unk22[arg0];
}


void func_8004EA64(s32 arg0) {
    D_800B72B0->unk14 = arg0;
}


s16 func_8004EA70(void) {
    return D_800B72B0->unk14;
}


void func_8004EA84(u16 arg0) {
    D_800B72B0->unk28 = arg0;
}


s32 func_8004EA90(void) {
    return D_800B72B0->unk28;
}


void func_8004EAA4(s32 arg0) {
    D_800B72B0->unk1A = arg0;
}


s32 func_8004EAB0(void) {
    return D_800B72B0->unk1A;
}


void func_8004EAC4(s32 arg0) {
    D_800B72B0->unk1C = arg0;
}


s32 func_8004EAD0(void) {
    return D_800B72B0->unk1C;
}


void func_8004EAE4(s32 arg0) {
    s32 var_s0;
    s32 temp_v0 = func_8004E6FC(arg0);
    
    if (temp_v0 == 0) {
        var_s0 = -25;
    } else if (temp_v0 == 2) {
        var_s0 = 25;
    } else {
        return;
    }
    func_8004E648(0, var_s0);
    func_8004E648(1, var_s0);
}


void func_8004EB38(s32 arg0, s32 arg1) {
    func_8004EAE4(arg0);
    func_8004CB40(arg0);
    func_8004C650(arg1, arg0);
}


void func_8004EB7C(s32 arg0) {
    func_8004CC58(arg0);
    func_8004C8A0(arg0, 0xF000);
}


void func_8004EBAC(s32 arg0) {
    s32 var_s0;

    func_8004CC58(arg0);
    func_8004CB04(arg0);
    if (func_8004C85C(arg0) & 0xFFFF) {
        var_s0 = 100;
    } else {
        var_s0 = 25;
    }
    func_8004E648(0, var_s0);
    func_8004E648(1, var_s0);
    func_8004C8F0(arg0, 0);
}


s32 func_8004EC1C(void) {
    s32 var_s0 = 6;

    if (func_8004C06C(FLAG_COMP_UPGRADE_1)) {
        var_s0 = 8;
    }
    if (func_8004C06C(FLAG_COMP_UPGRADE_2)) {
        var_s0 += 2;
    }
    if (func_8004C06C(FLAG_COMP_UPGRADE_3)) {
        var_s0 += 2;
    }
    return var_s0;
}


s32 func_8004EC7C(void) {
    s32 var_s0;
    s32 var_s1 = 0;
    
    for (var_s0 = 0; var_s0 < 12; var_s0++) {
        if (func_8004CA5C(var_s0 + 4)) {
            var_s1 += 1;
        }
    }
    return var_s1;
}


void func_8004ECCC(u16 arg0) {
    D_800B72AC->encounter_chance = arg0;
}


void func_8004ECD8(s32 arg0) {
    s32 var_v1 = D_800B72AC->encounter_chance;
    var_v1 += arg0;
    if (var_v1 >= 2551) {
        var_v1 = 2550;
    } else if (var_v1 < 0) {
        var_v1 = 0;
    }
    D_800B72AC->encounter_chance = var_v1;
}


s16 func_8004ED18(void) {
    return D_800B72AC->encounter_chance;
}


// Gets if Pascal is in the party.
s32 func_8004ED2C(void) {
    if (func_8004C06C(FLAG_PASCAL_TELEPORT)) return 0;
    if (func_8004C06C(FLAG_PASCAL_FUSED)) return 0;
    if (func_8004C06C(FLAG_PASCAL_JOINED)) return 1;
    else return 0;
}


// Gets which section of the story we're in, which updates the field map.
s32 func_8004ED78(void) {
    if (!func_8004C06C(FLAG_APOCALYPSE)) return HAKAI_BEF;
    if (!func_8004C06C(FLAG_NEBIROS)) return HAKAI_AFT;
    if (!func_8004C06C(FLAG_FLOOD)) return NEBI_KILL;
    else return KOZUI;
}


// Debug function to set the story section.
void func_8004EDD0(s32 arg0) {
    switch (arg0) {
    case HAKAI_BEF:
        func_8004C0B4(FLAG_APOCALYPSE); // Unset
        func_8004C0B4(FLAG_NEBIROS); // Unset
        func_8004C0B4(FLAG_FLOOD); // Unset
        break;
    case HAKAI_AFT:
        func_8004C08C(FLAG_APOCALYPSE); // Set
        func_8004C0B4(FLAG_NEBIROS); // Unset
        func_8004C0B4(FLAG_FLOOD); // Unset
        break;
    case NEBI_KILL:
        func_8004C08C(FLAG_APOCALYPSE); // Set
        func_8004C08C(FLAG_NEBIROS); // Set
        func_8004C0B4(FLAG_FLOOD); // Unset
        break;
    case KOZUI:
        func_8004C08C(FLAG_APOCALYPSE); // Set
        func_8004C08C(FLAG_NEBIROS); // Set
        func_8004C08C(FLAG_FLOOD); // Set
        break;
    }
}


s32 func_8004EE90(s32 arg0, s32 arg1) {
    s32 temp_s0;

    if (func_8004C06C(FLAG_NO_ENCOUNTERS)) return 0;
    temp_s0 = func_8004E7A0(arg1 + 3, 4) + 10;
    temp_s0 *= (func_8004E780() & 0xF);
    return ((temp_s0 + arg0) >= 255);
}


s32 func_8004EEFC(void) {
    if (func_8004C69C() & 0x80) {
        if (func_8004B044(0, func_8004CA20(0))) {
            return 1;
        }
    }
    return 0;
}


s32 func_8004EF50(void) {
    s32 sp10[12];

    func_8002F734(&sp10);
    func_8003A6DC(sp10[2], sp10[3], &sp10[10], &sp10[11]);
    if (func_8004EEFC(sp10[10]) == 0) {
        s32 var_s0 = func_8003A844(sp10[2], sp10[3]);
        if (func_8002F4A0()) {
            var_s0 = (var_s0 * 3) / 2;
        }
        return func_8004EE90(var_s0, func_8003A804(sp10[2], sp10[3]) & 0x7F);
    } else {
        return 0;
    }
}


s16 func_8004EFE8(s32 arg0, s32 arg1) {
    s32 temp = func_8004E7A0(arg1 + 3, 4) + 10;
    return ((temp + arg0) / D_80011460[0]);
}


s16 func_8004F058(void) {
    s32 sp10[12];

    func_8002F734(&sp10);
    if (!func_8004C06C(FLAG_NO_ENCOUNTERS)) {
        func_8003A6DC(sp10[2], sp10[3], &sp10[10], &sp10[11]);
        if (func_8004EEFC(sp10[10]) == 0) {
            s32 temp_v0 = func_8003A844(sp10[2], sp10[3]);
            if (temp_v0 != 0) {
                return func_8004EFE8(temp_v0, func_8003A804(sp10[2], sp10[3]) & 0x7F);
            }
        } else {
            return 0;
        }
    }
    func_8004ECCC(0);
    return 0;
}


s32 func_8004F100(s32 arg0, s32 arg1) {
    s32 temp_s0 = (func_8004E7A0(arg1 + 3, 4) + 10);
    temp_s0 *= (func_8004E780() & 0xF);
    
    return ((temp_s0 + arg0) >= 0xFF);
}


s32 func_8004F154(s32 arg0) {
    struct return_thing sp10;
    s16 temp_ret;
    u32 var_v0;

    if (func_8004C06C(FLAG_NO_ENCOUNTERS)) return 0;
    if (arg0 == 1) {
        func_8002F734(&sp10);
        func_8003A6DC(sp10.init_x, sp10.init_y, &sp10.unk28, &sp10.unk2C);
    } else {
        func_80017164(&sp10);
        func_800458A8(sp10.init_x, sp10.init_y, &sp10.unk28, &sp10.unk2C);
    }
    if (func_8004EEFC(sp10.unk28)) return 0;
    temp_ret = func_8004ED18();
    if (arg0 == 1) {
        if (func_8002F4A0()) {
            temp_ret = (temp_ret * 3) / 2;
        }
        var_v0 = temp_ret;
        return (func_8004E780() * 10) < var_v0;
    } else {
        return func_8004F100((temp_ret / 10), 1);
    }
}


s32 func_8004F28C(void) {
    struct return_thing sp10;

    func_80017164(&sp10);
    func_800458A8(sp10.init_x, sp10.init_y, &sp10.unk28, &sp10.unk2C);
    if (func_8004EEFC(sp10.unk28) == 0) {
        return func_8004EE90(func_8004ED18(), 1);
    } else {
        return 0;
    }
}


void func_8004F2E8(s32 arg0, s16 arg1) {
    D_800B72AC->unk1314[arg0] = arg1;
}


u16 func_8004F2FC(s32 arg0) {
    return D_800B72AC->unk1314[arg0];
}


s32 func_8004F314(void) {
    s16* var_s0;
    s32 var_s2;

    for (var_s2 = 0; var_s2 < 6; var_s2++) {
        D_800B72AC->organized_party[var_s2] = D_800B72AC->party[var_s2];
    }
    
    var_s0 = D_800B72AC->organized_party;
    for (var_s2 = 0; var_s2 < 3; var_s2++) {
        s32 temp_s3 = var_s0[var_s2];
        s32 temp_s1 = var_s0[var_s2 + 3];
        
        if (temp_s3 < 0) {
            if (temp_s1 >= 0) {
                var_s0[var_s2] = temp_s1;
                var_s0[var_s2 + 3] = -1;
            }
        } else if ((temp_s1 >= 0) && 
               (func_8004C85C(temp_s3) & 0xE000) && 
               !(func_8004C85C(temp_s1) & 0xE000)) {
            var_s0[var_s2] = temp_s1;
            var_s0[var_s2 + 3] = temp_s3;
        }
    }
    
    for (var_s2 = 0; var_s2 < 6; var_s2++) {
        if (D_800B72AC->organized_party[var_s2] != D_800B72AC->party[var_s2]) {
            return 1;
        }
    }
    
    return 0;
}


s32 func_8004F418(void) {
    s32 temp_v0 = func_8004F314();

    if (temp_v0 != 0) {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 6; var_s0++) {
            D_800B72AC->party[var_s0] = D_800B72AC->organized_party[var_s0];
            if (D_800B72AC->party[var_s0] >= 0) {
                if (D_800B72AC->party[var_s0] < 4) {
                    func_8004DC84(D_800B72AC->party[var_s0]);
                }
            }
        }
    }
    return temp_v0;
}


void func_8004F498(void) {
    s16 sp10[256][2];
    s32 var_a1;
    struct inventory_entry* var_v1;

    var_v1 = D_800B72AC->inventory;
    for (var_a1 = 0; var_a1 < 256; var_a1++) {
        sp10[var_a1][0] = var_v1[var_a1].quantity;
        sp10[var_a1][1] = var_v1[var_a1].item;
    }
    func_800195FC(0, 256, sp10);
    var_v1 = D_800B72AC->inventory;
    for (var_a1 = 0; var_a1 < 256; var_a1++) {
        var_v1[var_a1].item = sp10[var_a1][1];
        var_v1[var_a1].quantity = sp10[var_a1][0];
    }
}


s32 func_8004F528(s32 arg0, s16(* arg1)[]) {
    s16 sp10[256][2];
    u8 * temp = D_800AC6BC;
    s32 var_s3 = 0;
    s32 var_s0 = 0;
    s32 var_s2 = arg0;

    for (; var_s0 < 256; var_s0++, var_s2 += 3) {
        if (func_8004C33C(var_s0)) {
            s16 var_v0 = sp10[var_s3][0] = var_s0;
            if (arg0 != 0) {
                var_v0 = temp[var_s2 - 1];
            }
            sp10[var_s3][1] = var_v0;
            var_s3 += 1;
        }
    }
    func_800195FC(0, var_s3, sp10);
    for (var_s0 = 0; var_s0 < var_s3; var_s0++) {
        (*arg1)[var_s0] = sp10[var_s0][0];
    }
    (*arg1)[var_s0] = -1;
    return var_s3;
}


s32 func_8004F628(void) {
    s32 var_s0;
    s32 var_s2 = 0;

    for (var_s0 = 0; var_s0 < 6; var_s0++) {
        s32 temp_v0 = func_8004C638(var_s0);
        if ((temp_v0 >= 4) && (func_8004C85C(temp_v0) & 0xC000)) {
            func_8004EB7C(temp_v0);
        }
    }
    
    func_8004F418();
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_8004CA5C(var_s0) != 0) {
            if (!(func_8004C85C(var_s0) & 0xE000)) {
                return 1;
            }
        }
    }
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) { 
        if (func_8004CA5C(var_s0) != 0) {
            var_s2 += 1;
        }
    }
    
    return var_s2 == 0;
}


s16 func_8004F710(void) {
    return D_800B72AC->settings.unk0;
}


s16 func_8004F724(void) {
    return D_800B72AC->settings.unk2;
}


s16 func_8004F738(void) {
    return D_800B72AC->settings.unk4;
}


s16 func_8004F74C(void) {
    return D_800B72AC->settings.unk6;
}


s16 func_8004F760(void) {
    return D_800B72AC->settings.unk8;
}


s16 func_8004F774(void) {
    return D_800B72AC->settings.unkA;
}


s16 func_8004F788(void) {
    return D_800B72AC->settings.unkC;
}


void func_8004F79C(s16 arg0) {
    D_800B72AC->settings.unk0 = arg0;
}


void func_8004F7A8(s16 arg0) {
    D_800B72AC->settings.unk2 = arg0;
}


void func_8004F7B4(s16 arg0) {
    D_800B72AC->settings.unk4 = arg0;
}


void func_8004F7C0(s16 arg0) {
    D_800B72AC->settings.unk6 = arg0;
}


void func_8004F7CC(s16 arg0) {
    D_800B72AC->settings.unk8 = arg0;
}


void func_8004F7D8(s16 arg0) {
    D_800B72AC->settings.unkA = arg0;
}


void func_8004F7E4(s16 arg0) {
    D_800B72AC->settings.unkC = arg0;
}


void func_8004F7F0(s32 hour, s32 minute, s32 second) {
    D_800B72AC->playtime.hour = hour;
    D_800B72AC->playtime.minute = minute;
    D_800B72AC->playtime.second = second;
    D_800B72AC->playtime.frame = 0;
}


struct timer * func_8004F820(void) {
    return &D_800B72AC->playtime;
}


void func_8004F82C(void) {
    bzero(&D_800B72AC->playtime, 4);
}


void func_8004F854(void) {
    struct timer* temp_v1 = &D_800B72AC->playtime;

    temp_v1->frame += 1;
    if (temp_v1->frame >= 60) {
        temp_v1->frame = 0;
        temp_v1->second += 1;
    }
    if (temp_v1->second >= 60) {
        temp_v1->second = 0;
        temp_v1->minute += 1;
    }
    if (temp_v1->minute >= 60) {
        temp_v1->minute = 0;
        temp_v1->hour += 1;
    }
    if ((temp_v1->frame == 0) && 
        (temp_v1->second == 0) && 
        (temp_v1->minute == 0) && 
        (temp_v1->hour == 0)) {
        temp_v1->frame = 59;
        temp_v1->second = 59;
        temp_v1->minute = 59;
        temp_v1->hour = 255;
    }
}


s32 func_8004F938(s32 arg0) {
    if (!func_8004E71C(0, arg0)) return 155;
    if (!func_8004C708(func_8004BBA0(func_8004C9C4(arg0)))) return 154;
    return 0;
}


void func_8004F9A0(void) {
    func_8004C44C(2);
}


void func_8004F9C0(void) {
    func_8004C44C(1);
}


s32 func_8004F9E0(void) {
    u8 temp_s0 = func_8004C438() & 0xF0;
    u8 temp_v1 = func_8004C438() & 0xFF;
    
    if (temp_s0 == 0) {
        if (func_8004C69C() & 0x100) {
            func_8004C6B0(0xFEFF);
            return 0x57;
        }
    } else if (temp_v1 == 0x80) {
        if (func_8004C69C() & 0x40) {
            func_8004C6B0(0xFFBF);
            return 0x58;
        }
    }
    return 0;
}


void func_8004FA60(void) {
    s32 temp_s0 = func_8004C488();
    
    if ((!func_8004C06C(FLAG_CHURCH_FINISHED)) && 
        (func_8004C06C(FLAG_DONATED_TO_CHURCH)) && 
        (temp_s0) && 
        (func_8004C0E0(1, 1) >= 0x20)) {
        func_8004C08C(FLAG_CHURCH_FINISHED);
    }

    if ((!func_8004C06C(FLAG_ARACHNE)) &&
        (func_8004C06C(0x4B)) && 
        (temp_s0)) {
        if (func_8004C438() == 0x80) {
            func_8004FBC4();
        } else {
            func_8004C0B4(0xF9);
        }
    }

    if ((!func_8004C06C(0x58)) && 
        (func_8004C06C(FLAG_NEBIROS)) && 
        (temp_s0) && 
        (func_8004C0E0(2, 1) >= 0x50)) {
        func_8004C08C(0x58);
        func_8004C2D8(0x36);
        func_8004C2D8(0x39);
        func_8004C2D8(0x3A);
        func_8004C2D8(0x3B);
    }
    
    if (func_80044114() == 0) {
        s32 temp_s0_2 = func_8004C438() & 0xFF;
        if (!(func_8004C438() & 0xF0)) {
            func_8004C6B0(0xFEFF);
        } else if (temp_s0_2 == 0x80) {
            func_8004C6B0(0xFFBF);
        }
    }
}


void func_8004FBC4(void) {
    if (func_80044114()) {
        func_8004C0B4(0xF9);
    } else if (!(func_8004C85C(0) & 0xF070)) {
        func_8004C08C(0xF9);
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004FC18);

s16 func_8004FD4C(u8 arg0) {
    s32 var_s1 = 0;
    s32 var_s2 = 0;
    s32 temp_s3 = arg0;

    // Iterate through the active party.
    for (; var_s2 < 6; var_s2++) {
        // Get character at this position in the party.
        s32 temp_v0 = func_8004C638(var_s2);
        
        // If there's a character there we proceed.
        if (temp_v0 >= 0) {
            // Get this character's status.
            u16 temp_v0_2 = func_8004C85C(temp_v0);

            // If they aren't dead.
            if (!(temp_v0_2 & 0xC000)) {
                if (((temp_v0_2 & 0x1100) && (temp_s3 % 2)) || 
                    ((temp_v0_2 & 0x800) && ((temp_s3 & 3) == 3))) {
                    
                    // Reduce HP by 1.
                    func_8004D3D0(temp_v0, -1);
                    var_s1 |= 1;
                }

                // If their health is less than or equal to 0.
                if (func_8004C90C(temp_v0) <= 0) {
                    // Set their status to 0b1100_0001_0000_0000
                    func_8004C8F0(temp_v0, (func_8004C85C(temp_v0) & 0x8100) | 0x4000);

                    // If they're a demon.
                    if (temp_v0 >= 4) {
                        // Remove them from the active party.
                        func_8004EB7C(temp_v0);
                        var_s1 |= 2;
                    } else {
                        var_s1 |= 4;
                    }
                }
            }
        }
    }
    return var_s1;
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8004FE58);

s32 func_80050150(void) {
    s32 var_s0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s1 = 0;
    
    for (var_s0 = 4; var_s0 < 16; var_s0++) {
        if (func_8004CA5C(var_s0)) {
            s32 temp_v0 = func_8004CA20(var_s0);
            if (temp_v0 >= var_s1) {
                var_s1 = temp_v0;
            }
        }
        var_s2 = 0xFF;
    }
    
    var_s1++;
    var_s3 = -1;
    for (var_s0 = 0; var_s0 < 255; var_s0++) {
        s32 temp_v0_2 = func_8004ADDC(var_s0);
        if ((temp_v0_2 >= var_s1) && (temp_v0_2 < var_s2)) {
            var_s2 = temp_v0_2;
            var_s3 = var_s0;
        }
    }
    
    if (var_s3 != -1) {
        if (func_8011E79C(var_s3)) return var_s3;
    }
    return -1;
}


s32 func_80050230(s32 arg0) {
    s16 temp_v0 = func_8004C9C4(arg0);
    
    if ((temp_v0 == 0x8B) || 
        (temp_v0 == 0x20) || 
        (temp_v0 == 0x21) || 
        (temp_v0 == 0x22)) {
        return 1;
    } else {
        u16 temp_v0_2 = func_8004C85C(arg0);
        s32 var_s0;
        if ((temp_v0_2 & 0x8000)) {
            var_s0 = 0x7F;
        } else if ((temp_v0_2 & 0x4000)) {
            var_s0 = 0x3F;
        } else {
            return 1;
        }
        return (func_8004E780() & var_s0) != 0;
    }
    return 1;
}


// Seems to check if a demon is allowed in the party?
s32 func_800502BC(s32 arg0) {
    s32 temp_v0 = func_8004C9C4(arg0);
    
    if (temp_v0 == DEMON_CERBERUS) {
        return func_8004C06C(FLAG_PASCAL_TELEPORT) != 0;
    } else if (temp_v0 == DEMON_GABRIEL || temp_v0 == DEMON_RAPHAEL || temp_v0 == DEMON_URIEL) {
        return func_8004C06C(0xD5) != 0;
    } else {
        return 1;
    }
}


s32 func_80050318(void) {
    // Why these swords in particular?
    u8 sp10[4] = {
        ITEM_AMENO_NUHOKO, 
        ITEM_FUUJINKEN, 
        ITEM_SONIC_BLADE, 
        ITEM_BRIONAC
    };
    s32 var_s1 = 0;
    u32 var_s0;
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_8004E2C8(sp10[var_s0]) != 0) {
            var_s1 += 1;
        }
    }
    return var_s1;
}


s32 func_8005039C(s32 arg0) {
    s32 var_s0;

    if (arg0 >= 4) return 0;
    for (var_s0 = 0; var_s0 < 6; var_s0++) {
        s32 temp_v0 = func_8004CE78(arg0, var_s0);
        if (temp_v0 >= 0) {
            s32 sp10;
            func_8004B3B8(temp_v0, 6, &sp10);
            if (sp10 & 0x700) {
                return 1;
            }
        }
    }
    return 0;
}


s32 func_80050420(u16 arg0) {
    s32 var_a1;
    s32 var_v1;

    for (var_v1 = var_a1 = 0; var_v1 < 16; var_v1++) {
        if (arg0 & (0x8000 >> var_v1)) {
            return var_a1;
        }
        var_a1++;
    }
    return -1;
}