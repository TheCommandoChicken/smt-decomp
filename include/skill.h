#include "common.h"

#ifndef _SKILL_H_
#define _SKILL_H_

struct skill_params {
    s32 user;
    s32 target;
    s32 arg2;
    s32 arg3;
    s32 arg4;
    s32 arg5;
    s32 arg6;
    s32 arg7;
    s32 arg8;
    s32 arg9;
};

enum skills {
    // Magic skills
    SKILL_AGI = 0,
    SKILL_AGILAO = 1,
    SKILL_MARAGI = 2,
    SKILL_MARAGION = 3,
    SKILL_BUFU = 4,
    SKILL_BUFULA = 5,
    SKILL_MABUFU = 6,
    SKILL_MABUFULA = 7,
    SKILL_ZIO = 8,
    SKILL_ZIONGA = 9,
    SKILL_MAZIO = 10,
    SKILL_MAZIONGA = 11,
    SKILL_ZAN = 12,
    SKILL_ZANMA = 13,
    SKILL_MAZAN = 14,
    SKILL_MAZANMA = 15,
    SKILL_TENTARAFOO = 16,
    SKILL_RIMDORA = 17,
    SKILL_MEGIDO = 18,
    SKILL_MEGIDOLAON = 19, // Unused
    SKILL_MATRAPORT = 20, // Unused?
    SKILL_HAMA = 21,
    SKILL_MAHAMA = 22,
    SKILL_MUDO = 23,
    SKILL_MUDOON = 24,
    SKILL_DORMINA = 25, 
    SKILL_SHIBABOO = 26,
    SKILL_PULINPA = 27,
    SKILL_HAPIRMA = 28,
    SKILL_MARIN_KARIN = 29,
    SKILL_MAKAJAMA = 30,
    SKILL_MAKATRANDA = 31,
    SKILL_TARUNDA = 32,
    SKILL_RAKUNDA = 33,
    SKILL_SUKUNDA = 34,
    SKILL_TARUKAJA = 35,
    SKILL_RAKUKAJA = 36,
    SKILL_SUKUKAJA = 37,
    SKILL_MAKAKAJA = 38,
    SKILL_TETRAJA = 39,
    SKILL_MAKARAKARN = 40,
    SKILL_TETRAKARN = 41,
    SKILL_DIA = 42,
    SKILL_DIARAMA = 43,
    SKILL_DIARAHAN = 44,
    SKILL_MEDIA = 45,
    SKILL_MEDIARAHAN = 46,
    SKILL_PATRA = 47,
    SKILL_PENPATRA = 48,
    SKILL_POSMUDI = 49,
    SKILL_PARALADI = 50,
    SKILL_PETRADI = 51,
    SKILL_RECARM = 52,
    SKILL_SAMARECARM = 53,
    SKILL_RECARMDRA = 54,
    SKILL_MAKATORA = 55,
    SKILL_MAPPER = 56,
    SKILL_TRAESTO = 57,
    SKILL_TRAPORT = 58,
    SKILL_TRAFURI = 59,
    SKILL_ESTOMA = 60,
    SKILL_SABATOMA = 61,
    SKILL_SABATOMAON = 62, // Unused
    SKILL_NECROMAN = 63, // Unused
    // Extra skills
    SKILL_PARAL_EYES = 64,
    SKILL_PETRA_EYES = 65,
    SKILL_DEATH_ROAD = 66,
    SKILL_BLOOD_THIEF = 67,
    SKILL_BAELS_CURSE = 68,
    SKILL_SEXY_DANCE = 69,
    SKILL_HAPPY_STEP = 70,
    SKILL_JOY_SONG = 71,
    SKILL_LULLABY = 72,
    SKILL_PANIC_VOICE = 73,
    SKILL_BIND_VOICE = 74,
    SKILL_DEVILS_KISS_ALT = 75,
    SKILL_DEVILS_KISS = 76,
    SKILL_EVIL_SMILE = 77,
    SKILL_FIRE_BREATH = 78,
    SKILL_ICE_BREATH = 79,
    SKILL_VENOM_BREATH = 80,
    SKILL_FOG_BREATH = 81,
    SKILL_FIREBALL = 82,
    SKILL_SHOCK = 83,
    SKILL_DEATHTOUCH = 84,
    SKILL_WATER_WALL = 85,
    SKILL_FIRE_WALL = 86,
    SKILL_FERAL_BITE = 87,
    SKILL_VENOM_BITE = 88,
    SKILL_STUN_BITE = 89,
    SKILL_PETRA_BITE = 90, // Unused?
    SKILL_CHARM_BITE = 91,
    SKILL_FERAL_CLAW = 92,
    SKILL_VENOM_CLAW = 93,
    SKILL_STUN_CLAW = 94,
    SKILL_POISON_NEEDLE = 95,
    SKILL_STUN_NEEDLE = 96,
    SKILL_WING_FLAP = 97,
    SKILL_NEEDLE_RUSH = 98,
    SKILL_TACKLE = 99,
    SKILL_RAZOR_WIRE = 100,
    SKILL_BERSERK = 101,
    SKILL_SQUASH = 102,
    SKILL_DEADLY_HIT = 103,
    SKILL_TAIL = 104,
    SKILL_CRITICAL = 105,
    SKILL_106 = 106,
    SKILL_107 = 107,
    SKILL_108 = 108,
    SKILL_109 = 109,
    SKILL_110 = 110,
    SKILL_111 = 111,
    SKILL_112 = 112,
    SKILL_113 = 113,
    SKILL_114 = 114,
    SKILL_GUARD = 115, // Enemy only
    SKILL_ESCAPE = 116, // Enemy only
    SKILL_CALL_ALLY = 117, // Enemy only
    SKILL_NONE = 255
};

