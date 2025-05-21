#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libgs.h"
#include "common.h"

#ifndef _DAT_H_
#define _DAT_H_

struct unk_data_8 {
    s32 unk0;
    u8 unk4;
    u8 unk5[0x10][4];
};

struct unk_data_9 {
    struct unk_data_9 * unk0;
    struct unk_data_9 * unk4;
    s32 unk8;
    s32 unkC;
};

void * func_800193C0(s32);
void func_800194C4(struct unk_data_9 *, s32);
void func_80019520(struct unk_data_9 *);

#endif