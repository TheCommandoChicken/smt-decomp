#include "unk3.h"

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80040A9C);

void func_80040C44(s16 arg0, s16 arg1, s16 arg2) {
    func_80040A9C(arg0, arg1, arg2, 0, 0x6FFFF);
}


void func_80040C88(struct object * arg0) {
    struct unk_data_300 * temp_s2 = arg0->data;
    
    switch (temp_s2->unk6C) {
    case 0:
        temp_s2->unk0 = func_80068510((temp_s2->unk2A + 0xC6), 0x22, 0x67, 0x6B, 7, 0, temp_s2->unk70, 0xF);
        temp_s2->unk4 = func_80068510((temp_s2->unk2A + 0x12), 0x81, 0x8E, 0x5D, 7, 0, temp_s2->unk70, 0xF);
        temp_s2->unkC = func_80068510((temp_s2->unk2A + 0x12), 0x22, 0xB0, 0x5C, 7, 0, temp_s2->unk70, 0xF);
        if (temp_s2->unk1E == 3) {
            temp_s2->unk1C = temp_s2->unk18;
            temp_s2->unk18 = 16;
        } else if (temp_s2->unk1E == 0) {
            temp_s2->unk1C = temp_s2->unk18;
            temp_s2->unk18 = (D_800B6FF8 + 16);
            if (temp_s2->unk1C != 0x134) {
                func_8004BED8(D_800B6FF8 + 16, temp_s2->unk1C);
            }
        } else {
            func_80040F44(arg0);
        }
        temp_s2->unk1A = temp_s2->unk18;
        if (temp_s2->unk1E == 3) {
            temp_s2->unk8 = func_800431E0(temp_s2->unk18, temp_s2->unk70, temp_s2->unk1C);
        } else if ((temp_s2->unk1C == 0x134) || (temp_s2->unk1C == 0x109)) {
            temp_s2->unk8 = func_800431E0(temp_s2->unk18, temp_s2->unk70, temp_s2->unk1C);
        } else {
            temp_s2->unk8 = func_800431E0(temp_s2->unk18, temp_s2->unk70, -1);
        }
        ((s16*)temp_s2->unk8->data)[0x297] = (temp_s2->unk2A + 0xAC);
        temp_s2->unk10[temp_s2->unk74] = func_80026FA0(temp_s2->unk1C, temp_s2->unk74 + 2, (temp_s2->unk2A - 0x64), 0, 0xE);
        if (temp_s2->unk18 < 4) {
            func_800277AC(temp_s2->unk10[temp_s2->unk74], 0);
        }
        temp_s2->unk6C += 1;
        break;
    case 1:
        if (temp_s2->unk10[temp_s2->unk74]->initialized != 0) {
            temp_s2->unk20 = 2;
            arg0->proc_func = func_80041078;
            temp_s2->unk6C = 0;
        }
        break;
    }
}


void func_80040F44(struct object * arg0) {
    struct unk_data_300 * temp_s0 = arg0->data;
    
    if (temp_s0->unk18 < 4) {
        s16 sp10[4];
        s16 sp18[4];
        memcpy(&sp10, &D_800B6FFC, 8);
        memcpy(&sp18, &D_800B7004, 8);
        if (func_80044114() >= 2) {
            temp_s0->unk1C = sp18[temp_s0->unk18];
        } else {
            temp_s0->unk1C = sp10[temp_s0->unk18];
        }
        if ((func_8004C06C(0x2F)) && (temp_s0->unk18 == 1)) {
            temp_s0->unk1C = 0x139;
        }
        if ((func_8004C06C(0x49)) && (temp_s0->unk18 == 3)) {
            temp_s0->unk1C = 0x11C;
        }
    } else {
        temp_s0->unk1C = func_8004C9C4(temp_s0->unk18);
    }
}


void func_80041078(struct object * arg0) {
    //SetSpadStack(0x1F8003FC);
    func_800410BC(arg0);
    //ResetSpadStack();
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_800410BC);

