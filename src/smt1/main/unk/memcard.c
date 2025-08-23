#include "object.h"
#include "lib/libmcrd.h"

struct object* func_80060EA4(s16 arg0, s16 arg1, s32 arg2) {
    struct unk_data_1011* temp_s0;
    struct object* temp_v0 = CreateObject(func_80060FDC, func_80061048, *FirstObjectPtrPtr, arg2, 0, 0x1B4);
    
    if (temp_v0 == NULL) return NULL;
    temp_s0 = temp_v0->data;
    bzero(temp_s0, 0x1B4);
    temp_s0->unk19C = arg1;
    if (arg1 == 0) {
        temp_s0->unk19E = 4;
    } else if (arg1 == 1) {
        temp_s0->unk19E = 3;
    } else if (arg1 == 2) {
        temp_s0->unk19E = 1;
    }
    temp_s0->unk4 = -1;
    temp_s0->unk2 = -1;
    temp_s0->unk0 = arg0;
    temp_s0->unk6 = (temp_s0->unk19C == 1) ? D_800B74A0 : 0;
    temp_s0->unk1A0 = 0;
    temp_s0->unk1A4 = 1;
    temp_s0->unk198 = func_800193C0(func_80062180());
    bzero(temp_s0->unk198, 4);
    temp_s0->unk1AE = 0;
    bzero(&temp_s0->unk1A8, 6);
    func_800619CC(temp_s0);
    return temp_v0;
}


void func_80060FDC(struct object* arg0) {
    s32 sp18 = 0;
    s32 sp1C = 0;
    s32 sp20 = 0;
    s16 sp24 = 0;
    struct unk_data_1011* temp_s0 = arg0->data;
    func_800610AC(temp_s0, &sp18, &sp1C, &sp20, &temp_s0->unk1A0, &sp24);
    if (temp_s0->unk2 == 0x14) {
        func_80063C64();
    }
}


void func_80061048(struct object* arg0) {
    struct unk_data_1011* temp_s0 = arg0->data;
    func_80019478(temp_s0->unk198);
    temp_s0->unk198 = NULL;
}


s32 func_8006107C(void) {
    s32 sp10 = 0;
    s32 sp14 = 0;

    return MemCardSync(0, &sp10, &sp14) != 0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800610AC);

void func_800616CC(struct unk_data_1011* arg0) {
    func_80062410(arg0, 6);
    arg0->unk2 = (arg0->unk19C == 0) ? 0x12 : 0x14;
    func_80061F88(arg0);
}


void func_80061714(struct unk_data_1011* arg0) {
    func_80062410(arg0, 6);
    arg0->unk2 = 0x1E;
    func_80061F88(arg0);
}


void func_8006174C(struct unk_data_1011* arg0) {
    func_80062410(arg0, 2);
    arg0->unk2 = 4;
}


s32 func_8006177C(struct unk_data_1011* arg0, s32 arg1, s32* arg2) {
    if (arg0->unk1AE > 0) {
        if (arg0->unk1A8[(arg0->unk1AE - 1)] != arg1) {
            *arg2 = 0;
            func_800623E8();
            return 1;
        }
    }
    arg0->unk1A8[arg0->unk1AE] = arg1;
    arg0->unk1AE += 1;
    if (arg0->unk1AE >= 3) {
        func_800623E8();
        *arg2 = 1;
        return 1;
    }
    return 0;
}


s32 func_8006181C(struct unk_data_1011* arg0, s32* arg1, s32* arg2) {
    u8 sp20[0x18];
    u8 sp38[0x258];
    s32 sp290 = 0;
    s32 sp294 = 0;
    s16 var_s1 = 0;
    s32 temp_s5 = (arg0->unk0 != 0) * 0x10;
    
    *arg2 = 0;
    for (var_s1 = 0; arg0->unk19E > var_s1; var_s1++) {
        bzero(sp20, 0x15);
        bzero(sp38, 0x258);
        func_80061A0C(sp20, var_s1, arg0->unk19C);
        if (func_8006209C(sp38, temp_s5, sp20, &sp290, &sp294, arg1, 0xF) == 0) {
            return 0;
        }
        arg0->unk8[var_s1].unk0 = sp290 != 0;
        *arg2 |= sp290 != 0;
    }
    return 1;
}


s16 func_8006194C(struct unk_data_1011* arg0) {
    s16 var_s0;
    s16 var_s1 = 0;

    for (var_s0 = 0; var_s0 < arg0->unk19E; var_s0++) {
        var_s1 |= func_80062478(arg0, var_s0);
    }
    return var_s1;
}


void func_800619CC(struct unk_data_1011* arg0) {
    MemCardAccept((arg0->unk0 != 0) * 0x10);
    func_80062410(arg0, 2);
}


s32 func_80061A0C(u8 (*arg0)[0x18], s16 arg1, s16 arg2) {
    s16 temp_a3;

    memcpy(arg0[0], D_8001196C, 18);
    temp_a3 = func_8009C9BC(arg0[0]); //strlen
    if (arg2 == 0) {
        if (arg1 < 3) {
            func_80061B1C(arg0, arg1, 0x30, temp_a3);
        } else {
            func_80061B1C(arg0, (arg1 - 3), 0x51, temp_a3);
        }
    } else if (arg2 == 1) {
        func_80061B1C(arg0, arg1, 0x30, temp_a3);
    } else if (arg2 == 2) {
        func_80061B1C(arg0, arg1, 0x51, temp_a3);
    }
    return 1;
}


s32 func_80061B1C(u8 (*arg0)[2], s16 arg1, s16 arg2, s16 arg3) {
    u8* temp_a0 = &arg0[0][arg3];
    temp_a0[0] = arg2 + arg1;
    temp_a0[1] = 0;
    return 1;
}


s32 func_80061B3C(struct unk_data_1013* arg0, s16 arg1) {
    s16 sp10[2];
    s16 var_s0 = 0;
    u32 temp_v1;
    s32 temp_s0 = arg0->unk0;
    
    bzero(arg0, 0x50);
    arg0->unk0 = temp_s0;
    func_800642A0(&sp10, 1, 4);
    temp_v1 = func_8004D764() - 1;
    if (temp_v1 >= 4) {
        arg0->unk44 = 0;
        return 0;
    } else {
        u8 * temp_v0;
        arg0->unk44 = temp_v1;
        temp_v0 = func_8004E8B4(0);
        memcpy(arg0->unk2, temp_v0, func_80065194(temp_v0) * 2);
        arg0->unk2[0].level = func_8004CA20(0);
        for (var_s0 = 0; var_s0 < arg0->unk44; var_s0++) {
            s16 * temp2 = &sp10[var_s0];
            u8 * temp_v0_2 = func_8004E8B4(*temp2);
            s32 temp = func_80065194(temp_v0_2) * 2;
            memcpy(arg0->unk2[var_s0 + 1].name, temp_v0_2, temp);
            arg0->unk2[var_s0 + 1].level = func_8004CA20(*temp2);
        }
        if (arg1 == 2) {
            arg0->unk3E = func_80063A2C();
        } else {
            arg0->unk3E = func_8004E9C0(0);
        }
        arg0->unk40 = *func_8004F820();
        arg0->unk48 = func_80044114() == 0;
        arg0->unk4C = func_8004C06C(0xF8U);
        return 1;
    }
}


s32 func_80061D08(struct unk_data_1011* arg0) {
    u8 sp10[0x18];
    func_80061A0C(&sp10, arg0->unk6, arg0->unk19C);
    func_80061E28(arg0);
    func_8006249C(arg0);
    func_80062430(arg0, 4);
    return 1;
}


