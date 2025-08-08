#include "lib/libpad.h"
#include "common.h"

enum controller_inputs {
    PAD_UP=4,
    PAD_RIGHT=5,
    PAD_DOWN=6,
    PAD_LEFT=7,
    PAD_CIRCLE=13,
};

struct input_info {
    u16 last_button_state;
    u16 button_state;
    u16 held_buttons;
    u16 just_pressed_buttons;
    u8 frames_since_input_changed;
    u8 unk9;
    u8 control_monitoring;
    u8 pad;
};

/* .sbss */
u8 TransDataBuff;

/* .bss */
u8 RawInput[2][0x22];
struct input_info ControllerInfo[2];

extern void SetControlMonitoring(s32 pad, s8 mon);
extern void InitPads(void);
extern void InitPadInfo(s32 pad);
extern void InitPadInfos(void);
extern s32 GetButton(s32 pad, s32 button);
extern s32 GetJustPressedButton(s32 pad, s32 button);
extern s32 GetHeldButton(s32 pad, s32 button);
extern u16 GetJustPressedButtons(s32 pad);
extern u16 GetHeldButtons(s32 pad);
extern u8 * GetRawInput(s32 pad);
extern void func_80018D44(void);