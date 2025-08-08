#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libgs.h"
#include "lib/libds.h"
#include "common.h"

#ifndef _DAT_H_
#define _DAT_H_

struct data_struct {
    s32 status;
    s16 unk4;
    s16 unk6;
    s32 wait_count;
    s16 fail_count;
    s16 sector_offset;
    void * data;
    void * unk14;
    void * data_mirror;
    void * unk1C;
    s32 size0;
    s32 size1;
    s32 unk28;
    u8 field13_0x2c;
    u8 field14_0x2d;
    u8 field15_0x2e;
    u8 field16_0x2f;
    u32 sectors_size;
    u8 field18_0x34;
    u8 field19_0x35;
    DslLOC data_loc;
    u8 field21_0x3a;
    u8 field22_0x3b;
    void * function;
} data_struct;

struct unk_data_8 {
    s32 unk0;
    u8 unk4;
    u8 unk5[0x10][4];
};

struct unk_data_9 {
    struct unk_data_9 * next;
    struct unk_data_9 * prev;
    s32 unk8;
    s32 unkC;
};

struct data_container {
    s32 write_index;
    s32 index;
    struct data_struct data[32];
};

extern void func_80018FF0(u32 * addr);
extern void func_800190BC(u32 * addr, RECT * prect, RECT * crect, s32 arg3);
extern void func_80019384(struct unk_data_9 * arg0, s32 arg1);
extern void func_80019478(struct unk_data_9 * arg0);
struct object * func_800193C0(s32);
void func_800194C4(struct unk_data_9 *, s32);
void func_80019520(struct unk_data_9 *);
extern s32 func_80019ECC(s32 arg0);

#endif