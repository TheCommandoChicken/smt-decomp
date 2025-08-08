#include "common.h"
#include "lib/libgpu.h"
#include "lib/libgte.h"
#include "ui.h"
#include "graph.h"
#include "object.h"

struct col_rect (*D_800B73F4)[5];
struct col1_rect (*D_800B73F8)[5];
struct col_rect D_800A05A4[4][5];
struct col1_rect D_800A0784[4][5];
s32 D_800B6D70;
s32 D_800B6D7C;
s32 D_800B6D80;
struct text_sprt TextSprt[2];
SPRT * TextSprtPtr = &TextSprt[1].sprt[0];
s32 TextSprtBuffer = 0;


void func_800209F0(s16 x, s16 y, s16 w, s16 h, s32 ot_index, POLY_G4 (* p)[5], s16 arg6) {
    s32 i;
    struct col_rect* var_s1 = func_80020D40(x, y, w, h, arg6);

    for (i = 0; i < 5; var_s1++, i++) {
        func_8001D890(var_s1->x, var_s1->y, var_s1->w, var_s1->h, &var_s1->colors, ot_index, &(*p)[i]);
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80020AAC);

void func_80020B7C(s16 x0, s16 y0, s16 x1, s16 y1, s32 ot_index, struct unk_data_10* dat) {
    struct col1_rect sp20 = {x0 - 2, y0 + 2, x1 + 4, y1, 0};
    struct col1_rect sp30[5] = {
        {0, 0, x1 - 1, 1, 0x4F5154},
        {x1 - 1, 0, 1, y1 - 1, 0x1D2940},
        {0, y1 - 1, x1, 1, 0x1D2940},
        {0, 1, 1, y1 - 2, 0x4F5154},
        {1, 1, x1 - 2, y1 - 2, 0x3B474B}
    };
    s32 var_s2;
    POLY_F4 * p;

    for (var_s2 = 0; var_s2 < 5; var_s2++) {
        AddPolyF4((x0 + sp30[var_s2].x), (y0 + sp30[var_s2].y), sp30[var_s2].w, sp30[var_s2].h, sp30[var_s2].color, ot_index, &dat->p[var_s2]);
    }
    p = &dat->p[5];
    AddPolyF4(sp20.x, sp20.y, sp20.w, sp20.h, 0, ot_index, p);
    p->code |= 2;
    AddDrMode(0, 1, 0, 0, ot_index, &dat->dr_mode);
}


struct col_rect * func_80020D40(s16 x, s16 y, s16 w, s16 h, s32 arg4) {
    u8 sp0[4] = {2, 1, 2, 2};
    u8 temp_t1 = sp0[arg4];
    D_800B73F4 = &D_800A05A4[arg4];
    D_800A05A4[arg4][0].x = x;
    D_800A05A4[arg4][0].y = y;
    D_800A05A4[arg4][0].w = w;
    D_800A05A4[arg4][0].h = temp_t1;
    D_800A05A4[arg4][1].x = x + temp_t1;
    D_800A05A4[arg4][1].y = h + (y - temp_t1);
    D_800A05A4[arg4][1].w = w - temp_t1;
    D_800A05A4[arg4][1].h = temp_t1;
    D_800A05A4[arg4][2].x = x;
    D_800A05A4[arg4][2].y = y;
    D_800A05A4[arg4][2].w = temp_t1;
    D_800A05A4[arg4][2].h = h;
    D_800A05A4[arg4][3].x = w + (x - temp_t1);
    D_800A05A4[arg4][3].y = y + temp_t1;
    D_800A05A4[arg4][3].w = temp_t1;
    D_800A05A4[arg4][3].h = h - (temp_t1 * 2);
    D_800A05A4[arg4][4].x = x + temp_t1;
    D_800A05A4[arg4][4].y = y + temp_t1;
    D_800A05A4[arg4][4].w = w - (temp_t1 * 2);
    D_800A05A4[arg4][4].h = h - (temp_t1 * 2);
    return D_800B73F4;
}


struct col1_rect * func_80020E10(s16 x, s16 y, s16 w, s16 h, s32 arg4) {
    u8 sp0[4] = {1, 0, 0}; // this freaks out if you try to put a third 0 in.
    u8 temp_t1 = sp0[arg4];
    D_800B73F8 = &D_800A0784[arg4];
    D_800A0784[arg4][0].x = x;
    D_800A0784[arg4][0].y = y;
    D_800A0784[arg4][0].w = w;
    D_800A0784[arg4][0].h = temp_t1;
    D_800A0784[arg4][1].x = x + temp_t1;
    D_800A0784[arg4][1].y = h + (y - temp_t1);
    D_800A0784[arg4][1].w = w - temp_t1;
    D_800A0784[arg4][1].h = temp_t1;
    D_800A0784[arg4][2].x = x;
    D_800A0784[arg4][2].y = y;
    D_800A0784[arg4][2].w = temp_t1;
    D_800A0784[arg4][2].h = h;
    D_800A0784[arg4][3].x = w + (x - temp_t1);
    D_800A0784[arg4][3].y = y + temp_t1;
    D_800A0784[arg4][3].w = temp_t1;
    D_800A0784[arg4][3].h = h - (temp_t1 * 2);
    D_800A0784[arg4][4].x = x + temp_t1;
    D_800A0784[arg4][4].y = y + temp_t1;
    D_800A0784[arg4][4].w = w - (temp_t1 * 2);
    D_800A0784[arg4][4].h = h - (temp_t1 * 2);
    return D_800B73F8;
}


u8 func_80020EE0(struct object* arg0) {
    return ((struct dialog_box *)arg0->data)->unk17A;
}


u8 func_80020EF4(struct object* arg0) {
    return ((struct dialog_box *)arg0->data)->unk17C;
}


void func_80020F08(struct object* arg0, u32 arg1, u32 arg2) {
    struct dialog_box* temp_s0;

    temp_s0 = arg0->data;
    func_8002121C(temp_s0, arg1, arg2);
    temp_s0->unk17A = arg2;
    temp_s0->unk17C = 0;
}


struct object * func_80020F44(s16 x, s16 y, s16 arg2, s16 arg3, s32 ot_index, s32 priority) {
    struct dialog_box* temp_a0;
    struct object* temp_v0 = CreateObject(
        func_8002103C, NULL, FirstObjectPtrPtr->first, 
        priority, OBJ_TYPE_DEFAULT, sizeof(struct dialog_box)
    );
    if (temp_v0 == NULL) return NULL;
    temp_a0 = temp_v0->data;
    temp_a0->x = x + (arg2 >> 1);
    temp_a0->y = y;
    temp_a0->w = 0;
    temp_a0->h = 0;
    temp_a0->unk170 = arg2;
    temp_a0->unk172 = arg3;
    temp_a0->unk178 = temp_a0->x;
    temp_a0->unk174 = arg2 / 8;
    temp_a0->unk176 = arg3 / 8;
    temp_a0->ot_index = ot_index;
    temp_a0->unk17A = 0;
    temp_a0->unk17C = 0;
    temp_a0->buffer = 0;
    temp_a0->unk17E = 8;
    return temp_v0;
}


void func_8002103C(struct object* arg0) {
    struct dialog_box* temp_s0 = arg0->data;
    s32 temp_v0 = temp_s0->unk17A;

    if (temp_v0 >= 0) {
        if (temp_v0 < 3) {
            func_800210EC(temp_s0);
        }
    }
    if ((temp_s0->w != 0) && (temp_s0->h != 0)) {
        POLY_G4 (* p)[5] = &temp_s0->p[temp_s0->buffer];
        func_800209F0(temp_s0->x, temp_s0->y, temp_s0->w, temp_s0->h, temp_s0->ot_index, p, 1);
    }
    temp_s0->buffer ^= 1;
}


u8 func_800210EC(struct dialog_box* arg0) {
    u8 sp10[3] = {1, 0, 1};
    u8 sp18[3] = {1, 2, 1};

    if (D_800B6D70 < arg0->unk17E) {
        arg0->x -= arg0->unk174 >> 1;
        arg0->w += arg0->unk174;
        arg0->h += arg0->unk176;
        if (D_800B6D70 == (arg0->unk17E - 1)) {
            func_8002121C(arg0, 0, sp10[arg0->unk17A]);
        }
        D_800B6D70 += 1;
    } else if (arg0->unk17E >= D_800B6D70) {
        D_800B6D70 += 1;
    } else {
        arg0->unk17E = 8;
        arg0->unk17C = sp18[arg0->unk17A];
        arg0->unk17A = 3;
        D_800B6D70 = 0;
    }
    return arg0->unk17A;
}


void func_8002121C(struct dialog_box* arg0, s32 arg1, s32 arg2) {
    s16 temp_a2;
    s16 temp_v0_2;
    s16 var_a1;
    s16 var_v0;
    
    switch (arg2) {
    case 0:
        arg0->w = 0;
        arg0->h = 0;
        arg0->x = arg0->unk178;
        arg0->unk174 = arg0->unk170 / 8;
        arg0->unk176 = arg0->unk172 / 8;
        break;
    case 1:
        var_a1 = arg0->unk170;
        arg0->x = ((0x140 - var_a1) >> 1);
        arg0->w = arg0->unk170;
        arg0->h = arg0->unk172;
        arg0->unk174 = -(arg0->unk170 / 8);
        arg0->unk176 = -(arg0->unk172 / 8);
        break;
    case 2:
        temp_a2 = (5 + (arg1 * 0xC));
        temp_a2 -= arg0->unk172;
        temp_v0_2 = temp_a2 / 12;
        arg0->w = arg0->unk170;
        arg0->h = arg0->unk172;
        arg0->unk172 = ((arg1 * 0xC) + 5);
        arg0->unk17E = temp_v0_2 * 2;
        if (arg0->unk17E < 0) {
            arg0->unk17E = -arg0->unk17E;
        }
        arg0->unk174 = 0;
        if (arg0->unk17E != 0) {
            var_v0 = temp_a2 / arg0->unk17E;
        } else {
            var_v0 = 0;
        }
        arg0->unk176 = var_v0;
    }
    
    return;
}


s32 func_800213A0(s32* arg0, u32 arg1) {
    s32 var_v1;
    u16 top;

    top = arg1 >> 0x10;
    if (*arg0 == 0) {
        D_800B6D7C = 0;
    }
    if (top == 0) {
        top = 0x15;
    }
    
    switch (arg1 & 0xFFFF) {
    case 0:
        if (D_800B6D7C != 1) {
            D_800B6D7C++;
            if (*arg0 == 0) {
                *arg0 = func_80020F44(0x18, 0x88, 0x110, 0x54, top, 0xA10000);
            } else if ((func_80020EF4(*arg0) != 1) && (func_80020EF4(*arg0) == 2)) {
                func_80020F08(*arg0, 0, 0);
            }
        }
        
        break;
    case 1:
        if (D_800B6D7C != 1) {
            if (*arg0 == 0) {
                return 3;
            }
            D_800B6D7C += 1;
            if (func_80020EF4(*arg0) != 2) {
                func_80020F08(*arg0, 0, 1);
            }
        }
        
        break;
    case 2:
        switch (D_800B6D7C) {
        case 0:
            if (func_800213A0(arg0, (top << 0x10) | 1) == 3) {
                D_800B6D7C += 1;
            }
            return 0;
        case 1:
            var_v1 = func_800213A0(arg0, top << 0x10);
            if (var_v1 == 3) {
                D_800B6D7C = 0;
            }
            return var_v1;
            break;
        }
        
        break;
    }
    
    var_v1 = func_80020EE0(*arg0);
    if (var_v1 == 3) {
        D_800B6D7C = 0;
    }
    return var_v1;
}


s32 func_8002156C(s32* arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;

    switch (arg2) {
    case 0:
        if (D_800B6D80 != 1) {
            if (*arg0 == 0) {
                *arg0 = func_80020F44(0x18, 0x88, 0x110, ((arg1 * 0xC) + 5), 0x15, 0xA10000);
            } else {
                func_80020F08(*arg0, arg1, 2);
            }
            D_800B6D80 += 1;
        }
        break;
    case 1:
        if (D_800B6D80 != 1) {
            if (*arg0 == 0) {
                return 3;
            }
            func_80020F08(*arg0, 0, 1);
            D_800B6D80 += 1;
            break;
        }
    case 2:
        if (D_800B6D80 != 1) {
            if (*arg0 == 0) {
                return 3;
            }
            func_80020F08(*arg0, arg1, 2);
            func_8003FFE4(0x14);
            D_800B6D80 += 1;
            break;
        }
    }
    temp_v0 = func_80020EE0(*arg0);
    if (temp_v0 == 3) {
        D_800B6D80 = 0;
    }
    return temp_v0;
}

u32 func_800216CC(struct object** arg0, s32 arg1, u16 ** arg2, s32 arg3, s32 arg4) {
    struct object* temp_v0 = *arg0;

    if (temp_v0 != 0) {
        struct unk_data_18* temp_s0_2 = temp_v0->data;
        if (func_80018F14(0, 0xD, arg3) != 0) {
            u32 temp_s0;
            func_8003FFE4(2);
            temp_s0 = temp_s0_2->unk258;
            func_8001830C(*arg0);
            *arg0 = NULL;
            return temp_s0;
        }
    } else {
        *arg0 = func_80021764(arg1, arg2, arg3, arg4);
        func_8003FFE4(0x14);
    }
    return -1;
}


struct object * func_80021764(s32 arg0, u16 ** arg1, s32 arg2, s32 priority) {
    struct unk_data_18* temp_a0;
    struct object* temp_v0 = CreateObject(
        func_80021818, NULL, FirstObjectPtrPtr->first, 
        priority, OBJ_TYPE_DEFAULT, sizeof(struct unk_data_18));
    if (temp_v0 == NULL) return NULL;
    temp_a0 = temp_v0->data;
    temp_a0->x = 0x60;
    temp_a0->y = 0x99;
    temp_a0->unk254 = 0x80;
    temp_a0->unk256 = ((arg0 * 0xC) + 4);
    temp_a0->unk258 = 0;
    temp_a0->unk25C = arg1;
    temp_a0->unk260 = arg0;
    temp_a0->unk261 = arg2;
    temp_a0->buffer = 0;
    return temp_v0;
}


void func_80021818(struct object * arg0) {
    struct unk_data_18* temp_s0 = arg0->data;

    if (func_80018F40(0, 4) != 0) {
        temp_s0->unk258 -= 1;
        func_8003FFE4(1);
    }
    if (func_80018F40(0, 6) != 0) {
        temp_s0->unk258 += 1;
        func_8003FFE4(1);
    }
    if (temp_s0->unk258 < 0) {
        temp_s0->unk258 = (temp_s0->unk260 - 1);
    }
    if (temp_s0->unk260 <= temp_s0->unk258) {
        temp_s0->unk258 = 0;
    }
    func_800218CC(temp_s0);
}


void func_800218CC(struct unk_data_18 * arg0) {
    s32 i;
    struct unk_data_17 * temp_s3 = &arg0->u[arg0->buffer];

    func_80020544((arg0->x + 4), (arg0->y + 2 + ((arg0->unk258 * 0xC))), (arg0->unk254 - 8), arg0->unk261, temp_s3);
    for (i = 0; i < arg0->unk260; i++) {
        func_80021DBC(arg0->unk25C[i], (arg0->x + 4), (arg0->y + 2 + (i * 0xC)), 5, 0, 0, arg0->unk261);
    }
    func_800209F0(arg0->x, arg0->y, arg0->unk254, arg0->unk256, arg0->unk261, &temp_s3->p1, 1);
    func_8001D7F8((arg0->x - 2), (arg0->y + 2), (arg0->unk254 + 4), arg0->unk256, 0, arg0->unk261, &temp_s3->p2);
    temp_s3->p2.code |= 2;
    func_8001D478(0, 1, 0, 0, arg0->unk261, &temp_s3->d);
    arg0->buffer ^= 1;
}


void func_80021A9C(s16 x, s16 y, s32 arg2, s32 arg3, struct unk_data_25 * arg4) {
    func_80021AD0(x, y, arg3, arg4);
}


void func_80021AD0(s16 x, s16 y, s32 ot_index, struct unk_data_25 * arg3) {
    s16 _x[2];
    s16 _y[2];
    u32 sp30[8] = {
        0, 0, 0x202060, 0x202060, 
        0x202060, 0x202060, 0, 0
    };
    s32 i;
    LINE_F2* l;

    l = &arg3->l[0];
    _y[0] = y;
    _y[1] = y + 0xF0;
    for (i = 0; i < 0x140; i += 0x10) {
        _x[1] = _x[0] = x + i;
        AddLineF2(&_x, &_y, 0x40404040, ot_index, l);
        l->code |= 2;
        l += 1;
    }
    _x[0] = x;
    _x[1] = x + 0x140;
    for (i = 0; i < 0xF0; i += 0x10) {
        _y[1] = _y[0] = y + i;
        AddLineF2(&_x, &_y, 0x40404040, ot_index, l);
        l->code |= 2;
        l += 1;
    }
    func_8001D890(x, y, 0x140, 0x78, &sp30, ot_index, &arg3->p[0]);
    func_8001D890(x, y + 0x78, 0x140, 0x78, &sp30[4], ot_index, &arg3->p[1]);
    func_8001D478(0, 1, 0, 0, ot_index, &arg3->d);
}


void func_80021CB0(void) {
    TextSprtPtr = &TextSprt[TextSprtBuffer];
    TextSprtBuffer ^= 1;
}


struct text_sprt * func_80021CE0(void) {
    return TextSprtPtr;
}


void func_80021CEC(struct text_sprt * ptr) {
    TextSprtPtr = ptr;
}


s16 func_80021CF8(s32 arg0, s32 arg1) {
    return getClut(0x100, (((arg0 + arg1) >> 2) + 0x1E5)) | ((arg0 + arg1) & 3); // maybe?
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80021D20);


void func_80021DBC(s16* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    if ((arg0 != 0) && (arg0[0] != 0)) {
        if ((arg3 & 0xF) == 4) {
            func_80021E80(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        } else {
            func_800220D0(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        }
    }
}


void func_80021E80(s16* arg0, s16 x, s16 y, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    SPRT* var_s3 = func_80021CE0();
    struct font* temp_v0 = &FontData[4];
    s16 var_s2 = 0;
    s16 temp = getClut(0x100, (((arg4 >> 1) >> 2) + 0x1E0)) | (arg4 >> 1 & 3);
    
    while (*arg0 != 0) {
        s16 u;
        s16 v;
        s16 temp_s0;
        if ((arg5 > 0) && (arg5 == var_s2)) {
            var_s2 = 0;
            y += temp_v0->h;
        }
        temp_s0 = *arg0 - 1;
        u = (temp_v0->u + (((temp_s0) % 21) * temp_v0->w));
        v = (temp_v0->v + (((temp_s0) / 21) * temp_v0->h));
        func_8001D534(x + (var_s2 * temp_v0->w), y, temp_v0->w, temp_v0->h, u, v, 0x80808080, temp, arg6, var_s3);
        func_80022564(arg3, var_s3);
        var_s2++;
        var_s3++;
        arg0++;
        if (temp_s0 > 0xA2 && temp_s0 < 0xEA) {
            x -= 1;
        }
    }
    func_8001D478(0, 1, func_8002258C(temp_v0->unk4, arg3), 0, arg6, (DR_MODE*)var_s3);
    func_80021CEC((SPRT *)(((DR_MODE *)var_s3) + 1));
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800220D0);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022394);

void func_80022564(u32 arg0, SPRT* arg1) {
    if (((s32)(arg0 / 16) & 0xF) > 0) {
        arg1->code |= 2;
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002258C);

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800225BC);

void func_800225C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (D_800B6DA8 == 0) {
        func_800227E0(arg0);
        func_80022BA0(arg1);
        func_80022E70(arg2);
        func_800231C8(arg3);
        func_800238A8(arg4);
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022634);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800226F0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022720);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002276C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800227E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800228D8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022AD8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022B2C);

