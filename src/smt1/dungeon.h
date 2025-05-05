#include "sys/types.h"
#include "libgte.h"
#include "libgpu.h"
#include "libgs.h"
#include "object.h"
#include "common.h"

struct unknown_dobj2_struct {
	s16 unk0;
	s16 unk2;
	s16 unk4;
	u8 unk6;
	u8 unk7;
	GsDOBJ2 unk8;
};

struct dungeon_data_substruct {
	GsDOBJ2 obj;
	u8 unk10;
	u8 unk11;
	s16 unk12;
	s16 unk14;
	u8 unk16;
	u8 unk17;
};

struct astruct_14 {
	s32 unk0;
	s32 unk4;
	u32 x;
	u32 y;
};

struct dungeon_init_data {
	struct astruct_14 unk0;
	u32 initial_dir; /* Created by retype action */
	s32 appearance;
	void * door_text_id;
	s32 unk1C;
	s32 unk20;
};

struct dungeon_data {
	void * origin;
	s32 unk4; /* Sometimes treated as a pair of shorts for no clear reason. */
	u32 status; /* Bit 4 = dark, Bit 8 = initialized, Bit 10 = in battle */
	GsVIEW2 view;
	GsCOORDINATE2 coordinates;
	SVECTOR rotation;
	s16 unk88;
	s16 unk8A;
	s16 unk8C;
	u8 unk8E;
	u8 unk8F;
	GsCOORDINATE2 unk90;
	GsCOORDINATE2 super;
	struct unknown_dobj2_struct dobj2_array[220];
	u8 unk15D0[8];
	GsCOORDINATE2 coord_array[220];
	struct dungeon_data_substruct unk5A98[2];
	GsDOBJ2 unk5AC8[2][5];
	VECTOR light_scale_vect;
	s16 x, y, z;
	s16 dir;
	s16 grid_x, grid_y, grid_z;
	s16 cardinal_dir;
	s16 last_x, last_y, last_z;
	s16 last_dir;
	s16 last_grid_x, last_grid_y, last_grid_z;
	s16 last_card_dir;
	u8 unk5B98[8];
	s16 last_action; /* 0x64 if move, 0x80 if turn, 0x0f if bump. */
	s16 unk5BA2;
	u8 unk5BA4;
	u8 unk5BA5;
	s16 unk5BA6;
	s16 unk5BA8;
	u8 unk5BAA;
	u8 unk5BAB;
	s16 running;
	s16 unk5BAE;
	s16 unk5BB0;
	s16 control_locked; /* Created by retype action */
	u32 unk5BB4;
	s32 unk5BB8;
	s32 step_counter; /* Created by retype action */
	u8 unk5BC0;
	u8 unk5BC1;
	s16 unk5BC2;
	u32 unk5BC4;
	void (* return_function)();
	s32 unk5BCC;
	struct dungeon_init_data tile_data;
	s32 unk5BF4;
	void * unk5BF8;
	void * unk5BFC;
	struct object * unk5C00;
	s32 unk5C04;
	struct object * unk5C08;
	struct object * unk5C0C;
	u16 pad0[3];
	s16 last_move_dir;
	struct object * unk5C18;
	u8 pad1[0x40];
	int unk5C58;
	int unk5C5C;
	s8 * unk5C60;
	u8 pad2[256];
	int unk5D64;
	s16 unk5D68;
	u8 unk5D6A;
	s8 buffer;
	s16 flags;
	s16 brightness;
	s16 unk_counter;
	s16 falling_counter;
	s8 falling_status; /* Created by retype action */
	u8 unk5D75;
	s16 unk5D76;
	u8 pad3[8];
	u32 unk5D80;
	u8 pad4[12];
	s16 x_translation_offset;
	s16 y_translation_offset;
	s16 dungeon_width;    /* Largely unused by the final game. */
	u8 pad5[14];
	s16 index;
    u8 layout[1250];
	s8 culling_data[625];
	u8 unk64F9;
	u8 unk64FA;
	u8 unk64FB;
	s16 current_tile_contents;
	s16 unk64FE;
	u8 unk64FF;
	void * lighting_brightness_addr; /* Created by retype action */
	u8 unk6504;
	u8 unk6505;
	u8 unk6506;
	u8 dark;
	s16 x_offset;
	s16 map_id;
	s8 unk650C;
	u8 unk650D;
	u8 unk650E;
	u8 unk650F;
	u32 * buffer_0_img;
	u32 * buffer_1_img;
	s32 unk6518;
	u32 unk651C;
};

void func_80028714();


u8 D_800A23AC[12] = {1, 0, 2, 2, 3, 2, 2, 0, 2, 2, 0, 0};
/* These might be related to floor numbers? */
s8 D_800A23B8[8] = {5, 4, 3, 2, 1, 0, 0, 0};
s8 D_800A23C0[8] = {3, 2, 1, 0, -1, 0, 0, 0};
s8 D_800A23C8[8] = {3, 2, 1, 0, -1, 0, 0, 0};
s8 D_800A23D0[8] = {5, 4, 3, 2, 1, 0, 0, 0};
s8 D_800A23D8[4] = {0, -2, 0, 0};
s8 D_800A23DC[4] = {4, 3, 2, 1};
s8 D_800A23E0[4] = {30, 1, 0, 0};
s8 D_800A23E4[4] = {45, 30, 0, 0};
s8 D_800A23E8[4] = {45, 32, 0, 0};
s8 D_800A23EC[4] = {45, 32, 0, 0};
s8 (* D_800A23F0[10])[] = {
    &D_800A23B8, 
    &D_800A23C0, 
    &D_800A23C8, 
    &D_800A23D0, 
    &D_800A23D8, 
    &D_800A23DC, 
    &D_800A23E0, 
    &D_800A23E4, 
    &D_800A23E8, 
    &D_800A23EC
};

extern s32 D_800B6F10;
extern struct dungeon_data * DungeonData;
extern MATRIX D_801112D8;