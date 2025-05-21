#include "object.h"
#include "graph.h"
#include "memory.h"
#include "libapi.h"

/* .sdata */
struct object_ptrs ObjectPtrs = {NULL, NULL};  /* 0x800B73B4 */
s16 ObjectIndex = 0;						   /* 0x800B73BC */
s16 D_800B73BE = 0;							   /* 0x800B73BE */
struct object_ptrs * FirstObjectPtrPtr = NULL; /* 0x800B73C0 */

/* .bss */
struct object Objects[128];		  /* 0x800B7510 */
struct object * ObjectsList[128]; /* 0x800B9510 */
struct unk_data_4 D_800B9710;	  /* 0x800B9710 */
struct unk_data_6 D_800B9740;	  /* 0x800B9740 */
struct unk_data_4 D_800B9780;	  /* 0x800B9780 */


void func_80017FF0(void (*func)(struct object *), s32 arg1) {
	struct object * var_s0;
	struct object ** var_s1;
	s32 i;

	for (i = 0; i < 0x80; i++) {
		func_80018BD8(&Objects[i]);
		ObjectsList[i] = &Objects[i];
	}
	var_s0 = &Objects[0];
	var_s0->proc_func = func;
	var_s0->prev = 0;
	var_s0->next = var_s0 + 1;
	var_s0->priority = 0;
	var_s0->data = func_800193C0(arg1);
	var_s0++;
	var_s0->proc_func = func_80018BD0;
	var_s0->prev = &Objects[0];
	var_s0->next = NO_OBJ;
	var_s0->priority = -1;
	D_800B9710.unk20 = 0;
	ObjectIndex = 2;
	ObjectPtrs.first = &Objects[0];
	ObjectPtrs.last = var_s0;
	D_800B73BE = 0;
	FirstObjectPtrPtr = &ObjectPtrs;
}

void func_800180D4(void) {
}

/* Creates an object. */
struct object * CreateObject(void (*proc_func)(struct object *), void (*kill_func)(struct object *), void * origin, u32 priority, u32 type, s32 data_size) {
	void * var_s2;
	struct object * temp_v1;
	struct object * var_s0;
	struct object * var_s1;
	s32 temp;

	var_s1 = FirstObjectPtrPtr->first;
	var_s0 = 0;
	if (ObjectIndex != D_800B73BE) {
		if (data_size < 1) {
			var_s2 = 0;
		} else {
			var_s2 = func_800193C0(data_size);
			if (var_s2 == 0) return 0;
		}
		var_s0 = ObjectsList[ObjectIndex++];
		func_80018BD8(var_s0);
		var_s0->data = var_s2;
		var_s0->origin = origin;
		var_s0->proc_func = proc_func;
		var_s0->kill_func = kill_func;
		var_s0->priority = priority;
		var_s0->type = type;
		temp_v1 = var_s1->next;
		while (priority >= temp_v1->priority) {
			var_s1 = temp_v1;
			temp_v1 = var_s1->next;
		}
		var_s0->prev = var_s1;
		var_s0->next = var_s1->next;
		var_s1->next->prev = var_s0;
		var_s1->next = var_s0;
		switch (type) {
		case 1:
			func_8001A798(var_s0->data);
			break;
		case 2:
			func_8001C314(var_s0->data);
			break;
		case 3:
			func_8001C5FC(var_s0->data);
			break;
		case 4:
			func_8001C9A4(var_s0->data);
			break;
		case 5:
			func_8001CD54(var_s0->data);
			break;
		case 6:
			func_8001ABAC(var_s0->data);
			break;
		case 7:
			func_8001AF78(var_s0->data);
			break;
		case 8:
			func_8001B8EC(var_s0->data);
			break;
		case 9:
			func_8001BD58(var_s0->data);
			break;
		case 10:
			func_8001D204(var_s0->data);
			break;
		case 0:
			break;
		}
		var_s0->initialized = 1;
		ObjectIndex &= 0x7F;
	}
	return var_s0;
}


