#include "lib/libsnd.h"
#include "sound.h"

//INCLUDE_ASM("asm/smt1/main/nonmatchings/sound", func_8003F2B8);


void func_8003F458(void) {
    SsEnd();
    SsQuit();
}


void func_8003F480(s16 arg0, s16 arg1) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg0 >= 0x80) {
        arg0 = 0x7F;
    }
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg1 >= 0x80) {
        arg1 = 0x7F;
    }
    SoundInfo.unk0 = 0;
    SoundInfo.master_vol_l = arg0;
    SoundInfo.master_vol_r = arg1;
    SoundInfo.master_gain = 0;
    SsSetMVol(arg0, arg1);
}


void func_8003F514(void) {
    SsSetSerialVol(0, 0x7F, 0x7F);
    SsStart();
    SsUtSetReverbType(SS_REV_TYPE_STUDIO_B);
    SsUtReverbOn();
    VSync(0x1E);
    SsUtSetReverbDepth(0x3F, 0x3F);
    func_8003F480(0x7F, 0x7F);
}


s16 func_8003F574(void) {
    return SsVabTransCompleted(0);
}


void func_8003F598(s16 arg0, s16 arg1, s16 arg2) {
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg1 >= 0x80) {
        arg1 = 0x7F;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    if (arg2 >= 0x80) {
        arg2 = 0x7F;
    }
    SsSeqSetVol(arg0, arg1, arg2);
}


s16 func_8003F620(u32 * arg0, s16 arg1) {
    return SsSeqOpen(arg0, arg1);
}


void func_8003F648(s16 arg0) {
    SsSeqClose(arg0);
}


void func_8003F66C(s16 arg0) {
    SsSeqPlay(arg0, SSPLAY_PLAY, 0);
}


void func_8003F698(s16 arg0) {
    SsSeqPlay(arg0, SSPLAY_PLAY, 1);
}


void func_8003F6C4(s16 arg0) {
    SsSeqStop(arg0);
}


void func_8003F6E8(s16 arg0) {
    SsSeqPause(arg0);
}


void func_8003F70C(s16 arg0) {
    SsSeqReplay(arg0);
}


void func_8003F730(s16 arg0) {
    SsVabClose(arg0);
}


s16 func_8003F754(u8 * arg0, s16 arg1) {
    return SsVabOpenHead(arg0, arg1);
}


s16 func_8003F77C(u8 * arg0, s16 arg1, u32 arg2) {
    return SsVabOpenHeadSticky(arg0, arg1, arg2);
}


s16 func_8003F7A4(u8 * arg0, s16 arg1, s32 arg2) {
    u32 var_a2;

    switch (arg2) {
    case 0:
    default:
        var_a2 = 0x1010;
        break;
    case 1:
        var_a2 = 0x196B0;
        break;
    case 2:
        var_a2 = 0x31D50;
        break;
    case 3:
        var_a2 = 0x714F0;
        break;
    }
    return SsVabOpenHeadSticky(arg0, arg1, var_a2);
}


s16 func_8003F814(u8 * arg0, s16 arg1) {
    return SsVabTransBody(arg0, arg1);
}


s16 func_8003F83C(u8 * arg0, u32 arg1, s16 arg2) {
    return SsVabTransBodyPartly(arg0, arg1, arg2);
}


s16 func_8003F864(s16 voice, s16 vab_id, s16 arg2) {
    SoundInfo.unk8A[voice] = 0x7F;
    SoundInfo.unkBA[voice] = 0x7F;
    return SsUtKeyOnV(voice, vab_id, D_800FAA80[arg2][0], D_800FAA80[arg2][1], 0x3C, 0, 0x7F, 0x7F);
}


s16 func_8003F8E4(s16 arg0) {
    return SsUtKeyOffV(arg0);
}


s16 func_8003F90C(s16 arg0, s16 arg1, s16 arg2) {
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg1 >= 0x80) {
        arg1 = 0x7F;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    if (arg2 >= 0x80) {
        arg2 = 0x7F;
    }
    return SsUtSetVVol(arg0, arg1, arg2);
}


