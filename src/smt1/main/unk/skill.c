#include "skill.h"
#include "unk6.h"
#include "char_enc.h"
#include "dat.h"
#include "main.h"

void func_8005045C(u16* arg0) {
    s32 var_s1;
    s32 temp_v0;
    s32 var_s3 = 0;

    if (func_8004C7D8() != 0) {
        s32 var_s2 = D_800B72AC->cp;
        for (var_s1 = 0; var_s1 < 6; var_s1++) {
            temp_v0 = func_8004C638(var_s1);
            if (temp_v0 < 0) continue;
            if (temp_v0 >= 4) {
                var_s2 += func_8004AE2C(func_8004C9C4(temp_v0));
            }
        }
        D_800B72AC->cp = var_s2 % 10;
        if (func_8004C790(-(var_s2 / 10)) == 0) {
            D_800B72AC->cp = 0;
        }
    } else {
        for (var_s1 = 0; var_s1 < 6; var_s1++) {
            temp_v0 = func_8004C638(var_s1);
            if (temp_v0 < 0) continue;
            if (temp_v0 >= 4) {
                s32 temp_v0_3 = func_8004C90C(temp_v0);
                if (temp_v0_3 == 1) {
                    *arg0 |= temp_v0_3 << var_s1;
                }
                func_8003A900(temp_v0, 1);
                var_s3 = 1;
            }
        }
    }
    if (var_s3 == 1) {
        func_800230FC(0xFF0000);
    }
}


void func_800505D0(void) {
    s32 var_s0;

    for (var_s0 = 4; var_s0 < 16; var_s0++) {
        if ((!func_8004CB88(var_s0)) && (!func_8004C87C(var_s0))) {
            // Increase character's HP by 1/4 of their level, plus 1.
            func_8004D42C(var_s0, (func_8004CA20(var_s0) / 4) + 1);
        }
    }
}


s32 func_80050648(void) {
    if ((func_8004C85C(0) & 0xF078)) {
        return 83;
    } else if (!func_8004C06C(FLAG_COMP)) {
        return 84;
    } else if (func_80044114()) {
        struct skill_params sp10;
        func_8002F734(&sp10);
        if (func_8003A7C4(sp10.arg2, sp10.arg3) & 0x80) {
            return 85;
        }
    }
    
    return 0;
}


void func_800506BC(void) {
    s32 var_s0;

    switch (func_80044114()) {
    case 0xFF:
        return;
    case 0:
        var_s0 = func_800460C0();
        break;
    default:
        var_s0 = func_8003AFB4();
        break;
    }
    if (var_s0 != func_800408BC(0)) {
        func_80040204(var_s0);
        func_8004018C(var_s0, 12, 0, 5);
    }
}


void func_80050740(struct skill_params * arg0, s32 arg1) {
    arg1 -= 0x1F;
    if (arg1 >= 0) {
        arg0->arg2 = -1;
        arg0->arg3 = 1;
        D_800ACC8C[arg1](arg0);
    }
}


void func_80050790(struct skill_params * arg0, s32 arg1) {
    arg0->arg2 = -1;
    arg0->arg3 = 1;
    D_800ACC64[arg1](arg0);
}


// Transfer 25% of one character's current MP to another.
void func_800507D8(struct skill_params * arg0) {
    // Get target's max MP, and if it's zero we return.
    if (func_8004C9A4(arg0->target) == 0) {
        arg0->arg3 = 0;
    } else {
        // Get a quarter of the target's current MP.
        s32 var_s0 = func_8004C968(arg0->target) / 4;

        // Add the MP to the recipient and remove it from the target.
        func_8004D538(arg0->user, var_s0);
        func_8004D538(arg0->target, -var_s0);

        // Stores the target's character ID somewhere.
        func_8004EA64(func_8004C9C4(arg0->target));
    }
}


void func_80050874(s32 arg0, struct skill_params * arg1) {
    if (arg0 != 0) {
        arg1->arg2 = 150;
        arg1->arg3 = 0;
    }
}


void func_8005088C(struct skill_params * arg0) {
    func_8004EA64(func_8004C9C4(arg0->target));
    func_80050874(func_80124A50(arg0->target, -1), arg0);
}


void func_800508DC(struct skill_params* arg0) {
    func_8004EA64(func_8004C9C4(arg0->target));
    func_80050874(func_80124AB4(arg0->target, -1), arg0);
}


void func_8005092C(struct skill_params* arg0) {
    func_8004EA64(func_8004C9C4(arg0->target));
    func_80050874(func_80124B18(arg0->target, -1), arg0);
}


void func_8005097C(struct skill_params* arg0) {
    func_80050874(func_80124A50(arg0->user, 1), arg0);
}


void func_800509B4(struct skill_params* arg0) {
    func_80050874(func_80124AB4(arg0->user, 1), arg0);
}


void func_800509EC(struct skill_params* arg0) {
    func_80050874(func_80124B18(arg0->user, 1), arg0);
}


void func_80050A24(struct skill_params* arg0) {
    func_80050874(func_80124B7C(arg0->user, 1), arg0);
}


void func_80050A5C(struct skill_params* arg0, s16 arg1, s32 arg2) {
    if (func_80124828(arg0->user) & arg1) {
        arg0->arg2 = 150;
        arg0->arg3 = 0;
    } else {
        func_80124860(arg0->user, arg1);
        if (arg2 >= 0) {
            arg0->arg2 = arg2;
            if (arg0->user >= 16) {
                arg0->arg2 = arg2 + 1;
            }
        }
    }
}


void func_80050AEC(struct skill_params* arg0) {
    func_80050A5C(arg0, 4, 0xCB);
}


void func_80050B10(struct skill_params* arg0) {
    func_80050A5C(arg0, 1, 0xCD);
}


void func_80050B34(struct skill_params* arg0) {
    func_80050A5C(arg0, 2, 0xCF);
}


// Heals the target character.
s16 func_80050B58(s32 arg0, s32 arg1) {
    struct character_data* temp_a0 = &D_800B72AC->characters[arg0];
    
    temp_a0->hp += arg1;
    if (temp_a0->hp > temp_a0->max_hp) {
        temp_a0->hp = temp_a0->max_hp;
    }
    return temp_a0->hp;
}


// Calculates the effect of healing skills.
s32 func_80050BA8(struct skill_params * arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s1;

    if (arg1 == -1) return 999;
    temp_s0 = arg0->user;
    
    // Add 1/4 of the target's luck.
    temp_s1 = func_8004D0F0(arg0->target) / 4;
    
    // Add 1/2 of the user's magic.
    temp_s1 += func_8004E7A0(func_8004D06C(temp_s0), 2);
    
    // Add 1/4 of the user's intelligence.
    temp_s1 += func_8004E7A0(func_8004D040(temp_s0), 4);

    // Return ((x * 2) * 2^arg1) + rand(0, 7)
    return ((temp_s1 * 2) << arg1) + (func_8004E780() & 7);
}


// Tries to heal the target character.
void func_80050C48(struct skill_params* arg0, s32 arg1) {
    s32 temp_s0 = arg0->target;
    
    if (func_8004C87C(temp_s0)) {
        arg0->arg3 = 0;
    } else {
        func_8004EA64(func_8004C9C4(temp_s0));
        if (!func_8004D300(temp_s0)) {
            func_80050B58(temp_s0, func_80050BA8(arg0, arg1));
            arg0->arg3 = 1;
        } else {
            arg0->arg3 = 0;
        }
    }
}


// Heals with a factor of 0.
void func_80050CD8(struct skill_params* arg0) {
    func_80050C48(arg0, 0);
}


// Heals with a factor of 2.
void func_80050CF8(struct skill_params* arg0) {
    func_80050C48(arg0, 2);
}


// Heals for max.
void func_80050D18(struct skill_params* arg0) {
    func_80050C48(arg0, -1);
}


// Heals all allies.
void func_80050D38(struct skill_params* arg0, s32 arg1) {
    struct skill_params sp10 = *arg0;
    s32 var_s1 = 0;

    if (arg0->user >= 16) {
        s32 var_s0;
        for (var_s0 = 16; var_s0 < 24; var_s0++) {
            if (func_8004CA5C(var_s0)) {
                sp10.target = var_s0;
                func_80050C48(&sp10, arg1);
                if (sp10.arg3 != 0) {
                    var_s1 += 1;
                }
            }
        }
    } else {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 6; var_s0++) {
            sp10.target = func_8004C638(var_s0);
            if (sp10.target >= 0) {
                func_80050C48(&sp10, arg1);
                if (sp10.arg3 != 0) {
                    var_s1 += 1;
                }
            }
        }
    }
    if (var_s1 == 0) {
        arg0->arg3 = 0;
    }
}


// Heals all allies with a factor of 0.
void func_80050E5C(struct skill_params* arg0) {
    func_80050D38(arg0, 0);
}


// Heals all allies with a factor of 2.
void func_80050E7C(struct skill_params* arg0) {
    func_80050D38(arg0, 2);
}


void func_80050E9C(struct skill_params* arg0, s32 arg1) {
    u16 temp_s1 = func_8004B144(arg1);
    s32 temp_s0 = arg0->target;

    if (!func_8004C87C(temp_s0)) {
        func_8004EA64(func_8004C9C4(temp_s0));
        if (func_8004C85C(temp_s0) & temp_s1) {
            func_8004C8A0(temp_s0, ~temp_s1);
            arg0->arg3 = 1;
            return;
        }
    }
    arg0->arg3 = 0;
}


void func_80050F34(struct skill_params* arg0) {
    func_80050E9C(arg0, SKILL_PATRA);
}


void func_80050F54(struct skill_params* arg0) {
    func_80050E9C(arg0, SKILL_POSMUDI);
}


void func_80050F74(struct skill_params* arg0) {
    func_80050E9C(arg0, SKILL_PARALADI);
}


void func_80050F94(struct skill_params* arg0) {
    func_80050E9C(arg0, SKILL_PETRADI);
}


// Penpatra?
void func_80050FB4(struct skill_params* arg0) {
    struct skill_params sp10 = *arg0;
    s32 var_s1 = 0;

    if (arg0->user >= 0x10) {
        s32 var_s0;
        for (var_s0 = 16; var_s0 < 24; var_s0++) {
            if (func_8004CA5C(var_s0) != 0) {
                sp10.target = var_s0;
                func_80050E9C(&sp10, SKILL_PATRA);
                if (sp10.arg3 != 0) {
                    var_s1 += 1;
                }
            }
        }
    } else {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 6; var_s0++) {
            sp10.target = func_8004C638(var_s0);
            if (sp10.target >= 0) {
                func_80050E9C(&sp10, SKILL_PATRA);
                if (sp10.arg3 != 0) {
                    var_s1 += 1;
                }
            }
        }
    }
    if (var_s1 == 0) {
        arg0->arg3 = 0;
    }
}


// Probably related to a revival item or skill.
void func_800510CC(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    
    if ((func_8004C85C(temp_s0) & 0xC000) == 0x4000) {
        // 31/32 chance of proceeding.
        if (func_8004E780() & 0x1F) {
            func_8004C8A0(temp_s0, 0x100);

            // Cap target's HP to max.
            func_8004D358(temp_s0);

            // Set target's HP to 25% of the max.
            func_8004D488(temp_s0, -75);
            func_8004EA64(func_8004C9C4(temp_s0));
            arg0->arg2 = 229;
            if (temp_s0 >= 16) {
                arg0->arg2 = 230;
            }
        } else {
            arg0->arg2 = 149;
            func_8004C8C8(temp_s0, 0x8000);
        }
        arg0->arg3 = 1;
    } else {
        arg0->arg3 = 0;
    }
}


void func_80051194(struct skill_params* arg0) {
    s32 target = arg0->target;
    u16 status = func_8004C85C(target);
    
    if (status & 0xC000) {
        arg0->arg3 = 1;
        // 1/64 chance of proceeding.
        if ((status & 0x8000) && !(func_8004E780() & 0x3F)) {
            arg0->arg2 = 149;
            func_8004C8C8(target, 0x8000);
            if (target > 3 && target < 16) {
                u16 chara = func_8004C9C4(target);
                if ((chara != DEMON_GABRIEL) && 
                (chara != DEMON_RAPHAEL) && 
                (chara != DEMON_URIEL) && 
                (chara != DEMON_CERBERUS)) {
                    func_8004CC58(target);
                    func_8004CB04(target);
                }
            }
        } else {
            func_8004C8A0(target, 0x100);
            func_8004D358(target);
            func_8004EA64(func_8004C9C4(target));
            arg0->arg2 = 229;
            if (target >= 16) {
                arg0->arg2 = 230;
            }
        }
    } else {
        arg0->arg3 = 0;
    }
}


void func_800512A4(struct skill_params* arg0) {
    s32 temp_s3 = arg0->user;
    s32 var_s1;
    s32 var_s2 = 0;

    if (temp_s3 >= 16) {
        for (var_s1 = 16; var_s1 < 24; var_s1++) {
            if (func_8004CAC0(var_s1)) {
                if (!func_8004D300(var_s1)) {
                    func_8004D358(var_s1);
                    var_s2 += 1;
                }
                if (!func_8004D32C(var_s1)) {
                    func_8004D394(var_s1);
                    var_s2 += 1;
                }
            }
        }
    } else {
        for (var_s1 = 0; var_s1 < 6; var_s1++) {
            s32 temp_v0 = func_8004C638(var_s1);
            if ((temp_v0 >= 0) && (!func_8004C87C(temp_v0))) {
                if (!func_8004D300(temp_v0)) {
                    func_8004D358(temp_v0);
                    var_s2 += 1;
                }
                if (!func_8004D32C(temp_v0)) {
                    func_8004D394(temp_v0);
                    var_s2 += 1;
                }
            }
        }
    }
    if (var_s2 != 0) {
        arg0->arg2 = 217;
        if (temp_s3 >= 16) {
            arg0->arg2 = 218;
        }
        func_8004C8C8(temp_s3, 0x4000);
        func_8004C94C(temp_s3, 0);
        func_8004C988(temp_s3, 0);
        func_8004EA64(func_8004C9C4(temp_s3));
        if (temp_s3 > 3 && temp_s3 < 16) {
            func_8004EB7C(temp_s3);
        }
        arg0->arg3 = 1;
    } else {
        arg0->arg3 = 0;
    }
}


void func_80051448(struct skill_params* arg0) {
    s32 target = arg0->target;
    s32 user = arg0->user;

    if ((!func_8004C87C(target)) && (!func_8004D32C(target))) {
        func_8004D538(target, 10);
        arg0->arg3 = 1;
        func_8004EA64(func_8004C9C4(user));
    } else {
        arg0->arg3 = 0;
    }
}


void func_800514D0(struct skill_params* arg0) {
    if ((func_80044114()) && (func_8004C3A8() != 0)) {
        func_8004C6CC(0x100);
        arg0->arg3 = 1;
    } else {
        arg0->arg3 = 0;
    }
}


void func_80051524(struct skill_params* arg0) {
    s8 sp10[4] = {
        13, 16, 20, 57
    };

    if (func_80044114() != 0) {
        s32 temp_a0 = func_8002E9A4() & 0x3F;
        u32 var_v1;
        for (var_v1 = 0; var_v1 < 4; var_v1++) {
            if (sp10[var_v1] == temp_a0) {
                arg0->arg3 = 0;
                return;
            }
        }

        if ((temp_a0 != 15) || (func_8004C06C(0x5C))) {
            func_8004C0B4(12);
            if (!func_8004C06C(FLAG_MISSILE_STRIKE)) {
                func_8004C0B4(FLAG_NO_ENCOUNTERS);
                func_8004C6B0(0xFF7F);
                arg0->arg3 = 1;
                return;
            }
        }
    }
    arg0->arg3 = 0;
}


void func_800515F4(struct skill_params* arg0) {
    s8 sp10[3] = {
        16, 20, 57
    };

    if (((*func_8004C5A8())[5] != -1) && (func_80044114() != 0)) {
        s32 temp_a0 = func_8002E9A4() & 0x3F;
        u32 var_v1;
        
        for (var_v1 = 0; var_v1 < 3; var_v1++) {
            if (sp10[var_v1] == temp_a0) {
                arg0->arg3 = 0;
                return;
            }
        }
        
        if (((temp_a0 != 15) || (func_8004C06C(0x5C))) && (!func_8004C06C(FLAG_MISSILE_STRIKE))) {
            func_8004C0B4(12);
            func_8004C0B4(FLAG_NO_ENCOUNTERS);
            func_8004C6B0(0xFF7F);
            arg0->arg3 = 1;
            return;
        }
    }
    arg0->arg3 = 0;
}


void func_800516E0(struct skill_params* arg0) {
    if (func_801221A4() & 0x100) {
        arg0->arg3 = 0;
    } else {
        func_801221CC(0x2000);
        arg0->arg3 = 1;
    }
}


void func_80051728(struct skill_params* arg0) {
    if (func_8004C69C() & 0x80) {
        arg0->arg2 = 150;
    } else {
        func_8004C6CC(0x80);
    }
    arg0->arg3 = 1;
}


void func_80051770(struct skill_params * arg0) {
}


void func_80051778(struct skill_params * arg0) {
}


void func_80051780(struct skill_params * arg0) {
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80051788);

void func_80051974(struct skill_params* arg0) {
    func_80124B18(arg0->target, -1);
}


void func_80051998(struct skill_params* arg0) {
    if (func_80124828(arg0->target) & 4) {
        arg0->arg2 = (arg0->target < 16) ? 0x154 : 0x153;
    } else {
        func_80050B58(arg0->user, arg0->arg6);
    }
}


void func_80051A00(struct skill_params* arg0) {
    func_80050A5C(arg0, 8, -1);
}


void func_80051A24(struct skill_params* arg0) {
    func_80050A5C(arg0, 0x10, -1);
}


void func_80051A48(struct skill_params* arg0) {
    func_8004CCB0(arg0->user, 9);
}


void func_80051A6C(struct skill_params* arg0) {
    s32 temp_s0 = arg0->user;
    
    func_8004CB04(temp_s0);
    func_8004C8F0(temp_s0, 0x4000);
    func_80117F70(-1);
    if (func_80122308() == 0) {
        func_801221CC(0x200);
    }
}


void func_80051AC0(struct skill_params* arg0) {
    if (arg0->user >= 16) {
        if (func_8004E780() & 7) {
            s32 temp_s1 = func_80122370((arg0->user < 20) ? 16 : 20);
            s32 var_v1 = (func_80122214() != 0) ? 4 : 8;
            if (temp_s1 < var_v1) {
                func_80123B1C(arg0->user, 1);
                func_8004EA64(func_8004C9C4(arg0->user));
                arg0->arg2 = 0x139;
                return;
            }
        }
    }
    arg0->arg3 = 0;
    arg0->arg2 = 0x11C;
}


void func_80051B88(struct skill_params* arg0, s32 arg1) {
    s32 sp10;

    func_8004B3B8(arg1, 12, &sp10);
    if (sp10 - 0x80 >= 0) {
        arg0->arg2 = -1;
        arg0->arg3 = 1;
        arg0->arg4 = sp10 - 0x80;
        D_800ACE04[sp10 - 0x80](arg0);
    }
}


// Restore 25% of max HP.
void func_80051BFC(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    
    if ((func_8004C87C(temp_s0) == 0) && (!func_8004D300(temp_s0))) {
        s16 var_v0 = func_8004C92C(temp_s0);
        func_8004D42C(temp_s0, var_v0 / 4);
    } else {
        arg0->arg3 = 0;
    }
}


void func_80051C78(struct skill_params* arg0) {
    s32 target = arg0->target;
    s32 max_hp = func_8004C92C(target);
    
    if (func_8004C87C(target) == 0) {
        s32 rand = func_8004E780();
        s16 hp = func_8004C90C(target);

        // Current HP + 1/2 of level + (2 * rand(1, 8))
        s32 var_s0 = (((rand & 7) + 1) * 2) + hp + func_8004E7A0(func_8004CA20(target), 2);
        
        // If greater than 999 or double max HP.
        if ((var_s0 >= 999) || ((max_hp * 2) < var_s0)) {
            // Half of max HP.
            var_s0 = max_hp / 2;
            func_8004C8C8(target, 0x800);
        }

        // Set current HP.
        func_8004C94C(target, var_s0);
    } else {
        arg0->arg3 = 0;
    }
}


// Set HP to max.
void func_80051D70(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    
    if ((func_8004C87C(temp_s0) == 0) && (!func_8004D300(temp_s0))) {
        func_8004D358(temp_s0);
    } else {
        arg0->arg3 = 0;
    }
}


void func_80051DD0(struct skill_params* arg0) {
    s32 var_s0 = 0;
    s32 temp_s1 = arg0->target;

    if (!func_8004C87C(temp_s1)) {
        if (!func_8004D300(temp_s1)) {
            var_s0 = func_8004E7A0(func_8004C92C(temp_s1), 8) + 8;
            func_8004D42C(temp_s1, var_s0);
        }
        if (!func_8004D32C(temp_s1)) {
            s32 temp_s0 = func_8004E780();
            var_s0 = (((temp_s0 & 7) + 1) * 2) + func_8004E7A0(func_8004CA20(temp_s1), 4);
            func_8004D538(temp_s1, var_s0);
        }
    }
    if (var_s0 == 0) {
        arg0->arg3 = 0;
    }
}


void func_80051EAC(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    s32 var_s1 = 0;
    
    if (!func_8004C87C(temp_s0)) {
        if (!func_8004D300(temp_s0)) {
            func_8004D358(temp_s0);
            var_s1 = 1;
        }
        if (!func_8004D32C(temp_s0)) {
            func_8004D394(temp_s0);
            var_s1 += 1;
        }
        if (func_8004C85C(temp_s0) & 0x38FF) {
            func_8004C8A0(temp_s0, 0xC700);
            var_s1 += 1;
        }
    }
    if (var_s1 == 0) {
        arg0->arg3 = 0;
    }
}


void func_80051F58(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    
    if ((func_8004C85C(temp_s0) & 0xC000) == 0x4000) {
        if (func_8004E780() & 0x3F) {
            s32 var_a1;
            func_8004C8A0(temp_s0, 0x100);
            var_a1 = func_8004C92C(temp_s0) / 8;
            if (var_a1 == 0) {
                var_a1 = 1;
            }
            func_8004C94C(temp_s0, var_a1);
            func_8004EA64(func_8004C9C4(temp_s0));
            arg0->arg2 = 0x124;
        } else {
            func_8004C8C8(temp_s0, 0x8000);
            arg0->arg2 = 0x95;
        }
    } else {
        arg0->arg3 = 0;
    }
}


