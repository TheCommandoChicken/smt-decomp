#include "common.h"
#include "dungeon.h"
#include "object.h"
#include "unk6.h"

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80029398);

void func_80029558(struct dungeon_data * arg0) {
    void* var_v0;

    func_8008387C(0x96);
    arg0->view.view = GsIDMATRIX2; /* Maybe */
    if (!(arg0->status & 2)) {
        arg0->view.super = &arg0->coordinates;
    } else {
        arg0->view.super = &arg0->unk90;
    }
    arg0->view.view.t[2] = 0x1F4;
    arg0->view.view.t[1] = 0xF;
    arg0->view.view.t[0] = 0;
    arg0->unk8C = 0;
    arg0->unk8A = 0;
    arg0->unk88 = 0;
    GsSetView2(&arg0->view);
}

void func_8002960C(struct dungeon_data* arg0) {
    GsFOGPARAM sp10;
    s32 var_s1 = 1;
    s16 temp_a0;
    u8 temp_v0_2;
    struct lighting_info* temp_s0;

    temp_s0 = arg0->light_info;
    sp10.dqa = D_8001084C[temp_s0->unk3].unk0;
    sp10.dqb = sqr(D_8001084C[temp_s0->unk3].unk2);
    temp_v0_2 = D_8001084C[temp_s0->unk3].unk4;
    sp10.bfc = temp_v0_2;
    sp10.gfc = temp_v0_2;
    sp10.rfc = temp_v0_2;
    if (func_8002F248() == 0) {
        s32 var_a0 = (arg0->status & 0x40) ? 0xFF : 0;
        func_80037CC8(var_a0, var_a0, var_a0);
    }
    func_8001A778(temp_s0->unkC, temp_s0->unkD, temp_s0->unkE);
    if (temp_s0->unk3 == 0) {
        var_s1 = 0;
    }
    GsSetFogParam(&sp10);
    GsSetLightMode(var_s1);
    temp_a0 = arg0->unk6504;
    GsSetAmbient(temp_a0, temp_a0, temp_a0);
    func_8002E6B4();
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80029744);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002995C);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80029C0C);

void func_80029CCC(struct dungeon_data* arg0) {
    arg0->index = ((arg0->coordinates.coord.t[0] / 1000) + 
        ((arg0->dungeon_width - (arg0->coordinates.coord.t[2] / 1000)) * arg0->dungeon_width));
    func_80029F10(arg0->cardinal_dir >> 10, arg0);
    func_8002D7A0(arg0);
    func_80038F40();
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80029D64);

void func_80029E8C(struct dungeon_data* arg0) {
    arg0->index = ((arg0->coordinates.coord.t[0] / 1000) + 
        ((arg0->dungeon_width - (arg0->coordinates.coord.t[2] / 1000)) * arg0->dungeon_width));
}

void func_80029EE4(s16 arg0) {
    if (arg0 >= 0 && arg0 < 0x271) {
        DungeonData->culling_data[arg0] = 0;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80029F10);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002C618);

u8 func_8002C83C(struct dungeon_data* arg0) {
    s16 var_s0;
    s16 var_s1;
    s16 var_s2;

    func_80029E8C(arg0);
    switch (arg0->cardinal_dir >> 10) {
    case 0:
        var_s2 = 0;
        var_s1 = -1;
        var_s0 = 0xC0;
        break;
    case 1:
        var_s2 = 1;
        var_s1 = 0;
        var_s0 = 0x30;
        break;
    case 2:
        var_s2 = 0;
        var_s1 = 1;
        var_s0 = 0xC;
        break;
    case 3:
        var_s2 = -1;
        var_s1 = 0;
        var_s0 = 3;
        break;
    }
    if ((arg0->layout[(arg0->index) * 2] & var_s0) == var_s0) {
        return arg0->layout[((arg0->index + (var_s1 * 25) + var_s2) * 2) + 1];
    } else return 0;
}


void func_8002C95C(s16 arg0) {
    GsSetAmbient(arg0, arg0, arg0);
}


void func_8002C988(s16 arg0) {
    GsFOGPARAM sp10;
    s8 var_s0 = 1;
    s16 temp_v0;
    s32 temp_lo;
    u8 temp_v0_2;
    struct lighting_info * temp_a2;

    temp_a2 = DungeonData->light_info;
    sp10.dqa = D_8001084C[temp_a2->unk3].unk0;
    temp_v0 = D_8001084C[temp_a2->unk3].unk2;
    temp_lo = temp_v0 * temp_v0;
    sp10.dqb = temp_lo;
    temp_v0_2 = D_8001084C[temp_a2->unk3].unk4;
    sp10.bfc = temp_v0_2;
    sp10.gfc = temp_v0_2;
    sp10.rfc = temp_v0_2;
    if (arg0 == 1) {
        sp10.dqa = -2300;
        sp10.dqb = 0x021E0440;
        sp10.rfc = 0;
        sp10.gfc = 0;
        sp10.bfc = 4;
    }
    if (temp_a2->unk3 == 0) {
        var_s0 = 0;
    }
    GsSetFogParam(&sp10);
    GsSetLightMode(var_s0);
}

u8 func_8002CA84(SVECTOR * arg0, struct dungeon_data* arg1) {
    s16 temp0;
    s16 temp1;

    temp1 = 12 - (arg1->x_translation_offset - arg0->vx);
    temp0 = 12 - (arg1->z_translation_offset - arg0->vz);
    return arg1->layout[(((temp0 * 25) + temp1) * 2) + 1];
}


u8 func_8002CAE4(s16 arg0) {
    return D_800A23AC[arg0];
}


s8 func_8002CB04(s16 arg0, s16 arg1) {
    return (* D_800A23F0[arg0])[arg1];
}

void func_8002CB34(s16 arg0, s16 arg1, s16 arg2, struct dobj2_substruct * arg3, struct unk_data_24* arg4, struct dungeon_data* arg5) {
    VECTOR sp10;
    SVECTOR sp20;
    s16 temp_a0;
    s32 temp_a0_6;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u8 temp_v1_7;

    arg3->obj.coord2 = arg4->obj.coord2;
    arg3->obj.coord2->coord.t[0] = (arg1 * 1000);
    arg3->obj.coord2->coord.t[1] = 0;
    arg3->obj.coord2->coord.t[2] = (arg2 * 1000);
    sp20.vz = 0;
    sp20.vy = 0;
    sp20.vx = 0;
    temp_a0 = arg0 - 1; 
    switch (temp_a0) {
    case 0:
        arg3->obj.coord2->coord.t[2] += 500;
        arg3->obj.coord2->coord.t[1] += (250 - arg5->light_info->unk4);
        //sp20.vy = 0;
        break;
    case 1:
        arg3->obj.coord2->coord.t[0] += 500;
        arg3->obj.coord2->coord.t[1] += (250 - arg5->light_info->unk4);
        sp20.vy = 0x400;
        break;
    case 2:
        arg3->obj.coord2->coord.t[2] -= 500;
        arg3->obj.coord2->coord.t[1] += (250 - arg5->light_info->unk4);
        sp20.vy = 0x800;
        break;
    case 3:
        arg3->obj.coord2->coord.t[0] -= 500;
        arg3->obj.coord2->coord.t[1] += (250 - arg5->light_info->unk4);
        sp20.vy = 0xC00;
        break;
    case 4:
    case 5:
        if (arg0 == 6) {
            arg3->obj.coord2->coord.t[1] += 500;
            arg3->obj.coord2->coord.t[1] += 250;
        } else {
            arg3->obj.coord2->coord.t[1] += 500;
            arg3->obj.coord2->coord.t[1] -= 250;
        }
        if ((arg5->unk4 == 2) && ((arg5->unk5C58 & 0x10) != 0)) {
            temp_v1_7 = D_800A23AC[(u16)arg5->unk5C58 & 0xF];
            if (temp_v1_7 == 0) {
                sp20.vy = 0x800;
                arg3->obj.coord2->coord.t[2] -= 500;
            } else if (temp_v1_7 == 1) {
                sp20.vy = 0xC00;
                arg3->obj.coord2->coord.t[0] -= 500;
            } else if (temp_v1_7 == 2) {
                //sp20.vy = 0;
                arg3->obj.coord2->coord.t[2] += 500;
            } else if (temp_v1_7 == 3) {
                sp20.vy = 0x400;
                arg3->obj.coord2->coord.t[0] += 500;
            }
            if (arg0 == 5) {
                arg3->obj.coord2->coord.t[1] -= 62;
            }
        } else {
            arg3->obj.coord2->coord.t[2] += 500;
        }
        break;
    }
    func_8002FAB0(&sp20, arg4);
    arg3->unk10 = (arg0 - 1);
    sp10.vx = 0x2800;
    sp10.vy = arg5->light_info->unk6 + 0x2800;
    sp10.vz = 0x2800;
    if (arg0 >= 5 && arg0 <= 6) {
        sp10.vy = 0x5000;
        sp10.vx = arg5->light_info->unk8 + 0x2800;
        sp10.vz = arg5->light_info->unk8 + 0x2800;
    }
    ScaleMatrix(&arg4->m, &sp10);
}


void func_8002CF14(s16 arg0, s16 arg1, s16 arg2, struct dobj2_substruct * arg3, struct unk_data_24* arg4, struct dungeon_data * arg5) {
    VECTOR sp10;
    SVECTOR sp20;
    s16 var_v0;
    void* temp_v0;
    void* temp_v0_2;
    void* temp_v0_3;
    void* temp_v1;

    arg3->obj.coord2 = arg4->obj.coord2;
    arg3->obj.coord2->coord.t[0] = (arg1 * 1000);
    arg3->obj.coord2->coord.t[1] = 0xEE;
    arg3->obj.coord2->coord.t[2] = (arg2 * 1000);
    sp20.vz = 0;
    sp20.vy = 0;
    sp20.vx = 0;
    switch (arg0) {                                 /* irregular */
    case 0:
        arg3->obj.coord2->coord.t[2] += 450;
        break;
    case 1:
        arg3->obj.coord2->coord.t[0] += 450;
        sp20.vy = 0x400;
        break;
    case 2:
        arg3->obj.coord2->coord.t[2] -= 450;
        sp20.vy = 0x800;
        break;
    case 3:
        arg3->obj.coord2->coord.t[0] -= 450;
        sp20.vy = 0xC00;
        break;
    }
    func_8002FAB0(&sp20, &arg4->obj);
    arg3->unk10 = arg0;
    sp10.vx = 0x2418;
    sp10.vy = 0x260C;
    sp10.vz = 0x2800;
    ScaleMatrix(&arg4->m, &sp10);
}


