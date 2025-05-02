#include "field.h"

/* 96.33% */
void func_800151DC(struct return_thing * arg0) {
    struct object* temp_v0;
    struct field_map_data * temp_v0_2;

    if (D_800B6C68 == 0) {
        D_800B6C68 = 1;
        temp_v0 = func_800180DC(0, FieldMapKill, FirstObjectPtrPtr->first, 0x40000, 0, 0x8534);
        if (temp_v0 != 0) {
            bzero(temp_v0->data, 0x8534);
            temp_v0_2 = temp_v0->data;
            temp_v0_2->origin = temp_v0;
            temp_v0->initialized = 1;
            FieldMapData = temp_v0_2;
            temp_v0_2->event = 0;
            func_80017258(arg0);
            FieldMapData->flags = 0;
            ((struct object *)FieldMapData->origin)->proc_func = func_800152D0;
        } else {
            return;
        }
    } else {
        FieldMapData->event = 4;
        func_80017258(arg0);
        ((struct object *)FieldMapData->origin)->proc_func = func_800152D0;
    }
    D_800B6C6C = -1;
}


void func_800152D0(struct object* arg0) {
    unsigned short sp10[4];
    unsigned short sp18[4];
    void * var_a0;

    switch ((short)FieldMapData->event) {
    case 0:
        func_8004ECCC(0);
        EncounterBarProc();
        if (D_800B74F0.unk0 == 0) {
            func_800179AC();
        }
        D_800B74F0.unk0 = 0;
        FieldMapData->event = 1;
        return;
    case 1:
        if (func_80019ECC(D_800B74F0.data_struct_ids) != 0) {
            FieldMapData->event = 2;
            return;
        }
    default:
        return;
    case 2:
        func_80044FA0(&D_800B74F0.dat0[D_800B74F0.dat0[1] / 4],
            &D_800B74F0.dat0[D_800B74F0.dat0[2] / 4], 
            &D_800B74F0.dat0[D_800B74F0.dat0[3] / 4], D_800B74F0.dat2, D_800B74F0.dat3);
        if (func_8004ED78() == 0) {
            var_a0 = D_800B74F0.dat2;
        } else {
            var_a0 = D_800B74F0.dat1;
        }
        
        sp10[0] = 0x140;
        sp10[1] = 0;
        sp10[2] = 0x100;
        sp10[3] = 0x100;
        sp18[0] = 0;
        sp18[1] = 0x1F4;
        sp18[2] = 0xE0;
        sp18[3] = 1;
        func_800190BC(var_a0, &sp10, &sp18, 4);
        if (func_8004ED78() != 0) {
            sp10[0] += 0x40;
            func_800190BC(D_800B74F0.dat2, &sp10, &sp18, 4);
            func_80019478(D_800B74F0.dat1);
            D_800B74F0.dat1 = 0;
            if (func_8004C06C(0x57) == 0) {
                func_80018FF0(&D_800B74F0.dat4[D_800B74F0.dat4[1] / 4]);
                func_80019478(D_800B74F0.dat4);
                D_800B74F0.dat4 = 0;
            }
        }
        func_80019478(D_800B74F0.dat2);
        D_800B74F0.dat2 = 0;
        func_80019478(D_800B74F0.dat3);
        D_800B74F0.dat3 = 0;
        FieldMapData->flags |= 1;
        FieldMapData->event = 4;
        return;
    case 3:
        if (func_8001771C() != 0) {
            FieldMapData->event = 4;
            return;
        }
        break;
    case 4:
        if (func_8004ED78() != 0) {
            func_80016EB0();
        }
        func_80018F6C(0, 1);
        func_80045FF8(FieldMapData->pos.x, FieldMapData->pos.y, FieldMapData->pos.movement_dir);
        FieldMapData->unk8528 = func_80045588(FieldMapData->pos.x, FieldMapData->pos.y);
        if (func_800148D4() != 0) {
            func_80024484(3);
            FieldMapData->event = 4;
            FieldMapData->unk84F0 = FieldMapProc;
            arg0->proc_func = FieldMapSleepEvent;
        } else {
            func_800225C8(2, 3, 3, 2, 2);
            func_80025308(0);
            func_8001F668();
            FieldMapData->event = 5;
            return;
        }
        break;
    case 5:
        {
            /* int* scratchpad = (int*)0x1f8003FC;
            asm(";"
                "move    $t0, %0;"
                "sw      $sp, 0($t0);"
                "addiu   $t0, $t0, -0x18;"
                "move    $sp, $t0;"
                :
                : "r"(scratchpad)
                : "t0", "memory"
            ); */
            UpdateField();
            /* asm(";"
                "addiu   $sp, $sp, 0x18;"
                "lw      $sp, 0($sp);"
                : :
                : "memory"
            ); */
        }
        if (func_8001F920() == 2) {
            func_80024484(0);
            FieldMapData->event = 6;
            return;
        }
        break;
    case 6:
        {
            /* int* scratchpad = (int*)0x1f8003FC;
            asm(";"
                "move    $t0, %0;"
                "sw      $sp, 0($t0);"
                "addiu   $t0, $t0, -0x18;"
                "move    $sp, $t0;"
                :
                : "r"(scratchpad)
                : "t0", "memory"
            ); */
            UpdateField();
            /* asm(";"
                "addiu   $sp, $sp, 0x18;"
                "lw      $sp, 0($sp);"
                : :
                : "memory"
            ); */
        }
        if ((func_800245B4() == 2) && (func_80040A68(0) == 0)) {
            FieldMapData->unk84F4 = 0;
            FieldMapData->random_encounter = 0;
            FieldMapData->event = 0;
            arg0->proc_func = FieldMapProc;
        }
        break;
    }
}

