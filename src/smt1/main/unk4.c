#include "unk4.h"
#include "field.h"
#include "pad.h"
#include "lib/memory.h"
#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libspu.h"

void (* D_800A2FAC[16])(struct unk_data_408 *) = {
    func_80045AD4,
    func_80045AE4,
    func_80045AE4,
    func_80045BA0,
    func_80045AE4,
    func_80045AE4,
    func_80045D04,
    func_80045DB0,
    func_80045DF4,
    func_80045DF4,
    func_80045D04,
    func_80045AD4,
    func_80045AD4,
    func_80045AD4,
    func_80045AD4,
    func_80045AD4
};


void func_80044F94(void) {
    OverworldMapDataPtr = 0;
}


void func_80044FA0(void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    if (OverworldMapDataPtr != NULL) {
        func_80019478(OverworldMapDataPtr);
        OverworldMapDataPtr = NULL;
    }
    OverworldMapDataPtr = func_800193C0(0x60);
    bzero(OverworldMapDataPtr, 0x60);
    OverworldMapDataPtr->unk0 = arg0;
    OverworldMapDataPtr->unkC = &D_800A9B18;
    OverworldMapDataPtr->unk10 = &D_800A9C1C;
    OverworldMapDataPtr->unk14 = &D_800A9CE8;
    OverworldMapDataPtr->unk18 = &D_800A9E18;
    OverworldMapDataPtr->unk4 = arg1;
    OverworldMapDataPtr->unk8 = arg2;
    func_80045288(arg3, arg4);
}


void func_8004505C(void) {
    if (OverworldMapDataPtr != NULL) {
        func_80019478(OverworldMapDataPtr);
        OverworldMapDataPtr = NULL;
    }
    OverworldMapDataPtr = NULL;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80045088);

void func_8004511C(struct unk_data_407 * arg0, u32 * arg1, u32 * arg2) {
    u32 temp_v1 = (u8)arg0->unk2;
    s32 temp_v0 = (u8)arg0->unk4 - 1;
    s32 var_a0 = temp_v1 & 0xF;
    s32 temp_s0 = temp_v1 >> 4;
    s32 temp_s2 = temp_v0 & 0xF;
    s32 temp_s1 = temp_v0 >> 4 & 0xF;
    
    switch (temp_s1 - temp_s0) {
    case 0:
        func_80045088(var_a0, temp_s0, temp_s2, temp_s1, arg1, arg2);
        break;
    case 1:
        func_80045088(var_a0, temp_s0, 0xF, temp_s0, arg1, arg2);
        func_80045088(0, temp_s1, temp_s2, temp_s1, arg1, arg2);
        break;
    default:
        func_80045088(var_a0, temp_s0, 0xF, temp_s0, arg1, arg2);
        func_80045088(0, temp_s0 + 1, 0xF, temp_s1 - 1, arg1, arg2);
        func_80045088(0, temp_s1, temp_s2, temp_s1, arg1, arg2);
    }
}


void func_80045200(struct unk_data_407 * arg0) {
    u8* var_a2;
    s32 var_a1;
    u8* var_v1;

    if (func_8004ED78() == 0) {
        var_a2 = &D_800A9A70;
    } else {
        var_a2 = &D_800A9A78;
    }
    var_a2 = &var_a2[arg0->unk6];
    var_v1 = &OverworldMapDataPtr->unk4[arg0->unk2];
    var_a1 = (arg0->unk4 - arg0->unk2);
    while (var_a1--, var_a1 != -1) {
        *var_v1++ = *var_a2++;
    }
}


