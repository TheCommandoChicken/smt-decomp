#include "common.h"

void func_800151DC(s32 arg0) {
    object* temp_v0;
    overworld_data* temp_v0_2;

    if (D_800B6C68 == 0) {
        D_800B6C68 = 1;
        temp_v0 = func_800180DC(0, FieldMapKill, *FirstObjectPtrPtr, 0x40000, 0, 0x8534);
        if (temp_v0 != 0) {
            bzero(temp_v0->data, 0x8534);
            temp_v0_2 = temp_v0->data;
            temp_v0_2->origin = temp_v0;
            temp_v0->initialized = 1;
            FieldMapData = temp_v0_2;
            temp_v0_2->event = 0;
            func_80017258(arg0);
            FieldMapData->field88_0x8520 = 0;
            FieldMapData->origin->proc_func = func_800152D0;
        } else {
            return;
        }
    } else {
        FieldMapData->event = 4;
        func_80017258(arg0);
        FieldMapData->origin->proc_func = func_800152D0;
    }
    D_800B6C6C = -1;
}

void func_800152D0(object* arg0) {
    u16 sp10[4];
    u16 sp18[4];
    s32 var_a0;

    switch ((s16)FieldMapData->event) {
    case 0:
        func_8004ECCC(0);
        EncounterBarProc();
        if (D_800B74F0.unk0 == 0) {
            func_800179AC();
        }
        D_800B74F0.unk0 = 0U;
        FieldMapData->event = 1;
        return;
    case 1:
        if (func_80019ECC(D_800B74F0.unk4) != 0) {
            FieldMapData->event = 2;
            return;
        }
    default:
        return;
    case 2:
        func_80044FA0(D_800B74F0.unk8 + (D_800B74F0.unk8[1] / 4), D_800B74F0.unk8 + (D_800B74F0.unk8[2] / 4), D_800B74F0.unk8 + (D_800B74F0.unk8[3] / 4), D_800B74F0.unk10, D_800B74F0.unk14);
        if (func_8004ED78() == 0) {
            var_a0 = D_800B74F0.unk10;
        } else {
            var_a0 = D_800B74F0.unkC;
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
            func_800190BC(D_800B74F0.unk10, &sp10, &sp18, 4);
            func_80019478(D_800B74F0.unkC);
            D_800B74F0.unkC = 0;
            if (func_8004C06C(0x57) == 0) {
                func_80018FF0(D_800B74F0.unk18 + (D_800B74F0.unk18[1] >> 2));
                func_80019478(D_800B74F0.unk18);
                D_800B74F0.unk18 = 0;
            }
        }
        func_80019478(D_800B74F0.unk10);
        D_800B74F0.unk10 = 0;
        func_80019478(D_800B74F0.unk14);
        D_800B74F0.unk14 = 0;
        FieldMapData->field88_0x8520 |= 1;
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
        func_80045FF8(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos, FieldMapData->pos.movement_dir);
        FieldMapData->field96_0x8528 = func_80045588(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos);
        if (func_800148D4() != 0) {
            func_80024484(3);
            FieldMapData->event = 4;
            FieldMapData->field52_0x84f0 = FieldMapProc;
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
        int* scratchpad = (int*)0x1f8003FC;
            asm(";"
                "move    $t0, %0;"
                "sw      $sp, 0($t0);"
                "addiu   $t0, $t0, -0x18;"
                "move    $sp, $t0;"
                :
                : "r"(scratchpad)
                : "t0", "memory"
            );
            UpdateField();
            asm(";"
                "addiu   $sp, $sp, 0x18;"
                "lw      $sp, 0($sp);"
                : :
                : "memory"
            );
        }
        if (func_8001F920() == 2) {
            func_80024484(0);
            FieldMapData->event = 6;
            return;
        }
        break;
    case 6:
        {
        int* scratchpad = (int*)0x1f8003FC;
            asm(";"
                "move    $t0, %0;"
                "sw      $sp, 0($t0);"
                "addiu   $t0, $t0, -0x18;"
                "move    $sp, $t0;"
                :
                : "r"(scratchpad)
                : "t0", "memory"
            );
            UpdateField();
            asm(";"
                "addiu   $sp, $sp, 0x18;"
                "lw      $sp, 0($sp);"
                : :
                : "memory"
            );
        }
        if ((func_800245B4() == 2) && (func_80040A68(0) == 0)) {
            FieldMapData->field56_0x84f4 = 0;
            FieldMapData->random_encounter = 0;
            FieldMapData->event = 0;
            arg0->proc_func = FieldMapProc;
        }
        break;
    }
}

