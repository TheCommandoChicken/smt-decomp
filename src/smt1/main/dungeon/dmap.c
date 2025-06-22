#include "dmap.h"


void func_8003B044(struct object * arg0) {
    struct unk_data_113 * temp_s0;

    temp_s0 = arg0->data;
    RemoveObject(temp_s0->unk18);
    temp_s0->unk18 = 0;
    RemoveObject(temp_s0->unk10);
    temp_s0->unk10 = 0;
    RemoveObject(temp_s0->unk14);
    temp_s0->unk14 = 0;
    RemoveObject(temp_s0->unk1C);
    temp_s0->unk1C = 0;
    RemoveObject(temp_s0->unk20);
    temp_s0->unk20 = 0;
    RemoveObject(temp_s0->unk2C);
    temp_s0->unk2C = 0;
    RemoveObject(temp_s0->unk24);
    temp_s0->unk24 = 0;
    RemoveObject(temp_s0->unk30);
    temp_s0->unk30 = 0;
    if (!(temp_s0->unk4 & 4)) {
        func_800225C8(0, 3, 0, 0, 2);
    }
}

s32 func_8003B0F8(void) {
    return DungeonMap->unk4 & 1;
}

void func_8003B10C(s16 arg0) {
    s16 temp_v0;
    u16 var_s0;
    u8 temp_a0;
    SVECTOR subroutine_arg4;

    if (arg0 == 0) {
        DungeonMap->unk4 |= 8;
        subroutine_arg4.vx = DungeonMap->unkC0E;
        subroutine_arg4.vy = DungeonMap->unkC10;
        var_s0 = DungeonMap->unkC12;
    } else {
        s32 temp;
        DungeonMap->unk4 &= 0xF7;
        temp = DungeonMap->unk1620;
        subroutine_arg4.vx = DungeonMap->markers[temp][0];
        subroutine_arg4.vy = DungeonMap->markers[temp][1];
        var_s0 = 0;
    }
    RemoveObject(DungeonMap->unk14);
    DungeonMap->unk14 = 0;
    RemoveObject(DungeonMap->unk1C);
    DungeonMap->unk1C = 0;
    RemoveObject(DungeonMap->unk20);
    DungeonMap->unk20 = 0;
    RemoveObject(DungeonMap->unk28);
    DungeonMap->unk28 = 0;
    RemoveObject(DungeonMap->unk2C);
    DungeonMap->unk2C = 0;
    RemoveObject(DungeonMap->unk24);
    DungeonMap->unk24 = 0;
    DungeonMap->unkC18 = subroutine_arg4.vx;
    DungeonMap->unkC1A = subroutine_arg4.vy;
    DungeonMap->unkC0D = var_s0;
    DungeonMap->unk161A = func_8002DADC(func_800149F0(1), DungeonMap->unkC18, DungeonMap->unkC1A);
    DungeonMap->unkC14 = D_800A0CDC[DungeonMap->unk161A][0];
    DungeonMap->unkC16 = D_800A0CDC[DungeonMap->unk161A][1];
    func_8003EED8();
    DungeonMap->unk0->proc_func = &func_8003EDE0;
}

void func_8003B2D0(struct object * arg0) {
    struct unk_data_116 * temp_s0;

    temp_s0 = arg0->data;
    RemoveObject(temp_s0->unk198);
    temp_s0->unk198 = 0;
}

void func_8003B304(struct object * arg0) {
    s16 var_s0;
    s16 var_s1;
    s32 var_t0;
    s32 var_t1;
    struct unk_data_116 * temp_s2;
    struct unk_data_114 * temp_s4;
    struct unk_data_115 * temp_v0_2;

    temp_s2 = arg0->data;
    temp_s4 = &temp_s2->unk0[temp_s2->unk1AD];
    if ((func_80018F14(0, 0xC)) && (temp_s2->unk1AC == 0)) {
        func_8003FFE4(0x14);
        temp_s2->unk198 = func_80065F38(4, 
            temp_s2->unk19C, temp_s2->unk19E, 
            0xD8, 4, 0, &D_800A2958, 4, 
            temp_s2->unk1A4, temp_s2->unk1A8, 2, -1, 1);
        temp_v0_2 = temp_s2->unk198->data;
        temp_v0_2->unk2E = 1;
        temp_v0_2->unk3E = 0;
        temp_v0_2->unk42 = 0;
        temp_v0_2->unk2A = 1;
        temp_s2->unk1AC = 2;
        
    } else if (temp_s2->unk1AC == 2) {
        if (func_80066A00(temp_s2->unk198)) {
            for (var_s1 = 0; var_s1 < 2; var_s1++) {
                for (var_s0 = 0; var_s0 < 12; var_s0++) {
                    if (var_s0 < 6) {
                        var_t0 = 0x10;
                        var_t1 = 0;
                    } else {
                        var_t0 = 0x76;
                        var_t1 = 6;
                    }
                    if (var_s1 == 0) {
                        AddSprt8((var_t0 + temp_s2->unk19C), 
                            (temp_s2->unk19E + ((var_s0 - var_t1) * 10) + 8), 
                            D_80010C10[D_800A2C10[var_s0]][0], 
                            D_80010C10[D_800A2C10[var_s0]][1], 
                            0x80808080, 0x7980, temp_s2->unk1A4 - 1, 
                            &temp_s4->s[var_s0]);
                    } else {
                        func_80022394(D_800A2C1C[D_800A2C10[var_s0]], 
                            (temp_s2->unk19C + var_t0 + 18), 
                            (temp_s2->unk19E + ((var_s0 - var_t1) * 10) + 8), 
                            1, (temp_s2->unk1A4 - 1));
                    }
                }
                if (var_s1 == 0) {
                    AddDrawMode(0, 1, 0xBC, 0, temp_s2->unk1A4 - 1, &temp_s4->d);
                }
            }
            if ((func_80018F14(0, 0xC)) || 
                (func_80018F14(0, 0xD)) || 
                (func_80018F14(0, 0xE)) || 
                (func_80018F14(0, 0xF)) || 
                (func_80018F14(0, 4)) || 
                (func_80018F14(0, 5)) || 
                (func_80018F14(0, 6)) || 
                (func_80018F14(0, 7))) {
                func_8006710C(temp_s2->unk198);
                temp_s2->unk1AC = 3;
            }
        } else return;
    } else if (temp_s2->unk1AC == 3) {
        if (((struct unk_data_115 *)temp_s2->unk198->data)->unk2C == 1) {
            RemoveObject(temp_s2->unk198);
            temp_s2->unk198 = 0;
            temp_s2->unk1AC = 0;
        } else return;
    }
    temp_s2->unk1AD ^= 1;
}

