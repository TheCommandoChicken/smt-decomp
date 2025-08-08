#include "common.h"
#include "graph.h"
#include "skill.h"

#ifndef _UNK_6_H_
#define _UNK_6_H_

enum event_flags {
    FLAG_AUTOMAP = 0, // Has the automap function been unlocked yet.
    FLAG_ANALYSIS = 1, // Has the analysis function been unlocked yet.
    FLAG_COMP = 2, // Has the Demon Summoning Program been unlocked yet.
    FLAG_HALLWAY = 3, // Have you walked down the hallway in your house.
    FLAG_SLEEP = 4, // Set when you wake up, prevents going back to sleep immediately. Unset after leaving the main room of the house.
    FLAG_MOM_GAVE_MONEY = 7, // Got money from mother. Prevents getting money again.
    FLAG_SEEN_MURDER = 8, // Have you seen the man be murdered in the arcade.
    FLAG_IN_CAFE = 10, // Set while in the cafe.
    FLAG_LAW_HERO_JOIN = 16, // Has the law hero joined the party.
    FLAG_LAW_HERO_TALKED = 17,
    FLAG_HOSPITAL_CELL = 18, // Is the cell in the hospital open.
    FLAG_STEPHEN_TALKED = 19, // Have you spoken to Stephen in the hospital.
    FLAG_ORIAS = 20, // Has Orias been defeated in the hospital.
    FLAG_CHAOS_HERO_JOINED = 21, // Has the chaos hero joined the party.
    FLAG_COFFEE = 23, // Have you gotten the coffee from the cafe.
    FLAG_AMANO_SAKUGAMI = 24, // Have you defeated Amano Sakugami.
    FLAG_PASCAL_JOINED = 25, // Has Pascal been added to the comp.
    FLAG_DOUMAN = 26, // Has Douman been defeated in the Echo Building.
    FLAG_PASCAL_FUSED = 27, // Has Pascal been fused into Cerberus.
    FLAG_PASCAL_TELEPORT = 28, // Has Pascal/Cerberus been teleported away in the Echo Building.
    FLAG_YURIKO_KJJ = 33, // Have you met Yuriko in Kichijoji.
    FLAG_YURIKO_SJK = 34, // Have you met Yuriko in Shinjuku.
    FLAG_OZAWA = 37, // Has Ozawa been defeated in 19XX.
    FLAG_SAVED_HEROINE = 39, // Has the heroine been saved from the execution.
    FLAG_HEROINE_KIDNAPPED = 40, // Has the heroine been kidnapped by Yuriko.
    FLAG_HELP_GOTOU = 42, // Did you decide to help Gotou.
    FLAG_DEFEAT_GOTOU = 43, // Did you defeat Gotou.
    FLAG_HELP_THOR = 46, // Did you decide to help Thor.
    FLAG_APOCALYPSE = 47, // Has Tokyo been destroyed.
    FLAG_LAW_HERO_REJOIN = 49, // Has the law hero rejoined the party in Vajradhatu.
    FLAG_CHAOS_HERO_REJOIN = 50, // Has the chaos hero rejoined the party in Vajradhatu.
    FLAG_PRISONER_0 = 52,
    FLAG_GINZA_SUMMONER = 52,
    FLAG_PRISONER_1 = 53,
    FLAG_UENO_SUMMONER = 53,
    FLAG_PRISONER_2 = 54,
    FLAG_SHINAGAWA_SUMMONER = 54,
    FLAG_TDL_SUMMONER = 55,
    FLAG_VAJRADHATU = 56, // Set while in Vajradhatu and unset otherwise.
    FLAG_DEMON_0_REJOIN = 59,
    FLAG_DEMON_1_REJOIN = 60,
    FLAG_DEMON_2_REJOIN = 61,
    FLAG_DEMON_3_REJOIN = 62,
    FLAG_DEMON_4_REJOIN = 63,
    FLAG_DEMON_5_REJOIN = 64,
    FLAG_DEMON_6_REJOIN = 65,
    FLAG_DEMON_7_REJOIN = 66,
    FLAG_TAKEMINEKATA = 71,
    FLAG_VAJRADHATU_QUEST = 74,
    FLAG_WENDIGO = 76,
    FLAG_SEEN_HEROINE = 79,
    FLAG_DONATED_TO_CHURCH = 81,
    FLAG_ARACHNE = 82,
    FLAG_CHURCH_FINISHED = 85,
    FLAG_BELIAL = 86,
    FLAG_NEBIROS = 87,
    FLAG_SECURITY_SYSTEM = 95,
    FLAG_KAZFIEL = 98,
    FLAG_ECHIDNA = 99,
    FLAG_HANIEL = 100,
    FLAG_CATH_OPEN = 101,
    FLAG_FIGHT_THOR_HELP_GOTOU = 106,
    FLAG_RED_STRANGER = 107,
    FLAG_BLUE_STRANGER = 108,
    FLAG_DEFEAT_YAMA = 110,
    FLAG_HELP_YAMA = 111,
    FLAG_ESCAPE_PRISON = 114,
    FLAG_MASAKADO_HELMET = 115,
    FLAG_MASAKADO_ARMOR = 116,
    FLAG_MASAKADO_BRACERS = 117,
    FLAG_MASAKDAO_LEGGINGS = 118,
    FLAG_NIOU = 119,
    FLAG_GAEAN_BAPTISM = 121,
    FLAG_LADON = 122,
    FLAG_GOLDEN_APPLE = 123,
    FLAG_MESSIAN_BAPTISM = 125,
    FLAG_JESUS_ARMOR_OPEN = 126,
    FLAG_GAVE_CERBERUS_APPLE = 128,
    FLAG_ECHIDNA_TALKED = 130,
    FLAG_FLOOD = 158,
    FLAG_OCTOPUS = 166,
    FLAG_MICHAEL = 182,
    FLAG_ASURA = 199,
    FLAG_DEFEAT_THOR = 229,
    FLAG_MISSILE_STRIKE = 230,
    FLAG_CURRENCY_CHANGED = 236,
    FLAG_COMP_UPGRADE_1 = 237,
    FLAG_COMP_UPGRADE_2 = 238,
    FLAG_COMP_UPGRADE_3 = 239,
    FLAG_SUMMON_UPGRADE = 240,
    FLAG_DIFFICULTY = 248,
    FLAG_ABOUT_TO_HEAR_HEROINE = 249,
    FLAG_ALIGNMENT_LOCKED = 251,
    FLAG_NO_ENCOUNTERS = 255 // Set at the start of the game. Blocks random encounters for the first day.
};


enum terminal_flags {
    TERM_CATH_LAW = 0,
    TERM_ROPPONGI = 1,
    TERM_TDL = 2,
    TERM_SHIBUYA = 3,
    TERM_TOKYO_TOWER = 4,
    TERM_GVMT_OFFICE = 5,
    TERM_SHINJUKU = 10,
    TERM_IKEBUKURO = 11,
    TERM_SHINAGAWA = 13,
    TERM_UENO = 14,
    TERM_CATH_CHAOS = 15
};


enum race {
    RACE_DEITY = 0,
    RACE_MEGAMI = 1,
    RACE_TENMA = 2,
    RACE_KISHIN = 3,
    RACE_SERAPH = 4,
    RACE_DIVINE = 5,
    RACE_DRAGON = 6,
    RACE_AVIAN = 7,
    RACE_AVATAR = 8,
    RACE_HOLY = 9,
    RACE_ELEMENT = 10,
    RACE_FEMME = 11,
};


enum demons {
    // Deity
    DEMON_VISHNU = 0,
    DEMON_INDRA = 1,
    DEMON_FUDOU_MYOUOU = 2,
    DEMON_ODIN = 3,
    DEMON_ARAHABAKI = 4,
    DEMON_LOKI = 5,
    // Megami
    DEMON_LAKSHMI = 6,
    DEMON_KIKURI_HIME = 7,
    DEMON_SARASVATI = 8,
    DEMON_KUSHINADA_HIME = 9,
    DEMON_AME_NO_UZUME = 10,
    // Tenma
    DEMON_ASURA = 11,
    DEMON_SHIVA = 12,
    DEMON_MAHAKALA = 13,
    DEMON_SEITENTAISEI = 14,
    DEMON_INDRAJIT = 15,
    DEMON_TAMA = 16,
    DEMON_RAVANA = 17,
    DEMON_AGNI = 18,
    // Kishin
    DEMON_BISHAMONTEN = 19,
    DEMON_NIOU = 20,
    DEMON_TAKEMIKAZUCHI = 21,
    DEMON_HINOKAGUTSUCHI = 22,
    DEMON_JIKOKUTEN = 23,
    DEMON_KOUKOKUTEN = 24,
    DEMON_ZOUCHOUKUTEN = 25,
    DEMON_NAGASUNEHIKO = 26,
    DEMON_TAKEMINAKATA = 27,
    DEMON_OMONONUSHI = 28,
    DEMON_KOTOSHIRONUSHI = 29,
    DEMON_HITOKOTONUSHI = 30,
    // Seraph
    DEMON_MICHAEL = 31,
    DEMON_GABRIEL = 32,
    DEMON_RAPHAEL = 33,
    DEMON_URIEL = 34,
    // Divine
    DEMON_CHERUB = 35,
    DEMON_THRONE = 36,
    DEMON_DOMINION = 37,
    DEMON_VIRTUE = 38,
    DEMON_POWER = 39,
    DEMON_ARCHANGEL = 40,
    DEMON_ANGEL = 41,
    // Dragon
    DEMON_ANANTA = 42,
    DEMON_MATA = 43,
    DEMON_PEK_YOUNG = 44,
    DEMON_VRITRA = 45,
    DEMON_GANGA = 46,
    DEMON_COATLICUE = 47,
    DEMON_GARUDA = 48,
    // Avian
    DEMON_YATAGARASU = 49,
    DEMON_PHOENIX = 50,
    DEMON_JATAYU = 51,
    DEMON_HOU_OU = 52,
    // Avatar
    DEMON_BARONG = 53,
    DEMON_CHIMERA = 54,
    DEMON_NARASIMHA = 55,
    DEMON_NANDI = 56,
    // Holy
    DEMON_GENBU = 57,
    DEMON_QILIN = 58,
    DEMON_PABILSAG = 59,
    DEMON_HAKUTAKU = 60,
    DEMON_UNICORN = 61,
    // Element
    DEMON_SALAMANDER = 62,
    DEMON_UNDINE = 63,
    DEMON_SYLPH = 64,
    DEMON_GNOME = 65,
    DEMON_FLAMIES = 66,
    DEMON_AQUANS = 67,
    DEMON_AEROS = 68,
    DEMON_EARTHIES = 69,
    // Femme
    DEMON_KALI = 70,
    DEMON_HARITI = 71,
    DEMON_RANGDA = 72,
    DEMON_SCYLLA = 73,
    DEMON_DAKINI = 74,
    DEMON_GORGON = 75,
    DEMON_TARAKA = 76,
    DEMON_LAMIA = 77,
    // Yoma
    DEMON_HANUMAN = 78,
    DEMON_GANESHA = 79,
    DEMON_KINNARA = 80,
    DEMON_TENGU = 81,
    DEMON_CHORONZON = 82,
    DEMON_ONKOT = 83,
    DEMON_LOA = 84,
    DEMON_WATCHER = 85,
    DEMON_ISORA = 86,
    DEMON_APSARAS = 87,
    DEMON_KINNARI = 88,
    // Night
    DEMON_VAMPIRE = 89,
    DEMON_SUCCUBUS = 90,
    DEMON_INCUBUS = 91,
    DEMON_NYI_CALON = 92,
    DEMON_CHULRUK = 93,
    DEMON_LILIM = 94,
    DEMON_NIGHTMARE = 95,
    DEMON_CYAK = 96,
    DEMON_IMP = 97,
    // Fairy
    DEMON_OBERON = 98,
    DEMON_SENKO = 99,
    DEMON_CU_CHULAINN = 100,
    DEMON_TAM_LIN = 101,
    DEMON_TROLL = 102,
    DEMON_SENRI = 103,
    DEMON_HOBGOBLIN = 104,
    DEMON_ELF = 105,
    DEMON_KELPIE = 106,
    DEMON_RUSALKA = 107,
    DEMON_GANDHARVA = 108,
    DEMON_DRYAD = 109,
    DEMON_JACK_O_LANTERN = 110,
    DEMON_JACK_FROST = 111,
    DEMON_GOBLIN = 112,
    DEMON_PIXIE = 113,
    // Fallen
    DEMON_FLAUROS = 114,
    DEMON_FLEURETY = 115,
    DEMON_ABADDON = 116,
    DEMON_SAMAEL = 117,
    DEMON_MARCHOSIAS = 118,
    DEMON_OSE = 119,
    DEMON_DECARABIA = 120,
    DEMON_LEONARD = 121,
    DEMON_OROBAS = 122,
    DEMON_SYTRY = 123,
    DEMON_BERITH = 124,
    DEMON_FORNEUS = 125,
    DEMON_GAMIGAN = 126,
    DEMON_ANDRAS = 127,
    // Snake
    DEMON_PENDRAGON = 128,
    DEMON_YAMATA_NO_OROCHI = 129,
    DEMON_ITZAMNA = 130,
    DEMON_QUETZALCOATL = 131,
    DEMON_YURLUNGUR = 132,
    DEMON_RAJA_NAGA = 133,
    // Flight
    DEMON_SIREN = 134,
    DEMON_BADB_CATHA = 135,
    DEMON_GU_HUO_NIAO = 136,
    DEMON_HARPY = 137,
    // Beast
    DEMON_GRYPHON = 138,
    DEMON_CERBERUS = 139,
    DEMON_RAKCHARANGO = 140,
    DEMON_ORTHRUS = 141,
    DEMON_TAMMUZ = 142,
    DEMON_STONKA = 143,
    DEMON_NEKOMATA = 144,
    DEMON_TANKI = 145,
    DEMON_CU_SITH = 146,
    DEMON_SHANHUI = 147,
    // Touki
    DEMON_YAKSA = 148,
    DEMON_NATAKU = 149,
    DEMON_MEZUKI = 150,
    DEMON_GOZUKI = 151,
    DEMON_YAKSINI = 152,
    DEMON_SPARTOI = 153,
    // Brute
    DEMON_SHUTEN_DOUJI = 154,
    DEMON_TURDAK = 155,
    DEMON_IBARAKI_DOUJI = 156,
    DEMON_PURSKI = 157,
    DEMON_MOMUNOFU = 158,
    DEMON_BOGLE = 159,
    DEMON_AZUMI = 160,
    // Jirae
    DEMON_ATLAS = 161,
    DEMON_GIANT = 162,
    DEMON_SARUTAHIKO = 163,
    DEMON_KWANCHA = 164,
    DEMON_DWARF = 165,
    DEMON_BUGABOO = 166,
    DEMON_TSUCHIGUMO = 167,
    DEMON_FACHAN = 168,
    DEMON_KOBOLD = 169,
    DEMON_KNOCKER = 170,
    DEMON_BROWNIE = 171,
    // Therian
    DEMON_WEREWOLF = 172,
    DEMON_WERECAT = 173,
    DEMON_WEREDOG = 174,
    // Messian
    DEMON_SCANNER = 175,
    DEMON_MAGUS = 176,
    DEMON_TEMPLE_KNIGHT = 177,
    DEMON_FANATIC = 178,
    // Gaean
    DEMON_ASSASSIN = 179,
    DEMON_DARK_PRIEST = 180,
    DEMON_ONI_JOROU = 181,
    DEMON_FALLEN_MONK = 182,
    DEMON_EXECUTION_RIDER = 183,
    DEMON_SUICIDE_UNIT = 184,

};

enum items {
    // Swords
    ITEM_ATTACK_KNIFE = 0,
    ITEM_MACHETE = 1,
    ITEM_TONFA = 2,
    ITEM_SPIKE_ROD = 3,
    ITEM_FAKE_SWORD = 4,
    ITEM_NAMELESS_SWORD = 5,
    ITEM_LIUYEDAO = 6,
    ITEM_SCORPION_WHIP = 7,
    ITEM_WARHAMMER = 8,
    ITEM_BIZEN_TANTOU = 9,
    ITEM_CHAINSAW = 10,
    ITEM_ATHAME = 11,
    ITEM_GLADIUS = 12,
    ITEM_KOTETSU = 13,
    ITEM_TOMOE_SWORD = 14,
    ITEM_CRESCENT_LONGSWORD = 15,
    ITEM_LIGHT_SWORD = 16,
    ITEM_GUILLOTINE_AXE = 17,
    ITEM_BLAZE_WHIP = 18,
    ITEM_BIZEN_OSAFUNE = 19,
    ITEM_ELECTRIC_WHIP = 20,
    ITEM_CURSED_LANCE = 21,
    ITEM_KAMUDO_SWORD = 22,
    ITEM_PLASMA_SWORD = 23,
    ITEM_KUSANAGI = 24,
    ITEM_BRIONAC = 25,
    ITEM_VAJRA = 26,
    ITEM_KUCHINAWA = 27,
    ITEM_FUTSUNO_MITAMA = 28,
    ITEM_SONIC_BLADE = 29,
    ITEM_CLAIMH_SOLAIS = 30,
    ITEM_PLOUGH_SWORD = 31,
    ITEM_HIGYO_SANKO = 32,
    ITEM_KIKUSUI_TANTOU = 33,
    ITEM_NIHIL_SWORD = 34,
    ITEM_TRUTH = 35,
    ITEM_GAE_BOLG = 36,
    ITEM_MURAMASA = 37,
    ITEM_DEATHBRINGER = 38,
    ITEM_HEADHUNTER_SPOON = 39,
    ITEM_CAT_O_NINE_TAILS = 40,
    ITEM_SPIRIT_SWORD = 41,
    ITEM_AMENO_NUHOKO = 42,
    ITEM_YATSUKA = 43,
    ITEM_VALHALLA = 44,
    ITEM_DYNAST_SWORD = 45,
    ITEM_UNDERWORLD_MOON = 46,
    ITEM_ANGELS_TRUMPET = 47,
    ITEM_LUNA_BLADE = 48,
    ITEM_REAPER_CHIME = 49,
    ITEM_PURIFYING_FAN = 50,
    ITEM_LOTUS_WAND = 51,
    ITEM_LONGINUS = 52,
    ITEM_SOL_BLADE = 53,
    ITEM_STRADIVARI = 54,
    ITEM_AMENO_MURAKUMO = 55,
    ITEM_FUUJINKEN = 56,
    ITEM_RAIJINKEN = 57,
    ITEM_MITSURUGI = 58,
    ITEM_AMENOMI = 59,
    ITEM_MASAKADOKEN = 60,
    ITEM_KURIKARA = 61,
    ITEM_HINOKAGUTSUCHI = 62,
    // Guns
    ITEM_NEW_NAMBU = 63,
    ITEM_BARETTA_92F = 64,
    ITEM_MP5_MACHINE_GUN = 65,
    ITEM_M16_RIFLE = 66,
    ITEM_SPAS_12 = 67,
    ITEM_M249_MINIMI = 68,
    ITEM_BROWNING_M2 = 69,
    ITEM_PAUZA_P50 = 70,
    ITEM_OGRE_BOLT_CANNON = 71,
    ITEM_GOLDEN_GUN = 72,
    ITEM_GIGA_SMASHER = 73,
    ITEM_KUNITOMO_GUN = 74,
    ITEM_M134_MINIGUN = 75,
    ITEM_RAILGUN = 76,
    ITEM_MEGIDDO_FIRE = 77,
    ITEM_PEACEMAKER = 78,
    // Bullets
    ITEM_NORMAL_BULLETS = 79,
    ITEM_SHOT_SHELLS = 80,
    ITEM_POISON_BULLETS = 81,
    ITEM_NERVE_BULLETS = 82,
    ITEM_CURSE_BULLETS = 83,
    ITEM_HOLY_BULLETS = 84,
    ITEM_SILVER_BULLETS = 85,
    ITEM_URANIUM_BULLETS = 86,
    ITEM_PLUTONIUM_BULLETS = 87,
    ITEM_ENCHANTED_BULLETS = 88,
    ITEM_MEDUSA_BULLETS = 89,
    ITEM_SEAL_BULLETS = 90,
    ITEM_FLASH_BULLETS = 91,
    ITEM_HAPPY_SHOT = 92,
    ITEM_LIGHT_BULLETS = 93,
    ITEM_DARKNESS_BULLETS = 94,
};


enum story_section {
	HAKAI_BEF = 0,
	HAKAI_AFT = 1,
	NEBI_KILL = 2,
	KOZUI = 3,
	NO_DATA = 4
};


struct unk_data_600 {
    struct unk_data_603 {
        struct sprite_data unk0[0x1C];
        s16 unkD20[0x1C];
        s16 unkD58;
        s32 unkD5C;
        s32 unkD60;
        s16 unkD64;
        s16 unkD66;
        s32 unkD68;
        s16 unkD6C;
        s16 unkD6E;
    } unk0[9];
    s16 unk78F0;
    s16 unk78F2;
    s16 unk78F4;
    s16 unk78F6;
    s16 unk78F8;
    s16 unk78FA;
    s16 unk78FC;
    s16 unk78FE;
    s16 unk7900;
    s16 unk7902;
    s16 unk7904;
    s16 unk7906;
    s16 (* unk7908)[43];
    s32 unk790C;
    u8 unk7910;
    u8 pad[3];
    struct object * unk7914;
    s16 unk7918;
    s16 unk791A;
    s16 unk791C;
    s16 unk791E;
    s16 unk7920;
    s16 pad7822;
    s32 unk7924;
    s32 unk7928;
};

struct stats {
    s8 str;
    s8 itl;
    s8 mag;
    s8 vit;
    s8 spd;
    s8 lck;
};

struct equipment {
    s16 sword;
    s16 gun;
    s16 helmet;
    s16 armor;
    s16 glove;
    s16 leggings;
    s16 bullets;
};

