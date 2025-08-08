#include "movie.h"
#include "pad.h"
#include "lib/memory.h"
#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libspu.h"
#include "lib/libcd.h"
#include "lib/libds.h"
#include "lib/libpress.h"


s32 D_800B724C;
s32 D_800B7448;
s32 D_800B7460;
SpuVolume D_800B7484;
struct unk_data_500 D_800FAE48;
s32 D_800B7248;
s32 D_800B7448;
u32 * D_800B7450;
u32 * D_800B7454;
u32 * D_800B7458;
u32 * D_800B745C;
u32 * RingBufferStartAddr;
s32 D_800B7460;
char * D_800B7464;
s32 D_800B7468;
s32 D_800B746C;
u8 D_800B7470;
DslLOC D_800B7474;
DslLOC D_800B7478;
s32 D_800B747C;
s32 D_800B7480;
extern DECDCTTAB D_800FAE80;


s32 func_80046110(void) {
    return D_800B724C;
}


u32 func_8004611C(s32 arg0) {
    u8 * temp_s0 = func_80018FD4(0);
    u8 * temp_v0 = func_80018FD4(1);
    u32 var_s0 = ~(temp_v0[2] << 0x18 | temp_v0[3] << 0x10 | temp_s0[2] << 8 | temp_s0[3]);
    if (PadGetState(0) == 0) {
        var_s0 &= 0xFFFF0000;
    }
    if (PadGetState(0x10) == 0) {
        var_s0 &= 0xFFFF;
    }
    return var_s0;
}


s32 func_800461A0(char * arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    DISPENV sp18[2];
    DISPENV sp40;
    s32 sp58[9];
    s32 var_s1;
    s32 var_s0;
    
    SpuGetCommonCDVolume(&D_800B7484.left, &D_800B7484.right);
    D_800B724C = 1;
    D_800B7448 = arg6;
    GetDispEnv(&sp40);
    if (arg2 != 0) {
        var_s1 = 0x1E0;
    } else {
        var_s1 = 0x140;
    }
    var_s0 = 0;
    do {
        if (var_s0 != 0) {
            VSync(0);
        }
        var_s0 = 1;
        sp58[0] = arg0;
        sp58[1] = arg1;
        sp58[2] = arg2;
        sp58[3] = arg3;
        sp58[4] = arg4;
        sp58[5] = arg3;
        sp58[6] = arg4 + 0xF0;
        sp58[7] = arg5;
        if (sp40.disp.y == 0) {
            sp58[8] = 0;
        } else {
            sp58[8] = 1;
        }
        if (func_800464AC(&sp58) == -1) {
            if (func_8004611C(1) & 0x800) {
                return 1;
            }
            continue;
        } else {
            break;
        }
    } while (1);
    SetDefDispEnv(&sp18[1], 0, 0, var_s1, 0xF0);
    SetDefDispEnv(&sp18[0], 0, 0xF0, var_s1, 0xF0);
    if (arg2 != 0) {
        sp18[1].isrgb24 = 1;
        sp18[0].isrgb24 = 1;
        sp18[0].disp.w = (sp18[0].disp.w * 2) / 3;
        sp18[1].disp.w = (sp18[1].disp.w * 2) / 3;
    }
    D_800B724C = 2;
    while (func_800466C0(0) == 0) {
        VSync(0);
        PutDispEnv(&sp18[D_800FAE48.unk28]);
        SetDispMask(1);
        if (D_800B7448 & 0x20) {
            u32 temp_v0 = func_8004611C(1);
            u32 temp_v1 = temp_v0 >> 0x10;
            if (((temp_v0 & 0x900) == 0x900) || ((temp_v1 & 0x900) == 0x900)) {
                D_800B7460 = 3;
            }
        }
        if ((D_800B7448 & 1) && (func_8004611C(1) & 0x800)) {
            D_800B7460 = 2;
        }
    }
    SpuSetCommonCDVolume(0, 0);
    func_8004684C();
    if (arg2 != 0) {
        if (!(arg6 & 0x10)) {
            VSync(0);
            PutDispEnv(&sp40);
        }
        SetDispMask(1);
    }
    D_800B724C = 0;
    VSync(4);
    SpuSetCommonCDVolume(D_800B7484.left, D_800B7484.right);
    switch (D_800B7460) {
    case 1:
        return 0;
    case 2:
        return 1;
    case 3:
        return 2;
    default:
        return -1;
    }
    return 1;
}


