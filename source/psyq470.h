typedef unsigned char   undefined;

typedef unsigned char    boolean;
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
#define NREGS 40

#define R_A0 4

#define R_A1 5

#define R_A2 6

#define R_A3 7

#define R_AT 1

#define R_CAUSE 36

#define R_EPC 32

#define R_FP 30

#define R_GP 28

#define R_K0 26

#define R_K1 27

#define R_MDHI 33

#define R_MDLO 34

#define R_R0 0

#define R_R1 1

#define R_R10 10

#define R_R11 11

#define R_R12 12

#define R_R13 13

#define R_R14 14

#define R_R15 15

#define R_R16 16

#define R_R17 17

#define R_R18 18

#define R_R19 19

#define R_R2 2

#define R_R20 20

#define R_R21 21

#define R_R22 22

#define R_R23 23

#define R_R24 24

#define R_R25 25

#define R_R26 26

#define R_R27 27

#define R_R28 28

#define R_R29 29

#define R_R3 3

#define R_R30 30

#define R_R31 31

#define R_R4 4

#define R_R5 5

#define R_R6 6

#define R_R7 7

#define R_R8 8

#define R_R9 9

#define R_RA 31

#define R_S0 16

#define R_S1 17

#define R_S2 18

#define R_S3 19

#define R_S4 20

#define R_S5 21

#define R_S6 22

#define R_S7 23

#define R_SP 29

#define R_SR 35

#define R_T0 8

#define R_T1 9

#define R_T2 10

#define R_T3 11

#define R_T4 12

#define R_T5 13

#define R_T6 14

#define R_T7 15

#define R_T8 24

#define R_T9 25

#define R_V0 2

#define R_V1 3

#define R_ZERO 0

#define _B 128

#define _C 32

#define _L 2

#define _N 4

#define _P 16

#define _S 8

#define _U 1

#define _X 64

#define E2BIG 7

#define EACCES 13

#define EAGAIN 11

#define EALREADY 37

#define EBADF 9

#define EBUSY 16

#define ECHILD 10

#define EDOM 33

#define EEXIST 17

#define EFAULT 14

#define EFBIG 27

#define EFORMAT 31

#define EINPROGRESS 36

#define EINTR 4

#define EINVAL 22

#define EIO 5

#define EISDIR 21

#define EMFILE 24

#define ENFILE 23

#define ENODEV 19

#define ENOENT 2

#define ENOEXEC 8

#define ENOMEM 12

#define ENOSPC 28

#define ENOTBLK 15

#define ENOTDIR 20

#define ENOTTY 25

#define ENXIO 6

#define EPERM 1

#define EPIPE 32

#define ERANGE 34

#define EROFS 30

#define ESPIPE 29

#define ESRCH 3

#define ETXTBSY 26

#define EWOULDBLOCK 35

#define EXDEV 18

#define FAPPEND 256

#define FASYNC 32768

#define FCREAT 512

#define FNBLOCK 4

#define FNBUF 16384

#define FRCOM 8192

#define FREAD 1

#define FRLOCK 16

#define FSCAN 4096

#define FTRUNC 1024

#define FWLOCK 32

#define FWRITE 2

#define O_CREAT 512

#define O_NBLOCK 4

#define O_NOBUF 16384

#define O_NOWAIT 32768

#define O_RDONLY 1

#define O_RDWR 3

#define O_WRONLY 2

#define SEEK_CUR 1

#define SEEK_END 2

#define SEEK_SET 0

#define CBUFSIZE 256

#define DB_BREAK 4

#define DB_RAW 1

#define DB_STOPPED 2

#define DTTYPE_BLOCK 4

#define DTTYPE_CHAR 1

#define DTTYPE_CONS 2

#define DTTYPE_FS 16

#define DTTYPE_RAW 8

#define NIOB 16

#define READ 1

#define WRITE 2

#define EOF -1

#define NULL 0

#define DescEV 4043309056

#define DescHW 4026531840

#define DescMask 4278190080

#define DescRC 4060086272

#define DescSW 4093640704

#define DescTH 4278190080

#define DescUEV 4076863488

#define EvMdINTR 4096

#define EvMdNOINTR 8192

#define EvSpACK 16

#define EvSpCLOSE 8

#define EvSpCOMP 32

#define EvSpCZ 1

#define EvSpDE 128

#define EvSpDR 64

#define EvSpEDOM 769

#define EvSpERANGE 770

#define EvSpERROR 32768

#define EvSpINT 2

#define EvSpIOE 4

#define EvSpIOER 1024

#define EvSpIOEW 2048

#define EvSpNEW 8192

#define EvSpPERROR 32769

#define EvSpSYSCALL 16384

#define EvSpTIMOUT 256

#define EvSpTRAP 4096

#define EvSpUNKNOWN 512

#define EvStACTIVE 8192

#define EvStALREADY 16384

#define EvStUNUSED 0

#define EvStWAIT 4096

#define HwCARD 4026531857

#define HwCARD_0 4026531858

#define HwCARD_1 4026531859

#define HwCdRom 4026531843

#define HwCNTL 4026531848

#define HwCPU 4026531856

#define HwDMAC 4026531844

#define HwGPU 4026531842

#define HwPIO 4026531850

#define HwRTC0 4026531845

#define HwRTC1 4026531846

#define HwRTC2 4026531847

#define HwSIO 4026531851

#define HwSPU 4026531849

#define HwVBLANK 4026531841

#define RCntCNT0 4060086272

#define RCntCNT1 4060086273

#define RCntCNT2 4060086274

#define RCntCNT3 4060086275

#define RCntMdFR 0

#define RCntMdGATE 16

#define RCntMdINTR 4096

#define RCntMdNOINTR 8192

#define RCntMdSC 1

#define RCntMdSP 0

#define SwCARD 4093640705

#define SwMATH 4093640706

#define TcbMdPRI 8192

#define TcbMdRT 4096

#define TcbStACTIVE 16384

#define TcbStUNUSED 4096

#define CdlAcknowledge 3

#define CdlBackward 5

#define CdlCdromFormat 2

#define CdlComplete 2

#define CdlDataEnd 4

#define CdlDataReady 1

#define CdlDemute 12

#define CdlDiskError 5

#define CdlForward 4

#define CdlGetlocL 16

#define CdlGetlocP 17

#define CdlGetparam 15

#define CdlGetTD 20

#define CdlGetTN 19

#define CdlMAXDIR 128

#define CdlMAXFILE 64

#define CdlMAXLEVEL 8

#define CdlMAXTOC 100

#define CdlModeAP 2

#define CdlModeDA 1

#define CdlModeRept 4

#define CdlModeRT 64

#define CdlModeSF 8

#define CdlModeSize0 16

#define CdlModeSize1 32

#define CdlModeSpeed 128

#define CdlModeStream 256

#define CdlModeStream2 288

#define CdlMute 11

#define CdlNoIntr 0

#define CdlNop 1

#define CdlOtherFormat 1

#define CdlPause 9

#define CdlPlay 3

#define CdlReadN 6

#define CdlReadS 27

#define CdlSeekL 21

#define CdlSeekP 22

#define CdlSetfilter 13

#define CdlSetloc 2

#define CdlSetmode 14

#define CdlStandby 7

#define CdlStatError 1

#define CdlStatNoDisk 0

#define CdlStatPlay 128

#define CdlStatRead 32

#define CdlStatSeek 64

#define CdlStatSeekError 4

#define CdlStatShellOpen 16

#define CdlStatStandby 2

#define CdlStop 8

#define EDC 0

#define HEADER_SIZE 8

#define SECTOR_SIZE 512

#define StBUSY 3

#define StCOMPLETE 2

#define StFRAME_NO 4

#define StFRAME_SIZE 6

#define StFREE 0

#define StLOCK 4

#define StMOVIE_HEIGHT 9

#define StMOVIE_WIDTH 8

#define StREWIND 1

#define StSECTOR_OFFSET 2

#define StSECTOR_SIZE 3

#define StSTATUS 0

#define StTYPE 1

#define StVER 0

typedef struct CdlATV CdlATV, *PCdlATV;

typedef uchar u_char;

struct CdlATV {
    u_char val0;
    u_char val1;
    u_char val2;
    u_char val3;
};

typedef void (* CdlCB)(u_char, u_char *);

typedef struct CdlFILE CdlFILE, *PCdlFILE;

typedef struct CdlLOC CdlLOC, *PCdlLOC;

typedef ulong u_long;

struct CdlLOC {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
};

struct CdlFILE {
    struct CdlLOC pos;
    u_long size;
    char name[16];
};

typedef struct CdlFILTER CdlFILTER, *PCdlFILTER;

typedef ushort u_short;

struct CdlFILTER {
    u_char file;
    u_char chan;
    u_short pad;
};

typedef struct StHEADER StHEADER, *PStHEADER;

struct StHEADER {
    u_short id;
    u_short type;
    u_short secCount;
    u_short nSectors;
    u_long frameCount;
    u_long frameSize;
    u_short width;
    u_short height;
    u_long dummy1;
    u_long dummy2;
    struct CdlLOC loc;
};

#define COMB_BIT_DTR 1

#define COMB_BIT_RTS 2

#define COMB_CTS 256

#define COMB_DSR 128

#define COMB_FE 32

#define COMB_OE 16

#define COMB_PERROR 8

#define COMB_RXRDY 2

#define COMB_TXRDY 1

#define COMB_TXU 4

#define DslAcknowledge 3

#define DslBackward 5

#define DslBusy 2

#define DslCdromFormat 4

#define DslComplete 2

#define DslDataEnd 4

#define DslDataReady 1

#define DslDemute 12

#define DslDiskError 5

#define DslFinished 7

#define DslForward 4

#define DslGetlocL 16

#define DslGetlocP 17

#define DslGetparam 15

#define DslGetTD 20

#define DslGetTN 19

#define DslMaxCOMMANDS 8

#define DslMAXDIR 128

#define DslMAXFILE 64

#define DslMAXLEVEL 8

#define DslMaxRESULTS 8

#define DslMAXTOC 100

#define DslModeAP 2

#define DslModeDA 1

#define DslModeRept 4

#define DslModeRT 64

#define DslModeSF 8

#define DslModeSize0 16

#define DslModeSize1 32