void func_80052024(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    
    if (func_8004C87C(temp_s0)) {
        if (func_8004E780() & 0x7F) {
            func_8004C8A0(temp_s0, 0x100);
            func_8004D358(temp_s0);
            func_8004EA64(func_8004C9C4(temp_s0));
            arg0->arg2 = 0x125;
        } else {
            func_8004C8C8(temp_s0, 0x8000);
            arg0->arg2 = 0x95;
            if (temp_s0 >= 4) {
                u16 temp_v0 = func_8004C9C4(temp_s0);
                if (((temp_v0 < 0x20) || (temp_v0 > 0x22)) && (temp_v0 != 0x8B)) {
                    func_8004EBAC(temp_s0);
                }
            }
        }
    } else {
        arg0->arg3 = 0;
    }
}


void func_80052100(struct skill_params* arg0) {
    s32 var_s1;
    s32 var_s2 = 0;

    for (var_s1 = 0; var_s1 < 6; var_s1++) {
        s32 temp_v0 = func_8004C638(var_s1);
        if ((temp_v0 >= 0) && (!func_8004C87C(temp_v0)) && (!func_8004D32C(temp_v0))) {
            func_8004D538(temp_v0, 5);
            var_s2 += 1;
        }
    }
    
    if (var_s2 == 0) {
        arg0->arg3 = 0;
    }
}


void func_8005219C(struct skill_params* arg0) {
    s32 var_s2 = 0;
    s32 temp_s0 = arg0->target;
    s32 var_s4 = 0;
    
    if (func_8004C87C(temp_s0) == 0) {
        s32 temp_s1 = arg0->arg4 - 8;
        if (func_8004D2E0(temp_s0, temp_s1) < 40) {
            func_8004D1DC(temp_s0, temp_s1, 1);
            func_8004DC84(temp_s0);
            var_s4 = 1;
        }
        if (!func_8004D300(temp_s0)) {
            func_8004D358(temp_s0);
            func_8004EA64(func_8004C9C4(temp_s0));
            var_s2 = 1;
        }
    }
    if (var_s4 == 0) {
        if (var_s2 == 1) {
            arg0->arg2 = 0x11F;
        }
        if (var_s2 == 0) {
            arg0->arg3 = 0;
        }
    }
}


void func_80052280(struct skill_params* arg0, s32 arg1) {
    s32 var_s2;
    s32 var_s1 = 0;
    
    for (var_s2 = 0; var_s2 < 6; var_s2++) {
        s32 temp_v0 = func_8004C638(var_s2);
        if ((temp_v0 >= 0) && (!func_8004C87C(temp_v0))) {
            if (func_8004E600(temp_v0) == arg1) {
                if (!func_8004D300(temp_v0)) {
                    func_8004D358(temp_v0);
                    var_s1 += 1;
                }
                if (func_8004C85C(temp_v0) & 0x38FF) {
                    func_8004C8A0(temp_v0, 0xC700);
                    var_s1 += 1;
                }
            } else {
                func_8004C94C(temp_v0, func_8004E7A0(func_8004C90C(temp_v0), 2));
            }
        }
    }
    if (var_s1 == 0) {
        arg0->arg3 = 0;
    }
}


void func_80052380(struct skill_params* arg0) {
    func_80052280(arg0, 0);
}


void func_800523A0(struct skill_params* arg0) {
    func_80052280(arg0, 2);
}


void func_800523C0(struct skill_params* arg0, u16 arg1, s32 arg2) {
    if ((func_8004C69C() & arg1)) {
        arg0->arg2 = 0x96;
    } else {
        func_8004C6CC(arg1);
        arg0->arg2 = arg2;
    }
}


void func_8005242C(struct skill_params* arg0) {
    func_800523C0(arg0, 1, 0x12F);
}


void func_80052450(struct skill_params* arg0) {
    func_800523C0(arg0, 2, 0x130);
}


void func_80052474(struct skill_params* arg0) {
    func_800523C0(arg0, 4, 0x131);
}


void func_80052498(struct skill_params* arg0) {
    func_800523C0(arg0, 8, 0x132);
}


void func_800524BC(struct skill_params* arg0) {
    func_800523C0(arg0, 0x10, 0x133);
}


void func_800524E0(struct skill_params* arg0) {
    func_800523C0(arg0, 0x20, 0x134);
}


void func_80052504(struct skill_params* arg0) {
    func_800523C0(arg0, 0x40, 0x135);
}


void func_80052528(struct skill_params* arg0) {
    s32 var_s0 = 16;

    if (func_80122464(arg0) == 0) {
        s32 var_s1;
        for (var_s1 = 0; var_s1 < 8; var_s1++) {
            if (func_8004CAC0(var_s0)) {
                func_8004C8F0(var_s0, (func_8004C85C(var_s0) & 0x8000) | 0x4000);
                func_8004C94C(var_s0, 0);
                func_8004C988(var_s0, 0);
                func_8004EA64(func_8004C9C4(var_s0));
                return;
            }
            var_s0 += 1;
        }
    }
    arg0->arg3 = 0;
}


void func_800525D4(struct skill_params* arg0) {
    s32 temp_s0 = arg0->target;
    
    if (func_8004C87C(temp_s0) == 0) {
        u16 temp_v1 = func_8004E780();
        if (temp_v1 < 0x10) {
            s32 var_s1 = 0;
            if (func_8004D300(temp_s0) == 0) {
                func_8004D358(temp_s0);
                var_s1 = 1;
            }
            if (func_8004D32C(temp_s0) == 0) {
                func_8004D394(temp_s0);
                var_s1 += 1;
            }
            if (var_s1 == 0) {
                arg0->arg3 = 0;
            }
        } else {
            if (temp_v1 < 0x50) {
                if (func_8004D300(temp_s0) == 0) {
                    func_8004D42C(temp_s0, (s32) func_8004CA20(temp_s0));
                } else {
                    arg0->arg3 = 0;
                }
            } else if (temp_v1 >= 0xB0) {
                if (temp_v1 < 0xF0) {
                    func_8004C94C(temp_s0, (func_8004C90C(temp_s0) / 4) + 1);
                } else {
                    func_8004C94C(temp_s0, (func_8004C90C(temp_s0) / 8) + 1);
                    if (temp_s0 == 0) {
                        func_8004C988(temp_s0, func_8004C968(temp_s0) / 8);
                    } else {
                        func_8004C988(temp_s0, (func_8004C968(temp_s0) / 8) + 1);
                    }
                }
            }
        }
    } else {
        arg0->arg3 = 0;
    }
}


void func_80052784(struct skill_params* arg0) {
    if ((!func_80122464(arg0)) && !(func_801221A4() & 0x100)) {
        func_801221CC(0x200);
    } else {
        arg0->arg3 = 0;
    }
}


void func_800527D8(s32 arg0, s32 arg1) {
    D_800B7488 = arg0;
    D_800B748C = arg1;
}


u8* func_800527E8(void) {
    u8* temp_v0 = func_800193C0(0x1F0);
    bzero(temp_v0, 0x1F0);
    ((s32*)temp_v0)[0x21] = 0x80;
    return temp_v0;
}


void func_80052828(struct unk_data_9* arg0) {
    if (arg0 != NULL) {
        func_80052BF0(arg0);
        func_80019478(arg0->prev);
        arg0->prev = NULL;
        func_80019478(arg0);
    }
}


s32 func_8005286C(s32* arg0) {
    if (arg0 == NULL) return 0;
    return arg0[0x21] != 0x80;
}


void func_80052890(struct unknown_object_struct* arg0, s32 arg1) {
    arg0->unk19A = 0;
    if ((arg0->unk0 != arg1) || (arg0->unk4 == 0)) {
        arg0->unk84 = 10;
        arg0->unk0 = arg1;
    } else {
        arg0->unk1EC = 0;
        arg0->unk84 = 18;
    }
}


void func_800528CC(struct unknown_object_struct* arg0, s32 arg1) {
    if (arg0->unk84 == 0x80) {
        arg0->unk84 = 0x20;
        arg0->unk2 = arg1;
        arg0->unk8 = &arg0->unk90;
        arg0->unk88 = arg0->unk10[arg0->unk2];
    }
}


void func_80052910(struct unknown_object_struct* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 != NULL) {
        arg0->unk8C = arg3;
        arg0->unk2 = arg2;
        func_80052890(arg0, arg1);
        func_80052C74(arg0, 1, arg4, 0);
        if ((arg3 != 999) && (func_80044114() < 2)) {
            func_80025308(1);
            func_800225C8(1, 1, 1, 1, 2);
            func_80023F58(1);
        }
    }
}


void func_800529AC(struct unknown_object_struct* arg0, s32 arg1, s16 arg2) {
    arg0->unk2 = arg2;
    func_80052890(arg0, arg1);
    func_80052C74(arg0, 1, -1, 0);
}


void func_800529E8(struct unknown_object_struct* arg0) {
    if (arg0 != NULL) {
        switch (arg0->flags & ~3) {
        case 0x8:
            func_80052D10(arg0);
            return;
        case 0x10:
            if (func_80019ECC(arg0->unk1EC) != 0) {
                func_80052D78(arg0);
                if (arg0->unk19A & 1) {
                    func_800528CC(arg0, arg0->unk2);
                    return;
                }
            }
            break;
        case 0x40:
            if (((func_80044114() >= 2) || (func_8001F920() == 2)) && (func_80040A68(0) == 0)) {
                if (arg0->unk8C != 999) {
                    u8 temp_v1_2 = arg0->unk19B;
                    if ((!(arg0->unk19B & 2) || (temp_v1_2 & 4)) && (func_80044124() != 1)) {
                        switch (func_80044114()) {
                        case 0:
                            func_80025308(0);
                            func_80023F58(0);
                            func_800225C8(2, 3, 3, 2, 2);
                            break;
                        case 1:
                            func_800225C8(0, 3, 0, 0, 2);
                        }
                        func_8004440C();
                        func_80052E00(arg0);
                    } else {
                        return;
                    }
                }
                bzero((u8* ) &arg0->unk8, 0x1E8);
                arg0->flags &= ~0x40;
                arg0->flags |= 0x80;
                return;
            }
            break;
        default:
            func_80052E6C(arg0);
            if (arg0->unk19A & 4) {
                FntPrint("-NO=%d-\n", arg0->unk19C);
            }
            break;
        case 0x80:
            break;
        }
    }
}


void func_80052BF0(struct unknown_object_struct* arg0) {
    RemoveObject(arg0->sprite0);
    func_80052E20(arg0);
    RemoveObject(arg0->sprite9);
    RemoveObject(arg0->sprite10);
    RemoveObject(arg0->sprite11);
    RemoveObject(arg0->sprite12);
    arg0->sprite0 = NULL;
    arg0->sprite9 = NULL;
    arg0->sprite10 = NULL;
    arg0->sprite11 = NULL;
    arg0->sprite12 = NULL;
    arg0->unk19A &= 0xFB;
}


void func_80052C74(struct unknown_object_struct* arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != -1) {
        arg0->unk19A |= 1;
    }
    if (arg2 != -1) {
        arg0->unk19A |= 2;
    }
    if (arg3 != -1) {
        arg0->unk19A |= 4;
    }
    if (arg1 == 0) {
        arg0->unk19A &= 0xFE;
    }
    if (arg2 == 0) {
        arg0->unk19A &= 0xFD;
    }
    if (arg3 == 0) {
        arg0->unk19A &= 0xFB;
    }
}


void func_80052D10(struct unknown_object_struct* arg0) {
    u32 temp_s1 = arg0->unk0 + 0x30;
    
    func_80019478(arg0->unk4);
    arg0->unk4 = NULL;
    arg0->sprite14 = func_80019C58(0, 0, temp_s1, &arg0->unk4, 0, 3);
    arg0->flags = 0x10;
}


void func_80052D78(struct unknown_object_struct* arg0) {
    s32* temp_v1 = arg0->unk4;
    
    arg0->flags = 0x80;
    arg0->unk190 = 0;
    arg0->unk8 = &arg0->unk90;
    arg0->unkC = &((u8*)temp_v1)[temp_v1[3]];
    arg0->unk10 = &((u8*)temp_v1)[temp_v1[1]];
    arg0->unk14 = &((u8*)temp_v1)[temp_v1[2]];
    arg0->unk18 = &((u8*)temp_v1)[temp_v1[4]];
    arg0->unk1C = &((u8*)temp_v1)[temp_v1[5]] + 2;
    arg0->unk88 = arg0->unk10[arg0->unk2];
}


void func_80052E00(struct unknown_object_struct* arg0) {
    func_80052BF0(arg0);
}


void func_80052E20(struct unknown_object_struct * arg0) {
    s32 var_s1;

    for (var_s1 = 0; var_s1 < 8; var_s1++) {
        func_80055E8C(arg0->sprite1[var_s1], var_s1);
        arg0->sprite1[var_s1] = NULL;
    }
}


void func_80052E6C(struct unknown_object_struct* arg0) {
    u8* temp_s1;
    s16* temp_v0_2;
    s16* temp_v1_3;
    u16* var_v1;
    s32 temp_v0;
    s32 var_v0;
    u32 temp_v1;
    u8 temp_a0;
    u8 temp_v1_2;

    if (arg0->unk190 > 0) {
        arg0->unk190 -= 1;
        return;
    }

    temp_s1 = (u8 *)arg0->unkC;

    while (1) {
        if (arg0->flags & 2) {
            arg0->flags ^= 2;
            return;
        }

        temp_v1_2 = temp_s1[arg0->unk88];

        if (temp_v1_2 < 0x16) {
            func_800530B4(arg0);
        } else if (temp_v1_2 < 0x26) {
            func_800532FC(arg0);
        } else if (temp_v1_2 >= 0x40) {
            func_80053464(arg0);
        } else {
            switch (temp_v1_2) {
            case 0x2E:
                arg0->unk88 = arg0->unk14[*((u16 *)&temp_s1[arg0->unk88 + 2])];
                break;
            case 0x2F:
                *arg0->unk8++ = arg0->unk88 + 4;
                arg0->unk88 = arg0->unk10[*((u16 *)&temp_s1[arg0->unk88 + 2])];
                break;
            case 0x30:
                arg0->unk88 = *--arg0->unk8;
                break;
            case 0x32:
                arg0->unk190 = (temp_s1[arg0->unk88 + 1] / 2) + 1;
                arg0->unk88 += 2;
                arg0->flags = 2;
                break;
            case 0x3E:
                arg0->flags = 3;
                if ((func_8005667C(&arg0->sprite12) != 0) && (func_800213A0(&arg0->sprite0, 1) == 3)) {
                    arg0->flags = 0x42;
                    arg0->unk8 = (s16* ) &arg0->unk90;
                    arg0->unk88 += 2;
                    if (arg0->unk19A & 2) {
                        func_8001F6B8();
                    }
                }
                break;
            }
        }
    }
}


void func_80053064(struct unknown_object_struct* arg0, s16* arg1) {
    u8 temp_a2;
    u8* temp_a1;

    temp_a1 = &((u8*)arg0->unkC)[arg0->unk88];
    arg1[0] = *temp_a1++;
    temp_a2 = *temp_a1++;
    arg1[1] = temp_a2 >> 4;
    func_80053660(arg0, temp_a1, temp_a2 & 0xF, arg1);
}


void func_800530B4(struct unknown_object_struct* arg0) {
    struct unk_data_901 sp10;

    func_80053064(arg0, &sp10);
    switch (sp10.unk0) {
    case 0 ... 9:
        break;
    case 10:
        arg0->unk20[sp10.unk2] += 1;
        break;
    case 11:
        arg0->unk20[sp10.unk2] -= 1;
        break;
    case 12:
        arg0->unk20[sp10.unk2] = sp10.unk4;
        break;
    case 13:
        arg0->unk20[sp10.unk2] += sp10.unk4;
        break;
    case 14:
        arg0->unk20[sp10.unk2] -= sp10.unk4;
        break;
    case 15:
        arg0->unk20[sp10.unk2] *= sp10.unk4;
        break;
    case 16:
        arg0->unk20[sp10.unk2] /= sp10.unk4;
        break;
    case 17:
        arg0->unk20[sp10.unk2] %= sp10.unk4;
        break;
    case 18:
        arg0->unk20[sp10.unk2] &= sp10.unk4;
        break;
    case 19:
        arg0->unk20[sp10.unk2] |= sp10.unk4;
        break;
    case 20:
        arg0->unk20[sp10.unk2] ^= sp10.unk4;
        break;
    case 21:
        arg0->unk20[sp10.unk2] = -sp10.unk4;
        break;
    }
    arg0->unk88 += sp10.unk8 + 2;
}


void func_800532FC(struct unknown_object_struct* arg0) {
    struct unk_data_901 sp10;
    s32 temp_a0;
    s32 var_s0 = 1;

    func_80053064(arg0, &sp10);
    arg0->unk88 += sp10.unk8 + 2;
    temp_a0 = arg0->unk20[sp10.unk2];
    switch (sp10.unk0) {
    case 32:
        if (temp_a0 == sp10.unk4) {
            var_s0 = 0;
        }
        break;
    case 33:
        if (temp_a0 >= sp10.unk4) {
            var_s0 = 0;
        }
        break;
    case 34:
        if (temp_a0 <= sp10.unk4) {
            var_s0 = 0;
        }
        break;
    case 35:
        if (temp_a0 > sp10.unk4) {
            var_s0 = 0;
        }
        break;
    case 36:
        if (temp_a0 < sp10.unk4) {
            var_s0 = 0;
        }
        break;
    case 37:
        if (temp_a0 != sp10.unk4) {
            var_s0 = 0;
        }
        break;
    }
    if (var_s0 != 0) {
        arg0->unk88 = arg0->unk14[*((u16*)&((u8*)arg0->unkC)[arg0->unk88])];
    } else {
        arg0->unk88 += 2;
    }
}


void func_80053464(struct unknown_object_struct* arg0) {
    void (*temp_v0)(struct unknown_object_struct*);
    s32 temp_s3 = arg0->unk88;
    s32 temp_s2 = arg0->flags;
    s32 temp_s1 = ((u8*)arg0->unkC)[temp_s3] - 0x40;
    
    if (!(temp_s2 & 1)) {
        func_80053550(arg0);
        arg0->unk194 = 0;
        arg0->unk198 = temp_s1;
        arg0->unk1B0 = 0;
        arg0->unk8A = arg0->unk88;
    }
    if (arg0->unk8C == 999) {
        temp_v0 = D_800AD254[temp_s1];
    } else {
        temp_v0 = D_800ACEA0[temp_s1];
    }
    if (temp_v0 != NULL) {
        temp_v0(arg0);
    }
    if (arg0->flags & 1) {
        arg0->unk88 = temp_s3;
    } else if (temp_s2 & 1) {
        arg0->unk88 = arg0->unk8A;
    }
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80053550);

void func_80053660(struct unknown_object_struct* arg0, void* arg1, u16 arg2, struct unk_data_901* arg3) {
    s32 var_a0;

    arg3->unk8 = 0;
    switch (arg2) {
    case 11:
        var_a0 = 1;
        break;
    case 14:
        var_a0 = 0;
        break;
    case 12:
        var_a0 = ((s16*)arg1)[0];
        arg3->unk8 = 2;
        break;
    case 13:
        var_a0 = ((u16*)arg1)[0];
        var_a0 |= (((u16*)arg1)[1] << 16);
        arg3->unk8 = 4;
        break;
    default:
        var_a0 = arg0->unk20[arg2];
        break;
    }
    arg3->unk4 = var_a0;
}


u16 * func_800536F4(struct unknown_object_struct* arg0, s32 arg1) {
    return &arg0->unk1C[arg0->unk18[arg1 + 1]];
}


void func_80053714(struct unknown_object_struct* arg0) {
    func_8004C08C(arg0->unk60[0]);
}


void func_80053738(struct unknown_object_struct * arg0) {
    func_8004C0B4(arg0->unk60[0]);
}


void func_8005375C(struct unknown_object_struct* arg0) {
    if (func_8004C06C(arg0->unk60)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk64];
    }
}


void func_800537B0(struct unknown_object_struct* arg0) {
    func_8004C2D8(arg0->unk60[0]);
}


void func_800537D4(struct unknown_object_struct* arg0) {
    if (func_8004C708(arg0->unk60[0]) == 0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80053828(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_80022BA0(0);
        break;
    case 15:
        func_8004C724(arg0->unk60[0]);
        break;
    case 30:
        func_80022BA0(1);
        arg0->flags = 2;
        break;
    }
    arg0->unk194 += 1;
}


void func_800538CC(struct unknown_object_struct * arg0) {
    func_80022BA0(arg0->unk60[0]);
}


void func_800538F0(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_80022BA0(0);
    default:
        break;
    case 15:
        if (func_8004C708(1000)) {
            func_8004C724(-1000);
            if (func_8004E304(254) >= 99) {
                func_8004E364(254, -99);
                func_8004E364(255, 1);
            } else {
                func_8004E364(254, 1);
            }
            return;
        }
        break;
    case 16:
        func_8004C724(-1000);
        break;
    case 30:
        func_80022BA0(1);
        arg0->flags = 2;
        break;
    }
    arg0->unk194 += 1;
}


void func_800539E0(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_80022BA0(0);
    default:
        break;
    case 15:
        if (func_8004E304(254)) {
            func_8004E364(254, -1);
            func_8004C724(80);
        } else if (func_8004E304(255)) {
            func_8004E364(254, 99);
            func_8004E364(255, -1);
            func_8004C724(80);
        } else {
            break;
        }
        return;
    case 30:
        func_80022BA0(1);
        arg0->flags = 2;
        break;
    }
    arg0->unk194 += 1;
}


