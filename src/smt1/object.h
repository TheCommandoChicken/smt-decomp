#ifndef _OBJECT_H_
#define _OBJECT_H_
#define NO_OBJ (struct object *)-1

/* 
	Very common struct which is used as a container for data relating to most game elements,
	including UI, dungeon and field layouts, and more.                                       
*/
struct object {
	void (* proc_func)(struct object *);                      // Pointer to function which is run every frame.
	void (* kill_func)(struct object *);                      // Pointer to function to run when removing the object.
	void (* hide_func)(struct object *);                      // Pointer to function which is run when object is hidden.
	void * origin;                                           // Pointer used for various purposes.
	struct object * prev;                                    // Pointer to the previous object in the object table.
	struct object * next;                                    // Pointer to the next object in the object table.
	unsigned int priority; 
	unsigned int unk1C;                                     
	unsigned int hidden;                                    // 0 = Hidden, 1 = Visible.
	unsigned int unk24;
	unsigned int active;                                    // 2 = Removed.
	short unk2C;                                            // Unknown, set to 0 when removing object.
	short unk2E;                                            // Unknown, checked before removing object.
	char unk30, unk31, unk32, unk33;
	void * data;                                             // Pointer to the data struct associated with this object.
	unsigned int type;                                      // Indicates which type of common object this is.
	short initialized;                                      // Set after the object is initialized.
	char unk3E, unk3F;                                      // Padding
};

struct object_ptrs {
    struct object * first;
    struct object * last;
};

struct unk_data_12 {
	int unk0[4][2];
	int unk20;
	int unk24;
	int unk2C;
};

struct unk_data_14 {
	unsigned int unk0;
	unsigned int unk4;
	void (* unk8)(struct object *);
};

struct unk_data_13 {
	struct unk_data_14 unk0[4];
	int unk30;
	int unk34;
	int unk3C;
};

void func_80018BD0(struct object * arg0);
void func_80018808(void);
void func_80018954(void);
void func_80018AD0(void);
void func_80018BD8(struct object* arg0);

extern struct object * func_800193C0(int);

extern long D_800B6C5C;

#endif