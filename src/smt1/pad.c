#include "pad.h"

void InitPads(void) {
    bzero(&RawInput, 0x44);
    bzero(&TransDataBuff, 2);
    PadInitDirect(&RawInput[0], &RawInput[1]);
    PadSetAct(0, &TransDataBuff, 2);
    PadSetAct(0x10, &TransDataBuff, 2);
    PadStartCom();
    InitPadInfos();
}

void InitPadInfo(int pad) {
    ControllerInfo[pad].last_button_state = 0xFFFF;
    ControllerInfo[pad].button_state = 0;
    ControllerInfo[pad].held_buttons = 0;
    ControllerInfo[pad].just_pressed_buttons = 0;
    ControllerInfo[pad].frames_since_input_changed = 0;
    ControllerInfo[pad].unk9 = 0;
}

void InitPadInfos(void) {
    int i;

    for (i = 0; i < 2; i++) {
        InitPadInfo(i);
        ControllerInfo[i].control_monitoring = 1;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/pad", func_80018D44);

int GetButton(int pad, int button) {
    return (ControllerInfo[pad].button_state >> button) & 1;
}

int GetJustPressedButton(int pad, int button) {
    return (ControllerInfo[pad].just_pressed_buttons >> button) & 1;
}

int GetHeldButton(int pad, int button) {
    return (ControllerInfo[pad].held_buttons >> button) & 1;
}

void SetControlMonitoring(int pad, char mon) {
    ControllerInfo[pad].control_monitoring = mon;
}

unsigned short GetJustPressedButtons(int pad) {
    return ControllerInfo[pad].just_pressed_buttons;
}

unsigned short GetHeldButtons(int pad) {
    return ControllerInfo[pad].held_buttons;
}

char * GetRawInput(int pad) {
    return &RawInput[pad];
}
