#include "common.h"

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_800151DC);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_8001000C);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_80010024);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_8001003C);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_80010054);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_8001006C);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_80010084);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_800100A0);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_800100C0);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_80010268);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_80010274);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_80010280);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_8001028C);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_800102A0);

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", D_800102B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_800152D0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", FieldMapProc);

extern void FntPrint(u8*);                                     /* extern */
extern void func_8001830C(s32);                               /* extern */
extern void func_80019478(s32);                               /* extern */
extern void func_8004505C();       /* extern */
struct thingy {
    u32 things[3];
};
s32 D_800B6C68;
struct thingy D_800B74F0;
overworld_data* FieldMapData;

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


INCLUDE_ASM("asm/smt1/main/nonmatchings/field", FieldMapClose1);

void FntPrint(char[], ...);                                     /* extern */
void UpdateField();                                    /* extern */
void func_8001489C(s32, s32, s32);                       /* extern */
s32 func_800148D4();                                /* extern */
void func_8001F668();                                  /* extern */
void func_8001F6B8();                                  /* extern */
s32 func_8001F920();                                /* extern */
void func_80024484(s32);                                 /* extern */
s32 func_800245B4();                                /* extern */
s32 func_8004C06C(s32);                               /* extern */
overworld_data* FieldMapData;
register u32 *sp asm ("sp");

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


INCLUDE_ASM("asm/smt1/main/nonmatchings/field", FieldMapSleep);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", UpdateField);

/* Matched by MatBourgon and Mc-muffin */
void EncounterBarProc();                               /* extern */
void func_80016A10(s16*, s16*, s16*, ...);           /* extern */
s32 func_80018EE8(s32, s32);                            /* extern */
// s16 func_8004541C();                                /* extern */
void func_800456C8(s32, s32, void*);                       /* extern */
void func_800457A4(s16, s16, void*);                   /* extern */
void func_80045A34();                 /* extern */
// s32 func_80045FF8(s16, s16, s16);                   /* extern */
s32 func_800460AC();                                /* extern */
s32 func_8004C06C(s32);                               /* extern */
extern s8 D_8009E80C[8];
extern u8 D_8009E820[4][4];
overworld_data* FieldMapData;
extern void FieldMapSleepEvent;

struct thingy {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

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

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016504);

overworld_data* FieldMapData;
extern void FieldMapSleepEvent();
extern void func_800147CC();                                  /* extern */
extern void func_8002457C(s16, s16, u8);                      /* extern */
extern void func_8002459C();                                  /* extern */
extern void func_8003FFE4(s16);                               /* extern */
extern s32 func_800453B0(s16, s16);                        /* extern */
extern s32 func_8004C06C(s32);                               /* extern */
extern s32 func_8004F28C();                                /* extern */
extern s32 func_8004F628();                                /* extern */
extern s32 func_8004F9A0();                                  /* extern */
extern s32 func_8004FD4C(s32);                             /* extern */

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


overworld_data* FieldMapData;

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


INCLUDE_ASM("asm/smt1/main/nonmatchings/field", SsGetMute);

s32 func_8004ED78();                                /* extern */
overworld_data* FieldMapData;

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

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016DB8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016EB0);

overworld_data* FieldMapData;

typedef struct unk {
    u8 pad[0x10];
} unk;

extern unk UpperOverlayColors[];
void func_8001D890(int, int, int, int, unk*, int, struct POLY_G4*);
void func_8001D478(int, int, int, int , int, struct DR_MODE*);

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


INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017164);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_800171C8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017218);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017258);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017474);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_8001748C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_800174A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_8001753C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_800175F0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017640);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_8001767C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017694);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017708);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_8001771C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80017948);

INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_800179AC);

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

INCLUDE_RODATA("asm/smt1/main/nonmatchings/field", jtbl_800102E4);