s32 func_80061D58(struct unk_data_1011* arg0) {
    u8 sp10[0x18];
    s32 temp_s1 = (arg0->unk0 != 0) * 0x10;
    func_80061A0C(&sp10, arg0->unk6, arg0->unk19C);
    if (arg0->unk1A0 > 0) {
        if (func_80062454(arg0) == 0) {
            s32 var_v0 = MemCardCreateFile(temp_s1, sp10, 1);
            arg0->unk1A0 -= 1;
            return var_v0;
        }
        return 6;
    }
    return 7;
}


s32 func_80061DE0(struct unk_data_1011* arg0) {
    u8 sp10[0x18];
    s32 temp_s0 = (arg0->unk0 != 0) * 0x10;
    func_80061A0C(&sp10, arg0->unk6, arg0->unk19C);
    return MemCardDeleteFile(temp_s0, sp10);
}


s32 func_80061E28(struct unk_data_1011* arg0) {
    if (arg0->unk19C == 1) {
        struct return_thing sp10;
        func_8002F734(&sp10);
        func_80064CD4(&sp10);
        func_8004C530(sp10.init_x, sp10.init_y, sp10.unk14, sp10.unk10);
    } else if (arg0->unk19C == 2) {
        struct return_thing sp10;
        if (func_80044114() == 0) {
            func_80017164(&sp10);
        } else {
            func_8002F734(&sp10);
        }
        func_8004C5B4(sp10.init_x, sp10.init_y, sp10.unk14, sp10.unk10);
    }
    return 1;
}


s32 func_80061EC8(s32 arg0) {
    return (arg0 > 0) ? (((arg0 - 1) / 0x80) + 1) * 0x80 : 0x80;
}


s32 func_80061EF4(struct unk_data_1011* arg0) {
    u8 sp10[0x18];
    func_80061A0C(&sp10, arg0->unk6, arg0->unk19C);
    func_80062430(arg0, 3);
    return 1;
}


s32 func_80061F34(struct unk_data_1011* arg0) {
    s32 temp_v0 = func_80062070(arg0);
    if (temp_v0 == 0) {
        arg0->unk2 = -1;
        arg0->unk1A0 = 0xF;
        func_80061FE0(arg0);
    }
    return temp_v0;
}


void func_80061F88(struct unk_data_1011* arg0) {
    s16 var_a1;
    
    for (var_a1 = 0; var_a1 < arg0->unk19E; var_a1++) {
        arg0->unk8[var_a1].unk0 = 0;
    }
}


s32 func_80061FE0(struct unk_data_1011* arg0) {
    s16 var_s1;

    for (var_s1 = 0; var_s1 < arg0->unk19E; var_s1++) {
        bzero(&arg0->unk8[var_s1], 0x50);
        arg0->unk8[var_s1].unk0 = 0;
    }
    return 1;
}


s32 func_80062070(struct unk_data_1011* arg0) {
    return MemCardFormat((arg0->unk0 != 0) * 0x10);
}


s32 func_8006209C(struct DIRENTRY* arg0, s32 arg1, s8* arg2, s32* arg3, s32* arg4, s32* arg5, s32 arg6) {
    s32 var_s1 = 0;
    struct DIRENTRY* var_a0;
    
    *arg5 = MemCardGetDirentry(arg1, arg2, arg0, arg3, 0, arg6);
    if (*arg5 == 0) {
        *arg4 = 0;
        for (var_s1 = 0; var_s1 < *arg3; var_s1++) {
            s32 temp_a1 = arg0[var_s1].size / 0x2000;
            *arg4 += (arg0[var_s1].size & 0x1FFF) ? temp_a1 + 1 : temp_a1;
        }
        return 1;
    }
    return 0;
}


s32 func_80062180(void) {
    return func_80061EC8(0x200) + func_80061EC8(0x50) + func_80061EC8(0x173C) + func_80061EC8(4);
}


s32 func_800621E4(void) {
    return func_80061EC8(0x200) + func_80061EC8(0x50) + func_80061EC8(0x173C);
}


s32 func_80062230(struct unk_data_1011* arg0) {
    if (func_80062454(arg0) != 0) {
        if (func_80062370(arg0, 0) != 0) {
            func_80062430(arg0, 3);
            return 0;
        }
        if (func_80062388(arg0, 5) != 0) {
            func_80062878(arg0);
            if (func_80063D14(arg0->unk198, func_80062950(arg0)) == 0) {
                bzero(&arg0->unk8[arg0->unk6], 0x50);
                arg0->unk8[arg0->unk6].unk0 = 2;
            }
            return 1;
        }
        return func_80062388(arg0, 6) != 0;
    }
    return 1;
}


void func_80062318(void) {
    MemCardInit(0);
    MemCardStart();
    func_80063C64();
}


void func_80062348(void) {
    func_800998C8();
    func_800993FC();
}


s16 func_80062370(struct unk_data_1011* arg0, s16 arg1) {
    return arg0->unk4 == arg1;
}


s16 func_80062388(struct unk_data_1011* arg0, s16 arg1) {
    s16 temp_v0 = arg0->unk4 == arg1;
    if ((arg1 < 5) || (arg1 > 6)) {
        return 0;
    }
    if (temp_v0 != 0) {
        func_80062410(arg0, 0);
    }
    return temp_v0;
}


void func_800623E8(struct unk_data_1011* arg0) {
    arg0->unk1AE = 0;
    bzero(&arg0->unk1A8, 6);
}


void func_80062410(struct unk_data_1011* arg0, s16 arg1) {
    arg0->unk4 = arg1;
    func_800623E8(arg0);
}


s32 func_80062430(struct unk_data_1011* arg0, s16 arg1) {
    func_80062410(arg0, arg1);
    return 1;
}


s16 func_80062454(struct unk_data_1011* arg0) {
    return arg0->unk8[arg0->unk6].unk0;
}


s16 func_80062478(struct unk_data_1011* arg0, s16 arg1) {
    return arg0->unk8[arg1].unk0;
}


s32 func_8006249C(struct unk_data_1011* arg0) {
    u8 sp10[0x200];
    s32 * sp210;

    bzero(*arg0->unk198, 4);
    func_80062E44(arg0, &sp10);
    memcpy(&arg0->unk148, &arg0->unk8[arg0->unk6], 0x50);
    arg0->unk148.unk0 = 1;
    if (func_80061B3C(&arg0->unk148, arg0->unk19C) == 0) {
        return 0;
    }
    memcpy(*arg0->unk198, sp10, 0x200);
    memcpy(&(*arg0->unk198)[0x200], &arg0->unk148, 0x50);
    memcpy(&(*arg0->unk198)[0x280], D_800B72AC, 0x173C);
    sp210 = func_80063CE4(arg0->unk198);
    memcpy(&(*arg0->unk198)[func_80061EC8(0x173C) + 0x280], &sp210, 4); // idk
    return 1;
}


s32 func_80062780(struct unk_data_1011* arg0) {
    func_80062878(arg0);
    memcpy(D_800B72AC, &arg0->unk198[0][0x280], 0x173C);
    return 1;
}


s32 func_80062878(struct unk_data_1011* arg0) {
    memcpy(&arg0->unk8[arg0->unk6], &arg0->unk198[0][0x200], 0x50);
    arg0->unk8[arg0->unk6].unk0 = 1;
    return 1;
}


s32 func_80062950(struct unk_data_1011* arg0) {
    s32 sp10 = 0;
    memcpy(&sp10, &(*arg0->unk198)[func_80061EC8(0x173C) + 0x280], 4);
    return sp10;
}