extern s32 func_80050BA8(struct skill_params * arg0, s32 arg1);
void func_80050C48(struct skill_params* arg0, s32 arg1);
void func_800507D8(struct skill_params *);
void func_8005088C(struct skill_params *);
void func_800508DC(struct skill_params *);
void func_8005092C(struct skill_params *);
void func_8005097C(struct skill_params *);
void func_800509B4(struct skill_params *);
void func_800509EC(struct skill_params *);
void func_80050A24(struct skill_params *);
void func_80050AEC(struct skill_params *);
void func_80050B10(struct skill_params *);
void func_80050B34(struct skill_params *);
void func_80050CD8(struct skill_params *);
void func_80050CF8(struct skill_params *);
void func_80050D18(struct skill_params *);
void func_80050E5C(struct skill_params *);
void func_80050E7C(struct skill_params *);
void func_80050F34(struct skill_params *);
void func_80050FB4(struct skill_params *);
void func_80050F54(struct skill_params *);
void func_80050F74(struct skill_params *);
void func_80050F94(struct skill_params *);
void func_800510CC(struct skill_params *);
void func_80051194(struct skill_params *);
void func_800512A4(struct skill_params *);
void func_80051448(struct skill_params *);
void func_800514D0(struct skill_params *);
void func_80051524(struct skill_params *);
void func_800515F4(struct skill_params *);
void func_800516E0(struct skill_params *);
void func_80051728(struct skill_params *);
void func_80051770(struct skill_params *);
void func_80051778(struct skill_params *);
void func_80051780(struct skill_params *);
void func_80051788(struct skill_params *);
void func_80051974(struct skill_params *);
void func_80051998(struct skill_params *);
void func_80051A00(struct skill_params *);
void func_80051A24(struct skill_params *);
void func_80051A48(struct skill_params *);
void func_80051A6C(struct skill_params *);
void func_80051AC0(struct skill_params *);

void (* D_800ACC64[10])(struct skill_params *) = {
    func_80051788,
    func_80051788,
    func_80051788,
    func_80051974,
    func_80051998,
    func_80051A00,
    func_80051A24,
    func_80051A48,
    func_80051A6C,
    func_80051AC0
};

void (* D_800ACC8C[33])(struct skill_params *) = {
    func_800507D8,
    func_8005088C,
    func_800508DC,
    func_8005092C,
    func_8005097C,
    func_800509B4,
    func_800509EC,
    func_80050A24,
    func_80050AEC,
    func_80050B10,
    func_80050B34,
    func_80050CD8,
    func_80050CF8,
    func_80050D18,
    func_80050E5C,
    func_80050E7C,
    func_80050F34,
    func_80050FB4,
    func_80050F54,
    func_80050F74,
    func_80050F94,
    func_800510CC,
    func_80051194,
    func_800512A4,
    func_80051448,
    func_800514D0,
    func_80051524,
    func_800515F4,
    func_800516E0,
    func_80051728,
    func_80051770,
    func_80051778,
    func_80051780
};

#endif