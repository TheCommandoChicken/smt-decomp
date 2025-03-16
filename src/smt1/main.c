#include "main.h"


void start(void) {

}


/* gcc 2.8.1 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.77 -G0 */
/* 100% */
s32 main(void) {
    Init();
    MainLoop();
    Empty();
    return 0;
}


/* gcc 2.8.1 + maspsx; -gcoff -Wa,--aspsx-version=2.77 -O3 -G8 */
/* 100% */
/* Matched by anon */
void Init(void) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_v0;
    u32 tmp;
    s32 rem;

    SysInit();
    D_800B6C58 = 0x200000;
    D_800B6C54 = 0x8000;
    temp_v0 = &D_80125368 - D_80010308;
    temp_a0 = temp_v0 / 0x800;
    rem = temp_v0 % 0x800;
    tmp = 0x80000000;
    
    temp_a0_2 = D_80010308 + (rem != 0 ? temp_a0 + 1 : temp_a0) * 0x800;
    temp_a0_2 += (8 - (temp_a0_2 & 7)) & 7;
    func_80019384(temp_a0_2, D_800B6C58 + tmp - temp_a0_2 - D_800B6C54);
    func_80017FF0(&Random, 0);
    VSyncCallback(&VSyncCallbackFunc);
    DrawSyncCallback(&DrawSyncCallbackFunc);
    SetDispMask(1);
    VSync(0);
    GameInit();
}


/* gcc 2.8.1 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.77 -G0 */
/* 100% */
void MainLoop(void) {
    while (1) {
        func_80018D44();
        func_8001A54C();
        func_8001847C();
        func_80019958();
        DrawSync(0);
        VSync(2);
        func_800186A0();
        func_80040788();
        func_8001A610();
        func_80021CB0();
    }
}


/* Obviously matches 100% with basically any settings */
void Empty(void) {

}


/* gcc 2.95.2 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.86 -G4 */
/* 100% */
void SysInit(void) {
    ResetCallback();
    func_8001A454();
    func_8003F2B8();
    func_800198BC();
    func_80062318();
    func_80018C3C();
    StartRCnt(0);
}


/* gcc 2.95.2 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.86 -G4 */
/* 100% */
void VSyncCallbackFunc(void) {
    func_8003F9B8();
    SsSeqCalledTbyT();
    func_8004F854();
}


/* gcc 2.95.2 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.86 -G4 */
/* 100% */
void DrawSyncCallbackFunc(void) {
    return;
}


/* gcc 2.95.2 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.77 -G4 */
/* 100% */
u32 Random(void) {
    return std::rand();
}


/* gcc 2.8.1 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.86 -G4 */
/* 96.93% */
persistent_objects* GameInit(void) {
    object* temp_v0;
    game_manager_data* temp_s0;

    func_80018F6C(0, 0);
    func_80040A08(-1);
    bzero(&PersistentObjects, 0x30);
    PersistentObjects.screen_overlay = func_8001F5EC();
    PersistentObjects.party_hud = func_800253E8(0);
    PersistentObjects.moon_hud = func_8002276C();
    PersistentObjects.money_hud = func_80022B2C();
    PersistentObjects.mag_hud = func_80022DFC();
    PersistentObjects.nav_hud = func_80023148();
    PersistentObjects.enc_bar = func_80023838();
    PersistentObjects.field_char = func_80023F94();
    PersistentObjects.border = func_800245D0();
    PersistentObjects.unk0 = func_800527E8();
    func_80014538();
    temp_v0 = func_800180DC(GameManagerProc, func_80014530, *FirstObjectPtrPtr, 1, 0, 0xC);
    PersistentObjects.game_manager = temp_v0;
    temp_s0 = (game_manager_data*)temp_v0->data;
    bzero(temp_s0, 0xC);
    temp_s0->data_struct = func_80019C58(0, D_80010308, 7, 0, 0, 1);
    return &PersistentObjects;
}


/* gcc 2.8.1 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.77 -G0 */
/* 100% */
void GameManagerProc(object* self) {
    u8 frame_counter;
    object* temp_a0;
    game_manager_data* data;

    data = self->data;
    frame_counter = data->frame_counter;
    switch (frame_counter) {                              /* irregular */
    case 0:
        func_80018F6C(0, 1);
        data->frame_counter = data->frame_counter + 1;
    case 1:
        if (func_80019ECC(data->data_struct) != 0) {
            data->field1_0x4 = func_80117E70(data->field2_0x8);
            data->frame_counter = data->frame_counter + 1;
        case 2:
            temp_a0 = data->field1_0x4;
            if (temp_a0->hidden == 1) {
                func_8001830C(temp_a0);
                data->field1_0x4 = 0;
                data->frame_counter = data->frame_counter + 1;
            case 3:
                func_800529E8(UnknownStruct);
                func_8004407C();
            }
        }
        return;
    }
}