void func_80053AB8(struct unknown_object_struct* arg0) {
    if (func_8004C774(arg0->unk60[0]) == 0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80053B0C(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_80022E70(0);
        break;
    case 15:
        func_8004C790(arg0->unk60[0]);
        break;
    case 30:
        func_80022E70(1);
        arg0->flags = 2;
        break;
    }
    arg0->unk194 += 1;
}


void func_80053BB0(struct unknown_object_struct* arg0) {
    if (func_8004E304(arg0->unk60[0]) == 0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80053C04(struct unknown_object_struct* arg0) {
    s32 temp_s1 = func_8004ABB0(arg0->unk60[0]);
    func_8004E934(arg0->unk60[0], 0);
    func_8004EA38(arg0->unk60[1], 0);
    func_8004E980(temp_s1, 0);
    func_8004EA84(0);
}


void func_80053C68(struct unknown_object_struct* arg0) {
    s32 temp_s1 = func_8004ABB0(arg0->unk60[0]);
    func_8004E934(arg0->unk60[0], 1);
    func_8004EA38(arg0->unk60[1], 1);
    func_8004E980(temp_s1, 1);
    func_8004EA84(0xFFFF);
}


void func_80053CCC(struct unknown_object_struct* arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10[2];
    u32 temp_s0;

    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (!(arg0->unk60[0] & 3)) {
            func_80118810(0);
            arg0->unk194 = 4;
            return;
        } else {
            if ((func_80019ECC(arg0->sprite14)) && (func_8005667C(&arg0->sprite12))) {
                arg0->unk194 += 1;
            } else {
                return;
            }
        }
    case 1:
        if (func_800213A0(&arg0->sprite0, 1) == 3) {
            arg0->unk1A4 = 0;
            arg0->unk194 += 1;
        } else {
            return;
        }
    case 2:
        temp_s0 = arg0->unk194;
        arg0->unk194 = arg0->unk1A4;
        memcpy(sp10, arg0->unk60, 8);
        arg0->unk60[1] = 1;
        func_8005AC8C(arg0);
        arg0->unk1A4 = arg0->unk194;
        arg0->unk194 = temp_s0;
        memcpy(arg0->unk60, sp10, 8);
        if (arg0->flags == 0) {
            arg0->flags = 3;
            arg0->unk194 += 1;
        } else {
            return;
        }
    case 3:
        func_8011845C(arg0->unk60[0] & 3, arg0->sprite10, arg0->sprite11);
        arg0->unk194 += 1;
    case 4:
        switch (func_80118800()) {
        case 2:
            if (func_800147CC() != 0) {
                arg0->unk194 = 6;
                return;
            }
            func_80118810(1);
            arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
            arg0->flags = 0;
            return;
        case 3:
            func_80118810(2);
            arg0->unk194 += 1;
        case 0:
            return;
        }
        break;
    case 5:
        if (func_80117E0C() == 1) {
            arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
        } else {
            return;
        }
    default:
        break;
    case 6:
        return;
    }
    arg0->flags = 0;
    arg0->unk19B &= 0xF7;
}


void func_80053F28(struct unknown_object_struct * arg0) {
    (arg0->unk60[0] != 0) ? func_801188C8() : func_80118810(3);
}


void func_80053F68(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_80118810(1);
        arg0->unk194 += 1;
    case 1:
        if (func_80117E0C() != 1) break;
    default:
        arg0->flags = 0;
        return;
    }
    
}


void func_80053FE4(struct unknown_object_struct* arg0) {
    u8 var_s0 = D_800AD034[arg0->unk60[0]];
    s32 var_s1;

    for (var_s1 = 0; var_s0 != 0; var_s1++) {
        if (var_s0 & 1) {
            if ((!func_8004CA5C(var_s1)) || (func_8004C85C(var_s1) & 0xF070)) {
                arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
                return;
            }
        }
        var_s0 >>= 1;
    }
}


void func_80054098(struct unknown_object_struct* arg0) {
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
}


void func_800540BC(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (func_8005667C(&arg0->sprite12) != 0) {
            arg0->unk194 += 1;
        } else {
            return;
        }
        if (arg0->unk60[0] == 0) {
            break;
        }
    case 1:
        if (func_800213A0(&arg0->sprite0, arg0->unk60[0] - 1) != 3) {
            return;
        }
    }
    arg0->flags ^= 1;
}


void func_80054150(struct unknown_object_struct* arg0) {
    s32 temp_s3;
    struct object * temp_s2;
    s32 var_s2;
    s32 (* temp_s6)[2] = &arg0->unk60[1];
    s32* var_s1;
    struct unk_data_100 * temp_s0;

    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        temp_s3 = arg0->unk60[0] + 1;
        var_s1 = func_800193C0(temp_s3 * 4);
        for (var_s2 = 0; var_s2 < temp_s3; var_s2++) {
            var_s1[var_s2] = func_8004B888(temp_s6[var_s2][0] + 36);
        }
        if (arg0->unk0 != 2) {
            arg0->unk1B0 = func_80065DF8(5, 0x18, 0x88, 0x110, temp_s3, 0, var_s1, temp_s3, 0x15, 0x7FFFF, 2, -1, 1);
        } else {
            arg0->unk1B0 = func_80065DF8(5, 0x18, 0x98, 0x90, temp_s3, 0, var_s1, temp_s3, 0x15, 0x7FFFF, 2, -1, 1);
        }
        arg0->unk194 += 1;
        break;
    case 1:
        temp_s2 = arg0->unk1B0;
        temp_s0 = temp_s2->data;
        if (temp_s0->unk2C != 0) {
            if (temp_s0->unk28 != 0) { 
                if (temp_s0->unk28 == 1) {
                    arg0->unk88 = arg0->unk8A = arg0->unk10[temp_s6[temp_s0->unk26][1]];
                }
            }
            func_80019478(temp_s0->unk18);
            temp_s0->unk18 = NULL;
            RemoveObject(temp_s2);
            arg0->flags ^= 1;
        }
        break;
    }
}


void func_80054368(void) {
    return;
}


void func_80054370(void) {
    return;
}


void func_80054378(struct unknown_object_struct* arg0) {
    if (arg0->unk60[0] >= func_8004E780()) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_800543D0(struct unknown_object_struct* arg0) {
    struct object* temp_a0;
    struct unk_data_100* temp_v1_2;

    arg0->flags |= 3;
    switch (arg0->unk194) {
    case 0:
        arg0->unk1B0 = func_80068428(0x101, 0xB8, 1);
        arg0->unk194 += 1;
        break;
    case 1:
        temp_a0 = arg0->unk1B0;
        temp_v1_2 = temp_a0->data;
        if (temp_v1_2->unk2C != 0) {
            if (temp_v1_2->unk26 == 0) {
                arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
            }
            arg0->unk1A0 = 0;
            RemoveObject(temp_a0);
            arg0->unk194 += 1;
        } else {
            break;
        }
    case 2:
        if (func_8005667C(&arg0->sprite12)) {
            arg0->flags ^= 1;
        }
        break;
    }
}


void func_800544D0(void) {
    return;
}


void func_800544D8(struct unknown_object_struct* arg0) {
    if (arg0->unk194 == 0) {
        arg0->unk1B0 = func_800492B0(0x117, 0xD4, 5, 0x0F000000);
        arg0->unk194 += 1;
    }
    if (func_80018F8C(0) & 0xF0F0) {
        arg0->flags &= ~1;
        RemoveObject(arg0->unk1B0);
        func_8003FFE4(2);
    } else {
        arg0->flags |= 1;
    }
    arg0->flags |= 2;
}


void func_80054580(struct unknown_object_struct* arg0) {
    if (func_80018F40(arg0->unk60[0], arg0->unk60[1])) {
        arg0->unk20[9] = 1;
    } else {
        arg0->unk20[9] = 0;
    }
}


void func_800545C4(struct unknown_object_struct* arg0) {
    func_800529AC(arg0, arg0->unk60[0], arg0->unk60[1]);
    arg0->flags |= 3;
}


void func_80054604(struct unknown_object_struct* arg0) {
    struct unk_data_403 sp10;
    
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        sp10.unk8 = arg0->unk60[0];
        sp10.unkC = arg0->unk60[1];
        sp10.unk14 = arg0->unk60[2] & 0x7F;
        func_8004C6E8(sp10.unk14);
        if (sp10.unk8 >= 0x80) {
            s32 temp_a0 = sp10.unkC; // why
            sp10.unk8 -= 0x80;
            sp10.unk4 = 0;
            sp10.unk10 = 0;
            if (sp10.unk8 == 0x16) {
                if (temp_a0 == 0x53) {
                    func_8004C530(0x3D, 5, 8, 0);
                }
            }
            func_800441F0(0, &sp10);
        } else {
            sp10.unk4 = 1;
            sp10.unk18 = 6;
            sp10.unk10 = (sp10.unkC >> 5) & 6;
            sp10.unkC &= 0x3F;
            func_800441F0(1, &sp10);
        }
        if (arg0->unk60[2] & 0x80) {
            func_8004440C();
        }
        RemoveObject(arg0->sprite9);
        arg0->sprite9 = NULL;
        arg0->unk194 += 1;
    case 1:
        if ((func_8005667C(&arg0->sprite12)) && (func_800213A0(&arg0->sprite0, 1) == 3) && (func_80044124() != 1)) {
            arg0->unk19A &= 0xFD;
        } else {
            return;
        }
    }
    arg0->flags = 0;
}


void func_80054790(struct unknown_object_struct* arg0) {
    func_80054604(arg0);
}


void func_800547B0(struct unknown_object_struct* arg0) {
    s32 temp_a2 = func_8002F228() + 1;
    s32 var_v1;
    s32 (* var_a0)[2] = &arg0->unk60[1];
    s32 temp_a1 = arg0->unk60[0];

    for (var_v1 = 0; temp_a1 > var_v1; var_v1++) {
        if (temp_a2 == (*var_a0)[0]) {
            arg0->unk88 = arg0->unk8A = arg0->unk10[(*var_a0)[1]];
            return;
        }
        var_a0++;
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80054834);

void func_800549E4(struct unknown_object_struct* arg0) {
    func_8004C08C(arg0->unk60[0]);
    func_80017708();
    CreateObject(func_80054A54, NULL, *FirstObjectPtrPtr, 0x0F000000, 0, 0)->unk30 = arg0;
    arg0->unk19B |= 2;
}


void func_80054A54(struct object* arg0) {
    if (func_8001771C()) {
        arg0->unk30->unk19B |= 4;
        RemoveObject(arg0);
    }
}


void func_80054A9C(struct unknown_object_struct* arg0) {
    s32 var_s0 = arg0->unk60[0];
    if (0x7FFF < (var_s0 <<= 8)) {
        var_s0 |= 0xFFFF0000;
    }
    func_8004E648(0, var_s0);
    func_8004E648(1, var_s0);
}


void func_80054AEC(struct unknown_object_struct* arg0) {
    s32 temp_v0 = func_8004E600(0);
    if (temp_v0 == 0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
    } else if (temp_v0 == 2) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80054B54(struct unknown_object_struct * arg0) {
    func_80057EF4(arg0);
}


void func_80054B74(void) {
    
}

void func_80054B7C(struct unknown_object_struct* arg0) {
    s32 temp_s3 = arg0->unk60[0] & 0xF;
    s32* temp_s2 = arg0->unk60;
    struct object* temp_v0;
    struct object* var_a1 = arg0->sprite1[temp_s3];

    switch (arg0->unk194) {
    case 0:
        if (arg0->sprite1[temp_s3] != NULL) {
            arg0->unk1B0 = arg0->sprite1[temp_s3];
        }
        var_a1 = arg0->sprite1[temp_s3] = func_800559C4(temp_s2);
        arg0->unk194 += 1;
    case 1:
        switch (temp_s2[4]) {
        case 4:
        case 3:
            arg0->flags = 3;
            if (func_8001F134(var_a1) == 0) return;
            if (temp_s2[4] == 3) {
                arg0->sprite1[temp_s3] = NULL;
            }
            arg0->flags = 0;
            break;
        case 0 ... 2:
        default:
            if (func_80056424(arg0, var_a1) == 0) {
                return;
            }
        case 0xFF:
            break;
        }
        if (arg0->unk1B0 != NULL) {
            func_80055E8C(arg0->unk1B0, temp_s3);
        }
        func_80055938(temp_s3, temp_s2[4]);
        return;
    }
}


void func_80054CB0(struct unknown_object_struct* arg0) {
    s32 temp_a1 = arg0->unk60[0];
    func_80055E8C(arg0->sprite1[temp_a1], temp_a1);
    arg0->sprite1[temp_a1] = NULL;
    arg0->flags = 0;
}


void func_80054CFC(struct unknown_object_struct* arg0) {
    switch (arg0->unk194) {
    case 0:
        RemoveObject(arg0->sprite9);
        arg0->sprite9 = func_800264D0(arg0->unk60[0] + 0x59, 0x21);
        if (arg0->unk80 >= 2) {
            func_800262F0(arg0->sprite9, arg0->unk60[1], arg0->unk60[2]);
        }
        arg0->unk194 += 1;
    case 1:
        func_80056424(arg0, arg0->sprite9);
        return;
    }
}


void func_80054D98(struct unknown_object_struct* arg0) {
    RemoveObject(arg0->sprite9);
    arg0->sprite9 = NULL;
    arg0->flags = 0;
}


void func_80054DCC(struct unknown_object_struct* arg0) {
    struct object* var_a1 = arg0->sprite10[arg0->unk60[0]];
    s32* temp_s0 = &arg0->unk60;
    
    switch (arg0->unk194) {
    case 0:
        if (var_a1 != NULL) {
            arg0->unk1B0 = var_a1;
        }
        if (arg0->unk80 == 1) {
            temp_s0[1] = 0;
            temp_s0[2] = 0;
        }
        var_a1 = arg0->sprite10[arg0->unk60[0]] = func_80026FA0(func_8004E948(arg0->unk60[0], var_a1), arg0->unk60[0], temp_s0[1], temp_s0[2], 0x1B);
        arg0->unk194 += 1;
    case 1:
        if (func_80056424(arg0, var_a1) != 0) {
            if (arg0->unk1B0 != NULL) {
                RemoveObject(arg0->unk1B0);
            }
        }
        return;
    }
}


void func_80054EC0(struct unknown_object_struct* arg0) {
    RemoveObject(arg0->sprite10[arg0->unk60[0]]);
    arg0->sprite10[arg0->unk60[0]] = NULL;
    arg0->flags = 0;
}


void func_80054F14(struct unknown_object_struct* arg0) {
    (arg0->unk60[0] > 0) ? func_8002F044() : func_8002F0AC();
}


void func_80054F54(struct unknown_object_struct* arg0) {
    (arg0->unk60[0] > 0) ? func_80026390(arg0->sprite9) : func_8002647C(arg0->sprite9);
}


void func_80054F9C(struct unknown_object_struct * arg0) {
    arg0->unk19C = arg0->unk60[0];
}


void func_80054FA8(struct unknown_object_struct* arg0) {
    switch (arg0->unk60[0]) {
    case 0:
        arg0->unk19A &= 0xFB;
        return;
    case 1:
        arg0->unk19A |= 4;
        return;
    }
}


void func_80054FF0(void) {
    return;
}


void func_80054FF8(struct unknown_object_struct* arg0) {
    func_8004E9F8(arg0->unk60[0]);
}


void func_8005501C(struct unknown_object_struct* arg0) {
    func_8004E9D8(arg0->unk60[0]);
}


void func_80055040(struct unknown_object_struct* arg0) {
    arg0->flags |= 3;
    if (func_80056480(&arg0->sprite10[2], &arg0->sprite0, func_800536F4(arg0, arg0->unk60[0]), 0x1C, 0x8C, 0) == 1) {
        arg0->flags ^= 1;
    }
}


void func_800550B0(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    if (func_8005667C(&arg0->sprite10[2]) == 1) {
        arg0->flags ^= 1;
    }
}


void func_800550FC(struct unknown_object_struct* arg0) {
    s32 var_s0;
    s32 temp_s0 = arg0->unk60[0];

    switch (temp_s0) {
    case -1:
        var_s0 = arg0->unk60[1];
        if (var_s0 == 0) {
            var_s0 = 0xF;
        }
        func_8004018C(func_800408BC(0), var_s0, 0, 3);
        func_8004018C(func_800408BC(1), var_s0, 0, 3);
        break;
    case -2:
        func_80040128(arg0->unk8E);
        break;
    default:
        if (temp_s0 >= 1000) {
            temp_s0 -= 1000;
            func_80040204(temp_s0);
            func_8004018C(temp_s0, 0x3C, 0, 5);
        } else {
            arg0->unk8E = func_8003FFE4(temp_s0);
        }
        break;
    }
    arg0->flags = 2;
}


void func_800551F0(struct unknown_object_struct* arg0) {
    func_8004440C();
    arg0->flags = 2;
}


void func_8005521C(struct unknown_object_struct* arg0) {
    s32 temp_s0 = arg0->unk60[0];
    
    if (temp_s0 != 0) {
        temp_s0 -= 1000;
        func_8004018C(func_800408BC(0), 0x23, 0, 4);
        func_80040204(temp_s0);
        func_8004018C(temp_s0, 0, 0x1C, 1);
    } else {
        func_8004018C(func_800408BC(1), 0x23, 0, 3);
        func_8004018C(func_800408BC(0), 0, 0x1C, 2);
    }
    arg0->flags = 2;
}


void func_800552D0(struct unknown_object_struct* arg0) {
    D_8010D640[arg0->unk60[0]] = arg0->unk60[1];
}


void func_800552EC(struct unknown_object_struct* arg0) {
    arg0->unk20[9] = D_8010D640[arg0->unk60[0]];
}


void func_80055308(struct unknown_object_struct* arg0) {
    u32 temp_s0 = arg0->unk60[0];
    switch (temp_s0) {
    case 6:
        arg0->sprite14 = func_800653F0();
        break;
    case 4:
        if (arg0->unk0 != 0x11) {
            arg0->sprite14 = func_800652AC();
        } else {
            arg0->sprite14 = func_80065318();
        }
        break;
    case 5:
        arg0->sprite14 = func_80065384();
        break;
    }
    arg0->sprite14 |= func_80019C58(0, D_80010308, temp_s0, 0, 0, 1);
}


void func_800553E4(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (func_80019ECC(arg0->sprite14) != 0) {
            arg0->unk1B0 = func_8011BBB4(arg0->unk60[0], 0x0F000000);
            arg0->unk194 += 1;
        }
        break;
    case 1:
        if (((struct object *)arg0->unk1B0)->unk2C == 0) {
            func_800652E8();
            arg0->flags ^= 1;
        }
        break;
    }
}


void func_8005548C(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (func_80019ECC(arg0->sprite14) != 0) {
            arg0->unk1B0 = func_8011A74C(arg0->unk60[0], 0x0F000000);
            arg0->unk194 += 1;
        }
        break;
    case 1:
        if (((struct object *)arg0->unk1B0)->unk2C == 0) {
            func_80065354();
            arg0->flags ^= 1;
        }
        break;
    }
}


void func_80055534(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (func_80019ECC(arg0->sprite14) != 0) {
            arg0->unk1B0 = func_80117894(0x0F000000);
            arg0->unk194 += 1;
        }
        break;
    case 1:
        if (((struct object *)arg0->unk1B0)->unk2C == 0) {
            func_800653C0();
            arg0->flags ^= 1;
        }
        break;
    }
}


void func_800555D8(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        arg0->sprite9 = func_800264D0(0x5D, 0x21);
        arg0->unk194 += 1;
    case 1:
        if (arg0->sprite9->initialized) {
            func_8001F7A0(1, 0xC);
            arg0->sprite14 = func_80019C58(0, D_80010308, 3, 0, 0, 1);
            arg0->sprite14 |= func_80065240();
            arg0->unk194 += 1;
        } else break;
    case 2:
        if ((func_8001F920() == 2) && (func_80019ECC(arg0->sprite14))) {
            arg0->unk1B0 = func_801177D4(arg0->unk60[0], 0x0F000000);
            arg0->unk194 += 1;
        } else break;
    case 3:
        if (((struct object *)arg0->unk1B0)->unk2C != 1) {
            func_8006527C();
            func_8001F860(1, 0xC);
            arg0->unk194 += 1;
        } else break;
    case 4:
        if (func_8001F920() == 2) {
            RemoveObject(arg0->sprite9);
            arg0->sprite9 = NULL;
        } else break;
    default:
        arg0->flags = 0;
        break;
    }
}


s32 func_80055754(struct object * arg0) {
    return ((u8 *)arg0->data)[0x9F];
}


void func_80055768(struct object* arg0, s16 arg1, s16 arg2) {
    struct unk_data_1000 * temp_v0 = arg0->data;
    temp_v0->unk94 = arg1;
    temp_v0->unk96 = arg2;
}


void func_8005577C(struct object* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    struct unk_data_1000 * temp_a0 = arg0->data;
    s16* temp_v0 = temp_a0->unk58;

    temp_a0->unk58[0] = arg1;
    temp_v0[1] = arg2;
    temp_v0[2] = 0;
    temp_v0[3] = arg3;
    temp_v0[4] = 0;
    temp_v0[5] = arg4;
    temp_a0->unk9F = 2;
    temp_a0->unkA0 &= 0xFD;
}


void func_800557BC(struct object* arg0, s32 arg1, s32 arg2) {
    u32 sp18[2] = {0x60606060, 0x80808080};
    u32 sp20[2] = {0x80808080, 0x60606060};
    struct unk_data_1000 * temp_s0 = arg0->data;

    temp_s0->unk98 = func_8001FD3C(&temp_s0->unk64, sp18[arg2], sp20[arg2], arg1, 0);
    temp_s0->unk9F = 3;
    temp_s0->unkA0 &= 0xFD;
    temp_s0->unkA0 |= 8;
}


void func_8005583C(struct object* arg0, s32 arg1, u32 arg2, u32 arg3) {
    struct unk_data_1000 * temp_s0 = arg0->data;
    temp_s0->unk98 = func_8001FD3C(&temp_s0->unk64, arg2, arg3, arg1, 0);
    temp_s0->unk9F = 3;
    temp_s0->unkA0 &= 0xFD;
    temp_s0->unkA0 |= 8;
}


void func_80055894(struct object* arg0) {
    func_80020398(((struct unk_data_1000 *)arg0->data)->unk90[6]);
}


struct object* func_800558C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    struct object* temp_v0 = func_8001F17C(arg0, (arg1 + 0xA0), (arg2 + 0x59), arg3, 0xE20000);
    func_8001F148(temp_v0, arg4, arg5);
    return temp_v0;
}


void func_80055938(s32 arg0, s32 arg1) {
    D_800B72CC[arg0] = arg1;
}


s32 func_80055948(s32 arg0) {
    return D_800AD060[arg0];
}


u8* func_80055960(s32 arg0) {
    return D_800AD130[D_800AD060[arg0]];
}


s32 func_80055984(s32 arg0) {
    s32 temp = D_800AD060[arg0];
    temp = D_800AD130[temp][3];
    return D_800AD19C[temp];
}


struct object* func_800559C4(u32* arg0) {
    s32 temp_v0_4;
    struct object* temp_v0_2;
    struct unk_data_1000 * temp_s0;
    s32 temp_s1 = arg0[1];
    s32 temp_s4 = (arg0[0] & 0xF) + 0x1B;
    
