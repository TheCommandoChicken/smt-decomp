typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef enum event_flag {
    AutomapUnlocked=0,
    AnalysisUnlocked=1,
    CompUnlocked=2,
    WalkedThroughHallway=3,
    GoneToSleep=4 /* Prevents you from going back to sleep */,
    New_Name_(5)=5,
    New_Name_(6)=6,
    MomGaveMoney=7,
    New_Name_(8)=8,
    WitnessMurder=9,
    New_Name_(9)=10,
    New_Name_(10)=11,
    InCafe=12,
    New_Name_(12)=13,
    New_Name_(13)=14,
    New_Name_(14)=15,
    LawHeroJoined=16,
    LawHeroTalkedTo=17,
    CellOpenHospital=18,
    StephenTalkedTo=19,
    OriasDefeated=20,
    ChaosHeroJoined=21,
    New_Name_(15)=22,
    GotCoffee=23 /* This isn't actually mandatory for some reason. */,
    AmanoSakugamiDefeated=24,
    PascalJoined=25,
    DoumanDefeated=26,
    PascalFused=27,
    PascalTeleported=28,
    New_Name_(17)=29,
    New_Name_(18)=30,
    New_Name_(19)=31,
    New_Name_(20)=32,
    YurikoMetKichijoji=33,
    YurikoMetShinjuku=34,
    New_Name_(22)=35,
    New_Name_(23)=36,
    OzawaDefeated=37,
    New_Name_(24)=38,
    SavedHeroine=39,
    HeroineAbducted=40,
    New_Name_(25)=41,
    HelpedGotou=42,
    GotouDefeated=43,
    New_Name_(27)=44,
    New_Name_(26)=45,
    HelpedThor=46,
    TokyoDestroyed=47,
    New_Name_(28)=48,
    LawHeroVajradhatu=49,
    ChaosHeroVajradhatu=50,
    New_Name_(29)=51,
    InVajradhatu=56,
    TakeminekataDefeated=71,
    DonatedToChurch=81,
    ArachneDefeated=82,
    ChurchFinished=85,
    TrappedBelial=86,
    NebirosDefeated=87,
    TokyoFlooded=158,
    SavedOctopus=166,
    MichaelDefeated=182,
    AsuraDefeated=199,
    DefeatedThor=229,
    MissileStrikeHappening=230,
    CurrencyChanged=236,
    CompUpgrade1=237,
    CompUpgrade2=238,
    CompUpgrade3=239,
    Difficulty=248,
    AboutToHearHeroine=249 /* If 1 then you will hear the Heroine calling for help after moving on the map screen */,
    AlignmentLocked=251,
    InvasionStarted=255
} event_flag;