#define DslModeSpeed 128

#define DslModeStream 256

#define DslModeStream2 288

#define DslMute 11

#define DslNoCD 3

#define DslNoIntr 0

#define DslNop 1

#define DslNoResult 6

#define DslOtherFormat 2

#define DslPause 9

#define DslPlay 3

#define DslReadN 6

#define DslReadS 27

#define DslReady 1

#define DslSeekL 21

#define DslSeekP 22

#define DslSetfilter 13

#define DslSetloc 2

#define DslSetmode 14

#define DslStandby 7

#define DslStatError 1

#define DslStatNoDisk 1

#define DslStatPlay 128

#define DslStatRead 32

#define DslStatSeek 64

#define DslStatSeekError 4

#define DslStatShellOpen 16

#define DslStatStandby 2

#define DslStop 8

typedef struct DslATV DslATV, *PDslATV;

struct DslATV {
    u_char val0;
    u_char val1;
    u_char val2;
    u_char val3;
};

typedef void (* DslCB)(u_char, u_char *);

typedef struct DslFILE DslFILE, *PDslFILE;

typedef struct DslLOC DslLOC, *PDslLOC;

struct DslLOC {
    u_char minute;
    u_char second;
    u_char sector;
    u_char track;
};

struct DslFILE {
    struct DslLOC pos;
    u_long size;
    char name[16];
};

typedef struct DslFILTER DslFILTER, *PDslFILTER;

struct DslFILTER {
    u_char file;
    u_char chan;
    u_short pad;
};

typedef void (* DslRCB)(u_char, u_char *, u_long *);

#define MODE_NTSC 0

#define MODE_PAL 1

#define MOUSEleft 8

#define MOUSEright 4

#define PADh 2048

#define PADi 512

#define PADj 1024

#define PADk 256

#define PADl 8

#define PADL1 4

#define PADL2 1

#define PADLdown 16384

#define PADLleft 32768

#define PADLright 8192

#define PADLup 4096

#define PADm 2

#define PADn 4

#define PADo 1

#define PADR1 8

#define PADR2 2

#define PADRdown 64

#define PADRleft 128

#define PADRright 32

#define PADRup 16

#define PADselect 256

#define PADstart 2048

#define FNT_MAX_ID 8

#define FNT_MAX_SPRT 1024

#define WAIT_TIME 8388608

typedef struct DISPENV DISPENV, *PDISPENV;

typedef struct RECT RECT, *PRECT;

struct RECT {
    short x;
    short y;
    short w;
    short h;
};

struct DISPENV {
    struct RECT disp;
    struct RECT screen;
    u_char isinter;
    u_char isrgb24;
    u_char pad0;
    u_char pad1;
};

typedef struct DR_AREA DR_AREA, *PDR_AREA;

struct DR_AREA {
    u_long tag;
    u_long code[2];
};

typedef struct DR_ENV DR_ENV, *PDR_ENV;

struct DR_ENV {
    u_long tag;
    u_long code[15];
};

typedef struct DR_LOAD DR_LOAD, *PDR_LOAD;

struct DR_LOAD {
    u_long tag;
    u_long code[3];
    u_long p[13];
};

typedef struct DR_MODE DR_MODE, *PDR_MODE;

struct DR_MODE {
    u_long tag;
    u_long code[2];
};

typedef struct DR_MOVE DR_MOVE, *PDR_MOVE;

struct DR_MOVE {
    u_long tag;
    u_long code[5];
};

typedef struct DR_OFFSET DR_OFFSET, *PDR_OFFSET;

struct DR_OFFSET {
    u_long tag;
    u_long code[2];
};

typedef struct DR_STP DR_STP, *PDR_STP;

struct DR_STP {
    u_long tag;
    u_long code[2];
};

typedef struct DR_TPAGE DR_TPAGE, *PDR_TPAGE;

struct DR_TPAGE {
    u_long tag;
    u_long code[1];
};

typedef struct DR_TWIN DR_TWIN, *PDR_TWIN;

struct DR_TWIN {
    u_long tag;
    u_long code[2];
};

typedef struct DRAWENV DRAWENV, *PDRAWENV;

struct DRAWENV {
    struct RECT clip;
    short ofs[2];
    struct RECT tw;
    u_short tpage;
    u_char dtd;
    u_char dfe;
    u_char isbg;
    u_char r0;
    u_char g0;
    u_char b0;
    struct DR_ENV dr_env;
};

typedef struct LINE_F2 LINE_F2, *PLINE_F2;

struct LINE_F2 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
};

typedef struct LINE_F3 LINE_F3, *PLINE_F3;

struct LINE_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    u_long pad;
};

typedef struct LINE_F4 LINE_F4, *PLINE_F4;

struct LINE_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
    u_long pad;
};

typedef struct LINE_G2 LINE_G2, *PLINE_G2;

struct LINE_G2 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
};

typedef struct LINE_G3 LINE_G3, *PLINE_G3;

struct LINE_G3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_long pad;
};

typedef struct LINE_G4 LINE_G4, *PLINE_G4;

struct LINE_G4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    short x3;
    short y3;
    u_long pad;
};

typedef struct P_CODE P_CODE, *PP_CODE;

struct P_CODE {
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
};

typedef struct P_TAG P_TAG, *PP_TAG;

struct P_TAG {
    uint addr:24;
    uint len:8;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
};

typedef struct POLY_F3 POLY_F3, *PPOLY_F3;

struct POLY_F3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
};

typedef struct POLY_F4 POLY_F4, *PPOLY_F4;

struct POLY_F4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short x1;
    short y1;
    short x2;
    short y2;
    short x3;
    short y3;
};

typedef struct POLY_FT3 POLY_FT3, *PPOLY_FT3;

struct POLY_FT3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad1;
};

typedef struct POLY_FT4 POLY_FT4, *PPOLY_FT4;

struct POLY_FT4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad1;
    short x3;
    short y3;
    u_char u3;
    u_char v3;
    u_short pad2;
};

typedef struct POLY_G3 POLY_G3, *PPOLY_G3;

struct POLY_G3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char pad1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char pad2;
    short x2;
    short y2;
};

typedef struct POLY_G4 POLY_G4, *PPOLY_G4;

struct POLY_G4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char pad1;
    short x1;
    short y1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char pad2;
    short x2;
    short y2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char pad3;
    short x3;
    short y3;
};

typedef struct POLY_GT3 POLY_GT3, *PPOLY_GT3;

struct POLY_GT3 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad2;
};

typedef struct POLY_GT4 POLY_GT4, *PPOLY_GT4;

struct POLY_GT4 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    short x1;
    short y1;
    u_char u1;
    u_char $3;
    u_short tpage;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    short x2;
    short y2;
    u_char u2;
    u_char v2;
    u_short pad2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    short x3;
    short y3;
    u_char u3;
    u_char v3;
    u_short pad3;
};

typedef struct RECT32 RECT32, *PRECT32;

struct RECT32 {
    int x;
    int y;
    int w;
    int h;
};

typedef struct SPRT SPRT, *PSPRT;

struct SPRT {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
    short w;
    short h;
};

typedef struct SPRT_16 SPRT_16, *PSPRT_16;

struct SPRT_16 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
};

typedef struct SPRT_8 SPRT_8, *PSPRT_8;

struct SPRT_8 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    u_char u0;
    u_char $2;
    u_short clut;
};

typedef struct TILE TILE, *PTILE;

struct TILE {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
    short w;
    short h;
};

typedef struct TILE_1 TILE_1, *PTILE_1;

struct TILE_1 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct TILE_16 TILE_16, *PTILE_16;

struct TILE_16 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct TILE_8 TILE_8, *PTILE_8;

struct TILE_8 {
    u_long tag;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    short x0;
    short y0;
};

typedef struct TIM_IMAGE TIM_IMAGE, *PTIM_IMAGE;

struct TIM_IMAGE {
    u_long mode;
    struct RECT * crect;
    u_long * caddr;
    struct RECT * prect;
    u_long * paddr;
};

typedef struct TMD_PRIM TMD_PRIM, *PTMD_PRIM;

typedef struct SVECTOR SVECTOR, *PSVECTOR;

struct SVECTOR {
    short vx;
    short vy;
    short vz;
    short pad;
};

struct TMD_PRIM {
    u_long id;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char p0;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    u_short tpage;
    u_short clut;
    u_char u0;
    u_char $2;
    u_char u1;
    u_char $3;
    u_char u2;
    u_char v2;
    u_char u3;
    u_char v3;
    struct SVECTOR x0;
    struct SVECTOR x1;
    struct SVECTOR x2;
    struct SVECTOR x3;
    struct SVECTOR n0;
    struct SVECTOR n1;
    struct SVECTOR n2;
    struct SVECTOR n3;
    struct SVECTOR * v_ofs;
    struct SVECTOR * n_ofs;
    u_short vert0;
    u_short vert1;
    u_short vert2;
    u_short vert3;
    u_short norm0;
    u_short norm1;
    u_short norm2;
    u_short norm3;
};

#define GPU_COM_F3 32

#define GPU_COM_F4 40

#define GPU_COM_G3 48

#define GPU_COM_G4 56

#define GPU_COM_NF3 33

#define GPU_COM_NF4 41

#define GPU_COM_NG3 49

#define GPU_COM_NG4 57

#define GPU_COM_NTF3 37

#define GPU_COM_NTF4 45

#define GPU_COM_NTG3 53

#define GPU_COM_NTG4 61

#define GPU_COM_TF3 36

#define GPU_COM_TF4 44

#define GPU_COM_TG3 52

#define GPU_COM_TG4 60

#define GsALON 1073741824

#define GsAONE 268435456

#define GsATHREE 805306368

#define GsATWO 536870912

#define GsAZERO 0

#define GsDIV1 512

#define GsDIV2 1024

#define GsDIV3 1536

#define GsDIV4 2048

#define GsDIV5 2560

#define GsDivMODE_DIV 1

#define GsDivMODE_NDIV 0

#define GsDOFF 2147483648

#define GsFOG 8

#define GsHFLIP 1

#define GsINTER 1

#define GsLDIM0 0

#define GsLDIM1 1

#define GsLDIM2 2

#define GsLDIM3 3

#define GsLDIM4 4

#define GsLDIM5 5

#define GsLDIM6 6