void func_8002D0A4(RECT * arg0, s32 arg1) {
    RECT sp10;
    GsIMAGE sp18;

    GsGetTimInfo(&((u32 *) arg0)[1], &sp18);
    sp10.x = sp18.px + arg1;
    sp10.y = sp18.py;
    sp10.w = sp18.pw;
    sp10.h = sp18.ph;
    LoadImage(&sp10, sp18.pixel);
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002D100);

void func_8002D2F4(struct dungeon_data* arg0) {
    RECT * var_v0;

    if (arg0->buffer == 0) {
        var_v0 = (RECT *)arg0->buffer_0_img;
    } else {
        var_v0 = (RECT *)arg0->buffer_1_img;
    }
    func_8002D0A4(&var_v0[((u32 *)var_v0)[1] / 4], 0);
}


void func_8002D348(s16 arg0, s16 arg1) {
    u8 temp_t0;

    DungeonData->x_offset = 0;
    DungeonData->unk5BB4 |= 1;
    DungeonData->unk5A98[DungeonData->buffer].unk12 = 1;
    DungeonData->unk5A98[DungeonData->buffer].unk14 = arg1;
    func_80029E8C(DungeonData);
    func_8002CF14(arg0, (DungeonData->index % 25), (25 - (DungeonData->index / 25)), &DungeonData->unk5A98[DungeonData->buffer], &DungeonData->unk5AC8[DungeonData->buffer], DungeonData);
    DungeonData->unk_counter = 0;
}


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


s32 func_8002D4EC(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s16 var_v0;

    if (arg0 == arg1) {
        var_v0 = arg3;
    } else if (arg0 == arg2) {
        var_v0 = arg4;
    } else if (arg0 == arg3) {
        var_v0 = arg1;
    } else if (arg0 == (s16) arg4) {
        var_v0 = arg2;
    } else {
        var_v0 = 0x64;
    }
    return var_v0;
}


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


s32 func_8002D5C0(struct dungeon_data* arg0) {
    s16 temp_v1_2;
    s16 var_t0;
    s32 temp_a1;
    SVECTOR * temp_t1;

    temp_t1 = &arg0->grid_x;

    if (arg0->last_y > temp_t1->vz) {
        temp_a1 = 0;
    } else if (arg0->last_x < temp_t1->vx) {
        temp_a1 = 3;
    } else if (arg0->last_y < temp_t1->vz) {
        temp_a1 = 2;
    } else if (arg0->last_x > temp_t1->vx) {
        temp_a1 = 1;
    }
    temp_v1_2 = (temp_t1->pad >> 10) + temp_a1;
    if (temp_v1_2 >= 4) {
        temp_v1_2 -= 4;
    }
    switch (temp_v1_2) {
        case 0:
            var_t0 = 3;
            break;
        case 1:
            var_t0 = 2;
            break;
        case 2:
            var_t0 = 1;
            break;
        case 3:
            var_t0 = 4;
            break;
    }
    return var_t0;
}

s16 func_8002D6C4(s32 arg0, s32 arg1) {
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v1;
    s32 var_a1;
    s16* temp_t1;
    s16 var_t0;

    temp_t1 = &DungeonData->grid_x;
    if (DungeonData->last_y > temp_t1[2]) {
        arg1 = 0;
    } else if (DungeonData->last_x < temp_t1[0]) {
        arg1 = 1;
    } else if (DungeonData->last_y < temp_t1[2]) {
        arg1 = 2;
    } else if (DungeonData->last_x > temp_t1[0]) {
        arg1 = 3;
    }
    temp_v0 = (arg1 - ((temp_t1[3]) >> 0xA)) + 4;
    switch (temp_v0) {
    case 0:
    case 4:
        var_t0 = 1;
        break;
    case 1:
    case 5:
        var_t0 = 2;
        break;
    case 2:
    case 6:
        var_t0 = 3;
        break;
    case 3:
    case 7:
        var_t0 = 4;
        break;
    }
    return var_t0;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002D7A0);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002D82C);

void func_8002D968() {
    s32 sp18[10];

    func_80024484(3);
    func_80025308(1);
    switch (DungeonData->unk4) {
    case 1:
        DungeonData->return_function = &func_80028714;
        ((struct object *)DungeonData->origin)->proc_func = &func_800330A4;
        return;
    case 2:
        func_800225C8(2, 3, 2, 2, 2);
        ((struct object *)DungeonData->origin)->proc_func = &func_80036404;
        return;
    case 3 ... 5:
        ((struct object *)DungeonData->origin)->proc_func = &func_80037A50;
        return;
    case 6:
        func_8003A228(DungeonData->grid_x, DungeonData->grid_y, &sp18);
        DungeonData->return_function = &func_80028714;
        if (sp18[8] != -1) {
            ((struct object *)DungeonData->origin)->proc_func = &func_800330A4;
        } else {
            ((struct object *)DungeonData->origin)->proc_func = &func_8003302C;
        }
        return;
    case 0:
    default:
        func_800225C8(2, 3, 2, 2, 2);
        DungeonData->return_function = &func_80028714;
        ((struct object *)DungeonData->origin)->proc_func = &func_80028714;
        return;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002DADC);

s16 func_8002DB7C(void) {
    return DungeonData->current_tile_contents;
}

s16 func_8002DB94(void) {
    return DungeonData->unk4;
}

s32 func_8002DBAC(void) {
    return DungeonData->unk6518 == 0;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002DBC4);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002DF90);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002E120);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002E178);

s16 func_8002E484(s16 arg0) {
    s16 var_a1;

    for (var_a1 = 0; D_800A244C[var_a1] != 0xFF; var_a1++) {
        if (D_800A244C[var_a1] == arg0) {
            return var_a1;
        }
    }
    return var_a1;
}

void func_8002E4F4(s32 arg0) {
    u8 var_a0;
    u8 var_a1;
    u8 var_a2;
    void* temp_v0;

    if ((arg0 & 0x80) > 0) {
        DungeonData->status |= 4;
        if (DungeonData->dark != 1) {
            DungeonData->dark = 1;
            func_8002C95C(0x800);
            func_8002C988(DungeonData->dark);
            func_8001A778(0, 0, 0);
        }
    } else {
        DungeonData->status &= ~4;
        if (DungeonData->dark != 0) {
            DungeonData->dark = 0;
            func_8002C95C(DungeonData->light_info->unkA);
            func_8002C988(DungeonData->dark);
            func_8001A778(DungeonData->light_info->unkC, DungeonData->light_info->unkD, DungeonData->light_info->unkE);
        }
    }
}

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


//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002E6B4);

void func_8002E7B4(void) {
}

s32 func_8002E7BC(void) {
    s32 var_a0 = 0;
    if (DungeonData->status & 0x100) {
        var_a0 = 1;
        DungeonData->status &= ~0x100;
    }
    return var_a0;
}

void func_8002E7F4(void) {
    D_800FA148.unk0 = 0;
    func_80019478(D_800FA148.unk8);
    D_800FA148.unk8 = 0;
    func_80019478(D_800FA148.unkC);
    D_800FA148.unkC = 0;
    func_80019478(D_800FA148.unk10);
    D_800FA148.unk10 = 0;
    func_80019478(D_800FA148.unk4);
    D_800FA148.unk4 = 0;
}

void func_8002E84C(s16 arg0, s16 arg1) {
    s16 temp_v0_2;

    func_8002E7F4();
    D_800FA148.unk1 = func_8002DADC(func_800149F0(1), arg0, arg1);
    D_800FA148.unk2 = func_8002E178(arg0, arg1, D_800FA148.unk1);
    D_800FA148.unk14 = func_80019C58(0, 0, (D_800FA148.unk2 * 2) + 0xF7, &D_800FA148.unk4, 0, 3);
    D_800FA148.unk14 |= func_80019C58(0, 0, (D_800FA148.unk2 * 2) + 0xF6, &D_800FA148.unk8, 0, 3);
    D_800FA148.unk14 |= func_80019C58(0, 0, D_800FA148.unk1 + 0x167, &D_800FA148.unk10, 0, 3);
    temp_v0_2 = func_8002E484(D_800FA148.unk2);
    if (temp_v0_2 < 0x13) {
        D_800FA148.unk14 |= func_80019C58(0, 0, temp_v0_2 + 0x14E, &D_800FA148.unkC, 0, 3);
    }
    D_800FA148.unk0 |= 1;
}

s16 func_8002E9A4(void) {
    return func_8003A7C4(DungeonData->grid_x, DungeonData->grid_y);
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002E9D8);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002EB80);

s32 func_8002ED70(void) {
    return DungeonData->rotation.vy & 0xFFF;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002ED88);

void func_8002F044(void) {
    DungeonData->unk90 = DungeonData->coordinates;
    DungeonData->view.super = &DungeonData->unk90;
    DungeonData->status |= 2;
}

void func_8002F0AC(void) {
    struct unk_data_29 sp10;

    if (!func_8004C06C(FLAG_APOCALYPSE)) {
        DungeonData->coordinates = DungeonData->unk90;
    } else {
        sp10.unk8 = DungeonData->grid_x;
        sp10.unkC = DungeonData->grid_y;
        sp10.unk10 = DungeonData->cardinal_dir >> 0xA;
        func_8002FF40(&sp10);
    }
    DungeonData->view.super = &DungeonData->coordinates;
    DungeonData->status &= ~2;
}


s16 func_8002F180(void) {
    return DungeonData->map_id;
}

s32 func_8002F198(void) {
    s32 var_s0 = 0;

    if ((D_800B6F10 == 0) || 
        (func_8001F920() != 2) || 
        (((struct object *)DungeonData->origin)->proc_func != &func_80028714) ||
        (DungeonData->unk6518 != 0)) {
        var_s0 = 0;
    } else if (func_80038950(DungeonData) != 1) {
        var_s0 = 1;
    }
    return var_s0;
}

s32 func_8002F228(void) {
    return DungeonData->cardinal_dir >> 0xA;
}

s32 func_8002F248(void) {
    s32 var_v1 = D_800B6F10;

    if (DungeonData->unk4 < 3 || DungeonData->unk4 > 5) {
        var_v1 = 0;
    }
    return var_v1;
}

void func_8002F27C(s16 arg0) {
    struct dungeon_init_data sp10;

    sp10.unk0.x = D_800A2460[arg0 - 1].x;
    sp10.unk0.y = D_800A2460[arg0 - 1].y;
    sp10.initial_dir = D_800A2460[arg0 - 1].dir;
    sp10.door_text_id = D_800A2460[arg0 - 1].unk3;
    sp10.appearance = D_800A2460[arg0 - 1].unk4;
    func_800292AC(0, &sp10);
}

s32 func_8002F2F4(void) {
    return DungeonData->control_locked == 0;
}