s32 func_800629A0(struct unk_data_1011* arg0) {
    return arg0->unkF8.unk0;
}


s32 func_800629AC(struct unk_data_1011* arg0) {
    s16 var_a1;
    
    for (var_a1 = 0; var_a1 < 3; var_a1++) {
        if (arg0->unk8[var_a1].unk0 != 0) {
            return 1;
        }
    }
    return 0;
}


void func_80062A00(u8* arg0, u8 (* arg1)[2]) {
    u8 sp10[3];
    s16 var_s1;
    s16 temp_v0 = func_8009C9BC(arg0);
    
    for (var_s1 = 0; var_s1 < temp_v0; var_s1++) {
        func_80062AB0(arg0[var_s1], sp10);
        memcpy(arg1[var_s1], sp10, 3);
    }
}


void func_80062AB0(u8 arg0, u8* arg1) {
    if (arg0 == 0x20) {
        memcpy(arg1, &(u8[3]){0x82, 0x40, 0x00}, 3);
    }
    if (arg0 == 0x30) {
        memcpy(arg1, &(u8[3]){0x82, 0x4F, 0x00}, 3);
    }
    if (arg0 == 0x31) {
        memcpy(arg1, &(u8[3]){0x82, 0x50, 0x00}, 3);
    }
    if (arg0 == 0x32) {
        memcpy(arg1, &(u8[3]){0x82, 0x51, 0x00}, 3);
    }
    if (arg0 == 0x33) {
        memcpy(arg1, &(u8[3]){0x82, 0x52, 0x00}, 3);
    }
    if (arg0 == 0x34) {
        memcpy(arg1, &(u8[3]){0x82, 0x53, 0x00}, 3);
    }
    if (arg0 == 0x35) {
        memcpy(arg1, &(u8[3]){0x82, 0x54, 0x00}, 3);
    }
    if (arg0 == 0x36) {
        memcpy(arg1, &(u8[3]){0x82, 0x55, 0x00}, 3);
    }
    if (arg0 == 0x37) {
        memcpy(arg1, &(u8[3]){0x82, 0x56, 0x00}, 3);
    }
    if (arg0 == 0x38) {
        memcpy(arg1, &(u8[3]){0x82, 0x57, 0x00}, 3);
    }
    if (arg0 == 0x39) {
        memcpy(arg1, &(u8[3]){0x82, 0x58, 0x00}, 3);
    }
}


s32 func_80062C9C(struct unk_data_1011 * arg0, s8* arg1) {
    char sp18[8];
    char sp20[8];
    char sp28[0x18];
    char sp40[8];
    char sp48[8];
    char sp50[8];

    sprintf(sp18, "%2d", func_8004CA20(0));
    func_80062A00(sp18, sp20);
    if (arg0->unk19C == 1) {
        func_800636FC(sp28, func_8004E9C0(0));
    } else {
        s32 temp_s0 = func_80063A2C();
        if (func_80044114() == 0) {
            func_800637E0(sp28, temp_s0);
        } else {
            func_800638E8(sp28, temp_s0);
        }
    }
    if (func_8004C06C(0xF8) == 0) {
        memcpy(sp40, "　　", 5);
    } else {
        memcpy(sp40, "ＥＸ", 5);
    }
    if (arg0->unk19C == 0) {
        return 0;
    } else if (arg0->unk19C == 1) {
        sprintf(sp48, "%1d", (s16)(arg0->unk6 + 1));
        func_80062A00(sp48, sp50);
        sprintf(arg1, "真・女神転生　　　ＦＩＬＥ%s　　%s　ＬＶ%s　%s", sp50, sp40, sp20, sp28);
    } else if (arg0->unk19C == 2) {
        sprintf(arg1, "真・女神転生　　　ＱＵＩＴ　　　%s　ＬＶ%s　%s", sp40, sp20, sp28);
    }
    return 1;
}



s32 func_80062E44(struct unk_data_1011* arg0, u8 (*arg1)[0x200]) {
    u8 sp10[0x41];
    struct unk_data_1017 sp58 = D_800119E0;
    struct unk_data_1017 sp118 = D_80011AA0;
    struct unk_data_1017 sp1D8 = D_80011B60;
    struct unk_data_1017 sp298 = D_80011C20;
    struct unk_data_1017 sp358 = D_80011CE0;
    s32 temp_v0;

    bzero(&sp10, 0x41);
    bzero(*arg1, 0x200);
    func_80062C9C(arg0, &sp10);
    arg1[0][0] = 0x53;
    arg1[0][1] = 0x43;
    arg1[0][3] = 1;
    memcpy(&arg1[0][4], &sp10, 0x40);
    temp_v0 = func_8004E600(0);
    if (temp_v0 == 0) {
        arg1[0][2] = 0x13;
        memcpy(&arg1[0][0x60], &sp58.unk14, 0x20);
        memcpy(&arg1[0][0x80], &sp118.unk40, 0x80);
        memcpy(&arg1[0][0x100], &sp1D8.unk40, 0x80);
        memcpy(&arg1[0][0x180], &sp58.unk40, 0x80);
    } else if (temp_v0 == 1) {
        arg1[0][2] = 0x12;
        memcpy(&arg1[0][0x60], &sp298.unk14, 0x20);
        memcpy(&arg1[0][0x80], &sp298.unk40, 0x80);
        memcpy(&arg1[0][0x100], &sp358.unk40, 0x80);
    } else if (temp_v0 == 2) {
        arg1[0][2] = 0x13;
        memcpy(&arg1[0][0x60], &sp58.unk14, 0x20);
        memcpy(&arg1[0][0x80], &sp118.unk40, 0x80);
        memcpy(&arg1[0][0x100], &sp58.unk40, 0x80);
        memcpy(&arg1[0][0x180], &sp1D8.unk40, 0x80);
    }
    return 1;
}


s32 func_800636FC(char* arg0, s32 arg1) {
    char sp10[0x143] = {
        "　　　　　研究所\00"
        "　　　シンジュク\00"
        "　　　イケブクロ\00"
        "　　　　　ギンザ\00"
        "　　　　シナガワ\00"
        "　　　　　ウエノ\00"
        "カテドラルカオス\00"
        "　カテドラルロウ\00"
        "　　　ロッポンギ\00"
        "　　Ｔ．Ｄ．Ｌ．\00"
        "　　　　　シブヤ\00"
        "トウキョウタワー\00"
        "　　　　　　都庁\00"
        "　　　　　　自宅\00"
        "　　　　金剛神界\00"
        "　　　　　　病院\00"
        "　スガモプリズン\00"
        "　　　ＥＲＲＯＲ"
    };

    strcpy(arg0, &sp10[arg1 * 0x11]);
    return 1;
}