struct object * func_8003B6DC(s16 arg0, s16 arg1, s32 arg2, s32 arg3) {
    struct object * temp_v0;
    struct unk_data_116* temp_v1;

    temp_v0 = CreateObject(func_8003B304, func_8003B2D0, FirstObjectPtrPtr->first, arg2, 0, sizeof(struct unk_data_116));
    if (temp_v0 == NULL) return NULL;
    bzero(temp_v0->data, sizeof(struct unk_data_116));
    temp_v1 = temp_v0->data;
    temp_v1->unk19C = arg0;
    temp_v1->unk19E = arg1;
    temp_v1->unk1A4 = arg3;
    temp_v1->unk1A8 = arg2;
    temp_v1->unk1AC = 0;
    return temp_v0;
}

void func_8003B78C(struct object * arg0) {
    u32 sp28[4];
    s16 var_s2;
    struct unk_data_119 * temp_s1;
    struct unk_data_118 * temp_s3;
    RECT* temp_t3;

    temp_s1 = arg0->data;
    temp_s3 = &DungeonMap->unk760[temp_s1->unkA];
    if (DungeonMap->unk4 & 0x20) {
        if ((temp_s1->unk0 + temp_s1->unk8) >= temp_s1->unk0) {
            temp_s1->unk8 -= 0xA;
        }
    } else {
        if ((temp_s1->unk0 + temp_s1->unk8) <= (temp_s1->unk0 + 0x64)) {
            temp_s1->unk8 += 0xA;
        }
    }
    for (var_s2 = 0; var_s2 < 4; var_s2++) {
        temp_t3 = &DungeonMap->unk880[var_s2];
        AddSprt16((temp_s1->unk8 + (temp_s1->unk0 + temp_t3->x)), (temp_s1->unk2 + temp_t3->y), temp_t3->w, temp_t3->h, 0x80808080, temp_s1->unk6, temp_s1->unk4 - 2, &temp_s3->s0[var_s2]);
    }
    AddDrawMode(0, 1, 0xBC, 0, temp_s1->unk4 - 2, &temp_s3->d[0]);
    temp_t3 = &DungeonMap->unk880[var_s2];
    AddSprt((temp_s1->unk8 + (temp_s1->unk0 + temp_t3->x)), (temp_s1->unk2 + temp_t3->y), 0x20, 0x20, temp_t3->w, temp_t3->h, 0x808080, temp_s1->unk6, temp_s1->unk4 - 1, &temp_s3->s1);
    AddDrawMode(0, 1, 0xBC, 0, temp_s1->unk4 - 1, &temp_s3->d[1]);
    sp28[1] = 0x1E;
    sp28[0] = 0x1E;
    sp28[3] = 0x50;
    sp28[2] = 0x50;
    AddPolyG4(((temp_s1->unk0 + temp_s1->unk8) - 9), (temp_s1->unk2 - 2), 0x31, 0x27, &sp28, temp_s1->unk4, &temp_s3->p);
    SetPolyG4(&temp_s3->p);
    temp_s1->unkA ^= 1;
}

void* func_8003BA3C(s16 arg0, s16 arg1, s32 arg2, s16 arg3) {
    s16 sp18[5][2] = {
        {0x10, 0xC0},
        {0x10, 0xD0},
        {0x10, 0xE0},
        {0x10, 0xF0},
        {0x20, 0xC0}
    };
    s16 var_a1;
    s16 var_s1;
    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    void* temp_a0;
    struct unk_data_119 * temp_a3;
    struct object * temp_v0;

    temp_v0 = CreateObject(&func_8003B78C, 0, FirstObjectPtrPtr->first, arg2, 0, sizeof(struct unk_data_119));
    if (temp_v0 == 0) return 0;
    bzero(temp_v0->data, sizeof(struct unk_data_119));
    temp_a3 = temp_v0->data;
    temp_a3->unk0 = arg0;
    temp_a3->unk2 = arg1;
    temp_a3->unk4 = arg3;
    temp_a3->unk6 = 0x7980;
    for (var_a1 = 0; var_a1 < 5; var_a1++) {
        DungeonMap->unk880[var_a1].w = sp18[var_a1][0];
        DungeonMap->unk880[var_a1].h = sp18[var_a1][1];
    }
    if (DungeonMap->unkC0D == 0) {
        var_s1 = 0;
        var_s2 = 1;
        var_s3 = 2;
        var_s4 = 3;
    } else if (DungeonMap->unkC0D == 1) {
        var_s1 = 1;
        var_s2 = 2;
        var_s3 = 3;
        var_s4 = 0;
    } else if (DungeonMap->unkC0D == 2) {
        var_s1 = 2;
        var_s2 = 3;
        var_s3 = 0;
        var_s4 = 1;
    } else if (DungeonMap->unkC0D == 3) {
        var_s1 = 3;
        var_s2 = 0;
        var_s3 = 1;
        var_s4 = 2;
    }
    DungeonMap->unk880[var_s1].x = 8;
    DungeonMap->unk880[var_s1].y = -4;
    DungeonMap->unk880[var_s2].x = 0x18;
    DungeonMap->unk880[var_s2].y = 8;
    DungeonMap->unk880[var_s3].x = 8;
    DungeonMap->unk880[var_s3].y = 0x14;
    DungeonMap->unk880[var_s4].x = -8;
    DungeonMap->unk880[var_s4].y = 8;
    DungeonMap->unk880[4].x = 0;
    DungeonMap->unk880[4].y = 0;
    temp_a3->unk8 = 0x64;
    return temp_v0;
}