struct character_data {
    s32 exp;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 slot;
    s16 flags;
    s16 status;
    u16 id;
    u16 gender; // (?)
    u8 default_action;
    u8 action;
    s16 hp;
    s16 max_hp;
    s16 mp;
    s16 max_mp;
    u8 level;
    u8 unk1F;
    struct equipment equipment;
    u16 unk2E;
    struct stats base_stats; // The character's stats as defined by their point allocation
    struct stats stats; // The character's effective stats after taking modifiers into account
    struct stats stat_mods; // Summed modifiers from equipment.
    u32 unk42[2];
    u16 unk4C;
    u16 unk4E;
    u16 unk50;
    u16 melee_attack;
    u16 melee_accuracy;
    u16 gun_attack;
    u16 gun_accuracy;
    u16 defense;
    u16 evasion;
    u16 magic_power;
    u16 magic_effect;
    u16 alignment; // Only the upper byte is used.
    u8 unk64;
    u8 unk65;
    u8 unk66;
    u8 skills[18];
};

struct inventory_entry {
    u8 item;
    u8 quantity;
};

struct timer {
    u8 hour;
    u8 minute;
    u8 second;
    u8 frame;
};

struct game_data {
    struct character_data characters[24];
    s32 money;
    s32 magnetite;
    u16 names[4][9]; // Protag, Heroine, Law Hero, Chaos Hero. Uses proprietary encoding.
    s16 party[6];
    s16 organized_party[6];
    struct inventory_entry inventory[256]; // The storage of item IDs is redundant since this array is populated with every item ID in order, and they never change.
    u8 event_flags[34]; // Last two bytes go unused.
    u16 encounter_chance; // This seems out of place here.
    u16 terminal_flags;
    u8 treasure_flags[16];
    u8 unk0[16];
    u8 analysis_flags[32];
    u8 recon_flags[1];
    u8 map_flags[1024];
    u8 unk1[12];
    u8 unk2[17];
    u16 unk128C;
    u16 moon_phase;
    u16 last_moon_phase;
    u16 cp; // Magnetite cost of demons in active party.
    u16 unk1294;
    u8 unk1296[16];
    u16 unk12A6;
    s32 unk12A8[9];
    s32 unk12CC[9];
    s32 unk12F0[9];
    s16 unk1314[8];
    struct settings {
        s16 unk0;
        s16 unk2;
        s16 unk4;
        s16 unk6;
        s16 unk8;
        s16 unkA;
        s16 unkC;
        s16 unkE;
        s32 unk10;
    } settings;
    s32 unk1338[0x100];
    struct timer playtime;
};

struct unk_data_700 {
    s16 unk0;
    struct sprite_data unk4;
    s32 unk7C;
};

struct unk_data_701 {
    u8 unk0[0x510];
    s32 unk510;
    u8 unk514[0x164];
    s16 unk678;
    s16 unk67A;
    s16 unk67C;
    s16 unk67E;
    s32 unk680;
    s32 unk684;
    s32 unk688;
    s32 unk68C;
    u8 unk690[0x178];
    s32 unk808;
    s32 unk80C;
    s16 unk810;
    s16 unk812;
    s32 unk814;
    s16 unk818;
    s16 unk81A[8];
    s16 unk82A;
    struct unk_data_703 {
        u8 unk0[0x164];
        s16 unk164;
        s16 unk166;
        s16 unk168;
        s16 unk16A;
        s16 unk16C;
        s16 unk16E;
        s16 unk170;
        s16 unk172;
        s16 unk174;
        s16 unk176;
        s16 unk178;
        s16 unk17A;
        s16 unk17C;
        s16 unk17E;
    } unk82C[8];
    s16 unk9A8[0x542];
    s16 unk142C;
};

struct unk_data_704 {
    s32 stream_id;
    s32 w;
    s32 h;
    s32 n;
    u8 * unk10;
    u8 * unk14;
    s32 unk18;
    u8 unk1C;
    s32 unk20;
};

const s16 D_800111F0[43] = {
    1, 1,
    1, 1,
    1, 0x800,
    2, 2,
    2, 2,
    2, 0x800,
    3, 3,
    3, 3,
    3, 0x800,
    4, 4,
    4, 4,
    4, 0x800,
    5, 5,
    5, 5,
    5, 0x800,
    6, 6,
    6, 6,
    6, 0x800,
    7, 7,
    7, 7,
    7, 0x800
};

const u8 D_80011460[8] = { 
    3, 2, 0, 0, 0, 0, 0, 0 
};

char * D_800A2FEC[8] = {
    "~c888",
    "~c000",
    "~c800",
    "~c080",
    "~c008",
    "~c808",
    "~c088",
    "~c880"
};

u16 * DemonNames[310] = {

};

u16 * ItemNames[256] = {
    (u16[8]){0x0053, 0x0062, 0x00A3, 0x005A, 0x0067, 0x0054, 0x006E, 0x0000},
    (u16[6]){0x0071, 0x0063, 0x009E, 0x00A3, 0x0066, 0x0000},
    (u16[6]){0x0066, 0x0080, 0x006E, 0x009B, 0x0052, 0x0000},
    (u16[8]){0x005F, 0x0096, 0x0054, 0x005A, 0x007D, 0x00A3, 0x0090, 0x0000}
};

u16 * SkillNames[118] = {

};

u16 * RaceNames[40] = {

};

u8 D_800A7CB8[8] = {
    0x71, 0xAB, 0xEB, 0xF2,
    0xF6, 0xF7, 0xF8, 0x00
};
u8 D_800A7CC0[8] = {
    0xEB, 0xF0, 0xF1, 0xF2,
    0xF6, 0x00, 0x00, 0x00
};
u8 D_800A7CC8[8] = {
    0x71, 0xAB, 0xAE, 0xE4,
    0xF0, 0xF1, 0xF2, 0xFE
};
u8 D_800A7CD0[8] = {
    0x71, 0xAA, 0xAE, 0xE4,
    0xEB, 0xF2, 0x00, 0x00
};
u8 D_800A7CD8[8] = {
    0x70, 0x7F, 0xA9, 0xAA,
    0xDB, 0xE4, 0x00, 0x00
};

u8 (* D_800A7F0C[56])[] = {
    
};

u8 (* D_800A7FF8[41])[4] = {

};

u8 (* D_800A8214[40])[] = {

};
// Lookup table for the 52 resistance types.
// Stored as 16 4-bit values for each type, with the attributes in the order:
// Sword, Gun, Fire, Ice, Elec, Force, Nerve, Almighty, Expel, Death, Magic, Bind, Charge, Dex, Needle, and Non-elemental
// If a value is less than 9 then it's treated as a ratio of n/8 to calculate received damage.
// 9 = 1.5x, A = 2x, B = 2.5x, C = 3x, D = Reflect half, E = Reflect full, F = Absorb
u8 D_800A9034[416] = {
    0x77, 0x76, 0x77, 0x18, 0x00, 0x11, 0x56, 0x58, // Hero
    0x89, 0x77, 0x98, 0x88, 0x08, 0x88, 0x68, 0x88, // Human
    0x89, 0x97, 0x98, 0x88, 0x08, 0x78, 0x68, 0x98, // Animal Race
    0x49, 0x87, 0x79, 0x68, 0x08, 0x66, 0x28, 0x88, // Bird Race
    0x84, 0xA2, 0x24, 0x48, 0xC0, 0x86, 0x46, 0x08, // Dead Person (1)
    0x62, 0x90, 0xF6, 0x18, 0xA0, 0x46, 0x46, 0x08, // Dead Person (2)
    0x80, 0x80, 0x68, 0x08, 0xBD, 0x84, 0x40, 0x08, // Ethereal Body
    0x84, 0xFB, 0x68, 0x48, 0x36, 0x82, 0x48, 0x68, // Fire Demon
    0x86, 0x47, 0xD8, 0x68, 0x48, 0x88, 0x48, 0x68, // Water Demon
    0x86, 0x55, 0x58, 0x68, 0x18, 0x82, 0x48, 0x48, // Wind Demon
    0x88, 0x44, 0x48, 0x68, 0x46, 0x98, 0x48, 0x88, // Earth Demon
    0x46, 0xBF, 0x76, 0x48, 0x94, 0x84, 0x44, 0x28, // Ice Demon
    0x62, 0xBA, 0x26, 0x28, 0x80, 0x42, 0x24, 0x18, // Thermal Weakness
    0x62, 0x22, 0xB6, 0x28, 0x80, 0x42, 0x24, 0x18, // Electric Weakness
    0x60, 0x22, 0x68, 0x08, 0x60, 0x88, 0x24, 0x08, // Spirit Body
    0x48, 0x84, 0xB8, 0x08, 0x00, 0x00, 0x64, 0x08, // Machine
    0x66, 0x80, 0x78, 0x08, 0x80, 0x88, 0x46, 0x08, // Mechanical
    0x84, 0x44, 0x46, 0x38, 0xE0, 0x86, 0x68, 0x08, // Holy Being
    0x76, 0x77, 0x77, 0x28, 0x04, 0x77, 0x57, 0x78, // Demonic Person
    0x86, 0x66, 0x66, 0x68, 0x00, 0x64, 0x68, 0x88, // Goddess
    0x77, 0xEA, 0x67, 0x88, 0x14, 0x88, 0x57, 0x88, // Flame Body
    0x85, 0x87, 0x68, 0x68, 0x34, 0x64, 0x68, 0x88, // Demon Race (1)
    0x84, 0x66, 0x47, 0x28, 0x20, 0x22, 0x68, 0x48, // Demon Race (2)
    0x86, 0x46, 0x68, 0x68, 0x6E, 0x46, 0x68, 0x68, // High Oni
    0x73, 0x44, 0x46, 0x28, 0x8E, 0x64, 0x46, 0x28, // Death Demon
    0x72, 0x64, 0x48, 0x68, 0x50, 0x87, 0x47, 0x28, // Night Ghost
    0xE6, 0x86, 0x68, 0x88, 0x36, 0x88, 0x36, 0x68, // Anti-Sword
    0x8E, 0x86, 0x68, 0x88, 0x36, 0x88, 0x68, 0xE8, // Anti-Gun
    0x84, 0x84, 0x68, 0x28, 0x00, 0x62, 0x68, 0x28, // Boss (0)
    0x82, 0x82, 0x48, 0x08, 0x00, 0x50, 0x67, 0x08, // Boss (1)
    0x80, 0x40, 0x28, 0x08, 0x00, 0x50, 0x56, 0x08, // Boss (2)
    0x82, 0x00, 0x00, 0x08, 0x00, 0x00, 0x45, 0x08, // Boss (3)
    0x00, 0x82, 0x28, 0x08, 0x00, 0x20, 0x00, 0x08, // Boss (4)
    0x82, 0xFF, 0xFF, 0xF8, 0x0F, 0xFF, 0x45, 0x28, // Boss (5)
    0xFF, 0x81, 0x28, 0x08, 0x0E, 0x00, 0xFF, 0xF8, // Boss (6)
    0x80, 0x40, 0x08, 0x08, 0x0E, 0x00, 0x86, 0x08, // Final Boss
    0x88, 0x87, 0x78, 0x88, 0x08, 0x88, 0x67, 0x88, // Normal
    0x88, 0x27, 0x78, 0x88, 0x08, 0x88, 0x47, 0x88, // Fire
    0x88, 0x82, 0x78, 0x88, 0x08, 0x88, 0x67, 0x88, // Ice
    0x88, 0x87, 0x78, 0x88, 0x08, 0x88, 0x67, 0x88, // Holy
    0x88, 0x87, 0x28, 0x88, 0x06, 0x66, 0x67, 0x88, // Elec
    0x88, 0x87, 0x78, 0x28, 0x04, 0x24, 0x67, 0x88, // Psyche
    0x88, 0x47, 0x48, 0x88, 0x08, 0x88, 0x66, 0x88, // ElecFire
    0x88, 0x66, 0x66, 0x88, 0x06, 0x66, 0x66, 0x68, // Fully Compatible
    0x84, 0x87, 0x74, 0x88, 0x08, 0x88, 0x24, 0x48, // Force
    0x88, 0x44, 0x78, 0x88, 0x08, 0x88, 0x67, 0x88, // Heat Res
    0x88, 0x47, 0x78, 0x88, 0x08, 0x88, 0x67, 0x68, // Fire2
    0x88, 0x84, 0x78, 0x88, 0x08, 0x88, 0x66, 0x68, // Ice2
    0x88, 0x47, 0x44, 0x44, 0xCE, 0x44, 0x44, 0x48, // Curse
    0x88, 0x87, 0xF8, 0x88, 0x08, 0x88, 0x66, 0x88, // Drn Elec
    0x88, 0xF9, 0x48, 0x88, 0x08, 0x88, 0x66, 0x88, // Endothermic
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // Belial
};

struct unk_data_800 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u16 unk4;
};

struct unk_data_800 D_800A9554[118] = {
    {0x42, 0x17, 0x00, 0x03, 0x0000},
    {0x42, 0x40, 0x00, 0x07, 0x0000},
    // ...
};

u8 D_800A9818[18][4] = {
    {23, 4, 0, 0},
    {18, 10, 4, 0},
    {63, 6, 8, 4},
    {103, 16, 15, 2},
    {39, 24, 11, 2},
    {76, 29, 14, 0},
    {113, 24, 16, 4},
    {42, 43, 19, 4},
    {47, 60, 19, 2},
    {109, 14, 8, 0},
    {6, 45, 17, 6},
    {83, 12, 6, 0},
    {30, 45, 7, 0},
    {58, 52, 8, 0},
    {0, 0, 0, 0},
    {72, 7, 13, 0},
    {25, 6, 6, 6},
    {103, 29, 20, 2}
};
u8 D_800A9A2C[16] = {
    0, 0, 0, 0,
    0, 38, 38, 38,
    38, 38, 38, 38,
    38, 0, 36, 37
};
s8 D_800A9A3C[52] = {
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    4, 4, 4, 5,
    6, 3, 7, 2,
    2, 1, 0, 0,
    0, 2, 7, 6,
    3, 7, 2, 5,
    5, 0, 1, 0,
    0, 0, 0, 0,
    3, 0, -59, 0,
    -56, 0, -56, 0,
    16, 0, 3, 0
};

u8 D_800AC6BC[625] = {
    0x00, 0xfc, 0x07, 0x15, 0x20, 
    0x0f, 0x2a, 0xbd, 0x1c, 0x20, 
    0x2c, 0x31, 0x2e, 0x19, 0x4a, 
    0x2c, 0xf3, 0x7a, 0x38, 0xe4, 
    0x1d, 0x0e, 0x3e, 0x4f, 0x13, 
    0x63, 0x82, 0x19, 0x47, 0xa4, 
    0x1f, 0x18, 0xca, 0x26, 0x11, 
    0x00, 0xf2, 0x6c, 0x05, 0xf7, 
    0xd0, 0x09, 0xeb, 0x77, 0x0e, 
    0xe4, 0x21, 0x15, 0xd5, 0xde, 
    0x2b, 0xd0, 0xe2, 0x40, 0xec, 
    0x0f, 0x5a, 0xd7, 0xb1, 0x0b, 
    0x9f, 0x9d, 0x13, 0xac, 0x81, 
    0x1a, 0x8f, 0xb0, 0x1f, 0x8c, 
    0x6d, 0x2f, 0x95, 0x53, 0x32, 
    0x91, 0x7c, 0x38, 0x8e, 0x98, 
    0x5e, 0x9c, 0x82, 0x6e, 0x9b, 
    0x2d, 0x86, 0xae, 0x56, 0x9d, 
    0xa0, 0xaf, 0xb2, 0xa3, 0xd5, 
    0x01, 0x00, 0x39, 0x03, 0x01, 
    0xe7, 0x04, 0x08, 0x25, 0x06, 
    0x0f, 0x4f, 0x16, 0x09, 0x7b, 
    0x27, 0x0b, 0x92, 0x45, 0x12, 
    0xfa, 0x5f, 0x16, 0xae, 0x7b, 
    0x1a, 0x0c, 0x96, 0x1d, 0x29, 
    0xd2, 0x21, 0x15, 0x0c, 0xbc, 
    0xd1, 0x17, 0xa9, 0xac, 0x22, 
    0xa1, 0xfe, 0x36, 0xc6, 0x3c, 
    0x54, 0x98, 0x59, 0x67, 0xa5, 
    0x3b, 0x10, 0x02, 0xdd, 0x1b, 
    0x03, 0xb9, 0x33, 0x04, 0x6f, 
    0x5b, 0x05, 0xcb, 0x8e, 0x0a, 
    0xab, 0x23, 0x54, 0x3f, 0x39, 
    0x56, 0x9a, 0x46, 0x50, 0x9b, 
    0x73, 0x52, 0x51, 0x76, 0x2d, 
    0x41, 0x87, 0x22, 0xad, 0x9e, 
    0x28, 0xa3, 0xb6, 0x27, 0xe0, 
    0xc7, 0x24, 0x64, 0x7c, 0x6b, 
    0x26, 0xa0, 0x68, 0x6b, 0xad, 
    0x64, 0xa0, 0xbc, 0x62, 0xc1, 
    0xc8, 0x69, 0x0e, 0xd3, 0x65, 
    0x27, 0xdd, 0x63, 0x0d, 0xe4, 
    0x60, 0x35, 0x12, 0xf3, 0xa5, 
    0x28, 0xed, 0xea, 0x3c, 0xea, 
    0x73, 0x55, 0xe7, 0x87, 0x65, 
    0xe8, 0x5d, 0x83, 0xf0, 0x80, 
    0x8f, 0xd4, 0xe8, 0x9a, 0xc8, 
    0xa4, 0x20, 0x32, 0x38, 0x2c, 
    0x36, 0x42, 0x3a, 0x37, 0x8c, 
    0x47, 0x40, 0x58, 0x50, 0x3a, 
    0x33, 0x6f, 0x3c, 0xf2, 0x77, 
    0x46, 0x24, 0x8a, 0x3f, 0x1c, 
    0x97, 0x42, 0x17, 0xba, 0x45, 
    0x43, 0xcd, 0x49, 0xfb, 0x24, 
    0xf5, 0x61, 0x3d, 0xf1, 0x1f, 
    0x56, 0xee, 0x9c, 0x68, 0xe0, 
    0x89, 0x91, 0xdc, 0xec, 0xa5, 
    0xd8, 0x97, 0xb0, 0xcd, 0x40, 
    0xd4, 0xc7, 0x22, 0xea, 0xc1, 
    0x30, 0x1e, 0x72, 0x79, 0x29, 
    0x76, 0x45, 0x30, 0x53, 0x84, 
    0x3b, 0x57, 0x91, 0x60, 0x75, 
    0x7a, 0x7d, 0x61, 0xcc, 0x90, 
    0x70, 0x28, 0xab, 0x58, 0x4e, 
    0xb3, 0x79, 0xed, 0xc2, 0x6c, 
    0x3d, 0xce, 0x5d, 0x93, 0xd9, 
    0x4f, 0x71, 0xe2, 0x6a, 0x70, 
    0xe5, 0x5b, 0x5c, 0xee, 0x73, 
    0xb4, 0xf8, 0x51, 0xbe, 0x18, 
    0xbf, 0xc0, 0x21, 0xbb, 0x16, 
    0x2d, 0xca, 0x62, 0x34, 0xb7, 
    0xd2, 0x4b, 0xab, 0x2e, 0x58, 
    0xb0, 0x8e, 0x74, 0xb5, 0xee, 
    0x84, 0xaa, 0x32, 0x92, 0xad, 
    0x69, 0x9f, 0xa2, 0xc8, 0xa8, 
    0xa4, 0xbb, 0xc3, 0xa6, 0x3a, 
    0xda, 0xa8, 0x1b, 0xe6, 0x97, 
    0xca, 0x2a, 0xb8, 0xdf, 0x35, 
    0xc5, 0x1d, 0x41, 0xc0, 0x4d, 
    0x51, 0xaf, 0xe1, 0x61, 0xc2, 
    0x96, 0x78, 0xa7, 0x78, 0x62, 
    0x34, 0xa7, 0x98, 0x33, 0x54, 
    0xc4, 0x30, 0xa2, 0xeb, 0x31, 
    0x4a, 0x52, 0x59, 0x50, 0x70, 
    0x7e, 0xe5, 0x7e, 0x5c, 0x31, 
    0x88, 0x74, 0x85, 0x93, 0x6d, 
    0x74, 0xa6, 0x5e, 0x9f, 0xbf, 
    0x71, 0x86, 0xcb, 0x55, 0x34, 
    0xdb, 0x5a, 0x66, 0xe7, 0x7f, 
    0xdc, 0x48, 0x88, 0x99, 0x63, 
    0x7c, 0xd8, 0x7f, 0x82, 0x5b, 
    0x85, 0x86, 0xdb, 0xa1, 0x7d, 
    0x75, 0xd5, 0x66, 0x6a, 0x57, 
    0xbd, 0x8f, 0x69, 0x93, 0x1e, 
    0x89, 0xc9, 0xc6, 0x99, 0xb2, 
    0xda, 0xb1, 0x9d, 0xcd, 0xd7, 
    0x96, 0x12, 0xe0, 0x9a, 0x14, 
    0x53, 0x2b, 0x6e, 0x5c, 0x3d, 
    0x65, 0x71, 0x29, 0x36, 0x94, 
    0x23, 0x94, 0xac, 0x3b, 0xc3, 
    0xc0, 0x25, 0x8a, 0xcc, 0x35, 
    0xb6, 0xdc, 0x2f, 0x57, 0xef, 
    0x43, 0xa1, 0xf4, 0x3e, 0xc4, 
    0xf9, 0x39, 0xf4, 0x79, 0x7a,
    0xf5, 0xb4, 0x67, 0xf6, 0xf1, 
    0x6e, 0x72, 0x42, 0x06, 0xd7, 
    0x8b, 0x07, 0x8d, 0xb7, 0x0c, 
    0x05, 0xc5, 0x11, 0x10, 0x37, 
    0xef, 0x0b, 0x49, 0xe5, 0x04, 
    0x80, 0xe3, 0x09, 0xa9, 0xe1, 
    0x06, 0xbd, 0xde, 0x08, 0xcf, 
    0xda, 0x90, 0x11, 0x14, 0x2a, 
    0x19, 0x17, 0x8b, 0x25, 0x0d, 
    0xd6, 0x6a, 0x10, 0xc9, 0x02, 
    0xf6, 0xcf, 0x08, 0xf8, 0xa8, 
    0x0a, 0xf4, 0x88, 0x0d, 0xe9, 
    0x1a, 0x14, 0xe6, 0xb7, 0x2e, 
    0xc4, 0x5e, 0x3e, 0xbe, 0xa9, 
    0x4c, 0xb9, 0xf9, 0x72, 0xb6, 
    0xf8, 0x8c, 0xb3, 0x55, 0xa2, 
    0xba, 0xf7, 0xb8, 0xb1, 0xc2, 
    0x43, 0x18, 0x4b, 0x75, 0x1b, 
    0xbf, 0xbe, 0x1c, 0xbc, 0xe8, 
    0x1e, 0xba, 0x26, 0x87, 0x48, 
    0x4d, 0x83, 0xd4, 0x5d, 0x84 
};