void func_800413E8(struct object * arg0) {
    struct unk_data_300 * temp_s0 = arg0->data;
    if ((temp_s0->unk1E == 1) && (temp_s0->unk18 < 4)) {
        func_8004DC84(temp_s0->unk18);
    }
    RemoveObject(temp_s0->unk0);
    RemoveObject(temp_s0->unk4);
    RemoveObject(temp_s0->unk8);
    RemoveObject(temp_s0->unkC);
    RemoveObject(temp_s0->unk10[temp_s0->unk74]);
}


void func_80041484(struct object * arg0, s16 arg1, s16 arg2) {
    struct unk_data_300 * temp_s0;
    struct unk_data_301 * temp_s3;

    temp_s0 = arg0->data;
    temp_s3 = temp_s0->unk8->data;
    if (arg1 != 2) {
        if (arg1 == 0) {
            temp_s0->unk2C = -0x40;
            temp_s0->unk2E = -0x140;
        } else {
            temp_s0->unk2C = 0x40;
            temp_s0->unk2E = 0x140;
        }
        func_800276CC(temp_s0->unk10[temp_s0->unk74], temp_s0->unk2C, 0, 5, 0);
        temp_s0->unk6C = 2;
        func_8003FFE4(0x14);
    } else {
        arg0->unk1C = 3;
        temp_s0->unk6C = 3;
    }
    temp_s0->unk20 = 2;
    temp_s0->unk22 = arg1;
    if (temp_s0->unk1E == 3) {
        temp_s0->unk1C = arg2;
        temp_s0->unk18 = 0x10;
        temp_s3->unk530 = arg2;
    } else if (temp_s0->unk1E == 0) {
        temp_s0->unk1C = arg2;
        temp_s0->unk18 = 0x10;
        func_8004BED8(0x10, temp_s0->unk1C);
    } else {
        temp_s0->unk18 = arg2;
        temp_s3->unk0 = arg2;
        func_80040F44(arg0);
    }
    temp_s0->unk74 ^= 1;
    temp_s0->unk10[temp_s0->unk74] = func_80026FA0(temp_s0->unk1C, temp_s0->unk74, (temp_s0->unk2E - 0x64), 0, 0xE);
    if (temp_s0->unk18 < 4) {
        func_800277AC(temp_s0->unk10[temp_s0->unk74], 0);
    }
}


void func_80041638(struct object * arg0, s16 arg1) {
    func_80041688(arg0, arg1, 6);
}


void func_80041660(struct object * arg0, s16 arg1) {
    func_80041688(arg0, arg1, 8);
}


void func_80041688(struct object * arg0, s16 arg1, s16 arg2) {
    struct unk_data_300 * temp_s0 = arg0->data;
    
    if (arg1 == 1) {
        temp_s0->unk2C = -0x40;
        temp_s0->unk2E = -0x140;
    } else {
        temp_s0->unk2C = 0x40;
        temp_s0->unk2E = 0x140;
    }
    temp_s0->unk20 = 2;
    if (arg2 == 8) {
        func_800276CC(temp_s0->unk10[temp_s0->unk74], temp_s0->unk2C, 0, 5, 0);
    }
    func_8003FFE4(0x14);
    temp_s0->unk6C = arg2;
}


s16 func_8004172C(struct object * arg0) {
    return ((struct unk_data_300 *) arg0->data)->unk20;
}


s16 func_80041740(struct object * arg0) {
    return ((struct unk_data_300 *) arg0->data)->unk2A;
}


void func_80041754(struct object * arg0, s16 arg1, s16 arg2) {
    struct unk_data_300 * temp_v0 = arg0->data;
    temp_v0->unk26 = arg1;
    temp_v0->unk28 = arg2;
}


void func_80041768(s16 arg0) {
    D_800B6FFA = arg0;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80041774);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80041C44);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_800421C8);

void func_80042668(s16 arg0, s32 arg1) {
    func_800426B8(arg0, arg1, 0);
}


void func_80042690(s16 arg0, s32 arg1) {
    func_800426B8(arg0, arg1, 1);
}