void func_8003BCA0(struct object * arg0) {
    s16 var_s1;
    RECT* temp_a3_2;
    struct unk_data_122 * temp_s0;
    struct unk_data_121 * temp_s2;
    struct unk_data_120 * temp_s3;
    struct unk_data_123 * temp_v1;

    temp_s0 = arg0->data;
    temp_v1 = &temp_s0->unk64;
    temp_s2 = &DungeonMap->unk74[temp_s0->unk0];
    temp_s3 = &DungeonMap->unk34[temp_s0->unk0];
    func_80027978(&temp_s0->unk10, 
        (temp_s0->unkC + temp_v1->unk0), 
        (temp_s0->unkE + temp_v1->unk2), 
        temp_v1->unk6, temp_v1->unk4, 
        temp_v1->unk8, temp_v1->unkA, 
        temp_v1->unkC, temp_v1->unkE, 
        temp_v1->unk10, temp_v1->unk12, 
        temp_v1->unk14, temp_v1->unk16, 
        temp_s0->unk8, temp_s0->unkA, 
        0, temp_s0->unk6);
    if (DungeonMap->unk4 & 2) {
        for (var_s1 = 0; var_s1 < DungeonMap->unk75C; var_s1++) {
            temp_a3_2 = &DungeonMap->unk604[var_s1];
            AddSprt8((temp_a3_2->x + temp_s0->unk90), (temp_a3_2->y + temp_s0->unk92), temp_a3_2->w, temp_a3_2->h, 0x80808080, temp_s0->unk2, temp_s0->unk96 + 1, &temp_s2->unk0[var_s1]);
        }
        AddDrawMode(0, 1, 0xBC, 0, temp_s0->unk96 + 1, &temp_s2->unk2B0);
        for (var_s1 = 0; var_s1 < DungeonMap->unk75E; var_s1++) {
            temp_a3_2 = &DungeonMap->unk71C[var_s1];
            AddSprt8((temp_a3_2->x + temp_s0->unk90), (temp_a3_2->y + temp_s0->unk92), temp_a3_2->w, temp_a3_2->h, 0x80808080, temp_s0->unk2, temp_s0->unk96 + 1, &temp_s2->unk230[var_s1]);
        }
        AddDrawMode(0, 1, 0xBC, 0, temp_s0->unk96 + 1, &temp_s2->unk2BC);
        if (DungeonMap->unk4 & 8) {
            DungeonMap->unk161E += 1;
            if (!(DungeonMap->unk161E % 10)) {
                if (D_800B7438 != temp_s0->unk96) {
                    D_800B7438 = temp_s0->unk96;
                } else {
                    D_800B7438 = 0x22;
                }
            }
            temp_a3_2 = &DungeonMap->unk6C;
            AddSprt8((temp_a3_2->x + temp_s0->unk90), (temp_a3_2->y + temp_s0->unk92), temp_a3_2->w, temp_a3_2->h, 0x80808080, temp_s0->unk2, D_800B7438, &temp_s3->unk0);
            AddDrawMode(0, 1, 0xBC, 0, D_800B7438, &temp_s3->unk10);
        }
        temp_s0->unk0 ^= 1;
    }
}

void func_8003C0A8(struct object * arg0) {
    struct unk_data_122 * temp_v1;

    temp_v1 = arg0->data;
    temp_v1->unk8A += 1;
    if (temp_v1->unk8A >= 5) {
        arg0->proc_func = &func_8003BCA0;
    }
}