s32 func_800637E0(char* arg0, s32 arg1) {
    char sp10[0x3EB] = {
        "　　　不正データ\0"
        "　　　シンジュク\0"
        "　　　　　ヨヨギ\0"
        "　　　センダガヤ\0"
        "　　　シナノマチ\0"
        "　　　　　ヨツヤ\0"
        "　　　　イチガヤ\0"
        "ジングウガイエン\0"
        "　　　　アカサカ\0"
        "　　キチジョウジ\0"
        "　　　イケブクロ\0"
        "　　　　　スガモ\0"
        "　　　　　タバタ\0"
        "　　　　　ウエノ\0"
        "　　　　イタバシ\0"
        "　　　　ニッポリ\0"
        "　ミナミセンジュ\0"
        "　　　　オチアイ\0"
        "　　　　　メジロ\0"
        "　　　ゾウシガヤ\0"
        "　　　　オオツカ\0"
        "　　　コイシカワ\0"
        "　　　　コマゴメ\0"
        "　　　　アサクサ\0"
        "　　　　オオクボ\0"
        "　　タカダノババ\0"
        "　　　　　ワセダ\0"
        "　　　カグラザカ\0"
        "　　　イイダバシ\0"
        "　　コウラクエン\0"
        "　　　　　ユシマ\0"
        "　　　オカチマチ\0"
        "　　スイドウバシ\0"
        "　　オチャノミズ\0"
        "　　　アキハバラ\0"
        "　　　コウジマチ\0"
        "　　　　　クダン\0"
        "　　　　　　皇居\0"
        "　ジンボウチョウ\0"
        "　　　　　カンダ\0"
        "　　　マルノウチ\0"
        "　　　ニホンバシ\0"
        "　　ナガタチョウ\0"
        "　　カスミガセキ\0"
        "　　　　　ギンザ\0"
        "　　Ｔ．Ｄ．Ｌ．\0"
        "　　　　　シブヤ\0"
        "　　　　アオヤマ\0"
        "　　　トラノモン\0"
        "　　　　　アザブ\0"
        "　　　ロッポンギ\0"
        "　　　　　　シバ\0"
        "　　　　　ヒロオ\0"
        "　　　　シナガワ\0"
        "　　　　　メグロ\0"
        "　　　　　エビス\0"
        "　　シロガネダイ\0"
        "　　　　タカナワ\0"
        "　　　カテドラル"
    };

    strcpy(arg0, &sp10[arg1 * 0x11]);
    return 1;
}


s32 func_800638E8(char * arg0, s32 arg1) {
    char sp10[0x8D5] = {
        "　　　　　　自宅\0"
        "　　　　　隣の家\0"
        "　　　アーケード\0"
        "　　　　公園の館\0"
        "　　　　病院１Ｆ\0"
        "　　　　病院２Ｆ\0"
        "　エコービル１Ｆ\0"
        "　エコービル２Ｆ\0"
        "　エコービル３Ｆ\0"
        "　エコービル４Ｆ\0"
        "　エコービル５Ｆ\0"
        "　　　研究所１Ｆ\0"
        "　　　研究所２Ｆ\0"
        "　シンジュク東口\0"
        "　シンジュク西口\0"
        "シンジュク地下街\0"
        "シンジュク地下道\0"
        "　　ディスコ地下\0"
        "　シンジュクビル\0"
        "　シンジュクビル\0"
        "　　　　　　都庁\0"
        "シンジュク西ビル\0"
        "　　　駐屯地１Ｆ\0"
        "　　　駐屯地２Ｆ\0"
        "　　　駐屯地３Ｆ\0"
        "　　駐屯地Ｂ１Ｆ\0"
        "　　大使館地下道\0"
        "　　　大使館１Ｆ\0"
        "　　　大使館２Ｆ\0"
        "　　　　金剛神界\0"
        "　シンジュク東口\0"
        "　シンジュク西口\0"
        "シンジュク地下街\0"
        "　シブヤビル１Ｆ\0"
        "　シブヤビル２Ｆ\0"
        "　少女の精神世界\0"
        "　ロッポンギ通路\0"
        "　ロッポンギ１Ｆ\0"
        "　ロッポンギ２Ｆ\0"
        "　ロッポンギ３Ｆ\0"
        "ロッポンギＢ１Ｆ\0"
        "　大地下道Ｂ３Ｆ\0"
        "　大地下道Ｂ２Ｆ\0"
        "ロッポンギ地下道\0"
        "ロッポンギ地下道\0"
        "イケブクロ地下道\0"
        "イケブクロ地下道\0"
        "　旧警視庁Ｂ１Ｆ\0"
        "　　旧警視庁１Ｆ\0"
        "　　旧警視庁２Ｆ\0"
        "　　旧警視庁３Ｆ\0"
        "　　旧警視庁４Ｆ\0"
        "　　旧警視庁５Ｆ\0"
        "　Ｔ．タワー１Ｆ\0"
        "Ｔ．タワー３０Ｆ\0"
        "Ｔ．タワー４５Ｆ\0"
        "　　ギンザ北西口\0"
        "　　ギンザ北東口\0"
        "　　ギンザ南西口\0"
        "　　ギンザ南東口\0"
        "　　ギンザＢ１Ｆ\0"
        "　　ギンザＢ２Ｆ\0"
        "　　ギンザＢ３Ｆ\0"
        "　　ギンザ地下道\0"
        "　　シナガワ１Ｆ\0"
        "　　シナガワ２Ｆ\0"
        "　　シナガワ３Ｆ\0"
        "　　シナガワ４Ｆ\0"
        "　　プリズン１Ｆ\0"
        "　　プリズン２Ｆ\0"
        "　　プリズン３Ｆ\0"
        "　　プリズン４Ｆ\0"
        "　プリズン４５Ｆ\0"
        "　　　ウエノ１Ｆ\0"
        "　　　ウエノ２Ｆ\0"
        "　　　ウエノ３Ｆ\0"
        "　　ウエノＢ１Ｆ\0"
        "　　ウエノＢ２Ｆ\0"
        "Ｔ．Ｄ．Ｌ．１Ｆ\0"
        "Ｔ．Ｄ．Ｌ．２Ｆ\0"
        "Ｔ．Ｄ．Ｌ．３Ｆ\0"
        "Ｔ．Ｄ．Ｌ．４Ｆ\0"
        "　　　都庁３２Ｆ\0"
        "　　都庁左４５Ｆ\0"
        "　　都庁左４６Ｆ\0"
        "　　都庁左４７Ｆ\0"
        "　　都庁左４８Ｆ\0"
        "　　都庁右４５Ｆ\0"
        "　　都庁右４６Ｆ\0"
        "　　都庁右４７Ｆ\0"
        "　　都庁右４８Ｆ\0"
        "　　　　　北の館\0"
        "　　　　　東の館\0"
        "　　　　　西の館\0"
        "　　　　　南の館\0"
        "　　　皇居Ｂ１Ｆ\0"
        "　　　皇居Ｂ２Ｆ\0"
        "　　　皇居Ｂ３Ｆ\0"
        "　　　皇居Ｂ４Ｆ\0"
        "　　　皇居Ｂ５Ｆ\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　中断セーブ不可\0"
        "　カテドラル１Ｆ\0"
        "カテドラルＢ１Ｆ\0"
        "カテドラルＢ２Ｆ\0"
        "カテドラルＢ３Ｆ\0"
        "カテドラルＢ４Ｆ\0"
        "カテドラルＢ５Ｆ\0"
        "カテドラルＢ６Ｆ\0"
        "カテドラルＢ７Ｆ\0"
        "カテドラルＢ８Ｆ\0"
        "　カテドラル２Ｆ\0"
        "　カテドラル３Ｆ\0"
        "　カテドラル４Ｆ\0"
        "　カテドラル５Ｆ\0"
        "　カテドラル６Ｆ\0"
        "　カテドラル７Ｆ\0"
        "　カテドラル８Ｆ\0"
        "　　ギンザ地下道\0"
        "　　ギンザ地下道\0"
        "　カテドラル３Ｆ\0"
        "カテドラルＢ２Ｆ\0"
        "　　ギンザ地下道"
    };

    strcpy(arg0, &sp10[arg1 * 0x11]);
    return 1;
}


