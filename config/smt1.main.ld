SECTIONS
{
    __romPos = 0;
    _gp = 0x800B6C5C;
    header_ROM_START = __romPos;
    header_VRAM = ADDR(.header);
    .header : AT(header_ROM_START) SUBALIGN(4)
    {
        FILL(0x00000000);
        header_DATA_START = .;
        build/asm/smt1/main/header.o(.data);
        header_DATA_END = .;
        header_DATA_SIZE = ABSOLUTE(header_DATA_END - header_DATA_START);
    }
    __romPos += SIZEOF(.header);
    header_ROM_END = __romPos;
    header_VRAM_END = .;

    main_ROM_START = __romPos;
    main_VRAM = ADDR(.main);
    .main 0x80010000 : AT(main_ROM_START) SUBALIGN(4)
    {
        FILL(0x00000000);
        main_RODATA_START = .;
        build/src/smt1/main/main.o(.rodata);
        build/src/smt1/main/field.o(.rodata);
        build/src/smt1/main/object.o(.rodata);
        build/src/smt1/main/pad.o(.rodata);
        build/src/smt1/main/dat.o(.rodata);
        build/src/smt1/main/graph.o(.rodata);
        build/src/smt1/main/unk.o(.rodata);
        build/src/smt1/main/overlay.o(.rodata);
        build/src/smt1/main/dungeon.o(.rodata);
        build/src/smt1/main/dgraph.o(.rodata);
        build/src/smt1/main/dunk1.o(.rodata);
        build/src/smt1/main/dunk2.o(.rodata);
        build/src/smt1/main/sound.o(.rodata);
        build/asm/smt1/main/data/1788.rodata.o(.rodata);
        build/asm/smt1/main/data/19D4.rodata.o(.rodata);
        build/asm/smt1/main/data/1C68.rodata.o(.rodata);
        build/asm/smt1/main/data/1DF4.rodata.o(.rodata);
        build/asm/smt1/main/data/1E10.rodata.o(.rodata);
        build/asm/smt1/main/data/1E24.rodata.o(.rodata);
        build/asm/smt1/main/data/1EB8.rodata.o(.rodata);
        build/asm/smt1/main/data/2124.rodata.o(.rodata);
        build/asm/smt1/main/data/3448.rodata.o(.rodata);
        build/asm/smt1/main/data/34AC.rodata.o(.rodata);
        build/asm/smt1/main/data/lib.rodata.o(.rodata);
        build/src/smt1/main/unk3.o(.rodata);
        build/src/smt1/main/lib/libcd.o(.rodata);
        build/src/smt1/main/lib/libds.o(.rodata);
        build/src/smt1/main/lib/libspu.o(.rodata);
        build/src/smt1/main/lib/libsnd.o(.rodata);
        . = ALIGN(., 16);
        main_RODATA_END = .;
        main_RODATA_SIZE = ABSOLUTE(main_RODATA_END - main_RODATA_START);
        main_TEXT_START = .;
        build/src/smt1/main/main.o(.text);
        build/src/smt1/main/field.o(.text);
        build/src/smt1/main/object.o(.text);
        build/src/smt1/main/pad.o(.text);
        build/src/smt1/main/dat.o(.text);
        build/src/smt1/main/graph.o(.text);
        build/src/smt1/main/unk.o(.text);
        build/src/smt1/main/overlay.o(.text);
        build/src/smt1/main/dungeon.o(.text);
        build/src/smt1/main/dgraph.o(.text);
        build/src/smt1/main/dunk1.o(.text);
        build/src/smt1/main/dunk2.o(.text);
        build/src/smt1/main/sound.o(.text);
        build/src/smt1/main/unk3.o(.text);
        build/src/smt1/main/lib/libcd.o(.text);
        build/src/smt1/main/lib/libds.o(.text);
        build/src/smt1/main/lib/libspu.o(.text);
        build/src/smt1/main/lib/libsnd.o(.text);
        . = ALIGN(., 16);
        main_TEXT_END = .;
        main_TEXT_SIZE = ABSOLUTE(main_TEXT_END - main_TEXT_START);
        main_DATA_START = .;
        build/src/smt1/main/main.o(.data);
        build/src/smt1/main/field.o(.data);
        build/src/smt1/main/object.o(.data);
        build/src/smt1/main/pad.o(.data);
        build/src/smt1/main/dat.o(.data);
        build/src/smt1/main/graph.o(.data);
        build/src/smt1/main/unk.o(.data);
        build/src/smt1/main/overlay.o(.data);
        build/src/smt1/main/dungeon.o(.data);
        build/src/smt1/main/dgraph.o(.data);
        build/src/smt1/main/dunk1.o(.data);
        build/src/smt1/main/dunk2.o(.data);
        build/src/smt1/main/sound.o(.data);
        build/asm/smt1/main/data/1788.rodata.o(.data);
        build/asm/smt1/main/data/19D4.rodata.o(.data);
        build/asm/smt1/main/data/1C68.rodata.o(.data);
        build/asm/smt1/main/data/1DF4.rodata.o(.data);
        build/asm/smt1/main/data/1E10.rodata.o(.data);
        build/asm/smt1/main/data/1E24.rodata.o(.data);
        build/asm/smt1/main/data/1EB8.rodata.o(.data);
        build/asm/smt1/main/data/2124.rodata.o(.data);
        build/asm/smt1/main/data/3448.rodata.o(.data);
        build/asm/smt1/main/data/34AC.rodata.o(.data);
        build/asm/smt1/main/data/lib.rodata.o(.data);
        build/src/smt1/main/unk3.o(.data);
        build/src/smt1/main/lib/libcd.o(.data);
        build/src/smt1/main/lib/libds.o(.data);
        build/src/smt1/main/lib/libspu.o(.data);
        build/src/smt1/main/lib/libsnd.o(.data);
        build/asm/smt1/main/data/8F000.data.o(.data);
        . = ALIGN(., 16);
        main_DATA_END = .;
        main_DATA_SIZE = ABSOLUTE(main_DATA_END - main_DATA_START);
        main_BSS_START = .;
        build/src/smt1/main/main.o(.bss);
        build/src/smt1/main/field.o(.bss);
        build/src/smt1/main/object.o(.bss);
        build/src/smt1/main/pad.o(.bss);
        build/src/smt1/main/dat.o(.bss);
        build/src/smt1/main/graph.o(.bss);
        build/src/smt1/main/unk.o(.bss);
        build/src/smt1/main/overlay.o(.bss);
        build/src/smt1/main/dungeon.o(.bss);
        build/src/smt1/main/dgraph.o(.bss);
        build/src/smt1/main/dunk1.o(.bss);
        build/src/smt1/main/dunk2.o(.bss);
        build/src/smt1/main/sound.o(.bss);
        build/asm/smt1/main/data/1788.rodata.o(.bss);
        build/asm/smt1/main/data/19D4.rodata.o(.bss);
        build/asm/smt1/main/data/1C68.rodata.o(.bss);
        build/asm/smt1/main/data/1DF4.rodata.o(.bss);
        build/asm/smt1/main/data/1E10.rodata.o(.bss);
        build/asm/smt1/main/data/1E24.rodata.o(.bss);
        build/asm/smt1/main/data/1EB8.rodata.o(.bss);
        build/asm/smt1/main/data/2124.rodata.o(.bss);
        build/asm/smt1/main/data/3448.rodata.o(.bss);
        build/asm/smt1/main/data/34AC.rodata.o(.bss);
        build/asm/smt1/main/data/lib.rodata.o(.bss);
        build/src/smt1/main/unk3.o(.bss);
        build/src/smt1/main/lib/libcd.o(.bss);
        build/src/smt1/main/lib/libds.o(.bss);
        build/src/smt1/main/lib/libspu.o(.bss);
        build/src/smt1/main/lib/libsnd.o(.bss);
        . = ALIGN(., 16);
        main_BSS_END = .;
        main_BSS_SIZE = ABSOLUTE(main_BSS_END - main_BSS_START);
    }
    __romPos += SIZEOF(.main);
    __romPos = ALIGN(__romPos, 16);
    . = ALIGN(., 16);
    main_ROM_END = __romPos;
    main_VRAM_END = .;

    /DISCARD/ :
    {
        *(*);
    }
}
