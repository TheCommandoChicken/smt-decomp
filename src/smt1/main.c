#include "main.h"

s32 main(void) {
    init();
    func_800141B4();
    func_80014214();
    return 0;
}

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

void SysInit(void) {
    ResetCallback();
    func_8001A454();
    func_8003F2B8();
    func_800198BC();
    func_80062318();
    func_80018C3C();
    StartRCnt(0);
}

void VSyncCallbackFunc(void) {
    func_8003F9B8();
    SsSeqCalledTbyT();
    func_8004F854();
}

void DrawSyncCallbackFunc(void) {
    return;
}

extern unknown_object_struct *UnknownStruct;

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

extern s32 D_80010308;
extern object* GameManager;

void func_800144D4(s8 arg0) {
    game_manager_data* temp_s0;

    temp_s0 = GameManager->data;
    temp_s0->frame_counter = 1;
    temp_s0->field2_0x8 = arg0;
    temp_s0->data_struct = func_80019C58(0, D_80010308, 7, 0, 0, 1);
}

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

extern s32* FirstObjectPtrPtr;
extern unknown_object_struct* UnknownStruct[2];
extern void* func_80014698;

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

extern void (func_80014804)();

s32 func_800147CC(void) {
    if (func_8004C06C(0xFE) == 0) {
        func_800145CC(&func_80014804);
        return 1;
    }
    return 0;
}

extern s32 UnknownStruct;

void func_8001489C(s32 arg0, s32 arg1, s32 arg2) {
    func_80052910(UnknownStruct, arg0, arg1, 0, arg2);
}

extern s32 UnknownStruct;

void func_800148D4(void) {
    func_8005286C(UnknownStruct);
}

extern s32 UnknownStruct;

void func_800148FC(s32 arg0) {
    func_80052890(UnknownStruct, arg0);
}