void func_8002F30C(s16 arg0) {
    s32 var_a0;

    DungeonData->control_locked = 1;
    DungeonData->unk5BA6 = 0;
    switch (arg0) {
    case 0:
        var_a0 = 1;
        func_80031548(var_a0);
        DungeonData->last_x = DungeonData->grid_x;
        DungeonData->last_y = DungeonData->grid_y;
        DungeonData->last_z = DungeonData->grid_z;
        break;
    case 1:
        var_a0 = 2;
        func_80031370(var_a0);
        DungeonData->last_dir = DungeonData->cardinal_dir;
        break;
    case 2:
        var_a0 = 4;
        func_80031370(var_a0);
        DungeonData->last_dir = DungeonData->cardinal_dir;
        break;
    case 3:
        var_a0 = 3;
        func_80031370(var_a0);
        DungeonData->last_dir = DungeonData->cardinal_dir;
        break;
    case 4:
        var_a0 = 3;
        func_80031548(var_a0);
        DungeonData->last_x = DungeonData->grid_x;
        DungeonData->last_y = DungeonData->grid_y;
        DungeonData->last_z = DungeonData->grid_z;
        break;
    case 5:
        DungeonData->unk5BA6 = 6;
        break;
    }
    if (func_8002F248() != 1) {
        ((struct object*)DungeonData->origin)->proc_func = &func_8003302C;
    }
    DungeonData->last_grid_x = DungeonData->grid_x;
    DungeonData->last_grid_y = DungeonData->grid_y;
    DungeonData->last_grid_z = DungeonData->grid_z;
    DungeonData->last_card_dir = DungeonData->cardinal_dir;
}

void func_8002F440(s32 arg0, s32 arg1) {
    func_8003A6DC(DungeonData->grid_x, DungeonData->grid_z, arg0, arg1);
}

void func_8002F478(void) {
    func_80040204(func_8003AFB4());
}

u16 func_8002F4A0(void) {
    u16 temp = func_80029D64(func_8002D4EC(DungeonData->cardinal_dir >> 0xA, 0, 1, 2, 3));
    return temp >= 2 && temp < 4;
}

void func_8002F4F8(struct unk_data_29* arg0) {
    arg0->unk8 = DungeonData->grid_x;
    arg0->unkC = DungeonData->grid_y;
    arg0->unk10 = func_8002D474(DungeonData->cardinal_dir);
    switch (DungeonData->cardinal_dir) {
    case 0x0:
        arg0->unkC += 1;
        return;
    case 0x400:
        arg0->unk8 -= 1;
        return;
    case 0x800:
        arg0->unkC -= 1;
        return;
    case 0xC00:
        arg0->unk8 += 1;
    }
}

s32 func_8002F5E0(void) {
    s16 temp_v0;
    s32 var_v0_2;
    s32 var_s0;
    s32 var_v0;

    var_v0_2 = func_8002D4EC(DungeonData->cardinal_dir, 0, 0x400, 0x800, 0xC00);
    if (var_v0_2 < 0) {
        var_v0_2 += 0x3FF;
    }
    temp_v0 = func_80029D64(var_v0_2 >> 0xA);
    if (temp_v0 == 1) {
        var_v0 = 1;
    } else if (temp_v0 == 0 || temp_v0 == 2 || temp_v0 == 3) {
        var_v0 = 0;
    }
    return var_v0;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002F678);

void func_8002F734(s32* arg0) {
    bzero(arg0, 0x24);
    arg0[2] = DungeonData->grid_x;
    arg0[3] = DungeonData->grid_z;
    arg0[4] = DungeonData->cardinal_dir >> 9;
    arg0[5] = func_8004C6F4();
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002F7A0);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002F7D4);

void func_8002F8CC(void) {
    func_80028774();
}

void func_8002F8EC(s16 arg0) {
    void (* temp_a1);
    struct object* temp_v0;

    if (arg0 == 1) {
        DungeonData->status |= 0x80;
    } else {
        DungeonData->status &= ~0x80;
    }
    temp_a1 = ((struct object*)DungeonData->origin)->proc_func;
    if (temp_a1 != func_80028904) {
        DungeonData->return_function = temp_a1;
        ((struct object*)DungeonData->origin)->proc_func = func_80028904;
    }
}

void func_8002F970(void) {
    if (D_800B6F10 != 0) {
        func_8001830C(DungeonData->origin);
        DungeonData->origin = 0;
    }
}

s32 func_8002F9BC(void) {
    return (DungeonData->status >> 3) & 1;
}

void func_8002F9DC(struct dungeon_init_data* arg0) {
    DungeonData->dungeon_width = 25;
    DungeonData->status &= ~8;
    DungeonData->status &= ~0x100;
    func_80029210(DungeonData);
    func_8002925C(arg0);
    DungeonData->unk4 = arg0->door_text_id; // Definitely not what this is.
    if (DungeonData->status & 0x10) {
        func_8004ECCC(0);
        func_8002DF90();
        DungeonData->map_id = 0xFF;
        DungeonData->unk650C = 0xFF;
    }
    if (func_8002F248() == 1) {
        func_80023F28(5);
        func_80023F58(1);
    }
    ((struct object*)DungeonData->origin)->proc_func = &func_80028DA0;
}

void func_8002FAB0(SVECTOR* arg0, GsCOORDINATE2* arg1) {
    MATRIX sp10;
    SVECTOR sp30;

    sp10 = D_801112D8;
    sp10.t[0] = arg1->coord.t[0];
    sp10.t[1] = arg1->coord.t[1];
    sp10.t[2] = arg1->coord.t[2];
    sp30 = *arg0;
    RotMatrix_gte(&sp30, &sp10);
    arg1->coord = sp10;
    arg1->flg = 0;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002FBA8);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002FF40);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8002FFD8);

void func_80030130(struct dungeon_data * arg0) {
    u16 temp_v0;

    temp_v0 = arg0->unk5BC2;
    arg0->unk5BAE += 1;
    if ((func_800318B8(temp_v0, arg0) << 0x10) != 0) {
        arg0->running = 0;
    }
    if (func_8002FFD8(temp_v0) == 1) {
        arg0->running = 0;
    }
    if (arg0->running == 1) {
        func_80038F40();
        func_80031548(temp_v0);
        func_800328C8();
        arg0->last_x = arg0->grid_x;
        arg0->last_y = arg0->grid_y;
        arg0->last_z = arg0->grid_z;
        arg0->last_grid_x = arg0->grid_x;
        arg0->last_grid_y = arg0->grid_y;
        arg0->last_grid_z = arg0->grid_z;
        arg0->last_card_dir = arg0->cardinal_dir;
        return;
    }
    if (arg0->unk5BAE >= 3) {
        func_800311FC(temp_v0);
    }
}

void func_8003022C(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->control_locked == 0) {
        DungeonData->status |= 0x20;
    }
    FntPrint("\n\nBattle_Start");
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003029C);

void func_8003033C(void) {
    func_8002D7A0(DungeonData);
    func_800505D0();
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003036C);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800303C0);

void func_80030690(struct dungeon_data * arg0, s32 arg2) {
    s16 temp_v1;
    s16 temp_v0;
    struct lighting_info * temp_v0_2;

    temp_v1 = arg0->unk5BA6;
    if (temp_v1 == 6) {
        temp_v0 = arg0->unk5BA2 + 2;
        arg0->unk5BA2 = temp_v0;
        if (temp_v0 >= 0xAA) {
            arg0->unk5BA2 = (arg0->light_info->unkA / 24);
            arg0->unk5BA6 = 0;
        }
        func_8002C95C((arg0->unk5BA2 * 24));
        if (arg0->unk5BA6 != 0) {
            return;
        }
        func_800303C0(arg0);
        return;
    } else if (temp_v1 == 3) {
        arg0->unk5BA6 = 4;
        func_8001F7A0(1, 0xC);
        return;
    } else if (temp_v1 == 4) {
        if (func_8001F920() == 2) {
            arg0->unk5BA6 = 0;
            func_800303C0(arg0);
        }
        return;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80030798);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800309A4);

void func_80030B6C(void) {
    s16 temp_v1;
    s16 temp_s0;

    temp_s0 = DungeonData->unk64FE;
    DungeonData->unk5A98[DungeonData->buffer].unk12 = 0;
    func_8002D2F4(DungeonData);
    DungeonData->unk5BA2 = 0;
    func_8002E4F4(DungeonData->unk64FE);
    if ((DungeonData->unk5BB8 == 1) || (temp_s0 == 0xE) || (temp_s0 == 0xD) || ((temp_s0 == 6) && (func_8002F248() == 1))) {
        func_800303C0(DungeonData);
        return;
    } else {
        temp_v1 = DungeonData->unk5BA6;
        if (temp_v1 == 2) {
            DungeonData->unk5BA6 = 3;
            SetSpadStack(0x1F8003FC);
            func_80029F10(DungeonData->cardinal_dir >> 10, DungeonData);
            ResetSpadStack();
            return;
        }
        if (temp_v1 == 5) {
            DungeonData->unk5BA6 = 6;
            SetSpadStack(0x1F8003FC);
            func_80029F10(DungeonData->cardinal_dir >> 10, DungeonData);
            ResetSpadStack();
            return;
        }
    }
    func_800303C0(DungeonData);
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80030CF4);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80030E90);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003102C);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800311FC);

void func_80031370(u16 arg0, s16 arg1, s16 arg2) {
    s16 temp_a0;
    s16 temp_s0;
    s16 var_a2;
    s16 temp_a1;

    var_a2 = arg2;
    temp_a0 = arg0 - 2;
    temp_a1 = DungeonData->cardinal_dir >> 10;
    switch (temp_a0) {
    case 0:
    case 4:
        var_a2 = temp_a1 + 4;
        DungeonData->unk5BA2 = 0x400;
        DungeonData->dir = (DungeonData->cardinal_dir + 0x400);
    default:
        break;
    case 1:
    case 5:
        var_a2 = temp_a1 + 4;
        DungeonData->unk5BA2 = 0x800;
        DungeonData->dir = (DungeonData->cardinal_dir + 0x800);
        break;
    case 2:
    case 6:
        DungeonData->unk5BA2 = 0x400;
        DungeonData->dir = (DungeonData->cardinal_dir - 0x400);
        if (temp_a1 == 0) var_a2 = 7;
        else if (temp_a1 == 1) var_a2 = 4;
        else if (temp_a1 == 2) var_a2 = 5;
        else if (temp_a1 == 3) var_a2 = 6;
        break;
    }
    SetSpadStack(0x1F8003FC);
    func_80029F10(var_a2, DungeonData);
    ResetSpadStack();
    DungeonData->unk5BA4 = 0;
    DungeonData->last_action = 0x80;
    if (arg0 >= 6 && arg0 <= 8) {
        DungeonData->last_action = 0x100;
    }
    temp_s0 = DungeonData->control_locked;
    if ((temp_s0 == 1) && (DungeonData->unk4 != 2)) {
        DungeonData->last_action = 0x100;
        if (func_8002F248() == temp_s0) {
            DungeonData->last_action = 0x80;
        }
    }
    DungeonData->unk5BC0 = 0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80031548);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800318B8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80031A70);