/* Matched by Mc-muffin */
void FieldMapProc(void) {
    if (FieldMapData->pos.motion_countdown == -1) {
        if (func_80016504() == 0) {
            FieldMovement();
        }
    } else {
        ExecuteFieldMovement();
    }

    {
    int* scratchpad = (int*)0x1f8003FC;
        asm(";"
            "move    $t0, %0;"
            "sw      $sp, 0($t0);"
            "addiu   $t0, $t0, -0x18;"
            "move    $sp, $t0;"
            :
            : "r"(scratchpad)
            : "t0", "memory"
        );
        UpdateField();
        asm(";"
            "addiu   $sp, $sp, 0x18;"
            "lw      $sp, 0($sp);"
            : :
            : "memory"
        );
    }

    FntPrint("MAPX=%3d : MAPY=%3d\n", FieldMapData->x_scroll, FieldMapData->y_scroll);
    FntPrint("ABSX=%3d : ABSY=%3d\n", FieldMapData->pos.x_pos, FieldMapData->pos.y_pos);
    FntPrint("SYMX=%3d : SYMY=%3d\n", (FieldMapData->pos.character_x_offset - 0x90) / 0x10, (FieldMapData->pos.character_y_offset - 0x68) / 0x10);
    FntPrint("\n\n\n\n\n\n  __FieldMapProc");
}

void FieldMapKill(void) {
    FntPrint("\n\n\n\n\n\n  __FieldMapKill");
    if (D_800B6C68 != 0) {
        func_80019478(D_800B74F0.things[2]);
        D_800B74F0.things[2] = 0;
        func_8001830C(FieldMapData->field92_0x8524);
        FieldMapData->field92_0x8524 = 0;
        func_8004505C();
        D_800B6C68 = 0;
    }
}

void func_800158A0(void) {
    FieldMapData->field12_0x1c = 0;
    func_800441F0(1, &FieldMapData->next);
    func_8001830C(FieldMapData->origin);
    FieldMapData->origin = 0;
}

void FieldMapClose1(s32** arg0) {
    FntPrint("\n\n\n\n\n\n  __FieldMapClose1");
    if (D_800B6C68 != 0) {
        volatile int* scratchpad = (int*)0x1f8003FC;
        asm(";"
            "move    $t0, %0;"
            "sw      $sp, 0($t0);"
            "addiu   $t0, $t0, -0x18;"
            "move    $sp, $t0;"
            :
            : "r"(scratchpad)
            : "t0", "memory"
        );
        UpdateField();
        asm(";"
            "addiu   $sp, $sp, 0x18;"
            "lw      $sp, 0($sp);"
            : :
            : "memory"
        );
            
        if ((FieldMapData->field56_0x84f4 & 0xF) == 9) {
            if (func_800245B4() != 1) {
                return;
            }
            func_8001F6B8();
            FieldMapData->field56_0x84f4 = 0;
        } 
            
        if (func_8001F920() == 2) {
            *arg0 = &func_800158A0;
        }
    }
}

void FieldMapSleepEvent(void) {
    s16 temp_v1;
    s32 var_a0;
    s32 var_a1;

    temp_v1 = FieldMapData->event;
    switch (temp_v1) {
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
            var_a0 = FieldMapData->appearance;
            var_a1 = FieldMapData->field16_0x20;
        }
        func_8001489C(var_a0, var_a1, 1);
        /* fallthrough */
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
            *FieldMapData->origin = FieldMapData->field52_0x84f0;
        }
        break;
    }
    {
    int* scratchpad = (int*)0x1f8003FC;
    asm(";"
        "move    $t0, %0;"
        "sw      $sp, 0($t0);"
        "addiu   $t0, $t0, -0x18;"
        "move    $sp, $t0;"
        :
        : "r"(scratchpad)
        : "t0", "memory"
    );
    UpdateField();
    asm(";"
        "addiu   $sp, $sp, 0x18;"
        "lw      $sp, 0($sp);"
        : :
        : "memory"
    );
    }
    FntPrint("\n\n\n\n\n\n  __FieldMapSleep_Event");
}

