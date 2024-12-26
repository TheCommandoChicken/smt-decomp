#include "com.h"

typedef struct smt_armorData smt_armorData;

struct smt_armorData 
{
    uint8 chaos_can_use : 1;
    uint8 neutral_can_use : 1;
    uint8 law_can_use : 1;
    uint8 : 3;
    uint8 female_can_use : 1;
    uint8 male_can_use : 1;
    uint8 defense;
    uint8 evasion;
    uint8 unknown1;
    uint8 intelligence_mod : 4;
    uint8 strength_mod : 4;
    uint8 stamina_mod : 4;
    uint8 magic_mod : 4;
    uint8 luck_mod : 4;
    uint8 speed_mod : 4;
    uint8 unknown2;
    uint16 happy:1;
    uint16 panic:1;
    uint16 close:1;
    uint16 shock:1;
    uint16 freeze:1;
    uint16 bind:1;
    uint16 sleep:1;
    uint16 charm:1;
    uint16 frog:1;
    uint16 fly:1;
    uint16 poison:1;
    uint16 paralyze:1;
    uint16 stone:1;
    uint16 dying:1;
    uint16 dead:1;
    uint8 unknown3;
    uint8 unknown4;
};