s32 func_80031E04(void) {
    s32 var_v1 = 0;

    switch (DungeonData->unk64FE & 0x7F) {
        case 7:
            DungeonData->status |= 0x100;
            var_v1 = 1;
            break;
        case 8 ... 9:
        case 12:
        case 0x40:
            var_v1 = 1;
            break;
        default:
            var_v1 = 0;
    }
    return var_v1;
}

void func_80031E7C(s16* arg0) {
    if ((func_8004ED78()) && 
        ((arg0[0] == 0x3F) || (arg0[0] == 0x30)) && 
        (arg0[1] == 7)) {
        arg0[0] |= 0x80;
        arg0[1] |= 0x80;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80031EE0);

void func_80032280(s16 arg0) {
    s32 temp_s1;

    temp_s1 = func_8004ED78();
    switch (arg0) {
    case 0:
        func_8004C08C(FLAG_HALLWAY);
        func_8004C0B4(FLAG_SLEEP);
    default:
        return;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        switch (temp_s1) {
        case 1:
            if (!func_8004C06C(FLAG_TAKEMINEKATA)) {
                if ((arg0 != 1) && (arg0 != 3) && (arg0 != 5)) {
                    if (arg0 == 8) {
                        func_8004C08C(FLAG_NO_ENCOUNTERS);
                    } else {
                        func_8004C0B4(FLAG_NO_ENCOUNTERS);
                    }
                } else {
                    func_8004C08C(FLAG_NO_ENCOUNTERS);
                }
            }
        case 0:
            return;
        }
        break;
    case 9:
    case 13:
        if (!func_8004C06C(FLAG_BELIAL)) {
            func_8004C08C(FLAG_NO_ENCOUNTERS);
        }
        return;
    case 10:
    case 14:
        if (!func_8004C06C(FLAG_BELIAL)) {
            func_8004C0B4(FLAG_NO_ENCOUNTERS);
            return;
        }
        return;
    case 15:
        func_8004C0B4(FLAG_VAJRADHATU);
        return;
    case 16:
        func_8004C08C(FLAG_VAJRADHATU);
        return;
    case 17:
        func_8004C0B4(0x9C);
        return;
    case 18:
        func_8004C08C(0x9C);
        return;
    case 19:
        func_8004C08C(0x9B);
        return;
    case 20:
        func_8004C0B4(0x9B);
        return;
    }
}

void func_800323CC(s16 arg0, s16 arg1) {
    s16 var_a2;
    u8* temp_v1;

    for (var_a2 = 0; EventFlagPositionTriggers[var_a2][0] != 0xFF; var_a2++) {
        temp_v1 = &EventFlagPositionTriggers[var_a2];
        if (temp_v1[0] == arg0) {
            if (temp_v1[1] == arg1) {
                func_80032280(var_a2);
                return;
            }
        }
    }
}

s32 func_8003246C(void) {
    struct dungeon_init_data sp10;
    void** temp_a0;
    void** temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;

    temp_v0 = DungeonData->current_tile_contents & 0x7F;
    switch (temp_v0) {
    case 11:
        sp10.unk20 = 0;
        if (DungeonData->status & 0x200) {
            DungeonData->status &= ~0x200;
            func_80032874(&DungeonData->tile_data);
        } else {
            func_80032A34(DungeonData);
        }
        if (DungeonData->status & 1) {
            DungeonData->status &= ~1;
            func_8003FFE4(7);
        }
        break;
    case 13:
    case 14:
        func_8003A228(DungeonData->grid_x, DungeonData->grid_z, &sp10);
        if (sp10.unk20 != -1) {
            DungeonData->tile_data.appearance = sp10.appearance;
            DungeonData->tile_data.unk1C = sp10.unk1C;
            DungeonData->return_function = ((struct object *)DungeonData->origin)->proc_func;
            ((struct object *)DungeonData->origin)->proc_func = &func_800332A8;
        }
        break;
    case 1:
        if (DungeonData->control_locked != 1) {
            DungeonData->return_function = ((struct object *)DungeonData->origin)->proc_func;
            ((struct object *)DungeonData->origin)->proc_func = &func_800365DC;
        } else {
            return -1;
        }
        break;
    case 5:
        if (DungeonData->control_locked != 1) {
            DungeonData->unk_counter = 0;
            DungeonData->falling_counter = 0;
            DungeonData->falling_status = 0;
            DungeonData->brightness = DungeonData->light_info->unkA;
            DungeonData->return_function = ((struct object *)DungeonData->origin)->proc_func;
            ((struct object *)DungeonData->origin)->proc_func = &func_80036778;
        } else {
            return -1;
        }
        break;
    case 2:
    case 3:
    case 4:
        var_v0 = -1;
        if (DungeonData->control_locked != 1) {
            DungeonData->unk5BF4 = 0;
            DungeonData->unk5BF8 = 0;
            DungeonData->return_function = ((struct object *)DungeonData->origin)->proc_func;
            ((struct object *)DungeonData->origin)->proc_func = &func_80036CE4;
        } else {
            return -1;
        }
        break;
    case 6:
        if (func_8002F248() || DungeonData->control_locked != 1) {
            func_8003A3F4(DungeonData->grid_x, DungeonData->grid_z, &sp10);
            if (sp10.unk20 != -1) {
                if (func_8002F248() == 1) {
                    sp10.initial_dir = func_8002D474(DungeonData->cardinal_dir);
                    sp10.unk18 = DungeonData->unk4;
                    func_800292AC(0, &sp10);
                } else {
                    DungeonData->falling_counter = 0;
                    DungeonData->brightness = 0;
                    DungeonData->unk_counter = 0;
                    DungeonData->return_function = ((struct object *)DungeonData->origin)->proc_func;
                    ((struct object *)DungeonData->origin)->proc_func = &func_800371EC;
                }
            }
        } else {
            return -1;
        }
        break;
    case 15:
        func_800323CC(DungeonData->grid_x, DungeonData->grid_z);
    default:
        sp10.unk20 = -1;
    }
    return sp10.unk20;
}

s32 func_800327AC(s16 arg0, s16 arg1) {
    s16 var_a0;
    s32 var_s0 = 0;

    if (func_8002F248() == 1) {
        return 1;
    }
    for (var_a0 = 0; D_800A249C[var_a0][0] != 0xFF; var_a0++) {
        if (arg0 == D_800A249C[var_a0][0]) {
            if (arg1 == D_800A249C[var_a0][1]) {
                var_s0 = 1;
            }
        }
    }
    return var_s0;
}

void func_80032874(struct dungeon_init_data* arg0) {
    DungeonData->return_function = ((struct object *)DungeonData->origin)->proc_func;
    ((struct object *)DungeonData->origin)->proc_func = &func_8003302C;
    func_8001489C(arg0->unk18, arg0->unk1C, 0);
}


void func_800328C8(void) {
    struct dungeon_init_data sp10;
    SVECTOR sp38;
    SVECTOR sp40;
    s16 temp_v0;

    if (DungeonData->unk64FE == 0xB) {
        sp38.vx = DungeonData->grid_x;
        sp38.vy = DungeonData->grid_z;
        sp40.vx = DungeonData->x;
        sp40.vy = DungeonData->z;
        temp_v0 = func_8002D550(&sp38, &sp40);
        func_8003A66C(DungeonData->x, DungeonData->z, temp_v0, &sp10);
        if (sp10.unk20 != -1) {
            DungeonData->tile_data = sp10;
        } else {
            return;
        }
        if (func_8004C290(sp10.unk20) == 1) {
            DungeonData->status |= 1;
            func_8003896C(&sp10);
            return;
        }
        if (func_800327AC(DungeonData->x, DungeonData->z, temp_v0) == 0) {
            func_8004C2B0(sp10.unk20);
        }
        DungeonData->status |= 0x200;
    }
}

s32 func_80032A34(void) {
    struct dungeon_init_data sp10;
    s16 temp_s1;

    temp_s1 = DungeonData->cardinal_dir >> 4;
    if ((func_8002CA84(&DungeonData->grid_x, DungeonData) & 0x7F) == 0xB) {
        func_8003A66C(DungeonData->grid_x, DungeonData->grid_z, temp_s1, &sp10);
        if (sp10.unk20 != -1) {
            if (func_8004C290(sp10.unk20)) {
                func_8003FFE4(7);
                func_8003896C(&sp10);
            } else {
                if (func_800327AC(DungeonData->grid_x, DungeonData->grid_z, temp_s1) == 0) {
                    func_8004C2B0(sp10.unk20);
                }
                func_80032874(&sp10);
            }
        }
    } else {
        sp10.unk20 = -1;
    }
    return sp10.unk20;
}


void func_80032B24(void) {
    GsSPRITE sp10;

    sp10.attribute = 0x01000000;
    sp10.x = -0x90;
    sp10.y = -0x14;
    sp10.w = 0x120;
    sp10.h = 0x32;
    sp10.tpage = 0x85;
    sp10.u = 0;
    sp10.v = 0x96;
    sp10.cx = 0;
    sp10.cy = 0x1F4;
    sp10.b = 0xFF;
    sp10.g = 0xFF;
    sp10.r = 0xFF;
    sp10.my = 0;
    sp10.mx = 0;
    sp10.scalex = 0x3000;
    sp10.scaley = 0x1000;
    sp10.rotate = 0;
    GsSortSprite(&sp10, GsOTPtr, 0x348);
}

void func_80032BC4(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->control_locked == 0) {
        DungeonData->unk5C10 = 0;
        DungeonData->brightness = 0;
        DungeonData->unk_counter = 0;
        DungeonData->falling_counter = 0;
        DungeonData->unk5BF4 = 0;
        DungeonData->unk5BF8 = 0;
        if (func_800148D4() != 0) {
            DungeonData->return_function = &func_80028714;
            ((struct object *)DungeonData->origin)->proc_func = &func_8003302C;
        } else {
            func_80028774();
        }
    }
    FntPrint("\n\nGot_Hand_Last");
}

void func_80032C80(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->control_locked == 0) {
        DungeonData->control_locked = 1;
        func_80031548(1);
        ((struct object *)DungeonData->origin)->proc_func = &func_80032BC4;
    }
    FntPrint("\n\nGot_Hand_Rot");
}