void func_80022BA0(s32 arg0) {
    help sp10[4] = {
    {0x0132, 0xFFEB, func_80018448},
    {0x00DE, 0x0015, func_80024B1C}, 
    {0x00DE, 0x0000, func_80018448}, 
    {0x0032, 0x0001, func_80024AFC}};
    money_hud_object_data* temp_a1;
    help* temp_v1;

    if (D_800B6DA8 == 0) {
        temp_a1 = MoneyHUDObject->data;
        if ((MoonHudStatus[1] & 0xF) != arg0) {
            if ((arg0 != 4) && (arg0 != 0xF)) {
                temp_v1 = &sp10[arg0];
                temp_a1->x = temp_v1->unk0;
                temp_a1->y = 0x24;
                temp_a1->motion = temp_v1->unk2;
                temp_v1->unk4(MoneyHUDObject);
                goto block_5;
            }
        } else {
block_5:
            MoonHudStatus[1] = (u8) (((MoonHudStatus[1] & 0xF) * 0x10) | (arg0 & 0xF));
        }
    }
}

void func_80022E70(s32 arg0) {
    help sp10[4] = {
    {0x0132, 0xFFEB, func_80018448},
    {0x00DE, 0x0015, func_80024B1C}, 
    {0x00DE, 0x0000, func_80018448}, 
    {0x0032, 0x0001, func_80024AFC}};
    mag_hud_object_data* temp_a1;
    help* temp_v1;

    if (D_800B6DA8 == 0) {
        temp_a1 = MagHUDObject->data;
        if ((MoonHudStatus[2] & 0xF) != arg0) {
            if ((arg0 != 4) && (arg0 != 0xF)) {
                temp_v1 = &sp10[arg0];
                temp_a1->x = temp_v1->unk0;
                temp_a1->y = 0x12;
                temp_a1->motion = temp_v1->unk2;
                temp_a1->motion_counter = 0;
                temp_v1->unk4(MagHUDObject);
                goto block_5;
            }
        } else {
block_5:
            MoonHudStatus[2] = (((MoonHudStatus[2] & 0xF) * 0x10) | (arg0 & 0xF));
        }
    }
}