#define GsLDIM7 7

#define GsLLMOD 32

#define GsLMODE_FOG 1

#define GsLMODE_LOFF 2

#define GsLMODE_NORMAL 0

#define GsLOFF 64

#define GsMATE 16

#define GsNBACKC 256

#define GsNONINTER 0

#define GsOFSGPU 4

#define GsOFSGTE 0

#define GsPERS 67108864

#define GsRESET0 0

#define GsRESET3 48

#define GsROTOFF 134217728

#define GsTMDFlagGRD 4

#define GsVFLIP 2

#define GsZIGNR 128

#define PSBANK 2147483648

#define SCREEN 1

#define WORLD 0

#define ZRESOLUTION 16383

typedef struct _GsCOORDINATE2 _GsCOORDINATE2, *P_GsCOORDINATE2;

typedef struct MATRIX MATRIX, *PMATRIX;

typedef struct GsCOORD2PARAM GsCOORD2PARAM, *PGsCOORD2PARAM;

typedef struct VECTOR VECTOR, *PVECTOR;

struct MATRIX {
    short m[3][3];
    long t[3];
};

struct VECTOR {
    long vx;
    long vy;
    long vz;
    long pad;
};

struct GsCOORD2PARAM {
    struct VECTOR scale;
    struct SVECTOR rotate;
    struct VECTOR trans;
};

struct _GsCOORDINATE2 {
    ulong flg;
    struct MATRIX coord;
    struct MATRIX workm;
    struct GsCOORD2PARAM * param;
    struct _GsCOORDINATE2 * super;
    struct _GsCOORDINATE2 * sub;
};

typedef struct _GsPOSITION _GsPOSITION, *P_GsPOSITION;

struct _GsPOSITION {
    short offx;
    short offy;
};

typedef struct GsADIV_F3 GsADIV_F3, *PGsADIV_F3;

struct GsADIV_F3 {
    uint limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_F3 si;
};

typedef struct GsADIV_F4 GsADIV_F4, *PGsADIV_F4;

struct GsADIV_F4 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg0;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_F4 si;
};

typedef struct GsADIV_FT3 GsADIV_FT3, *PGsADIV_FT3;

struct GsADIV_FT3 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_FT3 si;
};

typedef struct GsADIV_FT4 GsADIV_FT4, *PGsADIV_FT4;

struct GsADIV_FT4 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg0;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_FT4 si;
};

typedef struct GsADIV_G3 GsADIV_G3, *PGsADIV_G3;

struct GsADIV_G3 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_G3 si;
};

typedef struct GsADIV_G4 GsADIV_G4, *PGsADIV_G4;

struct GsADIV_G4 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg0;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_G4 si;
};

typedef struct GsADIV_GT3 GsADIV_GT3, *PGsADIV_GT3;

struct GsADIV_GT3 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_GT3 si;
};

typedef struct GsADIV_GT4 GsADIV_GT4, *PGsADIV_GT4;

struct GsADIV_GT4 {
    u_long limit;
    long hwd;
    long vwd;
    int shift;
    u_long * org;
    u_long * pk;
    long otz;
    long adivz;
    short adivw;
    short adivh;
    long flg0;
    long flg;
    short minx;
    short miny;
    short maxx;
    short maxy;
    short hwd0;
    short vwd0;
    u_long * tag;
    struct POLY_GT4 si;
};

typedef struct GsADIV_P_F3 GsADIV_P_F3, *PGsADIV_P_F3;

typedef struct VERT VERT, *PVERT;

struct VERT {
    short vx;
    short vy;
    short vz;
    u_char tu;
    u_char tv;
};

struct GsADIV_P_F3 {
    struct VERT vt[3];
};

typedef struct GsADIV_P_F4 GsADIV_P_F4, *PGsADIV_P_F4;

struct GsADIV_P_F4 {
    struct VERT vt[4];
};

typedef struct GsADIV_P_FT3 GsADIV_P_FT3, *PGsADIV_P_FT3;

struct GsADIV_P_FT3 {
    struct VERT vt[3];
};

typedef struct GsADIV_P_FT4 GsADIV_P_FT4, *PGsADIV_P_FT4;

struct GsADIV_P_FT4 {
    struct VERT vt[4];
};

typedef struct GsADIV_P_G3 GsADIV_P_G3, *PGsADIV_P_G3;

typedef struct VERTC VERTC, *PVERTC;

typedef struct CVECTOR CVECTOR, *PCVECTOR;

struct CVECTOR {
    u_char r;
    u_char g;
    u_char b;
    u_char cd;
};

struct VERTC {
    short vx;
    short vy;
    short vz;
    u_char tu;
    u_char tv;
    struct CVECTOR col;
};

struct GsADIV_P_G3 {
    struct VERTC vt[3];
};

typedef struct GsADIV_P_G4 GsADIV_P_G4, *PGsADIV_P_G4;

struct GsADIV_P_G4 {
    struct VERTC vt[4];
};

typedef struct GsADIV_P_GT3 GsADIV_P_GT3, *PGsADIV_P_GT3;

struct GsADIV_P_GT3 {
    struct VERTC vt[3];
};

typedef struct GsADIV_P_GT4 GsADIV_P_GT4, *PGsADIV_P_GT4;

struct GsADIV_P_GT4 {
    struct VERTC vt[4];
};

typedef struct GsBG GsBG, *PGsBG;

typedef struct GsMAP GsMAP, *PGsMAP;

typedef struct GsCELL GsCELL, *PGsCELL;

struct GsBG {
    ulong attribute;
    short x;
    short y;
    short w;
    short h;
    short scrollx;
    short scrolly;
    uchar r;
    uchar g;
    uchar b;
    struct GsMAP * map;
    short mx;
    short my;
    short scalex;
    short scaley;
    long rotate;
};

struct GsCELL {
    uchar u;
    uchar v;
    ushort cba;
    ushort flag;
    ushort tpage;
};

struct GsMAP {
    uchar cellw;
    uchar cellh;
    ushort ncellw;
    ushort ncellh;
    struct GsCELL * base;
    ushort * index;
};

typedef struct GsBOXF GsBOXF, *PGsBOXF;

struct GsBOXF {
    ulong attribute;
    short x;
    short y;
    ushort w;
    ushort h;
    uchar r;
    uchar g;
    uchar b;
};

typedef struct _GsCOORDINATE2 GsCOORDINATE2;

typedef struct GsDOBJ2 GsDOBJ2, *PGsDOBJ2;

struct GsDOBJ2 {
    ulong attribute;
    GsCOORDINATE2 * coord2;
    ulong * tmd;
    ulong id;
};

typedef struct GsDOBJ3 GsDOBJ3, *PGsDOBJ3;

struct GsDOBJ3 {
    ulong attribute;
    GsCOORDINATE2 * coord2;
    ulong * pmd;
    ulong * base;
    ulong * sv;
    ulong id;
};

typedef struct GsDOBJ4 GsDOBJ4, *PGsDOBJ4;

struct GsDOBJ4 {
    ulong attribute;
    GsCOORDINATE2 * coord2;
    ulong * tmd;
    ulong id;
};

typedef struct GsDOBJ5 GsDOBJ5, *PGsDOBJ5;

struct GsDOBJ5 {
    ulong attribute;
    GsCOORDINATE2 * coord2;
    ulong * tmd;
    ulong * packet;
    ulong id;
};

typedef struct GsF_LIGHT GsF_LIGHT, *PGsF_LIGHT;

struct GsF_LIGHT {
    int vx;
    int vy;
    int vz;
    uchar r;
    uchar g;
    uchar b;
};

typedef struct GsFOGPARAM GsFOGPARAM, *PGsFOGPARAM;

struct GsFOGPARAM {
    short dqa;
    long dqb;
    uchar rfc;
    uchar gfc;
    uchar bfc;
};

typedef struct GsGLINE GsGLINE, *PGsGLINE;

struct GsGLINE {
    ulong attribute;
    short x0;
    short y0;
    short x1;
    short y1;
    uchar r0;
    uchar g0;
    uchar b0;
    uchar r1;
    uchar g1;
    uchar b1;
};

typedef struct GsIMAGE GsIMAGE, *PGsIMAGE;

struct GsIMAGE {
    ulong pmode;
    short px;
    short py;
    ushort pw;
    ushort ph;
    ulong * pixel;
    short cx;
    short cy;
    ushort cw;
    ushort ch;
    ulong * clut;
};

typedef struct GsLINE GsLINE, *PGsLINE;

struct GsLINE {
    ulong attribute;
    short x0;
    short y0;
    short x1;
    short y1;
    uchar r;
    uchar g;
    uchar b;
};

typedef struct GsOBJTABLE2 GsOBJTABLE2, *PGsOBJTABLE2;

struct GsOBJTABLE2 {
    struct GsDOBJ2 * top;
    int nobj;
    int maxobj;
};

typedef struct GsOT GsOT, *PGsOT;

typedef struct GsOT_TAG GsOT_TAG, *PGsOT_TAG;

struct GsOT {
    ulong length;
    struct GsOT_TAG * org;
    ulong offset;
    ulong point;
    struct GsOT_TAG * tag;
};

struct GsOT_TAG {
    uint p:24;
    uchar num:8;
};

typedef struct GsRVIEW2 GsRVIEW2, *PGsRVIEW2;

struct GsRVIEW2 {
    long vpx;
    long vpy;
    long vpz;
    long vrx;
    long vry;
    long vrz;
    long rz;
    GsCOORDINATE2 * super;
};

typedef struct GsSPRITE GsSPRITE, *PGsSPRITE;

struct GsSPRITE {
    ulong attribute;
    short x;
    short y;
    ushort w;
    ushort h;
    ushort tpage;
    uchar u;
    uchar v;
    short cx;
    short cy;
    uchar r;
    uchar g;
    uchar b;
    short mx;
    short my;
    short scalex;
    short scaley;
    long rotate;
};

typedef struct GsVIEW2 GsVIEW2, *PGsVIEW2;

struct GsVIEW2 {
    struct MATRIX view;
    GsCOORDINATE2 * super;
};

typedef uchar PACKET;

typedef struct TMD_P_F3 TMD_P_F3, *PTMD_P_F3;

struct TMD_P_F3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
};