/* PSY-Q 4.3; -mel -G4 -g0 -O3*/
/* 100% */
/* Side note: this doesn't match with the same settings as other functions. */
void func_800144D4(s8 arg0) {
    game_manager_data* temp_s0;

    temp_s0 = PersistentObjects->data;
    temp_s0->frame_counter = 1;
    temp_s0->field2_0x8 = arg0;
    temp_s0->data_struct = func_80019C58(0, D_80010308, 7, 0, 0, 1);
}


void func_80014530(void) {

}

/* gcc 2.8.1 + maspsx; -O2 -gcoff -Wa,--aspsx-version=2.77 -G4 */
/* 100% */
void GameDataInit(void) {
    func_80044178();
    func_8001497C();
    func_8004BBC0();
    func_80044F94();
    func_8003A094();
    func_80049A34();
    func_8004403C();
    func_80026BEC();
    func_80025308(0);
    func_800225C8(3, 3, 3, 3, 3);
    func_80024484(3);
    func_80024648(3);
    func_8005645C();
}


/* gcc 2.8.0 + maspsx; -O2 -G4 -gcoff -Wa,--aspsx-version=2.77 */
/* 100% */
/* Matched by MrSapps */
void func_800145CC(s32 arg0) {
    object* temp_v0;

    func_80018F6C(0, 0);
    temp_v0 = func_800180DC(&func_80014698, 0, *FirstObjectPtrPtr, -3, 0, 8);
    if (temp_v0 != 0) {
        temp_v0 = temp_v0->data;
        ((object_data*)temp_v0)->object.next.chr = 0;
        ((object_data*)temp_v0)->object.origin = arg0;
        func_80044318(1);
        UnknownStruct[0]->flags = 0x82;
        func_8004018C(func_800408BC(0), 0x3C, 0, 3);
        func_8004018C(func_800408BC(1), 0x3C, 0, 3);
        func_80040A08(2);
        func_8001F6B8();
    }
}


/* gcc 2.8.1 + maspsx; -O2 -G4 -gcoff -Wa,--aspsx-version=2.77 */
/* 100% */
void func_80014698(object* arg0) {
    s32 (*temp_v0)();
    u8 temp_v1;
    unknown_data* temp_s0;

    temp_s0 = arg0->data;
    temp_v1 = temp_s0->unk4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (func_8001F920() == 2) {
            func_80044178();
            ClearUnknownStruct();
block_14:
            temp_s0->unk4 = (u8) (temp_s0->unk4 + 1);
            return;
        }
        return;
    case 1:
        func_800187AC(0x10, 0x0FFFFFFF);
        func_800187AC(-4, -4);
        goto block_14;
    case 2:
        if ((func_80018774() <= 0) && ((temp_v0 = temp_s0->unk0, (temp_v0 == 0)) || (temp_v0() == 0))) {
            GameDataInit();
            temp_s0->unk4 = (u8) (temp_s0->unk4 + 1);
        }
        break;
    case 3:
        func_8001830C();
        func_80040A08(-1);
        func_80018F6C(0, 1);
        func_8001F7A0(0, 1);
        func_800144D4(1);
        break;
    }
}


/* gcc 2.8.1 + maspsx; -O2 -G4 -gcoff -Wa,--aspsx-version=2.77 */
/* 100% */
/* Matched by Mc-muffin */
s32 func_800147CC(void) {
    if (func_8004C06C(0xFE) == 0) {
        func_800145CC(func_80014804);
        return 1;
    }
    return 0;
}


/* gcc 2.8.1 + maspsx; -O2 -G4 -gcoff -Wa,--aspsx-version=2.77 */
/* 79.74% */
s32 func_80014804(void) {
    if (D_800B6C5C == 0) {
        func_80040A08(-1);
        func_80040204(0x14);
        func_80040A08(2);
        D_800B6C5C += 1;
        return 1;
    } else if (func_80040A68(0) == 0) {
        func_80046FF0(3, 1);
        func_80040A08(-1);
        func_8004018C(0x14, 0x3C, 0, 3);
        func_80040A08(2);
        D_800B6C5C = 0;
        return 0;
    }
    return 1;
}


