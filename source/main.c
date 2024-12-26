// Almost everything is in here for right now.

#include "main.h"

int main()
{
	void initialize();
	void gameLoop();
}


void initialize() {

}


void gameLoop() 
{
	do 
	{
		handleInput();
	} while (true);
}


smt_alignment smt_changeAlignment(int character, int amount)
{
    bool alignment_locked = smt_getFlag(ALIGNMENT_LOCKED);

    if (!alignment_locked) 
    {
        uint new_alignment = characters[character].alignment + amount;

        if (new_alignment < 0) 
        {
            new_alignment = 0;
        }
        else if (new_alignment > 0xffff) 
        {
            new_alignment = 0xffff;
        }
        characters[character].alignment = (uint16)new_alignment;
    }

    return smt_getAlignment(character);
}


smt_alignment smt_getAlignment(int character) 
{
    uint8 alignment = characters[character].alignment >> 8;

    smt_alignment return_value = LAW;

    if ((0x6f < alignment) && (return_value = NEUTRAL, 0x8f < alignment))
    {
        return_value = CHAOS;
    }

    return return_value;
}


uint16 smt_changeHP(int character, int16 amount)
{
    uint16 new_hp;

    new_hp = characters[character].hp + amount;

    if (new_hp < 0) 
    {
        new_hp = 0;
    }
    else if ((character < 0x10) && (new_hp > 999)) 
    {
        new_hp = 999;
    }

    characters[character].hp = new_hp;

    return characters[character].hp;
}

void InitializeGraphics(void)

{
    RECT clear_rect;

    /* Set display mask to 0 */
    SetDispMask(0);
    /* Initialize drawing engine */
    ResetGraph(0);
    /* Set video mode to NTSC */
    SetVideoMode(0);
    /* Initialize the graphics system */
    GsInitGraph(320, 240, 4, 1, 0);
    /* Set up display buffer */
    GsDefDispBuff(0, 0, 0, 240);
    /* Initalize 3D graphics system */
    GsInit3D();
    clear_rect.w = 1024;
    clear_rect.x = 0;
    clear_rect.y = 0;
    clear_rect.h = 512;
    SetBackgroundColor(0, 0, 0);
    ClearImage(&clear_rect, 0x0, 0x0, 0x0);
    GsSetOrign(160, 70);
    OTData[0][0] = 0xc;
    OTData[1][0] = 0xc;
    OTData[1][1] = 0x800be108;
    OTData[0][1] = MainOrderingTable;
    OTData[0][4] = 0x800be104;
    OTData[1][4] = 0x800c2104;
    OTData[1][3] = 0;
    OTData[0][3] = 0;
    OTData[1][2] = 0;
    OTData[0][2] = 0;
    DAT_800b73e4 = 0x640;
    return;
}