typedef struct TMD_P_F3G TMD_P_F3G, *PTMD_P_F3G;

struct TMD_P_F3G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
};

typedef struct TMD_P_F4 TMD_P_F4, *PTMD_P_F4;

struct TMD_P_F4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
    u_short p;
};

typedef struct TMD_P_F4G TMD_P_F4G, *PTMD_P_F4G;

struct TMD_P_F4G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char dummy3;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
    u_short dummy4;
};

typedef struct TMD_P_G3 TMD_P_G3, *PTMD_P_G3;

struct TMD_P_G3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
};

typedef struct TMD_P_G3G TMD_P_G3G, *PTMD_P_G3G;

struct TMD_P_G3G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
};

typedef struct TMD_P_G4 TMD_P_G4, *PTMD_P_G4;

struct TMD_P_G4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
    u_short n3;
    u_short v3;
};

typedef struct TMD_P_G4G TMD_P_G4G, *PTMD_P_G4G;

struct TMD_P_G4G {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char dummy1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char dummy2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char dummy3;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
    u_short n3;
    u_short v3;
};

typedef struct TMD_P_NF3 TMD_P_NF3, *PTMD_P_NF3;

struct TMD_P_NF3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short p;
};

typedef struct TMD_P_NF4 TMD_P_NF4, *PTMD_P_NF4;

struct TMD_P_NF4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
};

typedef struct TMD_P_NG3 TMD_P_NG3, *PTMD_P_NG3;

struct TMD_P_NG3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short p;
};

typedef struct TMD_P_NG4 TMD_P_NG4, *PTMD_P_NG4;

struct TMD_P_NG4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char code;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p1;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p2;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p3;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
};

typedef struct TMD_P_TF3 TMD_P_TF3, *PTMD_P_TF3;

struct TMD_P_TF3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
};

typedef struct TMD_P_TF4 TMD_P_TF4, *PTMD_P_TF4;

struct TMD_P_TF4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p0;
    u_char tu3;
    u_char tv3;
    u_short p1;
    u_short n0;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
    u_short p2;
};

typedef struct TMD_P_TG3 TMD_P_TG3, *PTMD_P_TG3;

struct TMD_P_TG3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
};

typedef struct TMD_P_TG4 TMD_P_TG4, *PTMD_P_TG4;

struct TMD_P_TG4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p0;
    u_char tu3;
    u_char tv3;
    u_short p1;
    u_short n0;
    u_short $2;
    u_short n1;
    u_short $3;
    u_short n2;
    u_short v2;
    u_short n3;
    u_short v3;
};

typedef struct TMD_P_TNF3 TMD_P_TNF3, *PTMD_P_TNF3;

struct TMD_P_TNF3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p0;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char p1;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short p2;
};

typedef struct TMD_P_TNF4 TMD_P_TNF4, *PTMD_P_TNF4;

struct TMD_P_TNF4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p0;
    u_char tu3;
    u_char tv3;
    u_short p1;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char p2;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
};

typedef struct TMD_P_TNG3 TMD_P_TNG3, *PTMD_P_TNG3;

struct TMD_P_TNG3 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p0;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char p1;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p2;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p3;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short p4;
};

typedef struct TMD_P_TNG4 TMD_P_TNG4, *PTMD_P_TNG4;

struct TMD_P_TNG4 {
    u_char out;
    u_char in;
    u_char dummy;
    u_char cd;
    u_char tu0;
    u_char tv0;
    u_short clut;
    u_char tu1;
    u_char tv1;
    u_short tpage;
    u_char tu2;
    u_char tv2;
    u_short p0;
    u_char tu3;
    u_char tv3;
    u_short p1;
    u_char r0;
    u_char g0;
    u_char b0;
    u_char p2;
    u_char r1;
    u_char g1;
    u_char b1;
    u_char p3;
    u_char r2;
    u_char g2;
    u_char b2;
    u_char p4;
    u_char r3;
    u_char g3;
    u_char b3;
    u_char p5;
    u_short $2;
    u_short $3;
    u_short v2;
    u_short v3;
};

typedef struct TMD_STRUCT TMD_STRUCT, *PTMD_STRUCT;

struct TMD_STRUCT {
    u_long * vertop;
    u_long vern;
    u_long * nortop;
    u_long norn;
    u_long * primtop;
    u_long primn;
    u_long scale;
};

#define ONE 4096

#define OUTVTXNUM 10

#define TMPVTXNUM 16

typedef struct CRVECTOR3 CRVECTOR3, *PCRVECTOR3;

typedef struct RVECTOR RVECTOR, *PRVECTOR;

typedef struct DVECTOR DVECTOR, *PDVECTOR;

struct DVECTOR {
    short vx;
    short vy;
};

struct RVECTOR {
    struct SVECTOR v;
    u_char uv[2];
    u_short pad;
    struct CVECTOR c;
    struct DVECTOR sxy;
    u_long sz;
};

struct CRVECTOR3 {
    struct RVECTOR r01;
    struct RVECTOR r12;
    struct RVECTOR r20;
    struct RVECTOR * r0;
    struct RVECTOR * * r1;
    struct RVECTOR * * * r2;
    u_long * rtn;
};

typedef struct CRVECTOR4 CRVECTOR4, *PCRVECTOR4;

struct CRVECTOR4 {
    struct RVECTOR r01;
    struct RVECTOR r02;
    struct RVECTOR r31;
    struct RVECTOR r32;
    struct RVECTOR rc;
    struct RVECTOR * r0;
    struct RVECTOR * * r1;
    struct RVECTOR * * * r2;
    struct RVECTOR * * * * r3;
    u_long * rtn;
};

typedef struct DIVPOLYGON3 DIVPOLYGON3, *PDIVPOLYGON3;

struct DIVPOLYGON3 {
    u_long ndiv;
    u_long pih;
    u_long piv;
    u_short clut;
    u_short tpage;
    struct CVECTOR rgbc;
    u_long * ot;
    struct RVECTOR r0;
    struct RVECTOR r1;
    struct RVECTOR r2;
    struct CRVECTOR3 cr[5];
};

typedef struct DIVPOLYGON4 DIVPOLYGON4, *PDIVPOLYGON4;

struct DIVPOLYGON4 {
    u_long ndiv;
    u_long pih;
    u_long piv;
    u_short clut;
    u_short tpage;
    struct CVECTOR rgbc;
    u_long * ot;
    struct RVECTOR r0;
    struct RVECTOR r1;
    struct RVECTOR r2;
    struct RVECTOR r3;
    struct CRVECTOR4 cr[5];
};

typedef struct EVECTOR EVECTOR, *PEVECTOR;

struct EVECTOR {
    struct SVECTOR v;
    struct VECTOR sxyz;
    struct DVECTOR sxy;
    struct CVECTOR rgb;
    short txuv;
    short pad;
    long chx;
    long chy;
};

typedef struct POL3 POL3, *PPOL3;

struct POL3 {
    short sxy[3][2];
    short sz[3][2];
    short uv[3][2];
    short rgb[3][3];
    short code;
};

typedef struct POL4 POL4, *PPOL4;

struct POL4 {
    short sxy[4][2];
    short sz[4][2];
    short uv[4][2];
    short rgb[4][3];
    short code;
};

typedef struct QMESH QMESH, *PQMESH;

struct QMESH {
    struct SVECTOR * v;
    struct SVECTOR * n;
    struct SVECTOR * u;
    struct CVECTOR * c;
    u_long lenv;
    u_long lenh;
};

typedef struct SPOL SPOL, *PSPOL;

struct SPOL {
    short xy[3];
    short uv[2];
    short rgb[3];
};

typedef struct TMESH TMESH, *PTMESH;

struct TMESH {
    struct SVECTOR * v;
    struct SVECTOR * n;
    struct SVECTOR * u;
    struct CVECTOR * c;
    u_long len;
};

#define GsJntAxesMIMe 67174416

#define GsJntRPYMIMe 67174417

#define GsNrmMIMe 67174433

#define GsRstJntAxesMIMe 67174424

#define GsRstJntRPYMIMe 67174425

#define GsRstNrmMIMe 67174441

#define GsRstVtxMIMe 67174440

#define GsUADF3 524296

#define GsUADF4 524304

#define GsUADFF3 655368

#define GsUADFF4 655376

#define GsUADFFT3 655369

#define GsUADFFT4 655377

#define GsUADFG3 655372

#define GsUADFG4 655380

#define GsUADFGT3 655373

#define GsUADFGT4 655381

#define GsUADFT3 524297

#define GsUADFT4 524305

#define GsUADG3 524300

#define GsUADG4 524308

#define GsUADGT3 524301

#define GsUADGT4 524309

#define GsUADNF3 786504

#define GsUADNF4 786512

#define GsUADNFT3 786505

#define GsUADNFT4 786513

#define GsUADNG3 786508

#define GsUADNG4 786516

#define GsUADNGT3 786509

#define GsUADNGT4 786517

#define GsUBCF3 1048586

#define GsUBCF4 1048594

#define GsUBCFT3 1048587

#define GsUBCFT4 1048595

#define GsUBCG3 1048590

#define GsUBCG4 1048598

#define GsUBCGT3 1048591

#define GsUBCGT4 1048599

#define GsUBF3 1048584

#define GsUBF4 1048592

#define GsUBFT3 1048585

#define GsUBFT4 1048593

#define GsUBG3 1048588

#define GsUBG4 1048596

#define GsUBGT3 1048589

#define GsUBGT4 1048597

#define GsUBNF3 1310792

#define GsUBNF4 1310800

#define GsUBNFT3 1310793

#define GsUBNFT4 1310801

#define GsUBNG3 1310796

#define GsUBNG4 1310804

#define GsUBNGT3 1310797

#define GsUBNGT4 1310805

#define GsUBSNF3 18088008

#define GsUBSNF4 18088016

#define GsUBSNFT3 18088009

#define GsUBSNFT4 18088017

#define GsUBSNG3 18088012

#define GsUBSNG4 18088020

#define GsUBSNGT3 18088013

#define GsUBSNGT4 18088021

#define GsUBSTPF3 3145736

#define GsUBSTPF4 3145744

#define GsUBSTPFT3 3145737

#define GsUBSTPFT4 3145745

#define GsUBSTPG3 3145740

#define GsUBSTPG4 3145748

