#include "common.h"
#include "lib/libgpu.h"
#include "lib/libgte.h"
#include "ui.h"
#include "graph.h"
#include "object.h"

struct object * D_800B73F0;
s16 D_800B6D64[2] = {
    0, 5
};


struct object * func_8001F5EC(void) {
    struct screen_overlay * temp_v1;
    struct object * temp_v0 = func_800180DC(func_8001FA28, 0, FirstObjectPtrPtr->first, 0xE9000000, 0, sizeof(struct screen_overlay));

    D_800B73F0 = temp_v0;
    if (temp_v0 == NULL) return NULL;
    
    temp_v1 = temp_v0->data;
    temp_v1->buffer = 0;
    temp_v1->animating = 2;
    func_80018410(D_800B73F0, 0);
    return D_800B73F0;
}


void func_8001F668(void) {
    func_8001F984(0, 0, 0x140, 0xF0, -1, 0, 2, 0xC, 1);
}


void func_8001F6B8(void) {
    func_8001F984(0, 0, 0x140, 0xF0, 0, -1, 2, 0xC, 1);
}


void func_8001F708(u8 arg0) {
    func_8001F984(0, 0, 0x140, 0xF0, -1, 0, 1, arg0, 1);
}


void func_8001F754(u8 arg0) {
    func_8001F984(0, 0, 0x140, 0xF0, 0, -1, 1, arg0, 1);
}


void func_8001F7A0(s32 arg0, u8 arg1) {
    RECT sp28[2] = {
        {0, 0, 0x140, 0xF0},
        {16, 16, 0x120, 0x78}
    };
    RECT * temp_v0 = &sp28[arg0];
    func_8001F984(temp_v0->x, temp_v0->y, temp_v0->w, temp_v0->h, -1, 0, 2, arg1, 1);
}


void func_8001F860(s32 arg0, u8 arg1) {
    RECT sp28[2] = {
		{0, 0, 0x140, 0xF0},
		{16, 16, 0x120, 0x78}
    };
	RECT * temp_v0 = &sp28[arg0];
    func_8001F984(temp_v0->x, temp_v0->y, temp_v0->w, temp_v0->h, 0, -1, 2, arg1, 1);
}


u8 func_8001F920(void) {
    return ((struct screen_overlay *)D_800B73F0->data)->animating;
}


s32 func_8001F93C(void) {
    if (func_8001F920() == 2) {
        if (D_800B73F0->hide_func == (void *)1) { // what
            return 1;
        } else {
            return 2;
        }
    } else {
        return 0;
    }
}


void func_8001F984(s16 x, s16 y, s16 w, s16 h, u32 arg4, u32 arg5, s32 t_page, u8 arg7, s32 size) {
    u32 temp_v0;
    struct screen_overlay * temp_s0 = D_800B73F0->data;
    temp_s0->x = x;
    temp_s0->y = y;
    temp_s0->w = w;
    temp_s0->h = h;
    temp_v0 = func_8001FD3C(&temp_s0->color_anim, arg4, arg5, arg7, 1);
    temp_s0->size = size;
    temp_s0->t_page = t_page;
    temp_s0->animating = (arg5 >= arg4);
    memcpy(&temp_s0->color, &temp_v0, 4);
    func_80018448(D_800B73F0);
}


void func_8001FA28(struct object* self) {
    struct screen_overlay* temp_s0 = self->data;
    POLY_F4* temp_s1 = &temp_s0->p[temp_s0->buffer];
    DR_MODE* temp_s3 = &temp_s0->d[temp_s0->buffer];
    switch (temp_s0->animating) {
    case 0:
        if (func_8001FE90(&temp_s0->color, &temp_s0->color_anim) == 0) {
            temp_s0->animating = 2;
            func_80018410(self, 0);
        }
        break;
    case 1:
        if (func_8001FE90(&temp_s0->color, &temp_s0->color_anim) == 0) {
            temp_s0->animating = 2;
        }
    case 2:
        break;
    }
    AddPolyF4(temp_s0->x, temp_s0->y, temp_s0->w, temp_s0->h, temp_s0->color, temp_s0->size, temp_s1);
    temp_s1->code |= 2;
    func_8001D478(1, 1, GetTPage(0, temp_s0->t_page, 0, 0), 0, temp_s0->size, temp_s3);
    temp_s0->buffer ^= 1;
}


