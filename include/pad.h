#include "lib/libpad.h"
#include "common.h"

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

void InitPads(void);
void InitPadInfo(int pad);
void InitPadInfos(void);