void func_800426B8(s32 arg0, s32 arg1, s16 arg2) {
    char * sp10[17] = {
        "DEAD",
        "DYING",
        "STONE",
        "PALYZE",
        "POISON",
        "FLY",
        "FROG",
        "CURSE",
        "CHARM",
        "SLEEP",
        "BIND",
        "FREEZE",
        "SHOCK",
        "CLOSE",
        "PANIC",
        "HAPPY",
        "GOOD"
    };
    char * sp58[17] = {
        "   DEAD",
        "  DYING",
        "  STONE",
        " PALYZE",
        " POISON",
        "    FLY",
        "   FROG",
        "  CURSE",
        "  CHARM",
        "  SLEEP",
        "   BIND",
        " FREEZE",
        "  SHOCK",
        "  CLOSE",
        "  PANIC",
        "  HAPPY",
        "   GOOD"
    };
    char ** var_s1 = (arg2 == 0) ? &sp10 : &sp58;
    s16 var_s0 = 0x10;
    u32 temp_v1 = func_8004C85C(arg0);
    
    if (temp_v1 & 1) var_s0 = 0xF;
    if (temp_v1 & 2) var_s0 = 0xE;
    if (temp_v1 & 4) var_s0 = 0xD;
    if (temp_v1 & 8) var_s0 = 0xC;
    if (temp_v1 & 0x10) var_s0 = 0xB;
    if (temp_v1 & 0x20) var_s0 = 0xA;
    if (temp_v1 & 0x40) var_s0 = 9;
    if (temp_v1 & 0x80) var_s0 = 8;
    if (temp_v1 & 0x100) var_s0 = 7;
    if (temp_v1 & 0x200) var_s0 = 6;
    if (temp_v1 & 0x400) var_s0 = 5;
    if (temp_v1 & 0x800) var_s0 = 4;
    if (temp_v1 & 0x1000) var_s0 = 3;
    if (temp_v1 & 0x2000) var_s0 = 2;
    if (temp_v1 & 0x4000) var_s0 = 1;
    if (temp_v1 & 0x8000) var_s0 = 0;
    sprintf(arg1, "%s", var_s1[var_s0]);
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80042878);

void func_80042EBC(s16 arg0, s16 arg1, s16 arg2) {
    char * sp20[16] = {
        "1",
        "2",
        "0-1",
        "1-2",
        "2-3",
        "0-2",
        "1-3",
        "2-4",
        "3-5",
        "3-6",
        "5-8",
        "2-8",
        "1-8",
        "0-8",
        "ALL"
    };
    struct c_is_dumb_and_can_kiss_my_ass sp60 = D_800B71D4;
    char * sp68[4] = {
        "L",
        "N",
        "C",
        "ALL"
    };
    char sp78[20];
    s32 sp90;
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        func_80021DBC(func_8004B888(sp60.unk0[var_s0]), arg0, (((var_s0 + 1) * 0xF) + arg1), 5, 0, 0, 0xC);
    }
    func_80021DBC(&D_800A2CD4, (arg0 - 0x97), 0x12, 5, 6, 0, 0xC);
    func_80021DBC(func_8004B674(arg2), (arg0 - 0x22), 0x12, 5, 0, 0, 0xC);
    func_8004B3B8(arg2, 2, &sp90);
    sprintf(&sp78, "+%3d", sp90);
    func_80022394(&sp78, arg0 + 0x3C, (arg1 + 0xF), 0x502, 0xC);
    func_8004B3B8(arg2, 3, &sp90);
    sprintf(&sp78, "+%3d", sp90);
    func_80022394(&sp78, arg0 + 0x3C, (arg1 + 0x1E), 0x502, 0xC);
    func_8004B3B8(arg2, 4, &sp90);
    strcpy(&sp78, sp20[sp90]);
    func_80022394(&sp78, (arg0 + 0x46), (arg1 + 0x2D), 0x502, 0xC);
    func_8004B3B8(arg2, 1, &sp90);
    for (var_s0 = 0; var_s0 < 3 && 1 << var_s0 != sp90; var_s0++);
    strcpy(&sp78, sp68[var_s0]);
    func_80022394(&sp78, (arg0 + 0x46), (arg1 + 0x3C), 0x502, 0xC);
}

