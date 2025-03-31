#include "common.h"

INCLUDE_ASM("asm/smt1/main/nonmatchings/object", func_80017FF0);

void func_800180D4(void) {
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/object", func_800180DC);

void func_8001830C(object* arg0) {
    void (*temp_v0)(void*);
    s32 temp_v1;
    u16 var_v0;
    object* var_a0;

    if ((arg0 != 0) && (arg0->field12_0x2e == 0)) {
        var_a0 = *FirstObjectPtrPtr;
        while (var_a0->next != -1) {
            if (var_a0 != arg0) {
                var_a0 = var_a0->next;
            } else {
                break;
            }
        }
        if (var_a0 == arg0) {
            var_v0 = 1;
            if (arg0->field11_0x2c != 0) {
                temp_v1 = arg0->active;
                if (temp_v1 != 1) {
                    if (temp_v1 == 0) {
                        arg0->field12_0x2e = var_v0;
                    } else if (temp_v1 == 2) {
                        return;
                    }
                } else {
                    var_v0 = 2;
                    arg0->field12_0x2e = var_v0;
                }
                temp_v0 = arg0->kill_func;
                if (temp_v0 != 0) {
                    temp_v0(arg0);
                }
                arg0->active = 2;
                arg0->field11_0x2c = 0;
                arg0->next->prev = arg0->prev;
                arg0->prev->next = arg0->next;
            }
        }
    }
}

s32 func_80018410(object* arg0, s32 arg1) {
    s32 temp_v1;

    if (arg0 == 0) {
        return -1;
    }
    temp_v1 = arg0->hidden;
    if (temp_v1 == 1) {
        return -2;
    } else {
        arg0->field9_0x24 = temp_v1;
        arg0->hidden = 1;
        arg0->hidden_behavior = arg1;
        return 0;
    }
}

s32 func_80018448(object* arg0) {
    s32 temp_v1;

    if (arg0 == 0) {
        return -1;
    }
    temp_v1 = arg0->field9_0x24;
    if (temp_v1 == 1) {
        return -2;
    } else {
        arg0->hidden = temp_v1;
        arg0->hidden_behavior = 0;
        return 0;
    }
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/object", func_8001847C);

void func_800186A0(void) {
    object* var_s1;
    object** temp_v0_2;
    s32 temp_v1;
    s32 var_s2;
    u16 temp_v0;
    u16 temp_v1_2;

    var_s1 = &Objects[0];
    var_s2 = 0;
    do {
        temp_v1 = var_s1->active;
        if (temp_v1 == 2) {
            temp_v0 = var_s1->field12_0x2e;
            if (temp_v0 != 1) {
                if (temp_v0 == temp_v1) {
                    var_s1->field12_0x2e = 1U;
                }
            } else {
                var_s1->active = 0;
                var_s1->field12_0x2e = 0U;
                func_80019478(var_s1->data);
                var_s1->data = 0;
                temp_v1_2 = D_800B73BE + 1;
                temp_v0_2 = &ObjectsList[D_800B73BE];
                D_800B73BE += 1;
                *temp_v0_2 = var_s1;
                D_800B73BE = temp_v1_2 & 0x7F;
            }
        }
        var_s1 += 1;
        var_s2 += 1;
    } while (var_s2 < 0x80);
}

s32 func_80018774(void) {
    object* var_a0;
    s32 var_a1;
    s32 var_v1;

    var_a1 = 0;
    var_a0 = &Objects[0];
    var_v1 = 0x7F;
    do {
        if (var_a0->field12_0x2e != 0) {
            var_a1 += 1;
        }
        var_v1 -= 1;
        var_a0 += 1;
    } while (var_v1 >= 0);
    return var_a1;
}

void func_800187AC(s32 arg0, s32 arg1) {
    D_800B9710[D_800B9710[4][0]][0] = arg0;
    D_800B9710[D_800B9710[4][0]][1] = arg1;
    D_800B9710[4][0] += 1;
    func_80018808();
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/object", func_80018808);

void func_800188CC(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a3;

    D_800B9740[D_800B9740[0x4][0]][0] = arg0;
    D_800B9740[D_800B9740[0x4][0]][1] = arg1;
    temp_a0 = D_800B9740[0x4][0];
    D_800B9740[D_800B9740[0x4][0]][2] = arg2;
    D_800B9740[0x4][0] += 1;
    func_80018954(temp_a0);
}

INCLUDE_ASM("asm/smt1/main/nonmatchings/object", func_80018954);

void func_80018A74(s32 arg0, s32 arg1) {
    (D_800B9780.unk0[D_800B9780.unk20])[0] = arg0;
    (D_800B9780.unk0[D_800B9780.unk20])[1] = arg1;
    D_800B9780.unk20 += 1;
    func_80018AD0();
}

/* 99.14% matching */
void func_80018AD0(void) {
    object* var_a0;
    u32 temp_a2;
    u32 temp_a3;
    s32* temp_v0_2;
    poly_ft4_object_data* temp_v1;
    sprite_object* temp_v1_2;

    while (D_800B9780.unk20 != 0) {
        D_800B9780.unk20 -= 1;
        var_a0 = &Objects[0];
        temp_v0_2 = &D_800B9780.unk0[D_800B9780.unk20][0];
        temp_a2 = temp_v0_2[1];
        temp_a3 = temp_v0_2[0];
        while (temp_a2 >= var_a0->order_priority) {
            if (var_a0 >= temp_a3) {
                if (var_a0->hidden == 1) {
                    var_a0->hidden_behavior = 0;
                    var_a0->hidden = var_a0->field9_0x24;
                    if (var_a0->type == 7) {
                        temp_v1 = var_a0->data;
                        temp_v1->flags &= ~0x20;
                    }
                    if (var_a0->type == 1) {
                        temp_v1_2 = var_a0->data;
                        temp_v1_2->flags &= ~0x20;
                    }
                }
            }
            var_a0 = var_a0->next;
            if (var_a0 == 0) {
                break;
            }
        }
    }
}

void func_80018BD0(void) {
}

void func_80018BD8(object* arg0) {
    arg0->proc_func = 0;
    arg0->kill_func = 0;
    arg0->hidden_behavior = 0;
    arg0->origin = 0;
    arg0->prev = 0;
    arg0->next = 0;
    arg0->order_priority = 0;
    arg0->field7_0x1c = 0;
    arg0->hidden = 0;
    arg0->field9_0x24 = 0;
    arg0->active = 0;
    arg0->field11_0x2c = 1;
    arg0->field12_0x2e = 0;
    arg0->data = 0;
    arg0->field13_0x30 = 0;
    bzero(&arg0->type, 8);
}