void func_8003F998(void) {
    SsUtAllKeyOff(0);
}


void func_8003F9B8(void) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_s0_2;
    s32 i;
    s32* var_s5;
    struct unk_data_128 * var_s1;

    var_s5 = &D_800FA370;
    for (i = 0; i < 5; i++) {
        struct unk_data_128 * temp_s1 = &D_800FAC80[i];
        s32 temp_s0 = temp_s1->unk6;
        s32 temp_s2 = func_80040680(temp_s0);
        s16 temp_s3 = func_80040680(temp_s0);
        switch (temp_s1->unk0) {
        case 1:
            if (temp_s1->unk2 >= 0 && temp_s1->unk2 < 2) {
                func_80040284(temp_s1->unk4);
                break;
            }
        case 7:
            if (temp_s1->unk8 != -1) {
                func_80040518(temp_s3, temp_s1->unk14);
                temp_s1->unk0 = 9;
                break;
            }
        case 9:
            if (temp_s1->unkA == 0) {
                if (temp_s1->unk2 == 3) {
                    func_80040548(temp_s1->unk6);
                } else if (temp_s1->unk2 == 4) {
                    func_8003F6E8(temp_s1->unk8);
                    temp_s1->unk0 = 0xA;
                } else {
                    func_80040284(temp_s1->unk4);
                }
            }
            break;
        case 6:
            func_800404E8(temp_s3, temp_s1->unk12);
            temp_s1->unk0 = 8;
            break;
        case 10:
            if (temp_s1->unk2 == 2) {
                SsSeqReplay(temp_s1->unk8);
                func_800404E8(temp_s3, temp_s1->unk12);
                temp_s1->unk0 = 8;
            }
            break;
        case 8:
            if (temp_s1->unkA == 0) {
                temp_s1->unk0 = 5;
            }
            break;
        case 2:
            func_800407E4(temp_s2);
            var_s5[i] = func_80019C58(0, 0, func_80040698(temp_s0) + 0x26D, 0, 0, 3);
            temp_s1->unk0 = 3;
            break;
        case 3:
            if (func_80019ECC(var_s5[i]) != 0) {
                func_8004072C(temp_s2, func_80040698(temp_s0));
                temp_s1->unk0 = 4;
            } else {
                break;
            }
        case 4:
            temp_s0_2 = func_80040760(temp_s2, func_800406DC(temp_s0));
            temp_v0 = func_8003F620(temp_s0_2, func_80040744(temp_s2));
            temp_s1->unk8 = temp_v0;
            func_8003F66C(temp_v0);
            if ((temp_s1->unk2 == 1) || (temp_s1->unk2 == 5)) {
                temp_s1->unk0 = 6;
            } else {
                temp_v0_2 = func_800406B0(temp_s1->unk6);
                SsSeqSetVol(temp_s1->unk8, temp_v0_2, temp_v0_2);
                temp_s1->unk0 = 5;
            }
            break;
        case 5:
            if (temp_s1->unk2 >= 3 && temp_s1->unk2 < 5) {
                temp_s1->unk0 = 7;
            }
            if (func_8004035C(temp_s1->unk8) == 0) {
                func_8003F648(temp_s1->unk8);
                temp_s1->unk8 = -1;
                temp_s1->unk0 = 0;
            }
            break;
        case 0:
        default:
            break;
        }
    }
    if (SoundInfo.unk0 == 1) {
        SoundInfo.master_vol_l -= SoundInfo.master_gain;
        SoundInfo.master_vol_r -= SoundInfo.master_gain;
        if (SoundInfo.master_vol_l < 0) {
            SoundInfo.master_vol_l = 0;
        }
        if (SoundInfo.master_vol_r < 0) {
            SoundInfo.master_vol_r = 0;
        }
        if ((SoundInfo.master_vol_l == 0) && (SoundInfo.master_vol_r == 0)) {
            SoundInfo.unk0 = 0;
        }
        SsSetMVol(SoundInfo.master_vol_l, SoundInfo.master_vol_r);
    } else if (SoundInfo.unk0 == 2) {
        SoundInfo.master_vol_l += SoundInfo.master_gain;
        SoundInfo.master_vol_r += SoundInfo.master_gain;
        if (SoundInfo.master_vol_l > 0x7F) {
            SoundInfo.master_vol_l = 0x7F;
        }
        if (SoundInfo.master_vol_r > 0x7F) {
            SoundInfo.master_vol_r = 0x7F;
        }
        if ((SoundInfo.master_vol_l == 0x7F) && (SoundInfo.master_vol_r == 0x7F)) {
            SoundInfo.unk0 = 0;
        }
        SsSetMVol(SoundInfo.master_vol_l, SoundInfo.master_vol_r);
    }
    var_s1 = &D_800FAC80[0];
    for (i = 0; i < 5; i++, var_s1++) {
        if ((var_s1->unk0 >= 8 && var_s1->unk0 < 10) && (var_s1->unkA != 0)) {
            var_s1->unk18 += 1;
            if (var_s1->unk18 >= var_s1->unk16) {
                var_s1->unkC = var_s1->unk10;
                var_s1->unkA = 0;
            } else {
                var_s1->unkC = var_s1->unkE + (((var_s1->unk10 - var_s1->unkE) * var_s1->unk18) / var_s1->unk16);
            }
            SsSeqSetVol(var_s1->unk8, var_s1->unkC, var_s1->unkC);
        }
    }
    for (i = 0; i < 24; i++) {
        if (SoundInfo.unk2A[i] == 1) {
            SoundInfo.unk8A[i] -= SoundInfo.unkEA[0];
            SoundInfo.unkBA[i] -= SoundInfo.unkEA[0];
            if (SoundInfo.unk8A[i] < 0) {
                SoundInfo.unk8A[i] = 0;
            }
            if (SoundInfo.unkBA[i] < 0) {
                SoundInfo.unkBA[i] = 0;
            }
            if ((SoundInfo.unk8A[i] == 0) && (SoundInfo.unkBA[i] == 0)) {
                SoundInfo.unk2A[i] = 0;
            }
            SsUtSetVVol(i, SoundInfo.unk8A[i], SoundInfo.unkBA[i]);
        } else if (SoundInfo.unk2A[i] == 2) {
            SoundInfo.unk8A[i] += SoundInfo.unkEA[0];
            SoundInfo.unkBA[i] += SoundInfo.unkEA[0];
            if (SoundInfo.unk8A[i] >= 0x80) {
                SoundInfo.unk8A[i] = 0x7F;
            }
            if (SoundInfo.unkBA[i] >= 0x80) {
                SoundInfo.unkBA[i] = 0x7F;
            }
            if ((SoundInfo.unk8A[i] == 0x7F) && (SoundInfo.unkBA[i] == 0x7F)) {
                SoundInfo.unk2A[i] = 0;
            }
            SsUtSetVVol(i, SoundInfo.unk8A[i], SoundInfo.unkBA[i]);
        }
    }
}