/* Matched by Mc-muffin */
void FieldMapProc(struct object * arg0) {
    if (FieldMapData->pos.motion_countdown == -1) {
        if (func_80016504() == 0) {
            FieldMovement();
        }
    } else {
        ExecuteFieldMovement();
    }

    {
        /* int* scratchpad = (int*)0x1f8003FC;
        asm(";"
            "move    $t0, %0;"
            "sw      $sp, 0($t0);"
            "addiu   $t0, $t0, -0x18;"
            "move    $sp, $t0;"
            :
            : "r"(scratchpad)
            : "t0", "memory"
        ); */
        UpdateField();
        /* asm(";"
            "addiu   $sp, $sp, 0x18;"
            "lw      $sp, 0($sp);"
            : :
            : "memory"
        ); */
    }

    FntPrint("MAPX=%3d : MAPY=%3d\n", FieldMapData->x_scroll, FieldMapData->y_scroll);
    FntPrint("ABSX=%3d : ABSY=%3d\n", FieldMapData->pos.x, FieldMapData->pos.y);
    FntPrint("SYMX=%3d : SYMY=%3d\n", (FieldMapData->pos.character_x_offset - 0x90) / 0x10, (FieldMapData->pos.character_y_offset - 0x68) / 0x10);
    FntPrint("\n\n\n\n\n\n  __FieldMapProc");
}

void FieldMapKill(struct object * arg0) {
    FntPrint("\n\n\n\n\n\n  __FieldMapKill");
    if (D_800B6C68 != 0) {
        func_80019478(((unsigned int *)D_800B74F0.dat0)[2]);
        ((unsigned int *)D_800B74F0.dat0)[2] = 0;
        func_8001830C(FieldMapData->unk8524);
        FieldMapData->unk8524 = 0;
        func_8004505C();
        D_800B6C68 = 0;
    }
}

void func_800158A0(struct object * arg0) {
    FieldMapData->unk1C = 0;
    func_800441F0(1, &FieldMapData->next);
    func_8001830C(FieldMapData->origin);
    FieldMapData->origin = 0;
}

void FieldMapClose1(struct object * arg0) {
    FntPrint("\n\n\n\n\n\n  __FieldMapClose1");
    if (D_800B6C68 != 0) {
        /* int* scratchpad = (int*)0x1f8003FC;
        asm(";"
            "move    $t0, %0;"
            "sw      $sp, 0($t0);"
            "addiu   $t0, $t0, -0x18;"
            "move    $sp, $t0;"
            :
            : "r"(scratchpad)
            : "t0", "memory"
        ); */
        UpdateField();
        /* asm(";"
            "addiu   $sp, $sp, 0x18;"
            "lw      $sp, 0($sp);"
            : :
            : "memory"
        ); */
            
        if ((FieldMapData->unk84F4 & 0xF) == 9) {
            if (func_800245B4() != 1) {
                return;
            }
            func_8001F6B8();
            FieldMapData->unk84F4 = 0;
        } 
            
        if (func_8001F920() == 2) {
            arg0->proc_func = func_800158A0;
        }
    }
}

void FieldMapSleepEvent(struct object * arg0) {
    int var_a0;
    int var_a1;

    switch (FieldMapData->event) {
    case 0:
        func_80024484(1);
        FieldMapData->event = 1;
        break;
    case 1:
        if (func_800245B4() == 1) {
            func_8001F6B8();
            FieldMapData->event = 2;
        }
        break;
    case 2:
        if (func_8001F920() == 2) {
            func_80024484(1);
            FieldMapData->event = 3;
        }
        break;
    case 3:
        if (func_8004C06C(0xF9) != 0) {
            var_a0 = 1;
            var_a1 = 0x1F;
        } else {
            var_a0 = FieldMapData->unk18;
            var_a1 = FieldMapData->unk20;
        }
        func_8001489C(var_a0, var_a1, 1);
    case 4:
        FieldMapData->event = 5;
        break;
    case 5:
        if (func_800148D4() == 0) {
            FieldMapData->event = 6;
            break;
        }
        return;
    case 6:
        func_8001F668();
        FieldMapData->event = 7;
        break;
    case 7:
        if (func_8001F920() == 2) {
            func_80024484(0);
            ((struct object *)FieldMapData->origin)->proc_func = FieldMapData->unk84F0;
        }
        break;
    }
    {
    /* int* scratchpad = (int*)0x1f8003FC;
    asm(";"
        "move    $t0, %0;"
        "sw      $sp, 0($t0);"
        "addiu   $t0, $t0, -0x18;"
        "move    $sp, $t0;"
        :
        : "r"(scratchpad)
        : "t0", "memory"
    ); */
    UpdateField();
    /* asm(";"
        "addiu   $sp, $sp, 0x18;"
        "lw      $sp, 0($sp);"
        : :
        : "memory"
    ); */
    }
    FntPrint("\n\n\n\n\n\n  __FieldMapSleep_Event");
}

