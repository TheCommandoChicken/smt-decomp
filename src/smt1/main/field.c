#include "field.h"
#include "lib/libapi.h"

/* .data */
s8 D_8009E80C[8][2] = {
	{ 0, -2},
	{ 2, -2},
	{ 2,  0},
	{ 2,  2},
	{ 0,  2},
	{-2,  2},
	{-2,  0},
	{-2, -2}
};

s8 D_8009E820[5][4] = {
	{0x32, 0x07, 0x3C, 0x15},
	{0x52, 0x08, 0x6C, 0x27},
	{0x0C, 0x08, 0x63, 0x65},
	{0x0A, 0x0B, 0x64, 0x67},
	{0x00, 0x00, 0xFF, 0xFF}
};

u32 OverlayColors[2][4] = {
	{0x184A4A, 0x184A4A, 0x081818, 0x081818},
	{0x081818, 0x081818, 0x184A4A, 0x184A4A}
};

char * FieldMapLocations[59] = {
    "NO DATA",
    "SHINJUKU",
    "YOYOGI",
    "SENDAGAYA",
    "SHINANOMACHI",
    "YOTSUYA",
    "ICHIGAYA",
    "JINGU-GAIEN",
    "AKASAKA",
    "KICHIJOJI",
    "IKEBUKURO",
    "SUGAMO",
    "TABATA",
    "UENO",
    "ITABASHI",
    "NIPPORI",
    "MINAMISENJU",
    "OCHIAI",
    "MEJIRO",
    "ZOHSHIGAYA",
    "OHTSUKA",
    "KOISHIKAWA",
    "KOMAGOME",
    "ASAKUSA",
    "OHKUBO",
    "TAKADANOBABA",
    "WASEDA",
    "KAGURAZAKA",
    "IIDABASHI",
    "KOHRAKUEN",
    "YUSHIMA",
    "OKACHIMACHI",
    "SUIDOUBASHI",
    "OCHANOMIZU",
    "AKIHABARA",
    "KOHJIMACHI",
    "KUDAN",
    "KOHKYO",
    "JINBOHCHO",
    "KANDA",
    "MARUNOUCHI",
    "NIHONBASHI",
    "NAGATACHO",
    "KASUMIGASEKI",
    "GINZA",
    "T.D.L.",
    "SHIBUYA",
    "AOYAMA",
    "TORANOMON",
    "AZABU",
    "ROPPONGI",
    "SHIBA",
    "HIROO",
    "SHINAGAWA",
    "MEGURO",
    "EBISU",
    "SHIROGANEDAI",
    "TAKANAWA",
    "CATHEDRAL"
};

u16 D_800A2D2C[10][4] = {
	{0x8E, 0x147, 0x179, 0x00}, 
	{0x57, 0x179, 0x18A, 0x32}, 
	{0x8F, 0x18A, 0x1A9, 0x43}, 
	{0x90, 0x1A9, 0x1D9, 0x62}, 
	{0x65, 0x1D9, 0x1DB, 0x92}, 
	{0x66, 0x1DB, 0x1E2, 0x94}, 
	{0xEC, 0x1E3, 0x1E4, 0x9C}, 
	{0xA8, 0x1E4, 0x1E5, 0x9D}, 
	{0x80, 0x1E2, 0x1E3, 0x9B}, 
	{0xFFFF, 0, 0, 0}
};

s32 D_800B6C68 = 0;
s8 D_800B6C6C = -1;
s32 D_800B6D48 = 0;
s32 D_800B6D5C;

struct field_map_data * FieldMapData;
DVECTOR D_800B73AC;

struct unk_data_3 D_800B74F0;