/* Removes the provided object from the object list. */
void RemoveObject(struct object * arg0) {
	void (*kill_func)(struct object *);
	struct object * var_a0;

	if ((arg0 != NULL) && (arg0->unk2E == 0)) {
		var_a0 = FirstObjectPtrPtr->first;
		while (var_a0->next != NO_OBJ) {
			if (var_a0 != arg0) {
				var_a0 = var_a0->next;
			} else {
				break;
			}
		}
		if (var_a0 == arg0) {
			if (arg0->unk2C != 0) {
				if (arg0->active != 1) {
					if (arg0->active == 0) {
						arg0->unk2E = 1;
					} else if (arg0->active == 2) {
						return;
					}
				} else {
					arg0->unk2E = 2;
				}
				kill_func = arg0->kill_func;
				if (kill_func != NULL) {
					kill_func(arg0);
				}
				arg0->active = 2;
				arg0->unk2C = 0;
				arg0->next->prev = arg0->prev;
				arg0->prev->next = arg0->next;
			}
		}
	}
}

s32 func_80018410(struct object * arg0, void (*arg1)(struct object *)) {
	s32 temp_v1;

	if (arg0 == NULL) {
		return -1;
	}
	temp_v1 = arg0->hidden;
	if (temp_v1 == 1) {
		return -2;
	} else {
		arg0->unk24 = temp_v1;
		arg0->hidden = 1;
		arg0->hide_func = arg1;
		return 0;
	}
}

s32 func_80018448(struct object * arg0) {
	s32 temp_v1;

	if (arg0 == 0) {
		return -1;
	}
	temp_v1 = arg0->unk24;
	if (temp_v1 == 1) {
		return -2;
	} else {
		arg0->hidden = temp_v1;
		arg0->hide_func = 0;
		return 0;
	}
}

void func_8001847C(void) {
	void (*var_v0)(struct object *);
	s32 i;
	u32 * var_a0;
	struct object * var_s0;
	struct object * var_s0_2;

	for (i = 0; i < 0x80; i++) {
		var_a0 = &Objects[i].active;
		if (*var_a0 != 2) {
			*var_a0 = 0;
		}
	}
	var_s0 = FirstObjectPtrPtr->first;
	while (var_s0->next != NO_OBJ) {
		if (var_s0->active != 2) {
			var_s0->active = 1;
			if (var_s0->hidden != 1) {
				var_v0 = var_s0->proc_func;
			} else {
				var_v0 = var_s0->hide_func;
			}
			if (var_v0 != NULL) {
				var_v0(var_s0);
			}
		}
		var_s0 = var_s0->next;
	}
	var_s0_2 = FirstObjectPtrPtr->first;
	while (var_s0_2->next != NO_OBJ) {
		if (var_s0_2->initialized > 0) {
			switch (var_s0_2->type) {
			case 1:
				func_8001A830(var_s0_2->data);
				break;
			case 2:
				func_8001C3A0(var_s0_2->data);
				break;
			case 3:
				func_8001C688(var_s0_2->data);
				break;
			case 4:
				func_8001CA30(var_s0_2->data);
				break;
			case 5:
				func_8001CDE0(var_s0_2->data);
				break;
			case 6:
				func_8001AC38(var_s0_2->data);
				break;
			case 7:
				func_8001B018(var_s0_2->data);
				break;
			case 8:
				func_8001B978(var_s0_2->data);
				break;
			case 9:
				func_8001BDE4(var_s0_2->data);
				break;
			case 10:
				func_8001D290(var_s0_2->data);
				break;
			case 0:
				break;
			}
		}
		var_s0_2 = var_s0_2->next;
	}
}