s32 func_8001FB64(s16 x, s16 y, struct struct_13* arg2) {
    DVECTOR sp[10] = {
        {7, -1},
        {-9, 2},
        {6, -1},
        {-5, -1},
        {3, 1},
        {-4, 1},
        {2, -1},
        {-2, -1},
        {1, 1},
        {-1, 1}
    };
    
    if (arg2->unk4 >= 0xA) {
        arg2->x = x;
        arg2->y = y;
        arg2->unk4 = -1;
        return 1;
    } else {
        arg2->x = x + sp[arg2->unk4].vx;
        arg2->y = y + sp[arg2->unk4].vy;
        arg2->unk4 += 1;
        return 0;
    }
}


s32 func_8001FC94(u16* arg0, u16* arg1, s16* arg2) {
    if (arg2[4] < arg2[5]) {
        arg2[4] += 1;
        return 0;
    } else {
        arg2[4] = 0;
        if (arg2[2] < arg2[3]) {
            arg0[0] += arg2[0];
            arg1[0] += arg2[1];
            arg2[2] += 1;
            return 0;
        } else {
            bzero(arg2, 0xC);
            return 1;
            
        }
    }
}


u32 func_8001FD3C(struct color_anim* arg0, u32 arg1, u32 arg2, u8 iter, u8 loop) {
    if (iter == 0) iter = 1;
    bzero(arg0, sizeof(struct color_anim));
    
    arg0->max_loops = loop;
    arg0->max_iterations = iter;
    
    memcpy(&arg0->forward_cvector, &arg1, 4);
    memcpy(&arg0->backward_cvector, &arg2, 4);
    
    arg0->r = ((s32)(((arg2 & 0xFF0000) >> 16) - ((arg1 & 0xFF0000) >> 16)) << 23) / iter;
    arg0->g = ((s32)(((arg2 & 0x00FF00) >>  8) - ((arg1 & 0x00FF00) >>  8)) << 23) / iter;
    arg0->b = ((s32)(((arg2 & 0x0000FF) >>  0) - ((arg1 & 0x0000FF) >>  0)) << 23) / iter;

    return arg1;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8001FE90);

void func_8001FF84(struct unk_struct* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    arg0->unk0 = arg1;
    arg0->unk1 = 0;
    arg0->unk2 = 0;
    arg0->unk5 = (arg2 - 1);
    arg0->unk6 = (arg3 - 1);
    arg0->unk3 = arg4;
    arg0->unk4 = arg5;
    arg0->unk8 = arg6;
    arg0->unkC = arg6;
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8001FFC0);

void func_80020104(struct unk_data_14 * arg0, s16 arg1, s16 arg2, s16 arg3, u8 arg4, s8 arg5) {
    RECT rect;
    u16 sp18;

    if (arg4 == 0) arg4 = 1;
    func_8001D45C(arg1, &rect);
    rect.w = 1;
    rect.h = 1;
    StoreImage2(&rect, &sp18);
    arg0->unk0 = 0;
    arg0->unk1 = arg5;
    arg0->unk2 = 0;
    arg0->unk3 = arg4;
    arg0->x = rect.x;
    arg0->y = rect.y;
    arg0->unk4 = sp18;
    arg0->unk6 = sp18;
    arg0->unkC = ((((sp18 & 0x1F) - (arg3 & 0x1F)) << 0x17) / arg4);
    arg0->unk10 = (((((sp18 & 0x3E0) >> 5) - ((arg3 & 0x3E0) >> 5)) << 0x17) / arg4);
    arg0->unk14 = (((((sp18 & 0x7C00) >> 0xA) - ((arg3 & 0x7C00) >> 0xA)) << 0x17) / arg4);
}

//INCLUDE_ASM("asm/smt1/main/nonmatchings/overlay", func_8002027C);

void func_80020398(s16 arg0, u16 arg1) {
    RECT sp10;
    u16 sp18[0x10];
    s32 i;

    func_8001D45C(arg0, &sp10);
    sp10.w = 0x10;
    sp10.h = 1;
    StoreImage2(&sp10, &sp18);
    for (i = 0; i < 0x10; i++) {
        if (sp18[i] & 0x7FFF) {
            sp18[i] = arg1;
        }
    }
    LoadImage2(&sp10, &sp18);
}