void func_80032D08(void) {
    u32 temp_s1;

    temp_s1 = DungeonData->buffer_0_img[1] >> 2;
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->falling_counter == 1) {
        switch (DungeonData->falling_status) {
        case 0:
            func_80038F40();
            func_8001F860(1, 4);
            DungeonData->control_locked = 1;
            func_80031548(3);
            func_8001A778(0, 0, 0);
            DungeonData->falling_status += 1;
            break;
        case 1:
            if (func_8001F920() != 2) {
                return;
            }
            DungeonData->falling_status += 1;
            break;
        case 2:
            if (DungeonData->control_locked == 0) {
                DungeonData->control_locked = 1;
                DungeonData->unk5BA6 = 3;
                if ((DungeonData->unk650C == 0) || 
                    (DungeonData->unk650C == 0x25) || 
                    (DungeonData->unk650C == 0x26)) {
                    DungeonData->x_offset = 0;
                    DungeonData->falling_status += 2;
                } else {
                    DungeonData->buffer = 0;
                    DungeonData->x_offset = -0x10;
                    func_8002D0A4(&DungeonData->buffer_0_img[temp_s1], DungeonData->x_offset);
                    func_8002D348(DungeonData->cardinal_dir >> 10, 1);
                    DungeonData->x_offset = -0x10;
                    DungeonData->falling_status += 1;
                    break;
                }
            }
            return;
        case 3:
            if (DungeonData->control_locked == 0) {
                func_8003FFE4(8);
                DungeonData->falling_status += 1;
                break;
            }
            return;
        case 4:
            DungeonData->x_offset += 2;
            if (DungeonData->x_offset >= 0) { // ?
                DungeonData->x_offset = 0;
            }
            func_8002D0A4(&DungeonData->buffer_0_img[temp_s1], DungeonData->x_offset);
            if (DungeonData->x_offset == 0) {
                DungeonData->unk5A98[DungeonData->buffer].unk12 = 0;
                if ((DungeonData->unk64FE & 0x80) > 0) {
                    func_8001A778(0, 0, 0);
                } else {
                    struct lighting_info * temp_v0_2 = DungeonData->light_info;
                    func_8001A778(temp_v0_2->unkC, temp_v0_2->unkD, temp_v0_2->unkE);
                }
                setObjSubRout(DungeonData, func_80028714, func_80032BC4);
            }
            break;
        }
    } else {
        func_80038F40();
        DungeonData->control_locked = 1;
        func_80031548(3);
        setObjSubRout(DungeonData, func_80028714, func_80032BC4);
    }
    FntPrint("\n\nEscape_From_Battle");
}

void func_8003302C(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (func_8002F248() == 1) {
        func_80032B24();
    }
    if (func_800148D4() == 0) {
        func_80028774();
    }
    FntPrint("\n\nSleep_Messenger");
}

void func_800330A4(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (func_800148D4() == 0) {
        if (func_8002CA84(&DungeonData->grid_x, DungeonData) == 0xE) {
            struct dungeon_init_data sp18;

            sp18.unk0.x = DungeonData->grid_x;
            sp18.unk0.y = DungeonData->grid_z;
            func_8002F4F8(&sp18);
            sp18.initial_dir = func_8002D4EC(DungeonData->cardinal_dir, 0, 0x400, 0x800, 0xC00) / 1024;
            func_8002FF40(&sp18);
            if (func_8002F248() == 0) {
                DungeonData->unk5BA6 = 3;
                DungeonData->control_locked = 1;
            } else {
                DungeonData->control_locked = 0;
            }
            func_80029F10(sp18.initial_dir, DungeonData);
            DungeonData->unk5BCC = 1;
            setObjSubRoutNoRet(DungeonData, func_80032BC4);
        } else {
            DungeonData->control_locked = 1;
            func_80031370(3);
            setObjSubRoutNoRet(DungeonData, func_80032C80)
        }
    }
    FntPrint("\n\nSleep_Event");
}

void func_80033228(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->control_locked == 0) {
        DungeonData->control_locked = 1;
        func_8001489C(DungeonData->tile_data.appearance, DungeonData->tile_data.unk1C, 0);
        setObjSubRoutNoRet(DungeonData, func_800330A4);
    }
}

void func_800332A8(void) {
    s16 temp_v0;

    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    DungeonData->control_locked = 1;
    temp_v0 = func_8002D6C4();
    if (temp_v0 == 1) {
        DungeonData->control_locked = 0;
    } else {
        func_80031370(temp_v0);
    }
    setObjSubRoutNoRet(DungeonData, func_80033228);
}


void func_80033338(void) {
    s16 temp_v0;

    func_80029398(DungeonData);
    DungeonData->control_locked = 1;
    temp_v0 = func_8002D5C0(DungeonData);
    if (temp_v0 == 1) {
        DungeonData->control_locked = 0;
    } else {
        func_80031370(temp_v0);
    }
    RemoveObject(DungeonData->unk5C00);
    DungeonData->unk5C00 = 0;
    RemoveObject(DungeonData->unk5BF8);
    DungeonData->unk5BF8 = 0;
    RemoveObject(DungeonData->unk5BF4);
    DungeonData->unk5BF4 = 0;
    func_80055E4C(DungeonData->unk5C08);
    func_80055E4C(DungeonData->unk5C0C);
    DungeonData->unk5C08 = 0;
    DungeonData->unk5C0C = 0;
    func_800225C8(0, 3, 0, 0, 2);
    setObjSubRoutNoRet(DungeonData, func_80032C80);
}