void func_800186A0(void) {
	struct object * var_s1;
	struct object ** temp_v0_2;
	s32 temp_v1;
	s32 var_s2;
	u16 temp_v0;
	u16 temp_v1_2;

	var_s1 = &Objects[0];
	var_s2 = 0;
	do {
		temp_v1 = var_s1->active;
		if (temp_v1 == 2) {
			temp_v0 = var_s1->unk2E;
			if (temp_v0 != 1) {
				if (temp_v0 == temp_v1) {
					var_s1->unk2E = 1U;
				}
			} else {
				var_s1->active = 0;
				var_s1->unk2E = 0U;
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
	struct object * var_a0;
	s32 var_a1;
	s32 var_v1;

	var_a1 = 0;
	var_a0 = &Objects[0];
	var_v1 = 0x7F;
	do {
		if (var_a0->unk2E != 0) {
			var_a1 += 1;
		}
		var_v1 -= 1;
		var_a0 += 1;
	} while (var_v1 >= 0);
	return var_a1;
}

void func_800187AC(s32 arg0, s32 arg1) {
	D_800B9710.unk0[D_800B9710.unk20][0] = arg0;
	D_800B9710.unk0[D_800B9710.unk20][1] = arg1;
	D_800B9710.unk20 += 1;
	func_80018808();
}

void func_80018808(void) {
	struct object * var_s0;
	s32 temp_v0;
	s32 temp_s1;
	s32 temp_s2;

	while (D_800B9710.unk20 != 0) {
		D_800B9710.unk20 -= 1;
		temp_s2 = D_800B9710.unk0[D_800B9710.unk20][0];
		temp_s1 = D_800B9710.unk0[D_800B9710.unk20][1];
		var_s0 = &Objects[0];
		while (var_s0->priority <= temp_s1) {
			if (temp_s2 <= (s32)var_s0) {
				RemoveObject(var_s0);
			}
			var_s0 = var_s0->next;
			if (var_s0 == 0) {
				break;
			}
		}
	}
}

void func_800188CC(s32 arg0, s32 arg1, void (*arg2)(struct object *)) {
	s32 temp_a0;
	s32 temp_a3;

	D_800B9740.unk0[D_800B9740.unk30].unk0 = arg0;
	D_800B9740.unk0[D_800B9740.unk30].unk4 = arg1;
	D_800B9740.unk0[D_800B9740.unk30].unk8 = arg2;
	D_800B9740.unk30 += 1;
	func_80018954();
}

void func_80018954(void) {
	struct object * var_a1;
	s32 temp_v1;
	s32 temp_v1_2;
	s32 var_v0;
	u32 temp_a0;
	u32 temp_a3;
	u32 temp_t1;
	s32 * temp_v0;
	struct poly_ft4_data * temp_v1_3;
	struct sprite_data * temp_v1_4;

	while (D_800B9740.unk30 != 0) {
		D_800B9740.unk30 -= 1;
		var_a1 = &Objects[0];
		temp_a3 = D_800B9740.unk0[D_800B9740.unk30].unk4;
		temp_t1 = D_800B9740.unk0[D_800B9740.unk30].unk0;
		while (temp_a3 >= var_a1->priority) {
			if ((var_a1->priority >= temp_t1) && (var_a1->hidden != 1)) {
				var_a1->hide_func = D_800B9740.unk0[D_800B9740.unk30].unk8;
				var_a1->unk24 = var_a1->hidden;
				var_a1->hidden = 1;
				if (var_a1->type == 7) {
					temp_v1_3 = var_a1->data;
					temp_v1_3->flags |= 0x20;
				}
				if (var_a1->type == 1) {
					temp_v1_4 = var_a1->data;
					temp_v1_4->flags |= 0x20;
				}
			}
			var_a1 = var_a1->next;
			if (var_a1 == 0) {
				break;
			}
		}
	}
}

void func_80018A74(s32 arg0, s32 arg1) {
	D_800B9780.unk0[D_800B9780.unk20][0] = arg0;
	D_800B9780.unk0[D_800B9780.unk20][1] = arg1;
	D_800B9780.unk20 += 1;
	func_80018AD0();
}

/* 99.14% matching */
void func_80018AD0(void) {
	struct object * var_a0;
	u32 temp_a2;
	u32 temp_a3;
	s32 * temp_v0_2;
	struct poly_ft4_data * temp_v1;
	struct sprite_data * temp_v1_2;

	while (D_800B9780.unk20 != 0) {
		D_800B9780.unk20 -= 1;
		var_a0 = &Objects[0];
		temp_v0_2 = &D_800B9780.unk0[D_800B9780.unk20][0];
		temp_a2 = temp_v0_2[1];
		temp_a3 = temp_v0_2[0];
		while (temp_a2 >= var_a0->priority) {
			if ((s32)var_a0 >= temp_a3) {
				if (var_a0->hidden == 1) {
					var_a0->hide_func = 0;
					var_a0->hidden = var_a0->unk24;
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

void func_80018BD0(struct object * arg0) {
	return;
}

void func_80018BD8(struct object * arg0) {
	arg0->proc_func = 0;
	arg0->kill_func = 0;
	arg0->hide_func = 0;
	arg0->origin = 0;
	arg0->prev = 0;
	arg0->next = 0;
	arg0->priority = 0;
	arg0->unk1C = 0;
	arg0->hidden = 0;
	arg0->unk24 = 0;
	arg0->active = 0;
	arg0->unk2C = 1;
	arg0->unk2E = 0;
	arg0->data = 0;
	arg0->unk30 = 0;
	bzero((u8 *)&arg0->type, 8);
}