void func_80020428(struct unk_data_16* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, u8 arg5) {
    if (arg5 != 0) {
        arg0->unk0 = arg1;
        arg0->unk2 = arg2;
        arg0->unk4 = arg3;
        arg0->unk6 = arg4;
        arg0->unkC = arg5;
        arg0->unkD = 0;
        arg0->unk8 = ((arg3 - arg1) / arg5);
        arg0->unkA = ((arg4 - arg2) / arg5);
    }
}


s32 func_800204E4(struct unk_data_15 * arg0) {
    arg0->unk0 = (arg0->unk0 + arg0->unk8);
    arg0->unk2 = (arg0->unk2 + arg0->unkA);
    arg0->unkD += 1;
    if (arg0->unkD >= arg0->unkC) {
        arg0->unk0 = arg0->unk4;
        arg0->unk2 = arg0->unk6;
        return 0;
    }
    return 1;
}


void func_80020544(s16 arg0, s16 arg1, s16 arg2, s32 arg3, SPRT* arg4) {
    struct texture_data sp38 = GetTextureInitData(0x88);
    u16 temp_s0 = (((sp38.unk8 >> 4) + 0x1E0) << 6) | (sp38.unk8 & 0xF); // This should by all rights be getClut but it isn't.
    s32 temp_s6 = getTPage(0, sp38.unkA, 0x6F0, 0x100);
    func_8001D534(arg0, arg1, sp38.w, sp38.h, sp38.u, sp38.v, 0x80808080, temp_s0 & 0xFFCF, arg3, &arg4[0]);
    arg4[0].code |= 2;
    sp38.u += sp38.w + sp38.w;
    func_8001D534(((arg0 + arg2) - sp38.w), arg1, sp38.w, sp38.h, sp38.u, sp38.v, 0x80808080, temp_s0 & 0xFFCF, arg3, &arg4[1]);
    arg4[1].code |= 2;
    sp38.u -= sp38.w;
    func_8001D9C4((arg0 + sp38.w), arg1, (arg2 - (sp38.w + sp38.w)), sp38.h, sp38.u, sp38.v, sp38.w, sp38.h, 0x80808080, temp_s6, temp_s0, arg3, &arg4[2]);
    arg4[2].code |= 2;
}


void func_8002073C(s16 arg0, s16 arg1, u32 arg2, s16 arg3, s32 arg4, struct unk_data_11* arg5) {
    struct texture_data sp38;
    s16 sp48[2][5] = {
        {0x5B, 0, 0, 0, 0},
        {0x5C, 0, 0xF, 0, 0}
    };

    if (arg2 >= 0x80) {
        u32 temp_v1 = (D_800B6D64[0] << 0x10) | (D_800B6D64[0] << 8) | D_800B6D64[0];
        
        D_800B6D64[0] += D_800B6D64[1];
        if (D_800B6D64[0] < 1 || D_800B6D64[0] > 0x7F) {
            s32 thing = D_800B6D64[1];
            D_800B6D64[1] = -thing;
        }
        
        sp38 = GetTextureInitData(0x5F);
        {
            u16 temp = ((((sp38.unk8 >> 4) + 0x1E0) << 6) | (sp38.unk8 & 0xF));
            AddPolyFT4(
                arg0 + sp48[arg3][2], (arg1 + 2), sp38.w, sp38.h, 
                (sp38.u - 1), sp38.v, sp38.w, sp38.h, 
                temp_v1, 0x3B, temp, arg4, &arg5->p[0]
            );
            arg5->p[0].code |= 2;
            if (arg3 == 0) {
                FlipPolyFT4H(&arg5->p[0]);
            }
        }
    }
    sp38 = GetTextureInitData(sp48[arg3][0]);
    {
        u16 temp = ((((sp38.unk8 >> 4) + 0x1E0) << 6) | (sp38.unk8 & 0xF));
        s16 temp_a1 = arg0 + sp48[arg3][1];
        AddSprt(temp_a1, arg1, sp38.w, sp38.h, sp38.u, sp38.v, arg2, temp, arg4, &arg5->s[0]);
        func_8001D478(0, 1, 0x3B, 0, arg4, &arg5->d);
    }
}