s32 func_800639CC(void) {
    s16 temp_v0 = func_8002F180();
    
    if (temp_v0 == 0) {
        return 0xE;
    } else if (temp_v0 == 29) {
        return 0xF;
    } else if (temp_v0 == 4) {
        return 0x10;
    } else if (temp_v0 == 0x46) {
        return 0x11;
    } else {
        return 0;
    }
}


s32 func_80063A2C(void) {
    if (func_80044114() == 0) {
        struct return_thing sp10;
        func_80017164(&sp10);
        return func_80045658(sp10.init_x, sp10.init_y);
    } else {
        return func_8002F180();
    }
}


u8* func_80063A80(struct unk_data_1011* arg0, s16 arg1) {
    if (arg0->unk8[arg1].unk48) {
        return func_8004B7D8(7, arg0->unk8[arg1].unk3E + 0x1E);
    } else {
        return func_8004B7D8(7, arg0->unk8[arg1].unk3E + 0x59);
    }
}


s32 func_80063AE4(struct unk_data_1011* arg0) {
    if (func_80062370(arg0, 0) == 0) {
        if (arg0->unk2 == 0x14) {
            func_80062410(arg0, 2);
            arg0->unk2 = -1;
            return 0;
        }
        if ((func_80062388(arg0, 5) != 0) || (func_80062388(arg0, 6) != 0)) {
            func_80062410(arg0, 1);
        }
    } else {
        func_80062410(arg0, 1);
    }
    return 1;
}


s32 func_80063B74(struct unk_data_1011* arg0, s32* arg1) {
    if (func_80062370(arg0, 0) != 0) {
        func_80062410(arg0, 1);
        return 0;
    } else if (func_80062388(arg0, 5) != 0) {
        func_80062410(arg0, 2);
        arg0->unk2 = -1;
        *arg1 = 0;
        return 1;
    } else if (func_80062388(arg0, 6) != 0) {
        if (arg0->unk2 == 0xE) {
            func_80062410(arg0, 2);
            arg0->unk2 = -1;
            *arg1 = 0;
        } else {
            *arg1 = 1;
        }
        return 1;
    }
    return 0;
}


void func_80063C44(struct unk_data_1011* arg0, s16 arg1, s32 arg2) {
    arg0->unk8[arg1].unk0 = arg2;
}


void func_80063C64(void) {
    D_800B74A0 = 0;
}


s32 func_80063C70(struct unk_data_1011* arg0) {
    s32 var_v0;

    if (func_80062370(arg0, 0)) {
        return 1;
    } 
    // sure man whatever i guess
    var_v0 = 0;
    if ((func_80062388(arg0, 5)) || (func_80062388(arg0, 6))) { 
        var_v0 = 1;
    }
    return var_v0;
}


s32* func_80063CE4(u8 (*arg0)[0x19BC]) {
    return func_80063D58(arg0, func_800621E4());
}


s32 func_80063D14(u8 (*arg0)[0x19BC], s32 arg1) {
    return arg1 == func_80063D58(arg0, func_800621E4());
}


s32 func_80063D58(u8 *arg0, s32 arg1) {
    s32 var_a2 = 0;
    s32 var_v1 = 0;

    for (var_a2 = 0; var_a2 < arg1; var_a2++) {
        var_v1 += arg0[0];
        arg0++;
    }
    return var_v1;
}


s32 func_80063D88(struct unk_data_1011* arg0) {
    return arg0->unk1A4;
}


s16 func_80063D94(struct unk_data_1011* arg0) {
    s16 var_s0;
    s16 var_s1 = 0;

    for (var_s0 = 0; var_s0 < arg0->unk19E; var_s0++) {
        if (func_80062478(arg0, var_s0)) {
            var_s1 += 1;
        }
    }
    return var_s1;
}


s32 func_80063E1C(struct unk_data_1011* arg0) {
    return (arg0->unk1A0 + func_80063D94(arg0)) > 0;
}


s32 func_80063E54(struct unk_data_1011* arg0) {
    return arg0->unk1A0 > 0;
}


s32 func_80063E60(struct unk_data_1011* arg0) {
    return arg0->unk1B0;
}


void func_80063E6C(s16 arg0, s16 arg1) {
    char sp10[0x18];
    func_80061A0C(sp10, arg0, arg1);
    MemCardDeleteFile(0, sp10);
}


struct object* func_80063EA8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    struct unk_data_1018* temp_s0;
    struct object* temp_v0 = CreateObject(
        func_80063F98, func_80064068, 
        *FirstObjectPtrPtr, arg3, 0, 0x1A0
    );
    if (temp_v0 == NULL) return NULL;
    temp_s0 = temp_v0->data;
    bzero((u8* ) temp_s0, 0x1A0);
    temp_s0->unk19C = &temp_s0->unk4;
    temp_s0->unk18C = arg3;
    temp_s0->unk0 = 0;
    temp_s0->unk4 = 0;
    temp_s0->unk188 = arg0;
    temp_s0->unk190 = arg1;
    temp_s0->unk194 = arg2;
    temp_s0->unk184 = 0;
    temp_s0->unk198 = 0;
    func_8005DD14(&temp_s0->unk8, 0x18, 0x88, 0x110, 0x54, temp_s0->unk194);
    return temp_v0;
}


void func_80063F98(struct object* arg0) {
    struct unk_data_1018* temp_s1 = arg0->data;
    
    if (arg0->initialized != 0) {
        if (temp_s1->unk198 == 0) {
            if (func_80056480(
                temp_s1->unk19C, temp_s1, temp_s1->unk188, 
                0x1C, 0x8C, 
                (temp_s1->unk184 == 0) ? temp_s1->unk190 << 0x10 : 0xC0000
            ) == 1) {
                temp_s1->unk198 = 2;
            }
            
        } else if (temp_s1->unk198 == 1) {
            if (func_8005667C(temp_s1->unk19C) == 1) {
                temp_s1->unk198 = 0;
            }
        }
        if (temp_s1->unk184 != 0) {
            func_8005DD40(&temp_s1->unk8);
        }
    }
}


void func_80064068(struct object* arg0) {
    struct unk_data_1018* temp_s0 = arg0->data;
    
    arg0->initialized = 0;
    RemoveObject(temp_s0->unk0);
    temp_s0->unk0 = NULL;
    RemoveObject(temp_s0->unk4);
    temp_s0->unk4 = NULL;
    temp_s0->unk19C = NULL;
}


s32 func_800640AC(struct unk_data_1018 * arg0, void * arg1) {
    if (func_800651D0(arg0->unk188, arg1)) {
        return 0;
    } else {
        arg0->unk198 = 1;
        arg0->unk188 = arg1;
        return 1;
    }
}


s32 func_800640F8(struct unk_data_1018 * arg0, void * arg1) {
    arg0->unk188 = arg1;
    arg0->unk198 = 0;
    return 1;
}


void func_80064108(struct unk_data_1018* arg0, s32 arg1) {
    func_8005DD14(&arg0->unk8, 0x18, 0x88, 0x110, 0x54, arg1);
    arg0->unk184 = 1;
}


void func_80064150(struct unk_data_1018 * arg0) {
    arg0->unk184 = 0;
}


s32 func_80064158(struct unk_data_1018 * arg0) {
    return arg0->unk184;
}


s32 func_80064164(struct unk_data_1018 * arg0) {
    return arg0->unk198 == 2;
}


void func_80064178(struct unk_data_1018* arg0) {
    func_80064108(arg0, 0xD);
    func_800641DC(arg0, 0xC);
}


void func_800641AC(struct unk_data_1018* arg0) {
    func_80064150(arg0);
    func_800641DC(arg0, arg0->unk190);
}


