#include "lib/sys/types.h"
#include "lib/libgte.h"
#include "lib/libgpu.h"
#include "lib/libgs.h"
#include "object.h"
#include "common.h"

#ifndef _GRAPH_H_
#define _GRAPH_H_

#define setRGB0FromU32(p, _color)            \
	(p)->r0 = ((_color) & 0xFF0000) >> 0x10, \
	(p)->g0 = ((_color) & 0xFF00) >> 0x8,    \
	(p)->b0 = ((_color) & 0xFF)

#define setRGB1FromU32(p, _color)            \
	(p)->r1 = ((_color) & 0xFF0000) >> 0x10, \
	(p)->g1 = ((_color) & 0xFF00) >> 0x8,    \
	(p)->b1 = ((_color) & 0xFF)

#define setRGB2FromU32(p, _color)            \
	(p)->r2 = ((_color) & 0xFF0000) >> 0x10, \
	(p)->g2 = ((_color) & 0xFF00) >> 0x8,    \
	(p)->b2 = ((_color) & 0xFF)

#define setRGB3FromU32(p, _color)            \
	(p)->r3 = ((_color) & 0xFF0000) >> 0x10, \
	(p)->g3 = ((_color) & 0xFF00) >> 0x8,    \
	(p)->b3 = ((_color) & 0xFF)