struct object * func_800431E0(s32 arg0, s32 arg1, s16 arg2) {
    struct poly_init_data sp18;
    s32 temp_s3;
    s16 var_s2;
    struct object * temp_v0 = CreateObject(func_8004340C, NULL, *FirstObjectPtrPtr, arg1, 0, sizeof(struct unk_data_400));
    struct unk_data_400 * temp_s7 = temp_v0->data;
    temp_s7->unk0 = arg0;
    temp_s7->unk52C = 0;
    temp_s7->unk52E = 0xACU;
    temp_s7->unk530 = arg2;
    sp18.abe = 0;
    sp18.tge = 1;
    sp18.unk30 = 0;
    sp18.ot_index = 0xC;
    for (var_s2 = 0; var_s2 < 6; var_s2++) {
        temp_s7->unk4[var_s2] = func_8004D2E0(arg0, var_s2);
        temp_s3 = ((u16)temp_s7->unk4[var_s2] * 2);
        func_8001ABAC(&temp_s7->unk34[var_s2]);
        sp18.x0 = temp_s7->unk52E + 22;
        sp18.y0 = (var_s2 * 0xD) + 0x94;
        sp18.x1 = temp_s7->unk52E + 22 + temp_s3;
        sp18.y1 = (var_s2 * 0xD) + 0x94;
        sp18.x2 = temp_s7->unk52E + 22;
        sp18.y2 = (var_s2 * 0xD) + 0x98;
        sp18.x3 = temp_s7->unk52E + 22 + temp_s3;
        sp18.y3 = (var_s2 * 0xD) + 0x98;
        sp18.r0 = 0xFF;
        sp18.g0 = 0x80;
        sp18.b0 = 0;
        func_8001ADD0(&temp_s7->unk34[var_s2], &sp18);
        temp_s7->unk1C[var_s2] = func_8004D11C(temp_s7->unk0, var_s2);
        temp_s3 = (u16)temp_s7->unk1C[var_s2] * 2;
        func_8001ABAC(&temp_s7->unk2A4[var_s2]);
        sp18.x0 = temp_s7->unk52E + 22;
        sp18.y0 = (var_s2 * 0xD) + 0x94;
        sp18.x1 = temp_s7->unk52E + 22 + temp_s3;
        sp18.y1 = (var_s2 * 0xD) + 0x94;
        sp18.x2 = temp_s7->unk52E + 22;
        sp18.y2 = (var_s2 * 0xD) + 0x98;
        sp18.x3 = temp_s7->unk52E + 22 + temp_s3;
        sp18.y3 = (var_s2 * 0xD) + 0x98;
        sp18.r0 = 0;
        sp18.g0 = 0xFF;
        sp18.b0 = 0xFF;
        func_8001ADD0(&temp_s7->unk2A4[var_s2], &sp18);
    }
    return temp_v0;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_8004340C);

struct object * func_80043850(s16 arg0, s16 arg1) {
    struct object * temp_v0 = CreateObject(func_800438E0, NULL, FirstObjectPtrPtr->first, 0x0F000000, 0, sizeof(struct unk_data_401));
    struct unk_data_401 * temp_v0_2 = temp_v0->data;
    temp_v0_2->unk6C4 = 0;
    temp_v0_2->unk10 = arg0;
    temp_v0_2->unkC = temp_v0_2->unkE = arg1;
    func_8004DB70(arg0);
    func_8001F6B8();
    return temp_v0;
}