    arg0[4] = func_80055948(temp_s1);
    switch ((s32) arg0[4]) {
    case 0xFF:
        return NULL;
    case 0x3:
        return func_800558C8(temp_s1 + 0x3FB, arg0[2], arg0[3], temp_s4, 1, 4);
    case 0x4:
        return func_800558C8(temp_s1 + 0x3FB, arg0[2], arg0[3], temp_s4, 2, 4);
    default:
        temp_v0_2 = CreateObject(func_80055BA0, NULL, *FirstObjectPtrPtr, 0xE20000, 0, 0xA4);
        if (temp_v0_2 == NULL) return NULL;
        temp_s0 = temp_v0_2->data;
        temp_v0_2->initialized = 0;
        bzero((u8* ) temp_s0, 0xA4);
        temp_s0->unk98 = 0x80808080;
        temp_s0->unk94 = arg0[2];
        temp_s0->unk96 = arg0[3];
        temp_s0->unk9E = temp_s1;
        temp_s0->unkA0 = arg0[0] >> 4;
        temp_s0->unkA1 = temp_s4;
        if (temp_s0->unkA0 & 4) {
            temp_s0->unkA0 |= 8;
        }
        temp_v0_4 = func_8005616C(temp_s1);
        if (temp_v0_4 == 0) {
            temp_s0->unk9F = 0;
            temp_s0->unk50 = func_80019C58(0, 0, temp_s1 + 0x3FB, &temp_s0->unk54, 0, 3);
            if (temp_s1 == 0x51) {
                temp_s0->unkA0 |= 0x30;
            }
        } else {
            temp_s0->unk9F = 1;
        }
        temp_s0->unk90 = temp_v0_4;
        return temp_v0_2;
    }
}


void func_80055BA0(struct object* arg0) {
    POLY_FT4* temp_s0_2;
    u16 var_v1;
    u8* temp_s0;
    struct unk_data_1000 * temp_s1 = arg0->data;
    struct unk_data_1001 * temp = temp_s1->unk90;

    switch (temp_s1->unk9F) {
    case 0:
        if (func_80055F5C(temp_s1) == 0) return;
        temp = temp_s1->unk90;
    case 1:
        temp_s1->unk9F = func_80055EFC(temp_s1->unk9E);
        temp_s1->unk9C = temp->unk4;
        temp_s1->unk9D = temp->unk5;
        func_80055FF0(temp_s1);
        temp_s0 = func_80055960(temp_s1->unk9E);
        func_8001FF84(&temp_s1->unk80, temp_s0[2], temp_s0[0], temp_s0[1], temp_s1->unk9C, temp_s1->unk9D, func_80055984(temp_s1->unk9E));
        arg0->initialized = 1;
        break;
    default:
    case 5:
    case 6:
        break;
    case 2:
        if (func_8001FC94(&temp_s1->unk94, &temp_s1->unk96, &temp_s1->unk58) == 1) {
            temp_s1->unk9F = 6;
        }
        break;
    case 3:
        func_8001FE90(&temp_s1->unk98, &temp_s1->unk64);
        break;
    case 4:
        if (temp_s1->unk9E == 0x51) {
            if (temp_s1->unkA0 & 0x20) {
                temp_s1->unkA0 &= 0xCF;
            }
        }
        if (!(temp_s1->unkA0 & 0x10) && (func_8001FFC0(&temp_s1->unk9C, &temp_s1->unk9D, &temp_s1->unk80) != 1)) {
            temp_s1->unk9F = 6;
        }
        break;
    }
    if (!(temp_s1->unkA0 & 2)) {
        temp_s0_2 = &temp_s1->unk0[temp_s1->unkA2];
        if (temp_s1->unkA0 & 4) {
            var_v1 = (temp->unkA & 0xFF9F) | 0x20;
        } else {
            var_v1 = temp->unkA;
        }
        AddPolyFT4(temp_s1->unk94, temp_s1->unk96, (temp->unk6 - 1), (temp->unk8 - 1), temp_s1->unk9C, temp_s1->unk9D, (temp->unk6 - 1), (temp->unk8 - 1), temp_s1->unk98, var_v1, temp->unkC, temp_s1->unkA1, temp_s0_2);
        if (temp_s1->unkA0 & 8) {
            temp_s0_2->code |= 2;
        }
        if (temp_s1->unkA0 & 1) {
            FlipPolyFT4H(temp_s0_2);
        }
        temp_s1->unkA2 ^= 1;
    }
}


void func_80055E4C(struct object* arg0) {
    if (arg0 != NULL) {
        func_800563F0(((struct unk_data_1000 *)arg0->data)->unk90);
        RemoveObject(arg0);
    }
}


void func_80055E8C(struct object* arg0, s32 arg1) {
    switch (D_800B72CC[arg1]) {
    case 3:
    case 4:
        RemoveObject(arg0);
        break;
    default:
    case 0:
    case 1:
    case 2:
        func_80055E4C(arg0);
        return;
    case 0xFF:
    }
}


s32 func_80055EFC(s32 arg0) {
    switch (func_80055948(arg0)) {
    case 3:
    case 4:
    case 0xFF:
        return 5;
    default:
        return 4;
    case 0:
    case 1:
    case 2:
        return 6;
    }
}


s32 func_80055F5C(struct unk_data_1000* arg0) {
    s32 temp_s1 = arg0->unk9E;
    if (func_80019ECC(arg0->unk50) != 0) {
        TIM_IMAGE sp10;
        struct unk_data_1001* temp_a0;
        u8* temp_v0;
        OpenTIM((u32* ) arg0->unk54);
        ReadTIM(&sp10);
        arg0->unk90 = func_80056228(&sp10, temp_s1);
        func_80019478((struct unk_data_9* ) arg0->unk54);
        arg0->unk54 = 0;
        temp_v0 = func_80055960(temp_s1);
        temp_a0 = arg0->unk90;
        temp_a0->unk6 = temp_v0[0];
        temp_a0->unk8 = temp_v0[1];
        return 1;
    }
    return 0;
}


void func_80055FF0(struct unk_data_1000* arg0) {
    s16 sp10[3][2] = {
        {0x76, 0x2F},
        {0x60, 0x19},
        {0x20, 0xFFD9}
    };
    u8* temp_v0_2;

    s32 temp_v0 = func_80055948((s32) arg0->unk9E);
    if (temp_v0 < 3) {
        if (temp_v0 >= 0) {
            arg0->unk94 += sp10[temp_v0][0];
            arg0->unk96 += sp10[temp_v0][1];
            return;
        }
    }
    temp_v0_2 = func_80055960(arg0->unk9E);
    arg0->unk94 -= ((temp_v0_2[0] >> 1) - 0xA0);
    arg0->unk96 -= ((temp_v0_2[1] >> 1) - 0x59);
}


s16 func_800560E0(s32 arg0) {
    s16 sp10[7] = {
        -1, 0, 1, 2, -1, -1, 2
    };
    s32 var_v1 = func_80055948(arg0);
    if (var_v1 >= 6) {
        var_v1 = 5;
    }
    return sp10[var_v1 + 1];
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005616C);

struct unk_data_1003 * func_80056228(TIM_IMAGE * arg0, s32 arg1) {
    s32 var_a1;
    s32 temp_t0 = func_800560E0(arg1);
    
    for (var_a1 = temp_t0; var_a1 < 3; var_a1++) {
        s32 var_a0;
        struct unk_data_1003 * var_s2 = D_800AD234[var_a1];
        for (var_a0 = 0; D_800AD240[temp_t0] > var_a0; var_a0++) {
            if (var_s2->unk0 == 0) {
                RECT sp10;
                RECT sp18;
                RECT sp20;
                s32 temp_s0 = 2 - (arg0->mode & 7);
                func_8001D440(var_s2->unkA, &sp20);
                sp10.x = sp20.x + (var_s2->unk4 >> temp_s0);
                sp10.y = sp20.y + var_s2->unk5;
                sp10.w = arg0->prect->w;
                sp10.h = arg0->prect->h;
                func_8001D45C(var_s2->unkC, &sp20);
                sp18.w = 0x10;
                sp18.h = 1;
                sp18.x = sp20.x;
                sp18.y = sp20.y;
                LoadImage(&sp10, arg0->paddr);
                LoadImage(&sp18, arg0->caddr);
                DrawSync(0);
                var_s2->unk2 = arg1;
                var_s2->unk6 = (sp10.w << temp_s0);
                var_s2->unk8 = sp10.h;
                var_s2->unk0 += 1;
                return var_s2;
            }
            var_s2++;
        }
    }
    return NULL;
}


void func_800563F0(struct unk_data_1003* arg0) {
    arg0->unk0 -= 1;
    if (!(arg0->unk0)) {
        arg0->unk2 = -1;
        arg0->unk0 = 0;
        arg0->unk6 = 0;
        arg0->unk8 = 0;
    }
}


s32 func_80056424(struct unknown_object_struct* arg0, struct object* arg1) {
    if (arg1 == NULL) return 1;
    if (arg1->initialized) {
        arg0->flags = 0;
        return 1;
    } else {
        arg0->flags = 3;
        return 0;
    }
}


void func_8005645C(void) {
    bzero(D_800B72D4, 2);
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80056480);

s32 func_8005667C(struct object** arg0) {
    struct object * temp_a1 = *arg0;
    struct unk_data_600 * temp_a0 = temp_a1->data;
    
    switch (D_800B72D4[1]) {
    case 0:
        if (temp_a1 != NULL) {
            func_80049214(temp_a0);
            D_800B72D4[1] += 1;
            return 0;
        }
        return 1;
    case 1:
        if (temp_a0->unk78F8 != 1) {
            case 2:
            RemoveObject(*arg0);
            *arg0 = NULL;
            D_800B72D4[1] = 0;
            return 1;
        }
        return 0;
    default:
        return 1;
    }
}


void func_8005672C(s32 arg0, s16 arg1, s32 arg2, s16 arg3, s32 arg4) {
    func_8006545C(0x10, 0x98, 0x90, 0x120, 0x48, 4, arg0, arg1, arg2, arg3, 1, 0x14, arg4);
}


void func_800567A0(struct object* arg0, s32 arg1) {
    void * temp = arg0->data;
    if (arg1 & 1) {
        func_80065CB0(temp);
    }
}


s16 func_800567D0(struct object * arg0, s32 arg1) {
    struct unknown_object_struct * temp_v0 = arg0->data; // idk what this is
    return (arg1) ? temp_v0->unk18E : temp_v0->unk18C;
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800567F4);

void func_80056818(struct object* arg0) {
    func_80065D08(arg0->data);
}


void func_8005683C(void) {
    D_800B749C = func_800527E8();
}


void func_8005685C(struct unknown_object_struct * arg0, s32 arg1) {
    u32 temp_s0;

    func_8004EA64(func_8004C9C4(0));
    func_80124800(-1);
    func_8012467C(func_8004AE04(arg1));
    temp_s0 = func_80056ACC();
    arg0->sprite14 = func_80019C58(0, 0, 0x1B, &D_800B7494, 0, 3);
    arg0->sprite14 |= func_80019C58(0, 0, temp_s0, &D_800B7498, 0, 3);
}


s32 func_80056914(struct unknown_object_struct* arg0) {
    switch (D_800B72D8) {
    case 0:
        if (func_80019ECC(arg0->sprite14) != 0) {
            func_8004B7F8(D_800B7494);
            func_80052910(arg0, 0x28, 0, 0x3E7, 0);
            D_800B72D8 += 1;
        } else {
            return 1;
        }
    case 1:
        func_800529E8(arg0);
        if (func_8005286C(arg0) != 1) {
            func_80052BF0(arg0);
            func_80019478(D_800B7494);
            D_800B7494 = 0;
            func_80019478(D_800B7498);
            D_800B7498 = 0;
            func_80019478(arg0->unk4);
            arg0->unk4 = NULL;
            D_800B72D8 = 0;
            return 0;
        } else {
            return 1;
        }
    default:
        return 1;
    }
}


void func_800569F4(struct unk_data_9 * arg0) {
    func_80052828(arg0);
}


void func_80056A14(void) {
    func_800529AC((struct unknown_object_struct* ) D_800B749C, 0x28, 0x2A);
}


void func_80056A3C(s32 arg0) {
    if (arg0 < 3) {
        if ((arg0 > 0) && (func_8004C06C(0xE9))) {
            func_8004C0B4(0xE9);
            arg0 = 2;
        }
    }
    func_8004C0B4(0xE4);
    func_80124800(arg0);
    switch (arg0) {
    case 1:
        func_80124724(-2);
        break;
    case 2:
        func_80124770(-2);
        break;
    }
}


s32 func_80056ACC(void) {
    return D_800AD244[func_80124664() >> 4];
}


s16* func_80056B00(s32 arg0) {
    return &(&D_800B7498[D_800B7498[0]])[D_800B7498[arg0 + 1]];
}


void func_80056B28(struct unknown_object_struct* arg0) {
    s32 temp_s1 = func_80124594();
    func_8004C0B4(0xE3);
    if (func_8004C9C4(temp_s1) >= 0x100) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
    }
    if (func_8004C9E4(temp_s1) < 0xB) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
    }
    
    if ((func_8004CA20(0) < func_8004CA20(temp_s1)) || (!func_8004E71C(0, temp_s1))) {
        u32 temp_v0_3 = func_80124664();
        if ((temp_v0_3 & 0xF0) < 0x50) {
            func_8012467C((temp_v0_3 + 0x50));
        }
    }
}