void func_8003345C(void) {
    void* sp10[2];
    s32 var_a0;
    struct unk_dungeon_data_substruct * temp_s1;
    s32 temp_a0;
    s32 temp_s0;

    temp_s1 = &DungeonData->unk5BC8;
    sp10[0] = temp_s1->unk40->data;
    sp10[1] = temp_s1->unk44->data;
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    temp_s0 = temp_s1->falling_status;
    switch (temp_s1->falling_status) {                              /* irregular */
    case 0:
        func_8006A504();
        temp_s1->falling_status = 1;
        return;
    case 1:
        if (temp_s1->unk_counter == 0) {
            func_8006966C(0x89, D_800B7410);
            func_8006A54C(D_800B7410, 0);
            temp_s1->unk_counter = 1;
        } else if (temp_s1->unk_counter == 2) {
            temp_s1->unk_counter = 1;
            func_8006A584(D_800B7414, 0);
        }
        func_8006A368();
        if (((func_80069F3C()) != 0) && ((func_80018F14(0, 0xD) != 0) || (func_80018EE8(0, 0xE) != 0))) {
            temp_a0 = temp_s1->unk5D76 - 1;
            if (temp_s1->unk56[temp_a0] == -1) {
                func_8003FFE4((func_8004C638(temp_a0) < 4) ? 0x51 : 0x52);
            }
            temp_s1->falling_status = 2;
            return;
        }
        return;
    case 2:
        if (func_8004F628() == 0) {
            func_800147CC();
        }
        ((u8*)sp10[1])[0xA0] |= 2;
        func_8006A5BC();
        temp_s1->falling_status = 3;
        return;
    case 3:
        if ((func_8006A5E8() << 0x10) != 0) {
            DungeonData->origin->proc_func = &func_80033338;
        }
        break;
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003365C);

void func_8003386C(void) {
    void* sp1C[2];
    struct dungeon_data* temp_s0;
    struct unk_dungeon_data_substruct* temp_s1;
    s32 temp_v0;
    s16 temp_v1;

    temp_s0 = DungeonData;
    temp_s1 = &DungeonData->unk5BC8;
    sp1C[0] = temp_s1->unk40->data;
    sp1C[1] = temp_s1->unk44->data;
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (temp_s1->falling_counter == 0)  {
        temp_s1->unk6C = func_8004B888(0x86);
        temp_v0 = func_80056480(&temp_s0->unk5BC8.unk2C, &temp_s0->unk5BC8.unk30, temp_s1->unk6C, 0x1C, 0x8C, 0);
        if (temp_v0 == 1) {
            temp_s1->falling_counter = temp_v0;
            return;
        }
        return;
    } else if (temp_s1->falling_counter == 1) {
        if (func_8005667C(&temp_s0->unk5BC8.unk2C) == 1) {
            temp_s1->falling_counter = 2;
            return;
        }
    } else if (temp_s1->falling_counter == 2) {
        temp_s1->unk6C = func_8004B888(0x79);
        if (func_80056480(&temp_s0->unk5BC8.unk2C, &temp_s0->unk5BC8.unk30, temp_s1->unk6C, 0x1C, 0x8C, 0) == 1) {
            temp_s1->falling_counter = 3;
            return;
        }
    } else if (temp_s1->falling_counter == 3) {
        if (func_8005667C(&temp_s0->unk5BC8.unk2C) == 1) {
            ((u8*)sp1C[1])[0xA0] |= 2;
            DungeonData->origin->proc_func = &func_80033338;
        }
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800339E0);

void func_80033F6C(void) {
    void * sp1C[2];
    struct unk_dungeon_data_substruct* temp_s0;
    struct dungeon_data * temp_s1;
    struct object* temp_v0_2;

    temp_s1 = DungeonData;
    temp_s0 = &temp_s1->unk5BC8;
    sp1C[1] = temp_s0->unk44->data;
    func_8003102C(temp_s1);
    func_80029398(DungeonData);
    if (func_8004C248(temp_s0->tile_data.unk20) == 1) {
        switch (temp_s0->falling_status) {
        case 0:
            temp_s0->unk6C = func_8004B888(0x8A);
            temp_s0->falling_status = 1;
            return;
        case 1:
            if (func_80056480(&temp_s1->unk5BC8.unk2C, &temp_s1->unk5BC8.unk30, temp_s0->unk6C, 0x1C, 0x8C, 0) == 1) {
                temp_s0->unk48 |= 2;
                setObjSubRoutNoRet(DungeonData, func_80033338)
            }
            break;
        }
    } else {
        temp_s0->unk6C = func_8004B888(0x84);
        if (func_80056480(&temp_s1->unk5BC8.unk2C, &temp_s1->unk5BC8.unk30, temp_s0->unk6C, 0x1C, 0x8C, 0) == 1) {
            temp_v0_2 = func_800684E8();
            temp_s0->unk38 = temp_v0_2;
            ((s16*)temp_v0_2->data)[21] = 0;
            temp_s0->falling_status = 0;
            setObjSubRoutNoRet(DungeonData, func_800339E0)
        }
    }
}

void func_800340C8(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (func_8001F920() == 2) {
        setObjSubRoutNoRet(DungeonData, func_80033F6C);
    }
}

void func_8003412C(void) {
    void* sp10[2];
    struct unk_dungeon_data_substruct * temp_s0;
    u8* var_v1;

    temp_s0 = &DungeonData->unk5BC8;
    sp10[0] = temp_s0->unk40->data;
    sp10[1] = temp_s0->unk44->data;
    if (DungeonData->unk5BC8.unk48 == 0) {
        func_8003102C(DungeonData);
        func_80029398(DungeonData);
    }
    if (func_8004C248(temp_s0->tile_data.unk20) != 0) {
        var_v1 = sp10[1];
    } else {
        var_v1 = sp10[0];
    }
    var_v1[0xA0] &= ~2;
    temp_s0->falling_status = 0;
    temp_s0->unk1AE = 0;
    if (DungeonData->unk5BC8.unk48 == 1) {
        func_8001F7A0(1, 0xC);
        DungeonData->unk5BC8.unk48 = 0;
        setObjSubRoutNoRet(DungeonData, func_800340C8);
    } else {
        DungeonData->unk5BC8.unk48 = 0;
        setObjSubRoutNoRet(DungeonData, func_80033F6C);
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80034250);

void func_800343A4(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->control_locked == 0) {
        DungeonData->control_locked = 1;
        setObjSubRoutNoRet(DungeonData, func_80034250);
    }
}

void func_8003440C(void) {
    s16 temp_v0;

    func_800225C8(1, 1, 1, 1, 2);
    if (DungeonData->unk5BC8.unk48 == 0) {
        func_8003102C(DungeonData);
        func_80029398(DungeonData);
        DungeonData->control_locked = 1;
        temp_v0 = func_8002D6C4();
        if (temp_v0 == 1) {
            DungeonData->control_locked = 0;
        } else {
            func_80031370(temp_v0);
        }
        setObjSubRoutNoRet(DungeonData, func_800343A4);
    } else {
        setObjSubRoutNoRet(DungeonData, func_80034250);
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800344DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800347E4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80034AAC);

void func_80034BE4(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->brightness < 10) {
        DungeonData->brightness += 1;
        return;
    }
    if (DungeonData->unk_counter == 0) {
        struct dungeon_init_data sp18;

        DungeonData->grid_x = DungeonData->unk5C60[1];
        DungeonData->grid_z = DungeonData->unk5C60[2];
        DungeonData->cardinal_dir = func_8002D4EC(DungeonData->cardinal_dir, 0, 0x400, 0x800, 0xC00);
        func_8002F4F8(&sp18);
        sp18.initial_dir = func_8002D4EC(sp18.initial_dir, 0, 2, 4, 6);
        sp18.unk18 = 0;
        sp18.appearance = DungeonData->unk5C60[3];
        RemoveObject(DungeonData->unk5BFC);
        DungeonData->unk5BFC = 0;
        func_800441F0(1, &sp18);
    } else if (DungeonData->unk_counter == 1) {
        func_8001F860(1, 0xC);
        DungeonData->unk_counter = DungeonData->light_info->unkA;
    } else {
        DungeonData->unk_counter -= 0x102;
        if (DungeonData->unk_counter <= 0) {
            DungeonData->unk_counter = 0;
        }
        switch (DungeonData->cardinal_dir >> 10) {
        case 0:
            DungeonData->coordinates.coord.t[2] += 0x46;
            break;
        case 1:
            DungeonData->coordinates.coord.t[0] += 0x46;
            break;
        case 2:
            DungeonData->coordinates.coord.t[2] -= 0x46;
            break;
        case 3:
            DungeonData->coordinates.coord.t[0] -= 0x46;
        }
    }
}

void func_80034DF8(void) {
    s32 temp_s0 = DungeonData->buffer_0_img[1] / 4;
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->falling_counter == 0) {
        DungeonData->x_offset -= 2;
        if (DungeonData->x_offset < -15) {
            DungeonData->x_offset = -16;
        }
        func_8002D0A4(&DungeonData->buffer_0_img[temp_s0], DungeonData->x_offset);
        if (DungeonData->x_offset == -16) {
            DungeonData->falling_counter = 1;
            DungeonData->brightness = 0;
            DungeonData->unk_counter = 0;
        }
    } else if (DungeonData->falling_counter == 1) {
        DungeonData->falling_counter = 0;
        DungeonData->brightness = 0;
        DungeonData->unk_counter = 1;
        setObjSubRoutNoRet(DungeonData, func_80034BE4);
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80034EEC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800350AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80035610);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80035C58);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/dgraph", jtbl_80010B0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80035E60);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80036130);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80036290);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80036404);

void func_80036574(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (func_8002F2F4() == 1) {
        DungeonData->origin->proc_func = DungeonData->return_function;
    }
}

void func_800365DC(void) {
    u32 temp_s0;

    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    temp_s0 = func_8004E780() & 3;
    switch (temp_s0) {
    case 0:
        break;
    case 1:
        func_8002F30C(1);
        break;
    case 3:
        func_8002F30C(2);
        break;
    case 2:
        func_8002F30C(3);
        break;
    }
    if (temp_s0 != 0) {
        func_8003FFE4(0xE);
    }
    DungeonData->origin->proc_func = func_80036574;
}

void func_80036680(SVECTOR* arg0, GsCOORDINATE2* arg1) {
    MATRIX sp10;
    SVECTOR sp30;

    sp10 = GsIDMATRIX;
    sp10.t[0] = arg1->coord.t[0];
    sp10.t[1] = arg1->coord.t[1];
    sp10.t[2] = arg1->coord.t[2];
    sp30 = *arg0;
    RotMatrixZYX_gte(&sp30, &sp10);
    arg1->coord = sp10;
    arg1->flg = 0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80036778);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80036998);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80036CE4);

void func_80036F10(void) {
    struct unk_dungeon_data_substruct * temp_s0;
    s16 temp_a0;
    s32 temp_a0_2;
    s32 var_v0;
    u8 temp_v1;

    temp_s0 = &DungeonData->unk5BC8;
    func_80029398(DungeonData);
    func_8003102C(DungeonData);
    temp_v1 = temp_s0->falling_status;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (temp_s0->flags & D_80010A84[temp_s0->unk_counter]) {
            if (temp_s0->unk_counter >= 0 && temp_s0->unk_counter < 6) {
                func_80069B94(func_8006B7D4(func_8004C638(temp_s0->unk_counter)));
                func_8006966C(0x155, D_800B7420);
            } else if (temp_s0->unk_counter == 6) {
                temp_s0->unk5C34 = func_8004B888(0x57);
                func_8006966C(0x57, D_800B7420);
            } else if (temp_s0->unk_counter == 7) {
                temp_s0->unk5C34 = func_8004B888(0x58);
                func_8006966C(0x58, D_800B7420);
            }
            temp_s0->flags &= ~D_80010A84[temp_s0->unk_counter];
            if (temp_s0->unk_counter == 6) {
                D_800B7420[13] = 0;
            }
            func_8006A504();
            func_8006A54C(D_800B7420, 0);
            temp_s0->falling_status = 1;
        }
        temp_s0->unk_counter += 1;
        break;
    case 1:
        func_8006A368();
        if (func_80069F3C() && 
            (func_80018F14(0, 0xD) || 
            func_80018F14(0, 4) || 
            func_80018F14(0, 5) || 
            func_80018F14(0, 7) || 
            func_80018F14(0, 6) || 
            func_80018F14(0, 0xC) || 
            func_80018F14(0, 0xF) || 
            func_80018F14(0, 0xE))) {
            temp_a0_2 = temp_s0->unk_counter - 1;
            if (temp_a0_2 < 6) {
                if (func_8004C638(temp_a0_2) < 4) {
                    func_8003FFE4(0x51);
                } else {
                    func_8003FFE4(0x52);
                }
            }
            func_8006A5BC();
            temp_s0->falling_status = 2;
        }
        break;
    case 2:
        if (func_8006A5E8()) {
            temp_s0->falling_status = 3;
        }
        break;
    case 3:
        if (temp_s0->flags == 0) {
            if (func_8004F628() == 0) {
                func_800147CC();
            }
            DungeonData->origin->proc_func = &func_80028714;
        } else {
            temp_s0->falling_status = 0;
        }
        break;
    }
}

void func_800371EC(void) {
    func_8003102C(DungeonData);
    func_80029398(DungeonData);
    if (DungeonData->unk5BC8.falling_counter == 0) {
        func_8001A778(0, 0, 0);
        func_800225C8(3, 3, 3, 3, 2);
        DungeonData->unk5BC8.falling_counter = 1;
    } else if (DungeonData->unk5BC8.falling_counter == 1) {
        if (func_8001F920() == 2) {
            DungeonData->unk5BC8.unk_counter += 1;
            if (DungeonData->unk5BC8.unk_counter >= 3) {
                func_8003FFE4(0xC);
                DungeonData->unk5BC8.falling_counter = 2;
            }
        } else {
            return;
        }
    }
    if (DungeonData->unk5BC8.falling_counter == 2) {
        func_800388B4(1);
        DungeonData->unk5BC8.unk_counter = 0;
        DungeonData->unk5BC8.falling_counter = 3;
    } else if (DungeonData->unk5BC8.falling_counter == 3) {
        DungeonData->unk5BC8.unk_counter += 1;
        if (DungeonData->unk5BC8.unk_counter >= 0x1A) {
            func_8002C95C(0);
            DungeonData->unk5BC8.falling_counter = 4;
        }
    } else if (DungeonData->unk5BC8.falling_counter == 4) {
        func_8001F860(1, 0x12);
        DungeonData->unk5BC8.falling_counter = 5;
    } else if (DungeonData->unk5BC8.falling_counter == 5) {
        if (func_8001F920() == 2) {
            DungeonData->unk5BC8.falling_counter = 6;
        }
    } else if (DungeonData->unk5BC8.falling_counter == 6) {
        struct dungeon_init_data sp18;

        func_80037DE8(DungeonData);
        func_8003A3F4(DungeonData->grid_x, DungeonData->grid_z, &sp18);
        if (sp18.unk20 != -1) {
            sp18.initial_dir = DungeonData->cardinal_dir >> 9;
            if (func_8002F248() == 1) {
                sp18.unk18 = 3;
            } else {
                sp18.unk18 = 0;
            }
            func_800292AC(0, &sp18);
        }
    }
}

void func_80037448(void) {
    if (DungeonData->unk4 < 5 && DungeonData->unk4 > 2) {
        func_80032B24();
    }
    if (func_800148D4() == 0) {
        DungeonData->control_locked = 0;
        DungeonData->origin->proc_func = DungeonData->unk5BC8.return_function;
    }
}

void func_800374B4(void) {
    if (DungeonData->unk4 > 2 && DungeonData->unk4 < 5) {
        func_80032B24();
    }
    DungeonData->unk5BC8.return_function = DungeonData->origin->proc_func;
    DungeonData->origin->proc_func = &func_80037448;
}

