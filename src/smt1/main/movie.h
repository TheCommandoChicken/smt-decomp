#include "common.h"

#ifndef _UNK_5_H_
#define _UNK_5_H_

struct unk_data_500 {
    u32 * unk0[2];
    s32 unk8;
    u32 * unkC[2];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
    s16 unk30;
    s16 unk32;
};

struct unk_data_501 {
    char * unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

extern s32 func_800466C0(s32 arg0);
extern s32 func_800464AC(struct unk_data_501 * arg0);
extern void func_8004684C(void);
extern s32 func_80046B88(void);
extern s32 func_80046968(struct unk_data_500 * arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6);

#endif