/* 96.33% */
/* This is behaviorally matching it just doesn't match when D_800B6C68 gets set to 1. */
void CreateFieldMap(struct return_thing * arg0) {
    struct object* obj;
    struct field_map_data * temp_v0_2;

    if (D_800B6C68 == 0) {
        D_800B6C68 = 1;
        obj = CreateObject(NULL, FieldMapKill, FirstObjectPtrPtr->first, 
            0x40000, OBJ_TYPE_DEFAULT, sizeof(struct field_map_data));
        if (obj == NULL) return;
        bzero(obj->data, sizeof(struct field_map_data));
        temp_v0_2 = obj->data;
        temp_v0_2->origin = obj;
        obj->initialized = 1;
        FieldMapData = temp_v0_2;
        temp_v0_2->event = 0;
        func_80017258(arg0);
        FieldMapData->flags = 0;
        FieldMapData->origin->proc_func = func_800152D0;
    } else {
        FieldMapData->event = 4;
        func_80017258(arg0);
        FieldMapData->origin->proc_func = func_800152D0;
    }
    D_800B6C6C = -1;
}

/* 97.82% */
void func_800152D0(struct object* arg0) {
    RECT sp10;
    RECT sp18;
    void * var_a0;

    switch ((s16)FieldMapData->event) {
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
        
        sp10.x = 0x140;
        sp10.y = 0;
        sp10.w = 0x100;
        sp10.h = 0x100;
        sp18.x = 0;
        sp18.y = 0x1F4;
        sp18.w = 0xE0;
        sp18.h = 1;
        func_800190BC(var_a0, &sp10, &sp18, 4);
        if (func_8004ED78() != 0) {
            sp10.x += 0x40;
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
        SetSpadStack(0x1F8003FC);
        UpdateField();
        ResetSpadStack();
        if (func_8001F920() == 2) {
            func_80024484(0);
            FieldMapData->event = 6;
            return;
        }
        break;
    case 6:
        //SetSpadStack(0x1F8003FC);
        UpdateField();
        //ResetSpadStack();
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

    SetSpadStack(0x1F8003FC);
    UpdateField();
    ResetSpadStack();

    FntPrint("MAPX=%3d : MAPY=%3d\n", FieldMapData->x_scroll, FieldMapData->y_scroll);
    FntPrint("ABSX=%3d : ABSY=%3d\n", FieldMapData->pos.x, FieldMapData->pos.y);
    FntPrint("SYMX=%3d : SYMY=%3d\n", (FieldMapData->pos.character_x_offset - 0x90) / 0x10, (FieldMapData->pos.character_y_offset - 0x68) / 0x10);
    FntPrint("\n\n\n\n\n\n  __FieldMapProc");
}

void FieldMapKill(struct object * arg0) {
    FntPrint("\n\n\n\n\n\n  __FieldMapKill");
    if (D_800B6C68 != 0) {
        func_80019478(D_800B74F0.dat0[2]);
        D_800B74F0.dat0[2] = 0;
        RemoveObject(FieldMapData->unk8524);
        FieldMapData->unk8524 = NULL;
        func_8004505C();
        D_800B6C68 = 0;
    }
}

void func_800158A0(struct object * arg0) {
    FieldMapData->unk1C = 0;
    func_800441F0(1, &FieldMapData->next);
    RemoveObject(FieldMapData->origin);
    FieldMapData->origin = 0;
}

void FieldMapClose1(struct object * self) {
    FntPrint("\n\n\n\n\n\n  __FieldMapClose1");
    if (D_800B6C68 != 0) {
        SetSpadStack(0x1F8003FC);
        UpdateField();
        ResetSpadStack();
            
        if ((FieldMapData->unk84F4 & 0xF) == 9) {
            if (func_800245B4() != 1) {
                return;
            }
            func_8001F6B8();
            FieldMapData->unk84F4 = 0;
        } 
            
        if (func_8001F920() == 2) {
            self->proc_func = func_800158A0;
        }
    }
}

void FieldMapSleepEvent(struct object * self) {
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
        if (func_8004C06C(0xF9)) {
            func_8001489C(1, 0x1F, 1);
        } else {
            func_8001489C(FieldMapData->unk18, FieldMapData->unk20, 1);
        }
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
            FieldMapData->origin->proc_func = FieldMapData->unk84F0;
        }
        break;
    }
    SetSpadStack(0x1F8003FC);
    UpdateField();
    ResetSpadStack();
    FntPrint("\n\n\n\n\n\n  __FieldMapSleep_Event");
}