/*
	Struct storing data for an untextured flat shaded triangular polygon.
*/
struct poly_f3_data {
	/* Polygon geometry structs. */
	POLY_F3 p[2];
	/* Which buffer to draw to. Is flipped each frame */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2;
	/* Color. */
	s16 r, g, b;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	u8 unk3E;
	u8 unk3F;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for an untextured flat shaded quadrilateral polygon.
*/
struct poly_f4_data {
	/* Polygon geometry structs. */
	POLY_F4 p[2];
	/* Draw mode structs. */
	DR_MODE d[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2, x3, y3;
	/* Color. May or may not be a CVECTOR. */
	CVECTOR color;
	s16 unk5E;
	/* Theoretically shouldn't be used? */
	s16 tpage;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for a textured flat shaded triangular polygon.
*/
struct poly_ft3_data {
	/* Polygon geometry structs. */
	POLY_FT3 p[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2;
	/* UV coordinates. */
	u8 u0, v0, u1, v1, u2, v2;
	/* Color. */
	s16 r, g, b;
	/* Color lookup table index. */
	u16 clut;
	/* Texture page. */
	u16 tpage;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for a textured flat shaded quadrilateral polygon.
	Has unique behavior compared to the other primitive types.
*/
struct poly_ft4_data {
	/* Polygon geometry structs. */
	POLY_FT4 p0[2];
	/* Polygon geometry structs. */
	POLY_FT4 p1[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2, x3, y3;
	/* UV coordinates. */
	u8 u0, v0, u1, v1, u2, v2, u3, v3;
	/* Color. */
	s16 r, g, b;
	u16 unkC0;
	u16 unkC2;
	/* Color lookup table index. */
	u16 clut;
	/* Texture page. */
	u16 tpage;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	u16 unkCA;
	/* Controls the brightness of the polygon. 0 = normal, 1 = darken, 2 = brighten. */
	u32 brighten_darken;
	/* P1 is updated when this value is greater than 0. Additionally is used as the brightness modifier. */
	s16 update_p1;
	s16 unkD2;
	/* Vertex offsets for the second animation frame. */
	s16 x_offset, y_offset;
	/* Length of animation, decremented each frame. */
	s16 unkD8;
	/* Which frame of animation to draw. Supports only 2 frames. */
	s16 frame;
	u32 unkDC;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for an untextured gouraud shaded triangular polygon.
*/
struct poly_g3_data {
	/* Polygon geometry structs. */
	POLY_G3 p[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2;
	/* Vertex colors. */
	s16 r0, g0, b0, r1, g1, b1, r2, g2, b2;
	/* Index into the ordering table at which this primitive should be placed. */
	s16 ot_index;
	u8 unk5A;
	u8 unk5B;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for an untextured gouraud shaded quadrilateral polygon.
*/
struct poly_g4_data {
	/* Polygon geometry structs. */
	POLY_G4 p[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2, x3, y3;
	/* Vertex colors. */
	s16 r0, g0, b0, r1, g1, b1, r2, g2, b2, r3, b3, g3;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for a textured gouraud shaded triangular polygon.
*/
struct poly_gt3_data {
	/* Polygon geometry structs. */
	POLY_GT3 p[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2;
	/* UV coordinates. */
	u8 u0, v0, u1, v1, u2, v2;
	/* Vertex colors. */
	s16 r0, g0, b0, r1, g1, b1, r2, g2, b2;
	/* Color lookup table index. */
	u16 clut;
	/* Texture page. */
	u16 tpage;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	/* Flags. */
	u32 flags;
};

/*
	Struct storing data for a textured gouraud shaded quadrilateral polygon.
*/
struct poly_gt4_data {
	/* Polygon geometry structs. */
	POLY_GT4 p[2];
	/* Which buffer to draw to. Is flipped each frame. */
	s16 buffer;
	/* Vertex positions. */
	s16 x0, y0, x1, y1, x2, y2, x3, y3;
	/* UV coordinates. */
	u8 u0, v0, u1, v1, u2, v2, u3, v3;
	/* Vertex colors. */
	s16 r0, g0, b0, r1, g1, b1, r2, g2, b2, r3, g3, b3;
	/* Color lookup table index. */
	u16 clut;
	/* Texture page. */
	u16 tpage;
	/* Index into the ordering table at which this primitive should be placed. */
	u16 ot_index;
	/* Flags. */
	u32 flags;
};

struct line_f2_data {
	LINE_F2 l[2];
	s16 buffer;
	s16 x, y;
	s16 len;
	u16 ot_index;
	u8 unk2A;
	CVECTOR color;
	u8 unk2F;
	u32 flags;
};

struct sprite_data {
	SPRT s[2];
	DR_MODE d[2];
	s16 buffer;
	s16 t_page;
	u16 clut;
	s16 x, y;
	s16 w, h;
	s8 u, v;
	u16 ot_index;
	u16 unk52;
	u32 unk54;
	u32 unk58;
	s16 x_offset, y_offset;
	s16 unk60;
	s16 frame;
	u32 unk64;
	u32 unk68;
	u32 unk6C;
	u32 flags;
	u32 pad;
};

struct sprite_init_data {
	s16 x, y;
	s16 w, h;
	s16 tpage;
	u16 clut;
	s16 abe;
	s16 tge;
	u8 u, v;
	u8 r, g, b;
	u8 pad;
	u16 ot_index;
};

struct poly_init_data {
	s16 x0, y0, x1, y1, x2, y2, x3, y3;
	u8 u0, v0, u1, v1, u2, v2, u3, v3;
	u8 r0, g0, b0, r1, g1, b1, r2, g2, b2, r3, g3, b3;
	u16 tpage;
	u16 clut;
	u16 unk28;
	u16 unk2A;
	s16 abe;
	s16 tge;
	u16 unk30;
	u16 ot_index;
};

struct line_init_data {
	s16 x, y;
	u16 len;
	u8 r, g, b;
	u8 pad;
	u16 ot_index;
};

struct texture_data {
	s16 w, h;
	u8 u, v;
	s16 unk6;
	s16 unk8;
	s16 unkA;
};

/*
	Struct storing data for a set of 4 flat colored lines which form a rectangle.
*/
struct box_data {
	LINE_F2 l0[2];
	LINE_F2 l1[2];
	LINE_F2 l2[2];
	LINE_F2 l3[2];
	s16 buffer;
	s16 x, y;
	s16 w, h;
	s16 ot_index;
	u8 unk8C;
	u8 r, g, b;
	s16 unk90;
	s16 unk92;
	s16 unk94;
	u16 unk96;
	u32 pad;
	u32 flags;
};

/*
	Struct storing data for a box with an outline and a background.
*/
struct filled_box_data {
	struct box_data b;
	union poly_4_data
	{
		struct poly_f4_data f;
		struct poly_g4_data g;
	} p;
	u32 unk108;
	u32 unk10C;
	u32 unk110;
	u32 unk114;
	u32 unk118;
	s16 x;
	s16 y;
	s16 w;
	s16 h;
	s16 ot_index;
	s16 unk124;
	DR_MODE unk128[2];
	s16 buffer;
	s16 abr;
};

struct box_init_data {
	s16 x, y;
	s16 w, h;
	u8 r0, g0, b0;
	u8 pad;
	u16 ot_index;
};

extern MATRIX D_801112F8;
extern struct object_ptrs * FirstObjectPtrPtr;


extern void func_8001A778(s8 r, s8 g, s8 b);
extern struct object * func_800180DC(void (*)(struct object *), void (*)(struct object *), struct object *, s32, s32, size_t);

#endif