void func_80056C38(struct unknown_object_struct* arg0) {
    if ((func_8004C3A8() & 0xF0) == 0x80) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
    }
    if (func_8004E204(func_8004C9C4(func_80124594())) >= 0) {
        func_8004E648(0, -25);
        func_8004E648(1, -25);
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80056CE4(struct unknown_object_struct* arg0) {
    arg0->unk60[1] = arg0->unk60[0];
    func_80058230();
}


void func_80056D08(struct unknown_object_struct* arg0) {
    u16 (*var_s1)[2];
    s32 temp_s0 = arg0->unk60[0];
    func_8012463C(temp_s0);
    switch (temp_s0) {
    case 0:
        var_s1 = D_800AD30C;
        break;
    case 1:
        var_s1 = D_800AD340;
        break;
    }
    var_s1 = var_s1[func_80124664() >> 4];
    func_800529AC(arg0, (*var_s1)[0] + 0x20, (*var_s1)[1]);
    arg0->flags |= 2;
}


void func_80056DA4(struct unknown_object_struct* arg0) {
    u8 temp_s0 = D_800AD374[arg0->unk60[0]];
    if (func_8004E780() < temp_s0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80056E14(struct unknown_object_struct* arg0) {
    s32 temp_s0 = func_80124594();
    s32 temp_s1 = func_8004CA20(0);
    s32 temp_a0 = func_8004CA20(temp_s0);
    switch (arg0->unk60[0]) {
    case 0:
    case 1:
        if (temp_s1 < temp_a0) {
            break;
        }
        return;
    case 2:
        if (temp_s1 < ((temp_a0 * 2) + 4)) {
            break;
        }
        return;
    case 3:
        if (func_8004C9E4(temp_s0) == 0x15) {
            break;
        }
        return;
    default:
        if (func_8004B638(temp_s0) != 0) {
            break;
        }
        return;
    }
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
}


void func_80056F1C(struct unknown_object_struct* arg0, s32 arg1) {
    u32 temp_s0 = func_8004D11C(func_80124594(), arg1);
    temp_s0 += (func_8004E780() & D_800AD37C[arg0->unk60[0]]);
    if (func_8004D11C(0, arg1) < temp_s0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80056FBC(struct unknown_object_struct* arg0) {
    func_80056F1C(arg0, 1);
}


void func_80056FDC(struct unknown_object_struct* arg0) {
    u8 sp10[3] = {0xF, 0x1F, 0x3F};
    u32 temp_s0 = func_8004E780() & sp10[arg0->unk60[0]];
    if (func_8004D0F0(0) < temp_s0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80057074(struct unknown_object_struct* arg0) {
    func_80056F1C(arg0, 2);
}


void func_80057094(struct unknown_object_struct* arg0) {
    u32 temp_s0 = (func_8004E780() & 0x1F) + 9;
    if (temp_s0 >= func_8004D014(0)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
    }
}


void func_80057100(struct unknown_object_struct* arg0) {
    s32 var_s0;
    u16 temp_s0;

    switch (arg0->unk60[0]) {
    case 0:
        temp_s0 = func_8004C85C(1);
        if (func_8004CA5C(1) != 0) {
            if (temp_s0 & 0xF070) {
                break;
            }
        } else {
            break;
        }
        return;
    case 1:
        var_s0 = (func_80122214()) ? 4 : 8;
        if (func_80122308() < var_s0) {
            return;
        }
        break;
    case 2:
        if (func_80122308() == 1) {
            break;
        }
        return;
    default:
        return;
    }
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
}


void func_800571F0(struct unknown_object_struct* arg0) {
    u32 var_s0;

    switch (arg0->unk60[0]) {
    case 0:
        var_s0 = (func_8004E780() & 3) + 6;
        break;
    case 1:
        var_s0 = (func_8004E780() & 3) + 10;
        break;
    case 2:
        var_s0 = (func_8004E780() & 7) + 14;
        break;
    }
    if (func_8012468C() < var_s0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_800572BC(struct unknown_object_struct* arg0) {
    u32 var_s0;

    switch (arg0->unk60[0]) {
    case 0:
        var_s0 = (func_8004E780() & 3) + 6;
        break;
    case 1:
        var_s0 = (func_8004E780() & 3) + 12;
        break;
    case 2:
        var_s0 = (func_8004E780() & 7) + 15;
        break;
    }
    var_s0++;
    if (func_801246D8() <= var_s0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80057388);

void func_800573D0(void) {
    s32 temp_s1;
    s32 temp_v0_4;
    s32 temp_v0;
    s32 temp_v0_2;

    func_8004EAA4(-1);
    func_8004EAC4(-1);
    temp_v0 = func_80124594();
    temp_s1 = func_8004C9C4(temp_v0);
    temp_v0_2 = func_8004B608(func_8004C9E4(temp_v0));
    if (temp_v0_2 != 0) {
        s32 temp_v0_3 = func_8004AADC(3, temp_v0_2 - 1);
        func_8004EAA4(temp_v0_3);
        switch (temp_v0_3) {
        default:
            return;
        case 0:
case0:
            func_8004EAA4(0);
            temp_v0_4 = func_80057388(func_8004AE54(temp_s1));
            func_8004EAC4(temp_v0_4);
            func_8004C724(temp_v0_4);
            return;
        case 1:
case1:
            func_8004EAA4(1);
            temp_v0_4 = func_80057388(func_8004AE84(temp_s1));
            func_8004EAC4(temp_v0_4);
            func_8004C790(temp_v0_4);
            return;
        case 2:
            func_8004E9D8(0xB2);
            if (func_8004E304(0xB2) != 0x63) {
                func_8004E364(0xB2, 1);
                return;
            }
            goto case0;
        case 3:
            temp_v0_4 = func_8004AD8C(temp_s1);
            func_8004E9D8(temp_v0_4);
            if (func_8004E304(temp_v0_4) != 0x63) {
                func_8004E364(temp_v0_4, 1);
                return;
            }
            goto case1;
        case 4:
            func_8004E9D8(0xB4);
            if (func_8004E304(0xB4) != 0x63) {
                func_8004E364(0xB4, 1);
                return;
            }
            goto case0;
        }
    }
}


void func_80057558(void) {
    while (1); // uh oh
}


void func_80057560(struct unknown_object_struct* arg0) {
    func_8004C8C8(0, (0x8000 >> arg0->unk60[0]) & 0xFFFF);
}


s32 func_80057590(s32 arg0) {
    s32 temp_s0 = (arg0 * ((func_8004E780() & 3) + 4)) + 1;
    if (func_8004C06C(0xEA) != 0) {
        func_8004C0B4(0xEA);
        return temp_s0 * 2;
    }
    return temp_s0;
}


void func_800575E4(void) {
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;

    func_8004EAA4(-1);
    func_8004EAC4(-1);
    temp_v0 = func_80124594();
    temp_s1 = func_8004C9C4(temp_v0);
    temp_v0_2 = func_8004B608(func_8004C9E4(temp_v0));
    if (temp_v0_2 != 0) {
        s32 temp_v0_3 = func_8004AADC(4, temp_v0_2 - 1);
        func_8004EAA4(temp_v0_3);
        switch (temp_v0_3) {
        case 0:
            func_8004EAC4(func_80057590(func_8004AE54(temp_s1)));
            break;
        case 1:
            func_8004EAC4(func_80057590(func_8004AE84(temp_s1)));
            break;
        case 3:
            func_8004EAA4(5);
            func_8004EAC4(func_8004E780() % 12);
            break;
        case 4:
            func_8004E9D8(0xB4);
        case 2:
            func_8004EAC4(0);
            break;
        }
    }
}


void func_80057708(struct unknown_object_struct * arg0) {
    s16 sp10[3] = {
        -50, -25, -12
    };
    func_8004D488(0, sp10[arg0->unk60[0]]);
}


void func_8005775C(void) {
    while (1);
}


void func_80057764(void) {
    while (1);
}


void func_8005776C(void) {
    while (1);
}


void func_80057774(struct unknown_object_struct * arg0) {
    func_80124724(arg0->unk60[0]);
}


void func_80057798(struct unknown_object_struct* arg0) {
    func_80124770(arg0->unk60[0]);
}


void func_800577BC(struct unknown_object_struct* arg0) {
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[func_8004E780() & 3]];
}


void func_8005780C(struct unknown_object_struct* arg0) {
    s32 temp_v0;
    u16 * temp_v1;
    
    switch (arg0->unk194) {
    case 0:
        temp_v0 = func_80124664();
        arg0->unk1B0 = func_80056B00((D_800AD380[temp_v0 >> 4] * (arg0->unk60[0] - 1)) + (temp_v0 & 0xF));
        arg0->unk194 += 1;
        break;
    case 1:
        break;
    default:
        return;
    }
    arg0->flags = 3;
    temp_v1 = arg0->unk1B0; // i have no idea why this is required for it to match.
    if (func_80056480(&arg0->sprite10[2], &arg0->sprite0, temp_v1, 0x1C, 0x8C, 0) == 1) {
        arg0->flags ^= 1;
    }
}


void func_800578D8(struct unknown_object_struct* arg0) {
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[0]];
}


void func_800578FC(struct unknown_object_struct* arg0) {
    func_800550FC(arg0);
}


void func_8005791C(struct unknown_object_struct* arg0) {
    func_800543D0(arg0);
}


void func_8005793C(struct unknown_object_struct* arg0) {
    s32 temp_s4 = arg0->unk60[0] + 1;
    s32 var_s0;
    s32 (* var_s1)[][2] = &arg0->unk60[1];
    u16 ** temp_a2 = &arg0->unk1A0;
    u32 temp_v0;

    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        for (var_s0 = 0; temp_s4 > var_s0; var_s0++) {
            temp_a2[var_s0] = func_8004B840((*var_s1)[var_s0][0]);
        }
        arg0->unk194 += 1;
        return;
    case 1:
        temp_v0 = func_800216CC((struct object** ) &arg0->unk1B0, temp_s4, temp_a2, 0x11, 0x7FFFF);
        if (temp_v0 != -1) {
            arg0->unk88 = arg0->unk8A = arg0->unk10[(*var_s1)[temp_v0][1]];
            arg0->unk194 += 1;
        } else return;
    case 2:
        if (func_8005667C(&arg0->sprite10[2]) == 1) {
            arg0->flags = 0;
        }
        return;
    }
}


void func_80057A68(struct unknown_object_struct* arg0) {
    func_800529AC(arg0, arg0->unk60[0] + 0x20, arg0->unk60[1]);
}


void func_80057A90(struct unknown_object_struct* arg0) {
    func_80056F1C(arg0, 4);
}


void func_80057AB0(struct unknown_object_struct* arg0) {
    s32 var_s0;
    s32 temp_s1 = arg0->unk60[0];
    s32 temp_s0 = func_8004C9C4(func_80124594());
    
    if (temp_s1 & 0xF) {
        func_8004EAA4(1);
        var_s0 = func_8004AE84(temp_s0) * 10;
        if (temp_s1 & 0xF0) {
            var_s0 = (var_s0 / 4) + 1;
        }
        func_8004C790(var_s0);
    } else {
        func_8004EAA4(0);
        var_s0 = func_8004AE54(temp_s0) * 10;
        if (temp_s1 & 0xF0) {
            var_s0 = (var_s0 / 4) + 1;
        }
        func_8004C724(var_s0);
    }
    func_8004EAC4(var_s0);
}


void func_80057B8C(struct unknown_object_struct* arg0) {
    if (!arg0->unk60[0]) {
        func_8004C0B4(arg0->unk60[1]);
    } else {
        func_8004C08C(arg0->unk60[1]);
    }
}


void func_80057BD4(struct unknown_object_struct* arg0) {
    func_8005375C(arg0);
}


//INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80057BF4);

void func_80057D28(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_80056A3C(arg0->unk60[0]);
        arg0->unk194 += 1;
    case 1:
        if (func_8005667C(&arg0->sprite10[2]) == 1) {
            arg0->unk194 += 1;
        } else return;
    case 2:
        if (func_800213A0(&arg0->sprite0, 1) == 3) {
            RemoveObject(arg0->sprite0);
            arg0->unk8 = &arg0->unk90;
            arg0->sprite0 = NULL;
            arg0->flags = 0x82;
        }
    }
}


void func_80057DEC(struct unknown_object_struct* arg0) {
    func_800550B0(arg0);
}


void func_80057E0C(struct unknown_object_struct* arg0) {
    func_800544D8(arg0);
}


void func_80057E2C(struct unknown_object_struct* arg0) {
    func_80055040(arg0);
}


void func_80057E4C(struct unknown_object_struct* arg0) {
    u16* temp_a2 = &arg0->unk1A0;
    switch (arg0->unk194) {
    case 0:
        temp_a2[0] = 0x821;
        temp_a2[1] = arg0->unk60[0];
        temp_a2[2] = 0;
        arg0->unk194 += 1;
    case 1:
        arg0->flags = 3;
        if (func_80056480(&arg0->sprite10[2], &arg0->sprite0, temp_a2, 0x1C, 0x8C, 0) == 1) {
            arg0->flags ^= 1;
        }
    }
}


void func_80057EF4(struct unknown_object_struct* arg0) {
    void (*temp_v0)(struct unknown_object_struct*) = D_800AD39C[arg0->unk60[0]];
    if (temp_v0 != NULL) temp_v0(arg0);
}


void func_80057F38(struct unknown_object_struct* arg0) {
    return;
}


void func_80057F40(struct unknown_object_struct* arg0) {
    if (arg0->unk60[1] >= func_8004D040(0)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    }
}


void func_80057F9C(void) {
    while (1);
}


void func_80057FA4(struct unknown_object_struct * arg0) {
    s16 sp10[3] = {
        0, 128, -1
    };
    if (func_8004C06C(0xFB) == 0) {
        s32 temp_s0 = sp10[arg0->unk60[1]] << 8;
        func_8004E6E0(0, temp_s0);
        func_8004E6E0(1, temp_s0);
    }
}


void func_80058030(struct unknown_object_struct * arg0) {
    s32 var_s0;

    if (var_s0 != arg0->unk60[1]) {
        func_8004E6E0(0, 0x8000);
        func_8004E6E0(1, 0x8000);
    } else {
        if (func_8004E6FC(0) > 0x7FFF) {
            var_s0 = -var_s0;
        }
        func_8004E648(0, var_s0);
        func_8004E648(1, var_s0);
    }
}


void func_800580A8(struct unknown_object_struct* arg0) {
    s32 temp_a0 = func_8004E6FC(0) >> 8;
    if ((temp_a0 < arg0->unk60[1]) || (arg0->unk60[2] < temp_a0)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[3]];
    }
}


void func_80058118(struct unknown_object_struct* arg0) {
    if (arg0->unk60[1] - 1 >= func_8004CA20(0)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    }
}


void func_80058184(struct unknown_object_struct* arg0) {
    if (arg0->unk60[1] >= 4) {
        s32 var_s0;
        s32 temp_s2 = func_8004E948(arg0->unk60[1] & 1);
        for (var_s0 = 4; var_s0 < 16; var_s0++) {
            if ((func_8004CA5C(var_s0)) && (func_8004C9C4(var_s0) == temp_s2)) {
                return;
            }
        }
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    }
}


void func_80058230(struct unknown_object_struct* arg0) {
    s32 var_s0;
    s32 temp_v0 = func_8004EC1C();
    
    for (var_s0 = 0; temp_v0 > var_s0; var_s0++) {
        if (!func_8004CA5C(var_s0 + 4)) return;
    }
    
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
}


void func_800582B4(struct unknown_object_struct* arg0) {
    s32 temp_v1 = arg0->unk60[1];
    s32 temp_s1 = arg0->unk60[2];
    if (temp_v1 == 0xFF) {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 18; var_s0++) {
            if (func_8004CB88(var_s0)) {
                func_8004D488(var_s0, -temp_s1);
            }
        }
    } else {
        func_8004D488(temp_v1, -temp_s1);
    }
}


void func_80058328(struct unknown_object_struct* arg0) {
    s32 temp_a0 = arg0->unk60[1];
    u16 temp_s1 = 0x8000 >> arg0->unk60[2];
    if (temp_a0 == 0xFF) {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 18; var_s0++) {
            if (func_8004CB88(var_s0)) {
                func_8004C8C8(var_s0, temp_s1);
            }
        }
    } else {
        func_8004C8C8(temp_a0, temp_s1);
    }
}


void func_800583A0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800583C0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800583E0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80058400(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80058420(struct unknown_object_struct* arg0) {
    s32 var_s0;
    
    for (var_s0 = 4; var_s0 < 12; var_s0++) {
        if (func_8004CB88(var_s0) != 0) {
            arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
        }
    }
}


void func_8005848C(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800584AC(struct unknown_object_struct* arg0) {
    s32 temp_s1 = arg0->unk60[1];
    u16 temp_s3 = D_800AD57C[temp_s1 & 0xF];
    s32 var_s0;

    temp_s1 &= 0xF0;
    for (var_s0 = 0; var_s0 < 18; var_s0++) {
        if ((func_8004CA5C(var_s0)) && ((temp_s1) || (func_8004CB88(var_s0)))) {
            if (temp_s3 & func_8004C85C(var_s0)) {
                arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
                return;
            }
        }
    }
}


void func_8005857C(struct unknown_object_struct* arg0) {
    s32 var_s0;

    for (var_s0 = 0; var_s0 < 16; var_s0++) {
        if ((func_8004CA5C(var_s0)) && 
            (!func_8004C87C(var_s0)) && 
            ((!func_8004D300(var_s0)) || (!func_8004D32C(var_s0)))) {
            return;
        }
    }
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
}


void func_80058618(struct unknown_object_struct* arg0) {
    func_8004E9AC(arg0->unk60[1], 0);
}


void func_8005863C(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005865C(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005867C(struct unknown_object_struct* arg0) {
    RECT sp28[2] = {
        {0x10, 0x10, 0x120, 0x78},
        {0x0, 0x0, 0x140, 0xF0}
    };
    struct unk_data_1100 sp38[5] = {
        {-1, 0, 2, 15},
        {0, -1, 2, 15},
        {-1, 0, 1, 15},
        {0, -1, 1, 15}
    };
    s32 temp_a0;
    u8 var_t1;
    RECT* temp_a3;
    struct unk_data_1100 * temp_t0;

    arg0->flags |= 2;
    switch (arg0->unk194) {
    case 0:
        temp_a0 = arg0->unk60[1];
        temp_a3 = &sp28[(temp_a0 >> 4) & 0xF];
        temp_t0 = &sp38[(temp_a0 & 0xF)];
        if (arg0->unk60[2] == 0) {
            var_t1 = temp_t0->unk9;
        } else {
            var_t1 = arg0->unk60[2];
        }
        func_8001F984(temp_a3->x, temp_a3->y, temp_a3->w, temp_a3->h, temp_t0->unk0, temp_t0->unk4, temp_t0->unk8, var_t1, 1);
        arg0->unk194 += 1;
    default:
        arg0->flags |= 1;
        break;
    case 1:
        if (func_8001F920() == 2) {
            arg0->flags ^= 1;
        } else {
            arg0->flags |= 1;
        }
        break;
    }
}


void func_80058840(struct unknown_object_struct* arg0) {
    s32 * temp_a3 = &arg0->unk60[1];
    struct object * temp_a0 = arg0->sprite1[arg0->unk60[1] & 0x7F];
    
    if (arg0->unk60[1] & 0x80) {
        func_8005583C(temp_a0, temp_a3[1], temp_a3[2], temp_a3[3]);
    } else {
        func_800557BC(temp_a0, temp_a3[1], temp_a3[2]);
    }
}


void func_800588A8(struct unknown_object_struct* arg0) {
    s32* temp_v1 = &arg0->unk60[1];
    switch (arg0->unk60[1]) {
    case 0:
        func_8005577C(arg0->sprite1[temp_v1[1]], temp_v1[2], temp_v1[3], temp_v1[4], temp_v1[5]);
        return;
    case 1:
        func_800276CC(arg0->sprite10[temp_v1[1]], temp_v1[2], temp_v1[3], temp_v1[4], temp_v1[5]);
        return;
    }
}


void func_80058944(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80058964(struct unknown_object_struct* arg0) {
    s32 var_a1 = arg0->unk60[1] & 0xF;
    s32 temp_v1 = arg0->unk60[1] >> 4;
    if (var_a1 == 1) {
        var_a1 = -1;
    }
    if (!(temp_v1 & 8)) {
        func_80055894(arg0->sprite1[temp_v1]);
    } else {
        func_800277EC(arg0->sprite10[temp_v1 & 7], var_a1);
    }
}


void func_800589D4(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800589F4(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80058A14(struct unknown_object_struct* arg0) {
    arg0->flags |= 2;
    switch (arg0->unk194) {
    case 0:
        arg0->sprite9 = func_800264D0(func_8001767C(), 0x21);
        arg0->unk194 += 1;
        break;
    case 1:
        if (arg0->sprite9->initialized != 0) {
            arg0->unk194 = 2;
        }
        break;
    case 2:
        func_8001F668();
        arg0->unk194 += 1;
        break;
    case 3:
        if (func_8001F920() == 2) {
            arg0->flags ^= 1;
        } else {
            break;
        }
        return;
    }
    arg0->flags |= 1;
}


void func_80058B08(struct unknown_object_struct* arg0) {
    if (arg0->sprite9->initialized == 0) {
        arg0->flags = 3;
    } else {
        s32* temp_v0 = &arg0->unk60[1];
        func_800262A8(arg0->sprite9, temp_v0[0], temp_v0[1], temp_v0[2], temp_v0[3]);
    }
}


void func_80058B64(void) {
    while (1);
}


void func_80058B6C(struct unknown_object_struct* arg0) {
    if (!(arg0->unk19B & 1)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80058BA8(struct unknown_object_struct* arg0) {
    s32 temp_s1 = arg0->unk60[1];
    if ((temp_s1 >= 0xFE) && (temp_s1 <= 0xFF)) {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 18; var_s0++) {
            if ((func_8004CA5C(var_s0)) && (!func_8004C87C(var_s0)) && 
                ((temp_s1 == 0xFE) || (func_8004CB88(var_s0)))) {
                func_8004D358(var_s0);
            }
        }
    } else if (!func_8004C87C(temp_s1)) {
        func_8004D358(temp_s1);
    }
}


void func_80058C60(struct unknown_object_struct * arg0) {
    s32 temp_s1 = arg0->unk60[1];
    if ((temp_s1 >= 0xFE) && (temp_s1 <= 0xFF)) {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 18; var_s0++) {
            if ((func_8004CA5C(var_s0)) && (!func_8004C87C(var_s0)) && 
                ((temp_s1 == 0xFE) || (func_8004CB88(var_s0)))) {
                func_8004D394(var_s0);
            }
        }
    } else if (func_8004C87C(temp_s1) == 0) {
        func_8004D394(temp_s1);
    }
}


void func_80058D18(struct unknown_object_struct * arg0) {
    struct equipment sp10;
    s32 temp_s1 = arg0->unk60[1];
    if ((temp_s1 >= 0xFE) && (temp_s1 <= 0xFF)) {
        s32 var_s0;
        for (var_s0 = 0; var_s0 < 16; var_s0++) {
            if (func_8004CA5C(var_s0)) {
                if ((temp_s1 == 0xFE) || (func_8004CB88(var_s0))) {
                    s32 var_a1 = 0;
                    if (var_s0 < 4) {
                        var_a1 = (func_8004CD28(var_s0, &sp10) != 0) << 8;
                    }
                    func_8004C8F0(var_s0, var_a1);
                }
            }
        }
    } else {
        s32 var_a1 = 0;
        if (temp_s1 < 4) {
            var_a1 = (func_8004CD28(temp_s1, &sp10) != 0) << 8;
        }
        func_8004C8F0(temp_s1, var_a1);
    }
}


void func_80058DEC(struct unknown_object_struct* arg0) {
    s32 temp_s1 = arg0->unk60[1];
    if (temp_s1 < 4) {
        s32 var_s0;
        if (temp_s1 == 0) {
            func_8004BDF8(0);
        }
        func_8004CB40(temp_s1);
        if (temp_s1 == 1) {
            func_8004FE58();
            if (func_8004ED78() == 0) {
                func_8004BDF8(1);
            }
        }
        for (var_s0 = 0; var_s0 < 6; var_s0++) {
            if (func_8004C638(var_s0) == -1) {
                func_8004C650(var_s0, temp_s1);
                return;
            }
        }
        for (var_s0 = 0; var_s0 < 6; var_s0++) {
            s32 temp_v0 = func_8004C638(var_s0);
            if (temp_v0 >= 4) {
                func_8004CC58(temp_v0);
                func_8004C650(var_s0, temp_s1);
                return;
            }
        }
    } else {
        func_8004BED8(func_8004E268(), func_8004E948(temp_s1 - 4));
    }
}


void func_80058F08(struct unknown_object_struct* arg0) {
    s32 var_s0 = arg0->unk60[1];
    if (var_s0 < 4) {
        func_8004CB04(var_s0);
        func_8004CC58(var_s0);
    } else {
        var_s0 = func_8004E204(func_8004E948(var_s0 & 1));
        if (var_s0 >= 0) {
            func_8004CB04(var_s0);
            func_8004CC58(var_s0);
        }
    }
    func_8004F418();
}


void func_80058F6C(void) {
    func_8004E364(func_8004E9E4(), 1);
}


void func_80058F98(void) {
    func_8004E364(func_8004E9E4(), -1);
}


void func_80058FC4(struct unknown_object_struct* arg0) {
    s32 var_a0 = arg0->unk60[1];
    if (var_a0 >= 4) {
        s32 temp_v0 = func_8004E204(func_8004E948(var_a0 & 1));
        if (temp_v0 < 0) {
            return;
        } else {
            var_a0 = temp_v0;
        }
    }
    if (func_8004CB88(var_a0) == 0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    }
}


void func_80059040(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (func_80019ECC(arg0->sprite14) != 0) {
            arg0->unk1B0 = func_80117810(arg0->unk60[1], 0x0F000000);
            arg0->unk194 += 1;
        } else return;
    case 1:
        if (arg0->unk1B0->unk2C != 1) {
            func_8006542C();
            arg0->flags = 0;
        }
        return;
    default:
        arg0->flags = 0;
    }
}


void func_800590D8(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        arg0->unk1B0 = func_80043850(arg0->unk60[1], 0x12);
        arg0->unk194 += 1;
    case 1:
        if (arg0->unk1B0->unk2C != 1) {
            arg0->flags = 0;
        }
    }
}


void func_80059154(struct unknown_object_struct* arg0) {
    u16 temp_s0 = 0x8000 >> arg0->unk60[2];
    if (func_8004C85C(arg0->unk60[1]) & temp_s0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[3]];
    }
}


void func_800591C0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800591E0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80059200(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80059220(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80059240(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80059260(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_80059280(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800592A0(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        func_8002E9D8(-1, arg0->unk60[1]);
        arg0->unk194 += 1;
    case 1:
        if (func_8002EB80() != 0) {
            arg0->flags = 2;
        }
        return;
    default: 
        arg0->flags = 2;
        return;
    }
}


void func_80059314(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80059334);

void func_80059354(struct unknown_object_struct* arg0) {
    if (func_8004E304(func_8004E9E4()) >= 99) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_800593AC(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_800593CC(struct unknown_object_struct* arg0) {
    s32 var_s0;

    for (var_s0 = 4; var_s0 < 16; var_s0++) {
        if ((func_8004CA5C(var_s0)) && 
            (func_8004C9C4(var_s0) == 0x8B) && 
            (!(func_8004C85C(var_s0) & 0xF640))) {
            return;
        }
    }
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
}


void func_80059470(struct unknown_object_struct* arg0) {
    s32 temp_v1 = func_8004C15C(arg0->unk60[1]);
    
    if (temp_v1 == 0xFF) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    } else {
        arg0->unk60[0] = temp_v1;
        arg0->unk60[1] = 1;
        func_80053C04(arg0);
    }
    func_80057F38(arg0);
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800594E8);


void func_80059668(void) {
    while(1);
}


void func_80059670(struct unknown_object_struct* arg0) {
    s32 temp_v1 = func_8004AE04(func_8004E948(0)) & 0xF0;
    if ((temp_v1 == 0x20) || (temp_v1 == 0x70)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_800596D8(struct unknown_object_struct* arg0) {
    if (func_8004C708(1000)) {
        func_8004C724(-1000);
        func_8004C0E0(0, 1);
    } else {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_80059744(struct unknown_object_struct* arg0) {
    if (func_8004C130(0) >= 10) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_8005979C(struct unknown_object_struct* arg0) {
    arg0->sprite10[3] = arg0->unk60[1];
    func_800529AC(arg0, 2, 0);
    arg0->flags |= 2;
}


void func_800597E0(struct unknown_object_struct* arg0) {
    s32 temp;
    u16* temp_v0 = arg0->unk8;
    arg0->unk8[0] = arg0->unk8A;
    arg0->unk8 = temp_v0 + 1;
    temp = (arg0->unk1E8 * 8) + 6 + (arg0->unk60[1]);
    arg0->unk88 = arg0->unk10[temp];
}


void func_80059824(struct unknown_object_struct* arg0) {
    s32 var_s3;
    s32 var_s0;
    u16** temp_v0;
    struct unk_data_100 * temp_s0;

    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        temp_v0 = func_800193C0(0x10);
        var_s3 = 0;
        for (var_s0 = 0; var_s0 < 4; var_s0++) {
            if ((func_8004CB88(var_s0) == 1) && !(func_8004C85C(var_s0) & 0xE000)) {
                temp_v0[var_s3] = func_8004E8B4(var_s0);
                arg0->unk1A0[var_s3] = (u16* ) var_s0; // what
                var_s3 += 1;
            }
        }
        arg0->unk1B0 = func_80065DF8(5, 0x18, 0x98, 0x90, var_s3, 0, temp_v0, var_s3, 0x15, 0x7FFFF, 2, -1, 1);
        arg0->unk194 += 1;
    case 1:
        temp_s0 = arg0->unk1B0->data;
        if (temp_s0->unk2C != 0) {
            switch (temp_s0->unk28) {
            case 1:
                func_8004EA64(func_8004C9C4(arg0->unk1A0[temp_s0->unk26]));
                break;
            case 2:
            case 0:
                arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
                break;
            }
            func_80019478(temp_s0->unk18);
            temp_s0->unk18 = NULL;
            RemoveObject(arg0->unk1B0);
        default:
            arg0->flags ^= 1;
        }
        break;
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80059A40);

s32 func_80059D50(s32 arg0, s32 arg1) {
    s32 temp_s0 = func_8004C92C(arg0);
    if (func_8004C90C(arg0) < temp_s0) {
        func_8004D42C(arg0, temp_s0 / arg1);
        return 1;
    } else {
        return 0;
    }
}


s32 func_80059DE4(s32 arg0, s32 arg1) {
    s32 temp_s0 = func_8004C9A4(arg0);
    if (func_8004C968(arg0) < temp_s0) {
        func_8004D538(arg0, temp_s0 / arg1);
        return 1;
    } else {
        return 0;
    }
}


void func_80059E78(struct unknown_object_struct* arg0) {
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    s32 temp_s1 = func_8004EA24() % 3;
    s32 var_s2 = func_8004EA70();
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        if (func_8004C9C4(var_s0) == var_s2) {
            var_s2 = var_s0;
            break;
        }
    }
    
    switch (temp_s1) {
    case 0:
        var_s4 = func_80059D50(var_s2, 10);
        var_s3 = 0;
        break;
    case 1:
        var_s4 = 0;
        var_s3 = func_80059DE4(var_s2, 10);
        break;
    case 2:
        var_s4 = func_80059D50(var_s2, 20);
        var_s3 = func_80059DE4(var_s2, 20);
        break;
    }
    
    if ((var_s4 == 1) && (var_s3 == 0)) {
        arg0->unk20[9] = 0;
    } else if ((var_s4 == 0) && (var_s3 == 1)) {
        arg0->unk20[9] = 1;
    } else if ((var_s4 == 1) && (var_s3 == 1)) {
        arg0->unk20[9] = 2;
    } else {
        arg0->unk20[9] = 3;
    }
    func_8003FFE4(0x4B);
}


void func_80059FF8(void) {
    return;
}


void func_8005A000(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    default:
        arg0->flags = 0;
        return;
    case 0:
        if (func_80019ECC(arg0->sprite14) == 0) return;
        arg0->unk1B0 = func_80117C10(arg0->unk18, arg0->unk1C);
        arg0->unk194 += 1;
    case 1:
        if (func_80117C78(arg0->unk1B0) == 1) return;
        arg0->unk194 += 1;
    case 2:
        if (func_80117F50(arg0->unk1B0) == 1) return;
        arg0->flags = 0;
    }
}


void func_8005A0C8(struct unknown_object_struct* arg0) {
    s32 var_s0;

    for (var_s0 = 4; var_s0 < 16; var_s0++) {
        if ((func_8004CA5C(var_s0)) && (!(func_8004C85C(var_s0) & 0xF070))) {
            return;
        }
    }
    arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
}


void func_8005A148(struct unknown_object_struct* arg0) {
    struct object* var_s1 = arg0->unk1B0;
    arg0->flags = 3;
    switch (arg0->unk194) {
    default:
        arg0->flags = 0;
        return;
    case 0:
        if (func_80019ECC(arg0->sprite14) == 0) return;
        var_s1 = func_8011C7A4(arg0->unk18, arg0->unk1C);
        arg0->unk1B0 = var_s1;
        func_8001F668();
        arg0->unk194 += 1;
    case 1:
        if (func_8011C880(&var_s1->unk24) == 1) return;
        arg0->unk194 += 1;
    case 2:
        if (func_8011B7B0((u8*)var_s1 + 0x1344, func_800536F4(arg0, arg0->unk60[1])) == 1) return;
        arg0->unk1A0[0] = func_80019C58(0, 0, 0x59U, 0, 0, 7);
        arg0->unk194 += 1;
    case 3:
        if ((func_80019ECC((s32) arg0->unk1A0[0]) != 0) && (func_80117F50((s32) arg0->unk1B0) != 1)) {
            arg0->flags = 0;
        }
    }
}


void func_8005A28C(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    switch (arg0->unk194) {
    case 0:
        if (func_80019ECC(arg0->sprite14) == 0) return;
        func_8011E524();
        arg0->unk1B0 = func_800193C0(0x30);
        bzero((u8* ) arg0->unk1B0, 0x30);
        arg0->unk194 += 1;
    case 1:
        if (func_8011B7B0(arg0->unk1B0, func_800536F4(arg0, arg0->unk60[1])) == 1) return;
        arg0->unk1A0[0] = func_80019C58(0, 0, 0x7D, 0, 0, 7);
        arg0->unk194 += 1;
    case 2:
        if (func_80019ECC(arg0->unk1A0[0])) {
            func_8011CA6C();
            func_80019478(arg0->unk1B0);
            arg0->unk1B0 = NULL;
            arg0->flags = 0;
        }
        return;
    }
}


void func_8005A3A0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A3C0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A3E0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A400(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A420(void) {
    while (1);
}


void func_8005A428(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A448(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    if (func_80019ECC(arg0->sprite14)) {
        s32 temp_v0 = func_80050150();
        if (temp_v0 == -1) {
            arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
        } else {
            arg0->unk60[0] = temp_v0;
            arg0->unk60[1] = 1;
            func_80053C04(arg0);
        }
        arg0->flags = 0;
    }
}


void func_8005A4D0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A4F0(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A510(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A530(struct unknown_object_struct* arg0) {
    if ((func_80050318() > 0) && (func_8004E304(0xFC) > 0)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_8005A58C(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A5AC(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A5CC(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A5EC(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A60C(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A62C(struct unknown_object_struct* arg0) {
    if (func_8004E3D0() == 0) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}


void func_8005A678(struct unknown_object_struct* arg0) {
    if (arg0->unk194 == 0) {
        memcpy(arg0->unk1A0, arg0->unk60, 12);
        arg0->unk60[0] = 0x47;
        arg0->unk60[1] = 7;
        arg0->unk60[2] = 0xA;
        func_8004C530(0x48, 8, 0xA, 2);
        func_8004C0B4(0xE5);
    }
    func_80054604(arg0);
    memcpy(arg0->unk60, arg0->unk1A0, 12);
}


void func_8005A710(struct unknown_object_struct* arg0) {
    if (arg0->unk194 == 0) {
        func_80017948();
        func_80017218();
        memcpy(arg0->unk1A0, arg0->unk60, 12);
        arg0->unk60[0] = 0x96;
        arg0->unk60[1] = 0x35;
        arg0->unk60[2] = 0;
        func_8004C530(-1, -1, -1, -1);
        func_8004C304();
    }
    func_80054604(arg0);
    memcpy(arg0->unk60, arg0->unk1A0, 12);
}


void func_8005A7B8(struct unknown_object_struct* arg0) {
    if (func_8004E420() < arg0->unk60[1]) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    }
}


void func_8005A810(void) {
    return;
}


void func_8005A818(void) {
    return;
}


void func_8005A820(void) {
    return;
}


void func_8005A828(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A848(struct unknown_object_struct* arg0) {
    s32 var_a0 = arg0->unk60[1];
    u32 temp_s0 = arg0->unk60[2];
    if (var_a0 == 0) {
        var_a0 = 0x640;
    }
    func_8001A78C(var_a0);
    func_8001A778(
        ((temp_s0 & 0xFF0000) >> 16), 
        ((temp_s0 & 0xFF00) >> 8), 
        (temp_s0 & 0xFF)
    );
    arg0->flags = 2;
}


void func_8005A8B0(struct unknown_object_struct* arg0) {
    func_80018F6C(0, 0);
    func_8004F79C(0);
    func_80044178();
    if ((func_8004C06C(0xB6)) && (func_8004C06C(0xC7))) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    } else if (func_8004C06C(0xC7)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[2]];
    } else if (func_8004C06C(0xB6)) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[3]];
    }
}


void func_8005A964(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005A984(struct unknown_object_struct* arg0) {
    u8* var_v1;
    u8 var_v0;
    s16 temp_v0 = func_8004E9C0(0);
    s32 temp_s1 = temp_v0 * 2;
    s16 temp_s0 = arg0->unk60[1] + (temp_v0 * 3);
    s32 temp_a0 = func_8004C438() & 0xF0;
    
    if ((D_800AD5B4[temp_s1] == temp_a0) || (D_800AD5B4[temp_s1 + 1] == temp_a0)) {
        var_v0 = D_800AD584[temp_s0];
    } else {
        var_v0 = D_800AD59C[temp_s0];
    }
    
    func_8004E9D8(var_v0);
}


void func_8005AA2C(void) {
    func_8004C194(func_8004E9C0(0));
}


void func_8005AA54(struct unknown_object_struct* arg0) {
    if (func_8004C174(func_8004E9C0(0))) {
        arg0->unk88 = arg0->unk8A = arg0->unk10[arg0->unk60[1]];
    }
}



void func_8005AAAC(void) {
    return;
}


void func_8005AAB4(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005AAD4);

void func_8005ABA4(struct unknown_object_struct* arg0) {
    func_80057F38(arg0);
}


void func_8005ABC4(struct unknown_object_struct* arg0) {
    arg0->flags = 3;
    if (arg0->unk194 == 0) {
        func_8004F79C(0);
    }
    if (arg0->unk194 & 1) {
        s32 var_v0 = func_80056480(
            &arg0->sprite10[2], 
            &arg0->sprite0, 
            func_800536F4(arg0, arg0->unk60[1]), 
            0x1C, 0x8CU, 0
        );
        
        if (var_v0 == 1) {
            arg0->unk194 += 1;
        }
    } else {
        if (func_8005667C(&arg0->sprite10[2]) == 1) {
            arg0->unk194 += 1;
        }
    }
    
    if (func_80018F8C(0) & 0xE000) {
        func_800145CC(0);
    }
}


void func_8005AC84(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005AC8C);


void func_8005AE18(void) {
    struct unk_data_1007 * temp_s0;
    struct object * temp_v0 = CreateObject(
        func_8005AEF0, NULL, *FirstObjectPtrPtr, 
        -4, 0, sizeof(struct unk_data_1007)
    );
    if (temp_v0 == NULL) return;
    temp_s0 = temp_v0->data;
    bzero((u8* ) temp_s0, 0x120);
    temp_s0->unk10C = 0x12C;
    temp_s0->unk10E = 0x1E;
    temp_s0->unk110 = 3;
    temp_s0->unk112 = 1;
    temp_s0->unk114 = 3;
    temp_s0->unk116 = 0;
    temp_s0->unk118 = 0;
    temp_s0->unk11A = 0;
    temp_s0->unkE8 = func_80019C58(0, 0, 0x2F, 0, 0, 6);
    func_8004C08C(0xE6);
    func_8004C08C(0xFF);
    func_8004C08C(0xE5);
    func_80040204(7);
    func_80040A08(0);
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005AEF0);

void func_8005B22C(struct object* arg0) {
    s16 sp18[8];
    s32 var_s0;
    struct unk_data_1007* temp_s2 = arg0->data;
    
    switch (temp_s2->unk11E) {
    case 1:
        func_80018F6C(0, 0);
        func_80044318(1);
        func_80040A08(-1);
        func_8004018C(func_800408BC(0), 0x3C, 0, 3);
        func_8003FFE4(0x5E);
        temp_s2->unk108 = func_8001FD3C(&temp_s2->unkEC, -1, 0, 0x80, 1);
        temp_s2->unk11E += 1;
    case 2:
        if (func_8005B5BC(temp_s2) == 1) return;
        temp_s2->unk108 = func_8001FD3C(&temp_s2->unkEC, 0, -1, 0xFF, 1);
        temp_s2->unk11E += 1;
    case 3:
        if (func_8005B5BC(temp_s2) == 1) return;
        func_80025308(0);
        func_800225C8(3, 3, 3, 3, 3);
        func_80024648(3);
        func_800252AC(1);
        func_800225BC(1);
        func_80044178();
        func_800187AC(0x10, 0x0FFFFFFF);
        ClearUnknownStruct();
        func_8005645C();
        func_8001A778(0xFF, 0xFF, 0xFF);
        func_8001F754(1);
        func_80040204(2);
        func_8004018C(2, 0, 0x3C, 1);
        temp_s2->unk11E += 1;
        func_80018F6C(0, 1);
        return;
    case 33:
        func_8004C6B0(0xFEFF);
        func_8004C0B4(0xE6);
        func_8004C0B4(0xE5);
        func_8001489C(0xB, 0x77, 0);
        temp_s2->unk11E += 1;
    case 34:
        if (func_800148D4() == 1) return;
        func_800252AC(0);
        func_800225BC(0);
        func_80025308(1);
        func_800238A8(2);
        func_80024648(2);
        func_8001A778(0, 0, 0);
        for (var_s0 = 0; var_s0 < 12; var_s0++) {
            s32 var_a1;
            if (func_8004CA5C(var_s0 + 4)) {
                var_a1 = func_8004C9C4(var_s0 + 4);
            } else {
                var_a1 = 0xFF;
            }
            func_8004C148(var_s0, var_a1);
        }
        temp_s2->unk11E += 1;
    case 35:
        func_80046FF0(5, 0);
        func_8004018C(2, 0x3C, 0, 3);
        temp_s2->unk11E += 1;
    case 36:
        func_8004C08C(0x2F);
        func_8004CB04(1);
        for (var_s0 = 1; var_s0 < 16; var_s0++) {
            func_8004CC58(var_s0);
            func_8004CB04(var_s0);
        }
        func_8004F418();
        for (var_s0 = 0; var_s0 < 4; var_s0++) {
            func_8004C8F0(var_s0, (func_8004CD28(var_s0, sp18) != 0) << 8);
            func_8004D358(var_s0);
            func_8004D394(var_s0);
        }
        func_8001489C(0xB, 0, 0);
        RemoveObject(arg0);
        break;
    default:
        temp_s2->unk11E += 1;
        break;
    }
}


s32 func_8005B5BC(struct unk_data_1007* arg0) {
    struct unk_data_1008* temp_s0;

    temp_s0 = &arg0->unk0[arg0->unk11F];
    AddPolyF4(0, 0, 0x140, 0xF0, arg0->unk108, 0, &temp_s0->unk0);
    temp_s0->unk0.code |= 2;
    AddDrawMode(0, 1, GetTPage(0, 1, 0, 0), NULL, 0, &temp_s0->unk68);
    arg0->unk11F ^= 1;
    return func_8001FE90(&arg0->unk108, &arg0->unkEC);
}


struct object* func_8005B67C(s32 arg0, s32 arg1, s32 arg2) {
    struct unk_data_1009* temp_s1;
    struct object * temp_v0 = CreateObject(func_8005B7D4, func_8005BE18, *FirstObjectPtrPtr, arg2, 0, 0xE24);
    if (temp_v0 == NULL) return NULL;
    temp_s1 = temp_v0->data;
    bzero((u8* ) temp_s1, 0xE24);
    temp_s1->unk8C6 = arg0;
    temp_s1->unk8C8 = 0;
    temp_s1->unk8CA = 0;
    temp_s1->unk8C4 = 0;
    temp_s1->unk8C2 = -1;
    temp_s1->unk8BC = -1;
    temp_s1->unk8BE = -1;
    temp_s1->unk8C0 = -1;
    temp_s1->unk8CC = arg2;
    temp_s1->unk8B8 = 0;
    temp_s1->unk8DC = 0;
    temp_s1->unk2FC = 0;
    temp_s1->unk17C = 0;
    temp_s1->unk8E4 = -1;
    temp_s1->unkDF8 = 0;
    temp_s1->unk8D0 = -1;
    temp_s1->unkDFC = func_800408BC(0);
    temp_s1->unkE00 = arg1;
    temp_s1->unkE04 = 0;
    temp_s1->unkE08 = 0;
    temp_s1->unkE0C = 0;
    temp_s1->unkE10 = 0;
    temp_s1->unkE18 = 0;
    temp_s1->unkE14 = 0;
    temp_s1->unkE1C = 0;
    temp_s1->unkE20 = 0;
    temp_s1->unk8D2 = -1;
    if (temp_s1->unk8C6 != 0) {
        if (func_80040A68(0) == 0) {
            func_80040204(8);
        }
    }
    temp_s1->unk8E0 = func_80019C58(0, 0, 0x20, &temp_s1->unk8D8, 0, 3);
    return temp_v0;
}


void func_8005B7D4(struct object* arg0) {
    struct unk_data_1009* temp_s0 = arg0->data;
    
    if ((temp_s0->unk8C6 != 0) && (temp_s0->unkE10 == 0)) {
        func_8005BC5C(temp_s0, 8);
    }
    
    if (func_80019ECC(temp_s0->unk8E0) != 0) {
        func_8004B7B8(7, temp_s0->unk8D8);
        arg0->proc_func = func_8005B8E0;
        func_8005C92C(temp_s0, temp_s0->unk8CC);
    }
}


void func_8005B864(struct unk_data_1009* arg0) {
    void (* sp10[5][16])(struct unk_data_1009 *) = {
        {
            func_8005E12C,
            func_8005E398,
            func_80060E14
        }, {
            func_8005E43C,
            func_8005E5F8,
            func_8005E6E0,
            func_8005E870,
            func_8005EA58,
            func_8005EB64,
            func_8005ECB4,
            func_8005ED44,
            func_8005F024,
            func_8005F0D8,
            func_8005F19C,
            func_8005F2D4,
            func_8005F344,
            func_80060DA0,
            func_80060E14,
            func_80060E5C,
        }, {
            func_8005F394,
            func_8005F42C,
            func_8005F5E0,
            func_8005F6F4,
            func_8005F884,
            func_8005F990,
            func_8005FA9C,
            func_8005FB2C,
            func_8005FCE8,
            func_8005FDA8,
            func_8005FE8C,
            func_80060DA0,
            func_80060E14,
            func_80060E5C
        }, {
            func_8005FEF4,
            func_80060070,
            func_80060158,
            func_800602DC,
            func_80060404,
            func_80060578,
            func_80060628,
            func_800606C8,
            func_80060DA0,
            func_80060E14,
            func_80060E5C
        }, {
            func_8006072C,
            func_800608D0,
            func_80060A10,
            func_80060B38,
            func_80060C8C,
            func_80060D3C,
            func_80060DA0,
            func_80060E14,
            func_80060E5C
        }
    };

    sp10[arg0->unk8C6][arg0->unk8C8](arg0);
}


// This one is really ugly but it matches so someone gets to clean it up later.
void func_8005B8E0(struct object* arg0) {
    struct unk_data_1009* temp_s0 = arg0->data;
    
    if ((temp_s0->unk8C6 != 0) && (temp_s0->unkE10 == 0)) {
        func_8005BC5C(temp_s0, 8);
    }
    func_8005C034(temp_s0, 0x0F000000);
    func_8005CD54(temp_s0);
    if (temp_s0->unk8C6 != 0) {
        func_8005D5E4(temp_s0);
    } else {
        struct object * temp_v1 = temp_s0->unk2FC;
        s32 var_v0 = 0;
        var_v0 = (temp_v1 == NULL) ? 0 : temp_v1->unk2C == 1;
        temp_s0->unk2F0 = var_v0;
    }
    if (temp_s0->unkE10 == 0) {
        func_8005DD40(temp_s0->unk180);
    }
    if (func_8005DAD0(temp_s0) != 0) return;
    if (temp_s0->unkE10 == 0) {
        struct object * temp_a0 = temp_s0->unk2FC;
        if ((temp_a0 != NULL) && (temp_a0->unk2C == 1)) {
            if (((struct unk_data_600 *)temp_a0->data)->unk7900 == 0) return;
            temp_s0->unkE08 = 0;
        }
    } else {
        struct object * temp_a0_2 = *temp_s0->unkE14;
        if ((temp_a0_2 != NULL) && (temp_a0_2->unk2C == 1)) {
            struct unk_data_1010* temp_s1 = temp_a0_2->data;
            struct object * temp_v1_2;
            if (!func_80064164(temp_s1)) return;
            temp_v1_2 = *temp_s1->unk19C;
            if ((temp_v1_2 != NULL) && (temp_v1_2->unk2C == 1)) {
                if (((struct unk_data_600 *)temp_v1_2->data)->unk7900 == 0) return;
            }
        }
    }
    temp_s0->unk8D4 = 0;
    if (temp_s0->unk8D2 == 0) {
        func_8005D308(temp_s0);
    } else if (temp_s0->unk8D2 == 1) {
        func_8005D290(temp_s0);
    } else if (temp_s0->unk8D2 == 2) {
        func_8005D378(temp_s0);
    }
    func_8005B864(temp_s0);
}


s32 func_8005BAE0(void) {
    u8 temp_v0 = func_8005BD30();
    if (func_8005BB80(temp_v0)) {
        func_8004018C(temp_v0, 0x3C, 0, 5);
        return 1;
    }
    return 0;
}


s32 func_8005BB30(void) {
    u8 temp_v0 = func_8005BCB0();
    if (func_8005BB80(temp_v0)) {
        func_8004018C(temp_v0, 0x3C, 0, 5);
        return 1;
    }
    return 0;
}


s32 func_8005BB80(s16 arg0) {
    if (func_800408BC(0) != arg0) {
        if (func_80040A68(0) == 0)  {
            func_80040204(arg0);
        } else { 
            return 0;
        }
    }
    return 1;
}


void func_8005BBDC(struct unk_data_1009* arg0) {
    func_80040204(arg0->unkDFC);
    func_8004018C(arg0->unkDFC, 0x3C, 0, 5);
}


void func_8005BC1C(s16 arg0) {
    func_80040204(arg0);
    func_8004018C(arg0, 0x3C, 0, 5);
}


s32 func_8005BC5C(struct unk_data_1009* arg0, s16 arg1) {
    if (func_800408BC(0) != arg1) {
        if (func_80040A68(0) == 0) {
            func_80040204(arg1);
            return 1;
        }
    }
    return 0;
}


s32 func_8005BCB0(void) {
    switch (func_80044114()) {
    case 0xFF:
        return -1;
    case 0x0:
        return func_800460C0();
    default:
        return func_8003AFB4();
    }
}


void func_8005BD04(void) {
    func_8005BC1C(func_8005BCB0());
}


u8 func_8005BD30(void) {
    switch (func_8004E9C0(0)) {
    case 14:
        return 3;
    case 15:
        return 6;
    case 16:
        return 6;
    case 17:
        return 6;
    default:
        return 9;
    }
}


void func_8005BDA0(void) {
    func_8005BC1C(func_8005BD30());
}


s32 func_8005BDC8(struct unk_data_1009* arg0) {
    if (func_8005BC5C(arg0, arg0->unkDFC)) {
        func_8004018C(arg0->unkDFC, 0x3C, 0, 5);
        return 1;
    }
    return 0;
}


void func_8005BE18(struct object* arg0) {
    struct unk_data_1009* temp_s1 = arg0->data;
    
    if ((func_8005D8BC(temp_s1) != 0) && (temp_s1->unk8C6 > 2 && temp_s1->unk8C6 < 5)) {
        s16 var_s0 = 0;
        func_8004990C();
        for (; var_s0 < 16; var_s0++) {
            struct character_data * temp_a0 = &D_800B72AC->characters[var_s0];
            u8 var_a1 = (var_s0 < 4) ? 4 : 10;
            temp_a0->action = temp_a0->default_action = var_a1;
        }
    }
    
    if (temp_s1->unk8B8 != NULL && temp_s1->unk8B8->unk2C == 1) {
        struct unk_data_1011 * temp_v1_2 = temp_s1->unk8B8->data;
        if (temp_v1_2->unk19C == 1) {
            D_800B74A0 = temp_v1_2->unk6;
        }
    }
    
    RemoveObject(temp_s1->unk8B8);
    temp_s1->unk8B8 = NULL;
    func_80019478(temp_s1->unk8D8);
    temp_s1->unk8D8 = NULL;
    
    if (temp_s1->unk8C6 == 1) {
        if (temp_s1->unkE1C != 0) {
            RemoveObject((struct object* ) temp_s1->unkE18);
            temp_s1->unkE18 = 0;
        } else if (temp_s1->unkE10 != 0) {
            struct object * temp_v1_3 = *temp_s1->unkE14;
            if ((temp_v1_3 != NULL) && (temp_v1_3->unk2C == 1)) {
                struct unk_data_1010 * temp_s0 = temp_v1_3->data;
                RemoveObject(temp_s0->unk4);
                temp_s0->unk4 = NULL;
                temp_s0->unk19C = &temp_s0->unk4;
                temp_s0->unk198 = 0;
                temp_s0->unk188 = 0;
            }
        }
    }
    
    RemoveObject(temp_s1->unk17C);
    temp_s1->unk17C = NULL;
    RemoveObject(temp_s1->unk2FC);
    temp_s1->unk2FC = NULL;
}


s32 func_8005BFCC(s16 arg0) {
    switch (arg0) {
        case 1: return 0;
        case 2: return 2;
        case 3: return 1;
        case 4: return 3;
        default: return 0;
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005C034);

void func_8005C92C(struct unk_data_1009* arg0) {
    s16 var_s0;

    arg0->unk2FC = NULL;
    func_8005DD14(arg0, 0x10, 0x10, 0x120, 0x10, 0x12);
    func_8005DEF4(&arg0->unk8E8[2], 0x13);
    if (arg0->unk8C6 == 0) {
        func_8005DD14(arg0->unk180, 0x18, 0x59, 0x110, 0x3D, 0x12);
    } else {
        func_8005DD14(arg0->unk180, 0x18, 0xA1, 0x110, 0x3D, 0x12);
    }
    for (var_s0 = 0; var_s0 < 3; var_s0++) {
        func_8005D97C(&arg0->unk300[var_s0], var_s0, ((arg0->unk8C6 == 2) || (arg0->unk8C6 == 4)) ? 1 : 0);
    }
}


s16 func_8005CA34(struct unk_data_1009* arg0) {
    switch (arg0->unk8C6) {
    case 0:
        return 0;
    case 1:
    case 3:
        return 3;
    case 2:
    case 4:
        return 1;
    default:
        return 3;
    }
}


s32 func_8005CA84(struct unk_data_1009* arg0) {
    if ((arg0->unk8B8 != NULL) && (arg0->unk8B8->unk2C == 1)) {
        return ((struct unk_data_1011 *)arg0->unk8B8->data)->unk19E;
    }

    switch (arg0->unk8C6) {
    case 0:
        return 4;
    case 1:
    case 3:
        return 3;
    case 2:
    case 4:
        return 1;
    default:
        return 3;
    }
}


s32 func_8005CB08(struct unk_data_1009 * arg0, s16 arg1, u32 arg2, u32 arg3, u32 arg4, u32 arg5) {
    struct poly_init_data sp10;

    sp10.x0 = arg0->unk11A;
    sp10.y0 = arg0->unk11C;
    sp10.x1 = arg0->unk11A + arg0->unk11E;
    sp10.y1 = arg0->unk11C;
    sp10.x2 = arg0->unk11A;
    sp10.y2 = arg0->unk11C + arg0->unk120;
    sp10.x3 = arg0->unk11A + arg0->unk11E;
    sp10.y3 = arg0->unk11C + arg0->unk120;
    setRGB0FromU32(&sp10, arg2);
    setRGB1FromU32(&sp10, arg3);
    setRGB2FromU32(&sp10, arg4);
    setRGB3FromU32(&sp10, arg5);
    
    if (arg1 != -1) {
        sp10.abe = 1;
        sp10.unk30 = arg1;
        arg0->unk142 = arg1;
    } else {
        sp10.abe = 0;
        sp10.unk30 = 0;
        arg0->unk142 = 0;
    }
    
    sp10.tge = 1;
    sp10.ot_index = arg0->unk122;
    func_8001BAEC(&arg0->unkA0, &sp10);
    return 1;
}


void func_8005CC58(struct poly_g4_data* arg0, s16 x, s16 y, s16 w, s16 h, u32 arg5, u32 arg6, u32 arg7, u32 arg8, s32 abe, s32 ot_index) {
    struct poly_init_data sp10;

    sp10.x0 = x;
    sp10.y0 = y;
    sp10.x1 = x + w;
    sp10.y1 = y;
    sp10.x2 = x;
    sp10.y2 = y + h;
    sp10.x3 = x + w;
    sp10.y3 = y + h;
    setRGB0FromU32(&sp10, arg5);
    setRGB1FromU32(&sp10, arg6);
    setRGB2FromU32(&sp10, arg7);
    setRGB3FromU32(&sp10, arg8);
    sp10.unk30 = 0;
    sp10.tge = 1;
    sp10.abe = abe;
    sp10.ot_index = ot_index;
    func_8001B8EC(arg0);
    func_8001BAEC(arg0, &sp10);
    arg0->flags |= 0x3F;
}


void func_8005CD54(struct unk_data_1009* arg0) {
    s32 var_s0 = 0;

    arg0->unk8C2 = -1;
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        s32 temp_s1 = var_s0 + 12;
        if (func_80018F14(0, temp_s1)) {
            arg0->unk8C2 = temp_s1;
        }
    }
    
    arg0->unk8BC = -1;
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        s32 temp_s1 = var_s0 + 4;
        if (func_80018F14(0, temp_s1)) {
            arg0->unk8BC = temp_s1;
        }
    }
    
    arg0->unk8C0 = arg0->unk8BE;
    arg0->unk8BE = -1;
    
    for (var_s0 = 0; var_s0 < 4; var_s0++) {
        s32 temp_s1 = var_s0 + 4;
        if (func_80018EE8(0, temp_s1)) {
            arg0->unk8BE = temp_s1;
        }
    }

    if ((arg0->unk2FC != NULL) && (arg0->unk2FC->unk2C == 1)) {
        func_80048BB4(arg0->unk2FC->data);
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005CE58);

s32 func_8005D00C(struct poly_f4_data* arg0, s16 x, s16 y, s16 w, s16 h, u16 r, u16 g, u16 b, s32 abe, s32 arg9, s32 tge, s32 ot_index) {
    struct poly_init_data sp10;

    sp10.x0 = x;
    sp10.y0 = y;
    sp10.x1 = x + w;
    sp10.y1 = y;
    sp10.x2 = x;
    sp10.y2 = y + h;
    sp10.x3 = x + w;
    sp10.y3 = y + h;
    sp10.r0 = r;
    sp10.g0 = g;
    sp10.b0 = b;
    sp10.abe = abe;
    sp10.unk30 = arg9;
    sp10.tge = tge;
    sp10.ot_index = ot_index;
    func_8001ADD0(arg0, &sp10);
    return 1;
}


s32 func_8005D090(struct unk_data_1009* arg0 /* Maybe? who knows */, s16 x, s16 y, s16 w, s16 h, s32 abe, s32 ot_index) {
    struct poly_init_data sp10;

    sp10.x0 = x;
    sp10.y0 = y;
    sp10.x1 = x + w;
    sp10.y1 = y;
    sp10.x2 = x;
    sp10.y2 = y + h;
    sp10.x3 = x + w;
    sp10.y3 = y + h;
    sp10.r0 = arg0->unk0.r0;
    sp10.g0 = arg0->unk0.g0;
    sp10.b0 = arg0->unk0.b0;
    sp10.r1 = arg0->unk0.r1;
    sp10.g1 = arg0->unk0.g1;
    sp10.b1 = arg0->unk0.b1;
    sp10.r2 = arg0->unk0.r2;
    sp10.g2 = arg0->unk0.g2;
    sp10.b2 = arg0->unk0.b2;
    sp10.r3 = arg0->unk0.r3;
    sp10.g3 = arg0->unk0.g3;
    sp10.b3 = arg0->unk0.b3;
    sp10.abe = abe;
    sp10.unk30 = 0;
    sp10.tge = 1;
    sp10.ot_index = ot_index;
    func_8001BAEC(&arg0->unk0, &sp10);
    return 1;
}


s32 func_8005D184(struct unk_data_1009 * arg0) {
    arg0->unk2F0 = 0;
    arg0->unk2FC->initialized = 0;
    RemoveObject(arg0->unk2FC);
    arg0->unk2FC = NULL;
    return 1;
}


void func_8005D1C4(struct unk_data_1009 * arg0, s16 arg1) {
    arg0->unk2F0 = func_8005D684(arg0, arg1);
}


s32 func_8005D1F4(struct unk_data_1009* arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4) {
    func_8005D684(arg0, arg1);
    func_8005DA4C(arg0, arg3);
    if (arg4 != 0) {
        struct unk_data_1014* temp_v1;
        struct object * temp_v0 = func_800684E8();
        arg0->unk17C = temp_v0;
        temp_v1 = temp_v0->data;
        temp_v1->unk30 = 1;
        temp_v1->unk44 = 0;
    } else {
        RemoveObject(arg0->unk17C);
        arg0->unk17C = NULL;
    }
    arg0->unk8D2 = arg2;
    return 1;
}


void func_8005D290(struct unk_data_1009* arg0) {
    if ((arg0->unk17C != NULL) && (arg0->unk17C->unk2C == 1)) {
        struct unk_data_1014 * temp_v1_2 = arg0->unk17C->data;
        
        if ((temp_v1_2->unk2C != 0) && (temp_v1_2->unk28 == 1)) {
            if (temp_v1_2->unk26 == 0) {
                arg0->unk8D4 = 3;
            } else if (temp_v1_2->unk26 == 1) {
                arg0->unk8D4 = 1;
            }
        }
    }
}


void func_8005D308(struct unk_data_1009* arg0) {
    func_8005CE58(arg0);
    
    if (arg0->unk8C2 == 13) {
        arg0->unk8D4 = 3;
    } else if (arg0->unk8C2 == 14) {
        arg0->unk8D4 = 1;
        func_8003FFE4(3);
    } else if (arg0->unk8C2 == 15) {
        arg0->unk8D4 = 2;
        func_8003FFE4(4);
    }
}


void func_8005D378(struct unk_data_1009* arg0) {
    if ((arg0->unk8C2 > 11) && (arg0->unk8C2 < 16)) {
        arg0->unk8D4 = 3;
    }
}


s16 func_8005D39C(struct unk_data_1009* arg0) {
    s16 var_s0;
    s16 var_s1 = 0;

    for (var_s0 = 0; var_s0 < func_8005CA34(arg0); var_s0++) {
        var_s1 |= func_8005DEE0(&arg0->unk300[var_s0]);
    }
    return var_s1;
}


s32 func_8005D424(struct unk_data_1009* arg0) {
    struct object* temp_v0;

    temp_v0 = arg0->unk17C;
    if ((temp_v0 != NULL) && (temp_v0->unk2C == 1)) {
        if (func_80064774(&arg0->unk8DC)) {
            RemoveObject(arg0->unk17C);
            arg0->unk17C = NULL;
        }
    } else if (func_8005D39C(arg0) != 0) {
        if (func_80064774(&arg0->unk8DC)) {
            func_8005DA4C(arg0, 0);
            return 0;
        }
    } else {
        if (!func_80064774(&arg0->unk8DC)) {
            RemoveObject(arg0->unk2FC);
            arg0->unk2FC = NULL;
            return 1;
        }
    }
    return 0;
}


s32 func_8005D4E8(struct unk_data_1009 * arg0) {
    if (arg0->unk8C6 == 0) {
        return 0;
    } else if (arg0->unk8C6 == 1) {
        return 1;
    } else if (arg0->unk8C6 == 2) {
        return 2;
    } else if (arg0->unk8C6 != 3) { // weird
        return (arg0->unk8C6 == 4) * 2;
    } else {
        return 1;
    }
}


s32 func_8005D538(struct unk_data_1009 * arg0) {
    if ((arg0->unk2FC != NULL) && (arg0->unk2FC->unk2C == 1)) {
        return 0;
    }
    if ((arg0->unk8B8 != NULL) && (arg0->unk8B8->unk2C == 1)) {
        if (arg0->unk8E4 != -1) {
            return 1;
        }
    }
    return 0;
}


void func_8005D594(struct unk_data_1009 * arg0, s16 arg1) {
    RemoveObject(arg0->unk17C);
    arg0->unk17C = NULL;
    arg0->unk8D2 = -1;
    func_800647DC(&arg0->unk8C6, arg1);
}


void func_8005D5E4(struct unk_data_1009* arg0) {
    if ((arg0->unk8D0 != -1) && (arg0->unkE10 == 0)) {
        s32 temp_s1 = func_8004B7D8(7, arg0->unk8D0);
        if ((arg0->unk8D0 == 18) || (arg0->unk8D0 == 20)) {
            func_8005DA4C(arg0, 0);
        }
        if ((arg0->unk2FC != NULL) && (arg0->unk2FC->unk2C == 1)) {
            return;
        }
        func_8005D740(arg0, temp_s1);
    }
}


s32 func_8005D684(struct unk_data_1009* arg0, s16 arg1) {
    if (arg0->unk8D0 == arg1) {
        return 0;
    }
    
    if (arg1 == -1) {
        return 0;
    }
    
    if (arg1 >= 0x1E) {
        return 0;
    }
    
    if ((arg0->unk2FC != NULL) && (arg0->unk2FC->unk2C == 1)) {
        RemoveObject(arg0->unk2FC);
        arg0->unk2FC = NULL;
        arg0->unk8D0 = arg1;
    }
    
    arg0->unk8D0 = arg1;
    func_8005D740(arg0, func_8004B7D8(7, arg1));
    return 1;
}


void func_8005D740(struct unk_data_1009* arg0, s32 arg1) {
    s32 var_s1 = (arg0->unk8C6 == 0) ? 0x5D : 0xA5;

    if (arg0->unk8D0 == 0xC) {
        func_8004E914(((struct unk_data_1011 *)arg0->unk8B8->data)->unk0[0].unk6 + 1);
    }
    
    arg0->unk2FC = func_800470E4(
        0x1C, 
        (arg0->unkE10 != 0) ? 0x8C : var_s1, 
        (arg0->unkE10 != 0) ? func_80049284() : 0, 
        arg1, 0, 0x70000, 
        (arg0->unkE10 != 0) ? 0x15 : 0x11
    );
    
    if (arg0->unk8C6 == 0) {
        func_80064D98(arg0->unk2FC->data, 0x18, 0x85, 0x110);
    }
}


void func_8005D83C(struct unk_data_1009 * arg0, s32 arg1) {
    if ((arg0->unk8B8 != NULL) && (arg0->unk8B8->unk2C == 1)) {
        ((struct unk_data_1011 *)arg0->unk8B8->data)->unk1A4 = arg1;
    }
}


s32 func_8005D870(struct unk_data_1009* arg0) {
    if (arg0 == NULL) {
        return 1;
    } else {
        if (
            (arg0->unk2FC != NULL) && 
            (arg0->unk2FC->unk2C == 1) && 
            (((struct unk_data_600 *)arg0->unk2FC->data)->unk7900 == 0)
        ) {
            return 0;
        } else {
            return arg0->unk8C4;
        }
    }
}


s32 func_8005D8BC(struct unk_data_1009* arg0) {
    return arg0->unkDF8;
}


void func_8005D8C8(struct unk_data_1009* arg0, s32 arg1) {
    arg0->unk8C4 = 1;
    arg0->unkDF8 = arg1;
}


void func_8005D8D8(struct poly_f4_data* arg0, s16 x, s16 y, s16 w, s16 h, u16 r, u16 g, u16 b, s32 abe, s32 arg9, s32 ot_index) {
    struct poly_init_data sp10;

    sp10.x0 = x;
    sp10.y0 = y;
    sp10.x1 = x + w;
    sp10.y1 = y;
    sp10.x2 = x;
    sp10.y2 = y + h;
    sp10.x3 = x + w;
    sp10.y3 = y + h;
    sp10.r0 = r;
    sp10.g0 = g;
    sp10.b0 = b;
    sp10.tge = 1;
    sp10.abe = abe;
    sp10.unk30 = arg9;
    sp10.ot_index = ot_index;
    func_8001ABAC(arg0);
    func_8001ADD0(arg0, &sp10);
    arg0->flags |= 0x3F;
}


s32 func_8005D97C(struct unk_data_1012 * arg0, s16 arg1, s32 arg2) {
    s16 temp_s0 = (arg1 + (arg2 != 0));

    temp_s0 *= 0x2A;
    temp_s0 += 0x20;
    func_8005DD14(arg0, 0x10, temp_s0, 0x120, 0x2A, 0xF);
    arg0->unk170 = 0;
    func_8005D8D8(&arg0->unk17C, 0x10, temp_s0, 0x120, 0x2A, 0x23U, 0x23U, 0x23U, 1, 2, 0xD);
    return 1;
}


s32 func_8005DA4C(struct unk_data_1009* arg0, s32 arg1) {
    s16 var_s0;

    for (var_s0 = 0; var_s0 < func_8005CA34(arg0); var_s0++) {
        func_8005DEEC(&arg0->unk300[var_s0], arg1);
    }
    return 1;
}


s32 func_8005DAD0(struct unk_data_1009* arg0) {
    if (func_8005DBA0() != 0) {
        if (arg0->unk8B8 != NULL && (arg0->unk8B8->unk2C == 1)) {
            if (func_80063AE4(arg0->unk8B8->data) == 0) {
                if ((arg0->unk2FC != NULL) && (arg0->unk2FC->unk2C == 1)) {
                    struct unk_data_600 * temp_a0_2 = arg0->unk2FC->data;
                    if (temp_a0_2->unk7900 == 0) {
                        func_8004949C(temp_a0_2);
                    } else {
                        return 0;
                    }
                }
                func_8005D594(arg0, arg0->unkE0C);
                return 1;
            }
        }
    }
    return 0;
}


void func_8005DB90(struct unk_data_1009 * arg0, s16 arg1) {
    arg0->unkE08 = 1;
    arg0->unkE0C = arg1;
}


s32 func_8005DBA0(struct unk_data_1009 * arg0) {
    return arg0->unkE08;
}


void func_8005DBAC(struct unk_data_1009 * arg0, s16 arg1) {
    arg0->unk8CA = arg1;
    arg0->unk8D2 = -1;
}


s32 func_8005DBBC(struct unk_data_1009* arg0) {
    if ((arg0->unk2FC != NULL) && (arg0->unk2FC->unk2C == 1)) {
        return ((struct unk_data_600 *)arg0->unk2FC->data)->unk7900 == 0;
    }
    return 0;
}


struct object * func_8005DBF8(s32 arg0, struct object** arg1) {
    struct object * temp = func_8005B67C(1, 0, 0x900000);
    temp->data->unkE14 = arg1;
    return temp;
}


void func_8005DC34(struct unk_data_1009* arg0) {
    struct object * temp_a0 = *((struct unk_data_1010 *)(*arg0->unkE14)->data)->unk19C;
    
    if ((temp_a0 != NULL) && (temp_a0->unk2C == 1)) {
        func_80049214(temp_a0->data);
    }
}


void func_8005DC98(struct unk_data_1009* arg0) {
    if ((arg0->unk8B8 != NULL) && (arg0->unk8B8->unk2C == 1)) {
        struct unk_data_1011 * temp_s0 = arg0->unk8B8->data;
        func_80062410(temp_s0, 1);
        temp_s0->unk0[0].unk2 = -1;
    }
    arg0->unk8D0 = -1;
}


s32 func_8005DCFC(struct unk_data_1009 * arg0) {
    return arg0->unkE10;
}


void func_8005DD08(struct unk_data_1009 * arg0) {
    arg0->unkE10 = 1;
}


void func_8005DD14(struct not_dialog_box* arg0, s16 x, s16 y, s16 w, s16 h, s32 arg5) {
    arg0->x = x;
    arg0->y = y;
    arg0->w = w;
    arg0->h = h;
    arg0->unk178 = 0;
    arg0->unk170 = 1;
    arg0->unk174 = arg5;
}


void func_8005DD40(struct not_dialog_box* arg0) {
    if (arg0->unk170 != 0) {
        func_800209F0(arg0->x, arg0->y, arg0->w, arg0->h, arg0->unk174, &arg0->p[arg0->unk178], 1);
        arg0->unk178 ^= 1;
    }
}


void func_8005DDC4(struct not_dialog_box* arg0) {
    if (arg0->unk170 != 0) {
        func_800209F0(arg0->x, arg0->y, arg0->w, arg0->h, arg0->unk174, &arg0->p[arg0->unk178], 2);
        arg0->unk178 ^= 1;
    }
}


void func_8005DE48(struct not_dialog_box* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    if (arg0->unk170 != 0) {
        func_800209F0(arg1, arg2, arg3, arg4, arg0->unk174, &arg0->p[arg0->unk178], 1);
        arg0->unk178 ^= 1;
    }
}


s32 func_8005DEE0(struct not_dialog_box * arg0) {
    return arg0->unk170;
}


void func_8005DEEC(struct not_dialog_box * arg0, s32 arg1) {
    arg0->unk170 = arg1;
}


void func_8005DEF4(struct unk_data_1015 * arg0, s32 arg1) {
    arg0->unk508 = arg1;
    arg0->unk50C = 0;
}


void func_8005DF00(struct unk_data_1015* arg0) {
    func_80021AD0(0, 0, arg0->unk508, &arg0->unk0[arg0->unk50C]);
    arg0->unk50C ^= 1;
}


s32 func_8005DF5C(struct unk_data_1016* arg0) {
    if (arg0->unk0 != 0) {
        func_8001B978(&arg0->unk4);
    }
    return arg0->unk0;
}


s32 func_8005DF98(struct unk_data_1012* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_8005DD14(&arg0->unk0, arg1, arg2, arg3, arg4, arg6);
    func_8005D8D8(&arg0->unk17C, arg1, arg2, arg3, arg4, 0x23, 0x23, 0x23, 1, 2, arg7);
    arg0->unk1E4 = arg5;
    return 1;
}


void func_8005E06C(struct unk_data_1012 * arg0) {
    func_8005DDC4(&arg0->unk0);
    if (arg0->unk1E4 != 0) {
        func_8001AC38(&arg0->unk17C);
    }
}


void func_8005E0A8(struct not_dialog_box* arg0) {
    if (arg0->unk170 != 0) {
        func_800209F0(arg0->x, arg0->y, arg0->w, arg0->h, arg0->ot_index, &arg0->p[arg0->buffer], 3);
        arg0->buffer ^= 1;
    }
}


void func_8005E12C(struct unk_data_1009* arg0) {
    struct unk_data_1011 * temp_s1;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D684(arg0, 4);
        arg0->unk2F0 = 1;
        arg0->unk8D2 = -1;
        if ((arg0->unk8B8 == NULL) || (arg0->unk8B8->unk2C != 1)) {
            arg0->unk8B8 = func_80060EA4(0, func_8005D4E8(arg0), arg0->unk8CC);
        }
        arg0->unk8E4 = -1;
        return;
    case 1:
        temp_s1 = arg0->unk8B8->data;
        if (temp_s1->unk0[0].unk4 >= 2U) {
            func_8005D1C4(arg0, temp_s1->unk0[0].unk2);
        }
        if (func_80062388(temp_s1, 5) != 0) {
            if ((func_80063D88(temp_s1) != 0) && (func_8006194C(temp_s1) == 0)) {
                switch (temp_s1->unk1A0) {
                case 0:
                    func_8005D1C4(arg0, 0x13);
                    func_8005D594(arg0, 1);
                    return;
                case 1:
                    func_8005D1C4(arg0, 8);
                    func_8005D594(arg0, 1);
                    return;
                default:
                    break;
                }
            }
            func_8005D184(arg0);
            if (func_800629A0(temp_s1) != 0) {
                arg0->unk8E4 = 2;
                func_8005DC98(arg0);
                return;
            } else if (func_800629AC(temp_s1) != 0) {
                arg0->unk8E4 = 1;
                func_8005DC98(arg0);
                return;
            } else {
                arg0->unk8E4 = 0;
            }
            func_8005DC98(arg0);
            return;
        }
        if (func_80062388(temp_s1, 6) != 0) {
            if (arg0->unk8D0 == 0xE) {
                func_8005D184(arg0);
                arg0->unk8E4 = 0;
                func_8005DC98(arg0);
            } else if (temp_s1->unk0[0].unk2 == 0x1E) {
                func_8005D184(arg0);
                arg0->unk8E4 = -1;
                func_8006174C(temp_s1);
            } else if (func_80063D88(temp_s1) != 0) {
                func_8005D594(arg0, 1);
                func_8005D1C4(arg0, temp_s1->unk0[0].unk2);
            } else {
                func_8005D184(arg0);
                if (arg0->unk8D0 != 0x12) {
                    if (arg0->unk8D0 != 0x14) {
                        if (arg0->unk8D0 != -1) {
                            arg0->unk8E4 = -1;
                            func_8005DC98(arg0);
                            return;
                        }
                    }
                }
                func_80062410(temp_s1, 1);
            }
        }
        break;
    }
}


void func_8005E398(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        arg0->unk2F0 = 1;
        func_8005D5E4(arg0);
        return;
    case 1:
        func_8005DC98(arg0);
        func_8005D184(arg0);
        if (arg0->unk8E4 == -1) {
            arg0->unk8E4 = 0;
        }
        func_8005D83C(arg0, 0);
        func_8005D594(arg0, 0);
        arg0->unk8CA = 1;
        return;
    }
}


void func_8005E43C(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 4, -1, 0, 0);
        if ((arg0->unk8B8 == NULL) || (arg0->unk8B8->unk2C != 1)) {
            arg0->unk8B8 = func_80060EA4(0, func_8005D4E8(arg0), arg0->unk8CC);
        }
    case 1:
        temp_s0 = arg0->unk8B8->data;
        func_8005D684(arg0, temp_s0->unk0[0].unk2);
        if (func_80062388(temp_s0, 5) != 0) {
            if ((func_8006194C(temp_s0) == 0) && (func_80063E1C(temp_s0) == 0)) {
                func_8005D684(arg0, 0x13);
                func_8005D594(arg0, 0xF);
                func_8005DB90(arg0, 0xC);
            } else {
                func_80062410(temp_s0, 0);
                func_8005D594(arg0, 1);
            }
        } else if ((func_80062370(temp_s0, 6) != 0) && (arg0->unk8D0 == 0xE)) {
            func_80062410(temp_s0, 0);
            func_8005D594(arg0, 2);
        } else if (func_80062388(temp_s0, 6) != 0) {
            if (temp_s0->unk0[0].unk2 == 0x1F) {
                func_8005D684(arg0, 0x17);
            } else {
                func_8005D594(arg0, 8);
            }
        }
    }
}


void func_8005E5F8(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;
    struct unk_data_1011* temp_s0_2;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        temp_s0 = ((struct unk_data_1011 *)arg0->unk8B8->data);
        func_8005D1F4(arg0, 4, -1, 0, 0);
        temp_s0->unk0[0].unk6 = 0;
    case 1:
        temp_s0_2 = ((struct unk_data_1011 *)arg0->unk8B8->data);
        if (func_80062230(temp_s0_2) != 0) {
            if (temp_s0_2->unk0[0].unk2 == 0x14) {
                func_8005D594(arg0, 12);
                return;
            } else {
                temp_s0_2->unk0[0].unk6 += 1;
            }
        }
        if (temp_s0_2->unk0[0].unk6 >= temp_s0_2->unk19E) {
            temp_s0_2->unk0[0].unk6 = D_800B74A0;
            func_8005D594(arg0, 3);
        }
    }
}


void func_8005E6E0(struct unk_data_1009* arg0) {
    s32 temp_v0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, arg0->unk8D0, 1, 0, 1);
    case 1:
        if (func_80063AE4(arg0->unk8B8->data) == 0) {
            func_8005D594(arg0, 12);
            return;
        }
        if (arg0->unk8D4 == 3) {
            func_8005D684(arg0, 7);
            func_8005DBAC(arg0, 3);
        } else if (arg0->unk8D4 == 1) {
            func_8005D594(arg0, 15);
        } else if (arg0->unk8D4 == 2) {
            func_8005D594(arg0, 13);
        }
        break;
    case 3:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005DBAC(arg0, 4);
        }
        break;
    case 4:
        func_8005DBAC(arg0, 5);
        return;
    case 5:
        temp_v0 = func_80061F34(arg0->unk8B8->data);
        if (temp_v0 == 0) {
            func_8005D594(arg0, 3);
        } else if (temp_v0 == 1) {
            func_8005D684(arg0, 0x14);
            func_8005D594(arg0, 12);
        } else {
            func_8005D684(arg0, 0x1B);
            func_8005D594(arg0, 8);
        }
    }
}


void func_8005E870(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 0, 0, 1, 0);
    case 1:
        func_8005D684(arg0, 0);
        if (func_80063AE4(arg0->unk8B8->data) == 0) {
            func_8005D594(arg0, 12);
            return;
        }
        
        if (arg0->unk8D4 == 3) {
            struct unk_data_1011 * temp_s0 = arg0->unk8B8->data;
            if (func_80062454(temp_s0) != 0) {
                func_8005D594(arg0, 4);
            } else {
                if (func_80063E54(temp_s0) == 0) {
                    func_8003FFE4(5);
                    func_8005D684(arg0, 0x19);
                    func_8005DB90(arg0, 0xC);
                    return;
                }
                if ((func_80063E60(temp_s0) == 0) && (temp_s0->unk1A0 == 1)) {
                    func_8005DBAC(arg0, 4);
                } else {
                    func_8005DBAC(arg0, 3);
                }
            }
            func_8003FFE4(2);
        } else if (arg0->unk8D4 == 1) {
            func_8005D594(arg0, 15);
        } else if (arg0->unk8D4 == 2) {
            func_8005D594(arg0, 13);
        }
        break;
    case 3:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005D594(arg0, 6);
        }
        break;
    case 4:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005D594(arg0, 5);
        }
        break;
    }
}


void func_8005EA58(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 9, 1, 1, 1);
    case 1:
        if (func_80063AE4(arg0->unk8B8->data) == 0) {
            func_8005D594(arg0, 12);
        } else if (arg0->unk8D4 == 3) {
            func_8005DBAC(arg0, 2);
        } else if (arg0->unk8D4 == 1) {
            func_8005D594(arg0, 3);
        } else if (arg0->unk8D4 == 2) {
            func_8005D594(arg0, 13);
        }
        break;
    case 2:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005D594(arg0, 7);
        }
        break;
    }
}


void func_8005EB64(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 0x10, 1, 1, 1);
    case 1:
        if (func_80063AE4(arg0->unk8B8->data) != 0) {
            if (arg0->unk8D4 == 3) {
                func_8005DBAC(arg0, 2);
            } else if (arg0->unk8D4 == 1) {
                func_8005D594(arg0, 3);
            } else if (arg0->unk8D4 == 2) {
                func_8005D594(arg0, 13);
            }
        } else {
            func_8005D594(arg0, 12);
        }
        break;
    case 2:
        temp_s0 = arg0->unk8B8->data;
        if (func_80062370(temp_s0, 0) != 0) {
            func_8005D594(arg0, 6);
        } else if (func_80062388(temp_s0, 5) != 0) {
            func_8005D594(arg0, 6);
        } else if (func_80062388(temp_s0, 6) != 0) {
            func_8005D594(arg0, 12);
        }
        break;
    }
}


void func_8005ECB4(struct unk_data_1009* arg0) {
    s32 temp_v0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
    case 1:
        temp_v0 = func_80061D58(arg0->unk8B8->data);
        if (temp_v0 == 0) {
            func_8005D594(arg0, 7);
        } else if (temp_v0 == 1) {
            func_8005D594(arg0, 12);
        } else {
            func_8005D594(arg0, 8);
        }
        return;
    }
}


void func_8005ED44(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;
    struct unk_data_1010* temp_s0_2;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 5, -1, 1, 0);
        func_80061D08(arg0->unk8B8->data);
    case 1:
        temp_s0 = arg0->unk8B8->data;
        func_8005D684(arg0, temp_s0->unk2);
        if (func_80062388(temp_s0, 5) != 0) {
            memcpy(&temp_s0->unk8[temp_s0->unk6], &temp_s0->unk148, 0x50);
            func_80063C44(temp_s0, temp_s0->unk6, 1);
            if (arg0->unkE00 != 0) {
                func_8005D594(arg0, 14);
                return;
            }
            func_8005DD08(arg0);
            if (arg0->unkE14 == NULL) {
                arg0->unkE1C = 1;
                arg0->unkE14 = &arg0->unkE18;
            }
            *arg0->unkE14 = func_80063EA8(func_8004B7D8(7, 2), 0x15, 0x15, 0x70000);
            RemoveObject(arg0->unk2FC);
            arg0->unk2FC = NULL;
            func_8005DBAC(arg0, 4);
            arg0->unk8D0 = 2;
            return;
        }
        if (func_80062370(temp_s0, 6) != 0) {
            if (arg0->unk8D0 == 0xE) {
                func_80062410(temp_s0, 0);
                func_8005D594(arg0, 2);
                return;
            }
        }
        if (func_80062388(temp_s0, 6) != 0) {
            if (arg0->unk8D0 == 23) {
                func_8005DA4C(arg0, 0);
                func_8005D594(arg0, 8);
            } else if (arg0->unk8D0 == 20) {
                func_8005DA4C(arg0, 0);
                func_8005D594(arg0, 12);
            } else if (arg0->unk8D0 == 30) {
                func_8005D594(arg0, 8);
            } else {
                func_8005D594(arg0, 8);
            }
        }
    default:
        return;
    case 4:
        if (func_8005BAE0() != 0) {
            func_8005BDA0();
            func_8005DBAC(arg0, 3);
        } else return;
    case 3:
        func_8005DC34(arg0);
        func_8005DBAC(arg0, 5);
    case 5:
        temp_s0_2 = (*arg0->unkE14)->data;
        if (func_8006425C(temp_s0_2) != 0) {
            RemoveObject(temp_s0_2->unk4);
            temp_s0_2->unk4 = NULL;
            temp_s0_2->unk19C = &arg0->unk2FC;
            func_8005D594(arg0, 9);
        }
        break;
    }
}


void func_8005F024(struct unk_data_1009* arg0) {
    s32 sp10;
    struct unk_data_1009* temp_s0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        temp_s0 = arg0->unk8B8->data;
        func_8005DA4C(arg0, 0);
        func_80062410(temp_s0, 1);
    case 1:
        sp10 = 0;
        if (func_80063B74(arg0->unk8B8->data, &sp10) != 0) {
            if (sp10 == 0) {
                func_8005D594(arg0, 0);
            } else {
                func_8005D594(arg0, 15);
            }
        }
    }
}


void func_8005F0D8(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 2, 2, 1, 0);
        break;
    case 1:
        func_8005DC34(arg0);
        func_8005DBAC(arg0, 2);
        break;
    case 2:
        if (func_8006425C((*arg0->unkE14)->data) != 0) {
            func_8005D594(arg0, 0xA);
        }
    }
}