struct object * func_8003C0E4(s16 arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s16 sp[10] = {
        0x280, 0,
        0xFA, 0xFA,
        0x10, 0x1E5,
        0, 0,
        0xFA, 0xFA
    };
    
    struct unk_data_122 * temp_s0;
    struct object * temp_v0;
    s8 sp30[5][4];
    s16 var_v0_2;

    temp_v0 = CreateObject(&func_8003C0A8, 0, FirstObjectPtrPtr->first, arg3, 0, sizeof(struct unk_data_122));
    if (temp_v0 == 0) return 0;
    bzero(temp_v0->data, sizeof(struct unk_data_122));
    temp_s0 = temp_v0->data;
    temp_s0->unkC = 0;
    temp_s0->unkE = 0;
    temp_s0->unk6 = arg4;
    temp_s0->unk8 = arg2;
    temp_s0->unkA = 0;
    temp_s0->unkC = 0;
    temp_s0->unkE = 0;
    temp_s0->unk64.unk8 = sp[0];
    temp_s0->unk64.unkA = sp[1];
    temp_s0->unk64.unk6 = sp[4];
    temp_s0->unk64.unk4 = sp[5];
    temp_s0->unk64.unkC = sp[2];
    temp_s0->unk64.unkE = sp[3];
    temp_s0->unk64.unk10 = sp[6];
    temp_s0->unk64.unk12 = sp[7];
    temp_s0->unk64.unk14 = sp[8];
    temp_s0->unk64.unk16 = sp[9];
    temp_s0->unk64.unk0 = arg0;
    temp_s0->unk64.unk2 = arg1;
    temp_s0->unk8A = 0;
    temp_s0->unk88 = 0;
    temp_s0->unk96 = (arg4 - 6);
    temp_s0->unk2 = 0x7980;
    memset(sp30, 0, 0x14);
    sp30[0][1] = 1;
    sp30[1][1] = 1;
    sp30[3][2] = 1;
    sp30[4][1] = 1;
    sp30[4][2] = 1;
    if (!(DungeonMap->unk4 & 0x10)) {
        var_v0_2 = 0;
    } else {
        var_v0_2 = temp_s0->unk8 + 1;
    }
    temp_s0->unkC = sp30[var_v0_2][0];
    temp_s0->unkE = sp30[var_v0_2][1];
    temp_s0->unk90 = sp30[var_v0_2][2];
    temp_s0->unk92 = sp30[var_v0_2][3];
    return temp_v0;
}

void func_8003C328(struct object * arg0) {
    struct unk_data_124 * temp_s0;

    temp_s0 = arg0->data;
    RemoveObject(temp_s0->unk4);
    temp_s0->unk4 = 0;
    RemoveObject(temp_s0->unk8);
    temp_s0->unk8 = 0;
}

void func_8003C368(struct object * arg0) {
    s16 i;
    struct unk_data_125 * temp_s3;
    struct unk_data_124 * temp_s1;
    struct unk_data_115 * temp_s4;
    RECT* temp_v1;

    temp_s1 = arg0->data;
    temp_s4 = temp_s1->unk4->data;
    temp_s3 = &DungeonMap->unk8A8[temp_s1->buffer];
    if (func_80066A00(temp_s1->unk4)) {
        func_80021DBC(MarkerDescriptions[temp_s4->marker], (temp_s1->x1 + 5), (temp_s1->y1 + 8), 5, 0, 0, (temp_s1->unk18 - 2));
        func_80021DBC(MarkerDescriptions[temp_s4->marker + 5], (temp_s1->x1 + 5), (temp_s1->y1 + 0x18), 5, 0, 0, (temp_s1->unk18 - 2));
        for (i = 0; i < 5; i++) {
            temp_v1 = &DungeonMap->unk960[i];
            AddSprt8((temp_s1->x0 + temp_v1->x), (temp_s1->y0 + temp_v1->y), temp_v1->w, temp_v1->h, 0x80808080, temp_s1->unk0, temp_s1->unk18 - 5, &temp_s3->s[i]);
        }
        AddDrawMode(0, 1, 0xBC, 0, temp_s1->unk18 - 5, &temp_s3->d);
        for (i = 0; i < 5; i++) {
            DungeonMap->marker_selection[i] = 2;
        }
        DungeonMap->marker_selection[temp_s4->marker] = 0;
        temp_s1->buffer ^= 1;
    }
}

struct object * func_8003C5B0(s16 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    s16 i;
    struct unk_data_115 * temp_a1;
    struct unk_data_124 * temp_s1;
    struct object * temp_v0;
    struct object * temp_v0_2;
    struct object * temp_v0_4;

    temp_v0 = CreateObject(func_8003C368, func_8003C328, FirstObjectPtrPtr->first, arg4, 0, sizeof(struct unk_data_124));
    if (temp_v0 == NULL) return NULL;
    bzero(temp_v0->data, sizeof(struct unk_data_124));
    temp_s1 = temp_v0->data;
    temp_s1->x0 = arg0;
    temp_s1->y0 = arg1;
    temp_s1->x1 = arg2;
    temp_s1->y1 = arg3;
    temp_s1->unk1C = arg4;
    temp_s1->unk18 = arg5;
    temp_s1->unk0 = 0x7980;
    temp_s1->unk4 = func_80065F38(4, temp_s1->x0, temp_s1->y0, 0x5A, 5, 0, &MarkerNames, 5, temp_s1->unk18, temp_s1->unk1C, 0, 0, 1);
    temp_a1 = temp_s1->unk4->data;
    temp_a1->unk2E = 1;
    temp_a1->unk40 = 0;
    temp_a1->marker = 0;
    temp_a1->unk34 = 1;
    for (i = 0; i < 5; i++) {
        DungeonMap->marker_selection[i] = 2;
    }
    DungeonMap->marker_selection[temp_a1->selected_marker] = 0;
    temp_a1->marker_selection_ptr = &DungeonMap->marker_selection;
    temp_s1->unk8 = func_80065F38(4, temp_s1->x1, temp_s1->y1, 0x82, 2, 0, &D_800A2950, 2, temp_s1->unk18, temp_s1->unk1C - 1, 0, 0, 1);
    temp_a1 = temp_s1->unk8->data;
    temp_a1->unk2E = 1;
    temp_a1->unk40 = 0;
    temp_a1->unk42 = 0;
    temp_a1->unk2A = 1;
    for (i = 0; i < 5; i++) {
        DungeonMap->unk960[i].w = D_80010BFC[i][0];
        DungeonMap->unk960[i].h = D_80010BFC[i][1];
        DungeonMap->unk960[i].x = 8;
        DungeonMap->unk960[i].y = ((i * 0xE) + 8);
    }
    return temp_v0;
}