#define GsUBSTPGT3 3145741

#define GsUBSTPGT4 3145749

#define GsUBSTPNF3 3407944

#define GsUBSTPNF4 3407952

#define GsUBSTPNFT3 3407945

#define GsUBSTPNFT4 3407953

#define GsUBSTPNG3 3407948

#define GsUBSTPNG4 3407956

#define GsUBSTPNGT3 3407949

#define GsUBSTPNGT4 3407957

#define GsUBSTPSNF3 20185160

#define GsUBSTPSNF4 20185168

#define GsUBSTPSNFT3 20185161

#define GsUBSTPSNFT4 20185169

#define GsUBSTPSNG3 20185164

#define GsUBSTPSNG4 20185172

#define GsUBSTPSNGT3 20185165

#define GsUBSTPSNGT4 20185173

#define GsUCF3 10

#define GsUCF4 18

#define GsUCFT3 11

#define GsUCFT4 19

#define GsUCG3 14

#define GsUCG4 22

#define GsUCGT3 15

#define GsUCGT4 23

#define GsUDF3 65544

#define GsUDF4 65552

#define GsUDFF3 196616

#define GsUDFF4 196624

#define GsUDFFT3 196617

#define GsUDFFT4 196625

#define GsUDFG3 196620

#define GsUDFG4 196628

#define GsUDFGT3 196621

#define GsUDFGT4 196629

#define GsUDFT3 65545

#define GsUDFT4 65553

#define GsUDG3 65548

#define GsUDG4 65556

#define GsUDGT3 65549

#define GsUDGT4 65557

#define GsUDNF3 327752

#define GsUDNF4 327760

#define GsUDNFT3 327753

#define GsUDNFT4 327761

#define GsUDNG3 327756

#define GsUDNG4 327764

#define GsUDNGT3 327757

#define GsUDNGT4 327765

#define GsUE1G3 100667404

#define GsUE1G4 100667412

#define GsUE1SG3 100667660

#define GsUE1SG4 100667668

#define GsUE2LG3 100671500

#define GsUE2LG4 100671508

#define GsUE2OLG3 100683788

#define GsUE2OLG4 100683796

#define GsUE2RG3 100675596

#define GsUE2RG4 100675604

#define GsUE2RLG3 100679692

#define GsUE2RLG4 100679700

#define GsUF3 8

#define GsUF4 16

#define GsUFF3 131080

#define GsUFF4 131088

#define GsUFFT3 131081

#define GsUFFT4 131089

#define GsUFG3 131084

#define GsUFG4 131092

#define GsUFGT3 131085

#define GsUFGT4 131093

#define GsUFT3 9

#define GsUFT4 17

#define GsUG3 12

#define GsUG4 20

#define GsUGNDF 83886080

#define GsUGNDFT 83886081

#define GsUGT3 13

#define GsUGT4 21

#define GsUIMG0 33554432

#define GsUIMG1 33554433

#define GsUMF3 24

#define GsUMFT3 25

#define GsUMG3 28

#define GsUMGT3 29

#define GsUMNF3 262232

#define GsUMNFT3 262233

#define GsUMNG3 262236

#define GsUMNGT3 262237

#define GsUNF3 262216

#define GsUNF4 262224

#define GsUNFT3 262217

#define GsUNFT4 262225

#define GsUNG3 262220

#define GsUNG4 262228

#define GsUNGT3 262221

#define GsUNGT4 262229

#define GsUNIT_DIV1 16777216

#define GsUNIT_DIV2 33554432

#define GsUNIT_DIV3 50331648

#define GsUNIT_DIV4 67108864

#define GsUNIT_DIV5 83886080

#define GsUNIT_TERM 4294967295

#define GsUPNF3 262472

#define GsUPNF4 262480

#define GsUPNFT3 262473

#define GsUPNFT4 262481

#define GsUPNG3 262476

#define GsUPNG4 262484

#define GsUPNGT3 262477

#define GsUPNGT4 262485

#define GsUSCAL 16777216

#define GsUSCAL2 100663552

#define GsUSFG3 16908300

#define GsUSFG4 16908308

#define GsUSFGT3 16908301

#define GsUSFGT4 16908309

#define GsUSG3 16777228

#define GsUSG4 16777236

#define GsUSGT3 16777229

#define GsUSGT4 16777237

#define GsUSNF3 17039432

#define GsUSNF4 17039440

#define GsUSNFT3 17039433

#define GsUSNFT4 17039441

#define GsUSNG3 17039436

#define GsUSNG4 17039444

#define GsUSNGT3 17039437

#define GsUSNGT4 17039445

#define GsUSTGT3 16777741

#define GsUSTGT4 16777749

#define GsUSTPF3 2097160

#define GsUSTPF4 2097168

#define GsUSTPFT3 2097161

#define GsUSTPFT4 2097169

#define GsUSTPG3 2097164

#define GsUSTPG4 2097172

#define GsUSTPGT3 2097165

#define GsUSTPGT4 2097173

#define GsUSTPNF3 2359368

#define GsUSTPNF4 2359376

#define GsUSTPNFT3 2359369

#define GsUSTPNFT4 2359377

#define GsUSTPNG3 2359372

#define GsUSTPNG4 2359380

#define GsUSTPNGT3 2359373

#define GsUSTPNGT4 2359381

#define GsUSTPSG3 18874380

#define GsUSTPSG4 18874388

#define GsUSTPSGT3 18874381

#define GsUSTPSGT4 18874389

#define GsUSTPSNF3 19136584

#define GsUSTPSNF4 19136592

#define GsUSTPSNFT3 19136585

#define GsUSTPSNFT4 19136593

#define GsUSTPSNG3 19136588

#define GsUSTPSNG4 19136596

#define GsUSTPSNGT3 19136589

#define GsUSTPSNGT4 19136597

#define GsUTFT3 521

#define GsUTFT4 529

#define GsUTGT3 525

#define GsUTGT4 533

#define GsVtxMIMe 67174432

typedef struct _GsCOORDUNIT _GsCOORDUNIT, *P_GsCOORDUNIT;

struct _GsCOORDUNIT {
    ulong flg;
    struct MATRIX matrix;
    struct MATRIX workm;
    struct SVECTOR rot;
    struct _GsCOORDUNIT * super;
};

typedef struct GsARGUNIT GsARGUNIT, *PGsARGUNIT;

struct GsARGUNIT {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
};

typedef struct GsARGUNIT_ANIM GsARGUNIT_ANIM, *PGsARGUNIT_ANIM;

struct GsARGUNIT_ANIM {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    long header_size;
    ulong * htop;
    ulong * ctop;
    ulong * ptop;
};

typedef struct GsARGUNIT_CAMERA GsARGUNIT_CAMERA, *PGsARGUNIT_CAMERA;

typedef struct _GsCOORDUNIT GsCOORDUNIT;

struct GsARGUNIT_CAMERA {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * cparam;
    GsCOORDUNIT * coord;
    GsCOORDUNIT * rcoord;
};

typedef struct GsARGUNIT_GND GsARGUNIT_GND, *PGsARGUNIT_GND;

struct GsARGUNIT_GND {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * polytop;
    ulong * boxtop;
    ulong * pointtop;
    struct SVECTOR * nortop;
};

typedef struct GsARGUNIT_GNDT GsARGUNIT_GNDT, *PGsARGUNIT_GNDT;

struct GsARGUNIT_GNDT {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * polytop;
    ulong * boxtop;
    ulong * pointtop;
    struct SVECTOR * nortop;
    ulong * uvtop;
};

typedef struct GsARGUNIT_IMAGE GsARGUNIT_IMAGE, *PGsARGUNIT_IMAGE;

struct GsARGUNIT_IMAGE {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * imagetop;
    ulong * cluttop;
};

typedef struct GsARGUNIT_JntMIMe GsARGUNIT_JntMIMe, *PGsARGUNIT_JntMIMe;

struct GsARGUNIT_JntMIMe {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    u_long * coord_sect;
    long * mimepr;
    u_long mimenum;
    u_short mimeid;
    u_short reserved;
    u_long * mime_diff_sect;
};

typedef struct GsARGUNIT_LIGHT GsARGUNIT_LIGHT, *PGsARGUNIT_LIGHT;

struct GsARGUNIT_LIGHT {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * lparam;
    GsCOORDUNIT * coord;
    GsCOORDUNIT * rcoord;
};

typedef struct GsARGUNIT_NORMAL GsARGUNIT_NORMAL, *PGsARGUNIT_NORMAL;

struct GsARGUNIT_NORMAL {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * primtop;
    struct SVECTOR * vertop;
    struct SVECTOR * nortop;
};

typedef struct GsARGUNIT_RstJntMIMe GsARGUNIT_RstJntMIMe, *PGsARGUNIT_RstJntMIMe;

struct GsARGUNIT_RstJntMIMe {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    u_long * coord_sect;
    u_short mimeid;
    u_short reserved;
    u_long * mime_diff_sect;
};

typedef struct GsARGUNIT_RstVNMIMe GsARGUNIT_RstVNMIMe, *PGsARGUNIT_RstVNMIMe;

struct GsARGUNIT_RstVNMIMe {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    u_short mimeid;
    u_short reserved;
    u_long * mime_diff_sect;
    struct SVECTOR * orgs_vn_sect;
    struct SVECTOR * vert_sect;
    struct SVECTOR * norm_sect;
};

typedef struct GsARGUNIT_SHARED GsARGUNIT_SHARED, *PGsARGUNIT_SHARED;

typedef struct GsWORKUNIT GsWORKUNIT, *PGsWORKUNIT;

struct GsWORKUNIT {
    struct DVECTOR vec;
    short otz;
    short p;
};

struct GsARGUNIT_SHARED {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    ulong * primtop;
    struct SVECTOR * vertop;
    struct GsWORKUNIT * vertop2;
    struct SVECTOR * nortop;
    struct SVECTOR * nortop2;
};

typedef struct GsARGUNIT_VNMIMe GsARGUNIT_VNMIMe, *PGsARGUNIT_VNMIMe;

struct GsARGUNIT_VNMIMe {
    ulong * primp;
    struct GsOT * tagp;
    int shift;
    int offset;
    PACKET * out_packetp;
    long * mimepr;
    u_long mimenum;
    u_short mimeid;
    u_short reserved;
    u_long * mime_diff_sect;
    struct SVECTOR * orgs_vn_sect;
    struct SVECTOR * vert_sect;
    struct SVECTOR * norm_sect;
};

