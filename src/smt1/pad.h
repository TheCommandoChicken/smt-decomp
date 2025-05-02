#include "libpad.h"

struct input_info {
    unsigned short last_button_state;
    unsigned short button_state;
    unsigned short held_buttons;
    unsigned short just_pressed_buttons;
    unsigned char frames_since_input_changed;
    unsigned char unk9;
    unsigned char control_monitoring;
    unsigned char pad;
};

/* .sbss */
unsigned char TransDataBuff;

/* .bss */
unsigned char RawInput[2][0x22];
struct input_info ControllerInfo[2];

void InitPads(void);
void InitPadInfo(int pad);
void InitPadInfos(void);