void func_8005F19C(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 15, 1, 1, 1);
    case 1:
        if (arg0->unk8D4 == 3) {
            func_8005DC34(arg0);
            func_8005DBAC(arg0, 3);
        } else if (arg0->unk8D4 == 1) {
            func_8005DC34(arg0);
            func_8005DBAC(arg0, 4);
        } else if (arg0->unk8D4 == 2) {
            func_8005D594(arg0, 13);
        }
        break;
    case 3:
        if (func_8006425C((*arg0->unkE14)->data) != 0) {
            func_8005D594(arg0, 14);
        }
        break;
    case 4:
        if (func_8006425C((*arg0->unkE14)->data) != 0) {
            func_8005D594(arg0, 11);
        }
    }
}


void func_8005F2D4(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 3, 2, 1, 0);
        break;
    case 1:
        func_800145CC(0);
        func_8005DBAC(arg0, 2);
    case 2:
        break;
    }
}


void func_8005F344(struct unk_data_1009* arg0) {
    if (arg0->unk8CA == 0) {
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 0x14, 2, 0, 0);
    } else {
        func_8005D594(arg0, 8);
    }
}


void func_8005F394(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 0x11, 1, 0, 1);
        return;
    case 1:
        if (arg0->unk8D4 == 3) {
            func_8005D594(arg0, 1);
        } else if (arg0->unk8D4 == 1) {
            func_8005D594(arg0, 13);
        } else if (arg0->unk8D4 == 2) {
            func_8005D594(arg0, 11);
        }
    }
}