void func_800438E0(struct object * arg0) {
    s16 var_a1;
    struct unk_data_401 * temp_s0 = arg0->data;
    struct character_data * temp_s1 = &D_800B72AC->characters[temp_s0->unk10];
    struct unk_data_300 * temp_v1; // idk

    switch (temp_s0->unk6C4) {
    case 0:
        if (func_8001F920() == 2) {
            temp_s0->unk38 = 0;
            temp_s0->unk12 = 0;
            temp_s0->unk0 = func_80040A9C(temp_s0->unk10, 2, 2, 0, 0x0F000000);
            func_80041754(temp_s0->unk0, 0, 0);
            temp_s0->unk6C4 = 2;
            break;
        }
        return;
    case 2:
        if (func_8004172C(temp_s0->unk0) == 0) {
            func_8001F668();
            temp_s0->unk6C4 = 1;
        }
        break;
    case 1:
        if (func_8001F920() == 2) {
            temp_s0->unk14[0] = temp_s1->base_str;
            temp_s0->unk14[1] = temp_s1->base_itl;
            temp_s0->unk14[2] = temp_s1->base_mag;
            temp_s0->unk14[3] = temp_s1->base_vit;
            temp_s0->unk14[4] = temp_s1->base_spd;
            temp_s0->unk14[5] = temp_s1->base_lck;
            temp_s0->unk20[0] = &temp_s1->base_str;
            temp_s0->unk20[1] = &temp_s1->base_itl;
            temp_s0->unk20[2] = &temp_s1->base_mag;
            temp_s0->unk20[3] = &temp_s1->base_vit;
            temp_s0->unk20[4] = &temp_s1->base_spd;
            temp_s0->unk20[5] = &temp_s1->base_lck;
            temp_s0->unk6C4 = 3;
        }
        break;
    case 3:
        func_80043C60(arg0);
        break;
    case 4:
        temp_v1 = temp_s0->unk4->data;
        if (temp_v1->unk2C != 1) {
            break;
        }
        if (temp_v1->unk26 == 0 && temp_v1->unk28 == 1) {
            func_8001F6B8();
            temp_s0->unk6C4 = 5;
        } else {
            for (var_a1 = 0; var_a1 < 6; var_a1++) {
                *temp_s0->unk20[var_a1] = temp_s0->unk14[var_a1];
            }
            func_8004DB70(temp_s0->unk10);
            temp_s0->unk6C4 = 1;
            temp_s0->unkE = temp_s0->unkC;
        }
        RemoveObject(temp_s0->unk4);
        break;
    case 5:
        if (func_8001F920() == 2) {
            func_8004DC84(temp_s0->unk10);
            func_8001F668();
            RemoveObject(temp_s0->unk0);
            temp_s0->unk6C4 = 6;
        }
        break;
    case 6:
        if (func_8001F920() != 2) {
            return;
        }
        RemoveObject(arg0);
    }
    if (temp_s0->unk6C4 > 0 && temp_s0->unk6C4 <= 5) {
        func_80020544(0x16, 0x81, 0x88, 7, &temp_s0->unk3C[temp_s0->unk38]);
    }
    if (temp_s0->unk6C4 > 3 && temp_s0->unk6C4 <= 5) {
        func_80021DBC(func_8004B888(0x14A), 0x19, 0x82, 5, 0, 0, 8);
    }
    temp_s0->unk38 ^= 1;
    return;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80043C60);

void func_8004403C(void) {
    bzero(&D_800FAE18, 0x2C);
    D_800FAE18.unk29 = 0xFF;
    D_800FAE18.unk2A = 0xFF;
    D_800FAE18.unk2B = 0xFF;
}


void func_8004407C(void) {
    s32 (*sp10[5])() = {
        func_8004444C,
        func_800445D0,
        func_800447D0,
        func_800447D0,
        func_800447D0
    };

    switch (D_800FAE18.unk28) {
    case 1:
        D_800FAE18.unk24 = sp10[D_800FAE18.unk2A]();
        D_800FAE18.unk28 = 0;
    case 0:
    }
}


u8 func_80044114(void) {
    return D_800FAE18.unk29;
}


s32 func_80044124(void) {
    if ((D_800FAE18.unk28.word & 0xFFFF00) == 0xFFFF00) return 0;
    if (D_800FAE18.unk24 == NULL) return 1;
    return ((struct unk_data_404 *)D_800FAE18.unk24->data)->unk12 == 0;
}