void FieldMapSleep(struct object * arg0) {
    if ((FieldMapData->flags & 0x10) > 0) {
        {
        /* int* scratchpad = (int*)0x1f8003FC;
            asm(";"
                "move    $t0, %0;"
                "sw      $sp, 0($t0);"
                "addiu   $t0, $t0, -0x18;"
                "move    $sp, $t0;"
                :
                : "r"(scratchpad)
                : "t0", "memory"
            ); */
            UpdateField();
            /* asm(";"
                "addiu   $sp, $sp, 0x18;"
                "lw      $sp, 0($sp);"
                : :
                : "memory"
            ); */
        }
    }
    FntPrint("\n\n\n\n\n\n  __FieldMapSleep");
}

typedef struct something {
    DVECTOR sp10;
    int pad1;
    DVECTOR sp14;
    int pad2;
    short sp20;
    short sp22;
    int pad4;
    DVECTOR sp30;
    int pad3;
    struct field_map_graphics_container* sp40;
    int sp44;
} something;

void UpdateField(void) {
    struct something stack;
    int var_s4;
    int var_s5;
    short temp_v0;
    short temp_v0_4;
    short temp_v0_7;
    short var_a1;
    short var_a1_2;
    short x;
    short y;
    short i;
    unsigned int temp_a3;
    unsigned int temp_a3_2;
    int var_a2;
    int var_2;
    int var_1;
    struct field_pos* temp_a0;
    SPRT_16* temp_s0_2;
    struct field_map_graphics* temp_s7;
    struct field_map_graphics_container* temp_t1;

    temp_v0 = func_8004ED78();
    temp_t1 = &FieldMapData->g;
    stack.sp40 = &FieldMapData->g;
    temp_s7 = &temp_t1->g[temp_t1->buffer];
    stack.sp44 = 0;
    stack.sp14.vy = 0;
    stack.sp14.vx = 0;
    stack.sp10.vy = 0;
    stack.sp10.vx = 0;
    temp_a0 = &FieldMapData->pos;
    if (temp_a0->motion_countdown != -1) {
        if (temp_a0->speed_modifier == 2) {
            var_a2 = 4;
        } else {
            var_a2 = 8;
        }
        if ((FieldMapData->pos.screen_edge_flags & 3) > 0) {
            stack.sp14.vx = temp_a0->x_motion * (var_a2 - temp_a0->motion_countdown);
        } else {
            stack.sp10.vx = temp_a0->x_motion * (var_a2 - temp_a0->motion_countdown);
        }
        if ((FieldMapData->pos.screen_edge_flags & 0xC) > 0) {
            stack.sp14.vy = temp_a0->y_motion * (var_a2 - temp_a0->motion_countdown);
        } else {
            stack.sp10.vy = temp_a0->y_motion * (var_a2 - temp_a0->motion_countdown);
        }
    }
    y = 0;
    x = 0;
    FieldMapData->unk30 = func_80016AF0();
    func_8002457C((FieldMapData->pos.character_x_offset - stack.sp14.vx), (FieldMapData->pos.character_y_offset - stack.sp14.vy), FieldMapData->unk30);
    stack.sp20 = 5;
    stack.sp22 = 6;
    if (temp_v0 == 3) {
        FieldMapData->unk8501 += 1;
        if (FieldMapData->unk8501 == 0xC) {
            FieldMapData->unk8501 = 0;
        }
        for (i = 0; i < 0x12C; i++) {
            var_s5 = 2;
            temp_v0_4 = func_8004534C(FieldMapData->x_scroll + x, FieldMapData->y_scroll + y + 0x80);
            if (temp_v0_4 >= 0x100) {
                var_a1 = temp_v0_4 & 0xFF;
                var_s4 = 6;
                var_s5 = 3;
            } else {
                var_a1 = temp_v0_4;
                var_s4 = 5;
            }
            temp_a3 = (var_a1 / 0x10) * 0x10;
            var_2 = (var_a1 - temp_a3) * 0x10;
            var_1 = func_80016DB8(temp_v0_4, var_s5);
            
            func_8001D644(stack.sp10.vx + (x * 0x10), stack.sp10.vy + (y * 0x10), var_2 & 0xf0, temp_a3 & 0xf0, 0x80808080, var_1, 0x22, &temp_s7->tiles1[i]);
            (&temp_s7->tiles1[i])->code |= 2;
            func_8001D478(0, 1, var_s4, 0, 0x22, &temp_s7->tiles1_dr_modes[i]);
            x += 1;
            if (x >= 0x14) {
                x = 0;
                y += 1;
            }
        }
    }
    x = 0;
    y = 0;
    for (i = 0; i < 0x12C; i++) {
        if (stack.sp44 == 0) {
            if ((FieldMapData->x_scroll + x == 0x2D) || ((FieldMapData->x_scroll + x == 0x35))) {
                if ((FieldMapData->y_scroll + y) != 0x4D) {
                    goto block_27;
                } else {
                    stack.sp30.vx = x;
                    stack.sp30.vy = y;
                    stack.sp44 = func_80016B74(&stack.sp30, &stack.sp10, temp_s7);
                }
            } else {
block_27:
                if ((((FieldMapData->x_scroll + x == 0x2D) && ((FieldMapData->y_scroll + y) == 0x55)) || (FieldMapData->x_scroll + x == 0x35)) && ((FieldMapData->y_scroll + y) == 0x55)) {
                    stack.sp30.vx = x;
                    stack.sp30.vy = y;
                    stack.sp44 = func_80016B74(&stack.sp30, &stack.sp10, temp_s7);
                }
            }
        }
        temp_v0_7 = func_8004534C(FieldMapData->x_scroll + x, FieldMapData->y_scroll + y);
        if (temp_v0_7 >= 0x100) {
            var_a1_2 = temp_v0_7 & 0xFF;
            var_s4 = 6;
        } else {
            var_a1_2 = temp_v0_7;
            var_s4 = 5;
        }
        temp_a3_2 = (var_a1_2 / 0x10) * 0x10;
        var_2 = (var_a1_2 - temp_a3_2) * 0x10;
        var_1 = func_80016DB8(temp_v0_7, 0);
            
        func_8001D644(stack.sp10.vx + (x * 0x10), stack.sp10.vy + (y * 0x10), var_2 & 0xf0, temp_a3_2 & 0xf0, 0x80808080, var_1, 0x22, &temp_s7->tiles0[i]);
        func_8001D478(0, 1, var_s4, 0, 0x22, &temp_s7->tiles0_dr_modes[i]);
        x += 1;
        if (x >= 0x14) {
            x = 0;
            y += 1;
        }
    }
    AddFieldOverlays();
    stack.sp40->buffer ^= 1;
}


