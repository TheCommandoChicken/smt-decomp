#include "dungeon.h"

/*INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028640);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002864C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028714);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028774);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800287C0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028904);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028948);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028B20);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028C20);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028DA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029210);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002925C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800292AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029398);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029558);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002960C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029744);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002995C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029C0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029CCC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029D64);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029E8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029EE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80029F10);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002C618);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002C83C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002C95C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002C988);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002CA84);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002CAE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002CB04);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002CB34);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002CF14);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D0A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D100);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D2F4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D348);

s32 func_8002D474(s16 arg0) {
    s32 var_v1;

    if (arg0 == 0) {
        return 0;
    } else if (arg0 == 0x400) {
        var_v1 = 2;
    } else if (arg0 == 0x800) {
        var_v1 = 4;
    } else if (arg0 == 0xC00) {
        var_v1 = 6;
    } else if (arg0 == 0x2) {
        var_v1 = 0x400;
    } else if (arg0 == 0x4) {
        var_v1 = 0x800;
    } else if (arg0 == 6) {
        var_v1 = 0xC00;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D4EC);

s16 func_8002D550(SVECTOR* arg0, SVECTOR* arg1) {
    s32 var_v1;

    if (arg0->vy > arg1->vy) {
        var_v1 = 0;
    } else if (arg0->vx < arg1->vx) {
        var_v1 = 0x40;
    } else if (arg0->vy < arg1->vy) {
        var_v1 = 0x80;
    } else if (arg0->vx > arg1->vx) {
        var_v1 = 0xC0;
    }
    return var_v1;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D5C0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D6C4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D7A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002D82C);

void func_800225C8(s32, s32, s32, s32, s32);
void func_80024484(s32);
void func_80025308(s32);
void func_8003A228(s16, s16, void*);
extern dungeon_data* DungeonData;
extern void func_80028714;
extern void func_8003302C;
extern void func_800330A4;
extern void func_80036404;
extern void func_80037A50;

void func_8002D968() {
    s32 sp18[10];
    object* var_v1;
    u32 temp_v1;

    func_80024484(3);
    func_80025308(1);
    temp_v1 = DungeonData->unk4;
    switch (temp_v1) {
    case 1:
        DungeonData->return_function = &func_80028714;
        ((object *)DungeonData->origin)->proc_func = &func_800330A4;
        return;
    case 2:
        func_800225C8(2, 3, 2, 2, 2);
        ((object *)DungeonData->origin)->proc_func = &func_80036404;
        return;
    case 3 ... 5:
        ((object *)DungeonData->origin)->proc_func = &func_80037A50;
        return;
    case 6:
        func_8003A228(DungeonData->grid_x_pos, DungeonData->grid_y_pos, &sp18);
        DungeonData->return_function = &func_80028714;
        if (sp18[8] != -1) {
            ((object *)DungeonData->origin)->proc_func = &func_800330A4;
        } else {
            ((object *)DungeonData->origin)->proc_func = &func_8003302C;
        }
        return;
    case 0:
    default:
        func_800225C8(2, 3, 2, 2, 2);
        DungeonData->return_function = &func_80028714;
        ((object *)DungeonData->origin)->proc_func = &func_80028714;
        return;
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002DADC);

s16 func_8002DB7C(void) {
    return DungeonData->unk64FC;
}

s16 func_8002DB94(void) {
    return DungeonData->unk4;
}

s32 func_8002DBAC(void) {
    return DungeonData->unk6518 == 0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002DBC4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002DF90);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E120);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E178);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E484);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E4F4);

s16 func_8002E5F4(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 var_t0;
    u32 var_a1;

    var_a1 = sqr(arg1);
    if (arg3 == 0) {
        var_t0 = (sqr(arg0) * arg2) / var_a1;
    } else if (arg3 == 1) {
        var_t0 = arg2 - ((sqr(arg1 - arg0) * arg2) / var_a1);
    }
    return var_t0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E6B4);

void func_8002E7B4(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E7BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E7F4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E84C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E9A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002E9D8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002EB80);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002ED70);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002ED88);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F044);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F0AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F180);*/

s32 func_8002F198(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    if ((D_800B6F10 == 0) || 
        (func_8001F920() != 2) || 
        (((struct object *)DungeonData->origin)->proc_func != func_80028714) ||
        (DungeonData->unk6518 != 0)) {
        var_s0 = 0;
    } else if (func_80038950(DungeonData) != 1) {
        var_s0 = 1;
    }
    return var_s0;
}

s32 func_8002F228(void) {
    return DungeonData->cardinal_dir >> 10;
}

s32 func_8002F248(void) {
    s32 var_v1;

    var_v1 = D_800B6F10;
    if (DungeonData->unk4 < 3 || DungeonData->unk4 > 5) {
        var_v1 = 0;
    }
    return var_v1;
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F27C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F2F4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F30C);