void func_80022D98(s16 arg0, s16 arg1) {
    money_hud_object_data* temp_v0;

    if (D_800B6DA8 == 0) {
        temp_v0 = MoneyHUDObject->data;
        temp_v0->x = arg0;
        temp_v0->y = arg1;
        temp_v0->motion = 0;
        func_80018448(MoneyHUDObject);
        MoonHudStatus[1] = (((MoonHudStatus[1] & 0xF) * 0x10) | 2);
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022DFC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022E70);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80022F6C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800230FC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023148);

void func_800231C8(s32 arg0) {
    void (*sp10[4])(object*) = {func_80018448, func_80024B1C, func_80018448, func_80024AFC};
    u8 temp_v0;
    navigation_hud_object_data* temp_s0;

    if (D_800B6DA8 == 0) {
        temp_s0 = NavigationHudObject->data;
        temp_v0 = func_80044114();
        if (((NavHudStatus & 0xF) != arg0) || (temp_v0 != temp_s0->field8_0x129)) {
            if ((arg0 != 4) && (arg0 != 0xF)) {
                func_800236C4(arg0);
                sp10[arg0](NavigationHudObject);
            } else return;
        }
        MoonHudStatus[3] = (((MoonHudStatus[3] & 0xF) * 0x10) | (arg0 & 0xF));
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800232C8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023488);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800236C4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023838);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800238A8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023950);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023AB8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023C58);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023F28);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023F58);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80023F94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024040);