void func_800641DC(struct unk_data_1018* arg0, s32 arg1) {
    if (arg0->unk4 != NULL && arg0->unk4->unk2C == 1) {
        struct object * temp_v1_2 = ((struct unk_data_600 *)arg0->unk4->data)->unk7914;
        if ((temp_v1_2 != NULL) && (temp_v1_2->unk2C == 1)) {
            ((struct placeholder_struct *)temp_v1_2->data)->unk54 = arg1;
        }
    }
}


s32 func_80064238(struct object** arg0) {
    return func_800213A0(arg0, 0) == 3;
}


s32 func_8006425C(struct unk_data_1010* arg0) {
    struct object * temp_a0 = *arg0->unk19C;
    
    if ((temp_a0 != NULL) && (temp_a0->unk2C == 1)) {
        return ((struct unk_data_600 *)temp_a0->data)->unk78F8 == 0;
    }
    return 1;
}


s16 func_800642A0(s16 *arg0, s16 arg1, s16 arg2) {
    s16 var_s1;
    s16 var_s0;

    for (var_s1 = 0, var_s0 = arg1; var_s0 < arg2; var_s0++) {
        if (func_8004CA5C(var_s0) != 0) {
            arg0[var_s1] = var_s0;
            var_s1++;
        }
    }
    return var_s1;
}


void func_80064344(s16 arg0, s16* arg1) {
    if (arg0 == 13) {
        *arg1 = 3;
        func_8003FFE4(2);
    } else if (arg0 == 14) {
        *arg1 = 1;
        func_8003FFE4(3);
    } else if (arg0 == 15) {
        *arg1 = 2;
        func_8003FFE4(4);
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800643B0);

void func_80064430(struct unk_data_1014 * arg0, s16 arg1, s16* arg2) {
    if ((arg0->unk32 != 0) || (arg0->unk2C != 0)) {
        if (arg0->unk28 == 0) {
            *arg2 = 1;
        } else if (arg0->unk28 == 1) {
            *arg2 = 3;
        }
    }

    if (arg1 == 13) {
        return;
    } else if (arg1 == 14) {
        return;
    } else if (arg1 == 15) {
        *arg2 = 2;
    }
}


void func_800644A8(s16 arg0, s16* arg1) {
    if ((arg0 > 11) && (arg0 < 16)) {
        *arg1 = 3;
    }
}


void func_800644C8(s16* arg0, s16* arg1) {
    s32 var_s0 = 0;
    
    *arg0 = -1;
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_80018F14(0, var_s0 + 12) != 0) {
            *arg0 = var_s0 + 12;
        }
    }
    *arg1 = -1;
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_80018F40(0, var_s0 + 4) != 0) {
            *arg1 = var_s0 + 4;
        }
    }
}


s16 func_80064570(s16 * arg0, s32 arg1) {
    s16 sp10[4];
    s16 var_s1 = 0;
    s16 var_s3;

    for (var_s3 = 0; var_s3 < func_8004D764(); var_s3++) {
        s32 var_a1;
        s32 temp_s0 = func_8004B2C4(arg1);
        func_800642A0(sp10, 0, 4);
        if (temp_s0 & 2) {
            var_a1 = 1;
        } else {
            var_a1 = 0;
        }
        if (temp_s0 & 4) {
            var_a1 = 6;
        }
        if (temp_s0 & 8) {
            var_a1 = 2;
        }
        if (temp_s0 & 0x10) {
            var_a1 = 3;
        }
        if (temp_s0 & 0x20) {
            var_a1 = 4;
        }
        if (temp_s0 & 0x40) {
            var_a1 = 5;
        }
        if (func_8004CE78(sp10[var_s3], var_a1) == arg1) {
            if (arg0 != 0) {
                arg0[var_s1] = sp10[var_s3];
            }
            var_s1 += 1;
        }
    }
    return var_s1;
}


s16 func_80064684(s32 arg0) {
    s16 sp[79] = {
        0x96, 0x96, 0x96, 0x96,
        0x96, 0x96, 0x96, 0x96,
        0x96, 0x96, 0x96, 0x96,
        0x96, 0x9A, 0x9A, 0x9A,
        0x9A, 0x9A, 0x9A, 0x95,
        0x95, 0x95, 0x95, 0x95,
        0x95, 0x95, 0x95, 0x95,
        0x95, 0x95, 0x95, 0x95,
        0x95, 0x95, 0x95, 0x95,
        0x98, 0x98, 0x95, 0x95,
        0x95, 0x98, 0x97, 0x97,
        0x97, 0x97, 0x97, 0x97,
        0x97, 0x98, 0x98, 0x98,
        0x99, 0x99, 0x99, 0x99,
        0x99, 0x99, 0x99, 0x99,
        0x99, 0x99, 0x99, 0x99,
        0x9B, 0x9B, 0x9B, 0x9B,
        0x9B, 0x9B, 0x9B, 0x9B,
        0x9B, 0x9B, 0x9B, 0x9B,
        0x9B, 0x9B, 0x9B
    };

    return sp[arg0 - 0xB0];
}


s32 func_80064774(s16* arg0) {
    if (*arg0 > 0) {
        *arg0 -= 1;
        return 0;
    } else {
        *arg0 = 10;
        return 1;
    }
}


s32 func_800647A4(struct unk_data_1011 * arg0, s16 arg1, s16 arg2) {
    s32 var_v1 = 0;
    s16 temp_a3 = arg0->unk0;
    s16 temp_v0 = arg0->unk2;

    arg0->unk0 = arg1;
    arg0->unk2 = arg2;
    arg0->unk4 = 0;
    
    if (temp_v0 != arg2) {
        var_v1 = (temp_a3 ^ arg1) != 0;
    }
    return var_v1;
}


s32 func_800647DC(struct unk_data_1011* arg0, s16 arg1) {
    s16 temp_v0 = arg0->unk2;
    arg0->unk2 = arg1;
    arg0->unk4 = 0;
    return (temp_v0 ^ arg1) != 0;
}


s32 func_800647F8(struct unk_data_1011* arg0, s16 arg1, s16 arg2) {
    s32 var_v1 = 0;

    if (arg0->unk0 == arg1) {
        var_v1 = arg0->unk2 == arg2;
    }
    return var_v1;
}


s16 func_80064828(s16 arg0, s16 arg1) {
    if (arg1 < 0) {
        return 0;
    } else if (arg1 >= arg0) {
        return (arg0 - 1);
    } else {
        return arg1;
    }
}


s16 func_80064864(s16 arg0, s16 arg1) {
    if (arg1 < 0) {
        return 0;
    } else if (arg0 < arg1) {
        return arg0;
    } else {
        return arg1;
    }
}


s16 func_80064898(s16 arg0, s16 arg1) {
    if (arg0 == 0) {
        return 0;
    } else {
        return func_800648E0((arg0 + 1), arg1);
    }
}


s16 func_800648E0(s16 arg0, s16 arg1) {
    if (arg0 == 0) {
        return 0;
    } else if (arg1 < 0) {
        return (arg0 + (arg1 % arg0));
    } else if (arg1 >= arg0) {
        return (arg1 % arg0);
    } else {
        return arg1;
    }
}