/* Matched by MatBourgon and Mc-muffin */
void FieldMovement(void) {
    short sp10[22];
    int temp_v0;
    short var_v0_2;
    int temp_s0;
    int temp_v0_2;
    char * tx;
    char temp_v1;
    char temp_a1;
    char var_v1;
    unsigned char var_v0_3;
    unsigned char var_v0_4;
    int temp_a2;
    struct field_map_data* var_v0;

    FieldMapData->pos.x_motion = 0;
    FieldMapData->pos.y_motion = 0;
    
    if (func_80018EE8(0, 0xE) != 0) {
        FieldMapData->pos.speed_modifier = 2;
    } else {
        FieldMapData->pos.speed_modifier = 1;
    }
    temp_v0_2 = func_8004541C();
    if (temp_v0_2 < 0) {
        return;
    }
    FieldMapData->pos.movement_dir = temp_v0_2;
    temp_v0_2 = func_80045FF8(FieldMapData->pos.x, FieldMapData->pos.y, temp_v0_2);
    if (temp_v0_2 > -1) {
        FieldMapData->pos.x_motion = (-(D_8009E80C[temp_v0_2][0]) * FieldMapData->pos.speed_modifier);
        FieldMapData->pos.y_motion = (-(D_8009E80C[temp_v0_2][1]) * FieldMapData->pos.speed_modifier);
        if (FieldMapData->pos.speed_modifier == 2) {
            FieldMapData->pos.motion_countdown = 3;
        } else {
            FieldMapData->pos.motion_countdown = 7;
        }
        
        func_80016A10(&sp10[0], &sp10[4], &sp10[8]);
        FieldMapData->pos.screen_edge_flags = 0;
        if (sp10[0] <= (D_8009E820[FieldMapData->unk852E][0] + sp10[4])) {
            FieldMapData->pos.screen_edge_flags |= 1;
        } else if (sp10[0] >= (D_8009E820[FieldMapData->unk852E][2] + sp10[8])) {
            FieldMapData->pos.screen_edge_flags |= 2;
        }
        if (sp10[1] <= (D_8009E820[FieldMapData->unk852E][1] + sp10[5])) {
            FieldMapData->pos.screen_edge_flags |= 4;
        } else if (sp10[1] >= (D_8009E820[FieldMapData->unk852E][3] + sp10[9])) {
            FieldMapData->pos.screen_edge_flags |= 8;
        }
        func_80045A34();
        EncounterBarProc();
        temp_s0 = func_800460AC() & 0xF;
        if (temp_s0 == 9) {
            func_80016A10(&sp10[12], &sp10[16], &sp10[20]);
            func_800457A4(sp10[12], sp10[13], &FieldMapData->next);
            FieldMapData->flags |= 8;
            return;
        }
        if ((temp_s0 != 8) && (func_8004C06C(0xFA) == 0) && ((func_8004C06C(0xA2) == 1) || (func_8004C06C(0xA6) == 1)) && (temp_s0 == 0xA)) {
            func_800456C8(1, 1, &FieldMapData->next);
            FieldMapData->unk84F4 = 0;
            FieldMapData->event = 0;
            FieldMapData->unk84F0 = ((struct object *)FieldMapData->origin)->proc_func;
            ((struct object *)FieldMapData->origin)->proc_func = FieldMapSleepEvent;
        }
    }
}

