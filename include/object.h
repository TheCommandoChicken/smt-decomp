#include "common.h"
#include "memory.h"

#ifndef _OBJECT_H_
#define _OBJECT_H_
#define NO_OBJ (struct object *)-1

#define OBJ_TYPE_DEFAULT 0
#define OBJ_TYPE_SPRITE 1
#define OBJ_TYPE_POLY_F3 2
#define OBJ_TYPE_POLY_FT3 3
#define OBJ_TYPE_POLY_G3 4
#define OBJ_TYPE_POLY_GT3 5
#define OBJ_TYPE_POLY_F4 6
#define OBJ_TYPE_POLY_FT4 7
#define OBJ_TYPE_POLY_G4 8
#define OBJ_TYPE_POLY_GT4 9
#define OBJ_TYPE_LINE_F2 10

/*
	Very common struct which is used as a container for data relating to most game elements,
	including UI, dungeon and field layouts, and more.
*/
struct object {
	void (*proc_func)(struct object *); /* Pointer to function which is run every frame. */
	void (*kill_func)(struct object *); /* Pointer to function to run when removing the object. */
	void (*hide_func)(struct object *); /* Pointer to function which is run when object is hidden. */
	void * origin;						/* Pointer used for various purposes. */
	struct object * prev;				/* Pointer to the previous object in the object table. */
	struct object * next;				/* Pointer to the next object in the object table. */
	u32 priority;
	u32 unk1C;
	u32 hidden;							/* 0 = Hidden, 1 = Visible. */
	u32 unk24;
	u32 active;							/* 2 = Removed. */
	s16 unk2C;							/* Unknown, set to 0 when removing object. */
	s16 unk2E;							/* Unknown, checked before removing object. */
	s8 unk30, unk31, unk32, unk33;
	void * data;						/* Pointer to the data struct associated with this object. */
	u32 type;							/* Indicates which type of common object this is. */
	s16 initialized;					/* Set after the object is initialized. */
	s8 unk3E, unk3F;					/* Padding */
};

struct object_ptrs {
	struct object * first;
	struct object * last;
};

struct unk_data_4 {
	s32 unk0[4][2];
	s32 unk20;
	s32 unk24;
	s32 unk2C;
};

struct unk_data_5 {
	u32 unk0;
	u32 unk4;
	void (*unk8)(struct object *);
};

struct unk_data_6 {
	struct unk_data_5 unk0[4];
	s32 unk30;
	s32 unk34;
	s32 unk3C;
};

void func_80017FF0(void (*)(struct object *), s32);
void func_800180D4(void);
struct object * CreateObject(void (*proc_func)(struct object *), 
	void (*kill_func)(struct object *), 
	void * origin, u32 priority, u32 type, size_t data_size);
void RemoveObject(struct object * obj);
void func_80018BD0(struct object * arg0);
void func_80018808(void);
void func_80018954(void);
void func_80018AD0(void);
void func_80018BD8(struct object * arg0);

extern struct object * func_800193C0(int);

extern s32 D_800B6C5C;

#endif