void FieldMapSleep(void) {
    if ((FieldMapData->field88_0x8520 & 0x10) > 0) {
        {
        int* scratchpad = (int*)0x1f8003FC;
            asm(";"
                "move    $t0, %0;"
                "sw      $sp, 0($t0);"
                "addiu   $t0, $t0, -0x18;"
                "move    $sp, $t0;"
                :
                : "r"(scratchpad)
                : "t0", "memory"
            );
            UpdateField();
            asm(";"
                "addiu   $sp, $sp, 0x18;"
                "lw      $sp, 0($sp);"
                : :
                : "memory"
            );
        }
    }
    FntPrint("\n\n\n\n\n\n  __FieldMapSleep");
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", UpdateField);

/* Matched by MatBourgon and Mc-muffin */
void FieldMovement(void) {
    s16 sp10[22];
    s32 temp_v0;
    s16 var_v0_2;
    s32 temp_s0;
    s32 temp_v0_2;
    s8* tx;
    s8 temp_v1;
    s8 temp_a1;
    s8 var_v1;
    u8 var_v0_3;
    u8 var_v0_4;
    s32 temp_a2;
    struct thingy* temp_a2_2;
    overworld_data* var_v0;

    FieldMapData->pos.x_motion = 0;
    FieldMapData->pos.y_motion = 0;
    
    if (func_80018EE8(0, 0xE) != 0) {
        FieldMapData->speed_modifier = 2;
    } else {
        FieldMapData->speed_modifier = 1;
    }
    temp_v0_2 = func_8004541C();
    if (temp_v0_2 < 0) {
        return;
    }
    FieldMapData->pos.movement_dir = temp_v0_2;
    temp_v0_2 = func_80045FF8(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos, temp_v0_2);
    if (temp_v0_2 > -1) {
        FieldMapData->pos.x_motion = (-(D_8009E80C[temp_v0_2 * 2 + 0]) * FieldMapData->speed_modifier);
        FieldMapData->pos.y_motion = (-(D_8009E80C[temp_v0_2 * 2 + 1]) * FieldMapData->speed_modifier);
        if (FieldMapData->speed_modifier == 2) {
            FieldMapData->pos.motion_countdown = 3;
        } else {
            FieldMapData->pos.motion_countdown = 7;
        }
        
        func_80016A10(&sp10[0], &sp10[4], &sp10[8]);
        FieldMapData->screen_edge_flags = 0;
        if (sp10[0] <= (D_8009E820[FieldMapData->field101_0x852e][0] + sp10[4])) {
            FieldMapData->screen_edge_flags |= 1;
        } else if (sp10[0] >= (D_8009E820[FieldMapData->field101_0x852e][2] + sp10[8])) {
            FieldMapData->screen_edge_flags |= 2;
        }
        if (sp10[1] <= (D_8009E820[FieldMapData->field101_0x852e][1] + sp10[5])) {
            FieldMapData->screen_edge_flags |= 4;
        } else if (sp10[1] >= (D_8009E820[FieldMapData->field101_0x852e][3] + sp10[9])) {
            FieldMapData->screen_edge_flags |= 8;
        }
        func_80045A34();
        EncounterBarProc();
        temp_s0 = func_800460AC() & 0xF;
        if (temp_s0 == 9) {
            func_80016A10(&sp10[12], &sp10[16], &sp10[20]);
            func_800457A4(sp10[12], sp10[13], &FieldMapData->next);
            FieldMapData->field88_0x8520 = (u8) (FieldMapData->field88_0x8520 | 8);
            return;
        }
        if ((temp_s0 != 8) && (func_8004C06C(0xFA) == 0) && ((func_8004C06C(0xA2) == 1) || (func_8004C06C(0xA6) == 1)) && (temp_s0 == 0xA)) {
            func_800456C8(1, 1, &FieldMapData->next);
            FieldMapData->field56_0x84f4 = 0;
            FieldMapData->event = 0;
            FieldMapData->field52_0x84f0 = *FieldMapData->origin;
            *FieldMapData->origin = &FieldMapSleepEvent;
        }
    }
}

s32 func_80016504(void) {
    object* var_v1;
    u32 temp_v1;
    u32 temp_s1;

    FieldMapData->field96_0x8528 = func_80045588(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos);
    temp_v1 = FieldMapData->field56_0x84f4 & 0xF;
    temp_s1 = 0;
    if (temp_v1 == 8) {
        temp_s1 = 1;
        func_800456C8(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos, &FieldMapData->next);
        FieldMapData->field56_0x84f4 = 0;
        FieldMapData->event = 0;
        FieldMapData->field52_0x84f0 = FieldMapData->origin->proc_func;
        FieldMapData->origin->proc_func = &FieldMapSleepEvent;
    }
    else if (temp_v1 == 9) {
        func_80018F6C(0, 0, FieldMapData);
        func_800457A4(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos, &FieldMapData->next);
        func_8004C6E8(FieldMapData->appearance);
        func_80024484(1);
        temp_s1 = 1;
        FieldMapData->origin->proc_func = &FieldMapClose1;
    }
    return temp_s1;
}

void ExecuteFieldMovement(u32 arg0) {
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 var_s1;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 var_v0;
    u16 temp_v0;
    field_pos* temp_s0;
    void* var_v0_2;
    void* var_v0_3;

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
            if (FieldMapData->screen_edge_flags & 2) {
                temp_s0->character_x_offset += 0x10;
            } else if (temp_s0->character_x_offset < 0x90) {
                temp_s0->character_x_offset += 0x10;
            } else {
                FieldMapData->x_scroll += 1;
            }
            FieldMapData->pos.x_pos += 1;
        }else if (temp_v0_3 > 0) {
            if (FieldMapData->screen_edge_flags & 1) {
                temp_s0->character_x_offset -= 0x10;
            } else if (temp_s0->character_x_offset >= 0x91) {
                temp_s0->character_x_offset -= 0x10;
            } else {
                FieldMapData->x_scroll -= 1;
            }
            FieldMapData->pos.x_pos -= 1;
        }
        temp_v0_4 = temp_s0->y_motion;
        if (temp_v0_4 < 0) {
            if (FieldMapData->screen_edge_flags & 8) {
                temp_s0->character_y_offset += 0x10;
            } else if (temp_s0->character_y_offset < 0x68) {
                temp_s0->character_y_offset += 0x10;
            } else {
                FieldMapData->y_scroll += 1;
            }
            FieldMapData->pos.y_pos += 1;
        }else if (temp_v0_4 > 0) {
            if (FieldMapData->screen_edge_flags & 4) {
                temp_s0->character_y_offset -= 0x10;
            } else if (temp_s0->character_y_offset >= 0x69) {
                temp_s0->character_y_offset -= 0x10;
            } else {
                FieldMapData->y_scroll -= 1;
            }
            FieldMapData->pos.y_pos -= 1;
        }
        func_8002457C(FieldMapData->pos.character_x_offset, FieldMapData->pos.character_y_offset, FieldMapData->mute);
        FieldMapData->screen_edge_flags = 0;
        temp_s0->x_motion = 0;
        temp_s0->y_motion = 0;
        temp_s0->motion_countdown = -1;
        temp_v0_5 = func_800453B0(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos);
        FieldMapData->field56_0x84f4 = temp_v0_5;
        if ((u32) ((temp_v0_5 & 0xF) - 8) >= 2) {
            temp_v0_6 = func_8004F28C();
            if (temp_v0_6 == 1) {
                FieldMapData->random_encounter = temp_v0_6;
                return;
            }
        }
        if ((func_8004C06C(0xF9) != 0) && ((s16) temp_s0->motion_countdown == -1)) {
            FieldMapData->field56_0x84f4 = 0;
            FieldMapData->event = 0;
            FieldMapData->field52_0x84f0 = *FieldMapData->origin;
            *FieldMapData->origin = &FieldMapSleepEvent;
        }
    }
}