void MapMarkerReticleProc(struct object * self) {
    LINE_F2 * l[2];
    s16 i;
    struct map_marker_reticle * dat;

    dat = self->data;
    if (dat->active == 1) {
        l[0] = &dat->vert[dat->buffer];
        l[1] = &dat->horz[dat->buffer];
        l[0]->x0 = (DungeonMap->unk13A0 + (dat->x - 0xA0));
        l[0]->y0 = -0x46;
        l[0]->x1 = (DungeonMap->unk13A0 + (dat->x - 0xA0));
        l[0]->y1 = 0xB4;
        l[1]->x0 = -0xA0;
        l[1]->y0 = (DungeonMap->unk13A2 + (dat->y - 0x46));
        l[1]->x1 = 0xA0;
        l[1]->y1 = (DungeonMap->unk13A2 + (dat->y - 0x46));
        for (i = 0; i < 2; i++) {
            l[i]->r0 = dat->r;
            l[i]->g0 = dat->g;
            l[i]->b0 = dat->b;
            AddPrim(&OrderingTable[dat->ot_index], l[i]);
        }
        dat->buffer ^= 1;
    }
}

struct object * CreateMapMarkerReticle(s16 x, s16 y, s32 priority, s32 ot_index) {
    s16 i;
    struct map_marker_reticle * dat;
    struct object * obj;

    obj = CreateObject(MapMarkerReticleProc, NULL, FirstObjectPtrPtr->first, priority, 0, sizeof(struct map_marker_reticle));
    dat = obj->data;
    dat->buffer = 0;
    for (i = 0; i < 2; i++) {
        SetLineF2(&dat->vert[i]);
        SetLineF2(&dat->horz[i]);
    }
    dat->x = x;
    dat->y = y;
    dat->r = 0x25;
    dat->g = 0x50;
    dat->ot_index = ot_index;
    dat->b = 0x70;
    dat->active = 0;
    return obj;
}

void func_8003CA8C(struct object * arg0) {
    struct unk_data_127 * temp_s0;

    temp_s0 = arg0->data;
    RemoveObject(temp_s0->unk0);
    temp_s0->unk0 = 0;
}


void func_8003CAC0(struct object * arg0) {
    struct unk_data_127 * temp_a0;
    struct unk_data_110 * temp_a1;

    temp_a0 = arg0->data;
    temp_a1 = temp_a0->unk0->data;
    if (temp_a0->unk10 == 0) {
        func_80021DBC(temp_a0->unkC, temp_a0->unk4 + 5, (temp_a0->unk6 + 3), 5, 0, 0, temp_a0->unk12 - 1);
    } else {
        if (temp_a0->unk4 < temp_a1->unk258) {
            temp_a1->unk258 -= 0x1E;
            if (temp_a1->unk258 < 0x3C) {
                temp_a0->unk18 -= 0x46;
            }
            if (temp_a1->unk258 < temp_a0->unk4) {
                temp_a1->unk258 = temp_a0->unk4;
            }
        }
        if (temp_a1->unk258 == temp_a0->unk4) {
            if (temp_a0->unk18 >= 3) {
                temp_a0->unk18 -= 0x46;
                if (temp_a0->unk18 < 2) {
                    temp_a0->unk18 = 2;
                }
            }
        }
        func_80021DBC(temp_a0->unkC, temp_a0->unk18 + (temp_a1->unk258 + 8), (temp_a0->unk6 + 3), 5, 0, 0, temp_a0->unk12 - 1);
    }
}

struct object * func_8003CC24(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u16 * arg4, s32 arg5, s32 arg6, s32 arg7) {
    struct unk_data_127 * temp_fp;
    struct object * temp_v0;

    temp_v0 = CreateObject(func_8003CAC0, func_8003CA8C, FirstObjectPtrPtr->first, arg6, 0, sizeof(struct unk_data_127));
    temp_fp = temp_v0->data;
    temp_fp->unk4 = arg0;
    temp_fp->unk6 = arg1;
    temp_fp->unk8 = arg2;
    temp_fp->unkA = arg3;
    temp_fp->unk10 = arg5;
    temp_fp->unk14 = arg6;
    temp_fp->unk12 = arg7;
    temp_fp->unkC = arg4;
    temp_fp->unk18 = 0x352;
    if (temp_fp->unk10 == 0) {
        temp_fp->unk0 = func_80068510(temp_fp->unk4, temp_fp->unk6, temp_fp->unk8, temp_fp->unkA, 2, -1, temp_fp->unk14 + 1, temp_fp->unk12);
    } else {
        temp_fp->unk0 = func_80068510(0x140, temp_fp->unk6, temp_fp->unk8, temp_fp->unkA, 2, -1, temp_fp->unk14 + 1, temp_fp->unk12);
    }
    return temp_v0;
}


void func_8003CD8C(void) {
    if (func_80018F14(0, 0xF)) {
        func_8003FFE4(4);
        func_8003B10C(0);
    }
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003CDC8);

/* Pack the map marker data from the provided index into a 16 bit word and return it. */
u16 PackMapMarker(s16 i) {
    u16 temp_a1 = DungeonMap->markers[i][1] << 7;
    u16 temp_a0 = DungeonMap->markers[i][2] << 13;
    u16 temp_v0 = DungeonMap->markers[i][0];
    temp_v0 |= temp_a1;
    return temp_v0 | temp_a0;
}