typedef struct GsRVIEWUNIT GsRVIEWUNIT, *PGsRVIEWUNIT;

struct GsRVIEWUNIT {
    long vpx;
    long vpy;
    long vpz;
    long vrx;
    long vry;
    long vrz;
    long rz;
    GsCOORDUNIT * super;
};

typedef struct GsSEH GsSEH, *PGsSEH;

struct GsSEH {
    short idx;
    u_char sid;
    u_char pad;
};

typedef struct GsSEQ GsSEQ, *PGsSEQ;

struct GsSEQ {
    u_long rewrite_idx;
    u_short size;
    u_short num;
    u_short ii;
    u_short aframe;
    u_char sid;
    char speed;
    u_short srcii;
    short rframe;
    u_short tframe;
    u_short ci;
    u_short ti;
    u_short start;
    u_char start_sid;
    u_char traveling;
};

typedef struct GsTYPEUNIT GsTYPEUNIT, *PGsTYPEUNIT;

struct GsTYPEUNIT {
    ulong type;
    ulong * ptr;
};

typedef struct GsUNIT GsUNIT, *PGsUNIT;

struct GsUNIT {
    GsCOORDUNIT * coord;
    ulong * primtop;
};

typedef struct GsVIEWUNIT GsVIEWUNIT, *PGsVIEWUNIT;

struct GsVIEWUNIT {
    struct MATRIX view;
    GsCOORDUNIT * super;
};

#define McErrAlreadyExist 6

#define McErrBlockFull 7

#define McErrCardInvalid 2

#define McErrCardNotExist 1

#define McErrExtend 32768

#define McErrFileNotExist 5

#define McErrNewCard 3

#define McErrNone 0

#define McErrNotFormat 4

#define McFuncAccept 2

#define McFuncExist 1

#define McFuncReadData 5

#define McFuncReadFile 3

#define McFuncWriteData 6

#define McFuncWriteFile 4

typedef void (* MemCB)(long, long);

#define ERROR -1

#define FALSE 0

#define McxErrInvalid 2

#define McxErrNewCard 3

#define McxErrNoCard 1

#define McxErrSuccess 0

#define McxFuncAllInfo 12

#define McxFuncCardType 19

#define McxFuncCurrCtrl 8

#define McxFuncExecApl 2

#define McxFuncExecFlag 11

#define McxFuncFlashAcs 13

#define McxFuncGetApl 1

#define McxFuncGetMem 4

#define McxFuncGetSerial 10

#define McxFuncGetTime 3

#define McxFuncGetUIFS 16

#define McxFuncHideTrans 7

#define McxFuncReadDev 14

#define McxFuncSetLED 9

#define McxFuncSetMem 5

#define McxFuncSetTime 18

#define McxFuncSetUIFS 17

#define McxFuncShowTrans 6

#define McxFuncWriteDev 15

#define McxSyncFin 1

#define McxSyncNone -1

#define McxSyncRun 0

#define TRUE 1

#define InfoActCurr 4

#define InfoActFunc 1

#define InfoActSign 5

#define InfoActSize 3

#define InfoActSub 2

#define InfoModeCurExID 2

#define InfoModeCurExOffs 3

#define InfoModeCurID 1

#define InfoModeIdTable 4

#define PadCurrCTP1 10

#define PadMaxCurr 60

#define PadStateDiscon 0

#define PadStateExecCmd 5

#define PadStateFindCTP1 2

#define PadStateFindCTP2 3

#define PadStateFindPad 1

#define PadStateReqInfo 4

#define PadStateStable 6

#define ENCSPU_ENCODE_CONTINUE 2

#define ENCSPU_ENCODE_END 4

#define ENCSPU_ENCODE_ENDIAN_BIG 1

#define ENCSPU_ENCODE_ENDIAN_LITTLE 0

#define ENCSPU_ENCODE_ERROR -1

#define ENCSPU_ENCODE_HIGH_QULITY 1

#define ENCSPU_ENCODE_LOOP 1

#define ENCSPU_ENCODE_MIDDLE_QULITY 0

#define ENCSPU_ENCODE_NO_LOOP 0

#define ENCSPU_ENCODE_START 1

#define ENCSPU_ENCODE_WHOLE 0

typedef struct DECDCTENV DECDCTENV, *PDECDCTENV;

struct DECDCTENV {
    u_char iq_y[64];
    u_char iq_c[64];
    short dct[64];
};

typedef u_short DECDCTTAB[34816];

typedef struct ENCSPUENV ENCSPUENV, *PENCSPUENV;

struct ENCSPUENV {
    short * src;
    short * dest;
    short * work;
    long size;
    long loop_start;
    char loop;
    char byte_swap;
    char proceed;
    char quality;
};

#define CR_BRK 8

#define CR_BUFSZ_1 0

#define CR_BUFSZ_2 256

#define CR_BUFSZ_4 512

#define CR_BUFSZ_8 768

#define CR_DSRIEN 4096

#define CR_DTR 2

#define CR_ERRRST 16

#define CR_INTRST 64

#define CR_RTS 32

#define CR_RXEN 4

#define CR_RXIEN 2048

#define CR_TXEN 1

#define CR_TXIEN 1024

#define MR_BR_1 1

#define MR_BR_16 2

#define MR_BR_64 3

#define MR_CHLEN_5 0

#define MR_CHLEN_6 4

#define MR_CHLEN_7 8

#define MR_CHLEN_8 12

#define MR_P_EVEN 32

#define MR_PEN 16

#define MR_SB_00 0

#define MR_SB_01 64

#define MR_SB_10 128

#define MR_SB_11 192

#define SIO_BIT_DTR 2

#define SIO_BIT_RTS 32

#define SIO_CTS 256

#define SIO_DSR 128

#define SIO_FE 32

#define SIO_OE 16

#define SIO_PERROR 8

#define SIO_RXRDY 2

#define SIO_TXRDY 1

#define SIO_TXU 4

#define SR_CTS 256

#define SR_DSR 128

#define SR_FE 32

#define SR_IRQ 512

#define SR_OE 16

#define SR_PERROR 8

#define SR_RXRDY 2

#define SR_TXRDY 1

#define SR_TXU 4

#define CC_BANKCHANGE 1

#define CC_DAMPER 6

#define CC_DATAENTRY 2

#define CC_EXPRESSION 5

#define CC_EXTERNAL 11

#define CC_MAINVOL 3

#define CC_NRPN1 7

#define CC_NRPN2 8

#define CC_NUMBER 0

#define CC_PANPOT 4

#define CC_RESETALL 12

#define CC_RPN1 9

#define CC_RPN2 10

#define DE_ADSR_AR_E 5

#define DE_ADSR_AR_L 4

#define DE_ADSR_DR 6

#define DE_ADSR_RR_E 11

#define DE_ADSR_RR_L 10

#define DE_ADSR_SL 7

#define DE_ADSR_SR 12

#define DE_ADSR_SR_E 9

#define DE_ADSR_SR_L 8

#define DE_DELAY 19

#define DE_ECHO_DELAY 18

#define DE_ECHO_FB 17

#define DE_LIMITH 3

#define DE_LIMITL 2

#define DE_MODE 1

#define DE_PORTA_DEPTH 14

#define DE_PRIORITY 0

#define DE_REV_DEPTH 16

#define DE_REV_TYPE 15

#define DE_VIB_TIME 13

#define SND_ADDR 16

#define SND_ADSR1 4

#define SND_ADSR2 8

#define SND_PITCH 32

#define SND_VOLL 1

#define SND_VOLR 2

#define SS_IMEDIATE 0

#define SS_IMMEDIATE 0

#define SS_MIX 0

#define SS_MUTE_OFF 0

#define SS_MUTE_ON 1

#define SS_NOTICK 4096

#define SS_NOTICK0 0

#define SS_REV 1

#define SS_REV_TYPE_DELAY 8

#define SS_REV_TYPE_ECHO 7

#define SS_REV_TYPE_HALL 5

#define SS_REV_TYPE_OFF 0

#define SS_REV_TYPE_PIPE 9

#define SS_REV_TYPE_ROOM 1

#define SS_REV_TYPE_SPACE 6

#define SS_REV_TYPE_STUDIO_A 2

#define SS_REV_TYPE_STUDIO_B 3

#define SS_REV_TYPE_STUDIO_C 4

#define SS_SEQ_TABSIZ 176

#define SS_SERIAL_A 0

#define SS_SERIAL_B 1

#define SS_SOFF 0

#define SS_SON 1

#define SS_TICK120 3

#define SS_TICK240 2

#define SS_TICK50 4

#define SS_TICK60 1

#define SS_TICKMODE_MAX 6

#define SS_TICKVSYNC 5

#define SS_WAIT_COMPLETED 1

#define SSPLAY_INFINITY 0

#define SSPLAY_PAUSE 0

#define SSPLAY_PLAY 1

#define SSSKIP_BAR 3

#define SSSKIP_NOTE4 1

#define SSSKIP_NOTE8 2

#define SSSKIP_TICK 0

typedef struct _SsFCALL _SsFCALL, *P_SsFCALL;

struct _SsFCALL {
    void (* noteon)(void);
    void (* programchange)(void);
    void (* pitchbend)(void);
    void (* metaevent)(void);
};

typedef struct ProgAtr ProgAtr, *PProgAtr;

struct ProgAtr {
    uchar tones;
    uchar mvol;
    uchar prior;
    uchar mode;
    uchar mpan;
    char reserved0;
    short attr;
    ulong reserved1;
    ulong reserved2;
};

typedef struct SndRegisterAttr SndRegisterAttr, *PSndRegisterAttr;

typedef struct SndVolume2 SndVolume2, *PSndVolume2;

struct SndVolume2 {
    short left;
    short right;
};

struct SndRegisterAttr {
    struct SndVolume2 volume;
    short pitch;
    short mask;
    short addr;
    short adsr1;
    short adsr2;
};

typedef struct SndVoiceStats SndVoiceStats, *PSndVoiceStats;

