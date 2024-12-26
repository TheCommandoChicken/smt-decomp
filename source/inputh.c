#include "inputh.h"


static void handleInput(void)
{ 
	int8 bVar1;
	uint16 button_state;
	int input_state;
	uint16* last_button_state;
	uint index;
	int8* input;
	int iVar2;

	index = 0;
	input = Controller1Input;
	iVar2 = 0;
	do {
		last_button_state = (ushort *)((int)&ControllerInfo[0].last_button_state + iVar2);
		if (*input == 0) {
		switch(input[1] >> 4) {
		case 1:
		case 3:
		case 6:
		case 8:
			break;
		default:
			input_state = PadGetState((index & 0xf) << 4);
			if ((input_state != PadStateDiscon) && ((&ControllerInfo[0].control_locked)[iVar2] != false)) 
			{
				button_state = ~*(ushort *)(input + 2);
				*(ushort *)((int)&ControllerInfo[0].button_state + iVar2) = button_state;
				*(ushort *)((int)&ControllerInfo[0].just_pressed_buttons + iVar2) = button_state & ~*last_button_state;
				if (*last_button_state != button_state) 
				{
					(&ControllerInfo[0].field_0x9)[iVar2] = 2;
				}
				if ((*(ushort *)((int)&ControllerInfo[0].button_state + iVar2) & *last_button_state) == 0)
				{
					(&ControllerInfo[0].frames_since_input_changed)[iVar2] = 0;
					(&ControllerInfo[0].field_0x9)[iVar2] = 2;
					*(undefined2 *)((int)&ControllerInfo[0].held_buttons + iVar2) = *(undefined2 *)((int)&ControllerInfo[0].just_pressed_buttons + iVar2);
				}
				else if ((&ControllerInfo[0].frames_since_input_changed)[iVar2] < 4) 
				{
					*(undefined2 *)((int)&ControllerInfo[0].held_buttons + iVar2) = 0;
					(&ControllerInfo[0].frames_since_input_changed)[iVar2] =
					 (&ControllerInfo[0].frames_since_input_changed)[iVar2] + 1;
				}
				else 
				{
					bVar1 = (&ControllerInfo[0].field_0x9)[iVar2];
					(&ControllerInfo[0].field_0x9)[iVar2] = 4;
					(&ControllerInfo[0].frames_since_input_changed)[iVar2] = bVar1;
					*(undefined2 *)((int)&ControllerInfo[0].held_buttons + iVar2) = *(undefined2 *)((int)&ControllerInfo[0].button_state + iVar2);
				}
				*last_button_state = *(ushort *)((int)&ControllerInfo[0].button_state + iVar2);
				goto Increment;
			}
		}
		ClearControllerInfo(index);
	}
	else 
	{
		ClearControllerInfo(index);
	}
Increment:
	input = input + 0x22;
	index = index + 1;
	iVar2 = iVar2 + 0xc;
	if (1 < (int)index) 
	{
	  return;
	}
  } while( true );
}