void func_80064994(struct unk_data_1014* arg0, s16* arg1, s16* arg2) {
    s16 temp_s2 = arg0->unk8 - arg0->unk4;
    
    if (arg0->unk2A != 0) {
        if (func_80018F40(0, 4U) != 0) {
            if (arg0->unk24 == 0) {
                if (arg0->unk6 != 0) {
                    *arg1 = 1;
                }
            } else {
                *arg1 = 1;
            }
        } else if (func_80018F40(0, 6U) != 0) {
            if (arg0->unk24 == (arg0->unk4 - 1)) {
                if (arg0->unk6 != temp_s2) {
                    *arg1 = 1;
                }
            } else {
                *arg1 = 1;
            }
        } else if (func_80018F40(0, 0xBU) != 0) {
            if (arg0->unk4E != 0) {
                if (arg0->unk24 == 0) {
                    if (arg0->unk6 >= 0) {
                        *arg1 = 1;
                    }
                } else {
                    *arg1 = 1;
                }
            }
        } else if (func_80018F40(0, 0xAU) != 0) {
            if (arg0->unk4E != 0) {
                if (arg0->unk24 != (arg0->unk4 - 1)) {
                    *arg1 = 1;
                } else if (arg0->unk6 <= temp_s2) {
                    *arg1 = 1;
                }
            }
        }
    }
    
    if (func_80018F14(0, 0xDU) != 0) {
        *arg2 = 2;
    } else if ((func_80018F14(0, 0xEU) != 0) && (arg0->unk30 == 0)) {
        *arg2 = 3;
    } else if ((func_80018F14(0, 0xFU) != 0) && (arg0->unk30 == 0)) {
        *arg2 = 4;
    }
}


s32 func_80064B5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0 = (arg2 == -1) ? 1 : -1;
    s32 temp_v0 = func_8004CE78(arg0, arg1);
    
    if (temp_v0 != -1) {
        func_8004E364(temp_v0, 1);
    }
    
    func_8004E364(arg2, var_s0);
    func_8004CDFC(arg0, arg1, arg2);
    
    if (arg3 != 0) {
        func_8004DC84(arg0);
    } else {
        func_8004DB70(arg0);
    }
    return 1;
}


void func_80064C1C(struct object * arg0) {
    struct placeholder_struct * temp_a1 = arg0->data;
    struct object * temp_a0 = temp_a1->unk64;
    
    if ((temp_a0 != NULL) && (temp_a0->unk2C == 1)) {
        temp_a0->initialized = 0;
    }
    temp_a1->unk26 = 0;
}


void func_80064C50(s16* arg0, s16* arg1) {
    s16 temp_v1 = *arg1;
    *arg1 = *arg0;
    *arg0 = temp_v1;
}


void func_80064C64(s32* arg0, s32* arg1) {
    s32 temp_v1 = *arg1;
    *arg1 = *arg0;
    *arg0 = temp_v1;
}


u16 func_80064C78(u8 (* arg0)[2], s16 arg1) {
    struct unk_data_1019 sp0;

    sp0.unk0 = 0;
    sp0.unk4 = 0;

    // I haven't the faintest idea what's happening here.
    memcpy(&sp0, *arg0, 4);
    memcpy(&sp0.unk4, arg0[arg1 + 2], 2);
    return (sp0.unk0 + sp0.unk4) >> 1;
}


s32 func_80064CD4(struct return_thing* arg0) {
    if (arg0->unk10 == 0) {
        arg0->init_y += 1;
    } else if (arg0->unk10 == 2) {
        arg0->init_x -= 1;
    } else if (arg0->unk10 == 4) {
        arg0->init_y -= 1;
    } else if (arg0->unk10 == 6) {
        arg0->init_x += 1;
    }
    arg0->unk10 = func_800648E0(4, ((arg0->unk10 / 2) + 2)) * 2;
    return 1;
}


s32 func_80064D98(struct unk_data_600* arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((arg0->unk7914 != NULL) && (arg0->unk7914->unk2C == 1)) {
        struct placeholder_struct * temp_a0_2 = arg0->unk7914->data;
        temp_a0_2->unk4A = ((arg1 + arg3) - 0xB0);
        temp_a0_2->unk4C = arg2 - 0x3E;
        return 1;
    }
    return 0;
}


s32 func_80064DD8(s16 arg0, s16 x, s16 y, s16 tge, u32 color, s32 ot_index, struct sprite_data* arg6) {
    struct sprite_init_data sp10;
    struct texture_data sp28;
    u16 var_a2;

    sp28 = GetTextureInitData(arg0);
    sp10.x = x;
    sp10.y = y;
    sp10.w = sp28.w;
    sp10.h = sp28.h;
    var_a2 = 0;
    if (sp28.unkA == -1) {
        sp10.abe = 0;
    } else {
        sp10.abe = 1;
        var_a2 = sp28.unkA;
    }
    sp10.tge = tge;
    sp10.r = (color >> 0x10);
    sp10.g = (color >> 8);
    sp10.b = color;
    sp10.u = sp28.u;
    sp10.v = sp28.v;
    sp10.ot_index = ot_index;
    if (sp28.unk6 == 0) {
        sp10.tpage = ((var_a2 & 3) << 5) | 0x1B;
    } else {
        sp10.tpage = ((var_a2 & 3) << 5) | 0x1A;
    }
    sp10.clut = ((((sp28.unk8) >> 4) + 0x1E0) << 6) | (sp28.unk8 & 0xF);
    func_8001AA3C(arg6, &sp10);
    return 1;
}


s32 func_80064EF4(void) {
    s16 var_s0;

    for (var_s0 = 0; var_s0 < 0x100; var_s0++) {
        if (func_80064570(0, var_s0) != 0) {
            return 1;
        }
    }
    return 0;
}


s16 func_80064F50(struct placeholder_struct * arg0, struct not_dialog_box* arg1) {
    s16 var_v0;
    struct unk_data_110 * temp_s0 = arg0->unk64->data;
    s16 temp_v0 = func_8006502C(arg0);
    
    if (temp_v0 == 0 || temp_v0 == 2) {
        s16 var_s0 = temp_s0->unk25E;
        if (temp_v0 != 0) {
            var_s0 -= arg0->unk2;
        }
        if (arg0->unk2 < var_s0) {
            func_8005DE48(arg1, arg1->x, arg1->y, arg1->w, var_s0);
            var_v0 = arg1->y + var_s0;
        } else {
            var_v0 = arg1->y;
        }
    } else if (temp_v0 == 1) {
        func_8005DD40(arg1);
        var_v0 = arg1->y + arg1->h;
    } else {
        var_v0 = arg1->y;
    }
    return var_v0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006502C);

s32 func_80065090(struct object * arg0) {
    struct unk_data_1014 * temp_s0 = arg0->data;
    func_8006710C(arg0);
    temp_s0->unk32 = 0;
    return 1;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800650C0);

s32 func_80065104(struct unk_data_1014* arg0, struct unk_data_1014* arg1, s32 arg2) {
    struct unk_data_1011* temp_t1 = arg0->unk6C->data;
    struct unk_data_1011* temp_t2 = arg1->unk6C->data;
    s16 temp_t0 = arg1->unk56;

    arg1->unk74->initialized = 0;
    arg1->unk70->initialized = 0;
    if (arg0->unk4E != 0) {
        temp_t1->unk4 = temp_t2->unk4 = arg2 + (temp_t0 - 16);
        arg0->unk74->initialized = 1;
        arg0->unk70->initialized = 1;
        return 1;
    } else {
        arg0->unk74->initialized = 0;
        arg0->unk70->initialized = 0;
        temp_t1->unk4 = temp_t2->unk4 = arg2 + (temp_t0 - 12);
        return 0;
    }
}


s16 func_80065194(u16* arg0) {
    s16 var_a1;

    for (var_a1 = 0; arg0[var_a1] != 0; var_a1++);
    return var_a1;
}