s32 func_8003FFE4(s32 arg0) {
    s16* temp_s1;
    s32 temp_v1;
    
    if ((MuteSound & 2) || ((--arg0 < 0))) {
        return -1;
    }
    temp_s1 = &SoundChannels[NextSoundEffectChannel];
    if (*temp_s1 != -1) {
        if (SsIsEos(*temp_s1, 0)) {
            SsSeqStop(*temp_s1);
        }
        SsSeqClose(*temp_s1);
        *temp_s1 = -1;
    }
    if (arg0 >= 0x5E) {
        *temp_s1 = func_8003F620(func_80040760(2, arg0), func_80040744(0));
    } else {
        *temp_s1 = func_8003F620(func_80040760(2, arg0), func_80040744(2));
    }
    if (*temp_s1 == -1) return -1;
    func_8003F698(*temp_s1);
    func_8003F598(*temp_s1, SoundInfo.unk8, SoundInfo.unkA);
    temp_v1 = NextSoundEffectChannel + 1;
    NextSoundEffectChannel = temp_v1 - ((temp_v1 / 8) * 8);
    return temp_v1 - 1;
}


void func_80040128(s32 arg0) {
    if (arg0 >= 0 && arg0 < 8) {
        s16 * temp_a0 = &SoundChannels[arg0]; // this is dumb
        if ((SoundChannels[arg0] != -1) && (SsIsEos(SoundChannels[arg0], 0))) {
            SsSeqStop(SoundChannels[arg0]);
        }
    }
}