void func_80044178(void) {
    switch (D_800FAE18.unk28.cvector.g) {
        case 0xFF:
            break;
        case 0:
            func_80017218();
            break;
        default:
            func_8002F970();
            break;
         
    }

    RemoveObject(D_800FAE18.unk24);

    D_800FAE18.unk24 = 0;
    D_800FAE18.unk28.cvector.g = 0xFF;
    D_800FAE18.unk28.cvector.b = 0xFF;
    D_800FAE18.unk28.cvector.cd = 0xFF;
}


void func_800441F0(s32 arg0, struct unk_data_403 * arg1) {
    s32 temp_s1 = D_800FAE18.unk28.cvector.g;
    
    if (arg0 != temp_s1) {
        if ((arg0 == 0) && (temp_s1 == 1) && (func_8004C438() & 1)) {
            func_8004C44C(-1);
        }
        func_80044178();
        func_8004C6B0(0xFF7F);
        if (func_8004C06C(0xE6) != 0) {
            D_800FAE18.unk28.cvector.b = 0xFF;
            D_800FAE18.unk28.cvector.g = 0xFF;
            return;
        }
    } else {
        RemoveObject(D_800FAE18.unk24);
        D_800FAE18.unk24 = 0;
    }
    D_800FAE18.unk28.cvector.g = temp_s1;
    if (arg1 != NULL) {
        memcpy(&D_800FAE18, arg1, 0x24);
    }
    D_800FAE18.unk28.cvector.b = arg0;
    D_800FAE18.unk28.cvector.r = 1;
    func_80044E64();
}


void func_80044318(s16 arg0) {
    switch (D_800FAE18.unk28.cvector.g) {
    case 0:
        func_8001753C(arg0);
        break;
    case 1 ... 4:
        func_8002F8EC(arg0);
        break;
    case 0xFF:
        return;
    }
    D_800FAE18.unk28.cvector.cd = 1;
}


void func_80044398() {
    switch (D_800FAE18.unk28.cvector.g) {
    case 0:
        func_800175F0();
        break;
    case 1 ... 4:
        func_8002F8CC();
        break;
    case 0xFF:
        return;
    }
    D_800FAE18.unk28.cvector.cd = 0;
}


void func_8004440C(void) {
    u8 temp_s1 = D_800FAE18.unk28.cvector.g;
    D_800FAE18.unk28.cvector.g = D_800FAE18.unk28.cvector.b;
    func_800506BC();
    D_800FAE18.unk28.cvector.g = temp_s1;
}


void func_8004444C(void) {
    CreateFieldMap(&D_800FAE18);
    if (func_800148D4() == 0) {
        func_8004440C();
    }
    func_800448EC(func_80044494);
}


void func_80044494(struct object * arg0) {
    struct return_thing sp10;
    struct unk_data_404 * temp_s0 = arg0->data;
    
    switch (temp_s0->unk12) {
    case 0:
        if (func_80017474() != 0) {
            D_800FAE18.unk28.cvector.g = D_800FAE18.unk28.cvector.b;
            temp_s0->unk12 += 1;
        case 1:
            if (func_800148D4() != 1) {
                if (func_800171C8(&sp10) == 1) {
                    func_8002E84C(sp10.init_x, sp10.init_y);
                } else if (func_8001748C() == 1) {
                    func_80044960(1, arg0);
                } else if (func_800174A4()) {
                    if (func_80018F14(0, 0xD)) {
                        func_80044960(2, arg0);
                    } else if (func_80018F14(0, 9)) {
                        if (func_8004C06C(1)) {
                            func_80044960(3, arg0);
                        }
                    } else if (func_80018F14(0, 3)) {
                        if (func_8004C06C(0xE5) != 1) {
                            func_80044960(4, arg0);
                        }
                    }
                }
            }
        }
    }
}


void func_800445D0(void) {
    func_800292AC(0, &D_800FAE18);
    if (func_800148D4() == 0) {
        func_8004440C();
    }
    func_800448EC(func_8004461C);
}


