#include "com.h"


typedef enum smt_eventFlag smt_eventFlag;
typedef struct smt_eventFlags smt_eventFlags;


enum smt_eventFlag
{
	AUTOMAP_UNLOCKED = 0x00,
	ANALYSIS_UNLOCKED = 0x01,
	COMP_UNLOCKED = 0x02,
	WALKED_DOWN_HALLWAY = 0x03, // Unclear purpose but it gets set when you cross the tile on the left outside the living room in the MC's house.
	GONE_TO_SLEEP = 0x04, // Prevents you from going back to sleep immediately. Unset after leaving the living room.
	MOM_GAVE_MONEY = 0x07,
	WITNESSED_MURDER = 0x0A,
	IN_CAFE = 0x0C, // Once again the purpose of this flag isn't clear, but it gets set when you're inside the cafe and unset when you exit it. It might just be used to change the dialog at the entrance?
	LAW_HERO_JOINED = 0x10,
	LAW_HERO_TALKED_TO = 0x11,
	HOSPITAL_CELL_UNLOCKED = 0x12,
	TALKED_TO_STEPHEN = 0x13, // Specifically in the hospital.
	DEFEATED_ORIAS = 0x14,
	CHAOS_HERO_JOINED = 0x15,
	GOT_COFFEE = 0x17, // This flag is set but doesn't actually affect progression.
	DEFEATED_AMANO_SAKUGAMI = 0x18,
	PASCAL_JOINED = 0x19,
	DEFEATED_DOUMAN = 0x1A,
	FUSED_PASCAL = 0x1B,
	PASCAL_TELEPORTED = 0x1C,
	MET_YURIKO_KICHIJOJI = 0x21,
	MET_YURIKO_SHINJUKU = 0x22,
	DEFEATED_OZAWA = 0x24,
	RESCUED_HEROINE = 0x27,
	HEROINE_ABDUCTED = 0x28,
	JOINED_GOTOU = 0x2A,
	DEFEATED_GOTOU = 0x2B,
	JOINED_THOR = 0x2E,
	TOKYO_DESTROYED = 0x2F,
	LAW_HERO_VAJRADHATU = 0x31,
	CHAOS_HERO_VAJRADHATU = 0x32,
	IN_VAJRADHATU = 0x34, // Set when in Vajradhatu, unset upon leaving.
	DEFEATED_TAKEMINEKATA = 0x47,
	DONATED_TO_MESSIAN_CHURCH = 0x51,
	DEFEATED_ARACHNE = 0x53,
	CHURCH_FINISHED = 0x55,
	TRAPPED_BELIAL = 0x56,
	DEFEATED_NEBIROS = 0x57,
	TOKYO_FLOODED = 0x9E,
	SAVED_OCTOPUS = 0xA6,
	DEFEATED_MICHAEL = 0xB6,
	DEFEATED_ASURA = 0xC7,
	DEFEATED_THOR = 0xE5,
	MISSILE_STRIKE_HAPPENING = 0xE6,
	CURRENCY_CHANGED = 0xEC, // Affects whether the symbol for yen or macca is used.
	COMP_UPGRADE_1 = 0xED,
	COMP_UPGRADE_2 = 0xEE,
	COMP_UPGRADE_3 = 0xEF,
	DIFFICULTY = 0xF8,
	ABOUT_TO_HEAR_HEROINE = 0xF9, // If 1 then you will hear the Heroine calling for help after moving on the map screen.
	ALIGNMENT_LOCKED = 0xFB, // Prevents your alignment from changing.
	PRE_INVASION = 0xFF // Prevents random encounters in certain areas while set. Does not block random encounters in most areas.
};


struct smt_eventFlags
{
	uint8 automap_unlocked : 1;
	uint8 analysis_unlocked : 1;
	uint8 comp_unlocked : 1;
	uint8 walked_down_hallway : 1;
	uint8 gone_to_sleep : 1;
	uint8 : 0;
	uint8 witnessed_murder : 1;
	uint8 : 0;
	uint8 law_hero_joined : 1;
	uint8 law_hero_talked_to : 1;
	uint8 hospital_cell_unlocked : 1;
	uint8 stephen_talked_to : 1;
	uint8 orias_defeated : 1;
	uint8 chaos_hero_joined : 1;
	uint8 : 0;
	uint8 amano_sakugami_defeated : 1;
	uint8 pascal_joined : 1;
	uint8 douman_defeated : 1;
	uint8 pascal_fused : 1;
	uint8 pascal_teleported : 1;
	uint8 : 0;
	uint8 : 2;
	uint8 met_yuriko_shinjuku : 1;
	uint8 : 2;
	uint8 ozawa_defeated : 1;
};
