#include "com.h"

typedef enum smt_stat smt_stat;
typedef struct smt_stats smt_stats;


enum smt_stat
{
	STRENGTH,
	INTELLIGENCE,
	MAGIC,
	STAMINA,
	SPEED,
	LUCK
};


struct smt_stats
{
	uint8 strength;
	uint8 intelligence;
	uint8 magic;
	uint8 stamina;
	uint8 speed;
	uint8 luck;
};