int func_80016504(void) {
    struct object* var_v1;
    unsigned int temp_v1;
    unsigned int temp_s1;

    FieldMapData->unk8528 = func_80045588(FieldMapData->pos.x, FieldMapData->pos.y);
    temp_v1 = FieldMapData->unk84F4 & 0xF;
    temp_s1 = 0;
    if (temp_v1 == 8) {
        temp_s1 = 1;
        func_800456C8(FieldMapData->pos.x, FieldMapData->pos.y, &FieldMapData->next);
        FieldMapData->unk84F4 = 0;
        FieldMapData->event = 0;
        FieldMapData->unk84F0 = ((struct object *)FieldMapData->origin)->proc_func;
        ((struct object *)FieldMapData->origin)->proc_func = FieldMapSleepEvent;
    }
    else if (temp_v1 == 9) {
        func_80018F6C(0, 0, FieldMapData);
        func_800457A4(FieldMapData->pos.x, FieldMapData->pos.y, &FieldMapData->next);
        func_8004C6E8(FieldMapData->unk18);
        func_80024484(1);
        temp_s1 = 1;
        ((struct object *)FieldMapData->origin)->proc_func = &FieldMapClose1;
    }
    return temp_s1;
}

void ExecuteFieldMovement() {
    short temp_v0_3;
    short temp_v0_4;
    short var_s1;
    short var_v1;
    short var_v1_2;
    int temp_v0_2;
    int temp_v0_5;
    int temp_v0_6;
    int var_v0;
    unsigned short temp_v0;
    struct field_pos * temp_s0;
    void * var_v0_2;
    void * var_v0_3;

    temp_s0 = &FieldMapData->pos;
    temp_v0 = temp_s0->motion_countdown - 1;
    temp_s0->motion_countdown = temp_v0;
    if ((temp_v0 * 0x10000) <= 0) {
        FieldMapData->step_counter += 1;
        func_8004F9A0();
        temp_v0_2 = func_8004FD4C(FieldMapData->step_counter);
        if ((temp_v0_2 & 4) > 0) {
            var_s1 = 0x51;
        }
        else if ((temp_v0_2 & 2) > 0) {
            var_s1 = 0x52;
        }
        else if ((temp_v0_2 & 1) > 0) {
            var_s1 = 0x4F;
        }
        var_v0 = temp_v0_2 * 0x10000;
        if (var_v0 > 0) {
            func_8002459C();
            func_8003FFE4(var_s1);
        }
        if (func_8004F628() == 0) {
            func_800147CC();
        }
        temp_v0_3 = temp_s0->x_motion;
        if (temp_v0_3 < 0) {
            if (FieldMapData->pos.screen_edge_flags & 2) {
                temp_s0->character_x_offset += 0x10;
            } else if (temp_s0->character_x_offset < 0x90) {
                temp_s0->character_x_offset += 0x10;
            } else {
                FieldMapData->x_scroll += 1;
            }
            FieldMapData->pos.x += 1;
        } else if (temp_v0_3 > 0) {
            if (FieldMapData->pos.screen_edge_flags & 1) {
                temp_s0->character_x_offset -= 0x10;
            } else if (temp_s0->character_x_offset >= 0x91) {
                temp_s0->character_x_offset -= 0x10;
            } else {
                FieldMapData->x_scroll -= 1;
            }
            FieldMapData->pos.x -= 1;
        }
        temp_v0_4 = temp_s0->y_motion;
        if (temp_v0_4 < 0) {
            if (FieldMapData->pos.screen_edge_flags & 8) {
                temp_s0->character_y_offset += 0x10;
            } else if (temp_s0->character_y_offset < 0x68) {
                temp_s0->character_y_offset += 0x10;
            } else {
                FieldMapData->y_scroll += 1;
            }
            FieldMapData->pos.y += 1;
        } else if (temp_v0_4 > 0) {
            if (FieldMapData->pos.screen_edge_flags & 4) {
                temp_s0->character_y_offset -= 0x10;
            } else if (temp_s0->character_y_offset >= 0x69) {
                temp_s0->character_y_offset -= 0x10;
            } else {
                FieldMapData->y_scroll -= 1;
            }
            FieldMapData->pos.y -= 1;
        }
        func_8002457C(FieldMapData->pos.character_x_offset, FieldMapData->pos.character_y_offset, FieldMapData->unk30);
        FieldMapData->pos.screen_edge_flags = 0;
        temp_s0->x_motion = 0;
        temp_s0->y_motion = 0;
        temp_s0->motion_countdown = -1;
        temp_v0_5 = func_800453B0(FieldMapData->pos.x, FieldMapData->pos.y);
        FieldMapData->unk84F4 = temp_v0_5;
        if (((temp_v0_5 & 0xF) - 8) >= 2) {
            temp_v0_6 = func_8004F28C();
            if (temp_v0_6 == 1) {
                FieldMapData->random_encounter = temp_v0_6;
                return;
            }
        }
        if ((func_8004C06C(0xF9) != 0) && ((temp_s0->motion_countdown == -1))) {
            FieldMapData->unk84F4 = 0;
            FieldMapData->event = 0;
            FieldMapData->unk84F0 = ((struct object *)FieldMapData->origin)->proc_func;
            ((struct object *)FieldMapData->origin)->proc_func = FieldMapSleepEvent;
        }
    }
}