void UnpackMapMarker(u16 marker, s16 i) {
    DungeonMap->markers[i][0] = (marker & 0x7F);
    DungeonMap->markers[i][1] = ((marker & 0x1F80) >> 7);
    DungeonMap->markers[i][2] = ((marker & 0xE000) >> 0xD);
}


void func_8003CFAC(void) {
    s16 var_s2;
    
    for (var_s2 = 0; var_s2 < 8; var_s2++) {
        if (DungeonMap->markers[var_s2][2] == 0) {
            DungeonMap->unk137C[var_s2] = DungeonMapMarkerLocationNames[133];
        } else {
            DungeonMap->unk137C[var_s2] = DungeonMapMarkerLocationNames[func_8002DADC(func_800149F0(1), DungeonMap->markers[var_s2][0], DungeonMap->markers[var_s2][1])];
        }
    }
}


void func_8003D084(s16 arg0) {
    RemoveObject(DungeonMap->unk1C);
    DungeonMap->unk1C = 0;
    switch (arg0) {
    case 0:
        DungeonMap->unk1C = func_80065EA0(5, 0x11, 0x99, 0x11E, 4, 0, &DungeonMap->unk137C, 1, 32, 0xB00000, 0xFF0000, 0x222222, 0xFFFFFFFF);
        break;
    case 1:
        func_8003CFAC();
        DungeonMap->unk1C = func_80065EA0(5, 0x11, 0x99, 0x11E, 4, 0, &DungeonMap->unk137C, 8, 22, 0xB00000, 0xFF0000, 0x222222, 0xFFFFFFFF);
        break;
    }
    ((s16*)DungeonMap->unk1C->data)[32] = 0;
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003D1C8);

void func_8003D36C(struct unk_data_113 * arg0) {
    s32* temp_a0;

    temp_a0 = arg0->unk18->data;
    if (arg0->unkC28 == 0) {
        arg0->unkC28 = 1;
        temp_a0[3] = D_800A28D0[3];
        if ((arg0->unkC0E == 3) && (arg0->unkC10 == 6) && (arg0->unk13A4 == 0xA0003)) {
            temp_a0[3] = D_800A28D0[4];
        }
    }
    if ((func_80018F14(0, 0xE) != 0) || (func_80018F14(0, 0xD) != 0)) {
        arg0->unkC28 = 0;
        func_8003FFE4(3);
        arg0->unkC24 = 2;
    }
    func_8003CD8C();
}


void func_8003D434(void) {
    s16 temp_a1;

    temp_a1 = D_800B743C->unk1620;
    D_800B743C->unk1627[D_800B743C->unk1620][2] = ((s16 *)((struct unk_data_124 *)D_800B743C->unk24->data)->unk4->data)[19] + 1;
    D_800B743C->unk1627[D_800B743C->unk1620][0] = D_800B743C->unk13A4;
    D_800B743C->unk1627[D_800B743C->unk1620][1] = D_800B743C->unk13A6;
    func_8004F2E8(D_800B743C->unk1620, func_8003CF24(D_800B743C->unk1620, temp_a1));
}

void func_8003D4F0(struct unk_data_113 * arg0) {
    struct unk_data_127 * temp_a1 = arg0->unk18->data;
    if (arg0->unkC28 == 0) {
        arg0->unkC28 = 1;
        temp_a1->unkC = D_800A28D0[1];
        arg0->unk4 &= 0xDF;
        arg0->unk24 = func_8003C5B0(0x28, 0x28, 0xAA, 0x19, 0xB00001, 0x19);
    }
    if (func_80018F14(0, 0xE)) {
        arg0->unkC28 = 0;
        func_8003FFE4(3);
        arg0->unkC24 = 1;
        arg0->unk4 |= 0x20;
        RemoveObject(arg0->unk24);
        arg0->unk24 = 0;
        func_8003CD8C();
    } else if (func_80018F14(0, 0xD)) {
        arg0->unkC28 = 0;
        func_8003FFE4(2);
        func_8003D434();
        arg0->unk4 |= 0x20;
        RemoveObject(arg0->unk24);
        arg0->unk24 = 0;
        func_8003B10C(0);
    } else {
        func_8003CD8C();
    }
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003D604);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003D658);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003D844);

void func_8003DB00(struct unk_data_113 * arg0) {
    struct unk_data_126 * temp_a0;
    struct unk_data_127 * temp_a1;
    struct unk_data_115 * temp_a2;

    temp_a1 = arg0->unk18->data;
    if (arg0->unkC28 == 0) {
        arg0->unkC28 = 1;
        func_8003D084(1);
        temp_a2 = arg0->unk1C->data;
        temp_a2->unk2A = 1;
        temp_a2->unk2E = 1;
        temp_a1->unkC = D_800A1744[arg0->unk161A];
        temp_a0 = arg0->unk20->data;
        temp_a0->unk4C = 0;
    }
    if (func_80018F14(0, 0xD)) {
        arg0->unkC28 = 0;
        func_8003FFE4(2);
        temp_a2 = arg0->unk1C->data;
        arg0->unk1620 = temp_a2->unk26;
        if (arg0->unk137C[arg0->unk1620] == D_800A1744[133]) {
            arg0->unkC24 = 2;
            func_8003CD8C();
        } else {
            func_8003B10C(1);
        }
    } else if (func_80018F14(0, 0xE)) {
        arg0->unkC28 = 0;
        func_8003FFE4(3);
        arg0->unkC24 = 0;
        func_8003CD8C();
    } else {
        func_8003CD8C();
    }
}