s32 func_800464AC(struct unk_data_501 * arg0) {
    DslFILE sp20;

    D_800B7470 = arg0->unk8;
    if (arg0->unk8 == 0) {
        D_800B747C = 2;
    } else {
        D_800B747C = 3;
    }
    D_800B7480 = arg0->unk8;
    D_800B7464 = arg0->unk0;
    D_800B7468 = arg0->unk4;
    D_800B746C = arg0->unk4 + 1;
    D_800B7248 = arg0->unk8;
    if (DsSearchFile(&sp20, D_800B7464) != 0) {
        if ((arg0->unk8 != 0) && !(D_800B7448 & 2)) {
            RECT sp38;
            sp38.x = 0;
            sp38.y = 0;
            sp38.w = 0x1E0;
            sp38.h = 0x1E0;
            ClearImage(&sp38, 0, 0, 0);
            DrawSync(0);
            VSync(0);
            SetDispMask(0);
        }
    } else {
        return -1;
    }
    if (func_80046968(&D_800FAE48, arg0->unkC, arg0->unk10, arg0->unk14, arg0->unk18, arg0->unk8, arg0->unk20) == 0) {
        return -1;
    } else {
        if (func_80046ADC(&sp20, &func_80046B88, arg0->unk8, arg0->unk1C) == 0) {
            func_80019478(D_800B745C);
            D_800B745C = 0;
            func_80019478(D_800B7458);
            D_800B7458 = 0;
            func_80019478(D_800B7454);
            D_800B7454 = 0;
            func_80019478(D_800B7450);
            D_800B7450 = 0;
            return -1;
        }
        DecDCTvlcBuild(&D_800FAE80);
        while (func_80046CC4(&D_800FAE48, arg0->unk8) == -1) {
            D_800B7474 = sp20.pos;
            func_80046F54(&D_800B7474);
        }
        D_800B7478 = sp20.pos;
        func_80046CC4(&D_800FAE48, arg0->unk8);
        D_800B7460 = 0;
        return 0;
    }
}


s32 func_800466C0(s32 arg0) {
    DecDCTin(D_800FAE48.unk0[D_800FAE48.unk8], D_800B747C);
    DecDCTout(D_800FAE48.unkC[D_800FAE48.unk14], D_800FAE48.unk30 * D_800FAE48.unk32 / 2);
    while (func_80046CC4(&D_800FAE48, D_800B7480) == -1) {
        s32 temp_v0 = StGetBackloc(&D_800B7474);
        if ((D_800B7468 < temp_v0) || (temp_v0 <= 0)) {
            D_800B7474 = D_800B7478;
        }
        StClearRing();
        func_80046F54(&D_800B7474);
    }
    func_80046EC0(&D_800FAE48);
    if (D_800B7460 != 0) {
        if (arg0 == 1) {
            D_800B7474 = D_800B7478;
            D_800B7460 = 0;
            StClearRing();
            func_80046F54(&D_800B7474);
            while (func_80046CC4(&D_800FAE48, D_800B7480) == -1) {
                func_80046F54(&D_800B7474);
            }
        } else {
            return 1;
        }
    }
    return 0;
}