void func_80037524(void) {
    if (DungeonData->unk4 > 2 && DungeonData->unk4 < 5) {
        func_80032B24();
    }
    DungeonData->unk5BC8.unk_counter += 1;
    if (DungeonData->unk5BC8.unk_counter >= DungeonData->unk5BC8.brightness) {
        DungeonData->control_locked = 0;
        DungeonData->origin->proc_func = DungeonData->unk5BC8.return_function;
    }
}

void func_800375A4(s16 arg0) {
    if (DungeonData->unk4 > 2 && DungeonData->unk4 < 5) {
        func_80032B24();
    }
    DungeonData->unk5BC8.unk_counter = 0;
    DungeonData->unk5BC8.brightness = arg0;
    DungeonData->unk5BC8.return_function = DungeonData->origin->proc_func;
    DungeonData->origin->proc_func = func_80037524;
}

void func_8003761C(void) {
    func_80032B24();
    if (func_8001F920() == 2) {
        DungeonData->control_locked = 0;
        DungeonData->origin->proc_func = DungeonData->unk5BC8.return_function;
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003766C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_800376DC);

void func_80037A50(void) {
    u8* temp_s0;

    temp_s0 = D_800A2744[DungeonData->unk4 - 3];
    if (func_8002F2F4() == 1) {
        func_800376DC(temp_s0[DungeonData->unk5BC8.unk5C70] & 0x7F);
        DungeonData->unk5BC8.unk5C70 += 1;
    }
    if (DungeonData->unk4 == 3 || DungeonData->unk4 == 4) {
        func_80032B24();
    }
    if (!(temp_s0[DungeonData->unk5BC8.unk5C70 - 1] & 0x80)) {
        if (DungeonData->unk4 == 5) {
            func_80032B24();
        }
        func_8003102C(DungeonData);
        func_80029398(DungeonData);
    }
    FntPrint("\n\n\n\nDream_Proc");
    FntPrint("\n(X=%3d, y=%3d)", DungeonData->grid_x, DungeonData->grid_z);
}

void func_80037B9C(void) {
    object** temp_v0;

    if (D_800B6F28 != 0) {
        RemoveObject(D_800B7428->unk0);
        temp_v0 = D_800B7428;
        D_800B7428 = 0;
        D_800B6F28 = 0;
        temp_v0->unk0 = 0;
    }
}

void func_80037BE0(s8 arg0, s8 arg1, s8 arg2) {
    D_800B7428->unk14 = arg0;
    D_800B7428->unk15 = arg1;
    D_800B7428->unk16 = arg2;
}

void func_80037C04(void) {
    GsBOXF* temp_a0;

    temp_a0 = &D_800B7428->unk4;
    if (DungeonData->status & 0x40) {
        temp_a0->x = -0x90;
        temp_a0->y = -0xE;
        temp_a0->w = 0x120;
        temp_a0->h = 0x1C;
    } else {
        temp_a0->x = -0x90;
        temp_a0->y = -0xE;
        temp_a0->w = 0x120;
        temp_a0->h = 0x21;
    }
    temp_a0->r = D_800B7428->unk14;
    temp_a0->g = D_800B7428->unk15;
    temp_a0->b = D_800B7428->unk16;
    GsSortBoxFill(temp_a0, GsOTPtr, 0x514);
}

void func_80037CC8(s8 arg0, s8 arg1, s8 arg2) {
    struct object* temp_v0;
    struct unk_data_101* temp_v0_2;

    if (D_800B6F28 == 0) {
        D_800B6F28 = 1;
        temp_v0 = CreateObject(0, 0, *FirstObjectPtrPtr, 0x50000, 0, 0x18);
        if (temp_v0 == 0) return;
        bzero(temp_v0->data, 0x18);
        temp_v0_2 = temp_v0->data;
        D_800B7428 = temp_v0->data;
        temp_v0_2->unk0 = temp_v0;
    }
    D_800B7428->unk14 = arg0;
    D_800B7428->unk15 = arg1;
    D_800B7428->unk16 = arg2;
    D_800B7428->unk0->proc_func = &func_80037C04;
}

void func_80037DA0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5) {
    RECT sp10;

    sp10.x = arg0;
    sp10.y = arg1;
    sp10.w = arg2;
    sp10.h = arg3;
    MoveImage(&sp10, arg4, arg5);
}

void func_80037DE8(void) {
    RemoveObject(D_800B7424->unk0);
    D_800B7424->unk0 = 0;
    D_800B7424 = 0;
}

void func_80037E1C(void) {
    D_800B7424->unk8 = 1;
}

void func_80037E2C(void) {
    D_800B7424->unk8 = 0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80037E38);

void func_80038760(void) {
    D_800B7424->unk1EC = 0;
    D_800B7424->unk1EE = 0;
    D_800B7424->unk1F0 = 0;
    D_800B7424->unk1F2 = 0;
    D_800B7424->unk1F4 = 0;
    D_800B7424->x0 = 0x10;
    D_800B7424->y0 = 0x10;
    D_800B7424->w0 = 0x90;
    D_800B7424->h0 = 0x78;
    D_800B7424->unk164 = 0x200;
    D_800B7424->unk166 = 0;
    D_800B7424->unk168 = 0;
    D_800B7424->unk16A = 0;
    D_800B7424->u0 = 0;
    D_800B7424->v0 = 0;
    D_800B7424->tw0 = 0x8F;
    D_800B7424->th0 = 0x77;
    D_800B7424->unk174 = 0;
    D_800B7424->unk176 = 2;
    D_800B7424->unk178 = 1;
    D_800B7424->unk17C = 0x22;
    D_800B7424->x1 = 0xA0;
    D_800B7424->y1 = 0x10;
    D_800B7424->w1 = 0x90;
    D_800B7424->h1 = 0x78;
    D_800B7424->unk188 = 0x200;
    D_800B7424->unk18A = 0;
    D_800B7424->unk18C = 0;
    D_800B7424->unk18E = 0;
    D_800B7424->u1 = 0;
    D_800B7424->v1 = 0x78;
    D_800B7424->tw1 = 0x8F;
    D_800B7424->th1 = 0x77;
    D_800B7424->x2 = 0x10;
    D_800B7424->y2 = 0x10;
    D_800B7424->y3 = 0x10;
    D_800B7424->unk198 = 0;
    D_800B7424->unk19A = 2;
    D_800B7424->unk19C = 1;
    D_800B7424->unk1A0 = 0x22;
    D_800B7424->w2 = 0x90;
    D_800B7424->h2 = 0x78;
    D_800B7424->unk1AC = 0x200;
    D_800B7424->unk1AE = 0;
    D_800B7424->unk1B0 = 0;
    D_800B7424->unk1B2 = 0;
    D_800B7424->u2 = 0;
    D_800B7424->v2 = 0;
    D_800B7424->tw2 = 0x8F;
    D_800B7424->th2 = 0x77;
    D_800B7424->unk1BC = 0;
    D_800B7424->unk1BE = 2;
    D_800B7424->unk1C0 = 1;
    D_800B7424->unk1C4 = 0x22;
    D_800B7424->x3 = 0xA0;
    D_800B7424->w3 = 0x90;
    D_800B7424->h3 = 0x78;
    D_800B7424->unk1D0 = 0x200;
    D_800B7424->unk1D2 = 0;
    D_800B7424->unk1D4 = 0;
    D_800B7424->unk1D6 = 0;
    D_800B7424->u3 = 0;
    D_800B7424->v3 = 0x78;
    D_800B7424->tw3 = 0x8F;
    D_800B7424->th3 = 0x77;
    D_800B7424->unk1E0 = 0;
    D_800B7424->unk1E2 = 2;
    D_800B7424->unk1E4 = 1;
    D_800B7424->unk1E8 = 0x22;
    D_800B7424->unk0->proc_func = &func_80037E38;
}

void func_800388B4(s16 arg0) {
    struct object * temp_v0;

    temp_v0 = CreateObject(0, 0, *FirstObjectPtrPtr, 0x50000, 0, sizeof(struct unk_data_102));
    if (temp_v0 == 0) return;
    bzero(temp_v0->data, sizeof(struct unk_data_102));
    D_800B7424 = temp_v0->data;
    D_800B7424->unk8 = 1;
    D_800B7424->unk0 = temp_v0;
    D_800B7424->unk4 = arg0;
    D_800B7424->unk0->proc_func = &func_80038760;
}

void func_80038944(void) {
    D_800B742C->unkB4.p[1].x0 = 0;
}

s32 func_80038950(void) {
    return D_800B742C->unkB4.p[1].x0 == 1;
}

void func_8003896C(s32* arg0) {
    D_800B742C->unk60 = arg0[6];
    D_800B742C->unk64 = arg0[7];
    D_800B742C->unkB4.p[1].x0 = 1;
}


void func_80038990(void) {
    RemoveObject(D_800B742C->unk0);
    D_800B742C->unk0 = 0;
    D_800B742C = 0;
}

void func_800389C4(void) {
    if (D_800B742C->unkE4 != 0) {
        D_800B742C->unkE6 = 0x8C;
        D_800B742C->unkE8 = 0x82;
        D_800B742C->unkE4 = 1;
        D_800B742C->unk0->proc_func = &func_80038A08;
    }
}


void func_80038A08(void) {
    struct unk_data_105 * temp_s0;
    struct unk_data_104 * temp_s1;

    temp_s1 = &D_800B742C->unk4[D_800B742C->unk44];
    if (D_800B742C->unkE4 == 1) {
        D_800B742C->unkE8 -= 10;
        if (D_800B742C->unkE8 < 0x74) {
            D_800B742C->unkE8 = 0x73U;
            D_800B742C->unkC0.unkDC = 1;
            D_800B742C->unk0->proc_func = func_80038BCC;
        }
    } else if (D_800B742C->unkE4 == 0) {
        D_800B742C->unkE8 += 10;
        if (D_800B742C->unkE8 >= 0x82) {
            D_800B742C->unkE8 = 0x82U;
            D_800B742C->unk60 = 0;
            D_800B742C->unk64 = 0;
            D_800B742C->unk0->proc_func = func_800389C4;
        }
    }
    D_800B742C->unkC0.unkC0 = (u16) D_800B742C->unkE6;
    D_800B742C->unkC0.unkDC = 1;
    D_800B742C->unkC0.unkC2 = (u16) D_800B742C->unkE8;
    temp_s0 = &D_800B742C->unkC0;
    AddSprt(temp_s0->unkC0, temp_s0->unkC2, temp_s0->unkC6, temp_s0->unkC4, temp_s0->unkD0, temp_s0->unkD2, 0x808080, ((temp_s0->unkCE << 6) | ((temp_s0->unkCC >> 4) & 0x3F)), temp_s0->unkE0, &temp_s1->unk0);
    temp_s1->unk0.code |= 2;
    AddDrawMode(0, 1, ((temp_s0->unkCA & 0x100) >> 4) | ((temp_s0->unkC8 & 0x3FF) >> 6) | ((temp_s0->unkCA & 0x200) * 4), 0, temp_s0->unkE0, &temp_s1->unk14);
    D_800B742C->unk44 ^= 1;
}