void func_8003DC34(s32 arg0) {
    struct unk_data_122* temp_a1;

    temp_a1 = D_800B743C->unk14->data;
    D_800B743C->unk139C += arg0;
    temp_a1->unkE += arg0;
    temp_a1->unk92 += arg0;
}


void func_8003DC6C(struct unk_data_113 * arg0) {
    s16 var_s2 = 0;
    struct unk_data_127 * temp_s0;

    ((struct unk_data_126 *)arg0->unk20->data)->unk4C = 0;
    if (arg0->unkC28 == 0) {
        temp_s0 = arg0->unk18->data;
        arg0->unkC28 = 1;
        func_8003D084(0);
        temp_s0->unkC = D_800A1744[arg0->unk161A];
        arg0->unk139E = 0;
    }
    if (arg0->unk139E == 0) {
        if (func_80018F14(0, 0xD) != 0) {
            arg0->unkC28 = 0;
            func_8003FFE4(2);
            arg0->unkC24 = 1;
        } else if (func_80018F14(0, 0xE) || func_80018F14(0, 0xF)) {
            func_8003FFE4(3);
            arg0->unk4 |= 1;
        } else if (func_80018EE8(0, 6)) {
            if (arg0->unk139C >= -0x9F) {
                arg0->unk139E = -2;
            } else {
                arg0->unk139C = -0xA0;
            }
        } else if (func_80018EE8(0, 4)) {
            if (arg0->unk139C < 0x3C) {
                arg0->unk139E = 2;
            } else {
                arg0->unk139C = 0x3C;
            }
        }
    } else {
        if (arg0->unk139E < 0) {
            arg0->unk139E += 2;
            var_s2 = -0xA;
        } else if (arg0->unk139E > 0) {
            arg0->unk139E -= 2;
            var_s2 = 0xA;
        }
        func_8003DC34(var_s2);
    }
}

void func_8003DE14(struct object * arg0) {
    s16 temp_v1;
    struct unk_data_113 * temp_a0;

    temp_a0 = arg0->data;
    if (temp_a0->unk4 & 8) {
        switch (temp_a0->unkC24) {
        case 0:
            func_8003DC6C(temp_a0);
            return;
        case 1:
            func_8003DB00(temp_a0);
            return;
        case 2:
            func_8003D844(temp_a0);
            return;
        case 3:
            func_8003D4F0(temp_a0);
            return;
        case 4:
            func_8003D36C(temp_a0);
            return;
        default:
            temp_a0->unk4 |= 1;
            return;
        case 7:
            func_8003D1C8(temp_a0);
        }
    } else {
        func_8003D1C8(temp_a0);
    }
}


void func_8003DEE4(void) {
    DVECTOR sp10;
    s16 var_s2;

    for (var_s2 = 0; var_s2 < 8; var_s2++) {
        if (D_800B743C->unk161A == func_8002DADC(func_800149F0(1), D_800B743C->unk1627[var_s2][0], D_800B743C->unk1627[var_s2][1])) {
            if (D_800B743C->unk1627[var_s2][2] != 0) {
                D_800B743C->unk71C[D_800B743C->unk75E].w = D_80010BFC[D_800B743C->unk1627[var_s2][2] - 1][0];
                D_800B743C->unk71C[D_800B743C->unk75E].h = D_80010BFC[D_800B743C->unk1627[var_s2][2] - 1][1];
                sp10.vx = D_800B743C->unk1627[var_s2][0];
                sp10.vy = D_800B743C->unk1627[var_s2][1];
                func_8003CDC8(&sp10);
                D_800B743C->unk71C[D_800B743C->unk75E].x = ((sp10.vx * 0xA) + 0xA1);
                D_800B743C->unk71C[D_800B743C->unk75E].y = ((sp10.vy * 0xA) + 0x94);
                D_800B743C->unk75E += 1;
            }
        }
    }
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003E05C);

void func_8003E168(void) {
    SVECTOR sp10;
    SVECTOR sp18;
    s16 var_s2 = 0;
    s16 temp_v1;

    for (sp10.vy = 0; sp10.vy < 25; sp10.vy++) {
        for (sp10.vx = 0; sp10.vx < 25; sp10.vx++) {
            if (D_800B743C->unk99C[sp10.vx + (sp10.vy * 25)] == 0) {
                switch (D_800B743C->unk13A8[sp10.vx + (sp10.vy * 25)]) {
                case 13:
                case 14:
                    temp_v1 = func_8003E05C(&sp10, &D_800B743C->unkC14);
                    if (temp_v1 == -1) {
                        temp_v1 = 0x64;
                    }
                    break;
                case 8:
                    temp_v1 = 7;
                    break;
                case 9:
                    temp_v1 = 8;
                    break;
                case 7:
                    temp_v1 = 9;
                    break;
                case 12:
                    temp_v1 = 0xA;
                    break;
                default:
                    temp_v1 = 0x64;
                    break;
                }
                if (temp_v1 != 0x64) {
                    D_800B743C->unk604[var_s2].w = D_80010C10[temp_v1][0];
                    D_800B743C->unk604[var_s2].h = D_80010C10[temp_v1][1];
                    sp18.vx = (sp10.vx + D_800B743C->unkC14) - 0xC;
                    sp18.vy = (sp10.vy + D_800B743C->unkC16) - 0xC;
                    if (D_800B743C->unk161A == func_8002DADC(func_800149F0(1), sp18.vx, sp18.vy)) {
                        func_8003CDC8(&sp18);
                        D_800B743C->unk604[var_s2].x = ((sp18.vx * 0xA) + 0xA1);
                        D_800B743C->unk604[var_s2].y = ((sp18.vy * 0xA) + 0x94);
                        var_s2 += 1;
                    }
                }
            }
        }
    }
    D_800B743C->unk75C = var_s2;
}