struct funy_monky {
    s16 unk0;
    s16 unk2;
};

void func_80016A10(struct funy_monky* arg0, struct funy_monky* arg1, struct funy_monky* arg2) {
    s16 temp_v0;
    s16 temp_v0_2;

    arg0->unk0 = FieldMapData->pos.x_pos;
    arg0->unk2 = FieldMapData->pos.y_pos;
    temp_v0 = FieldMapData->pos.x_motion;
    if (temp_v0 > 0) {
        arg0->unk0 -= 1;
        arg1->unk0 = 0;
        arg2->unk0 = -1;
    } else if (temp_v0 < 0) {
        arg0->unk0 += 1;
        arg1->unk0 = 1;
        arg2->unk0 = 0;
    }
    temp_v0_2 = FieldMapData->pos.y_motion;
    if (temp_v0_2 > 0) {
        arg0->unk2 -= 1;
        arg1->unk2 = 0;
        arg2->unk2 = -1;
    } else if (temp_v0_2 < 0) {
        arg0->unk2 += 1;
        arg1->unk2 = 1;
        arg2->unk2 = 0;
    }
}

s32 func_80016AF0(void) {
    return func_800460F0() != 0;
}

s32 func_80016B10(void) {
    u32 temp_v0;
    s32 var_v0;

    temp_v0 = func_8004ED78();

    if (temp_v0 == 3) {
        return 3;
    } else {
        if ((temp_v0 - 1) < 2) {
            return 2;
        } else {
            if (temp_v0 == 0) {
                return (FieldMapData->pos.x_pos > 0x47);
            }
            return 4;
        } 
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016B74);

s32 func_80016DB8(s32 arg0, u16 arg1) {
    thing2 sp10;
    thing2* x;
    s16 var_a0;

    x = ((char *)D_800B74F8) + D_800B74F8->unk10;
    x = x + arg0 + 1;
    func_8001D45C(x->unk2, &sp10);
    if (arg0 >= 0x100) {
        sp10.unk2 -= 0x10;
    }
    
    var_a0 = sp10.unk2 - 0x1E0;
    if (arg1 == 2 || arg1 == 3) {
        if (var_a0 == 6) {
            var_a0 += (FieldMapData->field60_0x8501 / 3);
        }
    }
    
    return (((sp10.unk0 + (var_a0 * 16)) >> 4) & 0x3F) | 0x7D00;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016EB0);

typedef struct unk {
    u8 pad[0x10];
} unk;

void AddFieldOverlays(void) {
    overworld_graphics_container* temp_s0;
    overworld_graphics* temp_s0_2;

    temp_s0 = &FieldMapData->graphics;
    temp_s0_2 = &temp_s0->graphics[temp_s0->buffer];
    func_8001D890(0x10, 0x10, 0x120, 0x68, &UpperOverlayColors[0], 0x1D, &temp_s0_2->upper_overlay);
    temp_s0_2->upper_overlay.code |= 2;
    func_8001D890(0x10, 0x78, 0x120, 0x68, &UpperOverlayColors[1], 0x1D, &temp_s0_2->lower_overlay);
    temp_s0_2->lower_overlay.code |= 2;
    func_8001D478(0, 1, 0x20, 0, 0x1D, &temp_s0_2->overlay_dr_mode);
}


overworld_data* FieldMapData;

void EncounterBarProc(void) {
    s32 var_a0;
    s32 var_s0;
    s32 temp_v0;

    temp_v0 = func_8004ED18();
    if ((temp_v0 << 0x10) == 0 || 
    func_80045970(FieldMapData->x_pos, FieldMapData->y_pos) == 0 || 
    func_8004C06C(0xFF) != 0) {
        var_s0 = 0;
    } else {
        var_s0 = 1;
        if ((u32) ((temp_v0 - 1) & 0xFFFF) >= 0x23) {
            var_s0 = 2;
            if ((u32) ((temp_v0 - 0x24) & 0xFFFF) >= 0x23) {
                var_s0 = 4;
                if ((u32) ((temp_v0 - 0x47) & 0xFFFF) < 0x23) {
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


void func_80017164(return_thing* arg0) {
    bzero(arg0, 0x24);
    arg0->unk8 = (s32) FieldMapData->pos.x_pos;
    arg0->unkC = (s32) FieldMapData->pos.y_pos;
    arg0->unk10 = (s32) FieldMapData->pos.movement_dir;
    arg0->unk14 = (s32) FieldMapData->field63_0x8504;
}

s32 func_800171C8(struct wagoogus* arg0) {
    s32 var_a2;

    var_a2 = 0;
    if ((FieldMapData->field88_0x8520 & 8) > 0) {
        arg0->unk8 = (s32) FieldMapData->field3_0xc;
        arg0->unkC = (s32) FieldMapData->field4_0x10;
        var_a2 = 1;
        FieldMapData->field88_0x8520 &= 0xF7;
    }
    return var_a2;
}

void func_80017218(void) {
    if (D_800B6C68 != 0) {
        func_8001830C(FieldMapData->origin);
        FieldMapData->origin = 0;
    }
}

void func_80017258(return_thing* arg0) {
    pos p;

    FieldMapData->pos.x_pos = arg0->unk8;
    FieldMapData->pos.y_pos = arg0->unkC;
    FieldMapData->pos.movement_dir = arg0->unk10;
    FieldMapData->x_scroll = (FieldMapData->pos.x_pos - 9);
    FieldMapData->y_scroll = (FieldMapData->pos.y_pos - 7);
    FieldMapData->pos.character_x_offset = 0x90U;
    FieldMapData->pos.character_y_offset = 0x68U;
    FieldMapData->field101_0x852e = func_80016B10();
    p.x = p.y = 0;
    if (FieldMapData->pos.x_pos <= D_8009E820[FieldMapData->field101_0x852e][0]) {
        p.x = (FieldMapData->pos.x_pos - D_8009E820[FieldMapData->field101_0x852e][0]) - 1;
    } else if (FieldMapData->pos.x_pos >= D_8009E820[FieldMapData->field101_0x852e][2]) {
        p.x = (FieldMapData->pos.x_pos - D_8009E820[FieldMapData->field101_0x852e][2]) + 1;
    }
    if (FieldMapData->pos.y_pos <= D_8009E820[FieldMapData->field101_0x852e][1]) {
        p.y = (FieldMapData->pos.y_pos - D_8009E820[FieldMapData->field101_0x852e][1]) - 1;
    } else if (FieldMapData->pos.y_pos >= D_8009E820[FieldMapData->field101_0x852e][3]) {
        p.y = (FieldMapData->pos.y_pos - D_8009E820[FieldMapData->field101_0x852e][3]) + 1;
    }
    FieldMapData->pos.character_x_offset += p.x * 16;
    FieldMapData->x_scroll = FieldMapData->pos.x_pos - p.x - 9;
    FieldMapData->pos.character_y_offset += p.y * 16;
    FieldMapData->y_scroll = FieldMapData->pos.y_pos - p.y - 7;
    FieldMapData->pos.x_motion = 0;
    FieldMapData->pos.y_motion = 0;
    FieldMapData->pos.motion_countdown = -1;
    FieldMapData->screen_edge_flags = 0;
    FieldMapData->step_counter = 0;
    FieldMapData->field58_0x84fc = 0;
    FieldMapData->field59_0x8500 = 0;
    FieldMapData->field60_0x8501 = 0;
    FieldMapData->field63_0x8504 = -1;
    return;
}

s32 func_80017474(void) {
    return FieldMapData->field88_0x8520 & 1;
}

s32 func_8001748C(void) {
    s32 temp_v0;

    temp_v0 = FieldMapData->random_encounter;
    FieldMapData->random_encounter = 0;
    return temp_v0;
}

s32 func_800174A4(void) {
    s32 var_s0;
    s32 var_v0;

    var_s0 = 0;
    if (D_800B6C68 != 0) {
        if (func_8001F920() == 2) {
            if (FieldMapData->origin->proc_func == FieldMapProc) {
                if (FieldMapData->pos.motion_countdown == -1) {
                    if (((FieldMapData->field56_0x84f4 & 0xF) - 8) >= 2U) {
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

void func_8001753C(s16 arg0) {    
    if (arg0 == 0) {
        FieldMapData->field88_0x8520 &= 0xEF;
    } else if (arg0 == 1) {
        FieldMapData->field88_0x8520 |= 0x10;
    } else {
        return;
    }
    
    if (FieldMapData->origin->proc_func != FieldMapSleep) {
        func_80024484(1);
        FieldMapData->field52_0x84f0 = FieldMapProc;
        FieldMapData->origin->proc_func = FieldMapSleep;
    }
}

void func_800175F0(void) {
    if (D_800B6C68 != 0) {
        EncounterBarProc();
        FieldMapData->origin->proc_func = FieldMapData->field52_0x84f0;
        func_80024484(0);
        func_800238A8(2);
    }
}

void func_80017640(s32 arg0, s32 arg1) {
    func_800458A8(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos, arg0, arg1);
}

s32 func_8001767C(void) {
    return FieldMapData->field96_0x8528 + 0xA5;
}

s16 func_80017694(void) {
    s32 temp_a1;
    s32 temp_a0;

    temp_a1 = func_80045658(FieldMapData->pos.x_pos, FieldMapData->pos.y_pos);
    temp_a0 = FieldMapData->field63_0x8504;
    switch (temp_a0) {                              /* irregular */
    case -1:
        FieldMapData->field63_0x8504 = temp_a1;
        return -1;
    case 0:
        return 0;
    default:
        return temp_a1;
    }
}

void func_80017708(void) {
    FieldMapData->field103_0x8530 = 0;
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_8001771C);

void func_80017948(void) {
    D_800B74F0.unk0 = 0;
    func_80019478(D_800B74F0.unk8);
    D_800B74F0.unk8 = 0;
    func_80019478(D_800B74F0.unkC);
    D_800B74F0.unkC = 0;
    func_80019478(D_800B74F0.unk10);
    D_800B74F0.unk10 = 0;
    func_80019478(D_800B74F0.unk14);
    D_800B74F0.unk14 = 0;
    func_80019478(D_800B74F0.unk18);
    D_800B74F0.unk18 = 0;
}

/* Matched by Mc-muffin */
void func_800179AC(void) {

    func_80017948();
    if (func_8004ED78() == 0) {
        D_800B74F0.unk4 = func_80019C58(0, 0, 0xF3, &D_800B74F0.unk8, 0, 3);
        D_800B74F0.unk4 |= func_80019C58(0, 0, 0xED, &D_800B74F0.unk10, 0, 3);
        D_800B74F0.unk4 |= func_80019C58(0, 0, 0xEE, &D_800B74F0.unk14, 0, 3);
    } else {
        D_800B74F0.unk4 = func_80019C58(0, 0, 0xF4, &D_800B74F0.unk8, 0, 3);
        D_800B74F0.unk4 |= func_80019C58(0, 0, 0xEF, &D_800B74F0.unkC, 0, 3);
        D_800B74F0.unk4 |= func_80019C58(0, 0, 0xF0, &D_800B74F0.unk10, 0, 3);
        D_800B74F0.unk4 |= func_80019C58(0, 0, 0xF1, &D_800B74F0.unk14, 0, 3);
        if (func_8004C06C(0x57) == 0) {
            D_800B74F0.unk4 |= func_80019C58(0, 0, 0xF2, &D_800B74F0.unk18, 0, 3);
        }
    }
    D_800B74F0.unk0 = 1;
}

/* Matched by Mc-muffin */
void func_80017B4C(void) {
    s32 sp10[9];
    enum story_section story_section;
    s32 var_a0;

    if (D_800B6D48 == 0) {
        D_800B6D48 = 1;
        D_800B73AC = FieldMapData->pos.x_pos;
        D_800B73AE = FieldMapData->pos.y_pos;
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
            FieldMapData->pos.x_pos = D_800B73AC;
            FieldMapData->pos.y_pos = D_800B73AE;
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
        *FieldMapData->origin = &func_800152D0;
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
        strcpy(str0, D_8009E854[x]);
        FntPrint(&D_800B6D5C, &str0);
        FntPrint("\n\n        x=%3d", D_800B73AC);
        FntPrint("\n        y=%3d", D_800B73AE);
    }
}