void func_8004684C(void) {
    u8 sync_res[8];

    if ((D_800B7470 != 0) && !(D_800B7448 & 4)) {
        RECT rect;
        VSync(0);
        SetDispMask(0);
        rect.y = rect.x = 0;
        rect.h = rect.w = 0x1E0;
        ClearImage(&rect, 0, 0, 0);
        DrawSync(0);
        VSync(0);
    }
    {
        u8 cont_param[4];
        DecDCToutCallback(NULL);
        StUnSetRing();
        DsControlB(9, NULL, NULL);
        cont_param[0] = 0x80;
        DsControl(0xE, &cont_param, NULL);
        VSync(3);
        DsSync(0, &sync_res);
        DrawSync(0);
        func_80019478(RingBufferStartAddr);
        RingBufferStartAddr = NULL;
        func_80019478(D_800B745C);
        D_800B745C = NULL;
        func_80019478(D_800B7458);
        D_800B7458 = NULL;
        func_80019478(D_800B7454);
        D_800B7454 = NULL;
        func_80019478(D_800B7450);
        D_800B7450 = NULL;
    }
}


s32 func_80046968(struct unk_data_500 * arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_s1 = (arg5 != 0) ? 0x1680 : 0xF00;
    
    D_800B7450 = func_800193C0(0x25A80);
    if (D_800B7450 == NULL) {
        return 0;
    }
    
    D_800B7454 = func_800193C0(0x25A80);
    var_s1 *= 2;
    if (D_800B7454 == NULL) {
        func_80019478(D_800B7450);
        D_800B7450 = NULL;
        return 0;
    }
    
    D_800B7458 = func_800193C0(var_s1);
    if (D_800B7458 == NULL) {
        func_80019478(D_800B7454);
        D_800B7454 = NULL;
        func_80019478(D_800B7450);
        D_800B7450 = NULL;
        return 0;
    }
    
    D_800B745C = func_800193C0(var_s1);
    if (D_800B745C == NULL) {
        func_80019478(D_800B7458);
        D_800B7458 = NULL;
        func_80019478(D_800B7454);
        D_800B7454 = NULL;
        func_80019478(D_800B7450);
        D_800B7450 = NULL;
        return 0;
    }
    
    arg0->unk8 = 0;
    arg0->unkC[1] = D_800B745C;
    arg0->unk14 = 0;
    arg0->unk18 = arg1;
    arg0->unk1A = arg2;
    arg0->unk20 = arg3;
    arg0->unk22 = arg4;
    arg0->unk0[0] = D_800B7450;
    arg0->unk0[1] = D_800B7454;
    arg0->unkC[0] = D_800B7458;
    arg0->unk28 = arg6;
    arg0->unk2C = arg1;
    arg0->unk2E = arg2;
    if (arg5 != 0) {
        arg0->unk30 = 0x18;
    } else {
        arg0->unk30 = 0x10;
    }
    arg0->unk34 = 0;
    return 1;
}


s32 func_80046ADC(s32 arg0, s32 (*func)(), u32 mode, s32 channel) {
    DecDCTReset(0);
    DecDCToutCallback(func);
    RingBufferStartAddr = func_800193C0(0x10000);
    if (RingBufferStartAddr != NULL) {
        StSetRing(RingBufferStartAddr, 0x20);
        StSetStream(mode, 1, -1, NULL, NULL);
        if (StSetChannel(channel) == 0) {
            func_80046F54(arg0);
            return 1;
        }
    }
    return 0;
}


s32 func_80046B88(void) {
    RECT sp10;
    s32 temp_s0;
    s32 temp_t0;

    if ((D_800B7248 != 0) && (D_8010D804 != 0)) {
        StCdInterrupt();
        D_8010D804 = 0;
    }
    temp_s0 = D_800FAE48.unk14;
    sp10 = D_800FAE48.unk2C;
    temp_t0 = (D_800FAE48.unk14 < 1);
    D_800FAE48.unk14 = temp_t0;
    if ((D_800FAE48.unk2C.x += D_800FAE48.unk2C.w) < 
        (D_800FAE48.unk18[D_800FAE48.unk28].x + D_800FAE48.unk18[D_800FAE48.unk28].w)) {
        DecDCTout(D_800FAE48.unkC[temp_t0], D_800FAE48.unk2C.w * D_800FAE48.unk2C.h / 2);
    } else {
        D_800FAE48.unk34 = 1;
        D_800FAE48.unk28 = D_800FAE48.unk28 < 1;
        D_800FAE48.unk2C.x = D_800FAE48.unk18[D_800FAE48.unk28].x;
        D_800FAE48.unk2C.y = D_800FAE48.unk18[D_800FAE48.unk28].y;
    }
    LoadImage(&sp10, D_800FAE48.unkC[temp_s0]);
}


// INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80046CC4);

u32 * func_80046D60(struct unk_data_500 * arg0, s32 arg1) {
    RECT sp10;
    u32* sp18;
    u32* sp1C;
    s32 var_s0 = 2000;

    while (StGetNext(&sp18, &sp1C) != 0) {
        var_s0--;
        if (var_s0 == 0) {
            return 0;
        }
    }
    if (sp1C[2] >= D_800B7468) {
        D_800B7460 = 1;
    }
    D_800B746C -= 1;
    if (D_800B746C == 0) {
        D_800B7460 = 1;
        D_800B746C = D_800B7468;
    }
    if ((D_800B7240 != ((u16*)sp1C)[8]) || (D_800B7244 != ((u16*)sp1C)[9])) {
        if (arg1 != 0) {
            sp10.x = 0;
            sp10.y = 0;
            sp10.w = 0x1E0;
            sp10.h = 0x1E0;
            
        } else {
            sp10.x = 0;
            sp10.y = 0;
            sp10.w = 0x140;
            sp10.h = 0x1E0;
        }
        D_800B7240 = ((u16*)sp1C)[8];
        D_800B7244 = ((u16*)sp1C)[9];
    }
    if (arg1 != 0) {
        arg0->unk18[1].w = (D_800B7240 * 3) / 2;
        arg0->unk18[0].w = (D_800B7240 * 3) / 2;
    } else {
        arg0->unk18[1].w = D_800B7240;
        arg0->unk18[0].w = D_800B7240;
    }
    arg0->unk18[1].h = D_800B7244;
    arg0->unk18[0].h = D_800B7244;
    arg0->unk2C.h = D_800B7244;
    return sp18;
}


void func_80046EC0(struct unk_data_500 * arg0) {
    volatile s32 sp0 = 0x800000; // why
    
    while (arg0->unk34 == 0) {
        sp0--;
        if (sp0 == 0) {
            arg0->unk34 = 1;
            arg0->unk28 = arg0->unk28 == 0;
            arg0->unk2C.x = arg0->unk18[arg0->unk28].x;
            arg0->unk2C.y = arg0->unk18[arg0->unk28].y;
        }
    }
    arg0->unk34 = 0;
}


void func_80046F54(DslLOC* arg0) {
    u8 sp10[4];

    sp10[0] = 0x80;
    do {
        while (DsControl(2, &arg0->minute, NULL) == 0);
        while (DsControl(0xE, &sp10[0], NULL) == 0);
        VSync(3);
    } while (((D_800B7448 & 8) ? DsRead2(arg0, 0x160) : DsRead2(arg0, 0x1E0)) == 0);
}


s32 func_80046FF0(u32 arg0, s32 arg1) {
    switch (arg0) {
    case 0:
        return func_800461A0("\\ATLUS.STR;1", 0xDA, 1, 0, 0, 0, arg1);
    case 1:
        return func_800461A0("\\OP01.STR;1", 0x11D, 1, 0, 0, 0, arg1);
    case 2:
        return func_800461A0("\\OP02_A.STR;1", 0x33E, 1, 0, 0, 0, arg1);
    case 3:
        return func_800461A0("\\G_OVER00.STR;1", 0x179, 1, 0, 24, 0, arg1);
    case 4:
        return func_800461A0("\\TERMINAL.STR;1", 0x3D, 0, 16, 20, 0, arg1);
    case 5:
        return func_800461A0("\\KONGO.STR;1", 0x112, 1, 0, 0, 0, arg1);
    case 6:
        return func_800461A0("\\END00.STR;1", 0x15D, 1, 0, 0, 0, arg1);
    default:
        return -1;
    }
}