#include "lib/asm.h"

#ifndef _S32_
#define _S32_
typedef signed long s32;
#endif

#ifndef _U32_
#define _U32_
typedef unsigned long u32;
#endif

#ifndef _S16_
#define _S16_
typedef signed short s16;
#endif

#ifndef _U16_
#define _U16_
typedef unsigned short u16;
#endif

#ifndef _S8_
#define _S8_
typedef signed char s8;
#endif

#ifndef _U8_
#define _U8_
typedef unsigned char u8;
#endif

#define sqr(_x) ((_x) * (_x))

#ifndef _SPAD_STACK_
#define _SPAD_STACK_
// These macros are copied almost verbatim from a conference presentation.
#define SetSpadStack(addr) {\
    __asm__ volatile ("move $8,%0"::"r"(addr):"$8","memory"); \
    __asm__ volatile ("sw $29,0($8)" :: :"$8","memory"); \
    __asm__ volatile ("addiu $8,$8,-0x18" :: :"$8","memory"); \
    __asm__ volatile ("move $29,$8" :: :"$8","memory"); \
}
#define ResetSpadStack() {\
    __asm__ volatile ("addiu $29,$29,0x18":::"$29","memory"); \
    __asm__ volatile ("lw $29,0($29)" :::"$29","memory"); \
}
#endif