void func_8004461C(struct object * arg0) {
    struct return_thing sp10;
    s32 temp_s1_2;
    struct unk_data_404 * temp_s1 = arg0->data;
    
    switch (temp_s1->unk12) {
    case 0:
        if (func_8002F9BC() != 0) {
            if (D_800FAE18.unk28.cvector.g == 0) {
                func_8004C4AC(D_800FAE18.unk8, D_800FAE18.unkC, D_800FAE18.unk14, D_800FAE18.unk10);
            }
            D_800FAE18.unk28.cvector.g = D_800FAE18.unk28.cvector.b;
            temp_s1->unk12 += 1;
        case 1:
            func_8002F734(&sp10);
            temp_s1_2 = func_8003A7C4(sp10.init_x, sp10.init_y) & 0x80;
            if (func_800148D4() != 1) {
                if (func_8002E7BC() == 1) {
                    func_800179AC();
                } else if (func_8002F7A0() == 1) {
                    func_80044960(1, arg0);
                } else if (func_8002F198()) {
                    if (func_80018F14(0, 0xD)) {
                        func_80044960(2, arg0);
                    } else if (func_80018F14(0, 9)) {
                        if (temp_s1_2 == 0) {
                            if (func_8004C06C(1)) {
                                func_80044960(3, arg0);
                            }
                        }
                    } else if (func_80018F14(0, 3)) {
                        if (func_8004C06C(0xE5) != 1) {
                            func_80044960(4, arg0);
                        }
                    } else if ((func_80018F14(0, 8)) && (temp_s1_2 == 0)) {
                        if (func_8004C06C(0)) {
                            func_80044960(5, arg0);
                        }
                    }
                }
            }
        }
    }
}


void func_800447D0(void) {
    func_8002F27C(D_800FAE18.unk28.cvector.b - 1);
    switch (D_800FAE18.unk28.cvector.b) {
    case 2:
        func_8004C6E8(5);
        func_8004440C();
        break;
    case 3:
        func_8004C6E8(5);
        break;
    case 4:
        func_8004C6E8(0);
        func_8004BDF8(2);
        func_8004BDF8(3);
        break;
    }
    func_800448EC(func_80044888);
}


void func_80044888(struct object * arg0) {
    struct unk_data_404 * temp_s0 = arg0->data;
    if ((temp_s0->unk12 == 0) && (func_8002F9BC())) {
        D_800FAE18.unk28.cvector.g = D_800FAE18.unk28.cvector.b;
        temp_s0->unk12 += 1;
    }
}


struct object * func_800448EC(void (*arg0)()) {
    struct object * temp_v0 = CreateObject(arg0, NULL, *FirstObjectPtrPtr, 0xE1000000, 0, sizeof(struct unk_data_404));
    struct unk_data_404 * temp_s0;
    
    if (temp_v0 == NULL) return NULL;
    temp_s0 = temp_v0->data;
    bzero(temp_s0, sizeof(struct unk_data_404));
    temp_s0->unk10 = 0xFF;
    return temp_v0;
}