void func_8003E3A0(void) {
    s16 var_s0 = 0;

    ((s32 *)D_800B743C->unk10->data)[0x1D9] = 0x21;
    func_8003CDC8(&D_800B743C->unkC18);
    if (D_800B743C->unk4 & 8) {
        if (!(D_800B743C->unk4 & 0x10)) {
            var_s0 = DungeonData->cardinal_dir >> 10;
        }
        D_800B743C->unk6C.w = 0x20;
        D_800B743C->unk6C.h = (var_s0 * 8) + 0xE0;
        D_800B743C->unk6C.x = ((D_800B743C->unkC18 * 0xA) + 0xA1);
        D_800B743C->unk6C.y = ((D_800B743C->unkC1A * 0xA) + 0x94);
    }
    D_800B743C->unk4 &= 0xFD;
    func_8003E168();
    func_8003DEE4();
    D_800B743C->unk14 = func_8003C0E4(((D_800B743C->unkC1C * 0xA) + 0x28), ((D_800B743C->unkC1E * 0xA) + 0x1A), D_800B743C->unkC0D, 0xB00000, 0x1E);
    D_800B743C->unk20 = func_8003C990(0xA5, 0x51, 0xB00000, 0x1D);
    D_800B743C->unk2C = func_8003BA3C(0x104, 0x1E, 0xB00000, 0x19);
    if (D_800B743C->unkC1A + 7 > 0) {
        for (var_s0 = D_800B743C->unkC1A + 7; var_s0 > 0; var_s0--) {
            if (D_800B743C->unk139C >= -0x9F) {
                func_8003DC34(-0xA);
            } else {
                D_800B743C->unk139C = -0xA0;
            }
        }
    }
    D_800B743C->unk4 |= 2;
    D_800B743C->unk0->proc_func = &func_8003DE14;
}


// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003E5B4);

void func_8003EB00(void) {
    DVECTOR sp10;

    for (sp10.vy = 0; sp10.vy < 25; sp10.vy++) {
        for (sp10.vx = 0; sp10.vx < 25; sp10.vx++) {
            if (D_800B743C->unk99C[sp10.vx + (sp10.vy * 25)] == 1) {
                func_8003E5B4(&sp10);
            }
        }
    }
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003EBB0);

void func_8003ED10(void) {
    u32* temp_v0;

    if (func_80019ECC(D_800B743C->unk8) != 0) {
        SetSpadStack(0x1F8003FC);
        func_8003EBB0();
        ResetSpadStack();
        SetSpadStack(0x1F8003FC);
        func_8003EB00();
        ResetSpadStack();
        temp_v0 = D_800B743C->unkC;
        func_80018FF0(&temp_v0[temp_v0[1] / 4]);
        func_80019478(D_800B743C->unkC);
        D_800B743C->unkC = 0;
        D_800B743C->unk0->proc_func = &func_8003E3A0;
    }
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003EDE0);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dgraph", func_8003EED8);

void func_8003F000(void) {
    D_800B743C->unk161A = func_8002DADC(func_800149F0(1), D_800B743C->unkC0E, D_800B743C->unkC10);
    D_800B743C->unkC14 = D_800A0CDC[D_800B743C->unk161A][0];
    D_800B743C->unkC16 = D_800A0CDC[D_800B743C->unk161A][1];
    func_8003EED8();
    D_800B743C->unk0->proc_func = &func_8003EDE0;
}

struct object * func_8003F08C(void) {
    struct object * temp_v0;
    struct unk_data_113 * temp_v0_2;
    s32 temp_v0_4;
    s8 var_v0_2;
    u16 temp_v0_3;
    s16 temp_v1;

    temp_v0 = CreateObject(0, &func_8003B044, *FirstObjectPtrPtr, 0xB00000, 0, 0x1640);
    if (temp_v0 == 0) return 0;
    bzero(temp_v0->data, 0x1640);
    D_800B743C = temp_v0->data;
    D_800B743C->unk0 = temp_v0;
    func_8003FFE4(0x13);
    if (func_8004F74C() == 0) {
        D_800B743C->unk4 &= 0xEF;
    } else {
        D_800B743C->unk4 |= 0x10;
    }
    D_800B743C->unk4 |= 8;
    D_800B743C->unkC0E = D_800B743C->unkC18 = DungeonData->grid_x;
    D_800B743C->unkC10 = D_800B743C->unkC1A = DungeonData->grid_z;
    if (D_800B743C->unk4 & 0x10) {
        temp_v0_4 = DungeonData->cardinal_dir >> 10;
        D_800B743C->unkC12 = D_800B743C->unkC0D = temp_v0_4;
    } else {
        D_800B743C->unkC12 = 0;
    }
    D_800B743C->unk10 = func_8002864C(0x10, 0x10, 0x120, 0x78, 0xB00000, 0x1A);
    D_800B743C->unk18 = func_8003CC24(0x18, 0x88, 0x110, 0x11, 0, 0, 0xB00000, 4);
    D_800B743C->unk30 = func_8003B6DC(0x34, 0x2F, 0xB00000, 4);
    D_800B743C->unk0->proc_func = &func_8003F000;
    return temp_v0;
}

struct object * func_8003F244(void) {
    struct object * temp_v0 = func_8003F08C();
    D_800B743C->unk4 |= 4;
    return temp_v0;
}

void func_8003F27C(void) {
    func_800225C8(1, 1, 1, 1, 2);
    func_8003F08C();
}