void func_8001489C(s32 arg0, s32 arg1, s32 arg2) {
    func_80052910(UnknownStruct, arg0, arg1, 0, arg2);
}


void func_800148D4(void) {
    func_8005286C(UnknownStruct);
}


void func_800148FC(s32 arg0) {
    func_80052890(UnknownStruct, arg0);
}

void func_80014928(s32 arg0) {
    u16 temp_v0;
    unknown_object_struct *temp_sp;
    
    temp_sp = PersistentObjects->unk[0];
    temp_v0 = *(u16 *)((arg0 * 2) + temp_sp->field6_0x10);
    temp_sp->field103_0x8a = temp_v0;
    temp_sp->field102_0x88 = temp_v0;
    PersistentObjects->unk[0]->flags = 2;
}

s32 func_80014964(void) {
    return UnknownStruct[0]->field401_0x1d8;
}

void ClearUnknownStruct(void) {
    func_80052BF0(PersistentObjects.unk0);
    func_80019478(PersistentObjects.unk0->field3_0x4);
    PersistentObjects.unk0->field3_0x4 = 0;
    PersistentObjects.unk0->field3_0x4 = 0;
    PersistentObjects.unk0->flags = 0x80;
}


void func_800149E4(s32 arg0) {
    D_800B74EC = arg0;
}

s32 func_800149F0(s32 arg0) {
    return D_800B74EC + ((*(u32*)((arg0 * 4) + D_800B74EC) / 4) * 4);
}

s32 func_80014A18(object* arg0) {
    return arg0->data->six_twenty_byte_struct.field495_0x269 == 0;
}

object* func_80014A2C(void) {
    object* temp_v0;

    temp_v0 = func_800180DC(&func_80014AF4, 0, *FirstObjectPtrPtr, 0xC00000, 0, 0x26C);
    if (temp_v0 == 0) {
        return 0;
    } else {
        bzero(temp_v0->data, 0x26C);
        func_800225C8(1, 1, 1, 1, 2);
        func_8001F984(0, 0, 0x140, 0xF0, 0, 0x40404040, 2, 8, 0x18);
    }
    return temp_v0;
}


extern u32 D_80010000;

void func_80014AF4(object* arg0) {
    u32 var_a2;
    s16 temp_v1_2;
    u8 temp_v1;
    astruct_13* temp_s0;
    unknown_620_byte_struct* temp_s1;

    temp_s1 = arg0->data;
    temp_v1 = temp_s1->field496_0x26a;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s1->field0_0x0 = func_8001513C(temp_s1);
        func_80018CEC();
        temp_s1->field496_0x26a = (u8) (temp_s1->field496_0x26a + 1);
        /* fallthrough */
    case 1:
        temp_s0 = temp_s1->field0_0x0->data;
        if (func_80018F14(0, 0xC) != 0) {
            temp_s1->field495_0x268 = (u8) (temp_s1->field495_0x268 ^ 1);
        }
        if (func_80018F14(0, 3) != 0) {
            temp_s0->field39_0x28 = 0;
        }
        if (temp_s1->field495_0x268 != 0) {
            func_80014CD4(temp_s1, temp_s0->field38_0x26);
        }
        if (temp_s0->field42_0x2c != 0) {
            temp_v1_2 = temp_s0->field39_0x28;
            switch (temp_v1_2) {                    /* switch 1; irregular */
            case 1:                                 /* switch 1 */
                //arg0->proc_func = (s32) (sp + (temp_s0->field38_0x26 * 4))->unk28;
                break;
            case 2:                                 /* switch 1 */
            case 0:                                 /* switch 1 */
                temp_s1->field495_0x269 = 1;
                if (func_80044114() == 0) {
                    var_a2 = 1;
                } else {
                    var_a2 = 0;
                }
                func_800225C8(0, 1, var_a2, 0);
                func_8001F984(0, 0, 0x140, 0xF0, 0x40404040, 0, 2, 8, 0x18);
                break;
            }
            func_8001830C(temp_s1->field0_0x0);
            temp_s1->field0_0x0 = 0;
            temp_s1->field496_0x26a = 0;
        }
        return;
    }
}


