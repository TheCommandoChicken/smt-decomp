#include "com.h"
#include "align.h"
#include "stats.h"

typedef struct smt_character smt_character, * psmt_character;


struct smt_character
{
	int exp;
	uint8 slot;
	uint16 party_flags : 8;
	uint16 status;
	uint16 id;
	uint16 gender;
	uint16 hp;
	uint16 max_hp;
	uint16 mp;
	uint16 max_mp;
	uint8 level;
	uint8 sword;
	uint8 gun;
	uint8 helmet;
	uint8 armor;
	uint8 glove;
	uint8 leg;
	uint8 bullets;
	smt_stats base_stats;
	smt_stats stats;
	uint16 melee_attack;
	uint16 melee_accuracy;
	uint16 gun_attack;
	uint16 gun_accuracy;
	uint16 defense;
	uint16 evasion;
	uint16 magic_power;
	uint16 magic_effect;
	uint16 alignment : 8;
};

smt_alignment smt_changeAlignment(int character, int amount) {};

smt_alignment smt_getAlignment(int character) {};

uint16 smt_changeHp(int character, int16 amount) {};

uint16 smt_changeHpAndEnforceMax(int character) {};

uint16 smt_changeMp(int character, int16 amount) {};

uint8 smt_changeStat(int character, smt_stat stat, int8 amount) {};