void func_80024484(s32 arg0) {
    help sp10[4] = {
        {0x03, 0x10, 0, func_80018448}, 
        {0, 0, 0, func_80018448}, 
        {0x02, 0xFF, 0, func_80018448}, 
        {0x01, 0xFF, 0, func_80024AFC}
    };
    u8 temp_a0;
    overworld_character_object_data* temp_a1;
    help* temp_v1;

    if (D_800B6DA8 == 0) {
        temp_a1 = OverworldCharacterObject->data;
        if ((FieldCharacterStatus & 0xF) != arg0) {
            if ((arg0 != 4) && (arg0 != 0xF)) {
                temp_v1 = &sp10[arg0];
                temp_a1->changing_size = temp_v1->unk0;
                if (temp_v1->unk1 != 0xFF) {
                    temp_a1->size = temp_v1->unk1;
                }
                temp_v1->unk4(OverworldCharacterObject);
            } else return;
        }
        MoonHudStatus[5] = (((MoonHudStatus[5] & 0xF) * 0x10) | (arg0 & 0xF));
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002457C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002459C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800245B4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800245D0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024648);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800246B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800248BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002492C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800249CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024AF0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024AFC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024B1C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024B24);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024BA4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024C40);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80024F04);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800250BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025194);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800251BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800251E4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025230);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002527C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800252AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800252C0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025308);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800253A8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800253E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025504);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025608);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800258C8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025914);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025998);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025A84);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025B30);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025C50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025E3C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80025EC8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026028);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026114);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026138);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800262A8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800262DC);