void FieldMapSleep(struct object * self) {
    if ((FieldMapData->flags & 0x10) > 0) {
        SetSpadStack(0x1F8003FC);
        UpdateField();
        ResetSpadStack();
    }
    FntPrint("\n\n\n\n\n\n  __FieldMapSleep");
}

typedef struct something {
    DVECTOR sp10;
    s32 pad1;
    DVECTOR sp14;
    s32 pad2;
    s16 sp20;
    s16 sp22;
    s32 pad4;
    DVECTOR sp30;
    s32 pad3;
    struct field_map_graphics_container* sp40;
    s32 sp44;
} something;

void UpdateField(void) {
    struct something stack;
    s32 var_s4;
    s32 var_s5;
    s16 temp_v0;
    s16 temp_v0_4;
    s16 temp_v0_7;
    s16 var_a1;
    s16 var_a1_2;
    s16 x;
    s16 y;
    s16 i;
    u32 temp_a3;
    u32 temp_a3_2;
    s32 spd;
    s32 var_2;
    s32 var_1;
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
            spd = 4;
        } else {
            spd = 8;
        }
        if ((FieldMapData->pos.screen_edge_flags & 3) > 0) {
            stack.sp14.vx = temp_a0->x_motion * (spd - temp_a0->motion_countdown);
        } else {
            stack.sp10.vx = temp_a0->x_motion * (spd - temp_a0->motion_countdown);
        }
        if ((FieldMapData->pos.screen_edge_flags & 0xC) > 0) {
            stack.sp14.vy = temp_a0->y_motion * (spd - temp_a0->motion_countdown);
        } else {
            stack.sp10.vy = temp_a0->y_motion * (spd - temp_a0->motion_countdown);
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
            
            AddSprt16(stack.sp10.vx + (x * 0x10), stack.sp10.vy + (y * 0x10), var_2 & 0xf0, temp_a3 & 0xf0, 0x80808080, var_1, 0x22, &temp_s7->tiles1[i]);
            (&temp_s7->tiles1[i])->code |= 2;
            AddDrawMode(0, 1, var_s4, 0, 0x22, &temp_s7->tiles1_dr_modes[i]);
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
            
        AddSprt16(stack.sp10.vx + (x * 0x10), stack.sp10.vy + (y * 0x10), var_2 & 0xf0, temp_a3_2 & 0xf0, 0x80808080, var_1, 0x22, &temp_s7->tiles0[i]);
        AddDrawMode(0, 1, var_s4, 0, 0x22, &temp_s7->tiles0_dr_modes[i]);
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
    DVECTOR sp10;
    DVECTOR sp14;
    DVECTOR sp18;
    DVECTOR sp1C;
    DVECTOR sp20;
    DVECTOR sp24;
    s32 temp_v0_2;
    s32 temp_s0;

    FieldMapData->pos.x_motion = 0;
    FieldMapData->pos.y_motion = 0;
    
    if (func_80018EE8(0, 0xE)) {
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
        
        func_80016A10(&sp10, &sp14, &sp18);
        FieldMapData->pos.screen_edge_flags = 0;
        if (sp10.vx <= (D_8009E820[FieldMapData->unk852E][0] + sp14.vx)) {
            FieldMapData->pos.screen_edge_flags |= 1;
        } else if (sp10.vx >= (D_8009E820[FieldMapData->unk852E][2] + sp18.vx)) {
            FieldMapData->pos.screen_edge_flags |= 2;
        }
        if (sp10.vy <= (D_8009E820[FieldMapData->unk852E][1] + sp14.vy)) {
            FieldMapData->pos.screen_edge_flags |= 4;
        } else if (sp10.vy >= (D_8009E820[FieldMapData->unk852E][3] + sp18.vy)) {
            FieldMapData->pos.screen_edge_flags |= 8;
        }

        func_80045A34();
        EncounterBarProc();
        temp_s0 = func_800460AC() & 0xF;
        if (temp_s0 == 9) {
            func_80016A10(&sp1C, &sp20, &sp24);
            func_800457A4(sp1C.vx, sp1C.vy, &FieldMapData->next);
            FieldMapData->flags |= 8;
            return;
        } else if ((temp_s0 != 8) && (func_8004C06C(0xFA) == 0) && ((func_8004C06C(0xA2) == 1) || (func_8004C06C(0xA6) == 1)) && (temp_s0 == 0xA)) {
            func_800456C8(1, 1, &FieldMapData->next);
            FieldMapData->unk84F4 = 0;
            FieldMapData->event = 0;
            FieldMapData->unk84F0 = FieldMapData->origin->proc_func;
            FieldMapData->origin->proc_func = FieldMapSleepEvent;
        }
    }
}