void func_80044960(s32 arg0, struct object * arg1) {
    struct unk_data_405 sp18[6] = {
        {-1, NULL, func_80044CD8, 1, 1, 0, 0},
        {0, func_80117DA4, func_80044D0C, 1, 1, 1, 0},
        {1, func_80117CA4, func_80044D7C, 1, 1, 1, 0},
        {1, func_80044E38, func_80044D7C, 1, 1, 1, 0},
        {-1, func_80014A2C, func_80044DBC, 1, 1, 0, 0},
        {-1, func_8003F27C, func_80044E00, 0, 0, 0, 0},
    };
    struct unk_data_404 * temp_s1 = arg1->data;
    struct unk_data_405 * temp_s0 = &sp18[arg0];
    
    if (D_800FAE18.unk28.cvector.b == 0) {
        func_80044318(temp_s0->unkC);
        temp_s1->unk11 = temp_s0->unkE;
    } else {
        func_80044318(temp_s0->unkD);
        temp_s1->unk11 = temp_s0->unkF;
    }
    temp_s1->unkC = 0;
    temp_s1->unk10 = arg0;
    if (temp_s1->unk11 == 0) {
        if (temp_s0->unk4 != NULL) {
            if (temp_s0->unk0 != -1) {
                temp_s1->unk4 = temp_s0->unk4;
                temp_s1->unk8 = temp_s0->unk8;
                temp_s1->unkC = func_80019C58(0, D_80010308, temp_s0->unk0, 0, 0, 1);
                func_80018410(arg1, func_80044BA4);
            } else {
                temp_s1->unk0 = temp_s0->unk4();
                func_80018410(arg1, temp_s0->unk8);
            }
        } else {
            temp_s1->unk0 = 0;
            func_80018410(arg1, temp_s0->unk8);
        }
    } else {
        temp_s1->unk4 = temp_s0->unk4;
        temp_s1->unk8 = temp_s0->unk8;
        func_80018410(arg1, func_80044C04);
        func_8001F6B8();
        if (temp_s0->unk0 != -1) {
            temp_s1->unkC = func_80019C58(0, D_80010308, temp_s0->unk0, 0, 0, 1);
        }
    }
}


void func_80044B24(struct object * arg0) {
    struct unk_data_404 * temp_s0 = arg0->data;
    RemoveObject(temp_s0->unk0);
    temp_s0->unk0 = NULL;
    if (temp_s0->unk11 == 0) {
        func_80044398();
        func_80018448(arg0);
        temp_s0->unk10 = 0xFF;
    } else {
        func_80044318(1);
        arg0->hide_func = func_80044C88;
        func_8001F668();
    }
}


void func_80044BA4(struct object * arg0) {
    struct unk_data_404 * temp_s0 = arg0->data;
    if (func_80019ECC(temp_s0->unkC) != 0) {
        temp_s0->unk0 = temp_s0->unk4();
        arg0->hide_func = temp_s0->unk8;
    }
}


void func_80044C04(struct object * arg0) {
    if (func_8001F920() == 2) {
        struct unk_data_404 * temp_s0 = arg0->data;
        if ((temp_s0->unkC == 0) || (func_80019ECC(temp_s0->unkC) != 0)) {
            temp_s0->unk0 = temp_s0->unk4();
            arg0->hide_func = temp_s0->unk8;
            func_80044318(0);
        }
    }
}


void func_80044C88(struct object * arg0) {
    if (func_8001F920() == 2) {
        struct unk_data_404 * temp_s0;
        func_80044398();
        temp_s0 = arg0->data;
        func_80018448(arg0);
        temp_s0->unk10 = 0xFF;
    }
}


void func_80044CD8(struct object * arg0) {
    if (func_800148D4() == 0) {
        func_80044B24(arg0);
    }
}


void func_80044D0C(struct object * arg0) {
    switch (func_80117E0C()) {
    case 0:
        break;
    case 2:
        if (func_800147CC() == 1) {
            arg0->hide_func = 0;
        } else {
            func_80044B24(arg0);
        }
        break;
    case 1:
        func_80044B24(arg0);
    }
}


void func_80044D7C(struct object * arg0) {
    if (func_801183AC() == 1) {
        func_80044B24(arg0);
    }
}


void func_80044DBC(struct object * arg0) {
    if (func_80014A18(((struct unk_data_404 *)arg0->data)->unk0) == 0) {
        func_80044B24(arg0);
    }
}


void func_80044E00(struct object * arg0) {
    if (func_8003B0F8() == 1) {
        func_80044B24(arg0);
    }
}


struct object * func_80044E38(void) {
    struct object * temp_s0;

    temp_s0 = func_80117CA4();
    func_80117D30();
    return temp_s0;
}


struct object * func_80044E64(void) {
    return CreateObject(&func_80044EA4, 0, *FirstObjectPtrPtr, 0x300, 0, 0);
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80044EA4);

