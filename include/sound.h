#include "common.h"

#ifndef _SOUND_H_
#define _SOUND_H_

struct sound_info {
    s16 unk0;
    s16 master_vol_l;
    s16 master_vol_r;
    s16 master_gain;
    s16 unk8;
    s16 unkA;
    s16 unkC[15];
    s16 unk2A[24];
    s16 unk5A[24];
    s16 unk8A[24];
    s16 unkBA[24];
    s16 unkEA[24];
};

struct unk_data_200 {
    s16 unk0;
    s16 unk2;
    s32 * unk4;
};

struct unk_data_128 {
    s16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
    s16 unk10;
    s16 unk12;
    s16 unk14;
    s16 unk16;
    s16 unk18;
};

const u8 D_80010D60[28] = {
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    1, 2, 0, 0,
    0, 1, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0
};
const u8 KeepAreaThemePosition[28] = {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};
const u8 D_80010D98[28] = {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};
const u8 SongIDs[28] = {
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 10, 11, 11, 11, 12, 13,
    14, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24
};
u8 SongVolumes[28] = {
    0x73, 0x73, 0x73, 0x73,
    0x73, 0x73, 0x73, 0x73,
    0x73, 0x73, 0x73, 0x73,
    0x73, 0x73, 0x73, 0x73,
    0x73, 0x73, 0x73, 0x73,
    0x73, 0x73, 0x73, 0x73,
    0x73, 0x73, 0x78, 0x73
};
extern s16 D_800FAA80[][2]; // Not what this is
struct unk_data_200 D_800FADF8[];
struct sound_info SoundInfo;
s16 SoundChannels[];
s32 MuteSound;
s32 NextSoundEffectChannel;
extern s32 D_800FA370[];
struct unk_data_128 D_800FAC80[13];
s32 D_800A2C68[];
u8 D_800B6FF4;

extern u8 func_80040668(s32);
extern u8 func_80040680(s32);
extern u8 func_80040698(s32);
extern u8 func_800406B0(s32);
extern s16 func_80040710(s32);
extern void func_80040284(s32);
extern s32 func_8004035C(s16);
extern void func_800404E8(s16, s16);
extern void func_80040518(s16, s16);
extern void func_80040548(s32);
extern u8 func_800406DC(s32);
extern void func_8004072C(s32, s16);
extern s16 func_80040744(s32);
extern u32 * func_80040760(s32, s32);
extern void func_800407E4(s32);

#endif