void func_80016A10(DVECTOR * arg0, DVECTOR * arg1, DVECTOR * arg2) {
    short temp_v0;
    short temp_v0_2;

    arg0->vx = FieldMapData->pos.x;
    arg0->vy = FieldMapData->pos.y;
    temp_v0 = FieldMapData->pos.x_motion;
    if (temp_v0 > 0) {
        arg0->vx -= 1;
        arg1->vx = 0;
        arg2->vx = -1;
    } else if (temp_v0 < 0) {
        arg0->vx += 1;
        arg1->vx = 1;
        arg2->vx = 0;
    }
    temp_v0_2 = FieldMapData->pos.y_motion;
    if (temp_v0_2 > 0) {
        arg0->vy -= 1;
        arg1->vy = 0;
        arg2->vy = -1;
    } else if (temp_v0_2 < 0) {
        arg0->vy += 1;
        arg1->vy = 1;
        arg2->vy = 0;
    }
}

int func_80016AF0(void) {
    return func_800460F0() != 0;
}

int func_80016B10(void) {
    unsigned int temp_v0;
    int var_v0;

    temp_v0 = func_8004ED78();

    if (temp_v0 == 3) {
        return 3;
    } else {
        if ((temp_v0 - 1) < 2) {
            return 2;
        } else {
            if (temp_v0 == 0) {
                return (FieldMapData->pos.x > 0x47);
            }
            return 4;
        } 
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016B74);

/* CLUT related code. */
int func_80016DB8(int arg0, unsigned short arg1) {
    short sp10[4];
    short * x;
    short var_a0;

    x = D_800B74F0.dat0 + D_800B74F0.dat0[4];
    x = x + arg0 + 1;
    func_8001D45C(x[1], &sp10);
    if (arg0 >= 0x100) {
        sp10[1] -= 0x10;
    }
    
    var_a0 = sp10[1] - 0x1E0;
    if (arg1 == 2 || arg1 == 3) {
        if (var_a0 == 6) {
            var_a0 += (FieldMapData->unk8501 / 3);
        }
    }
    
    return getClut(0x1F4, (sp10[0] + (var_a0 * 16)));
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016EB0);

void AddFieldOverlays(void) {
    struct field_map_graphics_container* temp_s0;
    struct field_map_graphics* temp_s0_2;

    temp_s0 = &FieldMapData->g;
    temp_s0_2 = &temp_s0->g[temp_s0->buffer];
    func_8001D890(0x10, 0x10, 0x120, 0x68, &OverlayColors[0], 0x1D, &temp_s0_2->upper_overlay);
    temp_s0_2->upper_overlay.code |= 2;
    func_8001D890(0x10, 0x78, 0x120, 0x68, &OverlayColors[1], 0x1D, &temp_s0_2->lower_overlay);
    temp_s0_2->lower_overlay.code |= 2;
    func_8001D478(0, 1, 0x20, 0, 0x1D, &temp_s0_2->overlay_dr_mode);
}


void EncounterBarProc(void) {
    int var_a0;
    int var_s0;
    int temp_v0;

    temp_v0 = func_8004ED18();
    if ((temp_v0 << 0x10) == 0 || 
    func_80045970(FieldMapData->pos.x, FieldMapData->pos.y) == 0 || 
    func_8004C06C(0xFF) != 0) {
        var_s0 = 0;
    } else {
        var_s0 = 1;
        if (((temp_v0 - 1)) >= 0x23) {
            var_s0 = 2;
            if (((temp_v0 - 0x24)) >= 0x23) {
                var_s0 = 4;
                if (((temp_v0 - 0x47)) < 0x23) {
                    var_s0 = 3;
                }
            }
        }
    }

    if (func_800148D4() == 1) {
        func_80023F58(1);
    } else {
        func_80023F58(0);
    }
    func_80023F28(var_s0);
}


void func_80017164(struct return_thing* arg0) {
    bzero(arg0, 0x24);
    arg0->unk8 = FieldMapData->pos.x;
    arg0->unkC = FieldMapData->pos.y;
    arg0->unk10 = FieldMapData->pos.movement_dir;
    arg0->unk14 = FieldMapData->unk8504;
}

int func_800171C8(struct return_thing* arg0) {
    int var_a2;

    var_a2 = 0;
    if ((FieldMapData->flags & 8) > 0) {
        arg0->unk8 = FieldMapData->unkC;
        arg0->unkC = (int)FieldMapData->unk10;
        var_a2 = 1;
        FieldMapData->flags &= 0xF7;
    }
    return var_a2;
}

void func_80017218(void) {
    if (D_800B6C68 != 0) {
        func_8001830C(FieldMapData->origin);
        FieldMapData->origin = 0;
    }
}

void func_80017258(struct return_thing* arg0) {
    DVECTOR p;

    FieldMapData->pos.x = arg0->unk8;
    FieldMapData->pos.y = arg0->unkC;
    FieldMapData->pos.movement_dir = arg0->unk10;
    FieldMapData->x_scroll = (FieldMapData->pos.x - 9);
    FieldMapData->y_scroll = (FieldMapData->pos.y - 7);
    FieldMapData->pos.character_x_offset = 0x90U;
    FieldMapData->pos.character_y_offset = 0x68U;
    FieldMapData->unk852E = func_80016B10();
    p.vx = p.vy = 0;
    if (FieldMapData->pos.x <= D_8009E820[FieldMapData->unk852E][0]) {
        p.vx = (FieldMapData->pos.x - D_8009E820[FieldMapData->unk852E][0]) - 1;
    } else if (FieldMapData->pos.x >= D_8009E820[FieldMapData->unk852E][2]) {
        p.vx = (FieldMapData->pos.x - D_8009E820[FieldMapData->unk852E][2]) + 1;
    }
    if (FieldMapData->pos.y <= D_8009E820[FieldMapData->unk852E][1]) {
        p.vy = (FieldMapData->pos.y - D_8009E820[FieldMapData->unk852E][1]) - 1;
    } else if (FieldMapData->pos.y >= D_8009E820[FieldMapData->unk852E][3]) {
        p.vy = (FieldMapData->pos.y - D_8009E820[FieldMapData->unk852E][3]) + 1;
    }
    FieldMapData->pos.character_x_offset += p.vx * 16;
    FieldMapData->x_scroll = FieldMapData->pos.x - p.vx - 9;
    FieldMapData->pos.character_y_offset += p.vy * 16;
    FieldMapData->y_scroll = FieldMapData->pos.y - p.vy - 7;
    FieldMapData->pos.x_motion = 0;
    FieldMapData->pos.y_motion = 0;
    FieldMapData->pos.motion_countdown = -1;
    FieldMapData->pos.screen_edge_flags = 0;
    FieldMapData->step_counter = 0;
    FieldMapData->unk84FC = 0;
    FieldMapData->unk8500 = 0;
    FieldMapData->unk8501 = 0;
    FieldMapData->unk8504 = -1;
}

int func_80017474(void) {
    return FieldMapData->flags & 1;
}

int func_8001748C(void) {
    int temp_v0;

    temp_v0 = FieldMapData->random_encounter;
    FieldMapData->random_encounter = 0;
    return temp_v0;
}

int func_800174A4(void) {
    int var_s0;
    int var_v0;

    var_s0 = 0;
    if (D_800B6C68 != 0) {
        if (func_8001F920() == 2) {
            if (((struct object *)FieldMapData->origin)->proc_func == FieldMapProc) {
                if (FieldMapData->pos.motion_countdown == -1) {
                    if (((FieldMapData->unk84F4 & 0xF) - 8) >= 2U) {
                        var_s0 = 1;
                        var_v0 = var_s0;
                    }
                }
            }
        }
    }
    var_v0 = var_s0;
    return var_v0;
}

void func_8001753C(short arg0) {    
    if (arg0 == 0) {
        FieldMapData->flags &= 0xEF;
    } else if (arg0 == 1) {
        FieldMapData->flags |= 0x10;
    } else {
        return;
    }
    
    if (((struct object *)FieldMapData->origin)->proc_func != FieldMapSleep) {
        func_80024484(1);
        FieldMapData->unk84F0 = FieldMapProc;
        ((struct object *)FieldMapData->origin)->proc_func = FieldMapSleep;
    }
}

void func_800175F0(void) {
    if (D_800B6C68 != 0) {
        EncounterBarProc();
        ((struct object *)FieldMapData->origin)->proc_func = FieldMapData->unk84F0;
        func_80024484(0);
        func_800238A8(2);
    }
}

void func_80017640(int arg0, int arg1) {
    func_800458A8(FieldMapData->pos.x, FieldMapData->pos.y, arg0, arg1);
}

int func_8001767C(void) {
    return FieldMapData->unk8528 + 0xA5;
}

short func_80017694(void) {
    int temp_a1;
    int temp_a0;

    temp_a1 = func_80045658(FieldMapData->pos.x, FieldMapData->pos.y);
    temp_a0 = FieldMapData->unk8504;
    switch (temp_a0) {                              /* irregular */
    case -1:
        FieldMapData->unk8504 = temp_a1;
        return -1;
    case 0:
        return 0;
    default:
        return temp_a1;
    }
}

void func_80017708(void) {
    FieldMapData->unk8530 = 0;
}

int func_8001771C(void) {
    unsigned short sp18[4];
    unsigned short sp20[4];

    switch (FieldMapData->unk8530) {
        case 0:
            if (func_8004ED78() == 0) {
                D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xED, &D_800B74F0.dat2, 0, 3);
                D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xEE, &D_800B74F0.dat3, 0, 3);
            } else {
                D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xF0, &D_800B74F0.dat2, 0, 3);
                D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xF1, &D_800B74F0.dat3, 0, 3);
            }

            FieldMapData->unk8530++;

        case 1:
            if (func_80019ECC(D_800B74F0.data_struct_ids) == 0) {
                break;
            }
            func_80044FA0(
                &D_800B74F0.dat0[D_800B74F0.dat0[1] / 4],
                &D_800B74F0.dat0[D_800B74F0.dat0[2] / 4],
                &D_800B74F0.dat0[D_800B74F0.dat0[3] / 4], D_800B74F0.dat2, D_800B74F0.dat3
            );
            sp18[0] = 0x140;
            sp18[1] = 0;
            sp18[2] = 0x100;
            sp18[3] = 0x100;
            sp20[0] = 0;
            sp20[1] = 0x1F4;
            sp20[2] = 0xE0;
            sp20[3] = 1;
            if (func_8004ED78() != 0) {
                sp18[0] += 0x40;
            }
            func_800190BC(D_800B74F0.dat2, &sp18, &sp20, 4);
            func_80019478(D_800B74F0.dat2);
            D_800B74F0.dat2 = 0;
            func_80019478(D_800B74F0.dat3);
            D_800B74F0.dat3 = 0;
            FieldMapData->unk8530++;
        case 2:
            return 1;
    }

    return 0;
}

