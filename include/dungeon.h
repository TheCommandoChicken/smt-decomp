#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libgs.h"
#include "object.h"
#include "common.h"


struct dobj2_substruct {
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
	u8 door_text_id;
	s32 unk1C;
	s32 unk20;
};

struct lighting_info {
	u8 unk0;
	u8 unk1;
	u8 unk2;
	u8 unk3;
	s16 unk4;
	s16 unk6;
	s16 unk8;
	s16 unkA;
	u8 unkC;
	u8 unkD;
	u8 unkE;
	u8 unkF;
};

struct unk_data_24 {
	GsDOBJ2 obj;
	MATRIX m;
	u8 unk[32];
};

struct dungeon_data {
	void * origin;
	s32 unk4;
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
	s32 unk1C0;
	s32 unk1C4;
	struct dobj2_substruct dobj2_array[220];
	GsCOORDINATE2 coord_array[220];
	struct dobj2_substruct unk5A98[2];
	struct unk_data_24 unk5AC8[2];
	VECTOR light_scale_vect;
	s16 x, y, z;
	s16 dir;
	s16 grid_x, grid_y, grid_z;
	s16 cardinal_dir;
	s16 last_x, last_y, last_z;
	s16 last_dir;
	s16 last_grid_x, last_grid_y, last_grid_z;
	s16 last_card_dir;
	s16 unk5B98;
	s16 unk5B9A;
	s32 unk5B9C;
	s16 last_action; /* 0x64 if move, 0x80 if turn, 0x0f if bump. */
	s16 unk5BA2;
	s16 unk5BA4;
	s16 unk5BA6;
	s16 unk5BA8;
	s16 unk5BAA;
	s16 running;
	s16 unk5BAE;
	s16 unk5BB0;
	s16 control_locked; /* Created by retype action */
	s16 unk5BB4;
	s16 unk5BB6;
	s32 unk5BB8;
	s32 step_counter;	/* Created by retype action */
	s16 unk5BC0;
	s16 unk5BC2;
	u32 unk5BC4;
	void (*return_function)();
	s32 unk5BCC;
	struct dungeon_init_data tile_data;
	struct object * unk5BF4;
	struct object * unk5BF8;
	struct object * unk5BFC;
	struct object * unk5C00;
	struct object * unk5C04;
	struct object * unk5C08;
	struct object * unk5C0C;
	u8 unk5C10;
	u8 unk5C11;
	u8 unk5C12;
	u8 unk5C13;
	u16 unk5C14;
	s16 last_move_dir;
	struct object * unk5C18;
	u8 pad1[0x40];
	s32 unk5C58;
	s32 unk5C5C;
	s8 * unk5C60;
	u8 pad2[256];
	s32 unk5D64;
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
	struct object * unk5D80;
	u8 pad4[12];
	s16 x_translation_offset;
	s16 z_translation_offset;
	s16 dungeon_width; /* Largely unused by the final game. */
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
	struct lighting_info * light_info;
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

struct unk_data_33 {
	s16 unk0;
	s16 unk2;
	u8 unk4;
	u8:8;
};

struct unk_data_28 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    void * unk4;
    void * unk8;
    void * unkC;
    void * unk10;
	u32 unk14;
};

struct unk_data_29 {
    u32 unk0;
    u32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
};

struct area_init_values {
    u8 x, y;
    u8 dir;
    u8 unk3;
    u8 unk4;
};

void func_80028714();


const struct unk_data_33 D_8001084C[4] = {
	{-7500, 5960, 128},
	{-11550, 7140, 0},
	{-7500, 5960, 255},
	{-7500, 5960, 255}};

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
s8 (*D_800A23F0[10])[] = {
	&D_800A23B8,
	&D_800A23C0,
	&D_800A23C8,
	&D_800A23D0,
	&D_800A23D8,
	&D_800A23DC,
	&D_800A23E0,
	&D_800A23E4,
	&D_800A23E8,
	&D_800A23EC};
u8 D_800A244C[20] = {
	 2,  3,  6,  8,
	14, 15, 16, 19,
	20, 21, 22, 24,
	27, 33, 34, 35,
	36, 37, 38, 255};
struct area_init_values D_800A2460[3] = {
    {15, 14, 6, 3, 5},
    {15, 0, 6, 4, 5},
    {18, 2, 0, 5, 0}
};

extern s32 D_800B6F10;
extern struct dungeon_data * DungeonData;
extern struct object_ptrs * FirstObjectPtrPtr;
struct unk_data_28 D_800FA148;
extern MATRIX D_801112D8;

extern s32 func_8002F248(void);
extern void func_80028DA0();
extern void func_80028904();
extern void func_8002FAB0(SVECTOR* arg0, GsCOORDINATE2* arg1);
extern void func_800330A4();
extern void func_80036404();
extern void func_80037A50();
extern void func_8003302C();
