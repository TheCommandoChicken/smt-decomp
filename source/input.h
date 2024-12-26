#include "com.h"

typedef struct smt_buttons smt_buttons;
typedef struct smt_controllerInput smt_controllerInput;

struct smt_buttons
{
	uint16 l2 : 1;
	uint16 r2 : 1;
	uint16 l1 : 1;
	uint16 r1 : 1;
	uint16 triangle : 1;
	uint16 circle : 1;
	uint16 cross : 1;
	uint16 square : 1;
	uint16 select : 1;
	uint16 l3 : 1;
	uint16 r3 : 1;
	uint16 start : 1;
	uint16 up : 1;
	uint16 right : 1;
	uint16 down : 1;
	uint16 left : 1;
};


struct smt_controllerInput 
{
	smt_buttons last_button_state;
	smt_buttons button_state;
	smt_buttons held_buttons; // Not sure about the purpose of this one, but it *seems* like it's tracking which buttons are held down?
	smt_buttons newly_pressed_buttons;
	uint8 frames_since_last_input;  // This value behaves weirdly but as a baseline it prevents held_buttons from being set while it isn't 0.
	uint8 undefined;
	bool control_locked;
};