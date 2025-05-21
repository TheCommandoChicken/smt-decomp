#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "object.h"
#include "common.h"

#ifndef _FIELD_H_
#define _FIELD_H_

enum story_section {
	HAKAI_BEF = 0,
	HAKAI_AFT = 1,
	NEBI_KILL = 2,
	KOZUI = 3,
	NO_DATA = 4
};


struct field_pos {
    s16 x, y;
    s16 movement_dir;
    s16 x_motion, y_motion;
    s16 motion_countdown;
    s16 character_x_offset, character_y_offset;
	u8 screen_edge_flags;
	s8 speed_modifier;
};


struct field_map_graphics {
	SPRT_16 tiles0[300];
	DR_MODE tiles0_dr_modes[300];
	SPRT_16 tiles1[300];
	DR_MODE tiles1_dr_modes[300];
	POLY_FT4 field4_0x41a0;
	u32 pad[10];
	DR_MODE field45_0x41f0;
	POLY_G4 upper_overlay;
	POLY_G4 lower_overlay;
	DR_MODE overlay_dr_mode;
};


struct field_map_graphics_container {
	struct field_map_graphics g[2];
	unsigned int pad0;
	u8 buffer;
	u8 pad1, pad2, pad3;
};


struct field_map_data {
	void *origin;
	void *next;
	u32 unk8;
	u32 unkC;
	void *unk10;
	u32 unk14;
	s16 unk16;
	s16 unk18;
	s16 unk1A;
	u32 unk1C;
	u32 unk20;
	u32 unk24;
	s16 x_scroll, y_scroll;
	u32 step_counter;
	u8 unk30, unk31, unk32, unk33;
	struct field_map_graphics_container g;
	struct field_pos pos;
	u8 unk84EE, unk84EF;
	void * unk84F0;
	s32 unk84F4;
	u32 random_encounter; /* If bit 0 of the highest byte is on then a random encounter happens */
	s32 unk84FC;
	u8 unk8500;
	u8 unk8501;
	u8 unk8502;
	u8 unk8503;
	u32 unk8504;
	u32 unk8508;
    u32 unk850C;
    u32 unk8510;
    u32 unk8514;
    u32 unk8518;
    u32 unk851C;
    u32 flags;
    struct object * unk8524;
    u32 unk8528;
	u16 event;
	s8 unk852E;
	s8 unk852F;
	u32 unk8530;
};

struct field_data_struct {
	u32 sect; // 0x00000004, number of sections?
	u32 tile_offset; // 0x00000018, offset for tile data.
	u32 unk; // 0x00000BE8, offset for unknown data.
	u32 chunk; // 0x00000CE8, offset for chunk data.
	u32 clut; // 0x000018E8, offset for CLUT data.
	u32 len; // 0x00002CD8, length of file.
	u8 tile[];
};


struct unk_data_3 {
    u8 unk0;
	u8 pad0, pad1, pad2;
    u32 data_struct_ids;
    u32 * dat0;
    u32 * dat1;
    u32 * dat2;
    u32 * dat3;
    u32 * dat4;
};

struct return_thing {
	s32 unk0;
	s32 unk4;
	s32 init_x;
	s32 init_y;
	s32 unk10;
	s32 unk14;
	s32 unk18;
	s32 unk1C;
	s32 unk20;
};

void CreateFieldMap(struct return_thing * arg0);
void func_800152D0(struct object *);
void FieldMapProc(struct object * arg0);
void FieldMapKill(struct object * arg0);
void FieldMapClose1(struct object * arg0);
void FieldMapSleepEvent(struct object * arg0);
void UpdateField(void);
void FieldMovement(void);
s32 func_80016504(void);
void ExecuteFieldMovement(void);
void func_80016A10(DVECTOR * arg0, DVECTOR * arg1, DVECTOR * arg2);
s32 func_80016DB8(s32 arg0, u16 arg1);
void AddFieldOverlays(void);
void EncounterBarProc(void);
void func_80017258(struct return_thing* arg0);
s32 func_8001771C(void);
void func_800179AC(void);

extern struct object_ptrs * FirstObjectPtrPtr;

#endif