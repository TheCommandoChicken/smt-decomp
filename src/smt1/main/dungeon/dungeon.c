#include "dungeon.h"


u8 D_800A0CDC[134][2] = {
	{1, 0},
	{1, 2},
	{3, 3},
	{9, 1},
	{27, 5},
	{29, 1},
	{17, 1},
	{21, 1},
	{25, 1},
	{17, 13},
	{17, 9},
	{85, 1},
	{81, 1},
	{55, 7},
	{43, 9},
	{45, 13},
	{33, 13},
	{37, 13},
	{37, 9},
	{41, 13},
	{43, 1},
	{35, 5},
	{43, 5},
	{35, 1},
	{25, 14},
	{27, 9},
	{21, 9},
	{71, 7},
	{85, 5},
	{81, 5},
	{55, 7},
	{83, 11},
	{91, 11},
	{119, 7},
	{81, 49},
	{103, 11},
	{99, 3},
	{107, 3},
	{91, 3},
	{25, 27},
	{10, 28},
	{65, 49},
	{65, 61},
	{11, 25},
	{17, 25},
	{1, 19},
	{5, 19},
	{9, 19},
	{13, 19},
	{1, 27},
	{5, 27},
	{25, 45},
	{27, 41},
	{29, 45},
	{17, 17},
	{21, 17},
	{17, 21},
	{21, 21},
	{41, 23},
	{53, 23},
	{25, 17},
	{61, 23},
	{71, 23},
	{87, 19},
	{83, 27},
	{91, 27},
	{99, 19},
	{107, 19},
	{99, 27},
	{107, 27},
	{59, 59},
	{115, 23},
	{123, 19},
	{123, 27},
	{1, 35},
	{13, 35},
	{7, 39},
	{19, 35},
	{27, 35},
	{19, 43},
	{57, 53},
	{59, 35},
	{59, 39},
	{59, 47},
	{61, 51},
	{99, 35},
	{99, 39},
	{99, 47},
	{97, 51},
	{89, 49},
	{65, 55},
	{93, 55},
	{71, 49},
	{17, 29},
	{21, 29},
	{77, 49},
	{93, 61},
	{99, 57},
	{7, 13},
	{5, 9},
	{13, 9},
	{11, 3},
	{17, 1},
	{21, 1},
	{25, 1},
	{17, 5},
	{21, 5},
	{255, 255},
	{255, 255},
	{34, 9},
	{43, 51},
	{115, 51},
	{71, 39},
	{87, 39},
	{85, 57},
	{107, 35},
	{115, 35},
	{123, 35},
	{41, 53},
	{23, 55},
	{7, 55},
	{73, 57},
	{35, 35},
	{43, 35},
	{51, 35},
	{41, 49},
	{33, 27},
	{29, 22},
	{9, 57},
	{71, 43},
	{44, 51},
	{0, 0}};
struct dungeon_data * DungeonData;
s32 D_800B6F10;


void func_80028714(struct object * arg0) {
	func_80031A70(DungeonData);
	func_8003102C(DungeonData);
	{
		/*int* scratchpad = (int*)0x1f8003FC;
		asm(";"
			"move    $t0, %0;"
			"sw      $sp, 0($t0);"
			"addiu   $t0, $t0, -0x18;"
			"move    $sp, $t0;"
			:
			: "r"(scratchpad)
			: "t0", "memory"
		);*/
		func_80029398(DungeonData);
		/*asm(";"
			"addiu   $sp, $sp, 0x18;"
			"lw      $sp, 0($sp);"
			"nop;"
			: :
			: "memory"
		);*/
	}
}

void func_80028774(void) {
	if (D_800B6F10 != 0) {
		if (((struct object *)DungeonData->origin)->proc_func == DungeonData->return_function) {
			((struct object *)DungeonData->origin)->proc_func = func_80028714;
		} else {
			((struct object *)DungeonData->origin)->proc_func = DungeonData->return_function;
		}
	}
}