void func_80017948(void) {
    D_800B74F0.unk0 = 0;
    func_80019478(D_800B74F0.dat0);
    D_800B74F0.dat0 = 0;
    func_80019478(D_800B74F0.dat1);
    D_800B74F0.dat1 = 0;
    func_80019478(D_800B74F0.dat2);
    D_800B74F0.dat2 = 0;
    func_80019478(D_800B74F0.dat3);
    D_800B74F0.dat3 = 0;
    func_80019478(D_800B74F0.dat4);
    D_800B74F0.dat4 = 0;
}

/* Matched by Mc-muffin */
void func_800179AC(void) {
    func_80017948();
    if (func_8004ED78() == 0) {
        D_800B74F0.data_struct_ids = func_80019C58(0, 0, 0xF3, &D_800B74F0.dat0, 0, 3);
        D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xED, &D_800B74F0.dat2, 0, 3);
        D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xEE, &D_800B74F0.dat3, 0, 3);
    } else {
        D_800B74F0.data_struct_ids = func_80019C58(0, 0, 0xF4, &D_800B74F0.dat0, 0, 3);
        D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xEF, &D_800B74F0.dat1, 0, 3);
        D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xF0, &D_800B74F0.dat2, 0, 3);
        D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xF1, &D_800B74F0.dat3, 0, 3);
        if (func_8004C06C(0x57) == 0) {
            D_800B74F0.data_struct_ids |= func_80019C58(0, 0, 0xF2, &D_800B74F0.dat4, 0, 3);
        }
    }
    D_800B74F0.unk0 = 1;
}