void func_80014CD4(unknown_620_byte_struct* arg0, s32 arg1) {
    pos pos_lookup[2];
    s32 temp_s0;
    pos* temp_s0_2;

    pos_lookup[0].x = 0x18;
    pos_lookup[0].y = 0x88;
    pos_lookup[1].x = 0x18;
    pos_lookup[1].y = 0x6f;
    temp_s0 = func_80044114() == 0;
    temp_s0_2 = &pos_lookup[temp_s0 / 2];
    func_80021DBC(func_8004B888(arg1 + 0x304), (s16) (temp_s0_2->x + 4), (s16) (temp_s0_2->y + 2), 5, 0, 0, 0x15);
    if (func_80044114() == 0) {
        func_80020AAC(temp_s0_2->x, (temp_s0_2->y << 0x10) >> 0x10, 0x110, 0x10, 0x15, arg0 + ((arg0->buffer * 0x78) + 0x178), 0);
    } else {
        func_800209F0(temp_s0_2->x, (s32) (temp_s0_2->y << 0x10) >> 0x10, 0x110, 0x10, 0x15, arg0 + ((arg0->buffer * 0xB4) + 0x10), 1);
    }
    arg0->buffer = (arg0->buffer ^ 1);
}


void func_80014E34(object* arg0) {
    s32 temp_s1;
    u8 temp_v1;
    unknown_620_byte_struct* temp_s0;

    temp_s0 = arg0->data;
    temp_v1 = temp_s0->field496_0x26a;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0->field0_0x0 = func_8005B67C(2, 0, 0x900000);
        temp_s0->field496_0x26a = (u8) (temp_s0->field496_0x26a + 1);
        /* fallthrough */
    case 1:
        temp_s1 = temp_s0->field0_0x0->data;
        if (func_8005D870(temp_s1) != 0) {
            if (func_8005D8BC(temp_s1) != 0) {
                func_800145CC(0);
                arg0->proc_func = 0;
                return;
            }
            func_8004440C();
            temp_s0->field496_0x26a = (u8) (temp_s0->field496_0x26a + 1);
        case 2:
            if (func_80040A68(0) == 0) {
                arg0->proc_func = &func_80014AF4;
                func_8001830C(temp_s0->field0_0x0);
                temp_s0->field0_0x0 = 0;
                temp_s0->field496_0x26a = 0;
            }
        } else {
            return;
        }
        break;
    }
}

void func_80014F44(object* arg0) {
    object_data* temp_s1;
    u8 temp_v1;
    unknown_620_byte_struct* temp_s0;
    u32* temp_v0;

    temp_s0 = arg0->data;
    temp_v1 = temp_s0->field496_0x26a;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0->field0_0x0 = func_8005B67C(3, 0, 0x900000);
        temp_s0->field496_0x26a = (u8) (temp_s0->field496_0x26a + 1);
        /* fallthrough */
    case 1:
        temp_s1 = temp_s0->field0_0x0->data;
        if (func_8005D870(temp_s1) != 0) {
            if (func_8005D8BC(temp_s1) == 0) {
                func_8004440C();
                temp_s0->field496_0x26a = 3;
                return;
            }
            func_8001F6B8();
            temp_s0->field496_0x26a = (u8) (temp_s0->field496_0x26a + 1);
        case 2:
            if (func_8001F920() == 2) {
                func_8001830C(temp_s0->field0_0x0);
                func_8001830C(arg0);
                temp_v0 = func_8004C5A8();
                func_800441F0((temp_v0[1]), temp_v0);
                return;
            }
        } else {
            return;
        }
        break;
    case 3:
        if (func_80040A68(0) == 0) {
            arg0->proc_func = func_80014AF4;
            func_8001830C(temp_s0->field0_0x0);
            temp_s0->field496_0x26a = 0;
        }
        break;
    }
}

void func_800150A0(object* arg0) {
    u8 temp_v1;
    unknown_620_byte_struct* temp_s0;

    temp_s0 = arg0->data;
    temp_v1 = temp_s0->field496_0x26a;
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0->field0_0x0 = func_800494D0(0xC00000);
        temp_s0->field496_0x26a = (u8) (temp_s0->field496_0x26a + 1);
        /* fallthrough */
    case 1:
        if (temp_s0->field0_0x0->field11_0x2c != 1) {
            arg0->proc_func = &func_80014AF4;
            func_8001830C(temp_s0->field0_0x0);
            temp_s0->field0_0x0 = 0;
            temp_s0->field496_0x26a = 0;
        }
        return;
    }
}

void func_8001513C(s32* arg0) {
    s32 var_s0;
    s32* var_s1;

    var_s0 = 0;
    var_s1 = arg0;
    do {
        *(var_s1 + 1) = func_8004B888(var_s0 + 0x297);
        var_s0 += 1;
        var_s1 += 1;
    } while (var_s0 < 3);
    func_80065F38(4, 0x7F, 0x29, 0x42, 3, 0, arg0 + 1, 3, 5, 0xC00000, 0, 0, 1);
}