void func_800287C0(struct object * arg0) {
	if (D_800B6F10 != 0) {
		func_80019478(DungeonData->buffer_0_img);
		DungeonData->buffer_0_img = 0;
		func_80019478(DungeonData->buffer_1_img);
		DungeonData->buffer_1_img = 0;
		DungeonData->status &= ~8;
		func_80038990(DungeonData);
		func_80038F00();
		func_8003963C();
		func_80037B9C();
		RemoveObject(DungeonData->unk5BF4);
		DungeonData->unk5BF4 = 0;
		RemoveObject(DungeonData->unk5BF8);
		DungeonData->unk5BF8 = 0;
		RemoveObject(DungeonData->unk5BFC);
		DungeonData->unk5BFC = 0;
		RemoveObject(DungeonData->unk5C00);
		DungeonData->unk5C00 = 0;
		RemoveObject(DungeonData->unk5C18);
		DungeonData->unk5C18 = 0;
		func_80055E4C(DungeonData->unk5C08);
		func_80055E4C(DungeonData->unk5C0C);
		DungeonData->unk5C08 = 0;
		DungeonData->unk5C0C = 0;
		RemoveObject(DungeonData->unk5D80);
		DungeonData->unk5D80 = 0;
		func_8003A178();
		D_800B6F10 = 0;
		func_8001A778(0, 0, 0);
	}
}

void func_80028904(void) {
	if (DungeonData->status & 0x80) {
		func_80029398(DungeonData);
	}
	FntPrint("\n\nDungeonSleep");
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028948);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028B20);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028C20);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/dungeon", func_80028DA0);

void func_80029210(void) {
	DungeonData->unk5B98 = 0;
	DungeonData->unk5B9A = 0;
	DungeonData->unk5B9C = 0;
	DungeonData->last_action = 0;
	DungeonData->unk5BA2 = 0;
	DungeonData->unk5BA4 = 0;
	DungeonData->unk5BA6 = 0;
	DungeonData->unk5BA8 = 0;
	DungeonData->unk5BAA = 0;
	DungeonData->running = 0;
	DungeonData->unk5BAE = 0;
	DungeonData->unk5BB0 = 0;
	DungeonData->unk5BB8 = 0;
	DungeonData->step_counter = 0;
	DungeonData->unk5BC0 = 0;
	DungeonData->buffer = 0;
}

void func_8002925C(struct dungeon_init_data * arg0) {
	s16 temp_v1_3;

	DungeonData->grid_x = arg0->unk0.x;
	DungeonData->x = DungeonData->grid_x;
	DungeonData->grid_z = arg0->unk0.y;
	DungeonData->z = DungeonData->grid_z;
	temp_v1_3 = arg0->initial_dir << 9;
	DungeonData->cardinal_dir = temp_v1_3;
	DungeonData->dir = temp_v1_3;
	DungeonData->rotation.vy = temp_v1_3;
	DungeonData->unk6506 = 0;
	DungeonData->unk5C10 = 0;
	DungeonData->unk5BCC = 0;
}


s32 func_800292AC(s32 arg0, struct dungeon_init_data * init) {
	s32 var_v0;
	struct object * temp_v0;
	struct dungeon_data * temp_v0_2;

	if (D_800B6F10 == 0) {
		D_800B6F10 = 1;
		temp_v0 = CreateObject(0, &func_800287C0, FirstObjectPtrPtr->first, 0x50000, 0, sizeof(struct dungeon_data));
		if (temp_v0 == 0) return 0;
		bzero(temp_v0->data, sizeof(struct dungeon_data));
		temp_v0_2 = temp_v0->data;
		DungeonData = temp_v0_2;
		temp_v0_2->origin = temp_v0;
		temp_v0_2->status |= 0x10;
		func_80038DA0();
		func_80039574();
		func_80039F9C();
		func_8003A0A0();
	} else {
		DungeonData->status &= ~0x10;
	}
	func_8004C6E8(init->appearance);
	func_8002F9DC(init);
	return 1;
}