void func_8004018C(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    if (!(MuteSound & 1)) {
        s16 * temp_v1 = &D_800FAC80[func_80040668(arg0)];
        temp_v1[9] = arg2;
        temp_v1[10] = arg1;
        temp_v1[1] = arg3;
    }
}


void func_80040204(s32 arg0) {
    if (!(MuteSound & 1)) {
        s16* temp_a0 = &D_800FAC80[func_80040668(arg0)];
        if ((temp_a0[3] != arg0) || (temp_a0[0] != 5)) {
            temp_a0[2] = arg0;
            temp_a0[1] = 0;
            temp_a0[0] = 1;
        }
    }
}


void func_80040284(s32 arg0) {
    s32 temp_s0;
    s16* temp_s1;

    temp_s0 = func_80040680(arg0);
    temp_s1 = &D_800FAC80[func_80040668(arg0)];
    if (func_80040710(temp_s0) == func_80040698(arg0)) {
        if (temp_s1[4] != -1) {
            func_8003F6C4(temp_s1[4]);
            func_8003F648(temp_s1[4]);
        }
        temp_s1[0] = 4;
    } else {
        if (temp_s1[4] != -1) {
            func_8003F6C4(temp_s1[4]);
            func_8003F648(temp_s1[4]);
        }
        temp_s1[0] = 2;
    }
    temp_s1[3] = arg0;
}


s32 func_8004035C(s16 arg0) {
    return (SsIsEos(arg0, 0)) != 0;
}


void func_80040388(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16* temp_v0;

    temp_v0 = &D_800FAC80[arg0];
    temp_v0[7] = arg1;
    temp_v0[8] = arg2;
    temp_v0[11] = arg3;
    temp_v0[12] = 0;
    SsSeqSetVol(temp_v0[4], arg1, arg1);
}


void func_800403EC(s16 arg0, s16 arg1) {
    if (arg1 < 0) {
        arg1 = 0;
    } else if (arg1 < 0x7F) {
        arg1 = 0x7F;
    }
    func_80040388(arg0, arg1, arg1, 0);
}


void func_80040448(s16 arg0, s16 arg1, s32 arg2) {
    s16 temp_a2;
    s16* temp_v0;

    temp_v0 = &D_800FAC80[arg0];
    temp_v0[5] = arg2;
    temp_a2 = func_800406B0(temp_v0[3]);
    if (arg2 == 2) {
        func_80040388(arg0, 0, temp_a2, arg1);
    } else {
        func_80040388(arg0, temp_a2, 0, arg1);
    }
}


void func_800404E8(s16 arg0, s16 arg1) {
    func_80040448(arg0, arg1, 2);
}


void func_80040518(s16 arg0, s16 arg1) {
    func_80040448(arg0, arg1, 1);
}


void func_80040548(s32 arg0) {
    s16 temp_a0;
    s16* temp_s0;

    temp_s0 = &D_800FAC80[func_80040680(arg0)];
    if (temp_s0[4] != -1) {
        func_8003F6C4(temp_s0[4]);
        func_8003F648(temp_s0[4]);
    }
    bzero(temp_s0, 0x1A);
    temp_s0[4] = -1;
}


void func_800405C4(void) {
    u8 var_s1;

    for (var_s1 = 0; var_s1 < 2; var_s1++) {
        s16* temp_s0 = &D_800FAC80[var_s1];
        if (temp_s0[4] != -1) {
            func_8003F6C4(temp_s0[4]);
            func_8003F648(temp_s0[4]);
        }
        bzero(temp_s0, 0x1A);
        temp_s0[4] = -1;
    }
}