u8 D_800AC9BC[10][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {3, 4, 5},
    {3, 4, 5},
    {3, 4, 5},
    {6, 7, 8},
    {6, 7, 8},
    {6, 7, 8},
    {6, 7, 8},
    {6, 7, 8}
};

u16 D_800AC9DC[10] = {
    0x190, 0x1F4, 
    0x258, 0x2BC,
    0x2EE, 0x320, 
    0x78, 0x96,
    0xB4, 0x0
};

u8 D_800AC9F0[8][4] = {
    {0xEA, 0xE7, 0x3E, 0xE4},
    {0xE9, 0xE8, 0x3F, 0xE6},
    {0xED, 0xEC, 0x40, 0xEF},
    {0xEE, 0xE8, 0x41, 0xEB},
    {0xE4, 0xE9, 0x42, 0xE5},
    {0xEF, 0xE9, 0x43, 0xE6}, 
    {0xED, 0xEE, 0x44, 0xEF},
    {0xE5, 0xED, 0x45, 0xEB}
};

u8 D_800ACA10[12] = {
    0xDF, 0xCB, 0xBB, 0xD4,
    0xB9, 0xE0, 0xC9, 0xE1,
    0xDE, 0xD6, 0xBC, 0xD5
};

u8 D_800ACA1C[40] = { 
    0, 0, 1, 1, 
    3, 3, 4, 5, 
    6, 6, 8, 1, 
    2, 2, 2, 3, 
    4, 5, 6, 7, 
    7, 7, 11, 11, 
    11, 1, 2, 4, 
    5, 6, 7, 9, 
    9, 9, 10, 12, 
    0, 0, 0, 0 
};

u8 D_800ACA44[40] = {
    0x00, 0x06, 0x0B, 0x13,
    0x1F, 0x23, 0x2A, 0x30, 
    0x35, 0x39, 0x3E, 0x46, 
    0x4E, 0x59, 0x62, 0x72, 
    0x80, 0x86, 0x8A, 0x94, 
    0x9A, 0xA1, 0xAC, 0xAF, 
    0xB3, 0xB9, 0xBD, 0xC2, 
    0xC9, 0xCD, 0xD3, 0xDC, 
    0xE5, 0xEC, 0xF3, 0xF9, 
    0xFF, 0x00, 0x00, 0x00
};

u8 D_800ACA6C[12] = {
    0xAF, 0xB0, 0xB1, 0xB2, 
    0xB3, 0xB4, 0xB5, 0xB6, 
    0xB7, 0xB8, 0xF7, 0xF8
};

s32 D_800ACA78[100] = {
    0, 10, 40, 100, 
    200, 350, 560, 840, 
    1200, 1650, 2200, 2860, 
    3640, 4550, 5600, 6800, 
    8160, 9690, 11400, 13300, 
    15400, 17710, 20240, 23000, 
    26000, 29250, 32760, 36540, 
    40600, 44950, 49600, 54560, 
    59840, 65450, 71400, 77700, 
    84360, 91390, 98800, 106600, 
    114800, 123410, 132440, 141900, 
    151800, 162150, 172960, 184240, 
    196000, 108250, 221000, 234260, 
    248040, 262350, 277200, 292600,
    308560, 325090, 342200, 359900, 
    378200, 397110, 416640, 436800, 
    457600, 479050, 501160, 523940, 
    547400, 571550, 596400, 621960, 
    648240, 675250, 703000, 731500, 
    760760, 790790, 821600, 853200, 
    885600, 918810, 952840, 987700, 
    1023400, 1059950, 1097360, 1135640, 
    1174800, 1214850, 1255800, 1297660, 
    1340440, 1384150, 1428800, 1474400,
    1520960, 1568490, 1617000, 1666500
};

u16 D_800ACC08[16] = {
    0x8000, 0xC000, 0xE000, 0xF000,
    0xF800, 0xFC00, 0xFE00, 0xFF00,
    0xFF80, 0xFFC0, 0xFFE0, 0xFFF0,
    0xFFF8, 0xFFFC, 0xFFFE, 0xFFFF
};

u8 D_800ACC28[20] = {
    43, 56, 25, 48,
    10, 49, 30, 45,
    9, 29, 44, 58,
    22, 39, 11, 57,
    52, 17, 54, 18
};

u8 D_800ACC3C[12] = {
    42, 12, 56, 14,
    50, 13, 43, 27,
    59, 55, 15, 53
};

u8 D_800ACC48[11] = {
    0, 47, 2, 49,
    26, 51, 1, 60,
    40, 3, 23
};

u8 * D_800ACC54[4] = {
    D_800ACC28, 
    D_800ACC28, 
    D_800ACC3C,
    D_800ACC48
};

struct demon_data {
    u8 race;
    // u8 pad;
    s16 hp;
    s16 mp;
    u8 level;
    s8 str;
    s8 itl;
    s8 mag;
    s8 vit;
    s8 spd;
    s8 lck;
    u8 alignment;
    u8 moon;
    u8 resist;
    u8 atkn; // Number of attacks.
    u8 unk11;
    u8 skills[3];
    u8 unk15;
    u8 drop;
    u8 unk17;
    u8 cp;
    u8 unk19;
};