void func_800262F0(struct object* arg0, s16 arg1, s16 arg2) {
    unk_data_7* temp_a3 = arg0->data;
    
    temp_a3->unkA8 = arg1;
    temp_a3->unkAA = arg2;
    if (arg0->initialized == 1) {
        temp_a3->unkA8 -= temp_a3->unkAC - 0xA0;
        temp_a3->unkAA -= 5;
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026334);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026340);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026390);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800263BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026408);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026464);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002647C);

struct object * func_800264D0(s32 arg0, s8 arg1) {
    unk_data_5* temp_s0;
    object* temp_v0;

    temp_v0 = func_800180DC(func_800265C4, 0, *FirstObjectPtrPtr, 0xE00000, 0, 0x104);
    if (temp_v0 == 0) return 0;
    temp_s0 = temp_v0->data;
    bzero(temp_s0, 0x104);
    temp_s0->color = 0x80808080;
    temp_s0->unk100 = 0xFF;
    temp_s0->unk101 = 0;
    temp_s0->unk102 = arg1;
    func_80020428(&temp_s0->unkEC, 0x1000, 0x1000, 0x1000, 0x1000, 1);
    temp_s0->unkA0 = func_80019C58(0, 0, arg0, &temp_s0->unkA4, 0, 3);
    temp_v0->initialized = 0;
    return temp_v0;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800265C4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026768);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026908);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026BEC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026C48);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026CF0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026E2C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026E88);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026EE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026F0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026F50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80026F6C);

object* func_80026FA0(s32 arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    unk_data_struct_2* temp_s0;
    object* temp_v0;

    if ((D_800A08E8[arg0][0]) != 0xFF) {
        temp_v0 = func_800180DC(&func_80027094, 0, *FirstObjectPtrPtr, 0xE10000, 0, 0x1FC);
        if (temp_v0 != 0) {
            temp_s0 = temp_v0->data;
            temp_v0->initialized = 0;
            bzero(temp_s0, 0x1FC);
            temp_s0->unk1EC = arg2;
            temp_s0->unk1EE = arg3;
            temp_s0->unk1E8 = 0x80808080;
            temp_s0->unk1F6 = 0;
            temp_s0->unk1F8 = (s8) arg4;
            temp_s0->unk1A0 = func_80026C48(arg1, arg0);
            return temp_v0;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027094);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800273E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027544);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800276B8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800276CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027700);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002773C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002776C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800277AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800277EC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002782C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027978);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027C30);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027D50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027E40);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80027E74);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800280BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_800281BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_80028350);
