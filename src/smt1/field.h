#include "sys/types.h"
#include "libgte.h"
#include "libgpu.h"
#include "object.h"

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
    short x, y;
    short movement_dir;
    short x_motion, y_motion;
    short motion_countdown;
    short character_x_offset, character_y_offset;
	unsigned char screen_edge_flags;
	char speed_modifier;
};


struct field_map_graphics {
	SPRT_16 tiles0[300];
	DR_MODE tiles0_dr_modes[300];
	SPRT_16 tiles1[300];
	DR_MODE tiles1_dr_modes[300];
	POLY_FT4 field4_0x41a0;
	unsigned long pad[10];
	DR_MODE field45_0x41f0;
	POLY_G4 upper_overlay;
	POLY_G4 lower_overlay;
	DR_MODE overlay_dr_mode;
};


struct field_map_graphics_container {
	struct field_map_graphics g[2];
	unsigned int pad0;
	unsigned char buffer;
	unsigned char pad1, pad2, pad3;
};


struct field_map_data {
	void *origin;
	void *next;
	unsigned int unk8;
	unsigned int unkC;
	void *unk10;
	unsigned int unk14;
	short unk16;
	short unk18;
	short unk1A;
	unsigned int unk1C;
	unsigned int unk20;
	unsigned int unk24;
	short x_scroll, y_scroll;
	unsigned int step_counter;
	unsigned char unk30, unk31, unk32, unk33;
	struct field_map_graphics_container g;
	struct field_pos pos;
	unsigned char unk84EE, unk84EF;
	void * unk84F0;
	int unk84F4;
	unsigned int random_encounter; /* If bit 0 of the highest byte is on then a random encounter happens */
	int unk84FC;
	unsigned char unk8500;
	unsigned char unk8501;
	unsigned char unk8502;
	unsigned char unk8503;
	unsigned int unk8504;
	unsigned int unk8508;
    unsigned int unk850C;
    unsigned int unk8510;
    unsigned int unk8514;
    unsigned int unk8518;
    unsigned int unk851C;
    unsigned int flags;
    unsigned int unk8524;
    unsigned int unk8528;
	unsigned short event;
	char unk852E;
	char unk852F;
	unsigned int unk8530;
};

struct field_data_struct {
	unsigned int sect; // 0x00000004, number of sections?
	unsigned int tile_offset; // 0x00000018, offset for tile data.
	unsigned int unk; // 0x00000BE8, offset for unknown data.
	unsigned int chunk; // 0x00000CE8, offset for chunk data.
	unsigned int clut; // 0x000018E8, offset for CLUT data.
	unsigned int len; // 0x00002CD8, length of file.
	unsigned char tile[];
};


struct unk_data_11 {
    unsigned char unk0;
	unsigned char pad0, pad1, pad2;
    unsigned int data_struct_ids;
    unsigned int * dat0;
    unsigned int * dat1;
    unsigned int * dat2;
    unsigned int * dat3;
    unsigned int * dat4;
};

struct return_thing {
	int unk0;
	int unk4;
	int unk8;
	int unkC;
	int unk10;
	int unk14;
	int unk18;
	int unk1C;
	int unk20;
};

void func_800151DC(struct return_thing * arg0);
void func_800152D0(struct object *);
void FieldMapProc(struct object * arg0);
void FieldMapKill(struct object * arg0);
void FieldMapClose1(struct object * arg0);
void FieldMapSleepEvent(struct object * arg0);
void UpdateField(void);
void FieldMovement(void);
void ExecuteFieldMovement(void);
void func_80016A10(DVECTOR * arg0, DVECTOR * arg1, DVECTOR * arg2);
int func_80016DB8(int arg0, unsigned short arg1);
void AddFieldOverlays(void);
void EncounterBarProc(void);
void func_80017258(struct return_thing* arg0);
void func_800179AC(void);

/* .data */
char D_8009E80C[8][2] = {
	{ 0, -2},
	{ 2, -2},
	{ 2,  0},
	{ 2,  2},
	{ 0,  2},
	{-2,  2},
	{-2,  0},
	{-2, -2}
};

char D_8009E820[5][4] = {
	{0x32, 0x07, 0x3C, 0x15},
	{0x52, 0x08, 0x6C, 0x27},
	{0x0C, 0x08, 0x63, 0x65},
	{0x0A, 0x0B, 0x64, 0x67},
	{0x00, 0x00, 0xFF, 0xFF}
};

unsigned int OverlayColors[2][4] = {
	{0x184A4A, 0x184A4A, 0x081818, 0x081818},
	{0x081818, 0x081818, 0x184A4A, 0x184A4A}
};

char* Locations[59] = {
    "NO DATA",
    "SHINJUKU",
    "YOYOGI",
    "SENDAGAYA",
    "SHINANOMACHI",
    "YOTSUYA",
    "ICHIGAYA",
    "JINGU-GAIEN",
    "AKASAKA",
    "KICHIJOJI",
    "IKEBUKURO",
    "SUGAMO",
    "TABATA",
    "UENO",
    "ITABASHI",
    "NIPPORI",
    "MINAMISENJU",
    "OCHIAI",
    "MEJIRO",
    "ZOHSHIGAYA",
    "OHTSUKA",
    "KOISHIKAWA",
    "KOMAGOME",
    "ASAKUSA",
    "OHKUBO",
    "TAKADANOBABA",
    "WASEDA",
    "KAGURAZAKA",
    "IIDABASHI",
    "KOHRAKUEN",
    "YUSHIMA",
    "OKACHIMACHI",
    "SUIDOUBASHI",
    "OCHANOMIZU",
    "AKIHABARA",
    "KOHJIMACHI",
    "KUDAN",
    "KOHKYO",
    "JINBOHCHO",
    "KANDA",
    "MARUNOUCHI",
    "NIHONBASHI",
    "NAGATACHO",
    "KASUMIGASEKI",
    "GINZA",
    "T.D.L.",
    "SHIBUYA",
    "AOYAMA",
    "TORANOMON",
    "AZABU",
    "ROPPONGI",
    "SHIBA",
    "HIROO",
    "SHINAGAWA",
    "MEGURO",
    "EBISU",
    "SHIROGANEDAI",
    "TAKANAWA",
    "CATHEDRAL"
};

unsigned short D_800A2D2C[10][4] = {
	{0x8E, 0x147, 0x179, 0x00}, 
	{0x57, 0x179, 0x18A, 0x32}, 
	{0x8F, 0x18A, 0x1A9, 0x43}, 
	{0x90, 0x1A9, 0x1D9, 0x62}, 
	{0x65, 0x1D9, 0x1DB, 0x92}, 
	{0x66, 0x1DB, 0x1E2, 0x94}, 
	{0xEC, 0x1E3, 0x1E4, 0x9C}, 
	{0xA8, 0x1E4, 0x1E5, 0x9D}, 
	{0x80, 0x1E2, 0x1E3, 0x9B}, 
	{0xFFFF, 0, 0, 0}
};

/* .sbss */
int D_800B6C68 = 0;
char D_800B6C6C = -1;
int D_800B6D48 = 0;
int D_800B6D5C;

/* .bss */
struct field_map_data * FieldMapData;
short D_800B73AC;
short D_800B73AE;


struct unk_data_11 D_800B74F0;

extern struct object * func_800180DC(void (*)(struct object *), void (*)(struct object *), struct object *, int, int, int);

#endif