struct demon_data DemonData[294] = {
    {
        .race=0, .hp=990, .mp=822, .level=82,
        .str=36, .itl=18, .mag=19, .vit=20, .spd=20, .lck=15,
        .alignment=50, .atkn=0, .moon=17, .resist=5, .unk11=0,
        .skills={SKILL_MEGIDO, SKILL_MAHAMA, SKILL_DIARAHAN},
        .unk15=112, .drop=0, .unk17=119, .cp=57, .unk19=0
    },
    {
        .race=0, .hp=840, .mp=999, .level=72,
        .str=35, .itl=13, .mag=14, .vit=20, .spd=21, .lck=14,
        .alignment=72, .atkn=0, .moon=22, .resist=5, .unk11=0,
        .skills={SKILL_ZIONGA, SKILL_MAZIONGA, SKILL_TETRAJA},
        .unk15=0, .drop=0, .unk17=0, .cp=53, .unk19=0
    },
    {
        .race=0, .hp=818, .mp=998, .level=64,
        .str=34, .itl=14, .mag=15, .vit=22, .spd=13, .lck=11,
        .alignment=64, .atkn=0, .moon=20, .resist=7, .unk11=0,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_MAHAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=49, .unk19=0
    },
    {
        .race=0, .hp=760, .mp=526, .level=58,
        .str=31, .itl=18, .mag=19, .vit=16, .spd=10, .lck=10,
        .alignment=78, .atkn=0, .moon=22, .resist=7, .unk11=0,
        .skills={SKILL_MABUFULA, SKILL_MAKARAKARN, SKILL_TENTARAFOO},
        .unk15=0, .drop=0, .unk17=0, .cp=45, .unk19=0
    },
    {
        .race=0, .hp=630, .mp=732, .level=51,
        .str=29, .itl=12, .mag=15, .vit=17, .spd=12, .lck=10,
        .alignment=75, .atkn=0, .moon=22, .resist=4, .unk11=0,
        .skills={SKILL_MAHAMA, SKILL_DORMINA, SKILL_MAZIONGA},
        .unk15=0, .drop=0, .unk17=0, .cp=40, .unk19=0
    },
    {
        .race=0, .hp=455, .mp=501, .level=40,
        .str=22, .itl=14, .mag=13, .vit=14, .spd=12, .lck=8,
        .alignment=93, .atkn=0, .moon=22, .resist=4, .unk11=0,
        .skills={SKILL_MARAGION, SKILL_MARIN_KARIN, SKILL_TARUNDA},
        .unk15=0, .drop=0, .unk17=0, .cp=31, .unk19=0
    },
    {
        .race=1, .hp=767, .mp=299, .level=64,
        .str=22, .itl=15, .mag=23, .vit=12, .spd=20, .lck=20,
        .alignment=42, .atkn=1, .moon=19, .resist=8, .unk11=0,
        .skills={SKILL_MEDIARAHAN, SKILL_SAMARECARM, SKILL_PETRADI},
        .unk15=0, .drop=0, .unk17=0, .cp=43, .unk19=32
    },
    {
        .race=1, .hp=610, .mp=300, .level=50,
        .str=19, .itl=15, .mag=19, .vit=13, .spd=12, .lck=17,
        .alignment=48, .atkn=1, .moon=19, .resist=5, .unk11=0,
        .skills={SKILL_DIARAHAN, SKILL_SAMARECARM, SKILL_MARIN_KARIN},
        .unk15=0, .drop=0, .unk17=0, .cp=35, .unk19=32
    },
    {
        .race=1, .hp=450, .mp=280, .level=39,
        .str=14, .itl=22, .mag=19, .vit=9, .spd=9, .lck=9,
        .alignment=56, .atkn=2, .moon=19, .resist=5, .unk11=0,
        .skills={SKILL_TETRAKARN, SKILL_MAKARAKARN, SKILL_MAKAKAJA},
        .unk15=0, .drop=0, .unk17=0, .cp=29, .unk19=32
    },
    {
        .race=1, .hp=252, .mp=210, .level=28,
        .str=9, .itl=13, .mag=16, .vit=11, .spd=10, .lck=12,
        .alignment=63, .atkn=1, .moon=19, .resist=5, .unk11=0,
        .skills={SKILL_MAKATRANDA, SKILL_ESTOMA, SKILL_MAKATORA},
        .unk15=0, .drop=0, .unk17=0, .cp=22, .unk19=32
    },
    {
        .race=1, .hp=155, .mp=128, .level=16,
        .str=11, .itl=9, .mag=11, .vit=10, .spd=12, .lck=8,
        .alignment=70, .atkn=3, .moon=19, .resist=7, .unk11=0,
        .skills={SKILL_SEXY_DANCE, SKILL_JOY_SONG, SKILL_DIARAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=17, .unk19=32
    },
    {
        .race=2, .hp=999, .mp=340, .level=116,
        .str=40, .itl=27, .mag=29, .vit=24, .spd=25, .lck=20,
        .alignment=241, .atkn=0, .moon=35, .resist=7, .unk11=0,
        .skills={SKILL_MARAGION, SKILL_MAZIONGA, SKILL_MEGIDO},
        .unk15=0, .drop=0, .unk17=0, .cp=74, .unk19=0
    },
    {
        .race=2, .hp=960, .mp=310, .level=88,
        .str=37, .itl=16, .mag=19, .vit=21, .spd=26, .lck=17,
        .alignment=251, .atkn=0, .moon=28, .resist=5, .unk11=0,
        .skills={SKILL_MAZIONGA, SKILL_ZIONGA, SKILL_DEATH_ROAD},
        .unk15=0, .drop=0, .unk17=0, .cp=67, .unk19=0
    },
    {
        .race=2, .hp=800, .mp=280, .level=80,
        .str=35, .itl=15, .mag=15, .vit=29, .spd=16, .lck=15,
        .alignment=234, .atkn=0, .moon=22, .resist=4, .unk11=0,
        .skills={SKILL_MAHAMA, SKILL_MARAGION, SKILL_TENTARAFOO},
        .unk15=0, .drop=0, .unk17=0, .cp=53, .unk19=0
    },
    {
        .race=2, .hp=830, .mp=300, .level=73,
        .str=31, .itl=12, .mag=11, .vit=21, .spd=30, .lck=12,
        .alignment=227, .atkn=0, .moon=22, .resist=8, .unk11=0,
        .skills={SKILL_MAZANMA, SKILL_ZANMA, SKILL_NEEDLE_RUSH},
        .unk15=0, .drop=0, .unk17=0, .cp=51, .unk19=0
    },
    {
        .race=2, .hp=850, .mp=240, .level=67,
        .str=33, .itl=15, .mag=16, .vit=18, .spd=18, .lck=11,
        .alignment=210, .atkn=0, .moon=22, .resist=4, .unk11=10,
        .skills={SKILL_ZIONGA, SKILL_MAZIONGA, SKILL_MAKARAKARN},
        .unk15=0, .drop=0, .unk17=0, .cp=49, .unk19=0
    },
    {
        .race=2, .hp=900, .mp=64, .level=60,
        .str=27, .itl=17, .mag=20, .vit=17, .spd=15, .lck=9,
        .alignment=202, .atkn=0, .moon=28, .resist=4, .unk11=22,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_MUDOON},
        .unk15=0, .drop=0, .unk17=0, .cp=46, .unk19=0
    },
    {
        .race=2, .hp=728, .mp=256, .level=53,
        .str=26, .itl=16, .mag=16, .vit=18, .spd=13, .lck=10,
        .alignment=238, .atkn=0, .moon=28, .resist=4, .unk11=22,
        .skills={SKILL_ZANMA, SKILL_MAZANMA, SKILL_DIARAHAN},
        .unk15=0, .drop=0, .unk17=0, .cp=42, .unk19=0
    },
    {
        .race=2, .hp=565, .mp=235, .level=47,
        .str=25, .itl=10, .mag=10, .vit=20, .spd=20, .lck=8,
        .alignment=211, .atkn=0, .moon=7, .resist=0, .unk11=0,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_MAHAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=32, .unk19=0
    },
    {
        .race=3, .hp=880, .mp=180, .level=75,
        .str=37, .itl=16, .mag=21, .vit=22, .spd=17, .lck=10,
        .alignment=168, .atkn=0, .moon=23, .resist=4, .unk11=10,
        .skills={SKILL_DIARAMA, SKILL_MABUFULA, SKILL_MAHAMA},
        .unk15=80, .drop=0, .unk17=0, .cp=51, .unk19=0
    },
    {
        .race=3, .hp=660, .mp=170, .level=68,
        .str=35, .itl=10, .mag=13, .vit=28, .spd=19, .lck=9,
        .alignment=176, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_SHIBABOO, SKILL_TETRAJA, SKILL_FIRE_BREATH},
        .unk15=80, .drop=0, .unk17=0, .cp=47, .unk19=0
    },
    {
        .race=3, .hp=656, .mp=161, .level=65,
        .str=34, .itl=9, .mag=12, .vit=20, .spd=23, .lck=12,
        .alignment=150, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_ZIONGA, SKILL_MAZIONGA, SKILL_TRAESTO},
        .unk15=80, .drop=0, .unk17=0, .cp=45, .unk19=0
    },
    {
        .race=3, .hp=707, .mp=151, .level=63,
        .str=34, .itl=11, .mag=16, .vit=18, .spd=19, .lck=10,
        .alignment=146, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_MARAGION, SKILL_AGILAO, SKILL_FIRE_WALL},
        .unk15=80, .drop=0, .unk17=0, .cp=43, .unk19=0
    },
    {
        .race=3, .hp=630, .mp=148, .level=59,
        .str=33, .itl=10, .mag=11, .vit=28, .spd=13, .lck=9,
        .alignment=159, .atkn=0, .moon=23, .resist=0, .unk11=5,
        .skills={SKILL_AGILAO, SKILL_TARUKAJA, SKILL_DIARAMA},
        .unk15=80, .drop=0, .unk17=0, .cp=40, .unk19=0
    },
    {
        .race=3, .hp=660, .mp=145, .level=57,
        .str=31, .itl=12, .mag=20, .vit=16, .spd=15, .lck=8,
        .alignment=152, .atkn=0, .moon=23, .resist=0, .unk11=24,
        .skills={SKILL_MAZANMA, SKILL_ZANMA, SKILL_SHIBABOO},
        .unk15=80, .drop=0, .unk17=0, .cp=38, .unk19=0
    },
    {
        .race=3, .hp=640, .mp=108, .level=55,
        .str=32, .itl=9, .mag=11, .vit=13, .spd=26, .lck=9,
        .alignment=149, .atkn=0, .moon=23, .resist=0, .unk11=22,
        .skills={SKILL_MAZIONGA, SKILL_TARUKAJA, SKILL_SUKUKAJA},
        .unk15=80, .drop=0, .unk17=0, .cp=36, .unk19=0
    },
    {
        .race=3, .hp=540, .mp=110, .level=46,
        .str=29, .itl=11, .mag=13, .vit=14, .spd=15, .lck=8,
        .alignment=166, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_ZIONGA, SKILL_PENPATRA, SKILL_MAKAJAMA},
        .unk15=80, .drop=0, .unk17=0, .cp=31, .unk19=0
    },
    {
        .race=3, .hp=490, .mp=90, .level=43,
        .str=28, .itl=9, .mag=10, .vit=15, .spd=14, .lck=10,
        .alignment=164, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_MAZIONGA, SKILL_BUFULA, SKILL_SHIBABOO},
        .unk15=15, .drop=20, .unk17=0, .cp=29, .unk19=0
    },
    {
        .race=3, .hp=402, .mp=120, .level=38,
        .str=23, .itl=11, .mag=12, .vit=17, .spd=9, .lck=9,
        .alignment=177, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_ZANMA, SKILL_RIMDORA, SKILL_MEDIARAHAN},
        .unk15=0, .drop=0, .unk17=0, .cp=27, .unk19=0
    },
    {
        .race=3, .hp=282, .mp=142, .level=31,
        .str=20, .itl=9, .mag=13, .vit=12, .spd=10, .lck=9,
        .alignment=168, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_MAKATRANDA, SKILL_MAKATORA, SKILL_SABATOMA},
        .unk15=0, .drop=0, .unk17=0, .cp=21, .unk19=0
    },
    {
        .race=3, .hp=201, .mp=80, .level=23,
        .str=17, .itl=10, .mag=9, .vit=11, .spd=9, .lck=9,
        .alignment=170, .atkn=0, .moon=23, .resist=0, .unk11=0,
        .skills={SKILL_ZANMA, SKILL_BUFULA, SKILL_MUDO},
        .unk15=0, .drop=0, .unk17=0, .cp=19, .unk19=0
    },
    {
        .race=4, .hp=999, .mp=400, .level=110,
        .str=40, .itl=24, .mag=24, .vit=24, .spd=24, .lck=24,
        .alignment=10, .atkn=0, .moon=35, .resist=8, .unk11=21,
        .skills={SKILL_DIARAHAN, SKILL_MARAGION, SKILL_MEGIDO},
        .unk15=0, .drop=0, .unk17=0, .cp=72, .unk19=0
    },
    {
        .race=4, .hp=930, .mp=370, .level=96,
        .str=34, .itl=19, .mag=19, .vit=34, .spd=19, .lck=19,
        .alignment=21, .atkn=0, .moon=19, .resist=7, .unk11=22,
        .skills={SKILL_MAZIONGA, SKILL_DIARAHAN, SKILL_MEDIARAHAN},
        .unk15=0, .drop=0, .unk17=0, .cp=64, .unk19=0
    },
    {
        .race=4, .hp=940, .mp=380, .level=91,
        .str=28, .itl=18, .mag=28, .vit=18, .spd=28, .lck=18,
        .alignment=34, .atkn=0, .moon=19, .resist=7, .unk11=14,
        .skills={SKILL_BUFULA, SKILL_MABUFULA, SKILL_MAZIONGA},
        .unk15=0, .drop=0, .unk17=0, .cp=57, .unk19=0
    },
    {
        .race=4, .hp=900, .mp=340, .level=83,
        .str=30, .itl=17, .mag=17, .vit=30, .spd=17, .lck=17,
        .alignment=42, .atkn=0, .moon=19, .resist=8, .unk11=10,
        .skills={SKILL_MAZANMA, SKILL_SHIBABOO, SKILL_SAMARECARM},
        .unk15=0, .drop=0, .unk17=0, .cp=53, .unk19=0
    },
    {
        .race=5, .hp=800, .mp=310, .level=67,
        .str=30, .itl=17, .mag=17, .vit=22, .spd=17, .lck=17,
        .alignment=34, .atkn=0, .moon=19, .resist=7, .unk11=0,
        .skills={SKILL_MAZANMA, SKILL_MAKAKAJA, SKILL_TRAESTO},
        .unk15=32, .drop=0, .unk17=0, .cp=45, .unk19=0
    },
    {
        .race=5, .hp=720, .mp=290, .level=61,
        .str=28, .itl=16, .mag=16, .vit=16, .spd=16, .lck=20,
        .alignment=38, .atkn=0, .moon=19, .resist=0, .unk11=0,
        .skills={SKILL_MEDIARAHAN, SKILL_ESTOMA, SKILL_RECARM},
        .unk15=32, .drop=0, .unk17=0, .cp=42, .unk19=0
    },
    {
        .race=5, .hp=630, .mp=260, .level=52,
        .str=26, .itl=14, .mag=14, .vit=18, .spd=14, .lck=14,
        .alignment=46, .atkn=0, .moon=19, .resist=0, .unk11=0,
        .skills={SKILL_ZIONGA, SKILL_TARUNDA, SKILL_MARIN_KARIN},
        .unk15=32, .drop=0, .unk17=0, .cp=36, .unk19=0
    },
    {
        .race=5, .hp=550, .mp=160, .level=46,
        .str=22, .itl=17, .mag=17, .vit=17, .spd=13, .lck=13,
        .alignment=52, .atkn=0, .moon=19, .resist=0, .unk11=0,
        .skills={SKILL_MARAGION, SKILL_MEDIARAHAN, SKILL_RECARMDRA},
        .unk15=32, .drop=0, .unk17=2, .cp=32, .unk19=0
    },
    {
        .race=5, .hp=420, .mp=150, .level=40,
        .str=24, .itl=11, .mag=11, .vit=20, .spd=11, .lck=11,
        .alignment=56, .atkn=0, .moon=19, .resist=0, .unk11=0,
        .skills={SKILL_MAHAMA, SKILL_TARUKAJA, SKILL_RAKUKAJA},
        .unk15=32, .drop=0, .unk17=2, .cp=30, .unk19=0
    },
    {
        .race=5, .hp=323, .mp=140, .level=34,
        .str=20, .itl=12, .mag=12, .vit=12, .spd=12, .lck=12,
        .alignment=61, .atkn=0, .moon=19, .resist=0, .unk11=0,
        .skills={SKILL_AGILAO, SKILL_HAMA, SKILL_DIARAMA},
        .unk15=19, .drop=212, .unk17=158, .cp=27, .unk19=98
    },
    {
        .race=5, .hp=70, .mp=60, .level=14,
        .str=14, .itl=8, .mag=8, .vit=8, .spd=8, .lck=12,
        .alignment=65, .atkn=0, .moon=19, .resist=0, .unk11=16,
        .skills={SKILL_MEDIA, SKILL_HAMA, SKILL_PENPATRA},
        .unk15=19, .drop=212, .unk17=158, .cp=14, .unk19=98
    },
    {
        .race=6, .hp=930, .mp=140, .level=74,
        .str=38, .itl=15, .mag=19, .vit=17, .spd=20, .lck=14,
        .alignment=184, .atkn=0, .moon=8, .resist=0, .unk11=0,
        .skills={SKILL_STUN_BITE, SKILL_BERSERK, SKILL_TAIL},
        .unk15=0, .drop=0, .unk17=0, .cp=48, .unk19=0
    },
    {
        .race=6, .hp=810, .mp=150, .level=67,
        .str=30, .itl=15, .mag=18, .vit=20, .spd=19, .lck=12,
        .alignment=173, .atkn=0, .moon=10, .resist=0, .unk11=0,
        .skills={SKILL_MEDIARAHAN, SKILL_BERSERK, SKILL_SQUASH},
        .unk15=0, .drop=0, .unk17=0, .cp=44, .unk19=0
    },
    {
        .race=6, .hp=780, .mp=120, .level=62,
        .str=31, .itl=10, .mag=13, .vit=15, .spd=20, .lck=19,
        .alignment=169, .atkn=0, .moon=20, .resist=0, .unk11=0,
        .skills={SKILL_FIRE_BREATH, SKILL_TAIL, SKILL_FERAL_BITE},
        .unk15=0, .drop=0, .unk17=0, .cp=40, .unk19=0
    },
    {
        .race=6, .hp=710, .mp=110, .level=56,
        .str=29, .itl=12, .mag=14, .vit=14, .spd=22, .lck=11,
        .alignment=196, .atkn=0, .moon=8, .resist=0, .unk11=0,
        .skills={SKILL_VENOM_BITE, SKILL_VENOM_BREATH, SKILL_TAIL},
        .unk15=5, .drop=47, .unk17=0, .cp=37, .unk19=0
    },
    {
        .race=6, .hp=580, .mp=100, .level=49,
        .str=26, .itl=12, .mag=16, .vit=12, .spd=16, .lck=12,
        .alignment=161, .atkn=2, .moon=8, .resist=0, .unk11=0,
        .skills={SKILL_MAZIONGA, SKILL_MEDIARAHAN, SKILL_PETRADI},
        .unk15=0, .drop=0, .unk17=0, .cp=33, .unk19=0
    },
    {
        .race=6, .hp=555, .mp=90, .level=44,
        .str=21, .itl=10, .mag=15, .vit=11, .spd=15, .lck=15,
        .alignment=171, .atkn=3, .moon=10, .resist=0, .unk11=0,
        .skills={SKILL_HAMA, SKILL_MUDO, SKILL_SAMARECARM},
        .unk15=0, .drop=0, .unk17=0, .cp=29, .unk19=0
    },
    {
        .race=7, .hp=757, .mp=323, .level=72,
        .str=18, .itl=20, .mag=19, .vit=16, .spd=28, .lck=16,
        .alignment=28, .atkn=0, .moon=3, .resist=8, .unk11=0,
        .skills={SKILL_DEADLY_HIT, SKILL_WING_FLAP, SKILL_MAKAJAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=43, .unk19=0
    },
    {
        .race=7, .hp=688, .mp=299, .level=65,
        .str=17, .itl=18, .mag=18, .vit=15, .spd=26, .lck=16,
        .alignment=30, .atkn=0, .moon=7, .resist=8, .unk11=0,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_WING_FLAP},
        .unk15=0, .drop=0, .unk17=0, .cp=38, .unk19=0
    },
    {
        .race=7, .hp=600, .mp=240, .level=57,
        .str=16, .itl=16, .mag=16, .vit=17, .spd=25, .lck=13,
        .alignment=31, .atkn=0, .moon=7, .resist=8, .unk11=0,
        .skills={SKILL_DIARAMA, SKILL_FIRE_BREATH, SKILL_SAMARECARM},
        .unk15=0, .drop=0, .unk17=0, .cp=34, .unk19=0
    },
    {
        .race=7, .hp=477, .mp=199, .level=47,
        .str=15, .itl=15, .mag=15, .vit=11, .spd=23, .lck=14,
        .alignment=32, .atkn=0, .moon=3, .resist=8, .unk11=0,
        .skills={SKILL_FERAL_CLAW, SKILL_WING_FLAP, SKILL_MUDO},
        .unk15=0, .drop=0, .unk17=0, .cp=30, .unk19=0
    },
    {
        .race=7, .hp=316, .mp=202, .level=36,
        .str=12, .itl=11, .mag=12, .vit=14, .spd=21, .lck=11,
        .alignment=34, .atkn=0, .moon=17, .resist=8, .unk11=0,
        .skills={SKILL_DIARAMA, SKILL_MEDIA, SKILL_RECARM},
        .unk15=0, .drop=0, .unk17=0, .cp=25, .unk19=0
    },
    {
        .race=8, .hp=700, .mp=100, .level=62,
        .str=31, .itl=13, .mag=16, .vit=17, .spd=20, .lck=12,
        .alignment=115, .atkn=0, .moon=2, .resist=0, .unk11=0,
        .skills={SKILL_FIRE_BREATH, SKILL_BIND_VOICE, SKILL_PENPATRA},
        .unk15=0, .drop=0, .unk17=0, .cp=40, .unk19=0
    },
    {
        .race=8, .hp=650, .mp=90, .level=55,
        .str=29, .itl=9, .mag=11, .vit=18, .spd=21, .lck=13,
        .alignment=116, .atkn=0, .moon=20, .resist=0, .unk11=0,
        .skills={SKILL_FIRE_BREATH, SKILL_FERAL_BITE, SKILL_FERAL_CLAW},
        .unk15=0, .drop=0, .unk17=0, .cp=36, .unk19=0
    },
    {
        .race=8, .hp=590, .mp=80, .level=52,
        .str=25, .itl=10, .mag=12, .vit=19, .spd=18, .lck=12,
        .alignment=113, .atkn=0, .moon=2, .resist=0, .unk11=0,
        .skills={SKILL_BIND_VOICE, SKILL_FERAL_BITE, SKILL_MAHAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=33, .unk19=0
    },
    {
        .race=8, .hp=525, .mp=75, .level=42,
        .str=23, .itl=8, .mag=10, .vit=21, .spd=10, .lck=14,
        .alignment=114, .atkn=0, .moon=17, .resist=0, .unk11=0,
        .skills={SKILL_DIARAHAN, SKILL_MEDIA, SKILL_RECARMDRA},
        .unk15=0, .drop=0, .unk17=0, .cp=28, .unk19=0
    },
    {
        .race=9, .hp=505, .mp=65, .level=41,
        .str=23, .itl=10, .mag=12, .vit=24, .spd=9, .lck=13,
        .alignment=75, .atkn=0, .moon=10, .resist=0, .unk11=0,
        .skills={SKILL_TACKLE, SKILL_ICE_BREATH, SKILL_MAHAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=27, .unk19=0
    },
    {
        .race=9, .hp=380, .mp=70, .level=38,
        .str=22, .itl=9, .mag=12, .vit=13, .spd=14, .lck=15,
        .alignment=67, .atkn=0, .moon=17, .resist=0, .unk11=0,
        .skills={SKILL_ESTOMA, SKILL_RECARM, SKILL_HAMA},
        .unk15=0, .drop=0, .unk17=0, .cp=24, .unk19=0
    },
    {
        .race=9, .hp=290, .mp=60, .level=31,
        .str=19, .itl=10, .mag=11, .vit=15, .spd=11, .lck=11,
        .alignment=71, .atkn=0, .moon=17, .resist=0, .unk11=0,
        .skills={SKILL_STUN_NEEDLE, SKILL_TETRAKARN, SKILL_PETRADI},
        .unk15=0, .drop=0, .unk17=0, .cp=21, .unk19=0
    },
    {
        .race=9, .hp=171, .mp=51, .level=22,
        .str=16, .itl=6, .mag=10, .vit=10, .spd=12, .lck=12,
        .alignment=70, .atkn=0, .moon=17, .resist=0, .unk11=0,
        .skills={SKILL_DIARAMA, SKILL_TRAFURI, SKILL_PARALADI},
        .unk15=0, .drop=0, .unk17=0, .cp=15, .unk19=0
    },
    {
        .race=9, .hp=131, .mp=41, .level=17,
        .str=14, .itl=7, .mag=7, .vit=9, .spd=10, .lck=14,
        .alignment=69, .atkn=0, .moon=17, .resist=0, .unk11=0,
        .skills={SKILL_HAMA, SKILL_PENPATRA, SKILL_TACKLE},
        .unk15=0, .drop=0, .unk17=0, .cp=13, .unk19=0
    },
    {
        .race=10, .hp=160, .mp=55, .level=40,
        .str=23, .itl=9, .mag=10, .vit=13, .spd=20, .lck=15,
        .alignment=130, .atkn=0, .moon=7, .resist=0, .unk11=0,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_ESTOMA},
        .unk15=0, .drop=0, .unk17=0, .cp=18, .unk19=0
    },
    {
        .race=10, .hp=200, .mp=60, .level=30,
        .str=15, .itl=10, .mag=12, .vit=15, .spd=18, .lck=10,
        .alignment=129, .atkn=0, .moon=8, .resist=0, .unk11=0,
        .skills={SKILL_DIARAHAN, SKILL_MEDIARAHAN, SKILL_ZIONGA},
        .unk15=0, .drop=0, .unk17=0, .cp=14, .unk19=32
    },
    {
        .race=10, .hp=99, .mp=70, .level=25,
        .str=13, .itl=14, .mag=11, .vit=7, .spd=22, .lck=8,
        .alignment=128, .atkn=0, .moon=9, .resist=7, .unk11=0,
        .skills={SKILL_BUFULA, SKILL_MAZIO, SKILL_PULINPA},
        .unk15=0, .drop=0, .unk17=0, .cp=11, .unk19=32
    },
    {
        .race=10, .hp=100, .mp=50, .level=20,
        .str=18, .itl=8, .mag=12, .vit=16, .spd=10, .lck=6,
        .alignment=127, .atkn=0, .moon=10, .resist=0, .unk11=0,
        .skills={SKILL_HAMA, SKILL_MAZANMA, SKILL_TETRAJA},
        .unk15=0, .drop=0, .unk17=0, .cp=12, .unk19=0
    },
    {
        .race=10, .hp=60, .mp=36, .level=17,
        .str=19, .itl=7, .mag=8, .vit=7, .spd=13, .lck=8,
        .alignment=129, .atkn=0, .moon=7, .resist=0, .unk11=0,
        .skills={SKILL_AGILAO, SKILL_MARAGI, SKILL_FIRE_WALL},
        .unk15=0, .drop=0, .unk17=0, .cp=9, .unk19=0
    },
    {
        .race=10, .hp=50, .mp=38, .level=14,
        .str=11, .itl=8, .mag=13, .vit=12, .spd=9, .lck=6,
        .alignment=128, .atkn=0, .moon=8, .resist=0, .unk11=0,
        .skills={SKILL_DIARAMA, SKILL_MEDIA, SKILL_ZIONGA},
        .unk15=0, .drop=0, .unk17=0, .cp=7, .unk19=0
    },
    {
        .race=10, .hp=45, .mp=34, .level=11,
        .str=8, .itl=12, .mag=10, .vit=6, .spd=15, .lck=5,
        .alignment=127, .atkn=0, .moon=9, .resist=4, .unk11=0,
        .skills={SKILL_MAZAN, SKILL_BUFULA, SKILL_HAPIRMA},
        .unk15=0, .drop=0, .unk17=0, .cp=6, .unk19=0
    },
    {
        .race=10, .hp=40, .mp=26, .level=8,
        .str=10, .itl=7, .mag=11, .vit=14, .spd=6, .lck=5,
        .alignment=126, .atkn=0, .moon=10, .resist=0, .unk11=0,
        .skills={SKILL_RAKUKAJA, SKILL_SUKUKAJA, SKILL_TARUKAJA},
        .unk15=0, .drop=0, .unk17=0, .cp=5, .unk19=0
    },
    {
        .race=11, .hp=747, .mp=171, .level=69,
        .str=36, .itl=12, .mag=16, .vit=18, .spd=24, .lck=10,
        .alignment=242, .atkn=3, .moon=23, .resist=8, .unk11=10,
        .skills={SKILL_DEATHTOUCH, SKILL_TENTARAFOO, SKILL_MUDOON},
        .unk15=32, .drop=180, .unk17=203, .cp=39, .unk19=32
    },
    {
        .race=11, .hp=644, .mp=155, .level=61,
        .str=33, .itl=11, .mag=13, .vit=18, .spd=23, .lck=9,
        .alignment=238, .atkn=3, .moon=23, .resist=7, .unk11=16,
        .skills={SKILL_DEATHTOUCH, SKILL_DORMINA, SKILL_DIARAHAN},
        .unk15=16, .drop=180, .unk17=236, .cp=34, .unk19=32
    },
    {
        .race=11, .hp=568, .mp=142, .level=54,
        .str=28, .itl=10, .mag=14, .vit=15, .spd=21, .lck=8,
        .alignment=233, .atkn=5, .moon=26, .resist=0, .unk11=10,
        .skills={SKILL_SHIBABOO, SKILL_HAPPY_STEP, SKILL_MARIN_KARIN},
        .unk15=16, .drop=180, .unk17=146, .cp=31, .unk19=32
    },
    {
        .race=11, .hp=560, .mp=110, .level=49,
        .str=20, .itl=10, .mag=13, .vit=16, .spd=20, .lck=11,
        .alignment=229, .atkn=7, .moon=8, .resist=10, .unk11=16,
        .skills={SKILL_RAZOR_WIRE, SKILL_DIARAMA, SKILL_WATER_WALL},
        .unk15=32, .drop=180, .unk17=1, .cp=29, .unk19=33
    },
    {
        .race=11, .hp=484, .mp=131, .level=45,
        .str=24, .itl=9, .mag=13, .vit=13, .spd=18, .lck=10,
        .alignment=231, .atkn=23, .moon=23, .resist=4, .unk11=15,
        .skills={SKILL_DEATHTOUCH, SKILL_MARAGION, SKILL_SEXY_DANCE},
        .unk15=16, .drop=180, .unk17=203, .cp=27, .unk19=33
    },
    {
        .race=11, .hp=404, .mp=121, .level=39,
        .str=21, .itl=9, .mag=10, .vit=19, .spd=15, .lck=6,
        .alignment=240, .atkn=23, .moon=25, .resist=0, .unk11=17,
        .skills={SKILL_MAKARAKARN, SKILL_PETRA_EYES, SKILL_MEDIARAHAN},
        .unk15=231, .drop=184, .unk17=202, .cp=24, .unk19=32
    },
    {
        .race=11, .hp=343, .mp=101, .level=36,
        .str=20, .itl=9, .mag=10, .vit=13, .spd=18, .lck=7,
        .alignment=209, .atkn=33, .moon=23, .resist=4, .unk11=10,
        .skills={SKILL_MAZIO, SKILL_MAKATRANDA, SKILL_RAKUNDA},
        .unk15=215, .drop=33, .unk17=202, .cp=22, .unk19=32
    },
    {
        .race=11, .hp=252, .mp=98, .level=33,
        .str=17, .itl=8, .mag=11, .vit=16, .spd=15, .lck=6,
        .alignment=198, .atkn=33, .moon=1, .resist=0, .unk11=11,
        .skills={SKILL_ZIO, SKILL_RAKUKAJA, SKILL_CHARM_BITE},
        .unk15=214, .drop=26, .unk17=202, .cp=20, .unk19=33
    },
    {
        .race=12, .hp=660, .mp=220, .level=63,
        .str=30, .itl=13, .mag=13, .vit=15, .spd=26, .lck=12,
        .alignment=82, .atkn=0, .moon=9, .resist=7, .unk11=5,
        .skills={SKILL_MAZANMA, SKILL_TARUKAJA, SKILL_TRAPORT},
        .unk15=23, .drop=51, .unk17=220, .cp=36, .unk19=17
    },
    {
        .race=12, .hp=626, .mp=262, .level=60,
        .str=26, .itl=11, .mag=15, .vit=26, .spd=12, .lck=15,
        .alignment=88, .atkn=7, .moon=22, .resist=0, .unk11=5,
        .skills={SKILL_MUDO, SKILL_DIARAHAN, SKILL_NONE},
        .unk15=22, .drop=211, .unk17=220, .cp=34, .unk19=17
    },
    {
        .race=12, .hp=525, .mp=161, .level=55,
        .str=29, .itl=12, .mag=14, .vit=18, .spd=15, .lck=10,
        .alignment=90, .atkn=64, .moon=7, .resist=0, .unk11=11,
        .skills={SKILL_MARAGION, SKILL_SUKUKAJA, SKILL_RAKUKAJA},
        .unk15=224, .drop=180, .unk17=186, .cp=31, .unk19=17
    },
    {
        .race=12, .hp=585, .mp=232, .level=52,
        .str=24, .itl=14, .mag=16, .vit=11, .spd=21, .lck=8,
        .alignment=101, .atkn=80, .moon=9, .resist=0, .unk11=8,
        .skills={SKILL_SHIBABOO, SKILL_MAZANMA, SKILL_WING_FLAP},
        .unk15=213, .drop=43, .unk17=186, .cp=30, .unk19=17
    },
    {
        .race=12, .hp=505, .mp=202, .level=50,
        .str=23, .itl=16, .mag=18, .vit=12, .spd=16, .lck=8,
        .alignment=95, .atkn=48, .moon=22, .resist=0, .unk11=7,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_TRAESTO},
        .unk15=215, .drop=201, .unk17=186, .cp=28, .unk19=16
    },
    {
        .race=12, .hp=456, .mp=141, .level=43,
        .str=21, .itl=12, .mag=12, .vit=11, .spd=19, .lck=10,
        .alignment=98, .atkn=48, .moon=9, .resist=0, .unk11=10,
        .skills={SKILL_MAZANMA, SKILL_RAKUKAJA, SKILL_TARUKAJA},
        .unk15=208, .drop=180, .unk17=186, .cp=26, .unk19=17
    },
    {
        .race=12, .hp=501, .mp=191, .level=41,
        .str=17, .itl=14, .mag=19, .vit=13, .spd=11, .lck=9,
        .alignment=105, .atkn=32, .moon=17, .resist=0, .unk11=5,
        .skills={SKILL_MUDO, SKILL_SAMARECARM, SKILL_TRAPORT},
        .unk15=16, .drop=180, .unk17=156, .cp=24, .unk19=17
    },
    {
        .race=12, .hp=246, .mp=181, .level=37,
        .str=13, .itl=13, .mag=17, .vit=15, .spd=14, .lck=8,
        .alignment=100, .atkn=64, .moon=25, .resist=4, .unk11=10,
        .skills={SKILL_ZANMA, SKILL_PETRA_EYES, SKILL_RIMDORA},
        .unk15=39, .drop=196, .unk17=137, .cp=22, .unk19=0
    },
    {
        .race=12, .hp=313, .mp=131, .level=34,
        .str=15, .itl=11, .mag=14, .vit=10, .spd=19, .lck=7,
        .alignment=102, .atkn=24, .moon=8, .resist=0, .unk11=11,
        .skills={SKILL_ZIONGA, SKILL_DIARAMA, SKILL_WATER_WALL},
        .unk15=213, .drop=32, .unk17=186, .cp=20, .unk19=17
    },
    {
        .race=12, .hp=152, .mp=140, .level=21,
        .str=11, .itl=12, .mag=11, .vit=8, .spd=13, .lck=7,
        .alignment=104, .atkn=18, .moon=8, .resist=0, .unk11=22,
        .skills={SKILL_RAKUKAJA, SKILL_MAKAJAMA, SKILL_MEDIA},
        .unk15=23, .drop=15, .unk17=14, .cp=12, .unk19=33
    },
    {
        .race=12, .hp=62, .mp=58, .level=15,
        .str=11, .itl=9, .mag=10, .vit=8, .spd=11, .lck=6,
        .alignment=108, .atkn=17, .moon=7, .resist=0, .unk11=21,
        .skills={SKILL_AGILAO, SKILL_BUFULA, SKILL_HAPIRMA},
        .unk15=23, .drop=233, .unk17=14, .cp=9, .unk19=32
    },
    {
        .race=13, .hp=590, .mp=340, .level=62,
        .str=26, .itl=23, .mag=20, .vit=14, .spd=18, .lck=8,
        .alignment=248, .atkn=40, .moon=24, .resist=7, .unk11=20,
        .skills={SKILL_CHARM_BITE, SKILL_MAZIONGA, SKILL_BLOOD_THIEF},
        .unk15=32, .drop=228, .unk17=173, .cp=38, .unk19=16
    },
    {
        .race=13, .hp=545, .mp=323, .level=54,
        .str=20, .itl=18, .mag=24, .vit=12, .spd=16, .lck=10,
        .alignment=240, .atkn=56, .moon=25, .resist=7, .unk11=18,
        .skills={SKILL_DEATHTOUCH, SKILL_DORMINA, SKILL_DEVILS_KISS},
        .unk15=23, .drop=209, .unk17=173, .cp=33, .unk19=33
    },
    {
        .race=13, .hp=499, .mp=288, .level=49,
        .str=18, .itl=19, .mag=22, .vit=14, .spd=13, .lck=8,
        .alignment=238, .atkn=39, .moon=25, .resist=4, .unk11=18,
        .skills={SKILL_DEATHTOUCH, SKILL_SHIBABOO, SKILL_DEVILS_KISS_ALT},
        .unk15=16, .drop=180, .unk17=173, .cp=28, .unk19=0
    },
    {
        .race=13, .hp=484, .mp=272, .level=44,
        .str=17, .itl=16, .mag=18, .vit=11, .spd=18, .lck=8,
        .alignment=223, .atkn=23, .moon=25, .resist=4, .unk11=21,
        .skills={SKILL_ZIONGA, SKILL_DORMINA, SKILL_PARAL_EYES},
        .unk15=231, .drop=202, .unk17=173, .cp=24, .unk19=32
    },
    {
        .race=13, .hp=355, .mp=266, .level=35,
        .str=14, .itl=14, .mag=16, .vit=10, .spd=16, .lck=9,
        .alignment=221, .atkn=39, .moon=25, .resist=0, .unk11=20,
        .skills={SKILL_MARAGI, SKILL_MUDO, SKILL_MARAGION},
        .unk15=208, .drop=180, .unk17=173, .cp=22, .unk19=1
    },
    {
        .race=13, .hp=144, .mp=153, .level=28,
        .str=11, .itl=14, .mag=16, .vit=9, .spd=12, .lck=10,
        .alignment=212, .atkn=40, .moon=25, .resist=0, .unk11=18,
        .skills={SKILL_BUFULA, SKILL_CHARM_BITE, SKILL_LULLABY},
        .unk15=231, .drop=237, .unk17=173, .cp=15, .unk19=33
    },
    {
        .race=13, .hp=62, .mp=82, .level=24,
        .str=12, .itl=16, .mag=12, .vit=7, .spd=10, .lck=9,
        .alignment=201, .atkn=40, .moon=14, .resist=0, .unk11=18,
        .skills={SKILL_ZANMA, SKILL_SHIBABOO, SKILL_DORMINA},
        .unk15=231, .drop=204, .unk17=1, .cp=9, .unk19=2
    },
    {
        .race=13, .hp=39, .mp=55, .level=14,
        .str=10, .itl=12, .mag=11, .vit=7, .spd=7, .lck=9,
        .alignment=196, .atkn=71, .moon=14, .resist=0, .unk11=18,
        .skills={SKILL_ZIONGA, SKILL_MAKAKAJA, SKILL_HAMA},
        .unk15=55, .drop=203, .unk17=219, .cp=7, .unk19=1
    },
    {
        .race=13, .hp=22, .mp=40, .level=7,
        .str=7, .itl=11, .mag=8, .vit=6, .spd=10, .lck=5,
        .alignment=190, .atkn=39, .moon=25, .resist=0, .unk11=10,
        .skills={SKILL_SUKUNDA, SKILL_ZANMA, SKILL_DORMINA},
        .unk15=208, .drop=180, .unk17=203, .cp=3, .unk19=1
    },
    {
        .race=14, .hp=696, .mp=292, .level=64,
        .str=27, .itl=18, .mag=22, .vit=13, .spd=19, .lck=10,
        .alignment=132, .atkn=130, .moon=22, .resist=5, .unk11=14,
        .skills={SKILL_HAPIRMA, SKILL_MAKARAKARN, SKILL_MAZIONGA},
        .unk15=19, .drop=52, .unk17=172, .cp=36, .unk19=16
    },
    {
        .race=14, .hp=666, .mp=399, .level=61,
        .str=17, .itl=17, .mag=20, .vit=12, .spd=25, .lck=13,
        .alignment=134, .atkn=49, .moon=22, .resist=8, .unk11=18,
        .skills={SKILL_MARIN_KARIN, SKILL_MAZANMA, SKILL_TETRAKARN},
        .unk15=39, .drop=236, .unk17=172, .cp=34, .unk19=17
    },
    {
        .race=14, .hp=600, .mp=220, .level=59,
        .str=28, .itl=15, .mag=15, .vit=17, .spd=16, .lck=11,
        .alignment=114, .atkn=129, .moon=22, .resist=5, .unk11=10,
        .skills={SKILL_MAHAMA, SKILL_TARUKAJA, SKILL_MAKAJAMA},
        .unk15=23, .drop=237, .unk17=171, .cp=32, .unk19=16
    },
    {
        .race=14, .hp=580, .mp=190, .level=55,
        .str=25, .itl=15, .mag=13, .vit=18, .spd=15, .lck=11,
        .alignment=116, .atkn=129, .moon=22, .resist=5, .unk11=10,
        .skills={SKILL_ZANMA, SKILL_RAKUKAJA, SKILL_RAKUNDA},
        .unk15=23, .drop=233, .unk17=171, .cp=30, .unk19=16
    },
    {
        .race=14, .hp=550, .mp=150, .level=46,
        .str=20, .itl=16, .mag=12, .vit=19, .spd=12, .lck=9,
        .alignment=133, .atkn=77, .moon=11, .resist=0, .unk11=17,
        .skills={SKILL_BUFULA, SKILL_MABUFU, SKILL_DIARAHAN},
        .unk15=228, .drop=230, .unk17=171, .cp=26, .unk19=3
    },
    {
        .race=14, .hp=399, .mp=260, .level=40,
        .str=14, .itl=14, .mag=15, .vit=9, .spd=17, .lck=12,
        .alignment=126, .atkn=71, .moon=22, .resist=8, .unk11=11,
        .skills={SKILL_PULINPA, SKILL_MAZANMA, SKILL_DORMINA},
        .unk15=228, .drop=238, .unk17=171, .cp=23, .unk19=32
    },
    {
        .race=14, .hp=262, .mp=135, .level=36,
        .str=19, .itl=11, .mag=13, .vit=11, .spd=12, .lck=10,
        .alignment=131, .atkn=55, .moon=21, .resist=0, .unk11=15,
        .skills={SKILL_TARUKAJA, SKILL_MAKAKAJA, SKILL_MARAGION},
        .unk15=230, .drop=228, .unk17=171, .cp=20, .unk19=1
    },
    {
        .race=14, .hp=120, .mp=110, .level=26,
        .str=15, .itl=13, .mag=13, .vit=9, .spd=11, .lck=7,
        .alignment=118, .atkn=23, .moon=21, .resist=0, .unk11=14,
        .skills={SKILL_DORMINA, SKILL_ZIONGA, SKILL_DIARAMA},
        .unk15=232, .drop=233, .unk17=171, .cp=14, .unk19=34
    },
    {
        .race=14, .hp=132, .mp=82, .level=23,
        .str=16, .itl=9, .mag=8, .vit=12, .spd=12, .lck=6,
        .alignment=135, .atkn=71, .moon=21, .resist=0, .unk11=6,
        .skills={SKILL_SHIBABOO, SKILL_MAKAJAMA, SKILL_TRAESTO},
        .unk15=230, .drop=235, .unk17=171, .cp=12, .unk19=2
    },
    {
        .race=14, .hp=140, .mp=115, .level=18,
        .str=11, .itl=14, .mag=10, .vit=7, .spd=10, .lck=6,
        .alignment=130, .atkn=51, .moon=8, .resist=0, .unk11=10,
        .skills={SKILL_MARIN_KARIN, SKILL_DIARAMA, SKILL_MEDIA},
        .unk15=232, .drop=19, .unk17=171, .cp=11, .unk19=34
    },
    {
        .race=14, .hp=75, .mp=59, .level=15,
        .str=12, .itl=8, .mag=9, .vit=8, .spd=11, .lck=6,
        .alignment=124, .atkn=33, .moon=21, .resist=0, .unk11=11,
        .skills={SKILL_ZIO, SKILL_LULLABY, SKILL_HAPPY_STEP},
        .unk15=23, .drop=180, .unk17=2, .cp=9, .unk19=1
    },
    {
        .race=14, .hp=57, .mp=56, .level=12,
        .str=8, .itl=12, .mag=10, .vit=7, .spd=8, .lck=6,
        .alignment=112, .atkn=17, .moon=21, .resist=0, .unk11=20,
        .skills={SKILL_JOY_SONG, SKILL_MARIN_KARIN, SKILL_MEDIA},
        .unk15=23, .drop=12, .unk17=174, .cp=7, .unk19=34
    },
    {
        .race=14, .hp=45, .mp=46, .level=9,
        .str=7, .itl=8, .mag=12, .vit=5, .spd=7, .lck=6,
        .alignment=129, .atkn=16, .moon=7, .resist=0, .unk11=10,
        .skills={SKILL_AGI, SKILL_MARAGI, SKILL_AGILAO},
        .unk15=23, .drop=201, .unk17=220, .cp=6, .unk19=1
    },
    {
        .race=14, .hp=41, .mp=43, .level=8,
        .str=6, .itl=5, .mag=13, .vit=6, .spd=6, .lck=8,
        .alignment=122, .atkn=16, .moon=11, .resist=0, .unk11=10,
        .skills={SKILL_BUFU, SKILL_BUFULA, SKILL_MABUFU},
        .unk15=23, .drop=204, .unk17=220, .cp=5, .unk19=1
    },
    {
        .race=14, .hp=36, .mp=39, .level=6,
        .str=7, .itl=8, .mag=7, .vit=7, .spd=7, .lck=5,
        .alignment=132, .atkn=49, .moon=21, .resist=0, .unk11=18,
        .skills={SKILL_TARUKAJA, SKILL_SUKUKAJA, SKILL_MAKAKAJA},
        .unk15=20, .drop=8, .unk17=220, .cp=4, .unk19=2
    },
    {
        .race=14, .hp=15, .mp=16, .level=2,
        .str=2, .itl=8, .mag=9, .vit=3, .spd=8, .lck=8,
        .alignment=113, .atkn=145, .moon=9, .resist=0, .unk11=6,
        .skills={SKILL_HAPIRMA, SKILL_DIA, SKILL_ZIONGA},
        .unk15=39, .drop=230, .unk17=158, .cp=1, .unk19=34
    },
    {
        .race=15, .hp=711, .mp=277, .level=66,
        .str=30, .itl=17, .mag=19, .vit=18, .spd=16, .lck=11,
        .alignment=189, .atkn=32, .moon=7, .resist=0, .unk11=14,
        .skills={SKILL_AGILAO, SKILL_FIRE_WALL, SKILL_MARAGION},
        .unk15=22, .drop=54, .unk17=219, .cp=38, .unk19=16
    },
    {
        .race=15, .hp=655, .mp=266, .level=63,
        .str=29, .itl=14, .mag=17, .vit=17, .spd=20, .lck=10,
        .alignment=183, .atkn=32, .moon=11, .resist=0, .unk11=21,
        .skills={SKILL_BUFULA, SKILL_MABUFULA, SKILL_MAKAJAMA},
        .unk15=23, .drop=204, .unk17=203, .cp=36, .unk19=16
    },
    {
        .race=15, .hp=666, .mp=292, .level=60,
        .str=28, .itl=16, .mag=18, .vit=16, .spd=14, .lck=12,
        .alignment=199, .atkn=0, .moon=24, .resist=0, .unk11=16,
        .skills={SKILL_FIRE_BREATH, SKILL_ICE_BREATH, SKILL_VENOM_BREATH},
        .unk15=230, .drop=46, .unk17=218, .cp=35, .unk19=17
    },
    {
        .race=15, .hp=616, .mp=252, .level=57,
        .str=27, .itl=14, .mag=12, .vit=17, .spd=20, .lck=10,
        .alignment=182, .atkn=134, .moon=24, .resist=0, .unk11=5,
        .skills={SKILL_MUDO, SKILL_MUDOON, SKILL_SAMARECARM},
        .unk15=38, .drop=45, .unk17=154, .cp=33, .unk19=16
    },
    {
        .race=15, .hp=575, .mp=242, .level=51,
        .str=26, .itl=13, .mag=16, .vit=13, .spd=17, .lck=9,
        .alignment=174, .atkn=48, .moon=7, .resist=0, .unk11=11,
        .skills={SKILL_AGILAO, SKILL_FERAL_BITE, SKILL_CHARM_BITE},
        .unk15=214, .drop=41, .unk17=202, .cp=30, .unk19=17
    },
    {
        .race=15, .hp=533, .mp=233, .level=48,
        .str=24, .itl=13, .mag=15, .vit=14, .spd=14, .lck=10,
        .alignment=178, .atkn=32, .moon=22, .resist=4, .unk11=12,
        .skills={SKILL_SHIBABOO, SKILL_MARIN_KARIN, SKILL_MARAGION},
        .unk15=214, .drop=39, .unk17=202, .cp=28, .unk19=16
    },
    {
        .race=15, .hp=460, .mp=195, .level=42,
        .str=22, .itl=14, .mag=14, .vit=12, .spd=11, .lck=10,
        .alignment=181, .atkn=48, .moon=13, .resist=0, .unk11=6,
        .skills={SKILL_MAZANMA, SKILL_TETRAKARN, SKILL_TETRAJA},
        .unk15=192, .drop=180, .unk17=173, .cp=25, .unk19=16
    },
    {
        .race=15, .hp=363, .mp=220, .level=39,
        .str=20, .itl=16, .mag=12, .vit=13, .spd=10, .lck=10,
        .alignment=173, .atkn=136, .moon=21, .resist=0, .unk11=8,
        .skills={SKILL_HAPIRMA, SKILL_MARIN_KARIN, SKILL_NONE},
        .unk15=208, .drop=180, .unk17=202, .cp=23, .unk19=0
    },
    {
        .race=15, .hp=248, .mp=122, .level=35,
        .str=20, .itl=11, .mag=11, .vit=10, .spd=15, .lck=9,
        .alignment=176, .atkn=32, .moon=21, .resist=0, .unk11=10,
        .skills={SKILL_TARUKAJA, SKILL_TARUNDA, SKILL_PULINPA},
        .unk15=215, .drop=22, .unk17=202, .cp=21, .unk19=0
    },
    {
        .race=15, .hp=202, .mp=116, .level=31,
        .str=15, .itl=11, .mag=13, .vit=11, .spd=14, .lck=8,
        .alignment=169, .atkn=32, .moon=9, .resist=5, .unk11=10,
        .skills={SKILL_SUKUNDA, SKILL_RAKUNDA, SKILL_MARAGION},
        .unk15=214, .drop=236, .unk17=202, .cp=19, .unk19=0
    },
    {
        .race=15, .hp=152, .mp=97, .level=27,
        .str=17, .itl=9, .mag=12, .vit=12, .spd=10, .lck=7,
        .alignment=170, .atkn=32, .moon=7, .resist=0, .unk11=15,
        .skills={SKILL_AGILAO, SKILL_CRITICAL, SKILL_PULINPA},
        .unk15=214, .drop=238, .unk17=202, .cp=16, .unk19=0
    },
    {
        .race=15, .hp=91, .mp=112, .level=18,
        .str=13, .itl=9, .mag=10, .vit=6, .spd=12, .lck=6,
        .alignment=171, .atkn=39, .moon=8, .resist=4, .unk11=10,
        .skills={SKILL_MAZIO, SKILL_WATER_WALL, SKILL_FOG_BREATH},
        .unk15=16, .drop=180, .unk17=220, .cp=11, .unk19=0
    },
    {
        .race=15, .hp=58, .mp=48, .level=12,
        .str=11, .itl=8, .mag=9, .vit=7, .spd=9, .lck=5,
        .alignment=172, .atkn=134, .moon=24, .resist=0, .unk11=17,
        .skills={SKILL_ZAN, SKILL_MAKAJAMA, SKILL_MUDO},
        .unk15=26, .drop=183, .unk17=220, .cp=8, .unk19=2
    },
    {
        .race=15, .hp=41, .mp=36, .level=8,
        .str=8, .itl=7, .mag=8, .vit=6, .spd=8, .lck=5,
        .alignment=160, .atkn=16, .moon=9, .resist=0, .unk11=10,
        .skills={SKILL_AGI, SKILL_PULINPA, SKILL_HAPIRMA},
        .unk15=28, .drop=195, .unk17=220, .cp=5, .unk19=2
    },
    {
        .race=16, .hp=670, .mp=99, .level=61,
        .str=33, .itl=12, .mag=15, .vit=16, .spd=16, .lck=15,
        .alignment=182, .atkn=0, .moon=2, .resist=5, .unk11=14,
        .skills={SKILL_TAIL, SKILL_FIRE_BREATH, SKILL_FERAL_BITE},
        .unk15=39, .drop=201, .unk17=237, .cp=36, .unk19=16
    },
    {
        .race=16, .hp=630, .mp=88, .level=57,
        .str=24, .itl=11, .mag=14, .vit=18, .spd=22, .lck=13,
        .alignment=194, .atkn=129, .moon=2, .resist=10, .unk11=5,
        .skills={SKILL_FERAL_BITE, SKILL_SQUASH, SKILL_NONE},
        .unk15=32, .drop=234, .unk17=28, .cp=34, .unk19=3
    },
    {
        .race=16, .hp=610, .mp=82, .level=53,
        .str=30, .itl=13, .mag=16, .vit=14, .spd=12, .lck=10,
        .alignment=189, .atkn=17, .moon=20, .resist=0, .unk11=10,
        .skills={SKILL_FIRE_BREATH, SKILL_BERSERK, SKILL_SQUASH},
        .unk15=231, .drop=201, .unk17=219, .cp=32, .unk19=17
    },
    {
        .race=16, .hp=590, .mp=78, .level=50,
        .str=27, .itl=11, .mag=14, .vit=12, .spd=15, .lck=14,
        .alignment=177, .atkn=33, .moon=17, .resist=0, .unk11=11,
        .skills={SKILL_FERAL_BITE, SKILL_SHOCK, SKILL_TAIL},
        .unk15=215, .drop=203, .unk17=219, .cp=30, .unk19=17
    },
    {
        .race=16, .hp=515, .mp=69, .level=46,
        .str=25, .itl=10, .mag=11, .vit=18, .spd=15, .lck=10,
        .alignment=190, .atkn=48, .moon=8, .resist=0, .unk11=15,
        .skills={SKILL_VENOM_BITE, SKILL_RAZOR_WIRE, SKILL_VENOM_BREATH},
        .unk15=215, .drop=199, .unk17=219, .cp=28, .unk19=3
    },
    {
        .race=16, .hp=433, .mp=96, .level=41,
        .str=24, .itl=10, .mag=12, .vit=15, .spd=13, .lck=9,
        .alignment=171, .atkn=65, .moon=8, .resist=0, .unk11=12,
        .skills={SKILL_ZIONGA, SKILL_RAKUKAJA, SKILL_WATER_WALL},
        .unk15=213, .drop=28, .unk17=219, .cp=24, .unk19=17
    },
    {
        .race=17, .hp=477, .mp=270, .level=46,
        .str=14, .itl=15, .mag=19, .vit=11, .spd=24, .lck=9,
        .alignment=87, .atkn=19, .moon=3, .resist=9, .unk11=10,
        .skills={SKILL_LULLABY, SKILL_MARIN_KARIN, SKILL_MEDIA},
        .unk15=20, .drop=231, .unk17=142, .cp=23, .unk19=33
    },
    {
        .race=17, .hp=188, .mp=122, .level=34,
        .str=13, .itl=11, .mag=8, .vit=12, .spd=22, .lck=10,
        .alignment=85, .atkn=32, .moon=3, .resist=8, .unk11=20,
        .skills={SKILL_FERAL_CLAW, SKILL_WING_FLAP, SKILL_PANIC_VOICE},
        .unk15=23, .drop=235, .unk17=140, .cp=17, .unk19=17
    },
    {
        .race=17, .hp=77, .mp=68, .level=18,
        .str=12, .itl=10, .mag=7, .vit=7, .spd=17, .lck=6,
        .alignment=79, .atkn=51, .moon=3, .resist=8, .unk11=12,
        .skills={SKILL_FERAL_CLAW, SKILL_LULLABY, SKILL_RAKUNDA},
        .unk15=23, .drop=236, .unk17=140, .cp=7, .unk19=33
    },
    {
        .race=17, .hp=29, .mp=49, .level=7,
        .str=6, .itl=8, .mag=5, .vit=5, .spd=15, .lck=6,
        .alignment=81, .atkn=67, .moon=3, .resist=7, .unk11=11,
        .skills={SKILL_FERAL_CLAW, SKILL_HAPIRMA, SKILL_DORMINA},
        .unk15=23, .drop=10, .unk17=140, .cp=4, .unk19=34
    },
    {
        .race=18, .hp=550, .mp=67, .level=50,
        .str=22, .itl=9, .mag=12, .vit=16, .spd=22, .lck=14,
        .alignment=118, .atkn=0, .moon=9, .resist=8, .unk11=22,
        .skills={SKILL_FERAL_CLAW, SKILL_MAZANMA, SKILL_FERAL_BITE},
        .unk15=16, .drop=180, .unk17=156, .cp=28, .unk19=3
    },
    {
        .race=18, .hp=420, .mp=56, .level=43,
        .str=25, .itl=7, .mag=10, .vit=14, .spd=18, .lck=12,
        .alignment=139, .atkn=2, .moon=20, .resist=0, .unk11=22,
        .skills={SKILL_FERAL_BITE, SKILL_FIRE_BREATH, SKILL_SAMARECARM},
        .unk15=23, .drop=180, .unk17=172, .cp=25, .unk19=3
    },
    {
        .race=18, .hp=400, .mp=54, .level=40,
        .str=24, .itl=6, .mag=8, .vit=15, .spd=17, .lck=12,
        .alignment=122, .atkn=33, .moon=2, .resist=0, .unk11=10,
        .skills={SKILL_TACKLE, SKILL_FIRE_WALL, SKILL_BERSERK},
        .unk15=224, .drop=180, .unk17=156, .cp=24, .unk19=3
    },
    {
        .race=18, .hp=380, .mp=52, .level=38,
        .str=22, .itl=8, .mag=8, .vit=14, .spd=18, .lck=10,
        .alignment=132, .atkn=34, .moon=2, .resist=0, .unk11=4,
        .skills={SKILL_FERAL_BITE, SKILL_ESTOMA, SKILL_TRAESTO},
        .unk15=229, .drop=237, .unk17=156, .cp=23, .unk19=3
    },
    {
        .race=18, .hp=255, .mp=48, .level=35,
        .str=20, .itl=6, .mag=7, .vit=19, .spd=14, .lck=11,
        .alignment=130, .atkn=17, .moon=2, .resist=0, .unk11=5,
        .skills={SKILL_CRITICAL, SKILL_STUN_NEEDLE, SKILL_PARALADI},
        .unk15=231, .drop=210, .unk17=156, .cp=21, .unk19=3
    },
    {
        .race=18, .hp=210, .mp=42, .level=28,
        .str=21, .itl=4, .mag=5, .vit=13, .spd=13, .lck=12,
        .alignment=125, .atkn=33, .moon=2, .resist=0, .unk11=15,
        .skills={SKILL_TACKLE, SKILL_BIND_VOICE, SKILL_BERSERK},
        .unk15=215, .drop=177, .unk17=156, .cp=17, .unk19=3
    },
    {
        .race=18, .hp=106, .mp=82, .level=19,
        .str=12, .itl=12, .mag=8, .vit=8, .spd=14, .lck=5,
        .alignment=131, .atkn=35, .moon=21, .resist=7, .unk11=13,
        .skills={SKILL_FERAL_CLAW, SKILL_ZANMA, SKILL_MARIN_KARIN},
        .unk15=16, .drop=180, .unk17=14, .cp=12, .unk19=34
    },
    {
        .race=18, .hp=140, .mp=28, .level=16,
        .str=15, .itl=6, .mag=7, .vit=17, .spd=5, .lck=5,
        .alignment=115, .atkn=2, .moon=2, .resist=0, .unk11=15,
        .skills={SKILL_SUKUKAJA, SKILL_SQUASH, SKILL_WATER_WALL},
        .unk15=16, .drop=180, .unk17=174, .cp=10, .unk19=17
    },
    {
        .race=18, .hp=63, .mp=41, .level=12,
        .str=10, .itl=8, .mag=8, .vit=7, .spd=9, .lck=9,
        .alignment=120, .atkn=18, .moon=21, .resist=0, .unk11=5,
        .skills={SKILL_FERAL_BITE, SKILL_DORMINA, SKILL_TRAESTO},
        .unk15=32, .drop=180, .unk17=155, .cp=8, .unk19=1
    },
    {
        .race=18, .hp=48, .mp=12, .level=8,
        .str=9, .itl=7, .mag=5, .vit=5, .spd=13, .lck=5,
        .alignment=140, .atkn=1, .moon=2, .resist=0, .unk11=6,
        .skills={SKILL_ZAN, SKILL_TARUKAJA, SKILL_TRAFURI},
        .unk15=16, .drop=180, .unk17=189, .cp=5, .unk19=17
    },
    {
        .race=19, .hp=533, .mp=88, .level=52,
        .str=30, .itl=10, .mag=10, .vit=18, .spd=19, .lck=11,
        .alignment=143, .atkn=1, .moon=23, .resist=0, .unk11=5,
        .skills={SKILL_MARAGION, SKILL_ZIONGA, SKILL_PARALADI},
        .unk15=22, .drop=42, .unk17=203, .cp=22, .unk19=0
    },
    {
        .race=19, .hp=411, .mp=50, .level=46,
        .str=28, .itl=6, .mag=6, .vit=19, .spd=21, .lck=9,
        .alignment=138, .atkn=0, .moon=16, .resist=0, .unk11=15,
        .skills={SKILL_SUKUNDA, SKILL_BERSERK, SKILL_CRITICAL},
        .unk15=230, .drop=40, .unk17=171, .cp=20, .unk19=2
    },
    {
        .race=19, .hp=379, .mp=66, .level=40,
        .str=26, .itl=9, .mag=7, .vit=15, .spd=16, .lck=10,
        .alignment=141, .atkn=33, .moon=20, .resist=0, .unk11=11,
        .skills={SKILL_ZIONGA, SKILL_CRITICAL, SKILL_SUKUKAJA},
        .unk15=231, .drop=202, .unk17=171, .cp=17, .unk19=2
    },
    {
        .race=19, .hp=389, .mp=55, .level=39,
        .str=25, .itl=7, .mag=9, .vit=19, .spd=12, .lck=9,
        .alignment=142, .atkn=33, .moon=20, .resist=0, .unk11=17,
        .skills={SKILL_FIREBALL, SKILL_SHIBABOO, SKILL_BERSERK},
        .unk15=215, .drop=200, .unk17=202, .cp=16, .unk19=2
    },
    {
        .race=19, .hp=222, .mp=38, .level=30,
        .str=22, .itl=8, .mag=9, .vit=11, .spd=13, .lck=7,
        .alignment=138, .atkn=50, .moon=19, .resist=0, .unk11=5,
        .skills={SKILL_DIARAMA, SKILL_SEXY_DANCE, SKILL_POSMUDI},
        .unk15=214, .drop=206, .unk17=234, .cp=14, .unk19=33
    },
    {
        .race=19, .hp=53, .mp=14, .level=14,
        .str=14, .itl=5, .mag=5, .vit=14, .spd=8, .lck=5,
        .alignment=128, .atkn=165, .moon=13, .resist=0, .unk11=16,
        .skills={SKILL_CRITICAL, SKILL_SUKUKAJA, SKILL_TARUKAJA},
        .unk15=39, .drop=13, .unk17=171, .cp=9, .unk19=2
    },
    {
        .race=20, .hp=512, .mp=128, .level=49,
        .str=28, .itl=8, .mag=11, .vit=19, .spd=19, .lck=10,
        .alignment=188, .atkn=1, .moon=18, .resist=0, .unk11=10,
        .skills={SKILL_TARUKAJA, SKILL_RAKUKAJA, SKILL_BERSERK},
        .unk15=208, .drop=0, .unk17=26, .cp=26, .unk19=17
    },
    {
        .race=20, .hp=404, .mp=108, .level=44,
        .str=26, .itl=9, .mag=10, .vit=18, .spd=16, .lck=9,
        .alignment=155, .atkn=177, .moon=17, .resist=0, .unk11=1,
        .skills={SKILL_DIARAMA, SKILL_PETRADI, SKILL_RECARM},
        .unk15=198, .drop=36, .unk17=222, .cp=24, .unk19=17
    },
    {
        .race=20, .hp=377, .mp=98, .level=38,
        .str=23, .itl=8, .mag=10, .vit=12, .spd=20, .lck=7,
        .alignment=198, .atkn=2, .moon=18, .resist=0, .unk11=11,
        .skills={SKILL_DORMINA, SKILL_MAKAJAMA, SKILL_RAKUNDA},
        .unk15=208, .drop=180, .unk17=202, .cp=22, .unk19=32
    },
    {
        .race=20, .hp=296, .mp=85, .level=34,
        .str=21, .itl=9, .mag=11, .vit=12, .spd=12, .lck=8,
        .alignment=179, .atkn=33, .moon=13, .resist=0, .unk11=11,
        .skills={SKILL_ZANMA, SKILL_BIND_VOICE, SKILL_DIARAMA},
        .unk15=212, .drop=27, .unk17=202, .cp=20, .unk19=17
    },
    {
        .race=20, .hp=135, .mp=78, .level=24,
        .str=16, .itl=8, .mag=9, .vit=15, .spd=9, .lck=6,
        .alignment=166, .atkn=65, .moon=1, .resist=0, .unk11=17,
        .skills={SKILL_SUKUNDA, SKILL_TARUKAJA, SKILL_TETRAJA},
        .unk15=213, .drop=23, .unk17=202, .cp=14, .unk19=17
    },
    {
        .race=20, .hp=73, .mp=58, .level=13,
        .str=13, .itl=6, .mag=8, .vit=9, .spd=9, .lck=6,
        .alignment=159, .atkn=50, .moon=1, .resist=0, .unk11=20,
        .skills={SKILL_DIA, SKILL_ZIONGA, SKILL_PENPATRA},
        .unk15=23, .drop=11, .unk17=218, .cp=8, .unk19=1
    },
    {
        .race=20, .hp=51, .mp=28, .level=10,
        .str=12, .itl=6, .mag=7, .vit=8, .spd=10, .lck=4,
        .alignment=162, .atkn=50, .moon=8, .resist=0, .unk11=11,
        .skills={SKILL_ZIO, SKILL_MEDIA, SKILL_WATER_WALL},
        .unk15=23, .drop=9, .unk17=234, .cp=6, .unk19=2
    },
    {
        .race=21, .hp=530, .mp=120, .level=50,
        .str=30, .itl=11, .mag=13, .vit=20, .spd=12, .lck=8,
        .alignment=72, .atkn=16, .moon=10, .resist=0, .unk11=17,
        .skills={SKILL_SUKUKAJA, SKILL_BERSERK, SKILL_DIARAHAN},
        .unk15=16, .drop=180, .unk17=237, .cp=29, .unk19=17
    },
    {
        .race=21, .hp=540, .mp=90, .level=47,
        .str=24, .itl=10, .mag=11, .vit=22, .spd=11, .lck=11,
        .alignment=98, .atkn=32, .moon=10, .resist=0, .unk11=15,
        .skills={SKILL_GUARD, SKILL_BERSERK, SKILL_CRITICAL},
        .unk15=224, .drop=180, .unk17=28, .cp=25, .unk19=2
    },
    {
        .race=21, .hp=470, .mp=110, .level=43,
        .str=23, .itl=11, .mag=13, .vit=16, .spd=15, .lck=8,
        .alignment=71, .atkn=16, .moon=17, .resist=0, .unk11=16,
        .skills={SKILL_MARAGION, SKILL_DIARAHAN, SKILL_MAHAMA},
        .unk15=224, .drop=180, .unk17=235, .cp=24, .unk19=17
    },
    {
        .race=21, .hp=213, .mp=72, .level=35,
        .str=19, .itl=8, .mag=12, .vit=17, .spd=10, .lck=10,
        .alignment=68, .atkn=149, .moon=17, .resist=1, .unk11=5,
        .skills={SKILL_HAMA, SKILL_DIARAMA, SKILL_PARALADI},
        .unk15=229, .drop=230, .unk17=203, .cp=19, .unk19=17
    },
    {
        .race=21, .hp=165, .mp=65, .level=26,
        .str=18, .itl=8, .mag=10, .vit=15, .spd=9, .lck=7,
        .alignment=97, .atkn=16, .moon=10, .resist=0, .unk11=15,
        .skills={SKILL_RAKUKAJA, SKILL_HAMA, SKILL_CRITICAL},
        .unk15=198, .drop=237, .unk17=42, .cp=14, .unk19=17
    },
    {
        .race=21, .hp=105, .mp=48, .level=19,
        .str=17, .itl=7, .mag=8, .vit=12, .spd=7, .lck=7,
        .alignment=69, .atkn=32, .moon=10, .resist=0, .unk11=10,
        .skills={SKILL_BUFULA, SKILL_MABUFU, SKILL_RAKUKAJA},
        .unk15=215, .drop=204, .unk17=27, .cp=11, .unk19=2
    },
    {
        .race=21, .hp=80, .mp=42, .level=16,
        .str=15, .itl=6, .mag=6, .vit=11, .spd=11, .lck=6,
        .alignment=87, .atkn=33, .moon=10, .resist=6, .unk11=10,
        .skills={SKILL_POISON_NEEDLE, SKILL_SHIBABOO, SKILL_HAMA},
        .unk15=23, .drop=210, .unk17=173, .cp=9, .unk19=17
    },
    {
        .race=21, .hp=61, .mp=27, .level=12,
        .str=11, .itl=7, .mag=9, .vit=10, .spd=6, .lck=7,
        .alignment=78, .atkn=17, .moon=10, .resist=0, .unk11=5,
        .skills={SKILL_BUFU, SKILL_PANIC_VOICE, SKILL_MABUFU},
        .unk15=224, .drop=180, .unk17=41, .cp=7, .unk19=2
    },
    {
        .race=21, .hp=40, .mp=24, .level=6,
        .str=6, .itl=5, .mag=6, .vit=8, .spd=10, .lck=7,
        .alignment=102, .atkn=1, .moon=10, .resist=0, .unk11=5,
        .skills={SKILL_RAKUKAJA, SKILL_SUKUKAJA, SKILL_PATRA},
        .unk15=233, .drop=217, .unk17=41, .cp=4, .unk19=2
    },
    {
        .race=21, .hp=28, .mp=25, .level=4,
        .str=4, .itl=7, .mag=7, .vit=7, .spd=8, .lck=7,
        .alignment=98, .atkn=129, .moon=10, .resist=0, .unk11=10,
        .skills={SKILL_ZAN, SKILL_SHIBABOO, SKILL_TARUKAJA},
        .unk15=226, .drop=180, .unk17=41, .cp=3, .unk19=1
    },
    {
        .race=21, .hp=18, .mp=20, .level=2,
        .str=2, .itl=8, .mag=7, .vit=7, .spd=7, .lck=6,
        .alignment=94, .atkn=145, .moon=10, .resist=0, .unk11=16,
        .skills={SKILL_SUKUKAJA, SKILL_HAPPY_STEP, SKILL_SUKUNDA},
        .unk15=18, .drop=182, .unk17=41, .cp=2, .unk19=1
    },
    {
        .race=22, .hp=400, .mp=98, .level=41,
        .str=25, .itl=8, .mag=8, .vit=16, .spd=20, .lck=7,
        .alignment=136, .atkn=20, .moon=18, .resist=0, .unk11=21,
        .skills={SKILL_FERAL_CLAW, SKILL_FERAL_BITE, SKILL_CRITICAL},
        .unk15=16, .drop=180, .unk17=41, .cp=10, .unk19=18
    },
    {
        .race=22, .hp=130, .mp=56, .level=23,
        .str=14, .itl=10, .mag=7, .vit=10, .spd=14, .lck=8,
        .alignment=128, .atkn=35, .moon=18, .resist=5, .unk11=13,
        .skills={SKILL_FERAL_CLAW, SKILL_HAPIRMA, SKILL_TARUKAJA},
        .unk15=23, .drop=209, .unk17=25, .cp=6, .unk19=34
    },
    {
        .race=22, .hp=30, .mp=22, .level=5,
        .str=5, .itl=7, .mag=6, .vit=9, .spd=9, .lck=5,
        .alignment=130, .atkn=130, .moon=1, .resist=0, .unk11=17,
        .skills={SKILL_RAKUKAJA, SKILL_DIARAMA, SKILL_FERAL_BITE},
        .unk15=42, .drop=3, .unk17=58, .cp=1, .unk19=2
    },
    {
        .race=23, .hp=510, .mp=290, .level=53,
        .str=15, .itl=28, .mag=22, .vit=13, .spd=12, .lck=7,
        .alignment=32, .atkn=1, .moon=18, .resist=4, .unk11=9,
        .skills={SKILL_ZANMA, SKILL_MAZANMA, SKILL_RECARMDRA},
        .unk15=41, .drop=179, .unk17=40, .cp=0, .unk19=48
    },
    {
        .race=23, .hp=305, .mp=198, .level=37,
        .str=13, .itl=13, .mag=12, .vit=15, .spd=14, .lck=12,
        .alignment=33, .atkn=1, .moon=1, .resist=0, .unk11=17,
        .skills={SKILL_ZIONGA, SKILL_DIARAMA, SKILL_RIMDORA},
        .unk15=22, .drop=220, .unk17=40, .cp=0, .unk19=48
    },
    {
        .race=23, .hp=125, .mp=42, .level=22,
        .str=14, .itl=7, .mag=5, .vit=12, .spd=15, .lck=9,
        .alignment=38, .atkn=32, .moon=1, .resist=7, .unk11=10,
        .skills={SKILL_SUKUNDA, SKILL_MAKAJAMA, SKILL_TARUNDA},
        .unk15=229, .drop=24, .unk17=40, .cp=0, .unk19=48
    },
    {
        .race=23, .hp=81, .mp=35, .level=18,
        .str=12, .itl=9, .mag=6, .vit=11, .spd=7, .lck=10,
        .alignment=45, .atkn=65, .moon=1, .resist=0, .unk11=1,
        .skills={SKILL_MEDIA, SKILL_NONE, SKILL_NONE},
        .unk15=228, .drop=205, .unk17=40, .cp=0, .unk19=48
    },
    {
        .race=24, .hp=540, .mp=0, .level=56,
        .str=20, .itl=7, .mag=7, .vit=14, .spd=26, .lck=25,
        .alignment=239, .atkn=0, .moon=18, .resist=1, .unk11=12,
        .skills={SKILL_CRITICAL, SKILL_DEADLY_HIT, SKILL_STUN_NEEDLE},
        .unk15=39, .drop=223, .unk17=40, .cp=0, .unk19=64
    },
    {
        .race=24, .hp=502, .mp=320, .level=52,
        .str=13, .itl=19, .mag=24, .vit=15, .spd=13, .lck=9,
        .alignment=227, .atkn=21, .moon=18, .resist=0, .unk11=12,
        .skills={SKILL_MAZANMA, SKILL_RAKUKAJA, SKILL_MAKATRANDA},
        .unk15=228, .drop=219, .unk17=40, .cp=0, .unk19=64
    },
    {
        .race=24, .hp=380, .mp=188, .level=40,
        .str=19, .itl=10, .mag=11, .vit=12, .spd=19, .lck=8,
        .alignment=225, .atkn=34, .moon=18, .resist=1, .unk11=21,
        .skills={SKILL_SHOCK, SKILL_NEEDLE_RUSH, SKILL_STUN_NEEDLE},
        .unk15=231, .drop=21, .unk17=40, .cp=0, .unk19=33
    },
    {
        .race=24, .hp=146, .mp=122, .level=27,
        .str=10, .itl=11, .mag=14, .vit=11, .spd=10, .lck=9,
        .alignment=223, .atkn=32, .moon=1, .resist=0, .unk11=19,
        .skills={SKILL_FIREBALL, SKILL_ZANMA, SKILL_ZIONGA},
        .unk15=212, .drop=216, .unk17=40, .cp=0, .unk19=64
    },
    {
        .race=24, .hp=95, .mp=18, .level=20,
        .str=17, .itl=8, .mag=5, .vit=9, .spd=12, .lck=6,
        .alignment=222, .atkn=160, .moon=1, .resist=4, .unk11=1,
        .skills={SKILL_TACKLE, SKILL_NONE, SKILL_NONE},
        .unk15=208, .drop=180, .unk17=40, .cp=0, .unk19=64
    },
    {
        .race=24, .hp=75, .mp=0, .level=15,
        .str=11, .itl=8, .mag=6, .vit=8, .spd=10, .lck=7,
        .alignment=219, .atkn=64, .moon=1, .resist=0, .unk11=0,
        .skills={SKILL_NONE, SKILL_NONE, SKILL_NONE},
        .unk15=218, .drop=5, .unk17=40, .cp=0, .unk19=64
    },
    {
        .race=25, .hp=737, .mp=151, .level=71,
        .str=28, .itl=21, .mag=24, .vit=20, .spd=10, .lck=8,
        .alignment=49, .atkn=128, .moon=28, .resist=4, .unk11=19,
        .skills={SKILL_DEATHTOUCH, SKILL_TENTARAFOO, SKILL_MARAGION},
        .unk15=20, .drop=213, .unk17=237, .cp=38, .unk19=96
    },
    {
        .race=25, .hp=707, .mp=141, .level=66,
        .str=34, .itl=12, .mag=21, .vit=14, .spd=14, .lck=10,
        .alignment=52, .atkn=132, .moon=28, .resist=1, .unk11=10,
        .skills={SKILL_AGILAO, SKILL_MAKARAKARN, SKILL_SHIBABOO},
        .unk15=228, .drop=214, .unk17=209, .cp=35, .unk19=97
    },
    {
        .race=25, .hp=747, .mp=121, .level=62,
        .str=32, .itl=14, .mag=19, .vit=13, .spd=12, .lck=10,
        .alignment=41, .atkn=133, .moon=28, .resist=4, .unk11=17,
        .skills={SKILL_EVIL_SMILE, SKILL_MUDO, SKILL_MUDOON},
        .unk15=214, .drop=211, .unk17=193, .cp=32, .unk19=97
    },
    {
        .race=25, .hp=505, .mp=212, .level=44,
        .str=26, .itl=10, .mag=12, .vit=15, .spd=10, .lck=8,
        .alignment=44, .atkn=133, .moon=28, .resist=4, .unk11=16,
        .skills={SKILL_ZIONGA, SKILL_MAZIONGA, SKILL_MUDO},
        .unk15=212, .drop=38, .unk17=193, .cp=24, .unk19=97
    },
    {
        .race=26, .hp=989, .mp=433, .level=99,
        .str=37, .itl=24, .mag=26, .vit=20, .spd=23, .lck=20,
        .alignment=250, .atkn=128, .moon=33, .resist=5, .unk11=11,
        .skills={SKILL_TENTARAFOO, SKILL_MARAGION, SKILL_MUDOON},
        .unk15=48, .drop=180, .unk17=67, .cp=60, .unk19=96
    },
    {
        .race=26, .hp=969, .mp=343, .level=82,
        .str=35, .itl=20, .mag=21, .vit=18, .spd=18, .lck=14,
        .alignment=255, .atkn=132, .moon=31, .resist=0, .unk11=21,
        .skills={SKILL_MAZANMA, SKILL_MARIN_KARIN, SKILL_DIARAMA},
        .unk15=53, .drop=218, .unk17=50, .cp=56, .unk19=98
    },
    {
        .race=26, .hp=949, .mp=292, .level=78,
        .str=33, .itl=19, .mag=22, .vit=16, .spd=21, .lck=10,
        .alignment=242, .atkn=128, .moon=29, .resist=8, .unk11=17,
        .skills={SKILL_MAZIONGA, SKILL_BAELS_CURSE, SKILL_MUDOON},
        .unk15=53, .drop=225, .unk17=50, .cp=48, .unk19=96
    },
    {
        .race=26, .hp=888, .mp=262, .level=74,
        .str=31, .itl=18, .mag=19, .vit=23, .spd=18, .lck=7,
        .alignment=231, .atkn=129, .moon=29, .resist=7, .unk11=11,
        .skills={SKILL_ZIONGA, SKILL_TARUNDA, SKILL_MARIN_KARIN},
        .unk15=48, .drop=180, .unk17=33, .cp=45, .unk19=97
    },
    {
        .race=26, .hp=840, .mp=180, .level=68,
        .str=29, .itl=19, .mag=15, .vit=20, .spd=19, .lck=9,
        .alignment=228, .atkn=129, .moon=23, .resist=8, .unk11=17,
        .skills={SKILL_CRITICAL, SKILL_TETRAKARN, SKILL_DEADLY_HIT},
        .unk15=48, .drop=180, .unk17=33, .cp=41, .unk19=96
    },
    {
        .race=27, .hp=660, .mp=82, .level=60,
        .str=33, .itl=13, .mag=15, .vit=13, .spd=14, .lck=8,
        .alignment=193, .atkn=128, .moon=18, .resist=0, .unk11=22,
        .skills={SKILL_FERAL_BITE, SKILL_FIRE_BREATH, SKILL_MAKARAKARN},
        .unk15=230, .drop=53, .unk17=28, .cp=32, .unk19=98
    },
    {
        .race=27, .hp=570, .mp=28, .level=54,
        .str=25, .itl=8, .mag=10, .vit=15, .spd=19, .lck=10,
        .alignment=188, .atkn=16, .moon=2, .resist=0, .unk11=10,
        .skills={SKILL_RAZOR_WIRE, SKILL_BERSERK, SKILL_TAIL},
        .unk15=16, .drop=180, .unk17=155, .cp=29, .unk19=83
    },
    {
        .race=27, .hp=440, .mp=44, .level=51,
        .str=27, .itl=9, .mag=10, .vit=16, .spd=16, .lck=9,
        .alignment=182, .atkn=16, .moon=12, .resist=0, .unk11=21,
        .skills={SKILL_STUN_CLAW, SKILL_PETRA_EYES, SKILL_VENOM_BREATH},
        .unk15=229, .drop=44, .unk17=219, .cp=25, .unk19=83
    },
    {
        .race=27, .hp=366, .mp=30, .level=43,
        .str=22, .itl=4, .mag=9, .vit=15, .spd=17, .lck=9,
        .alignment=181, .atkn=16, .moon=2, .resist=4, .unk11=13,
        .skills={SKILL_FERAL_BITE, SKILL_WING_FLAP, SKILL_FIRE_BREATH},
        .unk15=214, .drop=37, .unk17=156, .cp=20, .unk19=83
    },
    {
        .race=27, .hp=266, .mp=24, .level=37,
        .str=19, .itl=4, .mag=7, .vit=14, .spd=21, .lck=7,
        .alignment=179, .atkn=32, .moon=2, .resist=7, .unk11=23,
        .skills={SKILL_GUARD, SKILL_RAZOR_WIRE, SKILL_FERAL_BITE},
        .unk15=214, .drop=34, .unk17=156, .cp=17, .unk19=83
    },
    {
        .race=27, .hp=119, .mp=12, .level=30,
        .str=22, .itl=3, .mag=5, .vit=12, .spd=14, .lck=7,
        .alignment=182, .atkn=48, .moon=2, .resist=0, .unk11=10,
        .skills={SKILL_STUN_CLAW, SKILL_PETRA_BITE, SKILL_ESCAPE},
        .unk15=213, .drop=184, .unk17=171, .cp=15, .unk19=83
    },
    {
        .race=27, .hp=99, .mp=10, .level=22,
        .str=18, .itl=4, .mag=5, .vit=11, .spd=11, .lck=6,
        .alignment=178, .atkn=48, .moon=2, .resist=0, .unk11=17,
        .skills={SKILL_DIA, SKILL_RAZOR_WIRE, SKILL_TAIL},
        .unk15=214, .drop=228, .unk17=171, .cp=10, .unk19=83
    },
    {
        .race=28, .hp=494, .mp=79, .level=53,
        .str=15, .itl=8, .mag=9, .vit=11, .spd=36, .lck=8,
        .alignment=53, .atkn=32, .moon=3, .resist=8, .unk11=12,
        .skills={SKILL_FERAL_BITE, SKILL_WING_FLAP, SKILL_ICE_BREATH},
        .unk15=24, .drop=228, .unk17=156, .cp=30, .unk19=97
    },
    {
        .race=28, .hp=344, .mp=65, .level=42,
        .str=12, .itl=9, .mag=8, .vit=10, .spd=30, .lck=6,
        .alignment=56, .atkn=32, .moon=3, .resist=8, .unk11=20,
        .skills={SKILL_FERAL_CLAW, SKILL_WING_FLAP, SKILL_MUDO},
        .unk15=23, .drop=235, .unk17=156, .cp=22, .unk19=97
    },
    {
        .race=28, .hp=89, .mp=43, .level=20,
        .str=10, .itl=7, .mag=9, .vit=9, .spd=15, .lck=4,
        .alignment=58, .atkn=48, .moon=3, .resist=5, .unk11=10,
        .skills={SKILL_VENOM_CLAW, SKILL_WING_FLAP, SKILL_ESCAPE},
        .unk15=21, .drop=239, .unk17=172, .cp=11, .unk19=113
    },
    {
        .race=28, .hp=19, .mp=26, .level=8,
        .str=5, .itl=6, .mag=8, .vit=6, .spd=9, .lck=4,
        .alignment=61, .atkn=16, .moon=3, .resist=0, .unk11=12,
        .skills={SKILL_ZAN, SKILL_PANIC_VOICE, SKILL_PULINPA},
        .unk15=22, .drop=229, .unk17=205, .cp=4, .unk19=96
    },
    {
        .race=29, .hp=666, .mp=66, .level=62,
        .str=34, .itl=11, .mag=12, .vit=16, .spd=19, .lck=7,
        .alignment=142, .atkn=128, .moon=23, .resist=5, .unk11=14,
        .skills={SKILL_FERAL_CLAW, SKILL_FERAL_BITE, SKILL_ICE_BREATH},
        .unk15=21, .drop=49, .unk17=206, .cp=33, .unk19=98
    },
    {
        .race=29, .hp=620, .mp=22, .level=51,
        .str=20, .itl=6, .mag=7, .vit=16, .spd=25, .lck=11,
        .alignment=141, .atkn=32, .moon=12, .resist=11, .unk11=12,
        .skills={SKILL_RAZOR_WIRE, SKILL_SQUASH, SKILL_WATER_WALL},
        .unk15=16, .drop=180, .unk17=2, .cp=22, .unk19=83
    },
    {
        .race=29, .hp=444, .mp=32, .level=47,
        .str=25, .itl=9, .mag=11, .vit=15, .spd=17, .lck=4,
        .alignment=141, .atkn=32, .moon=2, .resist=0, .unk11=10,
        .skills={SKILL_STUN_NEEDLE, SKILL_BIND_VOICE, SKILL_PETRA_BITE},
        .unk15=21, .drop=35, .unk17=156, .cp=25, .unk19=97
    },
    {
        .race=29, .hp=499, .mp=54, .level=44,
        .str=16, .itl=14, .mag=16, .vit=10, .spd=18, .lck=6,
        .alignment=140, .atkn=2, .moon=26, .resist=0, .unk11=14,
        .skills={SKILL_HAPIRMA, SKILL_MARIN_KARIN, SKILL_TARUNDA},
        .unk15=20, .drop=216, .unk17=156, .cp=24, .unk19=112
    },
    {
        .race=29, .hp=134, .mp=32, .level=27,
        .str=21, .itl=4, .mag=5, .vit=11, .spd=12, .lck=7,
        .alignment=141, .atkn=64, .moon=2, .resist=0, .unk11=16,
        .skills={SKILL_FERAL_BITE, SKILL_TACKLE, SKILL_AGILAO},
        .unk15=16, .drop=180, .unk17=156, .cp=15, .unk19=82
    },
    {
        .race=29, .hp=88, .mp=18, .level=15,
        .str=16, .itl=5, .mag=5, .vit=8, .spd=10, .lck=6,
        .alignment=143, .atkn=21, .moon=2, .resist=0, .unk11=15,
        .skills={SKILL_FERAL_CLAW, SKILL_STUN_BITE, SKILL_PANIC_VOICE},
        .unk15=38, .drop=239, .unk17=12, .cp=10, .unk19=83
    },
    {
        .race=30, .hp=722, .mp=59, .level=53,
        .str=30, .itl=11, .mag=12, .vit=14, .spd=13, .lck=9,
        .alignment=110, .atkn=0, .moon=26, .resist=0, .unk11=10,
        .skills={SKILL_PARAL_EYES, SKILL_VENOM_BREATH, SKILL_PANIC_VOICE},
        .unk15=39, .drop=232, .unk17=219, .cp=28, .unk19=97
    },
    {
        .race=30, .hp=500, .mp=31, .level=51,
        .str=32, .itl=6, .mag=9, .vit=19, .spd=12, .lck=8,
        .alignment=109, .atkn=48, .moon=1, .resist=0, .unk11=20,
        .skills={SKILL_GUARD, SKILL_BERSERK, SKILL_MAZIO},
        .unk15=213, .drop=234, .unk17=218, .cp=27, .unk19=82
    },
    {
        .race=30, .hp=465, .mp=48, .level=48,
        .str=28, .itl=9, .mag=10, .vit=13, .spd=15, .lck=6,
        .alignment=107, .atkn=32, .moon=1, .resist=0, .unk11=13,
        .skills={SKILL_FIREBALL, SKILL_PANIC_VOICE, SKILL_CRITICAL},
        .unk15=230, .drop=42, .unk17=26, .cp=26, .unk19=96
    },
    {
        .race=30, .hp=323, .mp=42, .level=45,
        .str=21, .itl=8, .mag=8, .vit=20, .spd=13, .lck=8,
        .alignment=110, .atkn=16, .moon=11, .resist=0, .unk11=12,
        .skills={SKILL_BUFULA, SKILL_VENOM_BITE, SKILL_MABUFULA},
        .unk15=231, .drop=239, .unk17=218, .cp=24, .unk19=81
    },
    {
        .race=30, .hp=259, .mp=38, .level=37,
        .str=20, .itl=7, .mag=7, .vit=11, .spd=20, .lck=6,
        .alignment=108, .atkn=32, .moon=1, .resist=0, .unk11=21,
        .skills={SKILL_FERAL_BITE, SKILL_BERSERK, SKILL_ZANMA},
        .unk15=214, .drop=232, .unk17=202, .cp=20, .unk19=97
    },
    {
        .race=30, .hp=129, .mp=28, .level=28,
        .str=15, .itl=6, .mag=7, .vit=13, .spd=13, .lck=7,
        .alignment=103, .atkn=32, .moon=11, .resist=0, .unk11=13,
        .skills={SKILL_BUFULA, SKILL_MABUFULA, SKILL_NEEDLE_RUSH},
        .unk15=216, .drop=239, .unk17=202, .cp=15, .unk19=82
    },
    {
        .race=30, .hp=42, .mp=16, .level=11,
        .str=12, .itl=4, .mag=5, .vit=10, .spd=8, .lck=5,
        .alignment=109, .atkn=80, .moon=1, .resist=0, .unk11=15,
        .skills={SKILL_DIA, SKILL_GUARD, SKILL_CALL_ALLY},
        .unk15=233, .drop=9, .unk17=42, .cp=8, .unk19=82
    },
    {
        .race=30, .hp=26, .mp=11, .level=8,
        .str=7, .itl=4, .mag=5, .vit=12, .spd=3, .lck=8,
        .alignment=101, .atkn=160, .moon=1, .resist=2, .unk11=15,
        .skills={SKILL_SUKUKAJA, SKILL_WATER_WALL, SKILL_PANIC_VOICE},
        .unk15=231, .drop=229, .unk17=43, .cp=4, .unk19=82
    },
    {
        .race=30, .hp=20, .mp=14, .level=5,
        .str=4, .itl=6, .mag=5, .vit=5, .spd=10, .lck=5,
        .alignment=105, .atkn=16, .moon=1, .resist=0, .unk11=10,
        .skills={SKILL_ZIO, SKILL_FERAL_CLAW, SKILL_ESCAPE},
        .unk15=224, .drop=180, .unk17=58, .cp=2, .unk19=81
    },
    {
        .race=31, .hp=720, .mp=200, .level=54,
        .str=12, .itl=32, .mag=22, .vit=14, .spd=8, .lck=6,
        .alignment=203, .atkn=132, .moon=24, .resist=15, .unk11=19,
        .skills={SKILL_MAZIONGA, SKILL_EVIL_SMILE, SKILL_MUDOON},
        .unk15=39, .drop=234, .unk17=61, .cp=32, .unk19=96
    },
    {
        .race=31, .hp=363, .mp=52, .level=46,
        .str=25, .itl=7, .mag=7, .vit=29, .spd=9, .lck=5,
        .alignment=202, .atkn=36, .moon=12, .resist=0, .unk11=21,
        .skills={SKILL_DEATHTOUCH, SKILL_VENOM_BITE, SKILL_STUN_CLAW},
        .unk15=208, .drop=180, .unk17=206, .cp=25, .unk19=82
    },
    {
        .race=31, .hp=353, .mp=42, .level=40,
        .str=20, .itl=5, .mag=8, .vit=9, .spd=26, .lck=5,
        .alignment=190, .atkn=37, .moon=24, .resist=0, .unk11=16,
        .skills={SKILL_PARAL_EYES, SKILL_VENOM_BREATH, SKILL_BLOOD_THIEF},
        .unk15=16, .drop=180, .unk17=218, .cp=22, .unk19=97
    },
    {
        .race=31, .hp=187, .mp=46, .level=35,
        .str=11, .itl=7, .mag=27, .vit=10, .spd=10, .lck=3,
        .alignment=180, .atkn=52, .moon=25, .resist=0, .unk11=16,
        .skills={SKILL_HAPPY_STEP, SKILL_MARAGION, SKILL_AGILAO},
        .unk15=215, .drop=30, .unk17=186, .cp=18, .unk19=97
    },
    {
        .race=31, .hp=103, .mp=38, .level=25,
        .str=19, .itl=5, .mag=8, .vit=14, .spd=8, .lck=4,
        .alignment=205, .atkn=53, .moon=5, .resist=0, .unk11=17,
        .skills={SKILL_SHIBABOO, SKILL_BUFULA, SKILL_MUDO},
        .unk15=208, .drop=180, .unk17=186, .cp=13, .unk19=96
    },
    {
        .race=31, .hp=69, .mp=19, .level=22,
        .str=16, .itl=7, .mag=6, .vit=14, .spd=7, .lck=4,
        .alignment=199, .atkn=37, .moon=5, .resist=0, .unk11=10,
        .skills={SKILL_STUN_CLAW, SKILL_DEVILS_KISS, SKILL_SEXY_DANCE},
        .unk15=231, .drop=232, .unk17=217, .cp=10, .unk19=113
    },
    {
        .race=31, .hp=52, .mp=15, .level=17,
        .str=13, .itl=6, .mag=6, .vit=11, .spd=8, .lck=4,
        .alignment=212, .atkn=52, .moon=5, .resist=0, .unk11=12,
        .skills={SKILL_GUARD, SKILL_STUN_BITE, SKILL_CALL_ALLY},
        .unk15=212, .drop=235, .unk17=201, .cp=7, .unk19=82
    },
    {
        .race=31, .hp=39, .mp=29, .level=7,
        .str=4, .itl=7, .mag=5, .vit=5, .spd=13, .lck=5,
        .alignment=201, .atkn=132, .moon=14, .resist=7, .unk11=9,
        .skills={SKILL_PULINPA, SKILL_AGILAO, SKILL_NONE},
        .unk15=23, .drop=229, .unk17=26, .cp=6, .unk19=113
    },
    {
        .race=31, .hp=25, .mp=0, .level=5,
        .str=3, .itl=5, .mag=3, .vit=7, .spd=10, .lck=4,
        .alignment=210, .atkn=4, .moon=4, .resist=3, .unk11=10,
        .skills={SKILL_FERAL_CLAW, SKILL_CALL_ALLY, SKILL_FERAL_BITE},
        .unk15=26, .drop=2, .unk17=25, .cp=10, .unk19=81
    },
    {
        .race=32, .hp=299, .mp=31, .level=44,
        .str=23, .itl=8, .mag=8, .vit=22, .spd=11, .lck=7,
        .alignment=166, .atkn=6, .moon=13, .resist=7, .unk11=13,
        .skills={SKILL_DEATHTOUCH, SKILL_CALL_ALLY, SKILL_DEATH_ROAD},
        .unk15=32, .drop=180, .unk17=219, .cp=20, .unk19=96
    },
    {
        .race=32, .hp=144, .mp=28, .level=29,
        .str=8, .itl=14, .mag=16, .vit=9, .spd=14, .lck=4,
        .alignment=161, .atkn=22, .moon=6, .resist=0, .unk11=20,
        .skills={SKILL_DEATHTOUCH, SKILL_TENTARAFOO, SKILL_MAZANMA},
        .unk15=224, .drop=180, .unk17=218, .cp=12, .unk19=176
    },
    {
        .race=32, .hp=108, .mp=21, .level=23,
        .str=10, .itl=8, .mag=13, .vit=10, .spd=10, .lck=4,
        .alignment=156, .atkn=37, .moon=14, .resist=0, .unk11=10,
        .skills={SKILL_DEATHTOUCH, SKILL_SHIBABOO, SKILL_EVIL_SMILE},
        .unk15=230, .drop=183, .unk17=186, .cp=10, .unk19=97
    },
    {
        .race=32, .hp=89, .mp=16, .level=19,
        .str=9, .itl=7, .mag=12, .vit=10, .spd=10, .lck=3,
        .alignment=154, .atkn=101, .moon=5, .resist=3, .unk11=16,
        .skills={SKILL_DEATHTOUCH, SKILL_CALL_ALLY, SKILL_STUN_BITE},
        .unk15=224, .drop=180, .unk17=186, .cp=9, .unk19=176
    },
    {
        .race=32, .hp=34, .mp=14, .level=14,
        .str=8, .itl=6, .mag=13, .vit=10, .spd=8, .lck=2,
        .alignment=150, .atkn=37, .moon=5, .resist=0, .unk11=23,
        .skills={SKILL_ZAN, SKILL_SUKUNDA, SKILL_MAKAJAMA},
        .unk15=229, .drop=183, .unk17=169, .cp=7, .unk19=176
    },
    {
        .race=32, .hp=40, .mp=13, .level=9,
        .str=7, .itl=8, .mag=12, .vit=6, .spd=6, .lck=3,
        .alignment=148, .atkn=53, .moon=6, .resist=2, .unk11=12,
        .skills={SKILL_DEATHTOUCH, SKILL_SHIBABOO, SKILL_PULINPA},
        .unk15=23, .drop=199, .unk17=137, .cp=5, .unk19=176
    },
    {
        .race=32, .hp=23, .mp=9, .level=4,
        .str=3, .itl=6, .mag=6, .vit=7, .spd=9, .lck=3,
        .alignment=145, .atkn=133, .moon=6, .resist=2, .unk11=2,
        .skills={SKILL_PULINPA, SKILL_NONE, SKILL_NONE},
        .unk15=32, .drop=180, .unk17=136, .cp=2, .unk19=80
    },
    {
        .race=33, .hp=186, .mp=21, .level=18,
        .str=15, .itl=5, .mag=11, .vit=10, .spd=4, .lck=5,
        .alignment=143, .atkn=53, .moon=4, .resist=6, .unk11=22,
        .skills={SKILL_DEATHTOUCH, SKILL_CALL_ALLY, SKILL_STUN_BITE},
        .unk15=16, .drop=180, .unk17=186, .cp=10, .unk19=176
    },
    {
        .race=33, .hp=57, .mp=12, .level=10,
        .str=9, .itl=7, .mag=6, .vit=8, .spd=6, .lck=4,
        .alignment=125, .atkn=36, .moon=4, .resist=10, .unk11=6,
        .skills={SKILL_GUARD, SKILL_CALL_ALLY, SKILL_NONE},
        .unk15=20, .drop=66, .unk17=41, .cp=6, .unk19=176
    },
    {
        .race=33, .hp=53, .mp=10, .level=7,
        .str=7, .itl=6, .mag=5, .vit=7, .spd=7, .lck=4,
        .alignment=134, .atkn=52, .moon=4, .resist=3, .unk11=17,
        .skills={SKILL_GUARD, SKILL_STUN_CLAW, SKILL_STUN_BITE},
        .unk15=231, .drop=199, .unk17=89, .cp=4, .unk19=113
    },
    {
        .race=33, .hp=39, .mp=8, .level=6,
        .str=8, .itl=6, .mag=5, .vit=5, .spd=5, .lck=3,
        .alignment=130, .atkn=148, .moon=4, .resist=3, .unk11=10,
        .skills={SKILL_GUARD, SKILL_VENOM_CLAW, SKILL_CALL_ALLY},
        .unk15=230, .drop=64, .unk17=89, .cp=3, .unk19=176
    },
    {
        .race=33, .hp=46, .mp=10, .level=3,
        .str=4, .itl=5, .mag=5, .vit=5, .spd=3, .lck=2,
        .alignment=140, .atkn=130, .moon=4, .resist=2, .unk11=5,
        .skills={SKILL_CALL_ALLY, SKILL_VENOM_CLAW, SKILL_NONE},
        .unk15=24, .drop=1, .unk17=105, .cp=2, .unk19=176
    },
    {
        .race=33, .hp=32, .mp=9, .level=2,
        .str=3, .itl=6, .mag=4, .vit=6, .spd=4, .lck=3,
        .alignment=136, .atkn=130, .moon=4, .resist=3, .unk11=10,
        .skills={SKILL_GUARD, SKILL_CALL_ALLY, SKILL_STUN_CLAW},
        .unk15=24, .drop=4, .unk17=105, .cp=2, .unk19=176
    },
    {
        .race=33, .hp=31, .mp=6, .level=1,
        .str=2, .itl=6, .mag=5, .vit=5, .spd=2, .lck=1,
        .alignment=134, .atkn=4, .moon=4, .resist=3, .unk11=6,
        .skills={SKILL_GUARD, SKILL_VENOM_BITE, SKILL_NONE},
        .unk15=24, .drop=176, .unk17=105, .cp=1, .unk19=176
    },
    {
        .race=34, .hp=470, .mp=40, .level=44,
        .str=19, .itl=10, .mag=14, .vit=17, .spd=12, .lck=6,
        .alignment=223, .atkn=20, .moon=27, .resist=4, .unk11=21,
        .skills={SKILL_ZANMA, SKILL_SHIBABOO, SKILL_PARAL_EYES},
        .unk15=234, .drop=31, .unk17=186, .cp=22, .unk19=192
    },
    {
        .race=34, .hp=450, .mp=20, .level=32,
        .str=14, .itl=9, .mag=12, .vit=16, .spd=9, .lck=5,
        .alignment=222, .atkn=20, .moon=13, .resist=0, .unk11=18,
        .skills={SKILL_GUARD, SKILL_DEATHTOUCH, SKILL_VENOM_BREATH},
        .unk15=224, .drop=180, .unk17=40, .cp=13, .unk19=192
    },
    {
        .race=34, .hp=52, .mp=13, .level=13,
        .str=7, .itl=5, .mag=6, .vit=15, .spd=7, .lck=4,
        .alignment=221, .atkn=20, .moon=12, .resist=2, .unk11=7,
        .skills={SKILL_DEATHTOUCH, SKILL_GUARD, SKILL_NONE},
        .unk15=224, .drop=180, .unk17=40, .cp=4, .unk19=192
    },
    {
        .race=34, .hp=22, .mp=9, .level=4,
        .str=2, .itl=3, .mag=3, .vit=6, .spd=10, .lck=3,
        .alignment=220, .atkn=132, .moon=25, .resist=2, .unk11=17,
        .skills={SKILL_GUARD, SKILL_ZAN, SKILL_TARUNDA},
        .unk15=208, .drop=180, .unk17=138, .cp=2, .unk19=192
    },
    {
        .race=34, .hp=20, .mp=0, .level=2,
        .str=3, .itl=6, .mag=4, .vit=7, .spd=5, .lck=5,
        .alignment=201, .atkn=128, .moon=1, .resist=0, .unk11=2,
        .skills={SKILL_CALL_ALLY, SKILL_NONE, SKILL_NONE},
        .unk15=213, .drop=65, .unk17=112, .cp=0, .unk19=160
    },
    {
        .race=34, .hp=18, .mp=0, .level=1,
        .str=3, .itl=5, .mag=4, .vit=4, .spd=6, .lck=4,
        .alignment=200, .atkn=0, .moon=1, .resist=0, .unk11=2,
        .skills={SKILL_ESCAPE, SKILL_NONE, SKILL_NONE},
        .unk15=218, .drop=0, .unk17=112, .cp=0, .unk19=160
    },
    {
        .race=35, .hp=180, .mp=0, .level=32,
        .str=12, .itl=10, .mag=6, .vit=13, .spd=20, .lck=5,
        .alignment=0, .atkn=16, .moon=15, .resist=12, .unk11=1,
        .skills={SKILL_CALL_ALLY, SKILL_NONE, SKILL_NONE},
        .unk15=26, .drop=198, .unk17=160, .cp=0, .unk19=176
    },
    {
        .race=35, .hp=80, .mp=0, .level=25,
        .str=11, .itl=9, .mag=5, .vit=20, .spd=8, .lck=5,
        .alignment=0, .atkn=32, .moon=15, .resist=12, .unk11=2,
        .skills={SKILL_CALL_ALLY, SKILL_NONE, SKILL_NONE},
        .unk15=26, .drop=197, .unk17=160, .cp=0, .unk19=176
    },
    {
        .race=35, .hp=60, .mp=0, .level=21,
        .str=19, .itl=4, .mag=2, .vit=15, .spd=10, .lck=4,
        .alignment=0, .atkn=32, .moon=15, .resist=0, .unk11=1,
        .skills={SKILL_CALL_ALLY, SKILL_NONE, SKILL_NONE},
        .unk15=26, .drop=196, .unk17=160, .cp=0, .unk19=176
    },
    {
        .race=35, .hp=40, .mp=8, .level=15,
        .str=10, .itl=6, .mag=1, .vit=8, .spd=17, .lck=6,
        .alignment=0, .atkn=64, .moon=15, .resist=0, .unk11=1,
        .skills={SKILL_SHOCK, SKILL_NONE, SKILL_NONE},
        .unk15=26, .drop=223, .unk17=160, .cp=10, .unk19=176
    },
    {
        .race=35, .hp=80, .mp=0, .level=11,
        .str=9, .itl=6, .mag=6, .vit=7, .spd=9, .lck=5,
        .alignment=10, .atkn=144, .moon=16, .resist=0, .unk11=12,
        .skills={SKILL_GUARD, SKILL_BIND_VOICE, SKILL_ESCAPE},
        .unk15=112, .drop=180, .unk17=6, .cp=10, .unk19=176
    },
    {
        .race=35, .hp=13, .mp=8, .level=2,
        .str=2, .itl=6, .mag=3, .vit=11, .spd=1, .lck=6,
        .alignment=20, .atkn=128, .moon=16, .resist=2, .unk11=6,
        .skills={SKILL_CALL_ALLY, SKILL_PULINPA, SKILL_NONE},
        .unk15=16, .drop=180, .unk17=11, .cp=10, .unk19=192
    },
    {
        .race=39, .hp=0, .mp=0, .level=0,
        .str=0, .itl=0, .mag=0, .vit=0, .spd=0, .lck=0,
        .alignment=0, .atkn=0, .moon=0, .resist=0, .unk11=0,
        .skills={SKILL_AGI, SKILL_AGI, SKILL_AGI},
        .unk15=0, .drop=0, .unk17=0, .cp=0, .unk19=0
    },
    {
        .race=15, .hp=120, .mp=55, .level=10,
        .str=9, .itl=8, .mag=8, .vit=7, .spd=12, .lck=6,
        .alignment=168, .atkn=1, .moon=21, .resist=0, .unk11=11,
        .skills={SKILL_PULINPA, SKILL_HAPIRMA, SKILL_DORMINA},
        .unk15=48, .drop=180, .unk17=101, .cp=0, .unk19=255
    },
    {
        .race=30, .hp=132, .mp=48, .level=12,
        .str=7, .itl=11, .mag=9, .vit=8, .spd=14, .lck=5,
        .alignment=220, .atkn=0, .moon=21, .resist=4, .unk11=13,
        .skills={SKILL_TARUNDA, SKILL_MAKAJAMA, SKILL_RAKUKAJA},
        .unk15=64, .drop=180, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=37, .hp=398, .mp=50, .level=15,
        .str=12, .itl=10, .mag=9, .vit=12, .spd=10, .lck=8,
        .alignment=180, .atkn=0, .moon=28, .resist=0, .unk11=13,
        .skills={SKILL_MARAGI, SKILL_SHIBABOO, SKILL_MAZAN},
        .unk15=64, .drop=180, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=37, .hp=440, .mp=60, .level=28,
        .str=14, .itl=18, .mag=11, .vit=13, .spd=16, .lck=9,
        .alignment=210, .atkn=0, .moon=28, .resist=0, .unk11=10,
        .skills={SKILL_SHIBABOO, SKILL_CRITICAL, SKILL_DIARAMA},
        .unk15=79, .drop=14, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=0, .hp=482, .mp=90, .level=30,
        .str=16, .itl=10, .mag=12, .vit=15, .spd=11, .lck=13,
        .alignment=50, .atkn=0, .moon=28, .resist=0, .unk11=10,
        .skills={SKILL_ZIONGA, SKILL_MAZIO, SKILL_BIND_VOICE},
        .unk15=64, .drop=180, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=37, .hp=320, .mp=60, .level=32,
        .str=22, .itl=10, .mag=11, .vit=21, .spd=12, .lck=10,
        .alignment=60, .atkn=0, .moon=0, .resist=0, .unk11=20,
        .skills={SKILL_ZANMA, SKILL_DIARAMA, SKILL_MAZANMA},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=37, .hp=310, .mp=60, .level=32,
        .str=20, .itl=14, .mag=17, .vit=23, .spd=15, .lck=7,
        .alignment=180, .atkn=0, .moon=0, .resist=0, .unk11=20,
        .skills={SKILL_MARAGI, SKILL_AGILAO, SKILL_SHIBABOO},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=3, .hp=560, .mp=50, .level=43,
        .str=30, .itl=10, .mag=12, .vit=21, .spd=13, .lck=10,
        .alignment=190, .atkn=0, .moon=28, .resist=7, .unk11=10,
        .skills={SKILL_SHIBABOO, SKILL_BUFULA, SKILL_MAZIONGA},
        .unk15=79, .drop=20, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=11, .hp=700, .mp=90, .level=48,
        .str=22, .itl=17, .mag=17, .vit=15, .spd=25, .lck=14,
        .alignment=250, .atkn=0, .moon=29, .resist=10, .unk11=14,
        .skills={SKILL_MAZANMA, SKILL_DORMINA, SKILL_MARIN_KARIN},
        .unk15=96, .drop=185, .unk17=6, .cp=0, .unk19=0
    },
    {
        .race=26, .hp=2272, .mp=250, .level=52,
        .str=30, .itl=15, .mag=16, .vit=22, .spd=12, .lck=11,
        .alignment=167, .atkn=0, .moon=51, .resist=11, .unk11=11,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_TACKLE},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=15, .hp=1002, .mp=220, .level=46,
        .str=28, .itl=12, .mag=14, .vit=19, .spd=15, .lck=10,
        .alignment=202, .atkn=0, .moon=30, .resist=8, .unk11=12,
        .skills={SKILL_MAZANMA, SKILL_HAPPY_STEP, SKILL_MUDO},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=35, .hp=1310, .mp=0, .level=58,
        .str=26, .itl=26, .mag=8, .vit=28, .spd=18, .lck=6,
        .alignment=8, .atkn=0, .moon=30, .resist=10, .unk11=4,
        .skills={SKILL_SHOCK, SKILL_NONE, SKILL_NONE},
        .unk15=64, .drop=198, .unk17=18, .cp=0, .unk19=0
    },
    {
        .race=5, .hp=1540, .mp=120, .level=70,
        .str=27, .itl=21, .mag=22, .vit=24, .spd=16, .lck=14,
        .alignment=40, .atkn=0, .moon=29, .resist=5, .unk11=14,
        .skills={SKILL_HAPIRMA, SKILL_MARIN_KARIN, SKILL_MAZANMA},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=5, .hp=1820, .mp=150, .level=80,
        .str=29, .itl=19, .mag=19, .vit=26, .spd=21, .lck=13,
        .alignment=32, .atkn=0, .moon=30, .resist=8, .unk11=14,
        .skills={SKILL_MAZIONGA, SKILL_MARIN_KARIN, SKILL_MAHAMA},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=2, .hp=1610, .mp=64, .level=77,
        .str=28, .itl=15, .mag=34, .vit=29, .spd=18, .lck=9,
        .alignment=166, .atkn=0, .moon=31, .resist=5, .unk11=13,
        .skills={SKILL_AGILAO, SKILL_MARAGION, SKILL_MUDO},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=3, .hp=1520, .mp=170, .level=72,
        .str=30, .itl=10, .mag=13, .vit=36, .spd=19, .lck=9,
        .alignment=160, .atkn=0, .moon=29, .resist=5, .unk11=10,
        .skills={SKILL_SHIBABOO, SKILL_RAKUKAJA, SKILL_FIRE_BREATH},
        .unk15=64, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=27, .hp=1730, .mp=20, .level=71,
        .str=29, .itl=10, .mag=14, .vit=26, .spd=16, .lck=11,
        .alignment=151, .atkn=0, .moon=29, .resist=8, .unk11=15,
        .skills={SKILL_TAIL, SKILL_FIRE_BREATH, SKILL_SQUASH},
        .unk15=79, .drop=234, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=25, .hp=1920, .mp=200, .level=81,
        .str=32, .itl=17, .mag=19, .vit=30, .spd=15, .lck=11,
        .alignment=245, .atkn=0, .moon=30, .resist=8, .unk11=10,
        .skills={SKILL_STUN_BITE, SKILL_MABUFULA, SKILL_VENOM_BREATH},
        .unk15=79, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=0, .hp=2420, .mp=310, .level=92,
        .str=36, .itl=20, .mag=24, .vit=25, .spd=21, .lck=15,
        .alignment=70, .atkn=0, .moon=31, .resist=9, .unk11=13,
        .skills={SKILL_MEGIDO, SKILL_MAHAMA, SKILL_DIARAMA},
        .unk15=50, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=2, .hp=2160, .mp=256, .level=69,
        .str=26, .itl=20, .mag=22, .vit=24, .spd=13, .lck=10,
        .alignment=180, .atkn=0, .moon=28, .resist=10, .unk11=12,
        .skills={SKILL_ZANMA, SKILL_MAZANMA, SKILL_DIARAMA},
        .unk15=78, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=2, .hp=2060, .mp=240, .level=81,
        .str=37, .itl=17, .mag=18, .vit=26, .spd=19, .lck=11,
        .alignment=190, .atkn=0, .moon=30, .resist=5, .unk11=21,
        .skills={SKILL_ZIONGA, SKILL_MAZIONGA, SKILL_MAKARAKARN},
        .unk15=78, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=4, .hp=1700, .mp=370, .level=96,
        .str=33, .itl=24, .mag=24, .vit=30, .spd=20, .lck=20,
        .alignment=21, .atkn=0, .moon=34, .resist=9, .unk11=21,
        .skills={SKILL_MAZIONGA, SKILL_BUFULA, SKILL_MAKARAKARN},
        .unk15=78, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=4, .hp=2310, .mp=340, .level=83,
        .str=22, .itl=20, .mag=19, .vit=33, .spd=18, .lck=18,
        .alignment=44, .atkn=0, .moon=31, .resist=8, .unk11=12,
        .skills={SKILL_MAZANMA, SKILL_SHIBABOO, SKILL_TETRAKARN},
        .unk15=94, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=4, .hp=2020, .mp=380, .level=91,
        .str=26, .itl=26, .mag=28, .vit=21, .spd=38, .lck=19,
        .alignment=34, .atkn=0, .moon=33, .resist=10, .unk11=14,
        .skills={SKILL_BUFULA, SKILL_MABUFULA, SKILL_MAZIONGA},
        .unk15=94, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=26, .hp=1820, .mp=180, .level=85,
        .str=33, .itl=16, .mag=17, .vit=20, .spd=18, .lck=9,
        .alignment=200, .atkn=0, .moon=32, .resist=9, .unk11=10,
        .skills={SKILL_PULINPA, SKILL_CRITICAL, SKILL_TETRAKARN},
        .unk15=94, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=26, .hp=1920, .mp=450, .level=98,
        .str=29, .itl=31, .mag=27, .vit=23, .spd=32, .lck=16,
        .alignment=240, .atkn=0, .moon=33, .resist=10, .unk11=21,
        .skills={SKILL_MARIN_KARIN, SKILL_MAZIONGA, SKILL_RAKUKAJA},
        .unk15=94, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=26, .hp=2110, .mp=360, .level=100,
        .str=35, .itl=12, .mag=15, .vit=38, .spd=28, .lck=15,
        .alignment=233, .atkn=0, .moon=30, .resist=9, .unk11=14,
        .skills={SKILL_MARAGION, SKILL_FIRE_WALL, SKILL_FIRE_BREATH},
        .unk15=80, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=37, .hp=2250, .mp=300, .level=99,
        .str=35, .itl=14, .mag=22, .vit=31, .spd=19, .lck=23,
        .alignment=10, .atkn=0, .moon=0, .resist=8, .unk11=21,
        .skills={SKILL_MAZANMA, SKILL_HAMA, SKILL_DIARAMA},
        .unk15=80, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=37, .hp=2250, .mp=300, .level=99,
        .str=37, .itl=15, .mag=20, .vit=32, .spd=21, .lck=20,
        .alignment=245, .atkn=0, .moon=0, .resist=8, .unk11=19,
        .skills={SKILL_MARAGION, SKILL_SHIBABOO, SKILL_MARIN_KARIN},
        .unk15=80, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=13, .hp=1710, .mp=400, .level=80,
        .str=28, .itl=24, .mag=21, .vit=23, .spd=21, .lck=10,
        .alignment=230, .atkn=0, .moon=31, .resist=9, .unk11=18,
        .skills={SKILL_DORMINA, SKILL_MARIN_KARIN, SKILL_MABUFULA},
        .unk15=110, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=26, .hp=2710, .mp=433, .level=108,
        .str=36, .itl=15, .mag=19, .vit=23, .spd=28, .lck=20,
        .alignment=255, .atkn=0, .moon=33, .resist=11, .unk11=13,
        .skills={SKILL_TENTARAFOO, SKILL_VENOM_BREATH, SKILL_DEATH_ROAD},
        .unk15=94, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=4, .hp=10000, .mp=340, .level=116,
        .str=40, .itl=30, .mag=40, .vit=38, .spd=40, .lck=34,
        .alignment=240, .atkn=0, .moon=35, .resist=11, .unk11=21,
        .skills={SKILL_MARAGION, SKILL_CRITICAL, SKILL_MEGIDOLAON},
        .unk15=126, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=2, .hp=10000, .mp=400, .level=110,
        .str=40, .itl=36, .mag=38, .vit=40, .spd=30, .lck=38,
        .alignment=10, .atkn=0, .moon=35, .resist=11, .unk11=21,
        .skills={SKILL_MARAGION, SKILL_DIARAMA, SKILL_MEGIDOLAON},
        .unk15=126, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=19, .hp=340, .mp=80, .level=32,
        .str=23, .itl=9, .mag=10, .vit=16, .spd=12, .lck=8,
        .alignment=120, .atkn=0, .moon=18, .resist=4, .unk11=13,
        .skills={SKILL_ZIONGA, SKILL_CRITICAL, SKILL_RAKUKAJA},
        .unk15=96, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=19, .hp=290, .mp=70, .level=32,
        .str=18, .itl=10, .mag=13, .vit=11, .spd=8, .lck=7,
        .alignment=118, .atkn=0, .moon=18, .resist=8, .unk11=14,
        .skills={SKILL_MEDIA, SKILL_MAKAJAMA, SKILL_TARUKAJA},
        .unk15=96, .drop=185, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=0, .hp=999, .mp=999, .level=99,
        .str=25, .itl=35, .mag=25, .vit=20, .spd=40, .lck=40,
        .alignment=127, .atkn=0, .moon=24, .resist=0, .unk11=14,
        .skills={SKILL_HAPIRMA, SKILL_PULINPA, SKILL_MARIN_KARIN},
        .unk15=115, .drop=55, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=0, .hp=999, .mp=999, .level=99,
        .str=40, .itl=10, .mag=25, .vit=30, .spd=35, .lck=20,
        .alignment=0, .atkn=0, .moon=24, .resist=0, .unk11=10,
        .skills={SKILL_TENTARAFOO, SKILL_MUDO, SKILL_MUDOON},
        .unk15=115, .drop=48, .unk17=101, .cp=0, .unk19=0
    },
    {
        .race=0, .hp=999, .mp=999, .level=99,
        .str=15, .itl=40, .mag=40, .vit=10, .spd=10, .lck=20,
        .alignment=255, .atkn=0, .moon=6, .resist=0, .unk11=15,
        .skills={SKILL_BLOOD_THIEF, SKILL_PETRA_EYES, SKILL_EVIL_SMILE},
        .unk15=115, .drop=50, .unk17=101, .cp=0, .unk19=0
    }
};
struct demon_data * D_800B72A0 = &DemonData;
struct game_data * D_800B72AC;