s32 func_80016504(void) {
    struct object * var_v1;
    u32 temp_v1;
    u32 temp_s1;

    FieldMapData->unk8528 = func_80045588(FieldMapData->pos.x, FieldMapData->pos.y);
    temp_v1 = FieldMapData->unk84F4 & 0xF;
    temp_s1 = 0;
    if (temp_v1 == 8) {
        temp_s1 = 1;
        func_800456C8(FieldMapData->pos.x, FieldMapData->pos.y, &FieldMapData->next);
        FieldMapData->unk84F4 = 0;
        FieldMapData->event = 0;
        FieldMapData->unk84F0 = FieldMapData->origin->proc_func;
        FieldMapData->origin->proc_func = FieldMapSleepEvent;
    }
    else if (temp_v1 == 9) {
        func_80018F6C(0, 0, FieldMapData);
        func_800457A4(FieldMapData->pos.x, FieldMapData->pos.y, &FieldMapData->next);
        func_8004C6E8(FieldMapData->unk18);
        func_80024484(1);
        temp_s1 = 1;
        FieldMapData->origin->proc_func = &FieldMapClose1;
    }
    return temp_s1;
}

void ExecuteFieldMovement() {
    s16 var_s1;
    s16 temp_v0_2;
    struct field_pos * temp_s0;

    temp_s0 = &FieldMapData->pos;
    temp_s0->motion_countdown -= 1;
    if (temp_s0->motion_countdown <= 0) {
        FieldMapData->step_counter += 1;
        func_8004F9A0();
        temp_v0_2 = func_8004FD4C(FieldMapData->step_counter);
        if ((temp_v0_2 & 4) > 0) {
            var_s1 = 0x51;
        } else if ((temp_v0_2 & 2) > 0) {
            var_s1 = 0x52;
        } else if ((temp_v0_2 & 1) > 0) {
            var_s1 = 0x4F;
        }
        if (temp_v0_2 > 0) {
            func_8002459C();
            func_8003FFE4(var_s1);
        }
        if (func_8004F628() == 0) {
            func_800147CC();
        }
        if (temp_s0->x_motion < 0) {
            if (FieldMapData->pos.screen_edge_flags & 2) {
                temp_s0->character_x_offset += 0x10;
            } else if (temp_s0->character_x_offset < 0x90) {
                temp_s0->character_x_offset += 0x10;
            } else {
                FieldMapData->x_scroll += 1;
            }
            FieldMapData->pos.x += 1;
        } else if (temp_s0->x_motion > 0) {
            if (FieldMapData->pos.screen_edge_flags & 1) {
                temp_s0->character_x_offset -= 0x10;
            } else if (temp_s0->character_x_offset >= 0x91) {
                temp_s0->character_x_offset -= 0x10;
            } else {
                FieldMapData->x_scroll -= 1;
            }
            FieldMapData->pos.x -= 1;
        }
        if (temp_s0->y_motion < 0) {
            if (FieldMapData->pos.screen_edge_flags & 8) {
                temp_s0->character_y_offset += 0x10;
            } else if (temp_s0->character_y_offset < 0x68) {
                temp_s0->character_y_offset += 0x10;
            } else {
                FieldMapData->y_scroll += 1;
            }
            FieldMapData->pos.y += 1;
        } else if (temp_s0->y_motion > 0) {
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
        FieldMapData->unk84F4 = func_800453B0(FieldMapData->pos.x, FieldMapData->pos.y);
        if ((FieldMapData->unk84F4 & 0xF) < 8 || (FieldMapData->unk84F4 & 0xF) >= 10) {
            if (func_8004F28C() == 1) {
                FieldMapData->random_encounter = 1;
                return;
            }
        }
        if ((func_8004C06C(0xF9) != 0) && ((temp_s0->motion_countdown == -1))) {
            FieldMapData->unk84F4 = 0;
            FieldMapData->event = 0;
            FieldMapData->unk84F0 = FieldMapData->origin->proc_func;
            FieldMapData->origin->proc_func = FieldMapSleepEvent;
        }
    }
}


void func_80016A10(DVECTOR * arg0, DVECTOR * arg1, DVECTOR * arg2) {
    arg0->vx = FieldMapData->pos.x;
    arg0->vy = FieldMapData->pos.y;
    if (FieldMapData->pos.x_motion > 0) {
        arg0->vx -= 1;
        arg1->vx = 0;
        arg2->vx = -1;
    } else if (FieldMapData->pos.x_motion < 0) {
        arg0->vx += 1;
        arg1->vx = 1;
        arg2->vx = 0;
    }
    if (FieldMapData->pos.y_motion > 0) {
        arg0->vy -= 1;
        arg1->vy = 0;
        arg2->vy = -1;
    } else if (FieldMapData->pos.y_motion < 0) {
        arg0->vy += 1;
        arg1->vy = 1;
        arg2->vy = 0;
    }
}

s32 func_80016AF0(void) {
    return func_800460F0() != 0;
}

s32 func_80016B10(void) {
    s32 temp_v0;

    temp_v0 = func_8004ED78();
    if (temp_v0 == 3) {
        return 3;
    } else if (temp_v0 < 3 && temp_v0 > 0) {
        return 2;
    } else if (temp_v0 == 0) {
        return (FieldMapData->pos.x > 0x47);
    } else {
        return 4;
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/field", func_80016B74);

/* CLUT related code. */
s32 func_80016DB8(s32 arg0, u16 arg1) {
    s16 sp10[4];
    s16 * x;
    s16 var_a0;

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
    AddPolyG4(0x10, 0x10, 0x120, 0x68, &OverlayColors[0], 0x1D, &temp_s0_2->upper_overlay);
    temp_s0_2->upper_overlay.code |= 2;
    AddPolyG4(0x10, 0x78, 0x120, 0x68, &OverlayColors[1], 0x1D, &temp_s0_2->lower_overlay);
    temp_s0_2->lower_overlay.code |= 2;
    AddDrawMode(0, 1, 0x20, 0, 0x1D, &temp_s0_2->overlay_dr_mode);
}


void EncounterBarProc(void) {
    s32 var_a0;
    s32 var_s0;
    s32 temp_v0;

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
    arg0->init_x = FieldMapData->pos.x;
    arg0->init_y = FieldMapData->pos.y;
    arg0->unk10 = FieldMapData->pos.movement_dir;
    arg0->unk14 = FieldMapData->unk8504;
}

s32 func_800171C8(struct return_thing* arg0) {
    s32 var_a2;

    var_a2 = 0;
    if ((FieldMapData->flags & 8) > 0) {
        arg0->init_x = FieldMapData->unkC;
        arg0->init_y = (s32)FieldMapData->unk10;
        var_a2 = 1;
        FieldMapData->flags &= 0xF7;
    }
    return var_a2;
}

void func_80017218(void) {
    if (D_800B6C68 != 0) {
        RemoveObject(FieldMapData->origin);
        FieldMapData->origin = 0;
    }
}

void func_80017258(struct return_thing* arg0) {
    DVECTOR p;

    FieldMapData->pos.x = arg0->init_x;
    FieldMapData->pos.y = arg0->init_y;
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

s32 func_80017474(void) {
    return FieldMapData->flags & 1;
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

void func_8001753C(s16 arg0) {    
    if (arg0 == 0) {
        FieldMapData->flags &= 0xEF;
    } else if (arg0 == 1) {
        FieldMapData->flags |= 0x10;
    } else {
        return;
    }
    
    if (FieldMapData->origin->proc_func != FieldMapSleep) {
        func_80024484(1);
        FieldMapData->unk84F0 = FieldMapProc;
        FieldMapData->origin->proc_func = FieldMapSleep;
    }
}

void func_800175F0(void) {
    if (D_800B6C68 != 0) {
        EncounterBarProc();
        FieldMapData->origin->proc_func = FieldMapData->unk84F0;
        func_80024484(0);
        func_800238A8(2);
    }
}

void func_80017640(int arg0, int arg1) {
    func_800458A8(FieldMapData->pos.x, FieldMapData->pos.y, arg0, arg1);
}

s32 func_8001767C(void) {
    return FieldMapData->unk8528 + 0xA5;
}

s16 func_80017694(void) {
    s32 temp_a1;
    s32 temp_a0;

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

s32 func_8001771C(void) {
    RECT sp18;
    RECT sp20;

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
            sp18.x = 0x140;
            sp18.y = 0;
            sp18.w = 0x100;
            sp18.h = 0x100;
            sp20.x = 0;
            sp20.y = 0x1F4;
            sp20.w = 0xE0;
            sp20.h = 1;
            if (func_8004ED78() != 0) {
                sp18.x += 0x40;
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
    struct return_thing sp10;
    enum story_section story_section;
    s32 var_a0;

    if (D_800B6D48 == 0) {
        D_800B6D48 = 1;
        D_800B73AC.vx = FieldMapData->pos.x;
        D_800B73AC.vy = FieldMapData->pos.y;
    } else if (D_800B6D48 == 1) {
        if ((func_80018EE8(0, 7)) && (func_80018EE8(0, 0xB))) {
            if (--D_800B73AC.vx < 0) {
                D_800B73AC.vx = 0x7F;
            }
        } else if ((func_80018EE8(0, 5)) && (func_80018EE8(0, 0xB))) {
            if (++D_800B73AC.vx >= 0x80) {
                D_800B73AC.vx = 0;
            }
        } else if ((func_80018EE8(0, 4)) && (func_80018EE8(0, 0xB))) {
            if (++D_800B73AC.vy >= 0x80) {
                D_800B73AC.vy = 0;
            }
        } else if ((func_80018EE8(0, 6)) && (func_80018EE8(0, 0xB))) {
            if (--D_800B73AC.vy < 0) {
                D_800B73AC.vy = 0x7F;
            }
        } else if (func_80018F14(0, 7)) {
            if (--D_800B73AC.vx < 0) {
                D_800B73AC.vx = 0x7F;
            }
        } else if (func_80018F14(0, 5)) {
            if (++D_800B73AC.vx >= 0x80) {
                D_800B73AC.vx = 0;
            }
        } else if (func_80018F14(0, 4)) {
            if (++D_800B73AC.vy >= 0x80) {
                D_800B73AC.vy = 0;
            }
        } else if (func_80018F14(0, 6)) {
            if (--D_800B73AC.vy < 0) {
               D_800B73AC.vy = 0x7F;
            }
        } else if (func_80018F14(0, 0xD)) {
            D_800B6D48 = 2;
            FieldMapData->pos.x = D_800B73AC.vx;
            FieldMapData->pos.y = D_800B73AC.vy;
        }
    } else if (D_800B6D48 == 2) {
        bzero(&sp10, 0x24);
        sp10.init_x = D_800B73AC.vx;
        sp10.init_y = D_800B73AC.vy;
        sp10.unk10 = FieldMapData->pos.movement_dir;
        func_80017258(&sp10);
        D_800B6D48 = 3;
    } else if (D_800B6D48 == 3) {
        D_800B6C6C = 0;
        func_80018F6C(0, 0);
        D_800B6D48 = 0;
        FieldMapData->origin->proc_func = func_800152D0;
    }

    story_section = func_8004ED78();
    {
        char str0[16];
        char * sp80[5] = {
            "HAKAI_BEF",
            "HAKAI_AFT",
            "NEBI_KILL",
            "KOZUI",
            "NO_DATA"
        };
        s32 x;

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
        x = func_80045658(D_800B73AC.vx, D_800B73AC.vy);
        strcpy(str0, FieldMapLocations[x]);
        FntPrint(&D_800B6D5C, &str0);
        FntPrint("\n\n        x=%3d", D_800B73AC.vx);
        FntPrint("\n        y=%3d", D_800B73AC.vy);
    }
}