void func_80038BCC(void) {
    struct unk_data_105* temp_s0;
    struct unk_data_104* temp_s1;

    temp_s1 = &D_800B742C->unk4[D_800B742C->unk44];
    if (D_800B742C->unkE4 != 1) {
        D_800B742C->unkE4 = 0;
        D_800B742C->unk0->proc_func = &func_80038A08;
    }
    
    D_800B742C->unkC0.unk0 = D_800B742C->unkE6;
    D_800B742C->unkC0.unk2 = D_800B742C->unkE8;
    D_800B742C->unkF4 += 1;
    if (D_800B742C->unkF4 >= 0 && D_800B742C->unkF4 < 10) {
        D_800B742C->unkC0.unk1C = 1;
        temp_s0 = &D_800B742C->unkC0;
        AddSprt(temp_s0->unk0, temp_s0->unk2, temp_s0->unk6, temp_s0->unk4, temp_s0->unk10, temp_s0->unk12, 0x808080, ((temp_s0->unkE << 6) | ((temp_s0->unkC >> 4) & 0x3F)), temp_s0->unk20, temp_s1);
        temp_s1->unk0.code |= 2;
        AddDrawMode(0, 1, ((temp_s0->unkA & 0x100) >> 4) | ((temp_s0->unk8 & 0x3FF) >> 6) | ((temp_s0->unkA & 0x200) * 4), 0, temp_s0->unk20, &temp_s1->unk14);
    } else if (D_800B742C->unkF4 <= 9 || D_800B742C->unkF4 >= 20) {
        D_800B742C->unkF4 = 0;
    }
    D_800B742C->unk44 ^= 1;
    if (func_80018EE8(0, 0xD) != 0) {
        if (func_8002DBAC() == 1) {
            func_80032874(&D_800B742C->unk48);
            func_80038944();
        }
    } else if (func_80018EE8(0, 0xE) != 0) {
        func_80038944();
    }
}


void func_80038DA0(void) {
    struct texture_data sp18;
    s16 sp28[2];
    struct object* temp_v0;

    temp_v0 = CreateObject(0, 0, *FirstObjectPtrPtr, 0x50000, 0, 0xF8);
    if (temp_v0 == 0) return;
    bzero(temp_v0->data, 0xF8);
    D_800B742C = temp_v0->data;
    D_800B742C->unk0 = temp_v0;
    D_800B742C->unkE4 = 0;
    D_800B742C->unkE6 = 0x8B;
    D_800B742C->unkE8 = 0x82;
    D_800B742C->unkEA = 0x28;
    D_800B742C->unkEC = 0x10;
    D_800B742C->unkF0 = 0x22;
    D_800B742C->unkF4 = 0;
    sp18 = GetTextureInitData(0xB3);
    sp28[0] = (sp18.unk8 & 0xF) * 0x10;
    sp28[1] = ((sp18.unk8 >> 4) + 0x1E0) & 0x1FF;
    D_800B742C->unkC0.unk0 = 0;
    D_800B742C->unkC0.unk2 = 0;
    D_800B742C->unkC0.unk6 = sp18.w;
    D_800B742C->unkC0.unk4 = sp18.h;
    D_800B742C->unkC0.unk8 = 0x2C0;
    D_800B742C->unkC0.unkA = 0x100;
    D_800B742C->unkC0.unkC = sp28[0];
    D_800B742C->unkC0.unkE = sp28[1];
    D_800B742C->unkC0.unk10 = sp18.u;
    D_800B742C->unkC0.unk12 = sp18.v;
    D_800B742C->unkC0.unk14 = 0x28;
    D_800B742C->unkC0.unk16 = 0x10;
    D_800B742C->unkC0.unk18 = 0;
    D_800B742C->unkC0.unk1A = 0;
    D_800B742C->unkC0.unk1C = 1;
    D_800B742C->unkC0.unk20 = (D_800B742C->unkF0 - 1);
    D_800B742C->unk0->proc_func = &func_800389C4;
}


void func_80038F00(void) {
    RemoveObject(D_800B7430->unk0);
    D_800B7430->unk0 = 0;
    D_800B7430 = NULL;
}


void func_80038F34(void) {
    D_800B7430->unk14C = 0;
}


void func_80038F40(void) {
    D_800B7430->unk14C = 1;
    D_800B7430->unk0->proc_func = func_80038F64;
}


void func_80038F64(void) {
    if (D_800B7430->unk14C != 1) {
        D_800B7430->unk15A = 0;
        D_800B7430->unk15C = 0;
        D_800B7430->unk0->proc_func = func_80038FA0;
    }
}


void func_80038FA0(void) {
    struct dungeon_init_data sp10;
    s32 stack_pad[2]; // IDK if this is accurate but it pads the stack enough for it to match so..?

    if ((func_8002CA84(&DungeonData->grid_x, DungeonData) & 0xF) == 10) {
        s16 var_a1;
        for (var_a1 = 0; var_a1 < 9; var_a1++) {
            D_800B7430->unk14D[var_a1] = 0;
        }
        func_8003A6A4(DungeonData->grid_x, DungeonData->grid_z, (func_8002ED70() >> 4), &sp10);
        if (sp10.unk20 != -1) {
            struct unk_data_106* temp_a0 = D_800B7430;
            temp_a0->unk159 = func_8009C9BC(func_8003A8B0(sp10.unk18));
            D_800B7430->unk15C = ((8 - D_800B7430->unk159) * 4);
            strncat(&D_800B7430->unk14D, func_8003A8B0(sp10.unk18), D_800B7430->unk159);
            D_800B7430->unk15A = 0;
            D_800B7430->unk14C = 2;
            D_800B7430->unk146 = (((0x40 - (D_800B7430->unk159 * 8)) >> 1) + 0x78);
            D_800B7430->unk14A = (D_800B7430->unk159 * 8);
            D_800B7430->unk0->proc_func = &func_80039110;
            return;
        }
    }
    D_800B7430->unk14C = 1;
    D_800B7430->unk0->proc_func = &func_80038F64;
}


void func_80039110(void) {
    D_800A2750.unkC = D_800A2750.unk12 = D_800B7430->unk14A + 8;
    
    if (D_800B7430->unk14C < 2 || D_800B7430->unk14C >= 4) {
        D_800B7430->unk15A = 0;
        D_800B7430->unk15C = 0;
        D_800B7430->unk0->proc_func = &func_80038FA0;
    }
    if (DungeonData->origin->proc_func == &func_80028714) {
        s16 var_v0;
        struct unk_data_108 * temp_s3 = &D_800B7430->unk8[D_800B7430->unk145];
        for (var_v0 = 0; var_v0 < 6; var_v0++) {
            s16 * temp_s0 = &D_800A2750.unk0[var_v0];
            struct texture_data sp38 = GetTextureInitData(temp_s0[2]);
            s16 temp_t4 = (((sp38.unk8 >> 4) + 0x1E0) << 6) | (sp38.unk8 & 0xF);
            if (var_v0 >= 4 && var_v0 < 6) {
                POLY_FT4 * temp_s0_2 = &temp_s3->p[var_v0 - 4];
                AddPolyFT4((temp_s0[0] + D_800B7430->unk146), 
                    (temp_s0[1] + D_800B7430->unk148), 
                    D_800B7430->unk14A, 8, 
                    sp38.u, sp38.v, 
                    8, 8, 0x808080, 0x1B, 
                    temp_t4, 
                    D_800B7430->unk140, 
                    temp_s0_2);
                SetSemiTrans(temp_s0_2, 1);
            } else {
                SPRT_8 * temp_s0_3 = &temp_s3->s[var_v0];
                AddSprt8((temp_s0[0] + D_800B7430->unk146), 
                    (temp_s0[1] + D_800B7430->unk148), 
                    sp38.u, sp38.v, 
                    0x808080, 
                    temp_t4, 
                    D_800B7430->unk140, 
                    temp_s0_3);
                SetSemiTrans(temp_s0_3, 1);
                if (var_v0 == 3) {
                    AddDrawMode(0, 1, 0x1B, 0, D_800B7430->unk140, &temp_s3->d);
                }
            }
        }
        D_800B7430->unk145 ^= 1;
        if (D_800B7430->unk14C == 3) {
            D_800B7430->unk142 += 1;
            if (D_800B7430->unk142 >= 0x15) {
                D_800B7430->unk142 = 0;
            }
            if (D_800B7430->unk142 > 0 && D_800B7430->unk142 <= 9) {
                func_80022394(&D_800B6F30, (D_800B7430->unk15C + (D_800B7430->unk15A * 8) + 0x7C), (D_800B7430->unk148 + 5), 1, D_800B7430->unk140 - 1);
            }
            func_80022394(&D_800B7430->unk14D, (D_800B7430->unk15C + 0x7C), (D_800B7430->unk148 + 5), 1, D_800B7430->unk140 - 1);
        } else if (D_800B7430->unk14C == 2) {
            u8 var_a1;
            for (var_a1 = 0; var_a1 < D_800B7430->unk15A; var_a1++) {
                D_800FA1C0[var_a1] = D_800B7430->unk14D[var_a1];
            }
            D_800FA1C0[var_a1] = 0x5F;
            var_a1++;
            D_800FA1C0[var_a1] = 0x5F;
            var_a1++;
            D_800FA1C0[var_a1] = 0;
            D_800B7430->unk15A += 1;
            if (D_800B7430->unk15A >= D_800B7430->unk159) {
                D_800B7430->unk14C = 3;
            }
            func_80022394(&D_800FA1C0, (D_800B7430->unk15C + 0x7C), (D_800B7430->unk148 + 5), 1, D_800B7430->unk140 - 1);
        }
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80039574);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80039620);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003962C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003963C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80039698);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003971C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003981C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_80039F9C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A094);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A0A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A178);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A1A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A228);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A25C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A290);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A2B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A364);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A3F4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A434);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A468);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A49C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A568);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A5A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A66C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A6A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A6DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A7C4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A804);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A844);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A874);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A8B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A900);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003A9A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003AAFC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003AE00);

INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003AFB4);


s32 func_8003AFE8(void) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_8004CA5C(var_s0)) {
            if (!(func_8004C85C(var_s0) & 0xE000)) {
                return 1;
            }
        }
    }
    return 0;
}