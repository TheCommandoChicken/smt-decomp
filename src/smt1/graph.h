#include "sys/types.h"
#include "libgte.h"
#include "libgpu.h"
#include "libgs.h"
#include "object.h"

#define setRGB0FromLong(p, _color)   \
	(p)->r0 = ((_color) & 0xFF0000) >> 0x10,		\
	(p)->g0 = ((_color) & 0xFF00) >> 0x8,	\
	(p)->b0 = ((_color) & 0xFF)

#define setRGB1FromLong(p, _color)   \
	(p)->r1 = ((_color) & 0xFF0000) >> 0x10,		\
	(p)->g1 = ((_color) & 0xFF00) >> 0x8,	\
	(p)->b1 = ((_color) & 0xFF)

#define setRGB2FromLong(p, _color)   \
	(p)->r2 = ((_color) & 0xFF0000) >> 0x10,		\
	(p)->g2 = ((_color) & 0xFF00) >> 0x8,	\
	(p)->b2 = ((_color) & 0xFF)

#define setRGB3FromLong(p, _color)   \
	(p)->r3 = ((_color) & 0xFF0000) >> 0x10,		\
	(p)->g3 = ((_color) & 0xFF00) >> 0x8,	\
	(p)->b3 = ((_color) & 0xFF)

/*
	Struct storing data for an untextured flat shaded triangular polygon.
*/
struct poly_f3_data {
	POLY_F3 p[2];                                    		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2;                           // Vertex positions.
	short r, g, b;                                          // Color.
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned char unk3E;
	unsigned char unk3F;
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for an untextured flat shaded quadrilateral polygon.
*/
struct poly_f4_data {
	POLY_F4 p[2];                                    		// Polygon geometry structs.
	DR_MODE d[2];                                    		// Draw mode structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2, x3, y3;                   // Vertex positions.
	CVECTOR color;                                          // Color. May or may not be a CVECTOR.
	short unk5E;
	short tpage;                                            // Theoretically shouldn't be used?
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for a textured flat shaded triangular polygon.
*/
struct poly_ft3_data {
	POLY_FT3 p[2];                                   		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2;                           // Vertex positions.
	unsigned char u0, v0, u1, v1, u2, v2;                   // UV coordinates.
	short r, g, b;                                          // Color.
	unsigned short clut;                                    // Color lookup table index.
	unsigned short tpage;                                   // Texture page.
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for a textured flat shaded quadrilateral polygon.
	Has unique behavior compared to the other primitive types.
*/
struct poly_ft4_data {
	POLY_FT4 p0[2];                                  		// Polygon geometry structs.
	POLY_FT4 p1[2];                                  		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2, x3, y3;                   // Vertex positions.
	unsigned char u0, v0, u1, v1, u2, v2, u3, v3;           // UV coordinates.
	short r, g, b;                                          // Color.
	unsigned short unkC0;    
	unsigned short unkC2;                                 
	unsigned short clut;                                    // Texture page.
	unsigned short tpage;                                   // Color lookup table index.
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned short unkCA;
	unsigned int brighten_darken;                           // Controls the brightness of the polygon. 0 = normal, 1 = darken, 2 = brighten.
	short update_p1;                                        // P1 is updated when this value is greater than 0. Additionally is used as the brightness modifier.
	short unkD2;
	short x_offset, y_offset;                               // Vertex offsets for the second animation frame.
	short unkD8;                                            // Length of animation, decremented each frame.
	short frame;                                            // Which frame of animation to draw. Supports only 2 frames.
	unsigned int unkDC;
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for an untextured gouraud shaded triangular polygon.
*/
struct poly_g3_data {
	POLY_G3 p[2];                                    		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2;                           // Vertex positions.
	short r0, g0, b0, r1, g1, b1, r2, g2, b2;               // Vertex colors.
	short ot_index;                                         // Index into the ordering table at which this primitive should be placed.
	unsigned char unk5A;
	unsigned char unk5B;
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for an untextured gouraud shaded quadrilateral polygon.
*/
struct poly_g4_data {
	POLY_G4 p[2];                                    		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2, x3, y3;                   // Vertex positions.
	short r0, g0, b0, r1, g1, b1, r2, g2, b2, r3, b3, g3;   // Vertex colors.
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for a textured gouraud shaded triangular polygon.
*/
struct poly_gt3_data {
	POLY_GT3 p[2];                                   		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2;                           // Vertex positions.
	unsigned char u0, v0, u1, v1, u2, v2;                   // UV coordinates.
	short r0, g0, b0, r1, g1, b1, r2, g2, b2;               // Vertex colors.
	unsigned short clut;                                    // Color lookup table index.
	unsigned short tpage;                                   // Texture page.
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned int flags;                                     // Flags.
};


/*
	Struct storing data for a textured gouraud shaded quadrilateral polygon.
*/
struct poly_gt4_data {
	POLY_GT4 p[2];                                   		// Polygon geometry structs.
	short buffer;                                           // Which buffer to draw to. Is flipped each frame.
	short x0, y0, x1, y1, x2, y2, x3, y3;                   // Vertex positions.
	unsigned char u0, v0, u1, v1, u2, v2, u3, v3;           // UV coordinates.
	short r0, g0, b0, r1, g1, b1, r2, g2, b2, r3, g3, b3;   // Vertex colors.
	unsigned short clut;                                    // Color lookup table index.
	unsigned short tpage;                                   // Texture page.
	unsigned short ot_index;                                // Index into the ordering table at which this primitive should be placed.
	unsigned int flags;                                     // Flags.
};


struct line_f2_data {
	LINE_F2 l[2];
	short buffer;
	short x, y;
	short len;
	unsigned short ot_index;
	unsigned char unk2A;
	CVECTOR color;
	unsigned char unk2F;
	unsigned int flags;
};


struct sprite_data {
	SPRT s[2];
	DR_MODE d[2];
	short buffer;
	short t_page;
	unsigned short clut;
	short x, y;
	short w, h;
	char u, v;
	unsigned short ot_index;
	unsigned short unk52;
	unsigned long unk54;
	unsigned long unk58;
	short x_offset, y_offset;
	short unk60;
	short frame;
	unsigned long unk64;
	unsigned long unk68;
	unsigned long unk6C;
	unsigned long flags;
};

struct sprite_init_data {
	short x, y;
	short w, h;
	short tpage;
	unsigned short clut;
	short abe;
	short tge;
	unsigned char u, v;
	unsigned char r, g, b;
	unsigned char pad;
	unsigned short ot_index;
};

struct poly_init_data {
	short x0, y0, x1, y1, x2, y2, x3, y3;
	unsigned char u0, v0, u1, v1, u2, v2, u3, v3;
	unsigned char r0, g0, b0, r1, g1, b1, r2, g2, b2, r3, g3, b3;
	unsigned short tpage;
	unsigned short clut;
	unsigned short unk28;
	unsigned short unk2A;
	short abe;
	short tge;
	unsigned short unk30;
	unsigned short ot_index;
};

struct line_init_data {
	short x, y;
	unsigned short len;
	unsigned char r, g, b;
	unsigned char pad;
	unsigned short ot_index;
};

struct texture_data {
	short w, h;
	unsigned char u, v;
	short unk6;
	short unk8;
	short unkA;
};

struct box_data {
	LINE_F2 l0[2];
	LINE_F2 l1[2];
	LINE_F2 l2[2];
	LINE_F2 l3[2];
	short buffer;
    short x, y;
    short w, h;
    short ot_index;
    unsigned char unk8C;
    unsigned char r, g, b;
    short unk90;
    short unk92;
    short unk94;
    unsigned short unk96;
    unsigned long pad;
    unsigned long flags;
};

struct filled_box_data {
	struct box_data b;
	struct poly_f4_data p;
	unsigned long unk108;
    unsigned long unk10C;
    unsigned long unk110;
    unsigned long unk114;
    unsigned long unk118;
    short x;
    short y;
    short w;
    short h;
    short ot_index;
    short unk124;
    DR_MODE unk128[2];
    short buffer;
    short abr;
};

struct box_init_data {
    short x, y;
    short w, h;
    unsigned char r0, g0, b0;
    unsigned char pad;
    unsigned short ot_index;
};

extern MATRIX D_801112F8;
extern struct object_ptrs * FirstObjectPtrPtr;

extern void func_8001A778(char r, char g, char b);