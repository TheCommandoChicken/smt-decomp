#include "pad.h"
#include "lib/memory.h"

// func_80018C3C
void InitPads(void) {
	bzero(&RawInput[0][0], sizeof(RawInput));
	bzero(&TransDataBuff, 2);
	PadInitDirect(&RawInput[0][0], &RawInput[1][0]);
	PadSetAct(0, &TransDataBuff, 2);
	PadSetAct(0x10, &TransDataBuff, 2);
	PadStartCom();
	InitPadInfos();
}


// func_80018CB4
void InitPadInfo(s32 pad) {
	ControllerInfo[pad].last_button_state = 0xFFFF;
	ControllerInfo[pad].button_state = 0;
	ControllerInfo[pad].held_buttons = 0;
	ControllerInfo[pad].just_pressed_buttons = 0;
	ControllerInfo[pad].frames_since_input_changed = 0;
	ControllerInfo[pad].unk9 = 0;
}


// func_80018CEC
void InitPadInfos(void) {
	s32 i;

	for (i = 0; i < 2; i++) {
		InitPadInfo(i);
		ControllerInfo[i].control_monitoring = 1;
	}
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/pad", func_80018D44);


// func_80018EE8
s32 GetButton(s32 pad, s32 button) {
	return (ControllerInfo[pad].button_state >> button) & 1;
}


// func_80018F14
s32 GetJustPressedButton(s32 pad, s32 button) {
	return (ControllerInfo[pad].just_pressed_buttons >> button) & 1;
}


// func_80018F40
s32 GetHeldButton(s32 pad, u8 button) {
	return (ControllerInfo[pad].held_buttons >> button) & 1;
}


// func_80018F6C
void SetControlMonitoring(s32 pad, s8 mon) {
	ControllerInfo[pad].control_monitoring = mon;
}


// func_80018F8C
u16 GetJustPressedButtons(s32 pad) {
	return ControllerInfo[pad].just_pressed_buttons;
}


// func_80018FB0
u16 GetHeldButtons(s32 pad) {
	return ControllerInfo[pad].held_buttons;
}


// func_80018FD4
u8 * GetRawInput(s32 pad) {
	return &RawInput[pad][0];
}