void func_8002F440(s32 arg0, s32 arg1) {
    func_8003A6DC(DungeonData->grid_x, DungeonData->grid_z, arg0, arg1);
}

void func_8002F478(void) {
    func_80040204(func_8003AFB4());
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F4A0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F4F8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F5E0);

/* 99.04% */
s32 func_8002F678(s32 arg0, s32 arg1) {
    s16 temp_v0;
    s32 var_s0;

    if (DungeonData->last_z > DungeonData->grid_z) {
        arg0 = 2;
    } else if (DungeonData->last_x < DungeonData->grid_x) {
        arg0 = 3;
    } else if (DungeonData->last_z < DungeonData->grid_z) {
        arg0 = 0;
    } else if (DungeonData->last_x > DungeonData->grid_x) {
        arg0 = 1;
    }
    temp_v0 = func_80029D64(arg0, arg1);
    if (temp_v0 > 0 && temp_v0 < 4) {
        var_s0 = 0;
    } else if (temp_v0 == 0) {
        var_s0 = 1;
    }
    return var_s0;  // Undefined return value.
}


void func_8002F734(s32 * arg0) {
    bzero(arg0, 0x24);
    arg0[2] = DungeonData->grid_x;
    arg0[3] = DungeonData->grid_z;
    arg0[4] = DungeonData->cardinal_dir >> 9;
    arg0[5] = func_8004C6F4();
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F7A0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F7D4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F8CC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F8EC);

void func_8002F970(void) {
    if (D_800B6F10 != 0) {
        RemoveObject(DungeonData->origin);
        DungeonData->origin = 0;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F9BC);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002F9DC);

void func_8002FAB0(SVECTOR * sv, GsCOORDINATE2 * coord) {
    MATRIX m;
    SVECTOR r;

    m = D_801112D8;
    m.t[0] = coord->coord.t[0];
    m.t[1] = coord->coord.t[1];
    m.t[2] = coord->coord.t[2];
    r = *sv;
    RotMatrix_gte(&r, &m);
    coord->coord = m;
    coord->flg = 0;
}

//INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_800108FC);

//INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_8001090C);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002FBA8);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002FF40);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8002FFD8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80030130);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003022C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003029C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003033C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003036C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800303C0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80030690);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80030798);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800309A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80030B6C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80030CF4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80030E90);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003102C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800311FC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80031370);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80031548);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800318B8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80031A70);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80031E04);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80031E7C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80031EE0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032280);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800323CC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003246C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800327AC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032874);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800328C8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032A34);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032B24);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032BC4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032C80);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80032D08);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003302C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800330A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80033228);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800332A8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80033338);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003345C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003365C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003386C);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010A60);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010A70);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010A84);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010A94);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010AA4);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", jtbl_80010AB4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800339E0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80033F6C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800340C8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003412C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80034250);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800343A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003440C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800344DC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800347E4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80034AAC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80034BE4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80034DF8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80034EEC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800350AC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80035610);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80035C58);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", jtbl_80010B0C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80035E60);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036130);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036290);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036404);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036574);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800365DC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036680);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036778);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036998);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036CE4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80036F10);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800371EC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037448);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800374B4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037524);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800375A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003761C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003766C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800376DC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037A50);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037B9C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037BE0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037C04);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037CC8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037DA0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037DE8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037E1C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037E2C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80037E38);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038760);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800388B4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038944);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038950);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003896C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038990);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_800389C4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038A08);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038BCC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038DA0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038F00);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038F34);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038F40);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038F64);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80038FA0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80039110);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80039574);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80039620);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003962C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003963C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80039698);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003971C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003981C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80039F9C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A094);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A0A0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A178);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A1A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A228);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A25C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A290);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A2B0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A364);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A3F4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A434);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A468);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A49C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A568);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A5A0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A66C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A6A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A6DC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A7C4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A804);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A844);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A874);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A8B0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A900);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003A9A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003AAFC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003AE00);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003AFB4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003AFE8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B044);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B0F8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B10C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B2D0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B304);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B6DC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003B78C);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010BB4);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010BFC);

// INCLUDE_RODATA("asm/smt1/main/nonmatchings/dungeon", D_80010C10);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003BA3C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003BCA0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C0A8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C0E4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C328);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C368);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C5B0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C810);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003C990);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CA8C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CAC0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CC24);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CD8C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CDC8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CF24);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CF60);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003CFAC);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D084);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D1C8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D36C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D434);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D4F0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D604);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D658);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003D844);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003DB00);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003DC34);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003DC6C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003DE14);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003DEE4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003E05C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003E168);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003E3A0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003E5B4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003EB00);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003EBB0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003ED10);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003EDE0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003EED8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003F000);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003F08C);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003F244);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_8003F27C);