void func_8005F42C(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 4, -1, 0, 0);
        if ((arg0->unk8B8 == NULL) || (arg0->unk8B8->unk2C != 1)) {
            arg0->unk8B8 = func_80060EA4(0, func_8005D4E8(arg0), arg0->unk8CC);
        }
    case 1:
        temp_s0 = arg0->unk8B8->data;
        func_8005D684(arg0, temp_s0->unk2);
        if (func_80062388(temp_s0, 5) != 0) {
            func_80062410(temp_s0, 0);
            if ((func_8006194C(temp_s0) == 0) && (func_80063E1C(temp_s0) == 0)) {
                func_8005D684(arg0, 0x13);
                func_8005D594(arg0, 0xD);
                func_8005DB90(arg0, 0xA);
            } else {
                func_8005D594(arg0, 2);
            }
        } else {
            if (func_80062370(temp_s0, 6) != 0) {
                if (arg0->unk8D0 == 0xE) {
                    func_80062410(temp_s0, 0);
                    func_8005D594(arg0, 3);
                    return;
                }
            }
            if (func_80062388(temp_s0, 6) != 0) {
                if (temp_s0->unk2 == 0x1F) {
                    func_8005D684(arg0, 0x17);
                } else {
                    func_8005D594(arg0, 8);
                }
            }
        }
    }
}