void func_80045288(u32 * arg0, u32 * arg1) {
    TIM_IMAGE sp10;
    u32 * var_a0;
    u32 * temp;
    struct unk_data_407 * var_s0;

    OpenTIM(arg0);
    ReadTIM(&sp10);
    var_a0 = sp10.paddr;
    OpenTIM(arg1);
    ReadTIM(&sp10);
    temp = sp10.paddr;
    if (func_8004ED78() == 0) {
        var_s0 = &D_800A2D0C[0];
    } else {
        var_s0 = &D_800A2D2C[0];
    }
    while (var_s0->unk0 != 0xFFFF) {
        u16 temp2 = var_s0->unk0;
        if (func_8004C06C(temp2)) {
            func_8004511C(var_s0, var_a0, temp);
            func_80045200(var_s0);
        }
        var_s0++;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_8004534C);

s32 func_800453B0(s32 arg0, s32 arg1) {
    s32 temp_v0;

    if (func_8004ED78() == 3) {
        arg1 += 0x80;
    }
    temp_v0 = func_8004534C(arg0, arg1);
    if (temp_v0 >= 0) {
        return OverworldMapDataPtr->unk4[temp_v0];
    } else {
        return -1;
    }
}


s8 func_8004541C(void) {
    s32 var_s0 = func_80018EE8(0, PAD_RIGHT) != 0;
    if (func_80018EE8(0, PAD_LEFT)) {
        var_s0 |= 2;
    }
    if (func_80018EE8(0, PAD_DOWN)) {
        var_s0 |= 4;
    }
    if (func_80018EE8(0, PAD_UP)) {
        var_s0 |= 8;
    }
    return ControllerDirectionLookup[var_s0];
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80045494);

void func_800454D8(s32 arg0, s32 arg1, s32 * arg2, s32 * arg3) {
    func_80045E70(arg0, arg1);
    if ((OverworldMapDataPtr->unk3C & 0xF) == 0xA) {
        *arg3 = 0xB;
        *arg2 = 0xB;
    } else {
        *arg2 = OverworldMapDataPtr->unk1C[(OverworldMapDataPtr->unk48 - 2) & 7] >> 4;
        *arg3 = OverworldMapDataPtr->unk1C[(OverworldMapDataPtr->unk48 + 2) & 7] >> 4;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80045588);

s32 func_8004562C(void) {
    return func_80045588(OverworldMapDataPtr->unk58, OverworldMapDataPtr->unk5C) + 0xA5;
}


s32 func_80045658(s32 arg0, s32 arg1) {
    s32 var_s0 = ((arg1 / 8) * 0x10) + (arg0 / 8);
    
    if (func_8004ED78() != 0) {
        var_s0 += 0x60;
    }
    var_s0 = FieldLocationLookup[var_s0];
    if (var_s0 >= 59) {
        var_s0 = 58;
    }
    return var_s0;
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_800456C8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_800457A4);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_800458A8);

// INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80045970);


void func_80045A34(void) {
    struct return_thing sp10;
    s32 sp38[2];
    s16 temp_v0;

    func_80017164(&sp10);
    func_80045970(sp10.init_x, sp10.init_y);
    if (func_8004C06C(0xFF) != 0) {
        func_8004ECCC(0);
    } else {
        temp_v0 = func_80045970(sp10.init_x, sp10.init_y);
        if (temp_v0 == 0) {
            func_8004ECCC(0);
        } else {
            func_800458A8(sp10.init_x, sp10.init_y, &sp38[0], &sp38[1]);
            if (func_8004EEFC(sp38[0]) == 0) {
                func_8004ECD8(temp_v0);
            }
        }
    }
}


void func_80045AD4(void) {
    OverworldMapDataPtr->unk44 = -1;
}


void func_80045AE4(void) {
    s8 (* sp[11])[] = {
        NULL,
        &D_800A2F7C,
        &D_800A2F84,
        NULL,
        &D_800A2F8C,
        &D_800A2F90,
        NULL,
        &D_800A2F9C,
        &D_800A2F94,
        &D_800A2F94,
        NULL
    };
    s8* temp_v0;
    s32 i;

    temp_v0 = sp[OverworldMapDataPtr->unk3C & 0xF];
    i = temp_v0[0];
    while (temp_v0++, i >= 0) {
        if (i == OverworldMapDataPtr->unk4C) {
            return;
        } else {
            i = temp_v0[0];
        }
    }
    OverworldMapDataPtr->unk44 = -1;
}

// INCLUDE_ASM("asm/smt1/main/nonmatchings/unk3", func_80045BA0);

void func_80045D04(void) {
    s32 temp_v1;

    if (OverworldMapDataPtr->unk44 & 1) {
        OverworldMapDataPtr->unk44 = -1;
    }
    temp_v1 = OverworldMapDataPtr->unk4C;
    if (temp_v1 == 3 || temp_v1 == 6 || temp_v1 == 8 || temp_v1 == 9) {
        return;
    } else if ((temp_v1 != 10) || ((OverworldMapDataPtr->unk3C & 0xF) != temp_v1) && (func_8004C06C(0xA2) == 0) && (func_8004C06C(0xA6) == 0)) {
        OverworldMapDataPtr->unk44 = -1;
    }
}


void func_80045DB0(void) {
    OverworldMapDataPtr->unk4C = OverworldMapDataPtr->unk1C[OverworldMapDataPtr->unk44 & 0xFE] & 0xF;
    func_80045AE4();
}


void func_80045DF4(void) {
    s32 temp_s0 = OverworldMapDataPtr->unk44 &= 0xFE;
    OverworldMapDataPtr->unk4C = OverworldMapDataPtr->unk1C[temp_s0] & 0xF;
    func_80045AE4();
    if ((OverworldMapDataPtr->unk44 < 0) && (OverworldMapDataPtr->unk4C == ((temp_s0 >> 1) & 1) + 1)) {
        OverworldMapDataPtr->unk44 = temp_s0;
    }
}


void func_80045E70(s32 x, s32 y) {
    s8 sp10[9] = {
        6, 1, 0, 
        7, 4, 5, 
        2, 8, 3
    };
    s32 j;
    s32 i;

    x--;
    y--;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            OverworldMapDataPtr->unk1C[sp10[(i * 3) + j]] = func_800453B0(x, y);
            x++;
        }
        x -= 3;
        y++;
    }
}