u8 func_80040668(s32 arg0) {
    return D_80010D98[arg0];
}


u8 func_80040680(s32 arg0) {
    return KeepAreaThemePosition[arg0];
}


u8 func_80040698(s32 arg0) {
    return SongIDs[arg0];
}


u8 func_800406B0(s32 arg0) {
    return SongVolumes[arg0];
}


void func_800406C8(s32 arg0, s8 arg1) {
    SongVolumes[arg0] = arg1;
}


u8 func_800406DC(s32 arg0) {
    return D_80010D60[arg0];
}


void func_800406F4(s32 arg0, s16 arg1, s32 arg2) {
    struct unk_data_200 * temp_a0 = &D_800FADF8[arg0];
    temp_a0->unk2 = arg1;
    temp_a0->unk4 = arg2;
}


s16 func_80040710(s32 arg0) {
    return D_800FADF8[arg0].unk0;
}


void func_8004072C(s32 arg0, s16 arg1) {
    D_800FADF8[arg0].unk0 = arg1;
}


s16 func_80040744(s32 arg0) {
    return D_800FADF8[arg0].unk2;
}


u32 * func_80040760(s32 arg0, s32 arg1) {
    return D_800FADF8[arg0].unk4[arg1 + 1];
}


void func_80040788(void) {
    s32 var_s1;
    
    for (var_s1 = 0; var_s1 < 4; var_s1++) {
        if (D_800A2C68[var_s1] != 0) {
            func_80019478(D_800A2C68[var_s1]);
            D_800A2C68[var_s1] = 0;
        }
    }
}


void func_800407E4(s32 arg0) {
    struct unk_data_200 * temp_s0 = &D_800FADF8[arg0];
    if (temp_s0->unk4 != 0) {
        D_800A2C68[D_800B6FF4] = temp_s0->unk4;
        D_800B6FF4 = (D_800B6FF4 + 1) & 3;
        temp_s0->unk4 = 0;
    }
    if (temp_s0->unk2 >= 0) {
        func_8003F730(temp_s0->unk2);
    }
    temp_s0->unk0 = temp_s0->unk2 = -1;
}


s16 func_80040868(s32 arg0) {
    return D_800FAC80[arg0].unk0;
}


void func_80040894(s32 arg0, s16 arg1) {
    D_800FAC80[arg0].unk0 = arg1;
}


s32 func_800408BC(s32 arg0) {
    s16 * temp_a1 = &D_800FAC80[arg0];
    if ((arg0 >= 5) || (temp_a1[4] == -1)) {
        return -1;
    } else {
        return temp_a1[3];
    }
}


void func_80040908(u16* arg0, u16* arg1) {
    *arg0 = SoundInfo.unk8;
    *arg1 = SoundInfo.unkA;
}


void func_80040928(s16 arg0, s16 arg1) {
    if (arg0 < 0) {
        arg0 = 0;
    }
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (arg0 >= 0x80) {
        arg0 = 0x7F;
    }
    if (arg1 >= 0x80) {
        arg1 = 0x7F;
    }
    SoundInfo.unk8 = arg0;
    SoundInfo.unkA = arg1;
}


void func_80040984(void) {
    if (SoundInfo.unkEA[1] != 0) {
        func_8007F96C();
        SoundInfo.unkEA[1] = 0;
    }
}


void func_800409C4(void) {
    if (SoundInfo.unkEA[1] == 0) {
        func_8007F95C();
        SoundInfo.unkEA[1] = 1;
    }
}


void func_80040A08(s32 arg0) {
    s32 sp1[3] = {
        1, 2, 3
    };

    if (arg0 == -1) {
        MuteSound &= ~3;
    } else {
        MuteSound |= sp1[arg0];
    }
}


s32 func_80040A68(s32 arg0) {
    s16 * value = &D_800FAC80[arg0].unk0;
    return (*value > 0 && *value < 4);
}