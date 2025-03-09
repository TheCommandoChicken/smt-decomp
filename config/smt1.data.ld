SECTIONS
{
    __romPos = 0;
    _gp = 0x800B6C5C;
    _0_ROM_START = __romPos;
    _0_VRAM = ADDR(._0);
    ._0 : AT(_0_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _0_DATA_START = .;
        build/assets/smt1/data/0.o(.data);
        _0_DATA_END = .;
        _0_DATA_SIZE = ABSOLUTE(_0_DATA_END - _0_DATA_START);
    }
    __romPos += SIZEOF(._0);
    _0_ROM_END = __romPos;
    _0_VRAM_END = .;

    E000_ROM_START = __romPos;
    E000_VRAM = ADDR(.E000);
    .E000 : AT(E000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E000_DATA_START = .;
        build/assets/smt1/data/E000.o(.data);
        E000_DATA_END = .;
        E000_DATA_SIZE = ABSOLUTE(E000_DATA_END - E000_DATA_START);
    }
    __romPos += SIZEOF(.E000);
    E000_ROM_END = __romPos;
    E000_VRAM_END = .;

    _18000_ROM_START = __romPos;
    _18000_VRAM = ADDR(._18000);
    ._18000 : AT(_18000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _18000_DATA_START = .;
        build/assets/smt1/data/18000.o(.data);
        _18000_DATA_END = .;
        _18000_DATA_SIZE = ABSOLUTE(_18000_DATA_END - _18000_DATA_START);
    }
    __romPos += SIZEOF(._18000);
    _18000_ROM_END = __romPos;
    _18000_VRAM_END = .;

    _20800_ROM_START = __romPos;
    _20800_VRAM = ADDR(._20800);
    ._20800 : AT(_20800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _20800_DATA_START = .;
        build/assets/smt1/data/20800.o(.data);
        _20800_DATA_END = .;
        _20800_DATA_SIZE = ABSOLUTE(_20800_DATA_END - _20800_DATA_START);
    }
    __romPos += SIZEOF(._20800);
    _20800_ROM_END = __romPos;
    _20800_VRAM_END = .;

    _22000_ROM_START = __romPos;
    _22000_VRAM = ADDR(._22000);
    ._22000 : AT(_22000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _22000_DATA_START = .;
        build/assets/smt1/data/22000.o(.data);
        _22000_DATA_END = .;
        _22000_DATA_SIZE = ABSOLUTE(_22000_DATA_END - _22000_DATA_START);
    }
    __romPos += SIZEOF(._22000);
    _22000_ROM_END = __romPos;
    _22000_VRAM_END = .;

    _2F800_ROM_START = __romPos;
    _2F800_VRAM = ADDR(._2F800);
    ._2F800 : AT(_2F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _2F800_DATA_START = .;
        build/assets/smt1/data/2F800.o(.data);
        _2F800_DATA_END = .;
        _2F800_DATA_SIZE = ABSOLUTE(_2F800_DATA_END - _2F800_DATA_START);
    }
    __romPos += SIZEOF(._2F800);
    _2F800_ROM_END = __romPos;
    _2F800_VRAM_END = .;

    _33800_ROM_START = __romPos;
    _33800_VRAM = ADDR(._33800);
    ._33800 : AT(_33800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _33800_DATA_START = .;
        build/assets/smt1/data/33800.o(.data);
        _33800_DATA_END = .;
        _33800_DATA_SIZE = ABSOLUTE(_33800_DATA_END - _33800_DATA_START);
    }
    __romPos += SIZEOF(._33800);
    _33800_ROM_END = __romPos;
    _33800_VRAM_END = .;

    intro_ROM_START = __romPos;
    intro_VRAM = ADDR(.intro);
    .intro 0x80180000 : AT(intro_ROM_START) SUBALIGN(4)
    {
        FILL(0x00000000);
        intro_TEXT_START = .;
        build/asm/smt1/data/366E0.o(.text);
        . = ALIGN(., 16);
        intro_TEXT_END = .;
        intro_TEXT_SIZE = ABSOLUTE(intro_TEXT_END - intro_TEXT_START);
        intro_DATA_START = .;
        build/asm/smt1/data/data/36000.data.o(.data);
        build/asm/smt1/data/366E0.o(.data);
        . = ALIGN(., 16);
        intro_DATA_END = .;
        intro_DATA_SIZE = ABSOLUTE(intro_DATA_END - intro_DATA_START);
        intro_RODATA_START = .;
        build/asm/smt1/data/366E0.o(.rodata);
        build/asm/smt1/data/data/3B2A0.rodata.o(.rodata);
        . += 0x3FC;
        . = ALIGN(., 16);
        intro_RODATA_END = .;
        intro_RODATA_SIZE = ABSOLUTE(intro_RODATA_END - intro_RODATA_START);
        intro_BSS_START = .;
        build/asm/smt1/data/366E0.o(.bss);
        . = ALIGN(., 16);
        intro_BSS_END = .;
        intro_BSS_SIZE = ABSOLUTE(intro_BSS_END - intro_BSS_START);
    }
    __romPos += SIZEOF(.intro);
    __romPos = ALIGN(__romPos, 16);
    . = ALIGN(., 16);
    intro_ROM_END = __romPos;
    intro_VRAM_END = .;

    tex_map_ROM_START = __romPos;
    tex_map_VRAM = ADDR(.tex_map);
    .tex_map : AT(tex_map_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_map_DATA_START = .;
        build/assets/smt1/data/tex/map.o(.data);
        tex_map_DATA_END = .;
        tex_map_DATA_SIZE = ABSOLUTE(tex_map_DATA_END - tex_map_DATA_START);
    }
    __romPos += SIZEOF(.tex_map);
    tex_map_ROM_END = __romPos;
    tex_map_VRAM_END = .;

    _3D000_ROM_START = __romPos;
    _3D000_VRAM = ADDR(._3D000);
    ._3D000 : AT(_3D000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _3D000_DATA_START = .;
        build/assets/smt1/data/3D000.o(.data);
        _3D000_DATA_END = .;
        _3D000_DATA_SIZE = ABSOLUTE(_3D000_DATA_END - _3D000_DATA_START);
    }
    __romPos += SIZEOF(._3D000);
    _3D000_ROM_END = __romPos;
    _3D000_VRAM_END = .;

    _43000_ROM_START = __romPos;
    _43000_VRAM = ADDR(._43000);
    ._43000 : AT(_43000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _43000_DATA_START = .;
        build/assets/smt1/data/43000.o(.data);
        _43000_DATA_END = .;
        _43000_DATA_SIZE = ABSOLUTE(_43000_DATA_END - _43000_DATA_START);
    }
    __romPos += SIZEOF(._43000);
    _43000_ROM_END = __romPos;
    _43000_VRAM_END = .;

    _58000_ROM_START = __romPos;
    _58000_VRAM = ADDR(._58000);
    ._58000 : AT(_58000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _58000_DATA_START = .;
        build/assets/smt1/data/58000.o(.data);
        _58000_DATA_END = .;
        _58000_DATA_SIZE = ABSOLUTE(_58000_DATA_END - _58000_DATA_START);
    }
    __romPos += SIZEOF(._58000);
    _58000_ROM_END = __romPos;
    _58000_VRAM_END = .;

    _5A000_ROM_START = __romPos;
    _5A000_VRAM = ADDR(._5A000);
    ._5A000 : AT(_5A000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5A000_DATA_START = .;
        build/assets/smt1/data/5A000.o(.data);
        _5A000_DATA_END = .;
        _5A000_DATA_SIZE = ABSOLUTE(_5A000_DATA_END - _5A000_DATA_START);
    }
    __romPos += SIZEOF(._5A000);
    _5A000_ROM_END = __romPos;
    _5A000_VRAM_END = .;

    _5E000_ROM_START = __romPos;
    _5E000_VRAM = ADDR(._5E000);
    ._5E000 : AT(_5E000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5E000_DATA_START = .;
        build/assets/smt1/data/5E000.o(.data);
        _5E000_DATA_END = .;
        _5E000_DATA_SIZE = ABSOLUTE(_5E000_DATA_END - _5E000_DATA_START);
    }
    __romPos += SIZEOF(._5E000);
    _5E000_ROM_END = __romPos;
    _5E000_VRAM_END = .;

    _5E800_ROM_START = __romPos;
    _5E800_VRAM = ADDR(._5E800);
    ._5E800 : AT(_5E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5E800_DATA_START = .;
        build/assets/smt1/data/5E800.o(.data);
        _5E800_DATA_END = .;
        _5E800_DATA_SIZE = ABSOLUTE(_5E800_DATA_END - _5E800_DATA_START);
    }
    __romPos += SIZEOF(._5E800);
    _5E800_ROM_END = __romPos;
    _5E800_VRAM_END = .;

    _63000_ROM_START = __romPos;
    _63000_VRAM = ADDR(._63000);
    ._63000 : AT(_63000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _63000_DATA_START = .;
        build/assets/smt1/data/63000.o(.data);
        _63000_DATA_END = .;
        _63000_DATA_SIZE = ABSOLUTE(_63000_DATA_END - _63000_DATA_START);
    }
    __romPos += SIZEOF(._63000);
    _63000_ROM_END = __romPos;
    _63000_VRAM_END = .;

    _67000_ROM_START = __romPos;
    _67000_VRAM = ADDR(._67000);
    ._67000 : AT(_67000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _67000_DATA_START = .;
        build/assets/smt1/data/67000.o(.data);
        _67000_DATA_END = .;
        _67000_DATA_SIZE = ABSOLUTE(_67000_DATA_END - _67000_DATA_START);
    }
    __romPos += SIZEOF(._67000);
    _67000_ROM_END = __romPos;
    _67000_VRAM_END = .;

    _68800_ROM_START = __romPos;
    _68800_VRAM = ADDR(._68800);
    ._68800 : AT(_68800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _68800_DATA_START = .;
        build/assets/smt1/data/68800.o(.data);
        _68800_DATA_END = .;
        _68800_DATA_SIZE = ABSOLUTE(_68800_DATA_END - _68800_DATA_START);
    }
    __romPos += SIZEOF(._68800);
    _68800_ROM_END = __romPos;
    _68800_VRAM_END = .;

    _6A000_ROM_START = __romPos;
    _6A000_VRAM = ADDR(._6A000);
    ._6A000 : AT(_6A000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6A000_DATA_START = .;
        build/assets/smt1/data/6A000.o(.data);
        _6A000_DATA_END = .;
        _6A000_DATA_SIZE = ABSOLUTE(_6A000_DATA_END - _6A000_DATA_START);
    }
    __romPos += SIZEOF(._6A000);
    _6A000_ROM_END = __romPos;
    _6A000_VRAM_END = .;

    _6B800_ROM_START = __romPos;
    _6B800_VRAM = ADDR(._6B800);
    ._6B800 : AT(_6B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6B800_DATA_START = .;
        build/assets/smt1/data/6B800.o(.data);
        _6B800_DATA_END = .;
        _6B800_DATA_SIZE = ABSOLUTE(_6B800_DATA_END - _6B800_DATA_START);
    }
    __romPos += SIZEOF(._6B800);
    _6B800_ROM_END = __romPos;
    _6B800_VRAM_END = .;

    _6D000_ROM_START = __romPos;
    _6D000_VRAM = ADDR(._6D000);
    ._6D000 : AT(_6D000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6D000_DATA_START = .;
        build/assets/smt1/data/6D000.o(.data);
        _6D000_DATA_END = .;
        _6D000_DATA_SIZE = ABSOLUTE(_6D000_DATA_END - _6D000_DATA_START);
    }
    __romPos += SIZEOF(._6D000);
    _6D000_ROM_END = __romPos;
    _6D000_VRAM_END = .;

    _6E800_ROM_START = __romPos;
    _6E800_VRAM = ADDR(._6E800);
    ._6E800 : AT(_6E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6E800_DATA_START = .;
        build/assets/smt1/data/6E800.o(.data);
        _6E800_DATA_END = .;
        _6E800_DATA_SIZE = ABSOLUTE(_6E800_DATA_END - _6E800_DATA_START);
    }
    __romPos += SIZEOF(._6E800);
    _6E800_ROM_END = __romPos;
    _6E800_VRAM_END = .;

    _70000_ROM_START = __romPos;
    _70000_VRAM = ADDR(._70000);
    ._70000 : AT(_70000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _70000_DATA_START = .;
        build/assets/smt1/data/70000.o(.data);
        _70000_DATA_END = .;
        _70000_DATA_SIZE = ABSOLUTE(_70000_DATA_END - _70000_DATA_START);
    }
    __romPos += SIZEOF(._70000);
    _70000_ROM_END = __romPos;
    _70000_VRAM_END = .;

    _71800_ROM_START = __romPos;
    _71800_VRAM = ADDR(._71800);
    ._71800 : AT(_71800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _71800_DATA_START = .;
        build/assets/smt1/data/71800.o(.data);
        _71800_DATA_END = .;
        _71800_DATA_SIZE = ABSOLUTE(_71800_DATA_END - _71800_DATA_START);
    }
    __romPos += SIZEOF(._71800);
    _71800_ROM_END = __romPos;
    _71800_VRAM_END = .;

    _73000_ROM_START = __romPos;
    _73000_VRAM = ADDR(._73000);
    ._73000 : AT(_73000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _73000_DATA_START = .;
        build/assets/smt1/data/73000.o(.data);
        _73000_DATA_END = .;
        _73000_DATA_SIZE = ABSOLUTE(_73000_DATA_END - _73000_DATA_START);
    }
    __romPos += SIZEOF(._73000);
    _73000_ROM_END = __romPos;
    _73000_VRAM_END = .;

    _73800_ROM_START = __romPos;
    _73800_VRAM = ADDR(._73800);
    ._73800 : AT(_73800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _73800_DATA_START = .;
        build/assets/smt1/data/73800.o(.data);
        _73800_DATA_END = .;
        _73800_DATA_SIZE = ABSOLUTE(_73800_DATA_END - _73800_DATA_START);
    }
    __romPos += SIZEOF(._73800);
    _73800_ROM_END = __romPos;
    _73800_VRAM_END = .;

    _74800_ROM_START = __romPos;
    _74800_VRAM = ADDR(._74800);
    ._74800 : AT(_74800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _74800_DATA_START = .;
        build/assets/smt1/data/74800.o(.data);
        _74800_DATA_END = .;
        _74800_DATA_SIZE = ABSOLUTE(_74800_DATA_END - _74800_DATA_START);
    }
    __romPos += SIZEOF(._74800);
    _74800_ROM_END = __romPos;
    _74800_VRAM_END = .;

    _79800_ROM_START = __romPos;
    _79800_VRAM = ADDR(._79800);
    ._79800 : AT(_79800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _79800_DATA_START = .;
        build/assets/smt1/data/79800.o(.data);
        _79800_DATA_END = .;
        _79800_DATA_SIZE = ABSOLUTE(_79800_DATA_END - _79800_DATA_START);
    }
    __romPos += SIZEOF(._79800);
    _79800_ROM_END = __romPos;
    _79800_VRAM_END = .;

    _7B800_ROM_START = __romPos;
    _7B800_VRAM = ADDR(._7B800);
    ._7B800 : AT(_7B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7B800_DATA_START = .;
        build/assets/smt1/data/7B800.o(.data);
        _7B800_DATA_END = .;
        _7B800_DATA_SIZE = ABSOLUTE(_7B800_DATA_END - _7B800_DATA_START);
    }
    __romPos += SIZEOF(._7B800);
    _7B800_ROM_END = __romPos;
    _7B800_VRAM_END = .;

    _7D000_ROM_START = __romPos;
    _7D000_VRAM = ADDR(._7D000);
    ._7D000 : AT(_7D000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7D000_DATA_START = .;
        build/assets/smt1/data/7D000.o(.data);
        _7D000_DATA_END = .;
        _7D000_DATA_SIZE = ABSOLUTE(_7D000_DATA_END - _7D000_DATA_START);
    }
    __romPos += SIZEOF(._7D000);
    _7D000_ROM_END = __romPos;
    _7D000_VRAM_END = .;

    _7D800_ROM_START = __romPos;
    _7D800_VRAM = ADDR(._7D800);
    ._7D800 : AT(_7D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7D800_DATA_START = .;
        build/assets/smt1/data/7D800.o(.data);
        _7D800_DATA_END = .;
        _7D800_DATA_SIZE = ABSOLUTE(_7D800_DATA_END - _7D800_DATA_START);
    }
    __romPos += SIZEOF(._7D800);
    _7D800_ROM_END = __romPos;
    _7D800_VRAM_END = .;

    _7E000_ROM_START = __romPos;
    _7E000_VRAM = ADDR(._7E000);
    ._7E000 : AT(_7E000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7E000_DATA_START = .;
        build/assets/smt1/data/7E000.o(.data);
        _7E000_DATA_END = .;
        _7E000_DATA_SIZE = ABSOLUTE(_7E000_DATA_END - _7E000_DATA_START);
    }
    __romPos += SIZEOF(._7E000);
    _7E000_ROM_END = __romPos;
    _7E000_VRAM_END = .;

    _7E800_ROM_START = __romPos;
    _7E800_VRAM = ADDR(._7E800);
    ._7E800 : AT(_7E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7E800_DATA_START = .;
        build/assets/smt1/data/7E800.o(.data);
        _7E800_DATA_END = .;
        _7E800_DATA_SIZE = ABSOLUTE(_7E800_DATA_END - _7E800_DATA_START);
    }
    __romPos += SIZEOF(._7E800);
    _7E800_ROM_END = __romPos;
    _7E800_VRAM_END = .;

    _80000_ROM_START = __romPos;
    _80000_VRAM = ADDR(._80000);
    ._80000 : AT(_80000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _80000_DATA_START = .;
        build/assets/smt1/data/80000.o(.data);
        _80000_DATA_END = .;
        _80000_DATA_SIZE = ABSOLUTE(_80000_DATA_END - _80000_DATA_START);
    }
    __romPos += SIZEOF(._80000);
    _80000_ROM_END = __romPos;
    _80000_VRAM_END = .;

    tex_rnd1_ROM_START = __romPos;
    tex_rnd1_VRAM = ADDR(.tex_rnd1);
    .tex_rnd1 : AT(tex_rnd1_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_rnd1_DATA_START = .;
        build/assets/smt1/data/tex/rnd1.o(.data);
        tex_rnd1_DATA_END = .;
        tex_rnd1_DATA_SIZE = ABSOLUTE(tex_rnd1_DATA_END - tex_rnd1_DATA_START);
    }
    __romPos += SIZEOF(.tex_rnd1);
    tex_rnd1_ROM_END = __romPos;
    tex_rnd1_VRAM_END = .;

    tex_titlel_ROM_START = __romPos;
    tex_titlel_VRAM = ADDR(.tex_titlel);
    .tex_titlel : AT(tex_titlel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_titlel_DATA_START = .;
        build/assets/smt1/data/tex/titlel.o(.data);
        tex_titlel_DATA_END = .;
        tex_titlel_DATA_SIZE = ABSOLUTE(tex_titlel_DATA_END - tex_titlel_DATA_START);
    }
    __romPos += SIZEOF(.tex_titlel);
    tex_titlel_ROM_END = __romPos;
    tex_titlel_VRAM_END = .;

    tex_titler_ROM_START = __romPos;
    tex_titler_VRAM = ADDR(.tex_titler);
    .tex_titler : AT(tex_titler_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_titler_DATA_START = .;
        build/assets/smt1/data/tex/titler.o(.data);
        tex_titler_DATA_END = .;
        tex_titler_DATA_SIZE = ABSOLUTE(tex_titler_DATA_END - tex_titler_DATA_START);
    }
    __romPos += SIZEOF(.tex_titler);
    tex_titler_ROM_END = __romPos;
    tex_titler_VRAM_END = .;

    tex_logo_ROM_START = __romPos;
    tex_logo_VRAM = ADDR(.tex_logo);
    .tex_logo : AT(tex_logo_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_logo_DATA_START = .;
        build/assets/smt1/data/tex/logo.o(.data);
        tex_logo_DATA_END = .;
        tex_logo_DATA_SIZE = ABSOLUTE(tex_logo_DATA_END - tex_logo_DATA_START);
    }
    __romPos += SIZEOF(.tex_logo);
    tex_logo_ROM_END = __romPos;
    tex_logo_VRAM_END = .;

    _94000_ROM_START = __romPos;
    _94000_VRAM = ADDR(._94000);
    ._94000 : AT(_94000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _94000_DATA_START = .;
        build/assets/smt1/data/94000.o(.data);
        _94000_DATA_END = .;
        _94000_DATA_SIZE = ABSOLUTE(_94000_DATA_END - _94000_DATA_START);
    }
    __romPos += SIZEOF(._94000);
    _94000_ROM_END = __romPos;
    _94000_VRAM_END = .;

    _96000_ROM_START = __romPos;
    _96000_VRAM = ADDR(._96000);
    ._96000 : AT(_96000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _96000_DATA_START = .;
        build/assets/smt1/data/96000.o(.data);
        _96000_DATA_END = .;
        _96000_DATA_SIZE = ABSOLUTE(_96000_DATA_END - _96000_DATA_START);
    }
    __romPos += SIZEOF(._96000);
    _96000_ROM_END = __romPos;
    _96000_VRAM_END = .;

    _97800_ROM_START = __romPos;
    _97800_VRAM = ADDR(._97800);
    ._97800 : AT(_97800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _97800_DATA_START = .;
        build/assets/smt1/data/97800.o(.data);
        _97800_DATA_END = .;
        _97800_DATA_SIZE = ABSOLUTE(_97800_DATA_END - _97800_DATA_START);
    }
    __romPos += SIZEOF(._97800);
    _97800_ROM_END = __romPos;
    _97800_VRAM_END = .;

    _99000_ROM_START = __romPos;
    _99000_VRAM = ADDR(._99000);
    ._99000 : AT(_99000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _99000_DATA_START = .;
        build/assets/smt1/data/99000.o(.data);
        _99000_DATA_END = .;
        _99000_DATA_SIZE = ABSOLUTE(_99000_DATA_END - _99000_DATA_START);
    }
    __romPos += SIZEOF(._99000);
    _99000_ROM_END = __romPos;
    _99000_VRAM_END = .;

    _99800_ROM_START = __romPos;
    _99800_VRAM = ADDR(._99800);
    ._99800 : AT(_99800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _99800_DATA_START = .;
        build/assets/smt1/data/99800.o(.data);
        _99800_DATA_END = .;
        _99800_DATA_SIZE = ABSOLUTE(_99800_DATA_END - _99800_DATA_START);
    }
    __romPos += SIZEOF(._99800);
    _99800_ROM_END = __romPos;
    _99800_VRAM_END = .;

    _9A000_ROM_START = __romPos;
    _9A000_VRAM = ADDR(._9A000);
    ._9A000 : AT(_9A000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9A000_DATA_START = .;
        build/assets/smt1/data/9A000.o(.data);
        _9A000_DATA_END = .;
        _9A000_DATA_SIZE = ABSOLUTE(_9A000_DATA_END - _9A000_DATA_START);
    }
    __romPos += SIZEOF(._9A000);
    _9A000_ROM_END = __romPos;
    _9A000_VRAM_END = .;

    tex_fusecaps_ROM_START = __romPos;
    tex_fusecaps_VRAM = ADDR(.tex_fusecaps);
    .tex_fusecaps : AT(tex_fusecaps_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_fusecaps_DATA_START = .;
        build/assets/smt1/data/tex/fusecaps.o(.data);
        tex_fusecaps_DATA_END = .;
        tex_fusecaps_DATA_SIZE = ABSOLUTE(tex_fusecaps_DATA_END - tex_fusecaps_DATA_START);
    }
    __romPos += SIZEOF(.tex_fusecaps);
    tex_fusecaps_ROM_END = __romPos;
    tex_fusecaps_VRAM_END = .;

    tex_fusebubl_ROM_START = __romPos;
    tex_fusebubl_VRAM = ADDR(.tex_fusebubl);
    .tex_fusebubl : AT(tex_fusebubl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_fusebubl_DATA_START = .;
        build/assets/smt1/data/tex/fusebubl.o(.data);
        tex_fusebubl_DATA_END = .;
        tex_fusebubl_DATA_SIZE = ABSOLUTE(tex_fusebubl_DATA_END - tex_fusebubl_DATA_START);
    }
    __romPos += SIZEOF(.tex_fusebubl);
    tex_fusebubl_ROM_END = __romPos;
    tex_fusebubl_VRAM_END = .;

    tex_flash_ROM_START = __romPos;
    tex_flash_VRAM = ADDR(.tex_flash);
    .tex_flash : AT(tex_flash_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_flash_DATA_START = .;
        build/assets/smt1/data/tex/flash.o(.data);
        tex_flash_DATA_END = .;
        tex_flash_DATA_SIZE = ABSOLUTE(tex_flash_DATA_END - tex_flash_DATA_START);
    }
    __romPos += SIZEOF(.tex_flash);
    tex_flash_ROM_END = __romPos;
    tex_flash_VRAM_END = .;

    tex_countdwn_ROM_START = __romPos;
    tex_countdwn_VRAM = ADDR(.tex_countdwn);
    .tex_countdwn : AT(tex_countdwn_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_countdwn_DATA_START = .;
        build/assets/smt1/data/tex/countdwn.o(.data);
        tex_countdwn_DATA_END = .;
        tex_countdwn_DATA_SIZE = ABSOLUTE(tex_countdwn_DATA_END - tex_countdwn_DATA_START);
    }
    __romPos += SIZEOF(.tex_countdwn);
    tex_countdwn_ROM_END = __romPos;
    tex_countdwn_VRAM_END = .;

    B7800_ROM_START = __romPos;
    B7800_VRAM = ADDR(.B7800);
    .B7800 : AT(B7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B7800_DATA_START = .;
        build/assets/smt1/data/B7800.o(.data);
        B7800_DATA_END = .;
        B7800_DATA_SIZE = ABSOLUTE(B7800_DATA_END - B7800_DATA_START);
    }
    __romPos += SIZEOF(.B7800);
    B7800_ROM_END = __romPos;
    B7800_VRAM_END = .;

    B8000_ROM_START = __romPos;
    B8000_VRAM = ADDR(.B8000);
    .B8000 : AT(B8000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B8000_DATA_START = .;
        build/assets/smt1/data/B8000.o(.data);
        B8000_DATA_END = .;
        B8000_DATA_SIZE = ABSOLUTE(B8000_DATA_END - B8000_DATA_START);
    }
    __romPos += SIZEOF(.B8000);
    B8000_ROM_END = __romPos;
    B8000_VRAM_END = .;

    BA800_ROM_START = __romPos;
    BA800_VRAM = ADDR(.BA800);
    .BA800 : AT(BA800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BA800_DATA_START = .;
        build/assets/smt1/data/BA800.o(.data);
        BA800_DATA_END = .;
        BA800_DATA_SIZE = ABSOLUTE(BA800_DATA_END - BA800_DATA_START);
    }
    __romPos += SIZEOF(.BA800);
    BA800_ROM_END = __romPos;
    BA800_VRAM_END = .;

    BC000_ROM_START = __romPos;
    BC000_VRAM = ADDR(.BC000);
    .BC000 : AT(BC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BC000_DATA_START = .;
        build/assets/smt1/data/BC000.o(.data);
        BC000_DATA_END = .;
        BC000_DATA_SIZE = ABSOLUTE(BC000_DATA_END - BC000_DATA_START);
    }
    __romPos += SIZEOF(.BC000);
    BC000_ROM_END = __romPos;
    BC000_VRAM_END = .;

    BD800_ROM_START = __romPos;
    BD800_VRAM = ADDR(.BD800);
    .BD800 : AT(BD800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BD800_DATA_START = .;
        build/assets/smt1/data/BD800.o(.data);
        BD800_DATA_END = .;
        BD800_DATA_SIZE = ABSOLUTE(BD800_DATA_END - BD800_DATA_START);
    }
    __romPos += SIZEOF(.BD800);
    BD800_ROM_END = __romPos;
    BD800_VRAM_END = .;

    BE800_ROM_START = __romPos;
    BE800_VRAM = ADDR(.BE800);
    .BE800 : AT(BE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BE800_DATA_START = .;
        build/assets/smt1/data/BE800.o(.data);
        BE800_DATA_END = .;
        BE800_DATA_SIZE = ABSOLUTE(BE800_DATA_END - BE800_DATA_START);
    }
    __romPos += SIZEOF(.BE800);
    BE800_ROM_END = __romPos;
    BE800_VRAM_END = .;

    BF000_ROM_START = __romPos;
    BF000_VRAM = ADDR(.BF000);
    .BF000 : AT(BF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BF000_DATA_START = .;
        build/assets/smt1/data/BF000.o(.data);
        BF000_DATA_END = .;
        BF000_DATA_SIZE = ABSOLUTE(BF000_DATA_END - BF000_DATA_START);
    }
    __romPos += SIZEOF(.BF000);
    BF000_ROM_END = __romPos;
    BF000_VRAM_END = .;

    BF800_ROM_START = __romPos;
    BF800_VRAM = ADDR(.BF800);
    .BF800 : AT(BF800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BF800_DATA_START = .;
        build/assets/smt1/data/BF800.o(.data);
        BF800_DATA_END = .;
        BF800_DATA_SIZE = ABSOLUTE(BF800_DATA_END - BF800_DATA_START);
    }
    __romPos += SIZEOF(.BF800);
    BF800_ROM_END = __romPos;
    BF800_VRAM_END = .;

    C0800_ROM_START = __romPos;
    C0800_VRAM = ADDR(.C0800);
    .C0800 : AT(C0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C0800_DATA_START = .;
        build/assets/smt1/data/C0800.o(.data);
        C0800_DATA_END = .;
        C0800_DATA_SIZE = ABSOLUTE(C0800_DATA_END - C0800_DATA_START);
    }
    __romPos += SIZEOF(.C0800);
    C0800_ROM_END = __romPos;
    C0800_VRAM_END = .;

    C2800_ROM_START = __romPos;
    C2800_VRAM = ADDR(.C2800);
    .C2800 : AT(C2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C2800_DATA_START = .;
        build/assets/smt1/data/C2800.o(.data);
        C2800_DATA_END = .;
        C2800_DATA_SIZE = ABSOLUTE(C2800_DATA_END - C2800_DATA_START);
    }
    __romPos += SIZEOF(.C2800);
    C2800_ROM_END = __romPos;
    C2800_VRAM_END = .;

    C8800_ROM_START = __romPos;
    C8800_VRAM = ADDR(.C8800);
    .C8800 : AT(C8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C8800_DATA_START = .;
        build/assets/smt1/data/C8800.o(.data);
        C8800_DATA_END = .;
        C8800_DATA_SIZE = ABSOLUTE(C8800_DATA_END - C8800_DATA_START);
    }
    __romPos += SIZEOF(.C8800);
    C8800_ROM_END = __romPos;
    C8800_VRAM_END = .;

    C9800_ROM_START = __romPos;
    C9800_VRAM = ADDR(.C9800);
    .C9800 : AT(C9800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C9800_DATA_START = .;
        build/assets/smt1/data/C9800.o(.data);
        C9800_DATA_END = .;
        C9800_DATA_SIZE = ABSOLUTE(C9800_DATA_END - C9800_DATA_START);
    }
    __romPos += SIZEOF(.C9800);
    C9800_ROM_END = __romPos;
    C9800_VRAM_END = .;

    CC000_ROM_START = __romPos;
    CC000_VRAM = ADDR(.CC000);
    .CC000 : AT(CC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CC000_DATA_START = .;
        build/assets/smt1/data/CC000.o(.data);
        CC000_DATA_END = .;
        CC000_DATA_SIZE = ABSOLUTE(CC000_DATA_END - CC000_DATA_START);
    }
    __romPos += SIZEOF(.CC000);
    CC000_ROM_END = __romPos;
    CC000_VRAM_END = .;

    CC800_ROM_START = __romPos;
    CC800_VRAM = ADDR(.CC800);
    .CC800 : AT(CC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CC800_DATA_START = .;
        build/assets/smt1/data/CC800.o(.data);
        CC800_DATA_END = .;
        CC800_DATA_SIZE = ABSOLUTE(CC800_DATA_END - CC800_DATA_START);
    }
    __romPos += SIZEOF(.CC800);
    CC800_ROM_END = __romPos;
    CC800_VRAM_END = .;

    CD800_ROM_START = __romPos;
    CD800_VRAM = ADDR(.CD800);
    .CD800 : AT(CD800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CD800_DATA_START = .;
        build/assets/smt1/data/CD800.o(.data);
        CD800_DATA_END = .;
        CD800_DATA_SIZE = ABSOLUTE(CD800_DATA_END - CD800_DATA_START);
    }
    __romPos += SIZEOF(.CD800);
    CD800_ROM_END = __romPos;
    CD800_VRAM_END = .;

    CE800_ROM_START = __romPos;
    CE800_VRAM = ADDR(.CE800);
    .CE800 : AT(CE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CE800_DATA_START = .;
        build/assets/smt1/data/CE800.o(.data);
        CE800_DATA_END = .;
        CE800_DATA_SIZE = ABSOLUTE(CE800_DATA_END - CE800_DATA_START);
    }
    __romPos += SIZEOF(.CE800);
    CE800_ROM_END = __romPos;
    CE800_VRAM_END = .;

    CF800_ROM_START = __romPos;
    CF800_VRAM = ADDR(.CF800);
    .CF800 : AT(CF800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CF800_DATA_START = .;
        build/assets/smt1/data/CF800.o(.data);
        CF800_DATA_END = .;
        CF800_DATA_SIZE = ABSOLUTE(CF800_DATA_END - CF800_DATA_START);
    }
    __romPos += SIZEOF(.CF800);
    CF800_ROM_END = __romPos;
    CF800_VRAM_END = .;

    D3000_ROM_START = __romPos;
    D3000_VRAM = ADDR(.D3000);
    .D3000 : AT(D3000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D3000_DATA_START = .;
        build/assets/smt1/data/D3000.o(.data);
        D3000_DATA_END = .;
        D3000_DATA_SIZE = ABSOLUTE(D3000_DATA_END - D3000_DATA_START);
    }
    __romPos += SIZEOF(.D3000);
    D3000_ROM_END = __romPos;
    D3000_VRAM_END = .;

    D3800_ROM_START = __romPos;
    D3800_VRAM = ADDR(.D3800);
    .D3800 : AT(D3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D3800_DATA_START = .;
        build/assets/smt1/data/D3800.o(.data);
        D3800_DATA_END = .;
        D3800_DATA_SIZE = ABSOLUTE(D3800_DATA_END - D3800_DATA_START);
    }
    __romPos += SIZEOF(.D3800);
    D3800_ROM_END = __romPos;
    D3800_VRAM_END = .;

    D6800_ROM_START = __romPos;
    D6800_VRAM = ADDR(.D6800);
    .D6800 : AT(D6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D6800_DATA_START = .;
        build/assets/smt1/data/D6800.o(.data);
        D6800_DATA_END = .;
        D6800_DATA_SIZE = ABSOLUTE(D6800_DATA_END - D6800_DATA_START);
    }
    __romPos += SIZEOF(.D6800);
    D6800_ROM_END = __romPos;
    D6800_VRAM_END = .;

    D8000_ROM_START = __romPos;
    D8000_VRAM = ADDR(.D8000);
    .D8000 : AT(D8000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D8000_DATA_START = .;
        build/assets/smt1/data/D8000.o(.data);
        D8000_DATA_END = .;
        D8000_DATA_SIZE = ABSOLUTE(D8000_DATA_END - D8000_DATA_START);
    }
    __romPos += SIZEOF(.D8000);
    D8000_ROM_END = __romPos;
    D8000_VRAM_END = .;

    DC800_ROM_START = __romPos;
    DC800_VRAM = ADDR(.DC800);
    .DC800 : AT(DC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DC800_DATA_START = .;
        build/assets/smt1/data/DC800.o(.data);
        DC800_DATA_END = .;
        DC800_DATA_SIZE = ABSOLUTE(DC800_DATA_END - DC800_DATA_START);
    }
    __romPos += SIZEOF(.DC800);
    DC800_ROM_END = __romPos;
    DC800_VRAM_END = .;

    DE800_ROM_START = __romPos;
    DE800_VRAM = ADDR(.DE800);
    .DE800 : AT(DE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DE800_DATA_START = .;
        build/assets/smt1/data/DE800.o(.data);
        DE800_DATA_END = .;
        DE800_DATA_SIZE = ABSOLUTE(DE800_DATA_END - DE800_DATA_START);
    }
    __romPos += SIZEOF(.DE800);
    DE800_ROM_END = __romPos;
    DE800_VRAM_END = .;

    E1000_ROM_START = __romPos;
    E1000_VRAM = ADDR(.E1000);
    .E1000 : AT(E1000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E1000_DATA_START = .;
        build/assets/smt1/data/E1000.o(.data);
        E1000_DATA_END = .;
        E1000_DATA_SIZE = ABSOLUTE(E1000_DATA_END - E1000_DATA_START);
    }
    __romPos += SIZEOF(.E1000);
    E1000_ROM_END = __romPos;
    E1000_VRAM_END = .;

    E2800_ROM_START = __romPos;
    E2800_VRAM = ADDR(.E2800);
    .E2800 : AT(E2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E2800_DATA_START = .;
        build/assets/smt1/data/E2800.o(.data);
        E2800_DATA_END = .;
        E2800_DATA_SIZE = ABSOLUTE(E2800_DATA_END - E2800_DATA_START);
    }
    __romPos += SIZEOF(.E2800);
    E2800_ROM_END = __romPos;
    E2800_VRAM_END = .;

    E3800_ROM_START = __romPos;
    E3800_VRAM = ADDR(.E3800);
    .E3800 : AT(E3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E3800_DATA_START = .;
        build/assets/smt1/data/E3800.o(.data);
        E3800_DATA_END = .;
        E3800_DATA_SIZE = ABSOLUTE(E3800_DATA_END - E3800_DATA_START);
    }
    __romPos += SIZEOF(.E3800);
    E3800_ROM_END = __romPos;
    E3800_VRAM_END = .;

    E4000_ROM_START = __romPos;
    E4000_VRAM = ADDR(.E4000);
    .E4000 : AT(E4000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E4000_DATA_START = .;
        build/assets/smt1/data/E4000.o(.data);
        E4000_DATA_END = .;
        E4000_DATA_SIZE = ABSOLUTE(E4000_DATA_END - E4000_DATA_START);
    }
    __romPos += SIZEOF(.E4000);
    E4000_ROM_END = __romPos;
    E4000_VRAM_END = .;

    E5800_ROM_START = __romPos;
    E5800_VRAM = ADDR(.E5800);
    .E5800 : AT(E5800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E5800_DATA_START = .;
        build/assets/smt1/data/E5800.o(.data);
        E5800_DATA_END = .;
        E5800_DATA_SIZE = ABSOLUTE(E5800_DATA_END - E5800_DATA_START);
    }
    __romPos += SIZEOF(.E5800);
    E5800_ROM_END = __romPos;
    E5800_VRAM_END = .;

    E7800_ROM_START = __romPos;
    E7800_VRAM = ADDR(.E7800);
    .E7800 : AT(E7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E7800_DATA_START = .;
        build/assets/smt1/data/E7800.o(.data);
        E7800_DATA_END = .;
        E7800_DATA_SIZE = ABSOLUTE(E7800_DATA_END - E7800_DATA_START);
    }
    __romPos += SIZEOF(.E7800);
    E7800_ROM_END = __romPos;
    E7800_VRAM_END = .;

    E8000_ROM_START = __romPos;
    E8000_VRAM = ADDR(.E8000);
    .E8000 : AT(E8000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E8000_DATA_START = .;
        build/assets/smt1/data/E8000.o(.data);
        E8000_DATA_END = .;
        E8000_DATA_SIZE = ABSOLUTE(E8000_DATA_END - E8000_DATA_START);
    }
    __romPos += SIZEOF(.E8000);
    E8000_ROM_END = __romPos;
    E8000_VRAM_END = .;

    E9800_ROM_START = __romPos;
    E9800_VRAM = ADDR(.E9800);
    .E9800 : AT(E9800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E9800_DATA_START = .;
        build/assets/smt1/data/E9800.o(.data);
        E9800_DATA_END = .;
        E9800_DATA_SIZE = ABSOLUTE(E9800_DATA_END - E9800_DATA_START);
    }
    __romPos += SIZEOF(.E9800);
    E9800_ROM_END = __romPos;
    E9800_VRAM_END = .;

    EA800_ROM_START = __romPos;
    EA800_VRAM = ADDR(.EA800);
    .EA800 : AT(EA800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EA800_DATA_START = .;
        build/assets/smt1/data/EA800.o(.data);
        EA800_DATA_END = .;
        EA800_DATA_SIZE = ABSOLUTE(EA800_DATA_END - EA800_DATA_START);
    }
    __romPos += SIZEOF(.EA800);
    EA800_ROM_END = __romPos;
    EA800_VRAM_END = .;

    EB000_ROM_START = __romPos;
    EB000_VRAM = ADDR(.EB000);
    .EB000 : AT(EB000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EB000_DATA_START = .;
        build/assets/smt1/data/EB000.o(.data);
        EB000_DATA_END = .;
        EB000_DATA_SIZE = ABSOLUTE(EB000_DATA_END - EB000_DATA_START);
    }
    __romPos += SIZEOF(.EB000);
    EB000_ROM_END = __romPos;
    EB000_VRAM_END = .;

    EC000_ROM_START = __romPos;
    EC000_VRAM = ADDR(.EC000);
    .EC000 : AT(EC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EC000_DATA_START = .;
        build/assets/smt1/data/EC000.o(.data);
        EC000_DATA_END = .;
        EC000_DATA_SIZE = ABSOLUTE(EC000_DATA_END - EC000_DATA_START);
    }
    __romPos += SIZEOF(.EC000);
    EC000_ROM_END = __romPos;
    EC000_VRAM_END = .;

    EC800_ROM_START = __romPos;
    EC800_VRAM = ADDR(.EC800);
    .EC800 : AT(EC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EC800_DATA_START = .;
        build/assets/smt1/data/EC800.o(.data);
        EC800_DATA_END = .;
        EC800_DATA_SIZE = ABSOLUTE(EC800_DATA_END - EC800_DATA_START);
    }
    __romPos += SIZEOF(.EC800);
    EC800_ROM_END = __romPos;
    EC800_VRAM_END = .;

    ED800_ROM_START = __romPos;
    ED800_VRAM = ADDR(.ED800);
    .ED800 : AT(ED800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        ED800_DATA_START = .;
        build/assets/smt1/data/ED800.o(.data);
        ED800_DATA_END = .;
        ED800_DATA_SIZE = ABSOLUTE(ED800_DATA_END - ED800_DATA_START);
    }
    __romPos += SIZEOF(.ED800);
    ED800_ROM_END = __romPos;
    ED800_VRAM_END = .;

    EE800_ROM_START = __romPos;
    EE800_VRAM = ADDR(.EE800);
    .EE800 : AT(EE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EE800_DATA_START = .;
        build/assets/smt1/data/EE800.o(.data);
        EE800_DATA_END = .;
        EE800_DATA_SIZE = ABSOLUTE(EE800_DATA_END - EE800_DATA_START);
    }
    __romPos += SIZEOF(.EE800);
    EE800_ROM_END = __romPos;
    EE800_VRAM_END = .;

    EF800_ROM_START = __romPos;
    EF800_VRAM = ADDR(.EF800);
    .EF800 : AT(EF800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EF800_DATA_START = .;
        build/assets/smt1/data/EF800.o(.data);
        EF800_DATA_END = .;
        EF800_DATA_SIZE = ABSOLUTE(EF800_DATA_END - EF800_DATA_START);
    }
    __romPos += SIZEOF(.EF800);
    EF800_ROM_END = __romPos;
    EF800_VRAM_END = .;

    F0800_ROM_START = __romPos;
    F0800_VRAM = ADDR(.F0800);
    .F0800 : AT(F0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F0800_DATA_START = .;
        build/assets/smt1/data/F0800.o(.data);
        F0800_DATA_END = .;
        F0800_DATA_SIZE = ABSOLUTE(F0800_DATA_END - F0800_DATA_START);
    }
    __romPos += SIZEOF(.F0800);
    F0800_ROM_END = __romPos;
    F0800_VRAM_END = .;

    F1800_ROM_START = __romPos;
    F1800_VRAM = ADDR(.F1800);
    .F1800 : AT(F1800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F1800_DATA_START = .;
        build/assets/smt1/data/F1800.o(.data);
        F1800_DATA_END = .;
        F1800_DATA_SIZE = ABSOLUTE(F1800_DATA_END - F1800_DATA_START);
    }
    __romPos += SIZEOF(.F1800);
    F1800_ROM_END = __romPos;
    F1800_VRAM_END = .;

    F2800_ROM_START = __romPos;
    F2800_VRAM = ADDR(.F2800);
    .F2800 : AT(F2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F2800_DATA_START = .;
        build/assets/smt1/data/F2800.o(.data);
        F2800_DATA_END = .;
        F2800_DATA_SIZE = ABSOLUTE(F2800_DATA_END - F2800_DATA_START);
    }
    __romPos += SIZEOF(.F2800);
    F2800_ROM_END = __romPos;
    F2800_VRAM_END = .;

    tex_bg_jakyol_ROM_START = __romPos;
    tex_bg_jakyol_VRAM = ADDR(.tex_bg_jakyol);
    .tex_bg_jakyol : AT(tex_bg_jakyol_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_jakyol_DATA_START = .;
        build/assets/smt1/data/tex/bg/jakyol.o(.data);
        tex_bg_jakyol_DATA_END = .;
        tex_bg_jakyol_DATA_SIZE = ABSOLUTE(tex_bg_jakyol_DATA_END - tex_bg_jakyol_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_jakyol);
    tex_bg_jakyol_ROM_END = __romPos;
    tex_bg_jakyol_VRAM_END = .;

    tex_bg_jakyor_ROM_START = __romPos;
    tex_bg_jakyor_VRAM = ADDR(.tex_bg_jakyor);
    .tex_bg_jakyor : AT(tex_bg_jakyor_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_jakyor_DATA_START = .;
        build/assets/smt1/data/tex/bg/jakyor.o(.data);
        tex_bg_jakyor_DATA_END = .;
        tex_bg_jakyor_DATA_SIZE = ABSOLUTE(tex_bg_jakyor_DATA_END - tex_bg_jakyor_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_jakyor);
    tex_bg_jakyor_ROM_END = __romPos;
    tex_bg_jakyor_VRAM_END = .;

    tex_bg_mesial_ROM_START = __romPos;
    tex_bg_mesial_VRAM = ADDR(.tex_bg_mesial);
    .tex_bg_mesial : AT(tex_bg_mesial_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_mesial_DATA_START = .;
        build/assets/smt1/data/tex/bg/mesial.o(.data);
        tex_bg_mesial_DATA_END = .;
        tex_bg_mesial_DATA_SIZE = ABSOLUTE(tex_bg_mesial_DATA_END - tex_bg_mesial_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_mesial);
    tex_bg_mesial_ROM_END = __romPos;
    tex_bg_mesial_VRAM_END = .;

    tex_bg_mesiar_ROM_START = __romPos;
    tex_bg_mesiar_VRAM = ADDR(.tex_bg_mesiar);
    .tex_bg_mesiar : AT(tex_bg_mesiar_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_mesiar_DATA_START = .;
        build/assets/smt1/data/tex/bg/mesiar.o(.data);
        tex_bg_mesiar_DATA_END = .;
        tex_bg_mesiar_DATA_SIZE = ABSOLUTE(tex_bg_mesiar_DATA_END - tex_bg_mesiar_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_mesiar);
    tex_bg_mesiar_ROM_END = __romPos;
    tex_bg_mesiar_VRAM_END = .;

    tex_bg_gaial_ROM_START = __romPos;
    tex_bg_gaial_VRAM = ADDR(.tex_bg_gaial);
    .tex_bg_gaial : AT(tex_bg_gaial_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gaial_DATA_START = .;
        build/assets/smt1/data/tex/bg/gaial.o(.data);
        tex_bg_gaial_DATA_END = .;
        tex_bg_gaial_DATA_SIZE = ABSOLUTE(tex_bg_gaial_DATA_END - tex_bg_gaial_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gaial);
    tex_bg_gaial_ROM_END = __romPos;
    tex_bg_gaial_VRAM_END = .;

    tex_bg_gaiar_ROM_START = __romPos;
    tex_bg_gaiar_VRAM = ADDR(.tex_bg_gaiar);
    .tex_bg_gaiar : AT(tex_bg_gaiar_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gaiar_DATA_START = .;
        build/assets/smt1/data/tex/bg/gaiar.o(.data);
        tex_bg_gaiar_DATA_END = .;
        tex_bg_gaiar_DATA_SIZE = ABSOLUTE(tex_bg_gaiar_DATA_END - tex_bg_gaiar_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gaiar);
    tex_bg_gaiar_ROM_END = __romPos;
    tex_bg_gaiar_VRAM_END = .;

    tex_bg_kaifukul_ROM_START = __romPos;
    tex_bg_kaifukul_VRAM = ADDR(.tex_bg_kaifukul);
    .tex_bg_kaifukul : AT(tex_bg_kaifukul_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_kaifukul_DATA_START = .;
        build/assets/smt1/data/tex/bg/kaifukul.o(.data);
        tex_bg_kaifukul_DATA_END = .;
        tex_bg_kaifukul_DATA_SIZE = ABSOLUTE(tex_bg_kaifukul_DATA_END - tex_bg_kaifukul_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_kaifukul);
    tex_bg_kaifukul_ROM_END = __romPos;
    tex_bg_kaifukul_VRAM_END = .;

    tex_bg_kaifukur_ROM_START = __romPos;
    tex_bg_kaifukur_VRAM = ADDR(.tex_bg_kaifukur);
    .tex_bg_kaifukur : AT(tex_bg_kaifukur_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_kaifukur_DATA_START = .;
        build/assets/smt1/data/tex/bg/kaifukur.o(.data);
        tex_bg_kaifukur_DATA_END = .;
        tex_bg_kaifukur_DATA_SIZE = ABSOLUTE(tex_bg_kaifukur_DATA_END - tex_bg_kaifukur_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_kaifukur);
    tex_bg_kaifukur_ROM_END = __romPos;
    tex_bg_kaifukur_VRAM_END = .;

    tex_bg_terml_ROM_START = __romPos;
    tex_bg_terml_VRAM = ADDR(.tex_bg_terml);
    .tex_bg_terml : AT(tex_bg_terml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_terml_DATA_START = .;
        build/assets/smt1/data/tex/bg/terml.o(.data);
        tex_bg_terml_DATA_END = .;
        tex_bg_terml_DATA_SIZE = ABSOLUTE(tex_bg_terml_DATA_END - tex_bg_terml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_terml);
    tex_bg_terml_ROM_END = __romPos;
    tex_bg_terml_VRAM_END = .;

    tex_bg_termr_ROM_START = __romPos;
    tex_bg_termr_VRAM = ADDR(.tex_bg_termr);
    .tex_bg_termr : AT(tex_bg_termr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_termr_DATA_START = .;
        build/assets/smt1/data/tex/bg/termr.o(.data);
        tex_bg_termr_DATA_END = .;
        tex_bg_termr_DATA_SIZE = ABSOLUTE(tex_bg_termr_DATA_END - tex_bg_termr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_termr);
    tex_bg_termr_ROM_END = __romPos;
    tex_bg_termr_VRAM_END = .;

    tex_bg_rooml_ROM_START = __romPos;
    tex_bg_rooml_VRAM = ADDR(.tex_bg_rooml);
    .tex_bg_rooml : AT(tex_bg_rooml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_rooml_DATA_START = .;
        build/assets/smt1/data/tex/bg/rooml.o(.data);
        tex_bg_rooml_DATA_END = .;
        tex_bg_rooml_DATA_SIZE = ABSOLUTE(tex_bg_rooml_DATA_END - tex_bg_rooml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_rooml);
    tex_bg_rooml_ROM_END = __romPos;
    tex_bg_rooml_VRAM_END = .;

    tex_bg_roomr_ROM_START = __romPos;
    tex_bg_roomr_VRAM = ADDR(.tex_bg_roomr);
    .tex_bg_roomr : AT(tex_bg_roomr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_roomr_DATA_START = .;
        build/assets/smt1/data/tex/bg/roomr.o(.data);
        tex_bg_roomr_DATA_END = .;
        tex_bg_roomr_DATA_SIZE = ABSOLUTE(tex_bg_roomr_DATA_END - tex_bg_roomr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_roomr);
    tex_bg_roomr_ROM_END = __romPos;
    tex_bg_roomr_VRAM_END = .;

    tex_bg_hospl_ROM_START = __romPos;
    tex_bg_hospl_VRAM = ADDR(.tex_bg_hospl);
    .tex_bg_hospl : AT(tex_bg_hospl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_hospl_DATA_START = .;
        build/assets/smt1/data/tex/bg/hospl.o(.data);
        tex_bg_hospl_DATA_END = .;
        tex_bg_hospl_DATA_SIZE = ABSOLUTE(tex_bg_hospl_DATA_END - tex_bg_hospl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_hospl);
    tex_bg_hospl_ROM_END = __romPos;
    tex_bg_hospl_VRAM_END = .;

    tex_bg_hospr_ROM_START = __romPos;
    tex_bg_hospr_VRAM = ADDR(.tex_bg_hospr);
    .tex_bg_hospr : AT(tex_bg_hospr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_hospr_DATA_START = .;
        build/assets/smt1/data/tex/bg/hospr.o(.data);
        tex_bg_hospr_DATA_END = .;
        tex_bg_hospr_DATA_SIZE = ABSOLUTE(tex_bg_hospr_DATA_END - tex_bg_hospr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_hospr);
    tex_bg_hospr_ROM_END = __romPos;
    tex_bg_hospr_VRAM_END = .;

    tex_bg_brooml_ROM_START = __romPos;
    tex_bg_brooml_VRAM = ADDR(.tex_bg_brooml);
    .tex_bg_brooml : AT(tex_bg_brooml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_brooml_DATA_START = .;
        build/assets/smt1/data/tex/bg/brooml.o(.data);
        tex_bg_brooml_DATA_END = .;
        tex_bg_brooml_DATA_SIZE = ABSOLUTE(tex_bg_brooml_DATA_END - tex_bg_brooml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_brooml);
    tex_bg_brooml_ROM_END = __romPos;
    tex_bg_brooml_VRAM_END = .;

    tex_bg_broomr_ROM_START = __romPos;
    tex_bg_broomr_VRAM = ADDR(.tex_bg_broomr);
    .tex_bg_broomr : AT(tex_bg_broomr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_broomr_DATA_START = .;
        build/assets/smt1/data/tex/bg/broomr.o(.data);
        tex_bg_broomr_DATA_END = .;
        tex_bg_broomr_DATA_SIZE = ABSOLUTE(tex_bg_broomr_DATA_END - tex_bg_broomr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_broomr);
    tex_bg_broomr_ROM_END = __romPos;
    tex_bg_broomr_VRAM_END = .;

    tex_bg_homel_ROM_START = __romPos;
    tex_bg_homel_VRAM = ADDR(.tex_bg_homel);
    .tex_bg_homel : AT(tex_bg_homel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_homel_DATA_START = .;
        build/assets/smt1/data/tex/bg/homel.o(.data);
        tex_bg_homel_DATA_END = .;
        tex_bg_homel_DATA_SIZE = ABSOLUTE(tex_bg_homel_DATA_END - tex_bg_homel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_homel);
    tex_bg_homel_ROM_END = __romPos;
    tex_bg_homel_VRAM_END = .;

    tex_bg_homer_ROM_START = __romPos;
    tex_bg_homer_VRAM = ADDR(.tex_bg_homer);
    .tex_bg_homer : AT(tex_bg_homer_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_homer_DATA_START = .;
        build/assets/smt1/data/tex/bg/homer.o(.data);
        tex_bg_homer_DATA_END = .;
        tex_bg_homer_DATA_SIZE = ABSOLUTE(tex_bg_homer_DATA_END - tex_bg_homer_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_homer);
    tex_bg_homer_ROM_END = __romPos;
    tex_bg_homer_VRAM_END = .;

    tex_bg_gbrooml_ROM_START = __romPos;
    tex_bg_gbrooml_VRAM = ADDR(.tex_bg_gbrooml);
    .tex_bg_gbrooml : AT(tex_bg_gbrooml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gbrooml_DATA_START = .;
        build/assets/smt1/data/tex/bg/gbrooml.o(.data);
        tex_bg_gbrooml_DATA_END = .;
        tex_bg_gbrooml_DATA_SIZE = ABSOLUTE(tex_bg_gbrooml_DATA_END - tex_bg_gbrooml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gbrooml);
    tex_bg_gbrooml_ROM_END = __romPos;
    tex_bg_gbrooml_VRAM_END = .;

    tex_bg_gbroomr_ROM_START = __romPos;
    tex_bg_gbroomr_VRAM = ADDR(.tex_bg_gbroomr);
    .tex_bg_gbroomr : AT(tex_bg_gbroomr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gbroomr_DATA_START = .;
        build/assets/smt1/data/tex/bg/gbroomr.o(.data);
        tex_bg_gbroomr_DATA_END = .;
        tex_bg_gbroomr_DATA_SIZE = ABSOLUTE(tex_bg_gbroomr_DATA_END - tex_bg_gbroomr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gbroomr);
    tex_bg_gbroomr_ROM_END = __romPos;
    tex_bg_gbroomr_VRAM_END = .;

    tex_bg_oprooml_ROM_START = __romPos;
    tex_bg_oprooml_VRAM = ADDR(.tex_bg_oprooml);
    .tex_bg_oprooml : AT(tex_bg_oprooml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_oprooml_DATA_START = .;
        build/assets/smt1/data/tex/bg/oprooml.o(.data);
        tex_bg_oprooml_DATA_END = .;
        tex_bg_oprooml_DATA_SIZE = ABSOLUTE(tex_bg_oprooml_DATA_END - tex_bg_oprooml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_oprooml);
    tex_bg_oprooml_ROM_END = __romPos;
    tex_bg_oprooml_VRAM_END = .;

    tex_bg_oproomr_ROM_START = __romPos;
    tex_bg_oproomr_VRAM = ADDR(.tex_bg_oproomr);
    .tex_bg_oproomr : AT(tex_bg_oproomr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_oproomr_DATA_START = .;
        build/assets/smt1/data/tex/bg/oproomr.o(.data);
        tex_bg_oproomr_DATA_END = .;
        tex_bg_oproomr_DATA_SIZE = ABSOLUTE(tex_bg_oproomr_DATA_END - tex_bg_oproomr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_oproomr);
    tex_bg_oproomr_ROM_END = __romPos;
    tex_bg_oproomr_VRAM_END = .;

    tex_bg_shuttrl_ROM_START = __romPos;
    tex_bg_shuttrl_VRAM = ADDR(.tex_bg_shuttrl);
    .tex_bg_shuttrl : AT(tex_bg_shuttrl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_shuttrl_DATA_START = .;
        build/assets/smt1/data/tex/bg/shuttrl.o(.data);
        tex_bg_shuttrl_DATA_END = .;
        tex_bg_shuttrl_DATA_SIZE = ABSOLUTE(tex_bg_shuttrl_DATA_END - tex_bg_shuttrl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_shuttrl);
    tex_bg_shuttrl_ROM_END = __romPos;
    tex_bg_shuttrl_VRAM_END = .;

    tex_bg_shuttrr_ROM_START = __romPos;
    tex_bg_shuttrr_VRAM = ADDR(.tex_bg_shuttrr);
    .tex_bg_shuttrr : AT(tex_bg_shuttrr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_shuttrr_DATA_START = .;
        build/assets/smt1/data/tex/bg/shuttrr.o(.data);
        tex_bg_shuttrr_DATA_END = .;
        tex_bg_shuttrr_DATA_SIZE = ABSOLUTE(tex_bg_shuttrr_DATA_END - tex_bg_shuttrr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_shuttrr);
    tex_bg_shuttrr_ROM_END = __romPos;
    tex_bg_shuttrr_VRAM_END = .;

    tex_bg_doorl_ROM_START = __romPos;
    tex_bg_doorl_VRAM = ADDR(.tex_bg_doorl);
    .tex_bg_doorl : AT(tex_bg_doorl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_doorl_DATA_START = .;
        build/assets/smt1/data/tex/bg/doorl.o(.data);
        tex_bg_doorl_DATA_END = .;
        tex_bg_doorl_DATA_SIZE = ABSOLUTE(tex_bg_doorl_DATA_END - tex_bg_doorl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_doorl);
    tex_bg_doorl_ROM_END = __romPos;
    tex_bg_doorl_VRAM_END = .;

    tex_bg_doorr_ROM_START = __romPos;
    tex_bg_doorr_VRAM = ADDR(.tex_bg_doorr);
    .tex_bg_doorr : AT(tex_bg_doorr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_doorr_DATA_START = .;
        build/assets/smt1/data/tex/bg/doorr.o(.data);
        tex_bg_doorr_DATA_END = .;
        tex_bg_doorr_DATA_SIZE = ABSOLUTE(tex_bg_doorr_DATA_END - tex_bg_doorr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_doorr);
    tex_bg_doorr_ROM_END = __romPos;
    tex_bg_doorr_VRAM_END = .;

    tex_bg_ddoorl_ROM_START = __romPos;
    tex_bg_ddoorl_VRAM = ADDR(.tex_bg_ddoorl);
    .tex_bg_ddoorl : AT(tex_bg_ddoorl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_ddoorl_DATA_START = .;
        build/assets/smt1/data/tex/bg/ddoorl.o(.data);
        tex_bg_ddoorl_DATA_END = .;
        tex_bg_ddoorl_DATA_SIZE = ABSOLUTE(tex_bg_ddoorl_DATA_END - tex_bg_ddoorl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_ddoorl);
    tex_bg_ddoorl_ROM_END = __romPos;
    tex_bg_ddoorl_VRAM_END = .;

    tex_bg_ddoorr_ROM_START = __romPos;
    tex_bg_ddoorr_VRAM = ADDR(.tex_bg_ddoorr);
    .tex_bg_ddoorr : AT(tex_bg_ddoorr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_ddoorr_DATA_START = .;
        build/assets/smt1/data/tex/bg/ddoorr.o(.data);
        tex_bg_ddoorr_DATA_END = .;
        tex_bg_ddoorr_DATA_SIZE = ABSOLUTE(tex_bg_ddoorr_DATA_END - tex_bg_ddoorr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_ddoorr);
    tex_bg_ddoorr_ROM_END = __romPos;
    tex_bg_ddoorr_VRAM_END = .;

    tex_bg_dshuttrl_ROM_START = __romPos;
    tex_bg_dshuttrl_VRAM = ADDR(.tex_bg_dshuttrl);
    .tex_bg_dshuttrl : AT(tex_bg_dshuttrl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_dshuttrl_DATA_START = .;
        build/assets/smt1/data/tex/bg/dshuttrl.o(.data);
        tex_bg_dshuttrl_DATA_END = .;
        tex_bg_dshuttrl_DATA_SIZE = ABSOLUTE(tex_bg_dshuttrl_DATA_END - tex_bg_dshuttrl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_dshuttrl);
    tex_bg_dshuttrl_ROM_END = __romPos;
    tex_bg_dshuttrl_VRAM_END = .;

    tex_bg_dshuttrr_ROM_START = __romPos;
    tex_bg_dshuttrr_VRAM = ADDR(.tex_bg_dshuttrr);
    .tex_bg_dshuttrr : AT(tex_bg_dshuttrr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_dshuttrr_DATA_START = .;
        build/assets/smt1/data/tex/bg/dshuttrr.o(.data);
        tex_bg_dshuttrr_DATA_END = .;
        tex_bg_dshuttrr_DATA_SIZE = ABSOLUTE(tex_bg_dshuttrr_DATA_END - tex_bg_dshuttrr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_dshuttrr);
    tex_bg_dshuttrr_ROM_END = __romPos;
    tex_bg_dshuttrr_VRAM_END = .;

    tex_bg_grooml_ROM_START = __romPos;
    tex_bg_grooml_VRAM = ADDR(.tex_bg_grooml);
    .tex_bg_grooml : AT(tex_bg_grooml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_grooml_DATA_START = .;
        build/assets/smt1/data/tex/bg/grooml.o(.data);
        tex_bg_grooml_DATA_END = .;
        tex_bg_grooml_DATA_SIZE = ABSOLUTE(tex_bg_grooml_DATA_END - tex_bg_grooml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_grooml);
    tex_bg_grooml_ROM_END = __romPos;
    tex_bg_grooml_VRAM_END = .;

    tex_bg_groomr_ROM_START = __romPos;
    tex_bg_groomr_VRAM = ADDR(.tex_bg_groomr);
    .tex_bg_groomr : AT(tex_bg_groomr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_groomr_DATA_START = .;
        build/assets/smt1/data/tex/bg/groomr.o(.data);
        tex_bg_groomr_DATA_END = .;
        tex_bg_groomr_DATA_SIZE = ABSOLUTE(tex_bg_groomr_DATA_END - tex_bg_groomr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_groomr);
    tex_bg_groomr_ROM_END = __romPos;
    tex_bg_groomr_VRAM_END = .;

    tex_bg_embassyl_ROM_START = __romPos;
    tex_bg_embassyl_VRAM = ADDR(.tex_bg_embassyl);
    .tex_bg_embassyl : AT(tex_bg_embassyl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_embassyl_DATA_START = .;
        build/assets/smt1/data/tex/bg/embassyl.o(.data);
        tex_bg_embassyl_DATA_END = .;
        tex_bg_embassyl_DATA_SIZE = ABSOLUTE(tex_bg_embassyl_DATA_END - tex_bg_embassyl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_embassyl);
    tex_bg_embassyl_ROM_END = __romPos;
    tex_bg_embassyl_VRAM_END = .;

    tex_bg_embassyr_ROM_START = __romPos;
    tex_bg_embassyr_VRAM = ADDR(.tex_bg_embassyr);
    .tex_bg_embassyr : AT(tex_bg_embassyr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_embassyr_DATA_START = .;
        build/assets/smt1/data/tex/bg/embassyr.o(.data);
        tex_bg_embassyr_DATA_END = .;
        tex_bg_embassyr_DATA_SIZE = ABSOLUTE(tex_bg_embassyr_DATA_END - tex_bg_embassyr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_embassyr);
    tex_bg_embassyr_ROM_END = __romPos;
    tex_bg_embassyr_VRAM_END = .;

    tex_bg_st0l_ROM_START = __romPos;
    tex_bg_st0l_VRAM = ADDR(.tex_bg_st0l);
    .tex_bg_st0l : AT(tex_bg_st0l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_st0l_DATA_START = .;
        build/assets/smt1/data/tex/bg/st0l.o(.data);
        tex_bg_st0l_DATA_END = .;
        tex_bg_st0l_DATA_SIZE = ABSOLUTE(tex_bg_st0l_DATA_END - tex_bg_st0l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_st0l);
    tex_bg_st0l_ROM_END = __romPos;
    tex_bg_st0l_VRAM_END = .;

    tex_bg_st0r_ROM_START = __romPos;
    tex_bg_st0r_VRAM = ADDR(.tex_bg_st0r);
    .tex_bg_st0r : AT(tex_bg_st0r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_st0r_DATA_START = .;
        build/assets/smt1/data/tex/bg/st0r.o(.data);
        tex_bg_st0r_DATA_END = .;
        tex_bg_st0r_DATA_SIZE = ABSOLUTE(tex_bg_st0r_DATA_END - tex_bg_st0r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_st0r);
    tex_bg_st0r_ROM_END = __romPos;
    tex_bg_st0r_VRAM_END = .;

    tex_bg_lakel_ROM_START = __romPos;
    tex_bg_lakel_VRAM = ADDR(.tex_bg_lakel);
    .tex_bg_lakel : AT(tex_bg_lakel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_lakel_DATA_START = .;
        build/assets/smt1/data/tex/bg/lakel.o(.data);
        tex_bg_lakel_DATA_END = .;
        tex_bg_lakel_DATA_SIZE = ABSOLUTE(tex_bg_lakel_DATA_END - tex_bg_lakel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_lakel);
    tex_bg_lakel_ROM_END = __romPos;
    tex_bg_lakel_VRAM_END = .;

    tex_bg_laker_ROM_START = __romPos;
    tex_bg_laker_VRAM = ADDR(.tex_bg_laker);
    .tex_bg_laker : AT(tex_bg_laker_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_laker_DATA_START = .;
        build/assets/smt1/data/tex/bg/laker.o(.data);
        tex_bg_laker_DATA_END = .;
        tex_bg_laker_DATA_SIZE = ABSOLUTE(tex_bg_laker_DATA_END - tex_bg_laker_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_laker);
    tex_bg_laker_ROM_END = __romPos;
    tex_bg_laker_VRAM_END = .;

    tex_bg_cereml_ROM_START = __romPos;
    tex_bg_cereml_VRAM = ADDR(.tex_bg_cereml);
    .tex_bg_cereml : AT(tex_bg_cereml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_cereml_DATA_START = .;
        build/assets/smt1/data/tex/bg/cereml.o(.data);
        tex_bg_cereml_DATA_END = .;
        tex_bg_cereml_DATA_SIZE = ABSOLUTE(tex_bg_cereml_DATA_END - tex_bg_cereml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_cereml);
    tex_bg_cereml_ROM_END = __romPos;
    tex_bg_cereml_VRAM_END = .;

    tex_bg_ceremr_ROM_START = __romPos;
    tex_bg_ceremr_VRAM = ADDR(.tex_bg_ceremr);
    .tex_bg_ceremr : AT(tex_bg_ceremr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_ceremr_DATA_START = .;
        build/assets/smt1/data/tex/bg/ceremr.o(.data);
        tex_bg_ceremr_DATA_END = .;
        tex_bg_ceremr_DATA_SIZE = ABSOLUTE(tex_bg_ceremr_DATA_END - tex_bg_ceremr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_ceremr);
    tex_bg_ceremr_ROM_END = __romPos;
    tex_bg_ceremr_VRAM_END = .;

    tex_bg_shrinel_ROM_START = __romPos;
    tex_bg_shrinel_VRAM = ADDR(.tex_bg_shrinel);
    .tex_bg_shrinel : AT(tex_bg_shrinel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_shrinel_DATA_START = .;
        build/assets/smt1/data/tex/bg/shrinel.o(.data);
        tex_bg_shrinel_DATA_END = .;
        tex_bg_shrinel_DATA_SIZE = ABSOLUTE(tex_bg_shrinel_DATA_END - tex_bg_shrinel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_shrinel);
    tex_bg_shrinel_ROM_END = __romPos;
    tex_bg_shrinel_VRAM_END = .;

    tex_bg_shriner_ROM_START = __romPos;
    tex_bg_shriner_VRAM = ADDR(.tex_bg_shriner);
    .tex_bg_shriner : AT(tex_bg_shriner_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_shriner_DATA_START = .;
        build/assets/smt1/data/tex/bg/shriner.o(.data);
        tex_bg_shriner_DATA_END = .;
        tex_bg_shriner_DATA_SIZE = ABSOLUTE(tex_bg_shriner_DATA_END - tex_bg_shriner_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_shriner);
    tex_bg_shriner_ROM_END = __romPos;
    tex_bg_shriner_VRAM_END = .;

    tex_bg_endl_ROM_START = __romPos;
    tex_bg_endl_VRAM = ADDR(.tex_bg_endl);
    .tex_bg_endl : AT(tex_bg_endl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_endl_DATA_START = .;
        build/assets/smt1/data/tex/bg/endl.o(.data);
        tex_bg_endl_DATA_END = .;
        tex_bg_endl_DATA_SIZE = ABSOLUTE(tex_bg_endl_DATA_END - tex_bg_endl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_endl);
    tex_bg_endl_ROM_END = __romPos;
    tex_bg_endl_VRAM_END = .;

    tex_bg_endr_ROM_START = __romPos;
    tex_bg_endr_VRAM = ADDR(.tex_bg_endr);
    .tex_bg_endr : AT(tex_bg_endr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_endr_DATA_START = .;
        build/assets/smt1/data/tex/bg/endr.o(.data);
        tex_bg_endr_DATA_END = .;
        tex_bg_endr_DATA_SIZE = ABSOLUTE(tex_bg_endr_DATA_END - tex_bg_endr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_endr);
    tex_bg_endr_ROM_END = __romPos;
    tex_bg_endr_VRAM_END = .;

    tex_bg_chikyul_ROM_START = __romPos;
    tex_bg_chikyul_VRAM = ADDR(.tex_bg_chikyul);
    .tex_bg_chikyul : AT(tex_bg_chikyul_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_chikyul_DATA_START = .;
        build/assets/smt1/data/tex/bg/chikyul.o(.data);
        tex_bg_chikyul_DATA_END = .;
        tex_bg_chikyul_DATA_SIZE = ABSOLUTE(tex_bg_chikyul_DATA_END - tex_bg_chikyul_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_chikyul);
    tex_bg_chikyul_ROM_END = __romPos;
    tex_bg_chikyul_VRAM_END = .;

    tex_bg_chikyur_ROM_START = __romPos;
    tex_bg_chikyur_VRAM = ADDR(.tex_bg_chikyur);
    .tex_bg_chikyur : AT(tex_bg_chikyur_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_chikyur_DATA_START = .;
        build/assets/smt1/data/tex/bg/chikyur.o(.data);
        tex_bg_chikyur_DATA_END = .;
        tex_bg_chikyur_DATA_SIZE = ABSOLUTE(tex_bg_chikyur_DATA_END - tex_bg_chikyur_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_chikyur);
    tex_bg_chikyur_ROM_END = __romPos;
    tex_bg_chikyur_VRAM_END = .;

    tex_bg_galaxyl_ROM_START = __romPos;
    tex_bg_galaxyl_VRAM = ADDR(.tex_bg_galaxyl);
    .tex_bg_galaxyl : AT(tex_bg_galaxyl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_galaxyl_DATA_START = .;
        build/assets/smt1/data/tex/bg/galaxyl.o(.data);
        tex_bg_galaxyl_DATA_END = .;
        tex_bg_galaxyl_DATA_SIZE = ABSOLUTE(tex_bg_galaxyl_DATA_END - tex_bg_galaxyl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_galaxyl);
    tex_bg_galaxyl_ROM_END = __romPos;
    tex_bg_galaxyl_VRAM_END = .;

    tex_bg_galaxyr_ROM_START = __romPos;
    tex_bg_galaxyr_VRAM = ADDR(.tex_bg_galaxyr);
    .tex_bg_galaxyr : AT(tex_bg_galaxyr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_galaxyr_DATA_START = .;
        build/assets/smt1/data/tex/bg/galaxyr.o(.data);
        tex_bg_galaxyr_DATA_END = .;
        tex_bg_galaxyr_DATA_SIZE = ABSOLUTE(tex_bg_galaxyr_DATA_END - tex_bg_galaxyr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_galaxyr);
    tex_bg_galaxyr_ROM_END = __romPos;
    tex_bg_galaxyr_VRAM_END = .;

    tex_bg_bar1l_ROM_START = __romPos;
    tex_bg_bar1l_VRAM = ADDR(.tex_bg_bar1l);
    .tex_bg_bar1l : AT(tex_bg_bar1l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_bar1l_DATA_START = .;
        build/assets/smt1/data/tex/bg/bar1l.o(.data);
        tex_bg_bar1l_DATA_END = .;
        tex_bg_bar1l_DATA_SIZE = ABSOLUTE(tex_bg_bar1l_DATA_END - tex_bg_bar1l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_bar1l);
    tex_bg_bar1l_ROM_END = __romPos;
    tex_bg_bar1l_VRAM_END = .;

    tex_bg_bar1r_ROM_START = __romPos;
    tex_bg_bar1r_VRAM = ADDR(.tex_bg_bar1r);
    .tex_bg_bar1r : AT(tex_bg_bar1r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_bar1r_DATA_START = .;
        build/assets/smt1/data/tex/bg/bar1r.o(.data);
        tex_bg_bar1r_DATA_END = .;
        tex_bg_bar1r_DATA_SIZE = ABSOLUTE(tex_bg_bar1r_DATA_END - tex_bg_bar1r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_bar1r);
    tex_bg_bar1r_ROM_END = __romPos;
    tex_bg_bar1r_VRAM_END = .;

    tex_bg_bar2l_ROM_START = __romPos;
    tex_bg_bar2l_VRAM = ADDR(.tex_bg_bar2l);
    .tex_bg_bar2l : AT(tex_bg_bar2l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_bar2l_DATA_START = .;
        build/assets/smt1/data/tex/bg/bar2l.o(.data);
        tex_bg_bar2l_DATA_END = .;
        tex_bg_bar2l_DATA_SIZE = ABSOLUTE(tex_bg_bar2l_DATA_END - tex_bg_bar2l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_bar2l);
    tex_bg_bar2l_ROM_END = __romPos;
    tex_bg_bar2l_VRAM_END = .;

    tex_bg_bar2r_ROM_START = __romPos;
    tex_bg_bar2r_VRAM = ADDR(.tex_bg_bar2r);
    .tex_bg_bar2r : AT(tex_bg_bar2r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_bar2r_DATA_START = .;
        build/assets/smt1/data/tex/bg/bar2r.o(.data);
        tex_bg_bar2r_DATA_END = .;
        tex_bg_bar2r_DATA_SIZE = ABSOLUTE(tex_bg_bar2r_DATA_END - tex_bg_bar2r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_bar2r);
    tex_bg_bar2r_ROM_END = __romPos;
    tex_bg_bar2r_VRAM_END = .;

    tex_bg_antiquel_ROM_START = __romPos;
    tex_bg_antiquel_VRAM = ADDR(.tex_bg_antiquel);
    .tex_bg_antiquel : AT(tex_bg_antiquel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_antiquel_DATA_START = .;
        build/assets/smt1/data/tex/bg/antiquel.o(.data);
        tex_bg_antiquel_DATA_END = .;
        tex_bg_antiquel_DATA_SIZE = ABSOLUTE(tex_bg_antiquel_DATA_END - tex_bg_antiquel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_antiquel);
    tex_bg_antiquel_ROM_END = __romPos;
    tex_bg_antiquel_VRAM_END = .;

    tex_bg_antiquer_ROM_START = __romPos;
    tex_bg_antiquer_VRAM = ADDR(.tex_bg_antiquer);
    .tex_bg_antiquer : AT(tex_bg_antiquer_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_antiquer_DATA_START = .;
        build/assets/smt1/data/tex/bg/antiquer.o(.data);
        tex_bg_antiquer_DATA_END = .;
        tex_bg_antiquer_DATA_SIZE = ABSOLUTE(tex_bg_antiquer_DATA_END - tex_bg_antiquer_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_antiquer);
    tex_bg_antiquer_ROM_END = __romPos;
    tex_bg_antiquer_VRAM_END = .;

    tex_bg_drugl_ROM_START = __romPos;
    tex_bg_drugl_VRAM = ADDR(.tex_bg_drugl);
    .tex_bg_drugl : AT(tex_bg_drugl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_drugl_DATA_START = .;
        build/assets/smt1/data/tex/bg/drugl.o(.data);
        tex_bg_drugl_DATA_END = .;
        tex_bg_drugl_DATA_SIZE = ABSOLUTE(tex_bg_drugl_DATA_END - tex_bg_drugl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_drugl);
    tex_bg_drugl_ROM_END = __romPos;
    tex_bg_drugl_VRAM_END = .;

    tex_bg_drugr_ROM_START = __romPos;
    tex_bg_drugr_VRAM = ADDR(.tex_bg_drugr);
    .tex_bg_drugr : AT(tex_bg_drugr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_drugr_DATA_START = .;
        build/assets/smt1/data/tex/bg/drugr.o(.data);
        tex_bg_drugr_DATA_END = .;
        tex_bg_drugr_DATA_SIZE = ABSOLUTE(tex_bg_drugr_DATA_END - tex_bg_drugr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_drugr);
    tex_bg_drugr_ROM_END = __romPos;
    tex_bg_drugr_VRAM_END = .;

    tex_bg_knivel_ROM_START = __romPos;
    tex_bg_knivel_VRAM = ADDR(.tex_bg_knivel);
    .tex_bg_knivel : AT(tex_bg_knivel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_knivel_DATA_START = .;
        build/assets/smt1/data/tex/bg/knivel.o(.data);
        tex_bg_knivel_DATA_END = .;
        tex_bg_knivel_DATA_SIZE = ABSOLUTE(tex_bg_knivel_DATA_END - tex_bg_knivel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_knivel);
    tex_bg_knivel_ROM_END = __romPos;
    tex_bg_knivel_VRAM_END = .;

    tex_bg_kniver_ROM_START = __romPos;
    tex_bg_kniver_VRAM = ADDR(.tex_bg_kniver);
    .tex_bg_kniver : AT(tex_bg_kniver_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_kniver_DATA_START = .;
        build/assets/smt1/data/tex/bg/kniver.o(.data);
        tex_bg_kniver_DATA_END = .;
        tex_bg_kniver_DATA_SIZE = ABSOLUTE(tex_bg_kniver_DATA_END - tex_bg_kniver_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_kniver);
    tex_bg_kniver_ROM_END = __romPos;
    tex_bg_kniver_VRAM_END = .;

    tex_bg_surviv1l_ROM_START = __romPos;
    tex_bg_surviv1l_VRAM = ADDR(.tex_bg_surviv1l);
    .tex_bg_surviv1l : AT(tex_bg_surviv1l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_surviv1l_DATA_START = .;
        build/assets/smt1/data/tex/bg/surviv1l.o(.data);
        tex_bg_surviv1l_DATA_END = .;
        tex_bg_surviv1l_DATA_SIZE = ABSOLUTE(tex_bg_surviv1l_DATA_END - tex_bg_surviv1l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_surviv1l);
    tex_bg_surviv1l_ROM_END = __romPos;
    tex_bg_surviv1l_VRAM_END = .;

    tex_bg_surviv1r_ROM_START = __romPos;
    tex_bg_surviv1r_VRAM = ADDR(.tex_bg_surviv1r);
    .tex_bg_surviv1r : AT(tex_bg_surviv1r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_surviv1r_DATA_START = .;
        build/assets/smt1/data/tex/bg/surviv1r.o(.data);
        tex_bg_surviv1r_DATA_END = .;
        tex_bg_surviv1r_DATA_SIZE = ABSOLUTE(tex_bg_surviv1r_DATA_END - tex_bg_surviv1r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_surviv1r);
    tex_bg_surviv1r_ROM_END = __romPos;
    tex_bg_surviv1r_VRAM_END = .;

    tex_bg_nendl_ROM_START = __romPos;
    tex_bg_nendl_VRAM = ADDR(.tex_bg_nendl);
    .tex_bg_nendl : AT(tex_bg_nendl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_nendl_DATA_START = .;
        build/assets/smt1/data/tex/bg/nendl.o(.data);
        tex_bg_nendl_DATA_END = .;
        tex_bg_nendl_DATA_SIZE = ABSOLUTE(tex_bg_nendl_DATA_END - tex_bg_nendl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_nendl);
    tex_bg_nendl_ROM_END = __romPos;
    tex_bg_nendl_VRAM_END = .;

    tex_bg_nendr_ROM_START = __romPos;
    tex_bg_nendr_VRAM = ADDR(.tex_bg_nendr);
    .tex_bg_nendr : AT(tex_bg_nendr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_nendr_DATA_START = .;
        build/assets/smt1/data/tex/bg/nendr.o(.data);
        tex_bg_nendr_DATA_END = .;
        tex_bg_nendr_DATA_SIZE = ABSOLUTE(tex_bg_nendr_DATA_END - tex_bg_nendr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_nendr);
    tex_bg_nendr_ROM_END = __romPos;
    tex_bg_nendr_VRAM_END = .;

    tex_bg_wasitul_ROM_START = __romPos;
    tex_bg_wasitul_VRAM = ADDR(.tex_bg_wasitul);
    .tex_bg_wasitul : AT(tex_bg_wasitul_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_wasitul_DATA_START = .;
        build/assets/smt1/data/tex/bg/wasitul.o(.data);
        tex_bg_wasitul_DATA_END = .;
        tex_bg_wasitul_DATA_SIZE = ABSOLUTE(tex_bg_wasitul_DATA_END - tex_bg_wasitul_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_wasitul);
    tex_bg_wasitul_ROM_END = __romPos;
    tex_bg_wasitul_VRAM_END = .;

    tex_bg_wasitur_ROM_START = __romPos;
    tex_bg_wasitur_VRAM = ADDR(.tex_bg_wasitur);
    .tex_bg_wasitur : AT(tex_bg_wasitur_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_wasitur_DATA_START = .;
        build/assets/smt1/data/tex/bg/wasitur.o(.data);
        tex_bg_wasitur_DATA_END = .;
        tex_bg_wasitur_DATA_SIZE = ABSOLUTE(tex_bg_wasitur_DATA_END - tex_bg_wasitur_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_wasitur);
    tex_bg_wasitur_ROM_END = __romPos;
    tex_bg_wasitur_VRAM_END = .;

    tex_bg_sibuya1l_ROM_START = __romPos;
    tex_bg_sibuya1l_VRAM = ADDR(.tex_bg_sibuya1l);
    .tex_bg_sibuya1l : AT(tex_bg_sibuya1l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_sibuya1l_DATA_START = .;
        build/assets/smt1/data/tex/bg/sibuya1l.o(.data);
        tex_bg_sibuya1l_DATA_END = .;
        tex_bg_sibuya1l_DATA_SIZE = ABSOLUTE(tex_bg_sibuya1l_DATA_END - tex_bg_sibuya1l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_sibuya1l);
    tex_bg_sibuya1l_ROM_END = __romPos;
    tex_bg_sibuya1l_VRAM_END = .;

    tex_bg_sibuya1r_ROM_START = __romPos;
    tex_bg_sibuya1r_VRAM = ADDR(.tex_bg_sibuya1r);
    .tex_bg_sibuya1r : AT(tex_bg_sibuya1r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_sibuya1r_DATA_START = .;
        build/assets/smt1/data/tex/bg/sibuya1r.o(.data);
        tex_bg_sibuya1r_DATA_END = .;
        tex_bg_sibuya1r_DATA_SIZE = ABSOLUTE(tex_bg_sibuya1r_DATA_END - tex_bg_sibuya1r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_sibuya1r);
    tex_bg_sibuya1r_ROM_END = __romPos;
    tex_bg_sibuya1r_VRAM_END = .;

    tex_bg_exect1l_ROM_START = __romPos;
    tex_bg_exect1l_VRAM = ADDR(.tex_bg_exect1l);
    .tex_bg_exect1l : AT(tex_bg_exect1l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_exect1l_DATA_START = .;
        build/assets/smt1/data/tex/bg/exect1l.o(.data);
        tex_bg_exect1l_DATA_END = .;
        tex_bg_exect1l_DATA_SIZE = ABSOLUTE(tex_bg_exect1l_DATA_END - tex_bg_exect1l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_exect1l);
    tex_bg_exect1l_ROM_END = __romPos;
    tex_bg_exect1l_VRAM_END = .;

    tex_bg_exect1r_ROM_START = __romPos;
    tex_bg_exect1r_VRAM = ADDR(.tex_bg_exect1r);
    .tex_bg_exect1r : AT(tex_bg_exect1r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_exect1r_DATA_START = .;
        build/assets/smt1/data/tex/bg/exect1r.o(.data);
        tex_bg_exect1r_DATA_END = .;
        tex_bg_exect1r_DATA_SIZE = ABSOLUTE(tex_bg_exect1r_DATA_END - tex_bg_exect1r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_exect1r);
    tex_bg_exect1r_ROM_END = __romPos;
    tex_bg_exect1r_VRAM_END = .;

    tex_bg_exect2l_ROM_START = __romPos;
    tex_bg_exect2l_VRAM = ADDR(.tex_bg_exect2l);
    .tex_bg_exect2l : AT(tex_bg_exect2l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_exect2l_DATA_START = .;
        build/assets/smt1/data/tex/bg/exect2l.o(.data);
        tex_bg_exect2l_DATA_END = .;
        tex_bg_exect2l_DATA_SIZE = ABSOLUTE(tex_bg_exect2l_DATA_END - tex_bg_exect2l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_exect2l);
    tex_bg_exect2l_ROM_END = __romPos;
    tex_bg_exect2l_VRAM_END = .;

    tex_bg_exect2r_ROM_START = __romPos;
    tex_bg_exect2r_VRAM = ADDR(.tex_bg_exect2r);
    .tex_bg_exect2r : AT(tex_bg_exect2r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_exect2r_DATA_START = .;
        build/assets/smt1/data/tex/bg/exect2r.o(.data);
        tex_bg_exect2r_DATA_END = .;
        tex_bg_exect2r_DATA_SIZE = ABSOLUTE(tex_bg_exect2r_DATA_END - tex_bg_exect2r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_exect2r);
    tex_bg_exect2r_ROM_END = __romPos;
    tex_bg_exect2r_VRAM_END = .;

    tex_bg_sibuya2l_ROM_START = __romPos;
    tex_bg_sibuya2l_VRAM = ADDR(.tex_bg_sibuya2l);
    .tex_bg_sibuya2l : AT(tex_bg_sibuya2l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_sibuya2l_DATA_START = .;
        build/assets/smt1/data/tex/bg/sibuya2l.o(.data);
        tex_bg_sibuya2l_DATA_END = .;
        tex_bg_sibuya2l_DATA_SIZE = ABSOLUTE(tex_bg_sibuya2l_DATA_END - tex_bg_sibuya2l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_sibuya2l);
    tex_bg_sibuya2l_ROM_END = __romPos;
    tex_bg_sibuya2l_VRAM_END = .;

    tex_bg_sibuya2r_ROM_START = __romPos;
    tex_bg_sibuya2r_VRAM = ADDR(.tex_bg_sibuya2r);
    .tex_bg_sibuya2r : AT(tex_bg_sibuya2r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_sibuya2r_DATA_START = .;
        build/assets/smt1/data/tex/bg/sibuya2r.o(.data);
        tex_bg_sibuya2r_DATA_END = .;
        tex_bg_sibuya2r_DATA_SIZE = ABSOLUTE(tex_bg_sibuya2r_DATA_END - tex_bg_sibuya2r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_sibuya2r);
    tex_bg_sibuya2r_ROM_END = __romPos;
    tex_bg_sibuya2r_VRAM_END = .;

    tex_bg_tkrooml_ROM_START = __romPos;
    tex_bg_tkrooml_VRAM = ADDR(.tex_bg_tkrooml);
    .tex_bg_tkrooml : AT(tex_bg_tkrooml_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_tkrooml_DATA_START = .;
        build/assets/smt1/data/tex/bg/tkrooml.o(.data);
        tex_bg_tkrooml_DATA_END = .;
        tex_bg_tkrooml_DATA_SIZE = ABSOLUTE(tex_bg_tkrooml_DATA_END - tex_bg_tkrooml_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_tkrooml);
    tex_bg_tkrooml_ROM_END = __romPos;
    tex_bg_tkrooml_VRAM_END = .;

    tex_bg_tkroomr_ROM_START = __romPos;
    tex_bg_tkroomr_VRAM = ADDR(.tex_bg_tkroomr);
    .tex_bg_tkroomr : AT(tex_bg_tkroomr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_tkroomr_DATA_START = .;
        build/assets/smt1/data/tex/bg/tkroomr.o(.data);
        tex_bg_tkroomr_DATA_END = .;
        tex_bg_tkroomr_DATA_SIZE = ABSOLUTE(tex_bg_tkroomr_DATA_END - tex_bg_tkroomr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_tkroomr);
    tex_bg_tkroomr_ROM_END = __romPos;
    tex_bg_tkroomr_VRAM_END = .;

    tex_bg_junkl_ROM_START = __romPos;
    tex_bg_junkl_VRAM = ADDR(.tex_bg_junkl);
    .tex_bg_junkl : AT(tex_bg_junkl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_junkl_DATA_START = .;
        build/assets/smt1/data/tex/bg/junkl.o(.data);
        tex_bg_junkl_DATA_END = .;
        tex_bg_junkl_DATA_SIZE = ABSOLUTE(tex_bg_junkl_DATA_END - tex_bg_junkl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_junkl);
    tex_bg_junkl_ROM_END = __romPos;
    tex_bg_junkl_VRAM_END = .;

    tex_bg_junkr_ROM_START = __romPos;
    tex_bg_junkr_VRAM = ADDR(.tex_bg_junkr);
    .tex_bg_junkr : AT(tex_bg_junkr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_junkr_DATA_START = .;
        build/assets/smt1/data/tex/bg/junkr.o(.data);
        tex_bg_junkr_DATA_END = .;
        tex_bg_junkr_DATA_SIZE = ABSOLUTE(tex_bg_junkr_DATA_END - tex_bg_junkr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_junkr);
    tex_bg_junkr_ROM_END = __romPos;
    tex_bg_junkr_VRAM_END = .;

    tex_bg_gunl_ROM_START = __romPos;
    tex_bg_gunl_VRAM = ADDR(.tex_bg_gunl);
    .tex_bg_gunl : AT(tex_bg_gunl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gunl_DATA_START = .;
        build/assets/smt1/data/tex/bg/gunl.o(.data);
        tex_bg_gunl_DATA_END = .;
        tex_bg_gunl_DATA_SIZE = ABSOLUTE(tex_bg_gunl_DATA_END - tex_bg_gunl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gunl);
    tex_bg_gunl_ROM_END = __romPos;
    tex_bg_gunl_VRAM_END = .;

    tex_bg_gunr_ROM_START = __romPos;
    tex_bg_gunr_VRAM = ADDR(.tex_bg_gunr);
    .tex_bg_gunr : AT(tex_bg_gunr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gunr_DATA_START = .;
        build/assets/smt1/data/tex/bg/gunr.o(.data);
        tex_bg_gunr_DATA_END = .;
        tex_bg_gunr_DATA_SIZE = ABSOLUTE(tex_bg_gunr_DATA_END - tex_bg_gunr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gunr);
    tex_bg_gunr_ROM_END = __romPos;
    tex_bg_gunr_VRAM_END = .;

    tex_bg_surviv2l_ROM_START = __romPos;
    tex_bg_surviv2l_VRAM = ADDR(.tex_bg_surviv2l);
    .tex_bg_surviv2l : AT(tex_bg_surviv2l_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_surviv2l_DATA_START = .;
        build/assets/smt1/data/tex/bg/surviv2l.o(.data);
        tex_bg_surviv2l_DATA_END = .;
        tex_bg_surviv2l_DATA_SIZE = ABSOLUTE(tex_bg_surviv2l_DATA_END - tex_bg_surviv2l_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_surviv2l);
    tex_bg_surviv2l_ROM_END = __romPos;
    tex_bg_surviv2l_VRAM_END = .;

    tex_bg_surviv2r_ROM_START = __romPos;
    tex_bg_surviv2r_VRAM = ADDR(.tex_bg_surviv2r);
    .tex_bg_surviv2r : AT(tex_bg_surviv2r_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_surviv2r_DATA_START = .;
        build/assets/smt1/data/tex/bg/surviv2r.o(.data);
        tex_bg_surviv2r_DATA_END = .;
        tex_bg_surviv2r_DATA_SIZE = ABSOLUTE(tex_bg_surviv2r_DATA_END - tex_bg_surviv2r_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_surviv2r);
    tex_bg_surviv2r_ROM_END = __romPos;
    tex_bg_surviv2r_VRAM_END = .;

    tex_bg_shopl_ROM_START = __romPos;
    tex_bg_shopl_VRAM = ADDR(.tex_bg_shopl);
    .tex_bg_shopl : AT(tex_bg_shopl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_shopl_DATA_START = .;
        build/assets/smt1/data/tex/bg/shopl.o(.data);
        tex_bg_shopl_DATA_END = .;
        tex_bg_shopl_DATA_SIZE = ABSOLUTE(tex_bg_shopl_DATA_END - tex_bg_shopl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_shopl);
    tex_bg_shopl_ROM_END = __romPos;
    tex_bg_shopl_VRAM_END = .;

    tex_bg_shopr_ROM_START = __romPos;
    tex_bg_shopr_VRAM = ADDR(.tex_bg_shopr);
    .tex_bg_shopr : AT(tex_bg_shopr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_shopr_DATA_START = .;
        build/assets/smt1/data/tex/bg/shopr.o(.data);
        tex_bg_shopr_DATA_END = .;
        tex_bg_shopr_DATA_SIZE = ABSOLUTE(tex_bg_shopr_DATA_END - tex_bg_shopr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_shopr);
    tex_bg_shopr_ROM_END = __romPos;
    tex_bg_shopr_VRAM_END = .;

    tex_bg_palacel_ROM_START = __romPos;
    tex_bg_palacel_VRAM = ADDR(.tex_bg_palacel);
    .tex_bg_palacel : AT(tex_bg_palacel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_palacel_DATA_START = .;
        build/assets/smt1/data/tex/bg/palacel.o(.data);
        tex_bg_palacel_DATA_END = .;
        tex_bg_palacel_DATA_SIZE = ABSOLUTE(tex_bg_palacel_DATA_END - tex_bg_palacel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_palacel);
    tex_bg_palacel_ROM_END = __romPos;
    tex_bg_palacel_VRAM_END = .;

    tex_bg_palacer_ROM_START = __romPos;
    tex_bg_palacer_VRAM = ADDR(.tex_bg_palacer);
    .tex_bg_palacer : AT(tex_bg_palacer_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_palacer_DATA_START = .;
        build/assets/smt1/data/tex/bg/palacer.o(.data);
        tex_bg_palacer_DATA_END = .;
        tex_bg_palacer_DATA_SIZE = ABSOLUTE(tex_bg_palacer_DATA_END - tex_bg_palacer_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_palacer);
    tex_bg_palacer_ROM_END = __romPos;
    tex_bg_palacer_VRAM_END = .;

    tex_bg_prisonl_ROM_START = __romPos;
    tex_bg_prisonl_VRAM = ADDR(.tex_bg_prisonl);
    .tex_bg_prisonl : AT(tex_bg_prisonl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_prisonl_DATA_START = .;
        build/assets/smt1/data/tex/bg/prisonl.o(.data);
        tex_bg_prisonl_DATA_END = .;
        tex_bg_prisonl_DATA_SIZE = ABSOLUTE(tex_bg_prisonl_DATA_END - tex_bg_prisonl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_prisonl);
    tex_bg_prisonl_ROM_END = __romPos;
    tex_bg_prisonl_VRAM_END = .;

    tex_bg_prisonr_ROM_START = __romPos;
    tex_bg_prisonr_VRAM = ADDR(.tex_bg_prisonr);
    .tex_bg_prisonr : AT(tex_bg_prisonr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_prisonr_DATA_START = .;
        build/assets/smt1/data/tex/bg/prisonr.o(.data);
        tex_bg_prisonr_DATA_END = .;
        tex_bg_prisonr_DATA_SIZE = ABSOLUTE(tex_bg_prisonr_DATA_END - tex_bg_prisonr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_prisonr);
    tex_bg_prisonr_ROM_END = __romPos;
    tex_bg_prisonr_VRAM_END = .;

    tex_bg_constrl_ROM_START = __romPos;
    tex_bg_constrl_VRAM = ADDR(.tex_bg_constrl);
    .tex_bg_constrl : AT(tex_bg_constrl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_constrl_DATA_START = .;
        build/assets/smt1/data/tex/bg/constrl.o(.data);
        tex_bg_constrl_DATA_END = .;
        tex_bg_constrl_DATA_SIZE = ABSOLUTE(tex_bg_constrl_DATA_END - tex_bg_constrl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_constrl);
    tex_bg_constrl_ROM_END = __romPos;
    tex_bg_constrl_VRAM_END = .;

    tex_bg_constrr_ROM_START = __romPos;
    tex_bg_constrr_VRAM = ADDR(.tex_bg_constrr);
    .tex_bg_constrr : AT(tex_bg_constrr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_constrr_DATA_START = .;
        build/assets/smt1/data/tex/bg/constrr.o(.data);
        tex_bg_constrr_DATA_END = .;
        tex_bg_constrr_DATA_SIZE = ABSOLUTE(tex_bg_constrr_DATA_END - tex_bg_constrr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_constrr);
    tex_bg_constrr_ROM_END = __romPos;
    tex_bg_constrr_VRAM_END = .;

    tex_bg_thronel_ROM_START = __romPos;
    tex_bg_thronel_VRAM = ADDR(.tex_bg_thronel);
    .tex_bg_thronel : AT(tex_bg_thronel_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_thronel_DATA_START = .;
        build/assets/smt1/data/tex/bg/thronel.o(.data);
        tex_bg_thronel_DATA_END = .;
        tex_bg_thronel_DATA_SIZE = ABSOLUTE(tex_bg_thronel_DATA_END - tex_bg_thronel_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_thronel);
    tex_bg_thronel_ROM_END = __romPos;
    tex_bg_thronel_VRAM_END = .;

    tex_bg_throner_ROM_START = __romPos;
    tex_bg_throner_VRAM = ADDR(.tex_bg_throner);
    .tex_bg_throner : AT(tex_bg_throner_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_throner_DATA_START = .;
        build/assets/smt1/data/tex/bg/throner.o(.data);
        tex_bg_throner_DATA_END = .;
        tex_bg_throner_DATA_SIZE = ABSOLUTE(tex_bg_throner_DATA_END - tex_bg_throner_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_throner);
    tex_bg_throner_ROM_END = __romPos;
    tex_bg_throner_VRAM_END = .;

    seq_effect_ROM_START = __romPos;
    seq_effect_VRAM = ADDR(.seq_effect);
    .seq_effect : AT(seq_effect_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_effect_DATA_START = .;
        build/assets/smt1/data/seq/effect.o(.data);
        seq_effect_DATA_END = .;
        seq_effect_DATA_SIZE = ABSOLUTE(seq_effect_DATA_END - seq_effect_DATA_START);
    }
    __romPos += SIZEOF(.seq_effect);
    seq_effect_ROM_END = __romPos;
    seq_effect_VRAM_END = .;

    seq_mus_open_ROM_START = __romPos;
    seq_mus_open_VRAM = ADDR(.seq_mus_open);
    .seq_mus_open : AT(seq_mus_open_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_open_DATA_START = .;
        build/assets/smt1/data/seq/mus/open.o(.data);
        seq_mus_open_DATA_END = .;
        seq_mus_open_DATA_SIZE = ABSOLUTE(seq_mus_open_DATA_END - seq_mus_open_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_open);
    seq_mus_open_ROM_END = __romPos;
    seq_mus_open_VRAM_END = .;

    seq_mus_title_ROM_START = __romPos;
    seq_mus_title_VRAM = ADDR(.seq_mus_title);
    .seq_mus_title : AT(seq_mus_title_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_title_DATA_START = .;
        build/assets/smt1/data/seq/mus/title.o(.data);
        seq_mus_title_DATA_END = .;
        seq_mus_title_DATA_SIZE = ABSOLUTE(seq_mus_title_DATA_END - seq_mus_title_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_title);
    seq_mus_title_ROM_END = __romPos;
    seq_mus_title_VRAM_END = .;

    seq_mus_dream_ROM_START = __romPos;
    seq_mus_dream_VRAM = ADDR(.seq_mus_dream);
    .seq_mus_dream : AT(seq_mus_dream_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_dream_DATA_START = .;
        build/assets/smt1/data/seq/mus/dream.o(.data);
        seq_mus_dream_DATA_END = .;
        seq_mus_dream_DATA_SIZE = ABSOLUTE(seq_mus_dream_DATA_END - seq_mus_dream_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_dream);
    seq_mus_dream_ROM_END = __romPos;
    seq_mus_dream_VRAM_END = .;

    seq_mus_home_ROM_START = __romPos;
    seq_mus_home_VRAM = ADDR(.seq_mus_home);
    .seq_mus_home : AT(seq_mus_home_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_home_DATA_START = .;
        build/assets/smt1/data/seq/mus/home.o(.data);
        seq_mus_home_DATA_END = .;
        seq_mus_home_DATA_SIZE = ABSOLUTE(seq_mus_home_DATA_END - seq_mus_home_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_home);
    seq_mus_home_ROM_END = __romPos;
    seq_mus_home_VRAM_END = .;

    seq_mus_kichijoj_ROM_START = __romPos;
    seq_mus_kichijoj_VRAM = ADDR(.seq_mus_kichijoj);
    .seq_mus_kichijoj : AT(seq_mus_kichijoj_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_kichijoj_DATA_START = .;
        build/assets/smt1/data/seq/mus/kichijoj.o(.data);
        seq_mus_kichijoj_DATA_END = .;
        seq_mus_kichijoj_DATA_SIZE = ABSOLUTE(seq_mus_kichijoj_DATA_END - seq_mus_kichijoj_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_kichijoj);
    seq_mus_kichijoj_ROM_END = __romPos;
    seq_mus_kichijoj_VRAM_END = .;

    seq_mus_arcade_ROM_START = __romPos;
    seq_mus_arcade_VRAM = ADDR(.seq_mus_arcade);
    .seq_mus_arcade : AT(seq_mus_arcade_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_arcade_DATA_START = .;
        build/assets/smt1/data/seq/mus/arcade.o(.data);
        seq_mus_arcade_DATA_END = .;
        seq_mus_arcade_DATA_SIZE = ABSOLUTE(seq_mus_arcade_DATA_END - seq_mus_arcade_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_arcade);
    seq_mus_arcade_ROM_END = __romPos;
    seq_mus_arcade_VRAM_END = .;

    seq_mus_neutral_ROM_START = __romPos;
    seq_mus_neutral_VRAM = ADDR(.seq_mus_neutral);
    .seq_mus_neutral : AT(seq_mus_neutral_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_neutral_DATA_START = .;
        build/assets/smt1/data/seq/mus/neutral.o(.data);
        seq_mus_neutral_DATA_END = .;
        seq_mus_neutral_DATA_SIZE = ABSOLUTE(seq_mus_neutral_DATA_END - seq_mus_neutral_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_neutral);
    seq_mus_neutral_ROM_END = __romPos;
    seq_mus_neutral_VRAM_END = .;

    seq_mus_embassy_ROM_START = __romPos;
    seq_mus_embassy_VRAM = ADDR(.seq_mus_embassy);
    .seq_mus_embassy : AT(seq_mus_embassy_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_embassy_DATA_START = .;
        build/assets/smt1/data/seq/mus/embassy.o(.data);
        seq_mus_embassy_DATA_END = .;
        seq_mus_embassy_DATA_SIZE = ABSOLUTE(seq_mus_embassy_DATA_END - seq_mus_embassy_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_embassy);
    seq_mus_embassy_ROM_END = __romPos;
    seq_mus_embassy_VRAM_END = .;

    seq_mus_shop_ROM_START = __romPos;
    seq_mus_shop_VRAM = ADDR(.seq_mus_shop);
    .seq_mus_shop : AT(seq_mus_shop_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_shop_DATA_START = .;
        build/assets/smt1/data/seq/mus/shop.o(.data);
        seq_mus_shop_DATA_END = .;
        seq_mus_shop_DATA_SIZE = ABSOLUTE(seq_mus_shop_DATA_END - seq_mus_shop_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_shop);
    seq_mus_shop_ROM_END = __romPos;
    seq_mus_shop_VRAM_END = .;

    seq_mus_terminal_ROM_START = __romPos;
    seq_mus_terminal_VRAM = ADDR(.seq_mus_terminal);
    .seq_mus_terminal : AT(seq_mus_terminal_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_terminal_DATA_START = .;
        build/assets/smt1/data/seq/mus/terminal.o(.data);
        seq_mus_terminal_DATA_END = .;
        seq_mus_terminal_DATA_SIZE = ABSOLUTE(seq_mus_terminal_DATA_END - seq_mus_terminal_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_terminal);
    seq_mus_terminal_ROM_END = __romPos;
    seq_mus_terminal_VRAM_END = .;

    seq_mus_palace_ROM_START = __romPos;
    seq_mus_palace_VRAM = ADDR(.seq_mus_palace);
    .seq_mus_palace : AT(seq_mus_palace_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_palace_DATA_START = .;
        build/assets/smt1/data/seq/mus/palace.o(.data);
        seq_mus_palace_DATA_END = .;
        seq_mus_palace_DATA_SIZE = ABSOLUTE(seq_mus_palace_DATA_END - seq_mus_palace_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_palace);
    seq_mus_palace_ROM_END = __romPos;
    seq_mus_palace_VRAM_END = .;

    seq_mus_battle_ROM_START = __romPos;
    seq_mus_battle_VRAM = ADDR(.seq_mus_battle);
    .seq_mus_battle : AT(seq_mus_battle_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_battle_DATA_START = .;
        build/assets/smt1/data/seq/mus/battle.o(.data);
        seq_mus_battle_DATA_END = .;
        seq_mus_battle_DATA_SIZE = ABSOLUTE(seq_mus_battle_DATA_END - seq_mus_battle_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_battle);
    seq_mus_battle_ROM_END = __romPos;
    seq_mus_battle_VRAM_END = .;

    seq_mus_law_ROM_START = __romPos;
    seq_mus_law_VRAM = ADDR(.seq_mus_law);
    .seq_mus_law : AT(seq_mus_law_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_law_DATA_START = .;
        build/assets/smt1/data/seq/mus/law.o(.data);
        seq_mus_law_DATA_END = .;
        seq_mus_law_DATA_SIZE = ABSOLUTE(seq_mus_law_DATA_END - seq_mus_law_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_law);
    seq_mus_law_ROM_END = __romPos;
    seq_mus_law_VRAM_END = .;

    seq_mus_ginza_ROM_START = __romPos;
    seq_mus_ginza_VRAM = ADDR(.seq_mus_ginza);
    .seq_mus_ginza : AT(seq_mus_ginza_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_ginza_DATA_START = .;
        build/assets/smt1/data/seq/mus/ginza.o(.data);
        seq_mus_ginza_DATA_END = .;
        seq_mus_ginza_DATA_SIZE = ABSOLUTE(seq_mus_ginza_DATA_END - seq_mus_ginza_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_ginza);
    seq_mus_ginza_ROM_END = __romPos;
    seq_mus_ginza_VRAM_END = .;

    seq_mus_jakyo_ROM_START = __romPos;
    seq_mus_jakyo_VRAM = ADDR(.seq_mus_jakyo);
    .seq_mus_jakyo : AT(seq_mus_jakyo_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_jakyo_DATA_START = .;
        build/assets/smt1/data/seq/mus/jakyo.o(.data);
        seq_mus_jakyo_DATA_END = .;
        seq_mus_jakyo_DATA_SIZE = ABSOLUTE(seq_mus_jakyo_DATA_END - seq_mus_jakyo_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_jakyo);
    seq_mus_jakyo_ROM_END = __romPos;
    seq_mus_jakyo_VRAM_END = .;

    seq_mus_shibuya_ROM_START = __romPos;
    seq_mus_shibuya_VRAM = ADDR(.seq_mus_shibuya);
    .seq_mus_shibuya : AT(seq_mus_shibuya_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_shibuya_DATA_START = .;
        build/assets/smt1/data/seq/mus/shibuya.o(.data);
        seq_mus_shibuya_DATA_END = .;
        seq_mus_shibuya_DATA_SIZE = ABSOLUTE(seq_mus_shibuya_DATA_END - seq_mus_shibuya_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_shibuya);
    seq_mus_shibuya_ROM_END = __romPos;
    seq_mus_shibuya_VRAM_END = .;

    seq_mus_boss_ROM_START = __romPos;
    seq_mus_boss_VRAM = ADDR(.seq_mus_boss);
    .seq_mus_boss : AT(seq_mus_boss_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_boss_DATA_START = .;
        build/assets/smt1/data/seq/mus/boss.o(.data);
        seq_mus_boss_DATA_END = .;
        seq_mus_boss_DATA_SIZE = ABSOLUTE(seq_mus_boss_DATA_END - seq_mus_boss_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_boss);
    seq_mus_boss_ROM_END = __romPos;
    seq_mus_boss_VRAM_END = .;

    seq_mus_gover_ROM_START = __romPos;
    seq_mus_gover_VRAM = ADDR(.seq_mus_gover);
    .seq_mus_gover : AT(seq_mus_gover_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_gover_DATA_START = .;
        build/assets/smt1/data/seq/mus/gover.o(.data);
        seq_mus_gover_DATA_END = .;
        seq_mus_gover_DATA_SIZE = ABSOLUTE(seq_mus_gover_DATA_END - seq_mus_gover_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_gover);
    seq_mus_gover_ROM_END = __romPos;
    seq_mus_gover_VRAM_END = .;

    seq_mus_ruins_ROM_START = __romPos;
    seq_mus_ruins_VRAM = ADDR(.seq_mus_ruins);
    .seq_mus_ruins : AT(seq_mus_ruins_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_ruins_DATA_START = .;
        build/assets/smt1/data/seq/mus/ruins.o(.data);
        seq_mus_ruins_DATA_END = .;
        seq_mus_ruins_DATA_SIZE = ABSOLUTE(seq_mus_ruins_DATA_END - seq_mus_ruins_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_ruins);
    seq_mus_ruins_ROM_END = __romPos;
    seq_mus_ruins_VRAM_END = .;

    seq_mus_chaos_ROM_START = __romPos;
    seq_mus_chaos_VRAM = ADDR(.seq_mus_chaos);
    .seq_mus_chaos : AT(seq_mus_chaos_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_chaos_DATA_START = .;
        build/assets/smt1/data/seq/mus/chaos.o(.data);
        seq_mus_chaos_DATA_END = .;
        seq_mus_chaos_DATA_SIZE = ABSOLUTE(seq_mus_chaos_DATA_END - seq_mus_chaos_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_chaos);
    seq_mus_chaos_ROM_END = __romPos;
    seq_mus_chaos_VRAM_END = .;

    seq_mus_cathedrl_ROM_START = __romPos;
    seq_mus_cathedrl_VRAM = ADDR(.seq_mus_cathedrl);
    .seq_mus_cathedrl : AT(seq_mus_cathedrl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_cathedrl_DATA_START = .;
        build/assets/smt1/data/seq/mus/cathedrl.o(.data);
        seq_mus_cathedrl_DATA_END = .;
        seq_mus_cathedrl_DATA_SIZE = ABSOLUTE(seq_mus_cathedrl_DATA_END - seq_mus_cathedrl_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_cathedrl);
    seq_mus_cathedrl_ROM_END = __romPos;
    seq_mus_cathedrl_VRAM_END = .;

    seq_mus_end_ROM_START = __romPos;
    seq_mus_end_VRAM = ADDR(.seq_mus_end);
    .seq_mus_end : AT(seq_mus_end_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_end_DATA_START = .;
        build/assets/smt1/data/seq/mus/end.o(.data);
        seq_mus_end_DATA_END = .;
        seq_mus_end_DATA_SIZE = ABSOLUTE(seq_mus_end_DATA_END - seq_mus_end_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_end);
    seq_mus_end_ROM_END = __romPos;
    seq_mus_end_VRAM_END = .;

    seq_mus_credits_ROM_START = __romPos;
    seq_mus_credits_VRAM = ADDR(.seq_mus_credits);
    .seq_mus_credits : AT(seq_mus_credits_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_credits_DATA_START = .;
        build/assets/smt1/data/seq/mus/credits.o(.data);
        seq_mus_credits_DATA_END = .;
        seq_mus_credits_DATA_SIZE = ABSOLUTE(seq_mus_credits_DATA_END - seq_mus_credits_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_credits);
    seq_mus_credits_ROM_END = __romPos;
    seq_mus_credits_VRAM_END = .;

    seq_mus_pascal_ROM_START = __romPos;
    seq_mus_pascal_VRAM = ADDR(.seq_mus_pascal);
    .seq_mus_pascal : AT(seq_mus_pascal_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_pascal_DATA_START = .;
        build/assets/smt1/data/seq/mus/pascal.o(.data);
        seq_mus_pascal_DATA_END = .;
        seq_mus_pascal_DATA_SIZE = ABSOLUTE(seq_mus_pascal_DATA_END - seq_mus_pascal_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_pascal);
    seq_mus_pascal_ROM_END = __romPos;
    seq_mus_pascal_VRAM_END = .;

    seq_mus_majin_ROM_START = __romPos;
    seq_mus_majin_VRAM = ADDR(.seq_mus_majin);
    .seq_mus_majin : AT(seq_mus_majin_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        seq_mus_majin_DATA_START = .;
        build/assets/smt1/data/seq/mus/majin.o(.data);
        seq_mus_majin_DATA_END = .;
        seq_mus_majin_DATA_SIZE = ABSOLUTE(seq_mus_majin_DATA_END - seq_mus_majin_DATA_START);
    }
    __romPos += SIZEOF(.seq_mus_majin);
    seq_mus_majin_ROM_END = __romPos;
    seq_mus_majin_VRAM_END = .;

    /DISCARD/ :
    {
        *(*);
    }
}