struct SndVoiceStats {
    short vagId;
    short vabId;
    ushort pitch;
    short note;
    short tone;
    short prog_num;
    short prog_actual;
    short vol;
    short pan;
};

typedef struct SndVolume SndVolume, *PSndVolume;

struct SndVolume {
    ushort left;
    ushort right;
};

typedef void (* SsMarkCallbackProc)(short, short, short);

typedef struct VabHdr VabHdr, *PVabHdr;

struct VabHdr {
    long form;
    long ver;
    long id;
    ulong fsize;
    ushort reserved0;
    ushort ps;
    ushort ts;
    ushort vs;
    uchar mvol;
    uchar pan;
    uchar attr1;
    uchar attr2;
    ulong reserved1;
};

typedef struct VagAtr VagAtr, *PVagAtr;

struct VagAtr {
    uchar prior;
    uchar mode;
    uchar vol;
    uchar pan;
    uchar center;
    uchar shift;
    uchar min;
    uchar max;
    uchar vibW;
    uchar vibT;
    uchar porW;
    uchar porT;
    uchar pbmin;
    uchar pbmax;
    uchar reserved1;
    uchar reserved2;
    ushort adsr1;
    ushort adsr2;
    short prog;
    short vag;
    short reserved[4];
};

#define SPU_00CH 1

#define SPU_01CH 2

#define SPU_02CH 4

#define SPU_03CH 8

#define SPU_04CH 16

#define SPU_05CH 32

#define SPU_06CH 64

#define SPU_07CH 128

#define SPU_08CH 256

#define SPU_09CH 512

#define SPU_0CH 1

#define SPU_10CH 1024

#define SPU_11CH 2048

#define SPU_12CH 4096

#define SPU_13CH 8192

#define SPU_14CH 16384

#define SPU_15CH 32768

#define SPU_16CH 65536

#define SPU_17CH 131072

#define SPU_18CH 262144

#define SPU_19CH 524288

#define SPU_1CH 2

#define SPU_20CH 1048576

#define SPU_21CH 2097152

#define SPU_22CH 4194304

#define SPU_23CH 8388608

#define SPU_2CH 4

#define SPU_3CH 8

#define SPU_4CH 16

#define SPU_5CH 32

#define SPU_6CH 64

#define SPU_7CH 128

#define SPU_8CH 256

#define SPU_9CH 512

#define SPU_ALL 0

#define SPU_BIT 8

#define SPU_CDONLY 5

#define SPU_CHECK -1

#define SPU_CLEAR 2

#define SPU_COMMON_CDMIX 512

#define SPU_COMMON_CDREV 256

#define SPU_COMMON_CDVOLL 64

#define SPU_COMMON_CDVOLR 128

#define SPU_COMMON_EXTMIX 8192

#define SPU_COMMON_EXTREV 4096

#define SPU_COMMON_EXTVOLL 1024

#define SPU_COMMON_EXTVOLR 2048

#define SPU_COMMON_MVOLL 1

#define SPU_COMMON_MVOLMODEL 4

#define SPU_COMMON_MVOLMODER 8

#define SPU_COMMON_MVOLR 2

#define SPU_COMMON_RVOLL 16

#define SPU_COMMON_RVOLR 32

#define SPU_CONT 7

#define SPU_DECODE_FIRSTHALF 0

#define SPU_DECODE_SECONDHALF 1

#define SPU_DECODED_FIRSTHALF 0

#define SPU_DECODED_SECONDHALF 1

#define SPU_DECODEDATA_SIZE 512

#define SPU_DECODEDDATA_SIZE 512

#define SPU_DIAG -2

#define SPU_DONT_CARE 4

#define SPU_ENV_EVENT_QUEUEING 1

#define SPU_ERROR -1

#define SPU_EVENT_ALL 0

#define SPU_EVENT_KEY 1

#define SPU_EVENT_NOISE 4

#define SPU_EVENT_PITCHLFO 2

#define SPU_EVENT_REVERB 8

#define SPU_INVALID_ARGS -3

#define SPU_MALLOC_RECSIZ 8

#define SPU_NULL 0

#define SPU_OFF 0

#define SPU_OFF_ENV_ON 2

#define SPU_ON 1

#define SPU_ON_ENV_OFF 3

#define SPU_RESET 3

#define SPU_REV_DELAYTIME 8

#define SPU_REV_DEPTHL 2

#define SPU_REV_DEPTHR 4

#define SPU_REV_FEEDBACK 16

#define SPU_REV_MODE 1

#define SPU_REV_MODE_CHECK -1

#define SPU_REV_MODE_CLEAR_WA 256

#define SPU_REV_MODE_DELAY 8

#define SPU_REV_MODE_ECHO 7

#define SPU_REV_MODE_HALL 5

#define SPU_REV_MODE_MAX 10

#define SPU_REV_MODE_OFF 0

#define SPU_REV_MODE_PIPE 9

#define SPU_REV_MODE_ROOM 1

#define SPU_REV_MODE_SPACE 6

#define SPU_REV_MODE_STUDIO_A 2

#define SPU_REV_MODE_STUDIO_B 3

#define SPU_REV_MODE_STUDIO_C 4

#define SPU_ST_ACCEPT 1

#define SPU_ST_ERROR -1

#define SPU_ST_FINAL 8

#define SPU_ST_IDLE 3

#define SPU_ST_INVALID_ARGUMENT -2

#define SPU_ST_NOT_AVAILABLE 0

#define SPU_ST_PLAY 6

#define SPU_ST_PREPARE 4

#define SPU_ST_START 5

#define SPU_ST_STOP 2

#define SPU_ST_TRANSFER 7

#define SPU_ST_VAG_HEADER_SIZE 48

#define SPU_ST_WRONG_STATUS -3

#define SPU_SUCCESS 0

#define SPU_TRANSFER_BY_DMA 0

#define SPU_TRANSFER_BY_IO 1

#define SPU_TRANSFER_GLANCE 0

#define SPU_TRANSFER_PEEK 0

#define SPU_TRANSFER_WAIT 1

#define SPU_VOICE_ADSR_ADSR1 131072

#define SPU_VOICE_ADSR_ADSR2 262144

#define SPU_VOICE_ADSR_AMODE 256

#define SPU_VOICE_ADSR_AR 2048

#define SPU_VOICE_ADSR_DR 4096

#define SPU_VOICE_ADSR_RMODE 1024

#define SPU_VOICE_ADSR_RR 16384

#define SPU_VOICE_ADSR_SL 32768

#define SPU_VOICE_ADSR_SMODE 512

#define SPU_VOICE_ADSR_SR 8192

#define SPU_VOICE_DIRECT 0

#define SPU_VOICE_EXPDec 7

#define SPU_VOICE_EXPDecN 7

#define SPU_VOICE_EXPDecR 7

#define SPU_VOICE_EXPIncN 5

#define SPU_VOICE_EXPIncR 6

#define SPU_VOICE_LINEARDecN 3

#define SPU_VOICE_LINEARDecR 4

#define SPU_VOICE_LINEARIncN 1

#define SPU_VOICE_LINEARIncR 2

#define SPU_VOICE_LSAX 65536

#define SPU_VOICE_NOTE 32

#define SPU_VOICE_PITCH 16

#define SPU_VOICE_SAMPLE_NOTE 64

#define SPU_VOICE_VOLL 1

#define SPU_VOICE_VOLMODEL 4

#define SPU_VOICE_VOLMODER 8

#define SPU_VOICE_VOLR 2

#define SPU_VOICE_WDSA 128

#define SPU_VOICEONLY 6

#define SpuALL 0

#define SpuCDOnly 5

#define SpuCheck -1

#define SpuClear 2

#define SpuCont 7

#define SpuDiag -2

#define SpuDontCare 4

#define SpuError -1

#define SpuNull 0

#define SpuOff 0

#define SpuOffEnvOn 2

#define SpuOn 1

#define SpuOnEnvOff 3

#define SpuReset 3

#define SpuTransByDMA 0

#define SpuTransByIO 1

#define SpuTransferByDMA 0

#define SpuTransferByIO 1

#define SpuVoiceOnly 6

typedef struct SpuCommonAttr SpuCommonAttr, *PSpuCommonAttr;

typedef struct SpuVolume SpuVolume, *PSpuVolume;

typedef struct SpuExtAttr SpuExtAttr, *PSpuExtAttr;

struct SpuVolume {
    short left;
    short right;
};

struct SpuExtAttr {
    struct SpuVolume volume;
    long reverb;
    long mix;
};

struct SpuCommonAttr {
    ulong mask;
    struct SpuVolume mvol;
    struct SpuVolume mvolmode;
    struct SpuVolume mvolx;
    struct SpuExtAttr cd;
    struct SpuExtAttr ext;
};

typedef struct SpuDecodedData SpuDecodedData, *PSpuDecodedData;

typedef struct SpuDecodedData SpuDecodeData;

struct SpuDecodedData {
    short cd_left[512];
    short cd_right[512];
    short voice1[512];
    short voice3[512];
};

typedef struct SpuEnv SpuEnv, *PSpuEnv;

struct SpuEnv {
    ulong mask;
    ulong queueing;
};

typedef void (* SpuIRQCallbackProc)(void);

typedef struct SpuLVoiceAttr SpuLVoiceAttr, *PSpuLVoiceAttr;

typedef struct SpuVoiceAttr SpuVoiceAttr, *PSpuVoiceAttr;

struct SpuVoiceAttr {
    ulong voice;
    ulong mask;
    struct SpuVolume volume;
    struct SpuVolume volmode;
    struct SpuVolume volumex;
    ushort pitch;
    ushort note;
    ushort sample_note;
    short envx;
    ulong addr;
    ulong loop_addr;
    long a_mode;
    long s_mode;
    long r_mode;
    ushort ar;
    ushort dr;
    ushort sr;
    ushort rr;
    ushort sl;
    ushort adsr1;
    ushort adsr2;
};

struct SpuLVoiceAttr {
    short voiceNum;
    short pad;
    struct SpuVoiceAttr attr;
};

typedef struct SpuReverbAttr SpuReverbAttr, *PSpuReverbAttr;

struct SpuReverbAttr {
    ulong mask;
    long mode;
    struct SpuVolume depth;
    long delay;
    long feedback;
};

typedef void (* SpuStCallbackProc)(ulong, long);