s32 func_800651D0(u16* arg0, u16* arg1) {
    s16 temp_s0 = func_80065194(arg0);
    
    if (temp_s0 != (func_80065194(arg1))) {
        return 0;
    } else {
        return func_8009C6EC(arg0, arg1, temp_s0 * 2) == 0;
    }
}


s32 func_80065240(void) {
    D_800B74A4 = 0;
    return func_80019C58(0, 0, 0x1E, &D_800B74A4, 0, 3);
}


void func_8006527C(void) {
    func_80019478(D_800B74A4);
    D_800B74A4 = 0;
}


s32 func_800652A0(void) {
    return D_800B74A4;
}


s32 func_800652AC(void) {
    D_800B74A8 = 0;
    return func_80019C58(0, 0, 0x1C, &D_800B74A8, 0, 3);
}


void func_800652E8(void) {
    func_80019478((struct unk_data_9* ) D_800B74A8);
    D_800B74A8 = 0;
}


s32 func_8006530C(void) {
    return D_800B74A8;
}


s32 func_80065318(void) {
    D_800B74AC = 0;
    return func_80019C58(0, 0, 0x1D, &D_800B74AC, 0, 3);
}


void func_80065354(void) {
    func_80019478((struct unk_data_9* ) D_800B74AC);
    D_800B74AC = 0;
}


s32 func_80065378(void) {
    return D_800B74AC;
}

s32 func_80065384(void) {
    D_800B74B0 = 0;
    return func_80019C58(0, 0, 0x1F, &D_800B74B0, 0, 3);
}


void func_800653C0(void) {
    func_80019478((struct unk_data_9* ) D_800B74B0);
    D_800B74B0 = 0;
}


s32 func_800653E4(void) {
    return D_800B74B0;
}


s32 func_800653F0(void) {
    D_800B74B4 = 0;
    return func_80019C58(0, 0, 0x18, &D_800B74B4, 0, 3);
}


void func_8006542C(void) {
    func_80019478((struct unk_data_9* ) D_800B74B4);
    D_800B74B4 = 0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065450);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006545C);

void func_800656D8(struct object* arg0) {
    s16 var_s2 = 0;
    struct unk_data_1020* temp_s1 = arg0->data;
    s32 temp_v0 = func_80065BE0(&temp_s1->unk0);
    s16 temp_v0_2 = func_8006502C(temp_v0);
    
    if (arg0->initialized != 0) {
        if (temp_v0_2 == 1) {
            if (func_80018F40(0, 7U) != 0) {
                var_s2 = -1;
            } else if (func_80018F40(0, 5U) != 0) {
                var_s2 = 1;
            }
            if (var_s2 != 0) {
                if (*((struct unk_data_1014 *)temp_s1->unk180->data)->unk18 != 0) {
                    temp_s1->unk184 = (s32) func_80064828(2, (s16) (temp_s1->unk184 + var_s2));
                } else {
                    temp_s1->unk184 = 0;
                }
            }
            func_80065A54(&temp_s1->unk0);
            func_800659CC(&temp_s1->unk0);
            func_80065924(&temp_s1->unk0);
            {
                s16 sp10 = -1;
                s16 sp12 = -1;
                func_80064994((struct unk_data_1014* ) temp_v0, &sp10, &sp12);
                if ((temp_s1->unk192 == 0) && (sp12 > 0)) {
                    func_8003FFE4(sp12);
                }
                if (temp_s1->unk18C != temp_s1->unk194) {
                    func_8003FFE4(1);
                }
            }
        }
        if (temp_s1->unk190 != 0) {
            struct unk_data_1014 * temp_t0 = temp_s1->unk17C->data;
            struct unk_data_1014 * temp_a1 = temp_s1->unk180->data;
            struct unk_data_1014 * var_a0 = (temp_t0->unk8 < temp_a1->unk8) ? temp_a1 : temp_t0;
            // Note that I don't know what struct this data actually is, but this is the only one that has an unk25E field of the right type.
            struct unk_data_110 * temp1 = temp_t0->unk64->data;
            struct unk_data_110 * temp2 = temp_a1->unk64->data;
            struct unk_data_110 * temp3 = var_a0->unk64->data;
            temp_t0->unk60 = temp_a1->unk60 = var_a0->unk60;
            temp1->unk25E = temp2->unk25E = temp3->unk25E;
            func_80064F50(var_a0, &temp_s1->unk0);
        } else {
            func_8005DD40(&temp_s1->unk0);
        }
        temp_s1->unk194 = temp_s1->unk18C;
    }
}


void func_800658E8(struct object * arg0) {
    struct unk_data_1020 * temp_s0 = arg0->data;
    RemoveObject(temp_s0->unk17C);
    RemoveObject(temp_s0->unk180);
}


s32 func_80065924(struct unk_data_1020* arg0) {
    if (arg0->unk17C != NULL && arg0->unk17C->unk2C == 1) {
        if ((arg0->unk180 != NULL) && (arg0->unk180->unk2C == 1)) {
            struct unk_data_1014 * temp_a1_2 = arg0->unk17C->data;
            struct unk_data_1014 * temp_a2_2 = arg0->unk180->data;
            
            if (arg0->unk184 == 0) {
                arg0->unk18C = temp_a1_2->unk26;
                arg0->unk18E = temp_a1_2->unk26 * 2;
            } else {
                arg0->unk18C = temp_a1_2->unk4 + temp_a2_2->unk26;
                arg0->unk18E = (temp_a2_2->unk26 * 2) + 1;
            }
            return arg0->unk18C;
        }
    }
    return 0;
}


s32 func_800659CC(struct unk_data_1020* arg0) {
    if (arg0->unk17C != NULL && arg0->unk17C->unk2C == 1) {
        if ((arg0->unk180 != NULL) && (arg0->unk180->unk2C == 1)) {
            struct unk_data_1014 * temp_a0_2 = arg0->unk17C->data;
            struct unk_data_1014 * temp_a1_2 = arg0->unk180->data;
            temp_a0_2->unk42 = temp_a0_2->unk6C->initialized = arg0->unk184 == 0;
            temp_a1_2->unk42 = temp_a1_2->unk6C->initialized = arg0->unk184;
            return arg0->unk184;
        }
    }
    return 0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065A54);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065BE0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065C18);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065C78);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065CB0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065D08);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065D68);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065D94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065DD0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065DF8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065EA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065F38);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065FE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80066528);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800667A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80066A00);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80066A2C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006710C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067148);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067248);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067414);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067424);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067478);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006771C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067C1C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067C64);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067CC4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067D6C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067E0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067E94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067F98);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067FCC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006808C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068228);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068238);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800682E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068428);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800684E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068510);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068574);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800687FC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068B8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068CA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068D10);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069140);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069460);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800695F8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069608);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006966C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800696CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800696EC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069900);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069928);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069B88);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069B94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BAC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BB8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BD8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BF0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BFC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069C2C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069CB0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069CEC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069D50);

void func_80069D98(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069DA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069DBC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069DE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069E0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069E7C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069F3C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A1D4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A26C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A368);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A4EC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A4F8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A504);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A54C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A584);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A5BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A5E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A638);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A8DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006AC74);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006ADA8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006AF20);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006AF50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B00C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B0E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B2E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B53C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B594);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B6D0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B714);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B724);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B734);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B740);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B7A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B7D4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B834);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B8B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B91C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B93C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B960);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B9E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006BA58);

void func_8006BAB4(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006BABC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006BB58);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006C4DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006C570);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006C968);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006CBE8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006CCF4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D4F0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D73C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D770);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D800);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DB6C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DB8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DC4C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DD00);