void func_80045F50(void) {
    s8 sp0[18] = {
        -1, 1, -1, 0,
        1, 1, 0, 1,
        1, -1, 1, 0,
        -1, -1, 0, -1,
        0, 0, 
    };
    s32 temp_v1 = OverworldMapDataPtr->unk44;

    if (OverworldMapDataPtr->unk44 >= 0) {
        OverworldMapDataPtr->unk58 = (OverworldMapDataPtr->x + sp0[(temp_v1 * 2)]);
        OverworldMapDataPtr->unk5C = (OverworldMapDataPtr->y + sp0[(temp_v1 * 2) + 1]);
    }
}


s32 func_80045FF8(s32 x, s32 y, s32 dir) {
    OverworldMapDataPtr->x = x;
    OverworldMapDataPtr->y = y;
    OverworldMapDataPtr->dir = dir;
    func_80045E70();
    func_80045494();
    OverworldMapDataPtr->unk4C = OverworldMapDataPtr->unk1C[OverworldMapDataPtr->unk44] & 0xF;
    D_800A2FAC[OverworldMapDataPtr->unk3C & 0xF](OverworldMapDataPtr);
    
    if (OverworldMapDataPtr->unk44 >= 0) {
        s32 temp_a0 = OverworldMapDataPtr->unk44;
        OverworldMapDataPtr->unk48 = OverworldMapDataPtr->unk44;
        OverworldMapDataPtr->unk4C = OverworldMapDataPtr->unk1C[OverworldMapDataPtr->unk44];
        func_80045F50(temp_a0);
    }
    return OverworldMapDataPtr->unk44;
}


s32 func_800460AC(void) {
    return OverworldMapDataPtr->unk4C;
}


s32 func_800460C0(void) {
    if (func_8004C06C(0x2F)) {
        return 0x15;
    } else {
        return 4;
    }
}


s32 func_800460F0(void) {
    return (OverworldMapDataPtr->unk3C & 0xF) == 0xA;
}