void func_8005F5E0(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;
    struct unk_data_1011* temp_s0_2;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        temp_s0 = arg0->unk8B8->data;
        func_8005D1F4(arg0, 4, -1, 0, 0);
        temp_s0->unk6 = 0;
    case 1:
        temp_s0_2 = arg0->unk8B8->data;
        if (func_80062230(temp_s0_2) != 0) {
            if (temp_s0_2->unk2 == 0x14) {
                func_8005D594(arg0, 10);
                return;
            }
            temp_s0_2->unk6 += 1;
        }
        if (temp_s0_2->unk6 >= temp_s0_2->unk19E) {
            temp_s0_2->unk6 = 0;
            if (func_8006194C(temp_s0_2) != 0) {
                func_8005D594(arg0, 4);
            } else if (func_80063D88(temp_s0_2) != 0) {
                func_8005D594(arg0, 6);
            } else {
                func_8005D594(arg0, 5);
            }
        }
    }
}


void func_8005F6F4(struct unk_data_1009* arg0) {
    s32 temp_v0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, arg0->unk8D0, 1, 0, 1);
    case 1:
        if (func_80063AE4(arg0->unk8B8->data) == 0) {
            func_8005D594(arg0, 10);
        } else {
            if (arg0->unk8D4 == 3) {
                func_8005D684(arg0, 7);
                func_8005DBAC(arg0, 3);
            } else if (arg0->unk8D4 == 1) {
                func_8005D594(arg0, 13);
            } else if (arg0->unk8D4 == 2) {
                func_8005D594(arg0, 11);
            }
        }
        break;
    case 3:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005DBAC(arg0, 4);
        }
        break;
    case 4:
        func_8005DBAC(arg0, 5);
        break;
    case 5:
        temp_v0 = func_80061F34(arg0->unk8B8->data);
        if (temp_v0 == 0) {
            func_8005D594(arg0, 6);
        } else if (temp_v0 == 1) {
            func_8005D684(arg0, 0x14);
            func_8005D594(arg0, 10);
        } else {
            func_8005D684(arg0, 0x1B);
            func_8005D594(arg0, 8);
        }
    }
}


void func_8005F884(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 0xB, 1, 1, 1);
    case 1:
        if (func_80063AE4(arg0->unk8B8->data) == 0) {
            func_8005D594(arg0, 10);
        } else {
            if (arg0->unk8D4 == 3) {
                func_8005DBAC(arg0, 2);
            } else if (arg0->unk8D4 == 1) {
                func_8005D594(arg0, 13);
            } else if (arg0->unk8D4 == 2) {
                func_8005D594(arg0, 11);
            }
        }
        break;
    case 2:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005D594(arg0, 7);
        }
    }
}


void func_8005F990(struct unk_data_1009* arg0) {
    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        func_8005D1F4(arg0, 0x11, 1, 0, 1);
    case 1:
        if (func_80063AE4(arg0->unk8B8->data) == 0) {
            func_8005D594(arg0, 10);
        } else {
            if (arg0->unk8D4 == 3) {
                func_8005DBAC(arg0, 2);
            } else if (arg0->unk8D4 == 1) {
                func_8005D594(arg0, 13);
            } else if (arg0->unk8D4 == 2) {
                func_8005D594(arg0, 11);
            }
        }
        break;
    case 2:
        if (func_80063C70(arg0->unk8B8->data) != 0) {
            func_8005D594(arg0, 6);
        }
    }
}


void func_8005FA9C(struct unk_data_1009* arg0) {
    s32 temp_v0;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
    case 1:
        temp_v0 = func_80061D58(arg0->unk8B8->data);
        if (temp_v0 == 0) {
            func_8005D594(arg0, 7);
        } else if (temp_v0 == 1) {
            func_8005D594(arg0, 10);
        } else {
            func_8005D594(arg0, 8);
        }
    }
}


void func_8005FB2C(struct unk_data_1009* arg0) {
    struct unk_data_1011* temp_s0;
    struct unk_data_1011* temp_s0_2;

    switch (arg0->unk8CA) {
    case 0:
        arg0->unk8CA = 1;
        temp_s0 = arg0->unk8B8->data;
        func_8005D1F4(arg0, 5, -1, func_80062454(temp_s0), 0);
        func_80061D08(temp_s0);
    case 1:
        temp_s0_2 = arg0->unk8B8->data;
        func_8005D684(arg0, temp_s0_2->unk2);
        if (func_80062388(temp_s0_2, 5) != 0) {
            memcpy(&temp_s0_2->unk8[temp_s0_2->unk6], &temp_s0_2->unk148, 0x50);
            func_80063C44(temp_s0_2, temp_s0_2->unk6, 1);
            func_8005D594(arg0, 9);
            return;
        } else if (func_80062370(temp_s0_2, 6) != 0) {
            if (arg0->unk8D0 == 0xE) {
                func_80062410(temp_s0_2, 0);
                func_8005D594(arg0, 3);
                return;
            }
        }
        if (func_80062388(temp_s0_2, 6) != 0) {
            if (arg0->unk8D0 == 0x17) {
                func_8005DA4C(arg0, 0);
                func_8005D594(arg0, 8);
            } else if (arg0->unk8D0 == 0x14) {
                func_8005DA4C(arg0, 0);
                func_8005D594(arg0, 10);
            } else {
                func_8005D594(arg0, 8);
            }
        }
        return;
    }
}


INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005FCE8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005FDA8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005FE8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8005FEF4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060070);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060158);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800602DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060404);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060578);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060628);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800606C8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006072C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800608D0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060A10);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060B38);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060C8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060D3C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060DA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060E14);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060E5C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060EA4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80060FDC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061048);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006107C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800610AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800616CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061714);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006174C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006177C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006181C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006194C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800619CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061A0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061B1C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061B3C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061D08);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061D58);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061DE0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061E28);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061EC8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061EF4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061F34);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061F88);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80061FE0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062070);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006209C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062180);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800621E4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062230);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062318);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062348);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062370);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062388);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800623E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062410);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062430);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062454);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062478);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006249C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062780);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062878);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062950);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800629A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800629AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062A00);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062AB0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062C9C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80062E44);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800636FC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800637E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800638E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800639CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063A2C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063A80);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063AE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063B74);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063C44);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063C64);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063C70);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063CE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063D14);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063D58);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063D88);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063D94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063E1C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063E54);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063E60);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063E6C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063EA8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80063F98);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064068);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800640AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800640F8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064108);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064150);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064158);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064164);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064178);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800641AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800641DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064238);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006425C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800642A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064344);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800643B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064430);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800644A8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800644C8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064570);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064684);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064774);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800647A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800647DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800647F8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064828);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064864);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064898);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800648E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064994);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064B5C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064C1C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064C50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064C64);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064C78);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064CD4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064D98);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064DD8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064EF4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80064F50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006502C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065090);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800650C0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065104);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065194);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800651D0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065240);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006527C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800652A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800652AC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800652E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006530C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065318);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065354);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065378);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065384);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800653C0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800653E4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800653F0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006542C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065450);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006545C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800656D8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800658E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065924);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800659CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065A54);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065BE0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065C18);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065C78);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065CB0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065D08);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065D68);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065D94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065DD0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065DF8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065EA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065F38);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80065FE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80066528);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800667A0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80066A00);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80066A2C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006710C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067148);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067248);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067414);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067424);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067478);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006771C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067C1C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067C64);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067CC4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067D6C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067E0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067E94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067F98);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80067FCC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006808C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068228);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068238);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800682E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068428);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800684E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068510);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068574);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800687FC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068B8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068CA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80068D10);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069140);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069460);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800695F8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069608);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006966C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800696CC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_800696EC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069900);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069928);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069B88);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069B94);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BAC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BB8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BD8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BF0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069BFC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069C2C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069CB0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069CEC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069D50);

void func_80069D98(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069DA0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069DBC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069DE4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069E0C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069E7C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_80069F3C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A1D4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A26C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A368);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A4EC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A4F8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A504);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A54C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A584);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A5BC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A5E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A638);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006A8DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006AC74);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006ADA8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006AF20);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006AF50);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B00C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B0E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B2E8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B53C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B594);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B6D0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B714);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B724);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B734);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B740);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B7A4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B7D4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B834);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B8B0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B91C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B93C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B960);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006B9E0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006BA58);

void func_8006BAB4(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006BABC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006BB58);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006C4DC);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006C570);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006C968);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006CBE8);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006CCF4);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D4F0);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D73C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D770);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006D800);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DB6C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DB8C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DC4C);

INCLUDE_ASM("asm/smt1/main/nonmatchings/unk6", func_8006DD00);