extern s32 D_800FADF4[2];
extern void * D_8010BEA8[];

extern void func_8004725C(struct object * self);
extern void func_800472B4(struct object * self);
extern void func_80048380(struct unk_data_600 * arg0);
extern void func_80048538(struct unk_data_600 * arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4);
extern void func_800488CC(struct unk_data_600 * arg0);
extern s32 func_80048E74(struct unk_data_600 * arg0, s16 arg1);
extern void func_80048F10(struct unk_data_600 * arg0, s16 arg1);
extern void func_800490A4(struct unk_data_600 * arg0);
extern struct object * func_800492B0(s16 x, s16 y, s32 arg2, u32 arg3);
extern void func_80049424(struct object * arg0);
extern void func_800495FC(struct object * arg0);
extern void func_800498EC(void);
extern s32 func_8004AE2C(s32 arg0);
extern s32 func_8004C06C(u32 flag);
extern void func_8004C08C(u32 flag);
extern void func_8004C0B4(u32 flag);
extern s32 func_8004C3A8(void);
extern s32 (* func_8004C5A8(void))[9];
extern s32 func_8004C638(s32 arg0);
extern void func_8004C6CC(s32 arg0);
extern s32 func_8004C790(s32 arg0);
extern s32 func_8004C7D8(void);
extern u16 func_8004C85C(s32 arg0);
extern s32 func_8004C87C(s32 arg0);
extern void func_8004C8A0(s32 arg0, s32 arg1);
extern void func_8004C8C8(s32 arg0, s32 arg1);
extern s16 func_8004C90C(s32 arg0);
extern s16 func_8004C92C(s32 arg0);
extern void func_8004C94C(s32 arg0, s32 arg1);
extern void func_8004C988(s32 arg0, s32 arg1);
extern s16 func_8004C9C4(s32 arg0);
extern s32 func_8004CA20(s32 chara);
extern s32 func_8004CAC0(s32 arg0);
extern void func_8004CB04(s32 arg0);
extern s32 func_8004CB88(s32 arg0);
extern void func_8004CC58(s32 arg0);
extern void func_8004CCB0(s32 arg0, s32 arg1);
extern s32 func_8004D300(s32 chara);
extern s32 func_8004D32C(s32 chara);
extern void func_8004D358(s32 chara);
extern void func_8004D394(s32 chara);
extern s16 func_8004D42C(s32 chara, s32 amount);
extern void func_8004D488(s32 arg0, s32 arg1);
extern s16 func_8004D538(s32 arg0, s32 arg1);
extern u8 func_8004E780(void);
extern s32 func_8004E7A0(s32 dividend, s32 divisor);
extern void func_8004EA64(s16 arg0);
extern void func_8004EB7C(s32 arg0);
extern s32 func_8004ED78(void);
extern void func_8004FA60(void);
extern void func_8004FBC4(void);

#endif