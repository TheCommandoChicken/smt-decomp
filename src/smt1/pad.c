#include "common.h"

u16 TransDataBuff = 0;

void InitPads(void) {
    bzero(&Controller1Input, 0x44);
    bzero(&TransDataBuff, 2);
    PadInitDirect(&Controller1Input[0], &Controller1Input[1]);
    PadSetAct(0, &TransDataBuff, 2);
    PadSetAct(0x10, &TransDataBuff, 2);
    PadStartCom();
    InitPadInfos();
}

void InitPadInfo(s32 pad) {
    ControllerInfo[pad].last_button_state = 0xFFFF;
    ControllerInfo[pad].button_state = 0;
    ControllerInfo[pad].held_buttons = 0;
    ControllerInfo[pad].just_pressed_buttons = 0;
    ControllerInfo[pad].frames_since_input_changed = 0;
    ControllerInfo[pad].field5_0x9 = 0;
}

void InitPadInfos(void) {
    s32 index;

    index = 0;
    do {
        InitPadInfo(index);
        ControllerInfo[index].control_monitoring = 1;
        index += 1;
    } while (index < 2);
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/pad", func_80018D44);

s32 GetButton(s32 pad, s32 button) {
    return (ControllerInfo[pad].button_state >> button) & 1;
}

s32 GetJustPressedButton(s32 pad, s32 button) {
    return (ControllerInfo[pad].just_pressed_buttons >> button) & 1;
}

s32 GetHeldButton(s32 pad, s32 button) {
    return (ControllerInfo[pad].held_buttons >> button) & 1;
}

void SetControlMonitoring(s32 pad, s8 mon) {
    ControllerInfo[pad].control_monitoring = mon;
}

u16 GetJustPressedButtons(s32 pad) {
    return ControllerInfo[pad].just_pressed_buttons;
}

u16 GetHeldButtons(s32 pad) {
    return ControllerInfo[pad].held_buttons;
}

raw_input* GetRawInput(s32 pad) {
    return &RawInput[pad];
}