/* Matched by Mc-muffin */
void func_80017B4C(void) {
    int sp10[9];
    enum story_section story_section;
    int var_a0;

    if (D_800B6D48 == 0) {
        D_800B6D48 = 1;
        D_800B73AC = FieldMapData->pos.x;
        D_800B73AE = FieldMapData->pos.y;
    } else if (D_800B6D48 == 1) {
        if ((func_80018EE8(0, 7) != 0) && (func_80018EE8(0, 0xB) != 0)) {
            if (--D_800B73AC < 0) {
                D_800B73AC = 0x7F;
            }
        } else if ((func_80018EE8(0, 5) != 0) && (func_80018EE8(0, 0xB) != 0)) {
            if (++D_800B73AC >= 0x80) {
                D_800B73AC = 0;
            }
        } else if ((func_80018EE8(0, 4) != 0) && (func_80018EE8(0, 0xB) != 0)) {
            if (++D_800B73AE >= 0x80) {
                D_800B73AE = 0;
            }
        } else if ((func_80018EE8(0, 6) != 0) && (func_80018EE8(0, 0xB) != 0)) {
            if (--D_800B73AE < 0) {
                D_800B73AE = 0x7F;
            }
        } else if (func_80018F14(0, 7) != 0) {
            if (--D_800B73AC < 0) {
                D_800B73AC = 0x7F;
            }
        } else if (func_80018F14(0, 5) != 0) {
            if (++D_800B73AC >= 0x80) {
                D_800B73AC = 0;
            }
        } else if (func_80018F14(0, 4) != 0) {
            if (++D_800B73AE >= 0x80) {
                D_800B73AE = 0;
            }
        } else if (func_80018F14(0, 6) != 0) {
            if (--D_800B73AE < 0) {
               D_800B73AE = 0x7F;
            }
        } else if (func_80018F14(0, 0xD) != 0) {
            D_800B6D48 = 2;
            FieldMapData->pos.x = D_800B73AC;
            FieldMapData->pos.y = D_800B73AE;
        }
    } else if (D_800B6D48 == 2) {
        bzero(&sp10, 0x24);
        sp10[2] = D_800B73AC;
        sp10[3] = D_800B73AE;
        sp10[4] = FieldMapData->pos.movement_dir;
        func_80017258(&sp10);
        D_800B6D48 = 3;
    } else if (D_800B6D48 == 3) {
        D_800B6C6C = 0;
        func_80018F6C(0, 0);
        D_800B6D48 = 0;
        ((struct object *)FieldMapData->origin)->proc_func = func_800152D0;
    }

    story_section = func_8004ED78();
    {
        char str0[16];
        char str1[] = "HAKAI_BEF";
        char str2[] = "HAKAI_AFT";
        char str3[] = "NEBI_KILL";
        char str4[] = "KOZUI";
        char str5[] = "NO_DATA";
        char* sp80[5] = {
            str1, str2, str3, str4, str5,
        };
        int x;

        if (story_section == HAKAI_BEF) {
            var_a0 = HAKAI_BEF;
        } else if (story_section == HAKAI_AFT) {
            var_a0 = HAKAI_AFT;
        } else if (story_section == NEBI_KILL) {
            var_a0 = NEBI_KILL;
        } else if (story_section == KOZUI) {
            var_a0 = KOZUI;
        } else {
            var_a0 = NO_DATA;
        }
        
        FntPrint("\n\n\n\n\n\n\n\n\n        %s", sp80[var_a0]);
        x = func_80045658(D_800B73AC, D_800B73AE);
        strcpy(str0, Locations[x]);
        FntPrint(&D_800B6D5C, &str0);
        FntPrint("\n\n        x=%3d", D_800B73AC);
        FntPrint("\n        y=%3d", D_800B73AE);
    }
}