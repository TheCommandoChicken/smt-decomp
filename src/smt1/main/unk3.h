#include "common.h"
#include "object.h"

struct unk_data_300 {
    struct object * unk0;
    struct object * unk4;
    struct object * unk8;
    struct object * unkC;
    struct object * unk10[2];
    s16 unk18;
    s16 unk1A;
    s16 unk1C;
    s16 unk1E;
    s16 unk20;
    s16 unk22;
    s16 unk24;
    s16 unk26;
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
    s32 unk30[15];
    s16 unk6C;
    s16 unk6E;
    s32 unk70;
    s16 unk74;
    s16 unk76;
    s32 unk78[570];
    s16 unk960;
};

struct unk_data_301 {
    s32 unk0;
    s32 unk4[331];
    s16 unk530;
};

struct c_is_dumb_and_can_kiss_my_ass {
    s16 unk0[4];
};

u16 D_800A2CD4[3] = {
    0x10A, 0x10B, 0x10C // 合体剣
};
s16 D_800B6FF8;
s16 D_800B6FFC[4];
s16 D_800B7004[4];
struct c_is_dumb_and_can_kiss_my_ass D_800B71D4 = {
    {0x2D5, 0x2D6, 0x2D7, 0x2D9}
};

void func_80040F44(struct object *);
void func_80041078(struct object *);