typedef struct SpuStEnv SpuStEnv, *PSpuStEnv;

typedef struct SpuStVoiceAttr SpuStVoiceAttr, *PSpuStVoiceAttr;

struct SpuStVoiceAttr {
    char status;
    char pad1;
    char pad2;
    char pad3;
    long last_size;
    ulong buf_addr;
    ulong data_addr;
};

struct SpuStEnv {
    long size;
    long low_priority;
    struct SpuStVoiceAttr voice[24];
};

typedef void (* SpuTransferCallbackProc)(void);

#define CHAR_BIT 8

#define CHAR_MAX 127

#define CHAR_MIN -128

#define INT_MAX 2147483647

#define INT_MIN -2147483648

#define LONG_MAX 2147483647

#define LONG_MIN -2147483648

#define MB_LEN_MAX 4

#define SCHAR_MAX 127

#define SCHAR_MIN -128

#define SHRT_MAX 32767

#define SHRT_MIN -32768

#define UCHAR_MAX 255

#define UINT_MAX 4294967295

#define ULONG_MAX 4294967295

#define USHRT_MAX 65535

#define USI_MAX 4294967295

#define WORD_BIT 32

#define MCGUI_EXTERNAL_FONT 1

#define MCGUI_INTERNAL_FONT 0

#define MOUSE_LBUTTON 8

#define MOUSE_RBUTTON 4

#define NEGICON_A 32

#define NEGICON_B 16

typedef struct _struct_188 _struct_188, *P_struct_188;

struct _struct_188 {
    int isbgm;
    ulong * seq;
    ulong * vh;
    ulong * vb;
    int SVOL;
    int isReverb;
    int reverbType;
    int reverbDepth;
};

typedef struct _struct_189 _struct_189, *P_struct_189;

struct _struct_189 {
    int isse;
    ulong * vh;
    ulong * vb;
    int vol;
    int prog;
    int TONE_OK;
    int TONE_CANCEL;
    int TONE_CURSOR;
    int TONE_ERROR;
};

typedef struct _struct_191 _struct_191, *P_struct_191;

struct _struct_191 {
    int flag;
    ulong BUTTON_OK;
    ulong BUTTON_CANCEL;
};

typedef struct _struct_192 _struct_192, *P_struct_192;

struct _struct_192 {
    int flag;
    ulong BUTTON_OK;
    ulong BUTTON_CANCEL;
};

typedef struct _struct_193 _struct_193, *P_struct_193;

struct _struct_193 {
    int flag;
    ulong BUTTON_OK;
    ulong BUTTON_CANCEL;
};

typedef struct _struct_194 _struct_194, *P_struct_194;

struct _struct_194 {
    int flag;
    ulong BUTTON_OK;
    ulong BUTTON_CANCEL;
};

typedef struct McGuiEnv McGuiEnv, *PMcGuiEnv;

typedef struct sMcGuiCards sMcGuiCards, *PsMcGuiCards;

typedef struct sMcGuiBg sMcGuiBg, *PsMcGuiBg;

typedef struct sMcGuiController sMcGuiController, *PsMcGuiController;

typedef struct sMcGuiSnd sMcGuiSnd, *PsMcGuiSnd;

typedef struct sMcGuiTexture sMcGuiTexture, *PsMcGuiTexture;

typedef struct sMcGuiCursor sMcGuiCursor, *PsMcGuiCursor;

struct sMcGuiCards {
    char file[21];
    char title[65];
    char frame;
    char block;
    long dataBytes;
    ulong * iconAddr;
    ulong * dataAddr;
};

struct sMcGuiBg {
    short mode;
    char scrollDirect;
    char scrollSpeed;
    ulong * timadr;
};

struct sMcGuiController {
    uchar * buf[2];
    struct _struct_191 type1;
    struct _struct_192 type2;
    struct _struct_193 type3;
    struct _struct_194 type4;
};

struct sMcGuiCursor {
    char type;
    uchar r;
    uchar g;
    uchar b;
};

struct sMcGuiSnd {
    int MVOL;
    struct _struct_188 bgm;
    struct _struct_189 se;
};

struct sMcGuiTexture {
    ulong * addr;
};

struct McGuiEnv {
    struct sMcGuiCards cards;
    struct sMcGuiBg bg;
    struct sMcGuiController controller;
    struct sMcGuiSnd sound;
    struct sMcGuiTexture texture;
    struct sMcGuiCursor cursor;
};

#define Pad1crc 32

#define Pad1Down 16384

#define Pad1L1 4

#define Pad1L2 1

#define Pad1Left 32768

#define Pad1R1 8

#define Pad1R2 2

#define Pad1Right 8192

#define Pad1Select 256

#define Pad1sqr 128

#define Pad1Start 2048

#define Pad1tri 16

#define Pad1Up 4096

#define Pad1x 64

#define Pad2crc 2097152

#define Pad2Down 1073741824

#define Pad2L1 262144

#define Pad2L2 65536

#define Pad2Left 2147483648

#define Pad2R1 524288

#define Pad2R2 131072

#define Pad2Right 536870912

#define Pad2Select 16777216

#define Pad2sqr 8388608

#define Pad2Start 134217728

#define Pad2tri 1048576

#define Pad2Up 268435456

#define Pad2x 4194304

#define BRK_KERNEL 241

#define C0_PROBE 8

#define C0_READI 1

#define C0_RFE 16

#define C0_WRITEI 2

#define C0_WRITER 6

#define CAUSE_BD 2147483648

#define CAUSE_CEMASK 805306368

#define CAUSE_CESHIFT 28

#define CAUSE_EXCMASK 60

#define CAUSE_EXCSHIFT 2

#define CAUSE_IP3 1024

#define CAUSE_IP4 2048

#define CAUSE_IP5 4096

#define CAUSE_IP6 8192

#define CAUSE_IP7 16384

#define CAUSE_IP8 32768

#define CAUSE_IPMASK 65280

#define CAUSE_IPSHIFT 8

#define CAUSE_SW1 256

#define CAUSE_SW2 512

#define E_VEC 2147483776

#define EXC_BREAK 36

#define EXC_CPU 44

#define EXC_DBE 28

#define EXC_IBE 24

#define EXC_II 40

#define EXC_INT 0

#define EXC_MOD 4

#define EXC_OV 48

#define EXC_RADE 16

#define EXC_RMISS 8

#define EXC_SYSCALL 32

#define EXC_WADE 20

#define EXC_WMISS 12

#define EXCEPT_BRKPT 3

#define EXCEPT_DB 4

#define EXCEPT_ELSE 255

#define EXCEPT_GDB 4

#define EXCEPT_INT 9

#define EXCEPT_NORM 1

#define EXCEPT_UTLB 2

#define K0BASE 2147483648

#define K0SIZE 536870912

#define K1BASE 2684354560

#define K1SIZE 536870912

#define K2BASE 3221225472

#define K2SIZE 536870912

#define NC0VECS 8

#define NF_ADDUPC 3

#define NF_BADADDR 1

#define NF_COPYIO 2

#define NF_FSUMEM 4

#define NF_NENTRIES 8

#define NF_REVID 7

#define NF_SOFTFP 6

#define NF_USERACC 5

#define NRANDOMENTRIES 56

#define NTLBENTRIES 64

#define NWIREDENTRIES 8

#define R_VEC 3217031168

#define SEXC_CPU 76

#define SEXC_PAGEIN 72

#define SEXC_RESCHED 68

#define SEXC_SEGV 64

#define SR_BEV 4194304

#define SR_CM 524288

#define SR_CU0 268435456

#define SR_CU1 536870912

#define SR_CU2 1073741824

#define SR_CU3 2147483648

#define SR_CUMASK 4026531840

#define SR_IBIT1 256

#define SR_IBIT2 512

#define SR_IBIT3 1024

#define SR_IBIT4 2048

#define SR_IBIT5 4096

#define SR_IBIT6 8192

#define SR_IBIT7 16384

#define SR_IBIT8 32768

#define SR_IEC 1

#define SR_IEO 16

#define SR_IEP 4

#define SR_IMASK 65280

#define SR_IMASK0 65280

#define SR_IMASK1 65024

#define SR_IMASK2 64512

#define SR_IMASK3 63488

#define SR_IMASK4 61440

#define SR_IMASK5 57344

#define SR_IMASK6 49152

#define SR_IMASK7 32768

#define SR_IMASK8 0

#define SR_IMASKSHIFT 8

#define SR_ISC 65536

#define SR_KUC 2

#define SR_KUO 32

#define SR_KUP 8

#define SR_MM_MODE 65536

#define SR_PE 1048576

#define SR_PZ 262144

#define SR_SWC 131072

#define SR_TS 2097152

#define TLBRAND_RANDMASK 16128

#define TLBRAND_RANDSHIFT 8

#define TLBRANDOMBASE 8

#define TLBWIREDBASE 0

#define UT_VEC 2147483648

#define RAND_MAX 32767

#define JB_FP 2

#define JB_GP 11

#define JB_PC 0

#define JB_S0 3

#define JB_S1 4

#define JB_S2 5

#define JB_S3 6

#define JB_S4 7

#define JB_S5 8

#define JB_S6 9

#define JB_S7 10

#define JB_SIZE 12

#define JB_SP 1

typedef void * va_list;

#define WEOF 4294967295

#define BUFSIZ 1024

#define LMAX 256

#define NBBY 8

typedef struct _physadr _physadr, *P_physadr;

struct _physadr {
    int r[1];
};

typedef struct _quad _quad, *P_quad;

struct _quad {
    long val[2];
};

typedef char * caddr_t;

typedef long daddr_t;

typedef short dev_t;

typedef u_short gid_t;

typedef u_long ino_t;

typedef struct label_t label_t, *Plabel_t;

struct label_t {
    int val[12];
};

typedef long off_t;

typedef struct _physadr * physadr;

typedef long * qaddr_t;

typedef struct _quad quad;

typedef uint size_t;

typedef long swblk_t;

typedef long time_t;

typedef uint u_int;

typedef u_short uid_t;


/* WARNING! conflicting data type names: /TYPES.H/uint - /uint */


/* WARNING! conflicting data type names: /TYPES.H/ulong - /ulong */


/* WARNING! conflicting data type names: /TYPES.H/ushort - /ushort */

