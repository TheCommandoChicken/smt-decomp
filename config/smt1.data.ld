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
    .intro 0x80180000 : AT(intro_ROM_START) SUBALIGN(1)
    {
        FILL(0x00000000);
        intro_TEXT_START = .;
        build/src/smt1/data/intro.o(.text);
        . = ALIGN(., 16);
        intro_TEXT_END = .;
        intro_TEXT_SIZE = ABSOLUTE(intro_TEXT_END - intro_TEXT_START);
        intro_DATA_START = .;
        build/src/smt1/data/intro.o(.data);
        build/src/smt1/data/3B2A0.o(.data);
        . += 0x3FC;
        . = ALIGN(., 16);
        intro_DATA_END = .;
        intro_DATA_SIZE = ABSOLUTE(intro_DATA_END - intro_DATA_START);
        intro_RODATA_START = .;
        build/src/smt1/data/36000.o(.rodata);
        build/src/smt1/data/intro.o(.rodata);
        . = ALIGN(., 16);
        intro_RODATA_END = .;
        intro_RODATA_SIZE = ABSOLUTE(intro_RODATA_END - intro_RODATA_START);
        intro_BSS_START = .;
        build/src/smt1/data/intro.o(.bss);
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

    txt_txt00_ROM_START = __romPos;
    txt_txt00_VRAM = ADDR(.txt_txt00);
    .txt_txt00 : AT(txt_txt00_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt00_DATA_START = .;
        build/assets/smt1/data/txt/txt00.o(.data);
        txt_txt00_DATA_END = .;
        txt_txt00_DATA_SIZE = ABSOLUTE(txt_txt00_DATA_END - txt_txt00_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt00);
    txt_txt00_ROM_END = __romPos;
    txt_txt00_VRAM_END = .;

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

    txt_txt01_ROM_START = __romPos;
    txt_txt01_VRAM = ADDR(.txt_txt01);
    .txt_txt01 : AT(txt_txt01_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt01_DATA_START = .;
        build/assets/smt1/data/txt/txt01.o(.data);
        txt_txt01_DATA_END = .;
        txt_txt01_DATA_SIZE = ABSOLUTE(txt_txt01_DATA_END - txt_txt01_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt01);
    txt_txt01_ROM_END = __romPos;
    txt_txt01_VRAM_END = .;

    txt_txt02_ROM_START = __romPos;
    txt_txt02_VRAM = ADDR(.txt_txt02);
    .txt_txt02 : AT(txt_txt02_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt02_DATA_START = .;
        build/assets/smt1/data/txt/txt02.o(.data);
        txt_txt02_DATA_END = .;
        txt_txt02_DATA_SIZE = ABSOLUTE(txt_txt02_DATA_END - txt_txt02_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt02);
    txt_txt02_ROM_END = __romPos;
    txt_txt02_VRAM_END = .;

    txt_txt03_ROM_START = __romPos;
    txt_txt03_VRAM = ADDR(.txt_txt03);
    .txt_txt03 : AT(txt_txt03_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt03_DATA_START = .;
        build/assets/smt1/data/txt/txt03.o(.data);
        txt_txt03_DATA_END = .;
        txt_txt03_DATA_SIZE = ABSOLUTE(txt_txt03_DATA_END - txt_txt03_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt03);
    txt_txt03_ROM_END = __romPos;
    txt_txt03_VRAM_END = .;

    txt_txt04_ROM_START = __romPos;
    txt_txt04_VRAM = ADDR(.txt_txt04);
    .txt_txt04 : AT(txt_txt04_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt04_DATA_START = .;
        build/assets/smt1/data/txt/txt04.o(.data);
        txt_txt04_DATA_END = .;
        txt_txt04_DATA_SIZE = ABSOLUTE(txt_txt04_DATA_END - txt_txt04_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt04);
    txt_txt04_ROM_END = __romPos;
    txt_txt04_VRAM_END = .;

    txt_txt05_ROM_START = __romPos;
    txt_txt05_VRAM = ADDR(.txt_txt05);
    .txt_txt05 : AT(txt_txt05_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt05_DATA_START = .;
        build/assets/smt1/data/txt/txt05.o(.data);
        txt_txt05_DATA_END = .;
        txt_txt05_DATA_SIZE = ABSOLUTE(txt_txt05_DATA_END - txt_txt05_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt05);
    txt_txt05_ROM_END = __romPos;
    txt_txt05_VRAM_END = .;

    txt_txt06_ROM_START = __romPos;
    txt_txt06_VRAM = ADDR(.txt_txt06);
    .txt_txt06 : AT(txt_txt06_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt06_DATA_START = .;
        build/assets/smt1/data/txt/txt06.o(.data);
        txt_txt06_DATA_END = .;
        txt_txt06_DATA_SIZE = ABSOLUTE(txt_txt06_DATA_END - txt_txt06_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt06);
    txt_txt06_ROM_END = __romPos;
    txt_txt06_VRAM_END = .;

    txt_txt07_ROM_START = __romPos;
    txt_txt07_VRAM = ADDR(.txt_txt07);
    .txt_txt07 : AT(txt_txt07_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt07_DATA_START = .;
        build/assets/smt1/data/txt/txt07.o(.data);
        txt_txt07_DATA_END = .;
        txt_txt07_DATA_SIZE = ABSOLUTE(txt_txt07_DATA_END - txt_txt07_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt07);
    txt_txt07_ROM_END = __romPos;
    txt_txt07_VRAM_END = .;

    txt_txt08_ROM_START = __romPos;
    txt_txt08_VRAM = ADDR(.txt_txt08);
    .txt_txt08 : AT(txt_txt08_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt08_DATA_START = .;
        build/assets/smt1/data/txt/txt08.o(.data);
        txt_txt08_DATA_END = .;
        txt_txt08_DATA_SIZE = ABSOLUTE(txt_txt08_DATA_END - txt_txt08_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt08);
    txt_txt08_ROM_END = __romPos;
    txt_txt08_VRAM_END = .;

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

    txt_txt09_ROM_START = __romPos;
    txt_txt09_VRAM = ADDR(.txt_txt09);
    .txt_txt09 : AT(txt_txt09_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt09_DATA_START = .;
        build/assets/smt1/data/txt/txt09.o(.data);
        txt_txt09_DATA_END = .;
        txt_txt09_DATA_SIZE = ABSOLUTE(txt_txt09_DATA_END - txt_txt09_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt09);
    txt_txt09_ROM_END = __romPos;
    txt_txt09_VRAM_END = .;

    txt_txt10_ROM_START = __romPos;
    txt_txt10_VRAM = ADDR(.txt_txt10);
    .txt_txt10 : AT(txt_txt10_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt10_DATA_START = .;
        build/assets/smt1/data/txt/txt10.o(.data);
        txt_txt10_DATA_END = .;
        txt_txt10_DATA_SIZE = ABSOLUTE(txt_txt10_DATA_END - txt_txt10_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt10);
    txt_txt10_ROM_END = __romPos;
    txt_txt10_VRAM_END = .;

    txt_txt11_ROM_START = __romPos;
    txt_txt11_VRAM = ADDR(.txt_txt11);
    .txt_txt11 : AT(txt_txt11_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt11_DATA_START = .;
        build/assets/smt1/data/txt/txt11.o(.data);
        txt_txt11_DATA_END = .;
        txt_txt11_DATA_SIZE = ABSOLUTE(txt_txt11_DATA_END - txt_txt11_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt11);
    txt_txt11_ROM_END = __romPos;
    txt_txt11_VRAM_END = .;

    txt_txt12_ROM_START = __romPos;
    txt_txt12_VRAM = ADDR(.txt_txt12);
    .txt_txt12 : AT(txt_txt12_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt12_DATA_START = .;
        build/assets/smt1/data/txt/txt12.o(.data);
        txt_txt12_DATA_END = .;
        txt_txt12_DATA_SIZE = ABSOLUTE(txt_txt12_DATA_END - txt_txt12_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt12);
    txt_txt12_ROM_END = __romPos;
    txt_txt12_VRAM_END = .;

    txt_txt13_ROM_START = __romPos;
    txt_txt13_VRAM = ADDR(.txt_txt13);
    .txt_txt13 : AT(txt_txt13_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt13_DATA_START = .;
        build/assets/smt1/data/txt/txt13.o(.data);
        txt_txt13_DATA_END = .;
        txt_txt13_DATA_SIZE = ABSOLUTE(txt_txt13_DATA_END - txt_txt13_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt13);
    txt_txt13_ROM_END = __romPos;
    txt_txt13_VRAM_END = .;

    txt_txt14_ROM_START = __romPos;
    txt_txt14_VRAM = ADDR(.txt_txt14);
    .txt_txt14 : AT(txt_txt14_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        txt_txt14_DATA_START = .;
        build/assets/smt1/data/txt/txt14.o(.data);
        txt_txt14_DATA_END = .;
        txt_txt14_DATA_SIZE = ABSOLUTE(txt_txt14_DATA_END - txt_txt14_DATA_START);
    }
    __romPos += SIZEOF(.txt_txt14);
    txt_txt14_ROM_END = __romPos;
    txt_txt14_VRAM_END = .;

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

    tex_bg_cathl_ROM_START = __romPos;
    tex_bg_cathl_VRAM = ADDR(.tex_bg_cathl);
    .tex_bg_cathl : AT(tex_bg_cathl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_cathl_DATA_START = .;
        build/assets/smt1/data/tex/bg/cathl.o(.data);
        tex_bg_cathl_DATA_END = .;
        tex_bg_cathl_DATA_SIZE = ABSOLUTE(tex_bg_cathl_DATA_END - tex_bg_cathl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_cathl);
    tex_bg_cathl_ROM_END = __romPos;
    tex_bg_cathl_VRAM_END = .;

    tex_bg_cathr_ROM_START = __romPos;
    tex_bg_cathr_VRAM = ADDR(.tex_bg_cathr);
    .tex_bg_cathr : AT(tex_bg_cathr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_cathr_DATA_START = .;
        build/assets/smt1/data/tex/bg/cathr.o(.data);
        tex_bg_cathr_DATA_END = .;
        tex_bg_cathr_DATA_SIZE = ABSOLUTE(tex_bg_cathr_DATA_END - tex_bg_cathr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_cathr);
    tex_bg_cathr_ROM_END = __romPos;
    tex_bg_cathr_VRAM_END = .;

    tex_bg_gcathl_ROM_START = __romPos;
    tex_bg_gcathl_VRAM = ADDR(.tex_bg_gcathl);
    .tex_bg_gcathl : AT(tex_bg_gcathl_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gcathl_DATA_START = .;
        build/assets/smt1/data/tex/bg/gcathl.o(.data);
        tex_bg_gcathl_DATA_END = .;
        tex_bg_gcathl_DATA_SIZE = ABSOLUTE(tex_bg_gcathl_DATA_END - tex_bg_gcathl_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gcathl);
    tex_bg_gcathl_ROM_END = __romPos;
    tex_bg_gcathl_VRAM_END = .;

    tex_bg_gcathr_ROM_START = __romPos;
    tex_bg_gcathr_VRAM = ADDR(.tex_bg_gcathr);
    .tex_bg_gcathr : AT(tex_bg_gcathr_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        tex_bg_gcathr_DATA_START = .;
        build/assets/smt1/data/tex/bg/gcathr.o(.data);
        tex_bg_gcathr_DATA_END = .;
        tex_bg_gcathr_DATA_SIZE = ABSOLUTE(tex_bg_gcathr_DATA_END - tex_bg_gcathr_DATA_START);
    }
    __romPos += SIZEOF(.tex_bg_gcathr);
    tex_bg_gcathr_ROM_END = __romPos;
    tex_bg_gcathr_VRAM_END = .;

    _58C800_ROM_START = __romPos;
    _58C800_VRAM = ADDR(._58C800);
    ._58C800 : AT(_58C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _58C800_DATA_START = .;
        build/assets/smt1/data/58C800.o(.data);
        _58C800_DATA_END = .;
        _58C800_DATA_SIZE = ABSOLUTE(_58C800_DATA_END - _58C800_DATA_START);
    }
    __romPos += SIZEOF(._58C800);
    _58C800_ROM_END = __romPos;
    _58C800_VRAM_END = .;

    _598800_ROM_START = __romPos;
    _598800_VRAM = ADDR(._598800);
    ._598800 : AT(_598800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _598800_DATA_START = .;
        build/assets/smt1/data/598800.o(.data);
        _598800_DATA_END = .;
        _598800_DATA_SIZE = ABSOLUTE(_598800_DATA_END - _598800_DATA_START);
    }
    __romPos += SIZEOF(._598800);
    _598800_ROM_END = __romPos;
    _598800_VRAM_END = .;

    _5A4800_ROM_START = __romPos;
    _5A4800_VRAM = ADDR(._5A4800);
    ._5A4800 : AT(_5A4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5A4800_DATA_START = .;
        build/assets/smt1/data/5A4800.o(.data);
        _5A4800_DATA_END = .;
        _5A4800_DATA_SIZE = ABSOLUTE(_5A4800_DATA_END - _5A4800_DATA_START);
    }
    __romPos += SIZEOF(._5A4800);
    _5A4800_ROM_END = __romPos;
    _5A4800_VRAM_END = .;

    _5B0800_ROM_START = __romPos;
    _5B0800_VRAM = ADDR(._5B0800);
    ._5B0800 : AT(_5B0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5B0800_DATA_START = .;
        build/assets/smt1/data/5B0800.o(.data);
        _5B0800_DATA_END = .;
        _5B0800_DATA_SIZE = ABSOLUTE(_5B0800_DATA_END - _5B0800_DATA_START);
    }
    __romPos += SIZEOF(._5B0800);
    _5B0800_ROM_END = __romPos;
    _5B0800_VRAM_END = .;

    _5D4800_ROM_START = __romPos;
    _5D4800_VRAM = ADDR(._5D4800);
    ._5D4800 : AT(_5D4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5D4800_DATA_START = .;
        build/assets/smt1/data/5D4800.o(.data);
        _5D4800_DATA_END = .;
        _5D4800_DATA_SIZE = ABSOLUTE(_5D4800_DATA_END - _5D4800_DATA_START);
    }
    __romPos += SIZEOF(._5D4800);
    _5D4800_ROM_END = __romPos;
    _5D4800_VRAM_END = .;

    _5E0800_ROM_START = __romPos;
    _5E0800_VRAM = ADDR(._5E0800);
    ._5E0800 : AT(_5E0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5E0800_DATA_START = .;
        build/assets/smt1/data/5E0800.o(.data);
        _5E0800_DATA_END = .;
        _5E0800_DATA_SIZE = ABSOLUTE(_5E0800_DATA_END - _5E0800_DATA_START);
    }
    __romPos += SIZEOF(._5E0800);
    _5E0800_ROM_END = __romPos;
    _5E0800_VRAM_END = .;

    _5F8800_ROM_START = __romPos;
    _5F8800_VRAM = ADDR(._5F8800);
    ._5F8800 : AT(_5F8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _5F8800_DATA_START = .;
        build/assets/smt1/data/5F8800.o(.data);
        _5F8800_DATA_END = .;
        _5F8800_DATA_SIZE = ABSOLUTE(_5F8800_DATA_END - _5F8800_DATA_START);
    }
    __romPos += SIZEOF(._5F8800);
    _5F8800_ROM_END = __romPos;
    _5F8800_VRAM_END = .;

    _604800_ROM_START = __romPos;
    _604800_VRAM = ADDR(._604800);
    ._604800 : AT(_604800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _604800_DATA_START = .;
        build/assets/smt1/data/604800.o(.data);
        _604800_DATA_END = .;
        _604800_DATA_SIZE = ABSOLUTE(_604800_DATA_END - _604800_DATA_START);
    }
    __romPos += SIZEOF(._604800);
    _604800_ROM_END = __romPos;
    _604800_VRAM_END = .;

    _610800_ROM_START = __romPos;
    _610800_VRAM = ADDR(._610800);
    ._610800 : AT(_610800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _610800_DATA_START = .;
        build/assets/smt1/data/610800.o(.data);
        _610800_DATA_END = .;
        _610800_DATA_SIZE = ABSOLUTE(_610800_DATA_END - _610800_DATA_START);
    }
    __romPos += SIZEOF(._610800);
    _610800_ROM_END = __romPos;
    _610800_VRAM_END = .;

    _61C800_ROM_START = __romPos;
    _61C800_VRAM = ADDR(._61C800);
    ._61C800 : AT(_61C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _61C800_DATA_START = .;
        build/assets/smt1/data/61C800.o(.data);
        _61C800_DATA_END = .;
        _61C800_DATA_SIZE = ABSOLUTE(_61C800_DATA_END - _61C800_DATA_START);
    }
    __romPos += SIZEOF(._61C800);
    _61C800_ROM_END = __romPos;
    _61C800_VRAM_END = .;

    _628800_ROM_START = __romPos;
    _628800_VRAM = ADDR(._628800);
    ._628800 : AT(_628800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _628800_DATA_START = .;
        build/assets/smt1/data/628800.o(.data);
        _628800_DATA_END = .;
        _628800_DATA_SIZE = ABSOLUTE(_628800_DATA_END - _628800_DATA_START);
    }
    __romPos += SIZEOF(._628800);
    _628800_ROM_END = __romPos;
    _628800_VRAM_END = .;

    _634800_ROM_START = __romPos;
    _634800_VRAM = ADDR(._634800);
    ._634800 : AT(_634800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _634800_DATA_START = .;
        build/assets/smt1/data/634800.o(.data);
        _634800_DATA_END = .;
        _634800_DATA_SIZE = ABSOLUTE(_634800_DATA_END - _634800_DATA_START);
    }
    __romPos += SIZEOF(._634800);
    _634800_ROM_END = __romPos;
    _634800_VRAM_END = .;

    _640800_ROM_START = __romPos;
    _640800_VRAM = ADDR(._640800);
    ._640800 : AT(_640800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _640800_DATA_START = .;
        build/assets/smt1/data/640800.o(.data);
        _640800_DATA_END = .;
        _640800_DATA_SIZE = ABSOLUTE(_640800_DATA_END - _640800_DATA_START);
    }
    __romPos += SIZEOF(._640800);
    _640800_ROM_END = __romPos;
    _640800_VRAM_END = .;

    _64C800_ROM_START = __romPos;
    _64C800_VRAM = ADDR(._64C800);
    ._64C800 : AT(_64C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _64C800_DATA_START = .;
        build/assets/smt1/data/64C800.o(.data);
        _64C800_DATA_END = .;
        _64C800_DATA_SIZE = ABSOLUTE(_64C800_DATA_END - _64C800_DATA_START);
    }
    __romPos += SIZEOF(._64C800);
    _64C800_ROM_END = __romPos;
    _64C800_VRAM_END = .;

    _658800_ROM_START = __romPos;
    _658800_VRAM = ADDR(._658800);
    ._658800 : AT(_658800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _658800_DATA_START = .;
        build/assets/smt1/data/658800.o(.data);
        _658800_DATA_END = .;
        _658800_DATA_SIZE = ABSOLUTE(_658800_DATA_END - _658800_DATA_START);
    }
    __romPos += SIZEOF(._658800);
    _658800_ROM_END = __romPos;
    _658800_VRAM_END = .;

    _664800_ROM_START = __romPos;
    _664800_VRAM = ADDR(._664800);
    ._664800 : AT(_664800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _664800_DATA_START = .;
        build/assets/smt1/data/664800.o(.data);
        _664800_DATA_END = .;
        _664800_DATA_SIZE = ABSOLUTE(_664800_DATA_END - _664800_DATA_START);
    }
    __romPos += SIZEOF(._664800);
    _664800_ROM_END = __romPos;
    _664800_VRAM_END = .;

    _670800_ROM_START = __romPos;
    _670800_VRAM = ADDR(._670800);
    ._670800 : AT(_670800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _670800_DATA_START = .;
        build/assets/smt1/data/670800.o(.data);
        _670800_DATA_END = .;
        _670800_DATA_SIZE = ABSOLUTE(_670800_DATA_END - _670800_DATA_START);
    }
    __romPos += SIZEOF(._670800);
    _670800_ROM_END = __romPos;
    _670800_VRAM_END = .;

    _67C800_ROM_START = __romPos;
    _67C800_VRAM = ADDR(._67C800);
    ._67C800 : AT(_67C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _67C800_DATA_START = .;
        build/assets/smt1/data/67C800.o(.data);
        _67C800_DATA_END = .;
        _67C800_DATA_SIZE = ABSOLUTE(_67C800_DATA_END - _67C800_DATA_START);
    }
    __romPos += SIZEOF(._67C800);
    _67C800_ROM_END = __romPos;
    _67C800_VRAM_END = .;

    _688800_ROM_START = __romPos;
    _688800_VRAM = ADDR(._688800);
    ._688800 : AT(_688800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _688800_DATA_START = .;
        build/assets/smt1/data/688800.o(.data);
        _688800_DATA_END = .;
        _688800_DATA_SIZE = ABSOLUTE(_688800_DATA_END - _688800_DATA_START);
    }
    __romPos += SIZEOF(._688800);
    _688800_ROM_END = __romPos;
    _688800_VRAM_END = .;

    _694800_ROM_START = __romPos;
    _694800_VRAM = ADDR(._694800);
    ._694800 : AT(_694800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _694800_DATA_START = .;
        build/assets/smt1/data/694800.o(.data);
        _694800_DATA_END = .;
        _694800_DATA_SIZE = ABSOLUTE(_694800_DATA_END - _694800_DATA_START);
    }
    __romPos += SIZEOF(._694800);
    _694800_ROM_END = __romPos;
    _694800_VRAM_END = .;

    _6A0800_ROM_START = __romPos;
    _6A0800_VRAM = ADDR(._6A0800);
    ._6A0800 : AT(_6A0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6A0800_DATA_START = .;
        build/assets/smt1/data/6A0800.o(.data);
        _6A0800_DATA_END = .;
        _6A0800_DATA_SIZE = ABSOLUTE(_6A0800_DATA_END - _6A0800_DATA_START);
    }
    __romPos += SIZEOF(._6A0800);
    _6A0800_ROM_END = __romPos;
    _6A0800_VRAM_END = .;

    _6AC800_ROM_START = __romPos;
    _6AC800_VRAM = ADDR(._6AC800);
    ._6AC800 : AT(_6AC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6AC800_DATA_START = .;
        build/assets/smt1/data/6AC800.o(.data);
        _6AC800_DATA_END = .;
        _6AC800_DATA_SIZE = ABSOLUTE(_6AC800_DATA_END - _6AC800_DATA_START);
    }
    __romPos += SIZEOF(._6AC800);
    _6AC800_ROM_END = __romPos;
    _6AC800_VRAM_END = .;

    _6B8800_ROM_START = __romPos;
    _6B8800_VRAM = ADDR(._6B8800);
    ._6B8800 : AT(_6B8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6B8800_DATA_START = .;
        build/assets/smt1/data/6B8800.o(.data);
        _6B8800_DATA_END = .;
        _6B8800_DATA_SIZE = ABSOLUTE(_6B8800_DATA_END - _6B8800_DATA_START);
    }
    __romPos += SIZEOF(._6B8800);
    _6B8800_ROM_END = __romPos;
    _6B8800_VRAM_END = .;

    _6C4800_ROM_START = __romPos;
    _6C4800_VRAM = ADDR(._6C4800);
    ._6C4800 : AT(_6C4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6C4800_DATA_START = .;
        build/assets/smt1/data/6C4800.o(.data);
        _6C4800_DATA_END = .;
        _6C4800_DATA_SIZE = ABSOLUTE(_6C4800_DATA_END - _6C4800_DATA_START);
    }
    __romPos += SIZEOF(._6C4800);
    _6C4800_ROM_END = __romPos;
    _6C4800_VRAM_END = .;

    _6D0800_ROM_START = __romPos;
    _6D0800_VRAM = ADDR(._6D0800);
    ._6D0800 : AT(_6D0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6D0800_DATA_START = .;
        build/assets/smt1/data/6D0800.o(.data);
        _6D0800_DATA_END = .;
        _6D0800_DATA_SIZE = ABSOLUTE(_6D0800_DATA_END - _6D0800_DATA_START);
    }
    __romPos += SIZEOF(._6D0800);
    _6D0800_ROM_END = __romPos;
    _6D0800_VRAM_END = .;

    _6DC800_ROM_START = __romPos;
    _6DC800_VRAM = ADDR(._6DC800);
    ._6DC800 : AT(_6DC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6DC800_DATA_START = .;
        build/assets/smt1/data/6DC800.o(.data);
        _6DC800_DATA_END = .;
        _6DC800_DATA_SIZE = ABSOLUTE(_6DC800_DATA_END - _6DC800_DATA_START);
    }
    __romPos += SIZEOF(._6DC800);
    _6DC800_ROM_END = __romPos;
    _6DC800_VRAM_END = .;

    _6E8800_ROM_START = __romPos;
    _6E8800_VRAM = ADDR(._6E8800);
    ._6E8800 : AT(_6E8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6E8800_DATA_START = .;
        build/assets/smt1/data/6E8800.o(.data);
        _6E8800_DATA_END = .;
        _6E8800_DATA_SIZE = ABSOLUTE(_6E8800_DATA_END - _6E8800_DATA_START);
    }
    __romPos += SIZEOF(._6E8800);
    _6E8800_ROM_END = __romPos;
    _6E8800_VRAM_END = .;

    _6F4800_ROM_START = __romPos;
    _6F4800_VRAM = ADDR(._6F4800);
    ._6F4800 : AT(_6F4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _6F4800_DATA_START = .;
        build/assets/smt1/data/6F4800.o(.data);
        _6F4800_DATA_END = .;
        _6F4800_DATA_SIZE = ABSOLUTE(_6F4800_DATA_END - _6F4800_DATA_START);
    }
    __romPos += SIZEOF(._6F4800);
    _6F4800_ROM_END = __romPos;
    _6F4800_VRAM_END = .;

    _700800_ROM_START = __romPos;
    _700800_VRAM = ADDR(._700800);
    ._700800 : AT(_700800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _700800_DATA_START = .;
        build/assets/smt1/data/700800.o(.data);
        _700800_DATA_END = .;
        _700800_DATA_SIZE = ABSOLUTE(_700800_DATA_END - _700800_DATA_START);
    }
    __romPos += SIZEOF(._700800);
    _700800_ROM_END = __romPos;
    _700800_VRAM_END = .;

    _70C800_ROM_START = __romPos;
    _70C800_VRAM = ADDR(._70C800);
    ._70C800 : AT(_70C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _70C800_DATA_START = .;
        build/assets/smt1/data/70C800.o(.data);
        _70C800_DATA_END = .;
        _70C800_DATA_SIZE = ABSOLUTE(_70C800_DATA_END - _70C800_DATA_START);
    }
    __romPos += SIZEOF(._70C800);
    _70C800_ROM_END = __romPos;
    _70C800_VRAM_END = .;

    _718800_ROM_START = __romPos;
    _718800_VRAM = ADDR(._718800);
    ._718800 : AT(_718800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _718800_DATA_START = .;
        build/assets/smt1/data/718800.o(.data);
        _718800_DATA_END = .;
        _718800_DATA_SIZE = ABSOLUTE(_718800_DATA_END - _718800_DATA_START);
    }
    __romPos += SIZEOF(._718800);
    _718800_ROM_END = __romPos;
    _718800_VRAM_END = .;

    _724800_ROM_START = __romPos;
    _724800_VRAM = ADDR(._724800);
    ._724800 : AT(_724800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _724800_DATA_START = .;
        build/assets/smt1/data/724800.o(.data);
        _724800_DATA_END = .;
        _724800_DATA_SIZE = ABSOLUTE(_724800_DATA_END - _724800_DATA_START);
    }
    __romPos += SIZEOF(._724800);
    _724800_ROM_END = __romPos;
    _724800_VRAM_END = .;

    _730800_ROM_START = __romPos;
    _730800_VRAM = ADDR(._730800);
    ._730800 : AT(_730800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _730800_DATA_START = .;
        build/assets/smt1/data/730800.o(.data);
        _730800_DATA_END = .;
        _730800_DATA_SIZE = ABSOLUTE(_730800_DATA_END - _730800_DATA_START);
    }
    __romPos += SIZEOF(._730800);
    _730800_ROM_END = __romPos;
    _730800_VRAM_END = .;

    _73C800_ROM_START = __romPos;
    _73C800_VRAM = ADDR(._73C800);
    ._73C800 : AT(_73C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _73C800_DATA_START = .;
        build/assets/smt1/data/73C800.o(.data);
        _73C800_DATA_END = .;
        _73C800_DATA_SIZE = ABSOLUTE(_73C800_DATA_END - _73C800_DATA_START);
    }
    __romPos += SIZEOF(._73C800);
    _73C800_ROM_END = __romPos;
    _73C800_VRAM_END = .;

    _748800_ROM_START = __romPos;
    _748800_VRAM = ADDR(._748800);
    ._748800 : AT(_748800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _748800_DATA_START = .;
        build/assets/smt1/data/748800.o(.data);
        _748800_DATA_END = .;
        _748800_DATA_SIZE = ABSOLUTE(_748800_DATA_END - _748800_DATA_START);
    }
    __romPos += SIZEOF(._748800);
    _748800_ROM_END = __romPos;
    _748800_VRAM_END = .;

    _754800_ROM_START = __romPos;
    _754800_VRAM = ADDR(._754800);
    ._754800 : AT(_754800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _754800_DATA_START = .;
        build/assets/smt1/data/754800.o(.data);
        _754800_DATA_END = .;
        _754800_DATA_SIZE = ABSOLUTE(_754800_DATA_END - _754800_DATA_START);
    }
    __romPos += SIZEOF(._754800);
    _754800_ROM_END = __romPos;
    _754800_VRAM_END = .;

    _760800_ROM_START = __romPos;
    _760800_VRAM = ADDR(._760800);
    ._760800 : AT(_760800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _760800_DATA_START = .;
        build/assets/smt1/data/760800.o(.data);
        _760800_DATA_END = .;
        _760800_DATA_SIZE = ABSOLUTE(_760800_DATA_END - _760800_DATA_START);
    }
    __romPos += SIZEOF(._760800);
    _760800_ROM_END = __romPos;
    _760800_VRAM_END = .;

    _76C800_ROM_START = __romPos;
    _76C800_VRAM = ADDR(._76C800);
    ._76C800 : AT(_76C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _76C800_DATA_START = .;
        build/assets/smt1/data/76C800.o(.data);
        _76C800_DATA_END = .;
        _76C800_DATA_SIZE = ABSOLUTE(_76C800_DATA_END - _76C800_DATA_START);
    }
    __romPos += SIZEOF(._76C800);
    _76C800_ROM_END = __romPos;
    _76C800_VRAM_END = .;

    _778800_ROM_START = __romPos;
    _778800_VRAM = ADDR(._778800);
    ._778800 : AT(_778800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _778800_DATA_START = .;
        build/assets/smt1/data/778800.o(.data);
        _778800_DATA_END = .;
        _778800_DATA_SIZE = ABSOLUTE(_778800_DATA_END - _778800_DATA_START);
    }
    __romPos += SIZEOF(._778800);
    _778800_ROM_END = __romPos;
    _778800_VRAM_END = .;

    _784800_ROM_START = __romPos;
    _784800_VRAM = ADDR(._784800);
    ._784800 : AT(_784800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _784800_DATA_START = .;
        build/assets/smt1/data/784800.o(.data);
        _784800_DATA_END = .;
        _784800_DATA_SIZE = ABSOLUTE(_784800_DATA_END - _784800_DATA_START);
    }
    __romPos += SIZEOF(._784800);
    _784800_ROM_END = __romPos;
    _784800_VRAM_END = .;

    _790800_ROM_START = __romPos;
    _790800_VRAM = ADDR(._790800);
    ._790800 : AT(_790800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _790800_DATA_START = .;
        build/assets/smt1/data/790800.o(.data);
        _790800_DATA_END = .;
        _790800_DATA_SIZE = ABSOLUTE(_790800_DATA_END - _790800_DATA_START);
    }
    __romPos += SIZEOF(._790800);
    _790800_ROM_END = __romPos;
    _790800_VRAM_END = .;

    _79C800_ROM_START = __romPos;
    _79C800_VRAM = ADDR(._79C800);
    ._79C800 : AT(_79C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _79C800_DATA_START = .;
        build/assets/smt1/data/79C800.o(.data);
        _79C800_DATA_END = .;
        _79C800_DATA_SIZE = ABSOLUTE(_79C800_DATA_END - _79C800_DATA_START);
    }
    __romPos += SIZEOF(._79C800);
    _79C800_ROM_END = __romPos;
    _79C800_VRAM_END = .;

    _7A8800_ROM_START = __romPos;
    _7A8800_VRAM = ADDR(._7A8800);
    ._7A8800 : AT(_7A8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7A8800_DATA_START = .;
        build/assets/smt1/data/7A8800.o(.data);
        _7A8800_DATA_END = .;
        _7A8800_DATA_SIZE = ABSOLUTE(_7A8800_DATA_END - _7A8800_DATA_START);
    }
    __romPos += SIZEOF(._7A8800);
    _7A8800_ROM_END = __romPos;
    _7A8800_VRAM_END = .;

    _7B4800_ROM_START = __romPos;
    _7B4800_VRAM = ADDR(._7B4800);
    ._7B4800 : AT(_7B4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7B4800_DATA_START = .;
        build/assets/smt1/data/7B4800.o(.data);
        _7B4800_DATA_END = .;
        _7B4800_DATA_SIZE = ABSOLUTE(_7B4800_DATA_END - _7B4800_DATA_START);
    }
    __romPos += SIZEOF(._7B4800);
    _7B4800_ROM_END = __romPos;
    _7B4800_VRAM_END = .;

    _7C0800_ROM_START = __romPos;
    _7C0800_VRAM = ADDR(._7C0800);
    ._7C0800 : AT(_7C0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7C0800_DATA_START = .;
        build/assets/smt1/data/7C0800.o(.data);
        _7C0800_DATA_END = .;
        _7C0800_DATA_SIZE = ABSOLUTE(_7C0800_DATA_END - _7C0800_DATA_START);
    }
    __romPos += SIZEOF(._7C0800);
    _7C0800_ROM_END = __romPos;
    _7C0800_VRAM_END = .;

    _7CC800_ROM_START = __romPos;
    _7CC800_VRAM = ADDR(._7CC800);
    ._7CC800 : AT(_7CC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7CC800_DATA_START = .;
        build/assets/smt1/data/7CC800.o(.data);
        _7CC800_DATA_END = .;
        _7CC800_DATA_SIZE = ABSOLUTE(_7CC800_DATA_END - _7CC800_DATA_START);
    }
    __romPos += SIZEOF(._7CC800);
    _7CC800_ROM_END = __romPos;
    _7CC800_VRAM_END = .;

    _7D8800_ROM_START = __romPos;
    _7D8800_VRAM = ADDR(._7D8800);
    ._7D8800 : AT(_7D8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7D8800_DATA_START = .;
        build/assets/smt1/data/7D8800.o(.data);
        _7D8800_DATA_END = .;
        _7D8800_DATA_SIZE = ABSOLUTE(_7D8800_DATA_END - _7D8800_DATA_START);
    }
    __romPos += SIZEOF(._7D8800);
    _7D8800_ROM_END = __romPos;
    _7D8800_VRAM_END = .;

    _7E4800_ROM_START = __romPos;
    _7E4800_VRAM = ADDR(._7E4800);
    ._7E4800 : AT(_7E4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7E4800_DATA_START = .;
        build/assets/smt1/data/7E4800.o(.data);
        _7E4800_DATA_END = .;
        _7E4800_DATA_SIZE = ABSOLUTE(_7E4800_DATA_END - _7E4800_DATA_START);
    }
    __romPos += SIZEOF(._7E4800);
    _7E4800_ROM_END = __romPos;
    _7E4800_VRAM_END = .;

    _7F0800_ROM_START = __romPos;
    _7F0800_VRAM = ADDR(._7F0800);
    ._7F0800 : AT(_7F0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7F0800_DATA_START = .;
        build/assets/smt1/data/7F0800.o(.data);
        _7F0800_DATA_END = .;
        _7F0800_DATA_SIZE = ABSOLUTE(_7F0800_DATA_END - _7F0800_DATA_START);
    }
    __romPos += SIZEOF(._7F0800);
    _7F0800_ROM_END = __romPos;
    _7F0800_VRAM_END = .;

    _7FC800_ROM_START = __romPos;
    _7FC800_VRAM = ADDR(._7FC800);
    ._7FC800 : AT(_7FC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _7FC800_DATA_START = .;
        build/assets/smt1/data/7FC800.o(.data);
        _7FC800_DATA_END = .;
        _7FC800_DATA_SIZE = ABSOLUTE(_7FC800_DATA_END - _7FC800_DATA_START);
    }
    __romPos += SIZEOF(._7FC800);
    _7FC800_ROM_END = __romPos;
    _7FC800_VRAM_END = .;

    _808800_ROM_START = __romPos;
    _808800_VRAM = ADDR(._808800);
    ._808800 : AT(_808800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _808800_DATA_START = .;
        build/assets/smt1/data/808800.o(.data);
        _808800_DATA_END = .;
        _808800_DATA_SIZE = ABSOLUTE(_808800_DATA_END - _808800_DATA_START);
    }
    __romPos += SIZEOF(._808800);
    _808800_ROM_END = __romPos;
    _808800_VRAM_END = .;

    _814800_ROM_START = __romPos;
    _814800_VRAM = ADDR(._814800);
    ._814800 : AT(_814800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _814800_DATA_START = .;
        build/assets/smt1/data/814800.o(.data);
        _814800_DATA_END = .;
        _814800_DATA_SIZE = ABSOLUTE(_814800_DATA_END - _814800_DATA_START);
    }
    __romPos += SIZEOF(._814800);
    _814800_ROM_END = __romPos;
    _814800_VRAM_END = .;

    _81D000_ROM_START = __romPos;
    _81D000_VRAM = ADDR(._81D000);
    ._81D000 : AT(_81D000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _81D000_DATA_START = .;
        build/assets/smt1/data/81D000.o(.data);
        _81D000_DATA_END = .;
        _81D000_DATA_SIZE = ABSOLUTE(_81D000_DATA_END - _81D000_DATA_START);
    }
    __romPos += SIZEOF(._81D000);
    _81D000_ROM_END = __romPos;
    _81D000_VRAM_END = .;

    _825800_ROM_START = __romPos;
    _825800_VRAM = ADDR(._825800);
    ._825800 : AT(_825800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _825800_DATA_START = .;
        build/assets/smt1/data/825800.o(.data);
        _825800_DATA_END = .;
        _825800_DATA_SIZE = ABSOLUTE(_825800_DATA_END - _825800_DATA_START);
    }
    __romPos += SIZEOF(._825800);
    _825800_ROM_END = __romPos;
    _825800_VRAM_END = .;

    _82E000_ROM_START = __romPos;
    _82E000_VRAM = ADDR(._82E000);
    ._82E000 : AT(_82E000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _82E000_DATA_START = .;
        build/assets/smt1/data/82E000.o(.data);
        _82E000_DATA_END = .;
        _82E000_DATA_SIZE = ABSOLUTE(_82E000_DATA_END - _82E000_DATA_START);
    }
    __romPos += SIZEOF(._82E000);
    _82E000_ROM_END = __romPos;
    _82E000_VRAM_END = .;

    _836800_ROM_START = __romPos;
    _836800_VRAM = ADDR(._836800);
    ._836800 : AT(_836800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _836800_DATA_START = .;
        build/assets/smt1/data/836800.o(.data);
        _836800_DATA_END = .;
        _836800_DATA_SIZE = ABSOLUTE(_836800_DATA_END - _836800_DATA_START);
    }
    __romPos += SIZEOF(._836800);
    _836800_ROM_END = __romPos;
    _836800_VRAM_END = .;

    _83F000_ROM_START = __romPos;
    _83F000_VRAM = ADDR(._83F000);
    ._83F000 : AT(_83F000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _83F000_DATA_START = .;
        build/assets/smt1/data/83F000.o(.data);
        _83F000_DATA_END = .;
        _83F000_DATA_SIZE = ABSOLUTE(_83F000_DATA_END - _83F000_DATA_START);
    }
    __romPos += SIZEOF(._83F000);
    _83F000_ROM_END = __romPos;
    _83F000_VRAM_END = .;

    field_ktjj_ROM_START = __romPos;
    field_ktjj_VRAM = ADDR(.field_ktjj);
    .field_ktjj : AT(field_ktjj_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        field_ktjj_DATA_START = .;
        build/assets/smt1/data/field/ktjj.o(.data);
        field_ktjj_DATA_END = .;
        field_ktjj_DATA_SIZE = ABSOLUTE(field_ktjj_DATA_END - field_ktjj_DATA_START);
    }
    __romPos += SIZEOF(.field_ktjj);
    field_ktjj_ROM_END = __romPos;
    field_ktjj_VRAM_END = .;

    field_unk_ROM_START = __romPos;
    field_unk_VRAM = ADDR(.field_unk);
    .field_unk : AT(field_unk_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        field_unk_DATA_START = .;
        build/assets/smt1/data/field/unk.o(.data);
        field_unk_DATA_END = .;
        field_unk_DATA_SIZE = ABSOLUTE(field_unk_DATA_END - field_unk_DATA_START);
    }
    __romPos += SIZEOF(.field_unk);
    field_unk_ROM_END = __romPos;
    field_unk_VRAM_END = .;

    _84D800_ROM_START = __romPos;
    _84D800_VRAM = ADDR(._84D800);
    ._84D800 : AT(_84D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _84D800_DATA_START = .;
        build/assets/smt1/data/84D800.o(.data);
        _84D800_DATA_END = .;
        _84D800_DATA_SIZE = ABSOLUTE(_84D800_DATA_END - _84D800_DATA_START);
    }
    __romPos += SIZEOF(._84D800);
    _84D800_ROM_END = __romPos;
    _84D800_VRAM_END = .;

    _854000_ROM_START = __romPos;
    _854000_VRAM = ADDR(._854000);
    ._854000 : AT(_854000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _854000_DATA_START = .;
        build/assets/smt1/data/854000.o(.data);
        _854000_DATA_END = .;
        _854000_DATA_SIZE = ABSOLUTE(_854000_DATA_END - _854000_DATA_START);
    }
    __romPos += SIZEOF(._854000);
    _854000_ROM_END = __romPos;
    _854000_VRAM_END = .;

    _857800_ROM_START = __romPos;
    _857800_VRAM = ADDR(._857800);
    ._857800 : AT(_857800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _857800_DATA_START = .;
        build/assets/smt1/data/857800.o(.data);
        _857800_DATA_END = .;
        _857800_DATA_SIZE = ABSOLUTE(_857800_DATA_END - _857800_DATA_START);
    }
    __romPos += SIZEOF(._857800);
    _857800_ROM_END = __romPos;
    _857800_VRAM_END = .;

    _866800_ROM_START = __romPos;
    _866800_VRAM = ADDR(._866800);
    ._866800 : AT(_866800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _866800_DATA_START = .;
        build/assets/smt1/data/866800.o(.data);
        _866800_DATA_END = .;
        _866800_DATA_SIZE = ABSOLUTE(_866800_DATA_END - _866800_DATA_START);
    }
    __romPos += SIZEOF(._866800);
    _866800_ROM_END = __romPos;
    _866800_VRAM_END = .;

    _869800_ROM_START = __romPos;
    _869800_VRAM = ADDR(._869800);
    ._869800 : AT(_869800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _869800_DATA_START = .;
        build/assets/smt1/data/869800.o(.data);
        _869800_DATA_END = .;
        _869800_DATA_SIZE = ABSOLUTE(_869800_DATA_END - _869800_DATA_START);
    }
    __romPos += SIZEOF(._869800);
    _869800_ROM_END = __romPos;
    _869800_VRAM_END = .;

    _86F800_ROM_START = __romPos;
    _86F800_VRAM = ADDR(._86F800);
    ._86F800 : AT(_86F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _86F800_DATA_START = .;
        build/assets/smt1/data/86F800.o(.data);
        _86F800_DATA_END = .;
        _86F800_DATA_SIZE = ABSOLUTE(_86F800_DATA_END - _86F800_DATA_START);
    }
    __romPos += SIZEOF(._86F800);
    _86F800_ROM_END = __romPos;
    _86F800_VRAM_END = .;

    _873000_ROM_START = __romPos;
    _873000_VRAM = ADDR(._873000);
    ._873000 : AT(_873000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _873000_DATA_START = .;
        build/assets/smt1/data/873000.o(.data);
        _873000_DATA_END = .;
        _873000_DATA_SIZE = ABSOLUTE(_873000_DATA_END - _873000_DATA_START);
    }
    __romPos += SIZEOF(._873000);
    _873000_ROM_END = __romPos;
    _873000_VRAM_END = .;

    _882800_ROM_START = __romPos;
    _882800_VRAM = ADDR(._882800);
    ._882800 : AT(_882800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _882800_DATA_START = .;
        build/assets/smt1/data/882800.o(.data);
        _882800_DATA_END = .;
        _882800_DATA_SIZE = ABSOLUTE(_882800_DATA_END - _882800_DATA_START);
    }
    __romPos += SIZEOF(._882800);
    _882800_ROM_END = __romPos;
    _882800_VRAM_END = .;

    _885800_ROM_START = __romPos;
    _885800_VRAM = ADDR(._885800);
    ._885800 : AT(_885800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _885800_DATA_START = .;
        build/assets/smt1/data/885800.o(.data);
        _885800_DATA_END = .;
        _885800_DATA_SIZE = ABSOLUTE(_885800_DATA_END - _885800_DATA_START);
    }
    __romPos += SIZEOF(._885800);
    _885800_ROM_END = __romPos;
    _885800_VRAM_END = .;

    _896800_ROM_START = __romPos;
    _896800_VRAM = ADDR(._896800);
    ._896800 : AT(_896800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _896800_DATA_START = .;
        build/assets/smt1/data/896800.o(.data);
        _896800_DATA_END = .;
        _896800_DATA_SIZE = ABSOLUTE(_896800_DATA_END - _896800_DATA_START);
    }
    __romPos += SIZEOF(._896800);
    _896800_ROM_END = __romPos;
    _896800_VRAM_END = .;

    _899800_ROM_START = __romPos;
    _899800_VRAM = ADDR(._899800);
    ._899800 : AT(_899800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _899800_DATA_START = .;
        build/assets/smt1/data/899800.o(.data);
        _899800_DATA_END = .;
        _899800_DATA_SIZE = ABSOLUTE(_899800_DATA_END - _899800_DATA_START);
    }
    __romPos += SIZEOF(._899800);
    _899800_ROM_END = __romPos;
    _899800_VRAM_END = .;

    _8A9800_ROM_START = __romPos;
    _8A9800_VRAM = ADDR(._8A9800);
    ._8A9800 : AT(_8A9800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8A9800_DATA_START = .;
        build/assets/smt1/data/8A9800.o(.data);
        _8A9800_DATA_END = .;
        _8A9800_DATA_SIZE = ABSOLUTE(_8A9800_DATA_END - _8A9800_DATA_START);
    }
    __romPos += SIZEOF(._8A9800);
    _8A9800_ROM_END = __romPos;
    _8A9800_VRAM_END = .;

    _8AC800_ROM_START = __romPos;
    _8AC800_VRAM = ADDR(._8AC800);
    ._8AC800 : AT(_8AC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8AC800_DATA_START = .;
        build/assets/smt1/data/8AC800.o(.data);
        _8AC800_DATA_END = .;
        _8AC800_DATA_SIZE = ABSOLUTE(_8AC800_DATA_END - _8AC800_DATA_START);
    }
    __romPos += SIZEOF(._8AC800);
    _8AC800_ROM_END = __romPos;
    _8AC800_VRAM_END = .;

    _8B4800_ROM_START = __romPos;
    _8B4800_VRAM = ADDR(._8B4800);
    ._8B4800 : AT(_8B4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8B4800_DATA_START = .;
        build/assets/smt1/data/8B4800.o(.data);
        _8B4800_DATA_END = .;
        _8B4800_DATA_SIZE = ABSOLUTE(_8B4800_DATA_END - _8B4800_DATA_START);
    }
    __romPos += SIZEOF(._8B4800);
    _8B4800_ROM_END = __romPos;
    _8B4800_VRAM_END = .;

    _8B7800_ROM_START = __romPos;
    _8B7800_VRAM = ADDR(._8B7800);
    ._8B7800 : AT(_8B7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8B7800_DATA_START = .;
        build/assets/smt1/data/8B7800.o(.data);
        _8B7800_DATA_END = .;
        _8B7800_DATA_SIZE = ABSOLUTE(_8B7800_DATA_END - _8B7800_DATA_START);
    }
    __romPos += SIZEOF(._8B7800);
    _8B7800_ROM_END = __romPos;
    _8B7800_VRAM_END = .;

    _8C0800_ROM_START = __romPos;
    _8C0800_VRAM = ADDR(._8C0800);
    ._8C0800 : AT(_8C0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8C0800_DATA_START = .;
        build/assets/smt1/data/8C0800.o(.data);
        _8C0800_DATA_END = .;
        _8C0800_DATA_SIZE = ABSOLUTE(_8C0800_DATA_END - _8C0800_DATA_START);
    }
    __romPos += SIZEOF(._8C0800);
    _8C0800_ROM_END = __romPos;
    _8C0800_VRAM_END = .;

    _8C3800_ROM_START = __romPos;
    _8C3800_VRAM = ADDR(._8C3800);
    ._8C3800 : AT(_8C3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8C3800_DATA_START = .;
        build/assets/smt1/data/8C3800.o(.data);
        _8C3800_DATA_END = .;
        _8C3800_DATA_SIZE = ABSOLUTE(_8C3800_DATA_END - _8C3800_DATA_START);
    }
    __romPos += SIZEOF(._8C3800);
    _8C3800_ROM_END = __romPos;
    _8C3800_VRAM_END = .;

    _8CB800_ROM_START = __romPos;
    _8CB800_VRAM = ADDR(._8CB800);
    ._8CB800 : AT(_8CB800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8CB800_DATA_START = .;
        build/assets/smt1/data/8CB800.o(.data);
        _8CB800_DATA_END = .;
        _8CB800_DATA_SIZE = ABSOLUTE(_8CB800_DATA_END - _8CB800_DATA_START);
    }
    __romPos += SIZEOF(._8CB800);
    _8CB800_ROM_END = __romPos;
    _8CB800_VRAM_END = .;

    _8CF000_ROM_START = __romPos;
    _8CF000_VRAM = ADDR(._8CF000);
    ._8CF000 : AT(_8CF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8CF000_DATA_START = .;
        build/assets/smt1/data/8CF000.o(.data);
        _8CF000_DATA_END = .;
        _8CF000_DATA_SIZE = ABSOLUTE(_8CF000_DATA_END - _8CF000_DATA_START);
    }
    __romPos += SIZEOF(._8CF000);
    _8CF000_ROM_END = __romPos;
    _8CF000_VRAM_END = .;

    _8DD800_ROM_START = __romPos;
    _8DD800_VRAM = ADDR(._8DD800);
    ._8DD800 : AT(_8DD800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8DD800_DATA_START = .;
        build/assets/smt1/data/8DD800.o(.data);
        _8DD800_DATA_END = .;
        _8DD800_DATA_SIZE = ABSOLUTE(_8DD800_DATA_END - _8DD800_DATA_START);
    }
    __romPos += SIZEOF(._8DD800);
    _8DD800_ROM_END = __romPos;
    _8DD800_VRAM_END = .;

    _8E0800_ROM_START = __romPos;
    _8E0800_VRAM = ADDR(._8E0800);
    ._8E0800 : AT(_8E0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8E0800_DATA_START = .;
        build/assets/smt1/data/8E0800.o(.data);
        _8E0800_DATA_END = .;
        _8E0800_DATA_SIZE = ABSOLUTE(_8E0800_DATA_END - _8E0800_DATA_START);
    }
    __romPos += SIZEOF(._8E0800);
    _8E0800_ROM_END = __romPos;
    _8E0800_VRAM_END = .;

    _8EA000_ROM_START = __romPos;
    _8EA000_VRAM = ADDR(._8EA000);
    ._8EA000 : AT(_8EA000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8EA000_DATA_START = .;
        build/assets/smt1/data/8EA000.o(.data);
        _8EA000_DATA_END = .;
        _8EA000_DATA_SIZE = ABSOLUTE(_8EA000_DATA_END - _8EA000_DATA_START);
    }
    __romPos += SIZEOF(._8EA000);
    _8EA000_ROM_END = __romPos;
    _8EA000_VRAM_END = .;

    _8ED000_ROM_START = __romPos;
    _8ED000_VRAM = ADDR(._8ED000);
    ._8ED000 : AT(_8ED000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8ED000_DATA_START = .;
        build/assets/smt1/data/8ED000.o(.data);
        _8ED000_DATA_END = .;
        _8ED000_DATA_SIZE = ABSOLUTE(_8ED000_DATA_END - _8ED000_DATA_START);
    }
    __romPos += SIZEOF(._8ED000);
    _8ED000_ROM_END = __romPos;
    _8ED000_VRAM_END = .;

    _8FC800_ROM_START = __romPos;
    _8FC800_VRAM = ADDR(._8FC800);
    ._8FC800 : AT(_8FC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8FC800_DATA_START = .;
        build/assets/smt1/data/8FC800.o(.data);
        _8FC800_DATA_END = .;
        _8FC800_DATA_SIZE = ABSOLUTE(_8FC800_DATA_END - _8FC800_DATA_START);
    }
    __romPos += SIZEOF(._8FC800);
    _8FC800_ROM_END = __romPos;
    _8FC800_VRAM_END = .;

    _8FF800_ROM_START = __romPos;
    _8FF800_VRAM = ADDR(._8FF800);
    ._8FF800 : AT(_8FF800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _8FF800_DATA_START = .;
        build/assets/smt1/data/8FF800.o(.data);
        _8FF800_DATA_END = .;
        _8FF800_DATA_SIZE = ABSOLUTE(_8FF800_DATA_END - _8FF800_DATA_START);
    }
    __romPos += SIZEOF(._8FF800);
    _8FF800_ROM_END = __romPos;
    _8FF800_VRAM_END = .;

    _910000_ROM_START = __romPos;
    _910000_VRAM = ADDR(._910000);
    ._910000 : AT(_910000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _910000_DATA_START = .;
        build/assets/smt1/data/910000.o(.data);
        _910000_DATA_END = .;
        _910000_DATA_SIZE = ABSOLUTE(_910000_DATA_END - _910000_DATA_START);
    }
    __romPos += SIZEOF(._910000);
    _910000_ROM_END = __romPos;
    _910000_VRAM_END = .;

    _913000_ROM_START = __romPos;
    _913000_VRAM = ADDR(._913000);
    ._913000 : AT(_913000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _913000_DATA_START = .;
        build/assets/smt1/data/913000.o(.data);
        _913000_DATA_END = .;
        _913000_DATA_SIZE = ABSOLUTE(_913000_DATA_END - _913000_DATA_START);
    }
    __romPos += SIZEOF(._913000);
    _913000_ROM_END = __romPos;
    _913000_VRAM_END = .;

    _923800_ROM_START = __romPos;
    _923800_VRAM = ADDR(._923800);
    ._923800 : AT(_923800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _923800_DATA_START = .;
        build/assets/smt1/data/923800.o(.data);
        _923800_DATA_END = .;
        _923800_DATA_SIZE = ABSOLUTE(_923800_DATA_END - _923800_DATA_START);
    }
    __romPos += SIZEOF(._923800);
    _923800_ROM_END = __romPos;
    _923800_VRAM_END = .;

    _926800_ROM_START = __romPos;
    _926800_VRAM = ADDR(._926800);
    ._926800 : AT(_926800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _926800_DATA_START = .;
        build/assets/smt1/data/926800.o(.data);
        _926800_DATA_END = .;
        _926800_DATA_SIZE = ABSOLUTE(_926800_DATA_END - _926800_DATA_START);
    }
    __romPos += SIZEOF(._926800);
    _926800_ROM_END = __romPos;
    _926800_VRAM_END = .;

    _934000_ROM_START = __romPos;
    _934000_VRAM = ADDR(._934000);
    ._934000 : AT(_934000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _934000_DATA_START = .;
        build/assets/smt1/data/934000.o(.data);
        _934000_DATA_END = .;
        _934000_DATA_SIZE = ABSOLUTE(_934000_DATA_END - _934000_DATA_START);
    }
    __romPos += SIZEOF(._934000);
    _934000_ROM_END = __romPos;
    _934000_VRAM_END = .;

    _937800_ROM_START = __romPos;
    _937800_VRAM = ADDR(._937800);
    ._937800 : AT(_937800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _937800_DATA_START = .;
        build/assets/smt1/data/937800.o(.data);
        _937800_DATA_END = .;
        _937800_DATA_SIZE = ABSOLUTE(_937800_DATA_END - _937800_DATA_START);
    }
    __romPos += SIZEOF(._937800);
    _937800_ROM_END = __romPos;
    _937800_VRAM_END = .;

    _948800_ROM_START = __romPos;
    _948800_VRAM = ADDR(._948800);
    ._948800 : AT(_948800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _948800_DATA_START = .;
        build/assets/smt1/data/948800.o(.data);
        _948800_DATA_END = .;
        _948800_DATA_SIZE = ABSOLUTE(_948800_DATA_END - _948800_DATA_START);
    }
    __romPos += SIZEOF(._948800);
    _948800_ROM_END = __romPos;
    _948800_VRAM_END = .;

    _94B800_ROM_START = __romPos;
    _94B800_VRAM = ADDR(._94B800);
    ._94B800 : AT(_94B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _94B800_DATA_START = .;
        build/assets/smt1/data/94B800.o(.data);
        _94B800_DATA_END = .;
        _94B800_DATA_SIZE = ABSOLUTE(_94B800_DATA_END - _94B800_DATA_START);
    }
    __romPos += SIZEOF(._94B800);
    _94B800_ROM_END = __romPos;
    _94B800_VRAM_END = .;

    _95C800_ROM_START = __romPos;
    _95C800_VRAM = ADDR(._95C800);
    ._95C800 : AT(_95C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _95C800_DATA_START = .;
        build/assets/smt1/data/95C800.o(.data);
        _95C800_DATA_END = .;
        _95C800_DATA_SIZE = ABSOLUTE(_95C800_DATA_END - _95C800_DATA_START);
    }
    __romPos += SIZEOF(._95C800);
    _95C800_ROM_END = __romPos;
    _95C800_VRAM_END = .;

    _95F000_ROM_START = __romPos;
    _95F000_VRAM = ADDR(._95F000);
    ._95F000 : AT(_95F000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _95F000_DATA_START = .;
        build/assets/smt1/data/95F000.o(.data);
        _95F000_DATA_END = .;
        _95F000_DATA_SIZE = ABSOLUTE(_95F000_DATA_END - _95F000_DATA_START);
    }
    __romPos += SIZEOF(._95F000);
    _95F000_ROM_END = __romPos;
    _95F000_VRAM_END = .;

    _96D000_ROM_START = __romPos;
    _96D000_VRAM = ADDR(._96D000);
    ._96D000 : AT(_96D000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _96D000_DATA_START = .;
        build/assets/smt1/data/96D000.o(.data);
        _96D000_DATA_END = .;
        _96D000_DATA_SIZE = ABSOLUTE(_96D000_DATA_END - _96D000_DATA_START);
    }
    __romPos += SIZEOF(._96D000);
    _96D000_ROM_END = __romPos;
    _96D000_VRAM_END = .;

    _96F800_ROM_START = __romPos;
    _96F800_VRAM = ADDR(._96F800);
    ._96F800 : AT(_96F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _96F800_DATA_START = .;
        build/assets/smt1/data/96F800.o(.data);
        _96F800_DATA_END = .;
        _96F800_DATA_SIZE = ABSOLUTE(_96F800_DATA_END - _96F800_DATA_START);
    }
    __romPos += SIZEOF(._96F800);
    _96F800_ROM_END = __romPos;
    _96F800_VRAM_END = .;

    _97B800_ROM_START = __romPos;
    _97B800_VRAM = ADDR(._97B800);
    ._97B800 : AT(_97B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _97B800_DATA_START = .;
        build/assets/smt1/data/97B800.o(.data);
        _97B800_DATA_END = .;
        _97B800_DATA_SIZE = ABSOLUTE(_97B800_DATA_END - _97B800_DATA_START);
    }
    __romPos += SIZEOF(._97B800);
    _97B800_ROM_END = __romPos;
    _97B800_VRAM_END = .;

    _97E800_ROM_START = __romPos;
    _97E800_VRAM = ADDR(._97E800);
    ._97E800 : AT(_97E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _97E800_DATA_START = .;
        build/assets/smt1/data/97E800.o(.data);
        _97E800_DATA_END = .;
        _97E800_DATA_SIZE = ABSOLUTE(_97E800_DATA_END - _97E800_DATA_START);
    }
    __romPos += SIZEOF(._97E800);
    _97E800_ROM_END = __romPos;
    _97E800_VRAM_END = .;

    _986800_ROM_START = __romPos;
    _986800_VRAM = ADDR(._986800);
    ._986800 : AT(_986800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _986800_DATA_START = .;
        build/assets/smt1/data/986800.o(.data);
        _986800_DATA_END = .;
        _986800_DATA_SIZE = ABSOLUTE(_986800_DATA_END - _986800_DATA_START);
    }
    __romPos += SIZEOF(._986800);
    _986800_ROM_END = __romPos;
    _986800_VRAM_END = .;

    _989800_ROM_START = __romPos;
    _989800_VRAM = ADDR(._989800);
    ._989800 : AT(_989800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _989800_DATA_START = .;
        build/assets/smt1/data/989800.o(.data);
        _989800_DATA_END = .;
        _989800_DATA_SIZE = ABSOLUTE(_989800_DATA_END - _989800_DATA_START);
    }
    __romPos += SIZEOF(._989800);
    _989800_ROM_END = __romPos;
    _989800_VRAM_END = .;

    _99B000_ROM_START = __romPos;
    _99B000_VRAM = ADDR(._99B000);
    ._99B000 : AT(_99B000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _99B000_DATA_START = .;
        build/assets/smt1/data/99B000.o(.data);
        _99B000_DATA_END = .;
        _99B000_DATA_SIZE = ABSOLUTE(_99B000_DATA_END - _99B000_DATA_START);
    }
    __romPos += SIZEOF(._99B000);
    _99B000_ROM_END = __romPos;
    _99B000_VRAM_END = .;

    _99E000_ROM_START = __romPos;
    _99E000_VRAM = ADDR(._99E000);
    ._99E000 : AT(_99E000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _99E000_DATA_START = .;
        build/assets/smt1/data/99E000.o(.data);
        _99E000_DATA_END = .;
        _99E000_DATA_SIZE = ABSOLUTE(_99E000_DATA_END - _99E000_DATA_START);
    }
    __romPos += SIZEOF(._99E000);
    _99E000_ROM_END = __romPos;
    _99E000_VRAM_END = .;

    _9A7000_ROM_START = __romPos;
    _9A7000_VRAM = ADDR(._9A7000);
    ._9A7000 : AT(_9A7000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9A7000_DATA_START = .;
        build/assets/smt1/data/9A7000.o(.data);
        _9A7000_DATA_END = .;
        _9A7000_DATA_SIZE = ABSOLUTE(_9A7000_DATA_END - _9A7000_DATA_START);
    }
    __romPos += SIZEOF(._9A7000);
    _9A7000_ROM_END = __romPos;
    _9A7000_VRAM_END = .;

    _9AA000_ROM_START = __romPos;
    _9AA000_VRAM = ADDR(._9AA000);
    ._9AA000 : AT(_9AA000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9AA000_DATA_START = .;
        build/assets/smt1/data/9AA000.o(.data);
        _9AA000_DATA_END = .;
        _9AA000_DATA_SIZE = ABSOLUTE(_9AA000_DATA_END - _9AA000_DATA_START);
    }
    __romPos += SIZEOF(._9AA000);
    _9AA000_ROM_END = __romPos;
    _9AA000_VRAM_END = .;

    _9BB800_ROM_START = __romPos;
    _9BB800_VRAM = ADDR(._9BB800);
    ._9BB800 : AT(_9BB800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9BB800_DATA_START = .;
        build/assets/smt1/data/9BB800.o(.data);
        _9BB800_DATA_END = .;
        _9BB800_DATA_SIZE = ABSOLUTE(_9BB800_DATA_END - _9BB800_DATA_START);
    }
    __romPos += SIZEOF(._9BB800);
    _9BB800_ROM_END = __romPos;
    _9BB800_VRAM_END = .;

    _9BE800_ROM_START = __romPos;
    _9BE800_VRAM = ADDR(._9BE800);
    ._9BE800 : AT(_9BE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9BE800_DATA_START = .;
        build/assets/smt1/data/9BE800.o(.data);
        _9BE800_DATA_END = .;
        _9BE800_DATA_SIZE = ABSOLUTE(_9BE800_DATA_END - _9BE800_DATA_START);
    }
    __romPos += SIZEOF(._9BE800);
    _9BE800_ROM_END = __romPos;
    _9BE800_VRAM_END = .;

    _9C7800_ROM_START = __romPos;
    _9C7800_VRAM = ADDR(._9C7800);
    ._9C7800 : AT(_9C7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9C7800_DATA_START = .;
        build/assets/smt1/data/9C7800.o(.data);
        _9C7800_DATA_END = .;
        _9C7800_DATA_SIZE = ABSOLUTE(_9C7800_DATA_END - _9C7800_DATA_START);
    }
    __romPos += SIZEOF(._9C7800);
    _9C7800_ROM_END = __romPos;
    _9C7800_VRAM_END = .;

    _9CA800_ROM_START = __romPos;
    _9CA800_VRAM = ADDR(._9CA800);
    ._9CA800 : AT(_9CA800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9CA800_DATA_START = .;
        build/assets/smt1/data/9CA800.o(.data);
        _9CA800_DATA_END = .;
        _9CA800_DATA_SIZE = ABSOLUTE(_9CA800_DATA_END - _9CA800_DATA_START);
    }
    __romPos += SIZEOF(._9CA800);
    _9CA800_ROM_END = __romPos;
    _9CA800_VRAM_END = .;

    _9DB000_ROM_START = __romPos;
    _9DB000_VRAM = ADDR(._9DB000);
    ._9DB000 : AT(_9DB000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9DB000_DATA_START = .;
        build/assets/smt1/data/9DB000.o(.data);
        _9DB000_DATA_END = .;
        _9DB000_DATA_SIZE = ABSOLUTE(_9DB000_DATA_END - _9DB000_DATA_START);
    }
    __romPos += SIZEOF(._9DB000);
    _9DB000_ROM_END = __romPos;
    _9DB000_VRAM_END = .;

    _9DE800_ROM_START = __romPos;
    _9DE800_VRAM = ADDR(._9DE800);
    ._9DE800 : AT(_9DE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9DE800_DATA_START = .;
        build/assets/smt1/data/9DE800.o(.data);
        _9DE800_DATA_END = .;
        _9DE800_DATA_SIZE = ABSOLUTE(_9DE800_DATA_END - _9DE800_DATA_START);
    }
    __romPos += SIZEOF(._9DE800);
    _9DE800_ROM_END = __romPos;
    _9DE800_VRAM_END = .;

    _9E5800_ROM_START = __romPos;
    _9E5800_VRAM = ADDR(._9E5800);
    ._9E5800 : AT(_9E5800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9E5800_DATA_START = .;
        build/assets/smt1/data/9E5800.o(.data);
        _9E5800_DATA_END = .;
        _9E5800_DATA_SIZE = ABSOLUTE(_9E5800_DATA_END - _9E5800_DATA_START);
    }
    __romPos += SIZEOF(._9E5800);
    _9E5800_ROM_END = __romPos;
    _9E5800_VRAM_END = .;

    _9E8800_ROM_START = __romPos;
    _9E8800_VRAM = ADDR(._9E8800);
    ._9E8800 : AT(_9E8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9E8800_DATA_START = .;
        build/assets/smt1/data/9E8800.o(.data);
        _9E8800_DATA_END = .;
        _9E8800_DATA_SIZE = ABSOLUTE(_9E8800_DATA_END - _9E8800_DATA_START);
    }
    __romPos += SIZEOF(._9E8800);
    _9E8800_ROM_END = __romPos;
    _9E8800_VRAM_END = .;

    _9F0800_ROM_START = __romPos;
    _9F0800_VRAM = ADDR(._9F0800);
    ._9F0800 : AT(_9F0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9F0800_DATA_START = .;
        build/assets/smt1/data/9F0800.o(.data);
        _9F0800_DATA_END = .;
        _9F0800_DATA_SIZE = ABSOLUTE(_9F0800_DATA_END - _9F0800_DATA_START);
    }
    __romPos += SIZEOF(._9F0800);
    _9F0800_ROM_END = __romPos;
    _9F0800_VRAM_END = .;

    _9F3800_ROM_START = __romPos;
    _9F3800_VRAM = ADDR(._9F3800);
    ._9F3800 : AT(_9F3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9F3800_DATA_START = .;
        build/assets/smt1/data/9F3800.o(.data);
        _9F3800_DATA_END = .;
        _9F3800_DATA_SIZE = ABSOLUTE(_9F3800_DATA_END - _9F3800_DATA_START);
    }
    __romPos += SIZEOF(._9F3800);
    _9F3800_ROM_END = __romPos;
    _9F3800_VRAM_END = .;

    _9FB800_ROM_START = __romPos;
    _9FB800_VRAM = ADDR(._9FB800);
    ._9FB800 : AT(_9FB800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9FB800_DATA_START = .;
        build/assets/smt1/data/9FB800.o(.data);
        _9FB800_DATA_END = .;
        _9FB800_DATA_SIZE = ABSOLUTE(_9FB800_DATA_END - _9FB800_DATA_START);
    }
    __romPos += SIZEOF(._9FB800);
    _9FB800_ROM_END = __romPos;
    _9FB800_VRAM_END = .;

    _9FE800_ROM_START = __romPos;
    _9FE800_VRAM = ADDR(._9FE800);
    ._9FE800 : AT(_9FE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _9FE800_DATA_START = .;
        build/assets/smt1/data/9FE800.o(.data);
        _9FE800_DATA_END = .;
        _9FE800_DATA_SIZE = ABSOLUTE(_9FE800_DATA_END - _9FE800_DATA_START);
    }
    __romPos += SIZEOF(._9FE800);
    _9FE800_ROM_END = __romPos;
    _9FE800_VRAM_END = .;

    A0E800_ROM_START = __romPos;
    A0E800_VRAM = ADDR(.A0E800);
    .A0E800 : AT(A0E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A0E800_DATA_START = .;
        build/assets/smt1/data/A0E800.o(.data);
        A0E800_DATA_END = .;
        A0E800_DATA_SIZE = ABSOLUTE(A0E800_DATA_END - A0E800_DATA_START);
    }
    __romPos += SIZEOF(.A0E800);
    A0E800_ROM_END = __romPos;
    A0E800_VRAM_END = .;

    A11800_ROM_START = __romPos;
    A11800_VRAM = ADDR(.A11800);
    .A11800 : AT(A11800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A11800_DATA_START = .;
        build/assets/smt1/data/A11800.o(.data);
        A11800_DATA_END = .;
        A11800_DATA_SIZE = ABSOLUTE(A11800_DATA_END - A11800_DATA_START);
    }
    __romPos += SIZEOF(.A11800);
    A11800_ROM_END = __romPos;
    A11800_VRAM_END = .;

    A21000_ROM_START = __romPos;
    A21000_VRAM = ADDR(.A21000);
    .A21000 : AT(A21000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A21000_DATA_START = .;
        build/assets/smt1/data/A21000.o(.data);
        A21000_DATA_END = .;
        A21000_DATA_SIZE = ABSOLUTE(A21000_DATA_END - A21000_DATA_START);
    }
    __romPos += SIZEOF(.A21000);
    A21000_ROM_END = __romPos;
    A21000_VRAM_END = .;

    A24000_ROM_START = __romPos;
    A24000_VRAM = ADDR(.A24000);
    .A24000 : AT(A24000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A24000_DATA_START = .;
        build/assets/smt1/data/A24000.o(.data);
        A24000_DATA_END = .;
        A24000_DATA_SIZE = ABSOLUTE(A24000_DATA_END - A24000_DATA_START);
    }
    __romPos += SIZEOF(.A24000);
    A24000_ROM_END = __romPos;
    A24000_VRAM_END = .;

    A33800_ROM_START = __romPos;
    A33800_VRAM = ADDR(.A33800);
    .A33800 : AT(A33800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A33800_DATA_START = .;
        build/assets/smt1/data/A33800.o(.data);
        A33800_DATA_END = .;
        A33800_DATA_SIZE = ABSOLUTE(A33800_DATA_END - A33800_DATA_START);
    }
    __romPos += SIZEOF(.A33800);
    A33800_ROM_END = __romPos;
    A33800_VRAM_END = .;

    A36800_ROM_START = __romPos;
    A36800_VRAM = ADDR(.A36800);
    .A36800 : AT(A36800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A36800_DATA_START = .;
        build/assets/smt1/data/A36800.o(.data);
        A36800_DATA_END = .;
        A36800_DATA_SIZE = ABSOLUTE(A36800_DATA_END - A36800_DATA_START);
    }
    __romPos += SIZEOF(.A36800);
    A36800_ROM_END = __romPos;
    A36800_VRAM_END = .;

    A46000_ROM_START = __romPos;
    A46000_VRAM = ADDR(.A46000);
    .A46000 : AT(A46000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A46000_DATA_START = .;
        build/assets/smt1/data/A46000.o(.data);
        A46000_DATA_END = .;
        A46000_DATA_SIZE = ABSOLUTE(A46000_DATA_END - A46000_DATA_START);
    }
    __romPos += SIZEOF(.A46000);
    A46000_ROM_END = __romPos;
    A46000_VRAM_END = .;

    A49000_ROM_START = __romPos;
    A49000_VRAM = ADDR(.A49000);
    .A49000 : AT(A49000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A49000_DATA_START = .;
        build/assets/smt1/data/A49000.o(.data);
        A49000_DATA_END = .;
        A49000_DATA_SIZE = ABSOLUTE(A49000_DATA_END - A49000_DATA_START);
    }
    __romPos += SIZEOF(.A49000);
    A49000_ROM_END = __romPos;
    A49000_VRAM_END = .;

    A57800_ROM_START = __romPos;
    A57800_VRAM = ADDR(.A57800);
    .A57800 : AT(A57800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A57800_DATA_START = .;
        build/assets/smt1/data/A57800.o(.data);
        A57800_DATA_END = .;
        A57800_DATA_SIZE = ABSOLUTE(A57800_DATA_END - A57800_DATA_START);
    }
    __romPos += SIZEOF(.A57800);
    A57800_ROM_END = __romPos;
    A57800_VRAM_END = .;

    A5B000_ROM_START = __romPos;
    A5B000_VRAM = ADDR(.A5B000);
    .A5B000 : AT(A5B000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A5B000_DATA_START = .;
        build/assets/smt1/data/A5B000.o(.data);
        A5B000_DATA_END = .;
        A5B000_DATA_SIZE = ABSOLUTE(A5B000_DATA_END - A5B000_DATA_START);
    }
    __romPos += SIZEOF(.A5B000);
    A5B000_ROM_END = __romPos;
    A5B000_VRAM_END = .;

    A61000_ROM_START = __romPos;
    A61000_VRAM = ADDR(.A61000);
    .A61000 : AT(A61000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A61000_DATA_START = .;
        build/assets/smt1/data/A61000.o(.data);
        A61000_DATA_END = .;
        A61000_DATA_SIZE = ABSOLUTE(A61000_DATA_END - A61000_DATA_START);
    }
    __romPos += SIZEOF(.A61000);
    A61000_ROM_END = __romPos;
    A61000_VRAM_END = .;

    A64800_ROM_START = __romPos;
    A64800_VRAM = ADDR(.A64800);
    .A64800 : AT(A64800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A64800_DATA_START = .;
        build/assets/smt1/data/A64800.o(.data);
        A64800_DATA_END = .;
        A64800_DATA_SIZE = ABSOLUTE(A64800_DATA_END - A64800_DATA_START);
    }
    __romPos += SIZEOF(.A64800);
    A64800_ROM_END = __romPos;
    A64800_VRAM_END = .;

    A6F000_ROM_START = __romPos;
    A6F000_VRAM = ADDR(.A6F000);
    .A6F000 : AT(A6F000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A6F000_DATA_START = .;
        build/assets/smt1/data/A6F000.o(.data);
        A6F000_DATA_END = .;
        A6F000_DATA_SIZE = ABSOLUTE(A6F000_DATA_END - A6F000_DATA_START);
    }
    __romPos += SIZEOF(.A6F000);
    A6F000_ROM_END = __romPos;
    A6F000_VRAM_END = .;

    A76000_ROM_START = __romPos;
    A76000_VRAM = ADDR(.A76000);
    .A76000 : AT(A76000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A76000_DATA_START = .;
        build/assets/smt1/data/A76000.o(.data);
        A76000_DATA_END = .;
        A76000_DATA_SIZE = ABSOLUTE(A76000_DATA_END - A76000_DATA_START);
    }
    __romPos += SIZEOF(.A76000);
    A76000_ROM_END = __romPos;
    A76000_VRAM_END = .;

    A79800_ROM_START = __romPos;
    A79800_VRAM = ADDR(.A79800);
    .A79800 : AT(A79800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A79800_DATA_START = .;
        build/assets/smt1/data/A79800.o(.data);
        A79800_DATA_END = .;
        A79800_DATA_SIZE = ABSOLUTE(A79800_DATA_END - A79800_DATA_START);
    }
    __romPos += SIZEOF(.A79800);
    A79800_ROM_END = __romPos;
    A79800_VRAM_END = .;

    A80800_ROM_START = __romPos;
    A80800_VRAM = ADDR(.A80800);
    .A80800 : AT(A80800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A80800_DATA_START = .;
        build/assets/smt1/data/A80800.o(.data);
        A80800_DATA_END = .;
        A80800_DATA_SIZE = ABSOLUTE(A80800_DATA_END - A80800_DATA_START);
    }
    __romPos += SIZEOF(.A80800);
    A80800_ROM_END = __romPos;
    A80800_VRAM_END = .;

    A84000_ROM_START = __romPos;
    A84000_VRAM = ADDR(.A84000);
    .A84000 : AT(A84000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A84000_DATA_START = .;
        build/assets/smt1/data/A84000.o(.data);
        A84000_DATA_END = .;
        A84000_DATA_SIZE = ABSOLUTE(A84000_DATA_END - A84000_DATA_START);
    }
    __romPos += SIZEOF(.A84000);
    A84000_ROM_END = __romPos;
    A84000_VRAM_END = .;

    A93800_ROM_START = __romPos;
    A93800_VRAM = ADDR(.A93800);
    .A93800 : AT(A93800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A93800_DATA_START = .;
        build/assets/smt1/data/A93800.o(.data);
        A93800_DATA_END = .;
        A93800_DATA_SIZE = ABSOLUTE(A93800_DATA_END - A93800_DATA_START);
    }
    __romPos += SIZEOF(.A93800);
    A93800_ROM_END = __romPos;
    A93800_VRAM_END = .;

    A95800_ROM_START = __romPos;
    A95800_VRAM = ADDR(.A95800);
    .A95800 : AT(A95800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A95800_DATA_START = .;
        build/assets/smt1/data/A95800.o(.data);
        A95800_DATA_END = .;
        A95800_DATA_SIZE = ABSOLUTE(A95800_DATA_END - A95800_DATA_START);
    }
    __romPos += SIZEOF(.A95800);
    A95800_ROM_END = __romPos;
    A95800_VRAM_END = .;

    A9C800_ROM_START = __romPos;
    A9C800_VRAM = ADDR(.A9C800);
    .A9C800 : AT(A9C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A9C800_DATA_START = .;
        build/assets/smt1/data/A9C800.o(.data);
        A9C800_DATA_END = .;
        A9C800_DATA_SIZE = ABSOLUTE(A9C800_DATA_END - A9C800_DATA_START);
    }
    __romPos += SIZEOF(.A9C800);
    A9C800_ROM_END = __romPos;
    A9C800_VRAM_END = .;

    A9E800_ROM_START = __romPos;
    A9E800_VRAM = ADDR(.A9E800);
    .A9E800 : AT(A9E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        A9E800_DATA_START = .;
        build/assets/smt1/data/A9E800.o(.data);
        A9E800_DATA_END = .;
        A9E800_DATA_SIZE = ABSOLUTE(A9E800_DATA_END - A9E800_DATA_START);
    }
    __romPos += SIZEOF(.A9E800);
    A9E800_ROM_END = __romPos;
    A9E800_VRAM_END = .;

    AA8000_ROM_START = __romPos;
    AA8000_VRAM = ADDR(.AA8000);
    .AA8000 : AT(AA8000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AA8000_DATA_START = .;
        build/assets/smt1/data/AA8000.o(.data);
        AA8000_DATA_END = .;
        AA8000_DATA_SIZE = ABSOLUTE(AA8000_DATA_END - AA8000_DATA_START);
    }
    __romPos += SIZEOF(.AA8000);
    AA8000_ROM_END = __romPos;
    AA8000_VRAM_END = .;

    AB4000_ROM_START = __romPos;
    AB4000_VRAM = ADDR(.AB4000);
    .AB4000 : AT(AB4000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AB4000_DATA_START = .;
        build/assets/smt1/data/AB4000.o(.data);
        AB4000_DATA_END = .;
        AB4000_DATA_SIZE = ABSOLUTE(AB4000_DATA_END - AB4000_DATA_START);
    }
    __romPos += SIZEOF(.AB4000);
    AB4000_ROM_END = __romPos;
    AB4000_VRAM_END = .;

    AB6800_ROM_START = __romPos;
    AB6800_VRAM = ADDR(.AB6800);
    .AB6800 : AT(AB6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AB6800_DATA_START = .;
        build/assets/smt1/data/AB6800.o(.data);
        AB6800_DATA_END = .;
        AB6800_DATA_SIZE = ABSOLUTE(AB6800_DATA_END - AB6800_DATA_START);
    }
    __romPos += SIZEOF(.AB6800);
    AB6800_ROM_END = __romPos;
    AB6800_VRAM_END = .;

    AC2800_ROM_START = __romPos;
    AC2800_VRAM = ADDR(.AC2800);
    .AC2800 : AT(AC2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AC2800_DATA_START = .;
        build/assets/smt1/data/AC2800.o(.data);
        AC2800_DATA_END = .;
        AC2800_DATA_SIZE = ABSOLUTE(AC2800_DATA_END - AC2800_DATA_START);
    }
    __romPos += SIZEOF(.AC2800);
    AC2800_ROM_END = __romPos;
    AC2800_VRAM_END = .;

    AC6000_ROM_START = __romPos;
    AC6000_VRAM = ADDR(.AC6000);
    .AC6000 : AT(AC6000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AC6000_DATA_START = .;
        build/assets/smt1/data/AC6000.o(.data);
        AC6000_DATA_END = .;
        AC6000_DATA_SIZE = ABSOLUTE(AC6000_DATA_END - AC6000_DATA_START);
    }
    __romPos += SIZEOF(.AC6000);
    AC6000_ROM_END = __romPos;
    AC6000_VRAM_END = .;

    ACF000_ROM_START = __romPos;
    ACF000_VRAM = ADDR(.ACF000);
    .ACF000 : AT(ACF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        ACF000_DATA_START = .;
        build/assets/smt1/data/ACF000.o(.data);
        ACF000_DATA_END = .;
        ACF000_DATA_SIZE = ABSOLUTE(ACF000_DATA_END - ACF000_DATA_START);
    }
    __romPos += SIZEOF(.ACF000);
    ACF000_ROM_END = __romPos;
    ACF000_VRAM_END = .;

    AD2800_ROM_START = __romPos;
    AD2800_VRAM = ADDR(.AD2800);
    .AD2800 : AT(AD2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AD2800_DATA_START = .;
        build/assets/smt1/data/AD2800.o(.data);
        AD2800_DATA_END = .;
        AD2800_DATA_SIZE = ABSOLUTE(AD2800_DATA_END - AD2800_DATA_START);
    }
    __romPos += SIZEOF(.AD2800);
    AD2800_ROM_END = __romPos;
    AD2800_VRAM_END = .;

    ADC000_ROM_START = __romPos;
    ADC000_VRAM = ADDR(.ADC000);
    .ADC000 : AT(ADC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        ADC000_DATA_START = .;
        build/assets/smt1/data/ADC000.o(.data);
        ADC000_DATA_END = .;
        ADC000_DATA_SIZE = ABSOLUTE(ADC000_DATA_END - ADC000_DATA_START);
    }
    __romPos += SIZEOF(.ADC000);
    ADC000_ROM_END = __romPos;
    ADC000_VRAM_END = .;

    ADF800_ROM_START = __romPos;
    ADF800_VRAM = ADDR(.ADF800);
    .ADF800 : AT(ADF800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        ADF800_DATA_START = .;
        build/assets/smt1/data/ADF800.o(.data);
        ADF800_DATA_END = .;
        ADF800_DATA_SIZE = ABSOLUTE(ADF800_DATA_END - ADF800_DATA_START);
    }
    __romPos += SIZEOF(.ADF800);
    ADF800_ROM_END = __romPos;
    ADF800_VRAM_END = .;

    AE8800_ROM_START = __romPos;
    AE8800_VRAM = ADDR(.AE8800);
    .AE8800 : AT(AE8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AE8800_DATA_START = .;
        build/assets/smt1/data/AE8800.o(.data);
        AE8800_DATA_END = .;
        AE8800_DATA_SIZE = ABSOLUTE(AE8800_DATA_END - AE8800_DATA_START);
    }
    __romPos += SIZEOF(.AE8800);
    AE8800_ROM_END = __romPos;
    AE8800_VRAM_END = .;

    AEA800_ROM_START = __romPos;
    AEA800_VRAM = ADDR(.AEA800);
    .AEA800 : AT(AEA800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AEA800_DATA_START = .;
        build/assets/smt1/data/AEA800.o(.data);
        AEA800_DATA_END = .;
        AEA800_DATA_SIZE = ABSOLUTE(AEA800_DATA_END - AEA800_DATA_START);
    }
    __romPos += SIZEOF(.AEA800);
    AEA800_ROM_END = __romPos;
    AEA800_VRAM_END = .;

    AEC800_ROM_START = __romPos;
    AEC800_VRAM = ADDR(.AEC800);
    .AEC800 : AT(AEC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AEC800_DATA_START = .;
        build/assets/smt1/data/AEC800.o(.data);
        AEC800_DATA_END = .;
        AEC800_DATA_SIZE = ABSOLUTE(AEC800_DATA_END - AEC800_DATA_START);
    }
    __romPos += SIZEOF(.AEC800);
    AEC800_ROM_END = __romPos;
    AEC800_VRAM_END = .;

    AEE800_ROM_START = __romPos;
    AEE800_VRAM = ADDR(.AEE800);
    .AEE800 : AT(AEE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AEE800_DATA_START = .;
        build/assets/smt1/data/AEE800.o(.data);
        AEE800_DATA_END = .;
        AEE800_DATA_SIZE = ABSOLUTE(AEE800_DATA_END - AEE800_DATA_START);
    }
    __romPos += SIZEOF(.AEE800);
    AEE800_ROM_END = __romPos;
    AEE800_VRAM_END = .;

    AF1000_ROM_START = __romPos;
    AF1000_VRAM = ADDR(.AF1000);
    .AF1000 : AT(AF1000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AF1000_DATA_START = .;
        build/assets/smt1/data/AF1000.o(.data);
        AF1000_DATA_END = .;
        AF1000_DATA_SIZE = ABSOLUTE(AF1000_DATA_END - AF1000_DATA_START);
    }
    __romPos += SIZEOF(.AF1000);
    AF1000_ROM_END = __romPos;
    AF1000_VRAM_END = .;

    AF3000_ROM_START = __romPos;
    AF3000_VRAM = ADDR(.AF3000);
    .AF3000 : AT(AF3000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AF3000_DATA_START = .;
        build/assets/smt1/data/AF3000.o(.data);
        AF3000_DATA_END = .;
        AF3000_DATA_SIZE = ABSOLUTE(AF3000_DATA_END - AF3000_DATA_START);
    }
    __romPos += SIZEOF(.AF3000);
    AF3000_ROM_END = __romPos;
    AF3000_VRAM_END = .;

    AF5000_ROM_START = __romPos;
    AF5000_VRAM = ADDR(.AF5000);
    .AF5000 : AT(AF5000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AF5000_DATA_START = .;
        build/assets/smt1/data/AF5000.o(.data);
        AF5000_DATA_END = .;
        AF5000_DATA_SIZE = ABSOLUTE(AF5000_DATA_END - AF5000_DATA_START);
    }
    __romPos += SIZEOF(.AF5000);
    AF5000_ROM_END = __romPos;
    AF5000_VRAM_END = .;

    AF6800_ROM_START = __romPos;
    AF6800_VRAM = ADDR(.AF6800);
    .AF6800 : AT(AF6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AF6800_DATA_START = .;
        build/assets/smt1/data/AF6800.o(.data);
        AF6800_DATA_END = .;
        AF6800_DATA_SIZE = ABSOLUTE(AF6800_DATA_END - AF6800_DATA_START);
    }
    __romPos += SIZEOF(.AF6800);
    AF6800_ROM_END = __romPos;
    AF6800_VRAM_END = .;

    AF8800_ROM_START = __romPos;
    AF8800_VRAM = ADDR(.AF8800);
    .AF8800 : AT(AF8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AF8800_DATA_START = .;
        build/assets/smt1/data/AF8800.o(.data);
        AF8800_DATA_END = .;
        AF8800_DATA_SIZE = ABSOLUTE(AF8800_DATA_END - AF8800_DATA_START);
    }
    __romPos += SIZEOF(.AF8800);
    AF8800_ROM_END = __romPos;
    AF8800_VRAM_END = .;

    AFA800_ROM_START = __romPos;
    AFA800_VRAM = ADDR(.AFA800);
    .AFA800 : AT(AFA800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AFA800_DATA_START = .;
        build/assets/smt1/data/AFA800.o(.data);
        AFA800_DATA_END = .;
        AFA800_DATA_SIZE = ABSOLUTE(AFA800_DATA_END - AFA800_DATA_START);
    }
    __romPos += SIZEOF(.AFA800);
    AFA800_ROM_END = __romPos;
    AFA800_VRAM_END = .;

    AFC800_ROM_START = __romPos;
    AFC800_VRAM = ADDR(.AFC800);
    .AFC800 : AT(AFC800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AFC800_DATA_START = .;
        build/assets/smt1/data/AFC800.o(.data);
        AFC800_DATA_END = .;
        AFC800_DATA_SIZE = ABSOLUTE(AFC800_DATA_END - AFC800_DATA_START);
    }
    __romPos += SIZEOF(.AFC800);
    AFC800_ROM_END = __romPos;
    AFC800_VRAM_END = .;

    AFE800_ROM_START = __romPos;
    AFE800_VRAM = ADDR(.AFE800);
    .AFE800 : AT(AFE800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        AFE800_DATA_START = .;
        build/assets/smt1/data/AFE800.o(.data);
        AFE800_DATA_END = .;
        AFE800_DATA_SIZE = ABSOLUTE(AFE800_DATA_END - AFE800_DATA_START);
    }
    __romPos += SIZEOF(.AFE800);
    AFE800_ROM_END = __romPos;
    AFE800_VRAM_END = .;

    B00800_ROM_START = __romPos;
    B00800_VRAM = ADDR(.B00800);
    .B00800 : AT(B00800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B00800_DATA_START = .;
        build/assets/smt1/data/B00800.o(.data);
        B00800_DATA_END = .;
        B00800_DATA_SIZE = ABSOLUTE(B00800_DATA_END - B00800_DATA_START);
    }
    __romPos += SIZEOF(.B00800);
    B00800_ROM_END = __romPos;
    B00800_VRAM_END = .;

    B02800_ROM_START = __romPos;
    B02800_VRAM = ADDR(.B02800);
    .B02800 : AT(B02800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B02800_DATA_START = .;
        build/assets/smt1/data/B02800.o(.data);
        B02800_DATA_END = .;
        B02800_DATA_SIZE = ABSOLUTE(B02800_DATA_END - B02800_DATA_START);
    }
    __romPos += SIZEOF(.B02800);
    B02800_ROM_END = __romPos;
    B02800_VRAM_END = .;

    B04800_ROM_START = __romPos;
    B04800_VRAM = ADDR(.B04800);
    .B04800 : AT(B04800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B04800_DATA_START = .;
        build/assets/smt1/data/B04800.o(.data);
        B04800_DATA_END = .;
        B04800_DATA_SIZE = ABSOLUTE(B04800_DATA_END - B04800_DATA_START);
    }
    __romPos += SIZEOF(.B04800);
    B04800_ROM_END = __romPos;
    B04800_VRAM_END = .;

    B06800_ROM_START = __romPos;
    B06800_VRAM = ADDR(.B06800);
    .B06800 : AT(B06800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B06800_DATA_START = .;
        build/assets/smt1/data/B06800.o(.data);
        B06800_DATA_END = .;
        B06800_DATA_SIZE = ABSOLUTE(B06800_DATA_END - B06800_DATA_START);
    }
    __romPos += SIZEOF(.B06800);
    B06800_ROM_END = __romPos;
    B06800_VRAM_END = .;

    B08800_ROM_START = __romPos;
    B08800_VRAM = ADDR(.B08800);
    .B08800 : AT(B08800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B08800_DATA_START = .;
        build/assets/smt1/data/B08800.o(.data);
        B08800_DATA_END = .;
        B08800_DATA_SIZE = ABSOLUTE(B08800_DATA_END - B08800_DATA_START);
    }
    __romPos += SIZEOF(.B08800);
    B08800_ROM_END = __romPos;
    B08800_VRAM_END = .;

    B0A800_ROM_START = __romPos;
    B0A800_VRAM = ADDR(.B0A800);
    .B0A800 : AT(B0A800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B0A800_DATA_START = .;
        build/assets/smt1/data/B0A800.o(.data);
        B0A800_DATA_END = .;
        B0A800_DATA_SIZE = ABSOLUTE(B0A800_DATA_END - B0A800_DATA_START);
    }
    __romPos += SIZEOF(.B0A800);
    B0A800_ROM_END = __romPos;
    B0A800_VRAM_END = .;

    B0C800_ROM_START = __romPos;
    B0C800_VRAM = ADDR(.B0C800);
    .B0C800 : AT(B0C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B0C800_DATA_START = .;
        build/assets/smt1/data/B0C800.o(.data);
        B0C800_DATA_END = .;
        B0C800_DATA_SIZE = ABSOLUTE(B0C800_DATA_END - B0C800_DATA_START);
    }
    __romPos += SIZEOF(.B0C800);
    B0C800_ROM_END = __romPos;
    B0C800_VRAM_END = .;

    B0E800_ROM_START = __romPos;
    B0E800_VRAM = ADDR(.B0E800);
    .B0E800 : AT(B0E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B0E800_DATA_START = .;
        build/assets/smt1/data/B0E800.o(.data);
        B0E800_DATA_END = .;
        B0E800_DATA_SIZE = ABSOLUTE(B0E800_DATA_END - B0E800_DATA_START);
    }
    __romPos += SIZEOF(.B0E800);
    B0E800_ROM_END = __romPos;
    B0E800_VRAM_END = .;

    B0F800_ROM_START = __romPos;
    B0F800_VRAM = ADDR(.B0F800);
    .B0F800 : AT(B0F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B0F800_DATA_START = .;
        build/assets/smt1/data/B0F800.o(.data);
        B0F800_DATA_END = .;
        B0F800_DATA_SIZE = ABSOLUTE(B0F800_DATA_END - B0F800_DATA_START);
    }
    __romPos += SIZEOF(.B0F800);
    B0F800_ROM_END = __romPos;
    B0F800_VRAM_END = .;

    B11000_ROM_START = __romPos;
    B11000_VRAM = ADDR(.B11000);
    .B11000 : AT(B11000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B11000_DATA_START = .;
        build/assets/smt1/data/B11000.o(.data);
        B11000_DATA_END = .;
        B11000_DATA_SIZE = ABSOLUTE(B11000_DATA_END - B11000_DATA_START);
    }
    __romPos += SIZEOF(.B11000);
    B11000_ROM_END = __romPos;
    B11000_VRAM_END = .;

    B11800_ROM_START = __romPos;
    B11800_VRAM = ADDR(.B11800);
    .B11800 : AT(B11800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B11800_DATA_START = .;
        build/assets/smt1/data/B11800.o(.data);
        B11800_DATA_END = .;
        B11800_DATA_SIZE = ABSOLUTE(B11800_DATA_END - B11800_DATA_START);
    }
    __romPos += SIZEOF(.B11800);
    B11800_ROM_END = __romPos;
    B11800_VRAM_END = .;

    B12800_ROM_START = __romPos;
    B12800_VRAM = ADDR(.B12800);
    .B12800 : AT(B12800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B12800_DATA_START = .;
        build/assets/smt1/data/B12800.o(.data);
        B12800_DATA_END = .;
        B12800_DATA_SIZE = ABSOLUTE(B12800_DATA_END - B12800_DATA_START);
    }
    __romPos += SIZEOF(.B12800);
    B12800_ROM_END = __romPos;
    B12800_VRAM_END = .;

    B14000_ROM_START = __romPos;
    B14000_VRAM = ADDR(.B14000);
    .B14000 : AT(B14000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B14000_DATA_START = .;
        build/assets/smt1/data/B14000.o(.data);
        B14000_DATA_END = .;
        B14000_DATA_SIZE = ABSOLUTE(B14000_DATA_END - B14000_DATA_START);
    }
    __romPos += SIZEOF(.B14000);
    B14000_ROM_END = __romPos;
    B14000_VRAM_END = .;

    B1C800_ROM_START = __romPos;
    B1C800_VRAM = ADDR(.B1C800);
    .B1C800 : AT(B1C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B1C800_DATA_START = .;
        build/assets/smt1/data/B1C800.o(.data);
        B1C800_DATA_END = .;
        B1C800_DATA_SIZE = ABSOLUTE(B1C800_DATA_END - B1C800_DATA_START);
    }
    __romPos += SIZEOF(.B1C800);
    B1C800_ROM_END = __romPos;
    B1C800_VRAM_END = .;

    B25000_ROM_START = __romPos;
    B25000_VRAM = ADDR(.B25000);
    .B25000 : AT(B25000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B25000_DATA_START = .;
        build/assets/smt1/data/B25000.o(.data);
        B25000_DATA_END = .;
        B25000_DATA_SIZE = ABSOLUTE(B25000_DATA_END - B25000_DATA_START);
    }
    __romPos += SIZEOF(.B25000);
    B25000_ROM_END = __romPos;
    B25000_VRAM_END = .;

    B2D800_ROM_START = __romPos;
    B2D800_VRAM = ADDR(.B2D800);
    .B2D800 : AT(B2D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B2D800_DATA_START = .;
        build/assets/smt1/data/B2D800.o(.data);
        B2D800_DATA_END = .;
        B2D800_DATA_SIZE = ABSOLUTE(B2D800_DATA_END - B2D800_DATA_START);
    }
    __romPos += SIZEOF(.B2D800);
    B2D800_ROM_END = __romPos;
    B2D800_VRAM_END = .;

    B36000_ROM_START = __romPos;
    B36000_VRAM = ADDR(.B36000);
    .B36000 : AT(B36000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B36000_DATA_START = .;
        build/assets/smt1/data/B36000.o(.data);
        B36000_DATA_END = .;
        B36000_DATA_SIZE = ABSOLUTE(B36000_DATA_END - B36000_DATA_START);
    }
    __romPos += SIZEOF(.B36000);
    B36000_ROM_END = __romPos;
    B36000_VRAM_END = .;

    B3E800_ROM_START = __romPos;
    B3E800_VRAM = ADDR(.B3E800);
    .B3E800 : AT(B3E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B3E800_DATA_START = .;
        build/assets/smt1/data/B3E800.o(.data);
        B3E800_DATA_END = .;
        B3E800_DATA_SIZE = ABSOLUTE(B3E800_DATA_END - B3E800_DATA_START);
    }
    __romPos += SIZEOF(.B3E800);
    B3E800_ROM_END = __romPos;
    B3E800_VRAM_END = .;

    B47000_ROM_START = __romPos;
    B47000_VRAM = ADDR(.B47000);
    .B47000 : AT(B47000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B47000_DATA_START = .;
        build/assets/smt1/data/B47000.o(.data);
        B47000_DATA_END = .;
        B47000_DATA_SIZE = ABSOLUTE(B47000_DATA_END - B47000_DATA_START);
    }
    __romPos += SIZEOF(.B47000);
    B47000_ROM_END = __romPos;
    B47000_VRAM_END = .;

    B4F800_ROM_START = __romPos;
    B4F800_VRAM = ADDR(.B4F800);
    .B4F800 : AT(B4F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B4F800_DATA_START = .;
        build/assets/smt1/data/B4F800.o(.data);
        B4F800_DATA_END = .;
        B4F800_DATA_SIZE = ABSOLUTE(B4F800_DATA_END - B4F800_DATA_START);
    }
    __romPos += SIZEOF(.B4F800);
    B4F800_ROM_END = __romPos;
    B4F800_VRAM_END = .;

    B58000_ROM_START = __romPos;
    B58000_VRAM = ADDR(.B58000);
    .B58000 : AT(B58000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B58000_DATA_START = .;
        build/assets/smt1/data/B58000.o(.data);
        B58000_DATA_END = .;
        B58000_DATA_SIZE = ABSOLUTE(B58000_DATA_END - B58000_DATA_START);
    }
    __romPos += SIZEOF(.B58000);
    B58000_ROM_END = __romPos;
    B58000_VRAM_END = .;

    B60800_ROM_START = __romPos;
    B60800_VRAM = ADDR(.B60800);
    .B60800 : AT(B60800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B60800_DATA_START = .;
        build/assets/smt1/data/B60800.o(.data);
        B60800_DATA_END = .;
        B60800_DATA_SIZE = ABSOLUTE(B60800_DATA_END - B60800_DATA_START);
    }
    __romPos += SIZEOF(.B60800);
    B60800_ROM_END = __romPos;
    B60800_VRAM_END = .;

    B69000_ROM_START = __romPos;
    B69000_VRAM = ADDR(.B69000);
    .B69000 : AT(B69000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B69000_DATA_START = .;
        build/assets/smt1/data/B69000.o(.data);
        B69000_DATA_END = .;
        B69000_DATA_SIZE = ABSOLUTE(B69000_DATA_END - B69000_DATA_START);
    }
    __romPos += SIZEOF(.B69000);
    B69000_ROM_END = __romPos;
    B69000_VRAM_END = .;

    B71800_ROM_START = __romPos;
    B71800_VRAM = ADDR(.B71800);
    .B71800 : AT(B71800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B71800_DATA_START = .;
        build/assets/smt1/data/B71800.o(.data);
        B71800_DATA_END = .;
        B71800_DATA_SIZE = ABSOLUTE(B71800_DATA_END - B71800_DATA_START);
    }
    __romPos += SIZEOF(.B71800);
    B71800_ROM_END = __romPos;
    B71800_VRAM_END = .;

    B7A000_ROM_START = __romPos;
    B7A000_VRAM = ADDR(.B7A000);
    .B7A000 : AT(B7A000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B7A000_DATA_START = .;
        build/assets/smt1/data/B7A000.o(.data);
        B7A000_DATA_END = .;
        B7A000_DATA_SIZE = ABSOLUTE(B7A000_DATA_END - B7A000_DATA_START);
    }
    __romPos += SIZEOF(.B7A000);
    B7A000_ROM_END = __romPos;
    B7A000_VRAM_END = .;

    B82800_ROM_START = __romPos;
    B82800_VRAM = ADDR(.B82800);
    .B82800 : AT(B82800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B82800_DATA_START = .;
        build/assets/smt1/data/B82800.o(.data);
        B82800_DATA_END = .;
        B82800_DATA_SIZE = ABSOLUTE(B82800_DATA_END - B82800_DATA_START);
    }
    __romPos += SIZEOF(.B82800);
    B82800_ROM_END = __romPos;
    B82800_VRAM_END = .;

    B8B000_ROM_START = __romPos;
    B8B000_VRAM = ADDR(.B8B000);
    .B8B000 : AT(B8B000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B8B000_DATA_START = .;
        build/assets/smt1/data/B8B000.o(.data);
        B8B000_DATA_END = .;
        B8B000_DATA_SIZE = ABSOLUTE(B8B000_DATA_END - B8B000_DATA_START);
    }
    __romPos += SIZEOF(.B8B000);
    B8B000_ROM_END = __romPos;
    B8B000_VRAM_END = .;

    B93800_ROM_START = __romPos;
    B93800_VRAM = ADDR(.B93800);
    .B93800 : AT(B93800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B93800_DATA_START = .;
        build/assets/smt1/data/B93800.o(.data);
        B93800_DATA_END = .;
        B93800_DATA_SIZE = ABSOLUTE(B93800_DATA_END - B93800_DATA_START);
    }
    __romPos += SIZEOF(.B93800);
    B93800_ROM_END = __romPos;
    B93800_VRAM_END = .;

    B9C000_ROM_START = __romPos;
    B9C000_VRAM = ADDR(.B9C000);
    .B9C000 : AT(B9C000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        B9C000_DATA_START = .;
        build/assets/smt1/data/B9C000.o(.data);
        B9C000_DATA_END = .;
        B9C000_DATA_SIZE = ABSOLUTE(B9C000_DATA_END - B9C000_DATA_START);
    }
    __romPos += SIZEOF(.B9C000);
    B9C000_ROM_END = __romPos;
    B9C000_VRAM_END = .;

    BA4800_ROM_START = __romPos;
    BA4800_VRAM = ADDR(.BA4800);
    .BA4800 : AT(BA4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BA4800_DATA_START = .;
        build/assets/smt1/data/BA4800.o(.data);
        BA4800_DATA_END = .;
        BA4800_DATA_SIZE = ABSOLUTE(BA4800_DATA_END - BA4800_DATA_START);
    }
    __romPos += SIZEOF(.BA4800);
    BA4800_ROM_END = __romPos;
    BA4800_VRAM_END = .;

    BAD000_ROM_START = __romPos;
    BAD000_VRAM = ADDR(.BAD000);
    .BAD000 : AT(BAD000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BAD000_DATA_START = .;
        build/assets/smt1/data/BAD000.o(.data);
        BAD000_DATA_END = .;
        BAD000_DATA_SIZE = ABSOLUTE(BAD000_DATA_END - BAD000_DATA_START);
    }
    __romPos += SIZEOF(.BAD000);
    BAD000_ROM_END = __romPos;
    BAD000_VRAM_END = .;

    BB5800_ROM_START = __romPos;
    BB5800_VRAM = ADDR(.BB5800);
    .BB5800 : AT(BB5800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BB5800_DATA_START = .;
        build/assets/smt1/data/BB5800.o(.data);
        BB5800_DATA_END = .;
        BB5800_DATA_SIZE = ABSOLUTE(BB5800_DATA_END - BB5800_DATA_START);
    }
    __romPos += SIZEOF(.BB5800);
    BB5800_ROM_END = __romPos;
    BB5800_VRAM_END = .;

    BBE000_ROM_START = __romPos;
    BBE000_VRAM = ADDR(.BBE000);
    .BBE000 : AT(BBE000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BBE000_DATA_START = .;
        build/assets/smt1/data/BBE000.o(.data);
        BBE000_DATA_END = .;
        BBE000_DATA_SIZE = ABSOLUTE(BBE000_DATA_END - BBE000_DATA_START);
    }
    __romPos += SIZEOF(.BBE000);
    BBE000_ROM_END = __romPos;
    BBE000_VRAM_END = .;

    BC6800_ROM_START = __romPos;
    BC6800_VRAM = ADDR(.BC6800);
    .BC6800 : AT(BC6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BC6800_DATA_START = .;
        build/assets/smt1/data/BC6800.o(.data);
        BC6800_DATA_END = .;
        BC6800_DATA_SIZE = ABSOLUTE(BC6800_DATA_END - BC6800_DATA_START);
    }
    __romPos += SIZEOF(.BC6800);
    BC6800_ROM_END = __romPos;
    BC6800_VRAM_END = .;

    BCF000_ROM_START = __romPos;
    BCF000_VRAM = ADDR(.BCF000);
    .BCF000 : AT(BCF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BCF000_DATA_START = .;
        build/assets/smt1/data/BCF000.o(.data);
        BCF000_DATA_END = .;
        BCF000_DATA_SIZE = ABSOLUTE(BCF000_DATA_END - BCF000_DATA_START);
    }
    __romPos += SIZEOF(.BCF000);
    BCF000_ROM_END = __romPos;
    BCF000_VRAM_END = .;

    BD7800_ROM_START = __romPos;
    BD7800_VRAM = ADDR(.BD7800);
    .BD7800 : AT(BD7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BD7800_DATA_START = .;
        build/assets/smt1/data/BD7800.o(.data);
        BD7800_DATA_END = .;
        BD7800_DATA_SIZE = ABSOLUTE(BD7800_DATA_END - BD7800_DATA_START);
    }
    __romPos += SIZEOF(.BD7800);
    BD7800_ROM_END = __romPos;
    BD7800_VRAM_END = .;

    BE0000_ROM_START = __romPos;
    BE0000_VRAM = ADDR(.BE0000);
    .BE0000 : AT(BE0000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BE0000_DATA_START = .;
        build/assets/smt1/data/BE0000.o(.data);
        BE0000_DATA_END = .;
        BE0000_DATA_SIZE = ABSOLUTE(BE0000_DATA_END - BE0000_DATA_START);
    }
    __romPos += SIZEOF(.BE0000);
    BE0000_ROM_END = __romPos;
    BE0000_VRAM_END = .;

    BE8800_ROM_START = __romPos;
    BE8800_VRAM = ADDR(.BE8800);
    .BE8800 : AT(BE8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BE8800_DATA_START = .;
        build/assets/smt1/data/BE8800.o(.data);
        BE8800_DATA_END = .;
        BE8800_DATA_SIZE = ABSOLUTE(BE8800_DATA_END - BE8800_DATA_START);
    }
    __romPos += SIZEOF(.BE8800);
    BE8800_ROM_END = __romPos;
    BE8800_VRAM_END = .;

    BF1000_ROM_START = __romPos;
    BF1000_VRAM = ADDR(.BF1000);
    .BF1000 : AT(BF1000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        BF1000_DATA_START = .;
        build/assets/smt1/data/BF1000.o(.data);
        BF1000_DATA_END = .;
        BF1000_DATA_SIZE = ABSOLUTE(BF1000_DATA_END - BF1000_DATA_START);
    }
    __romPos += SIZEOF(.BF1000);
    BF1000_ROM_END = __romPos;
    BF1000_VRAM_END = .;

    C02000_ROM_START = __romPos;
    C02000_VRAM = ADDR(.C02000);
    .C02000 : AT(C02000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C02000_DATA_START = .;
        build/assets/smt1/data/C02000.o(.data);
        C02000_DATA_END = .;
        C02000_DATA_SIZE = ABSOLUTE(C02000_DATA_END - C02000_DATA_START);
    }
    __romPos += SIZEOF(.C02000);
    C02000_ROM_END = __romPos;
    C02000_VRAM_END = .;

    C0A800_ROM_START = __romPos;
    C0A800_VRAM = ADDR(.C0A800);
    .C0A800 : AT(C0A800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C0A800_DATA_START = .;
        build/assets/smt1/data/C0A800.o(.data);
        C0A800_DATA_END = .;
        C0A800_DATA_SIZE = ABSOLUTE(C0A800_DATA_END - C0A800_DATA_START);
    }
    __romPos += SIZEOF(.C0A800);
    C0A800_ROM_END = __romPos;
    C0A800_VRAM_END = .;

    C13000_ROM_START = __romPos;
    C13000_VRAM = ADDR(.C13000);
    .C13000 : AT(C13000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C13000_DATA_START = .;
        build/assets/smt1/data/C13000.o(.data);
        C13000_DATA_END = .;
        C13000_DATA_SIZE = ABSOLUTE(C13000_DATA_END - C13000_DATA_START);
    }
    __romPos += SIZEOF(.C13000);
    C13000_ROM_END = __romPos;
    C13000_VRAM_END = .;

    C1B800_ROM_START = __romPos;
    C1B800_VRAM = ADDR(.C1B800);
    .C1B800 : AT(C1B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C1B800_DATA_START = .;
        build/assets/smt1/data/C1B800.o(.data);
        C1B800_DATA_END = .;
        C1B800_DATA_SIZE = ABSOLUTE(C1B800_DATA_END - C1B800_DATA_START);
    }
    __romPos += SIZEOF(.C1B800);
    C1B800_ROM_END = __romPos;
    C1B800_VRAM_END = .;

    C24000_ROM_START = __romPos;
    C24000_VRAM = ADDR(.C24000);
    .C24000 : AT(C24000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C24000_DATA_START = .;
        build/assets/smt1/data/C24000.o(.data);
        C24000_DATA_END = .;
        C24000_DATA_SIZE = ABSOLUTE(C24000_DATA_END - C24000_DATA_START);
    }
    __romPos += SIZEOF(.C24000);
    C24000_ROM_END = __romPos;
    C24000_VRAM_END = .;

    C2C800_ROM_START = __romPos;
    C2C800_VRAM = ADDR(.C2C800);
    .C2C800 : AT(C2C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C2C800_DATA_START = .;
        build/assets/smt1/data/C2C800.o(.data);
        C2C800_DATA_END = .;
        C2C800_DATA_SIZE = ABSOLUTE(C2C800_DATA_END - C2C800_DATA_START);
    }
    __romPos += SIZEOF(.C2C800);
    C2C800_ROM_END = __romPos;
    C2C800_VRAM_END = .;

    C35000_ROM_START = __romPos;
    C35000_VRAM = ADDR(.C35000);
    .C35000 : AT(C35000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C35000_DATA_START = .;
        build/assets/smt1/data/C35000.o(.data);
        C35000_DATA_END = .;
        C35000_DATA_SIZE = ABSOLUTE(C35000_DATA_END - C35000_DATA_START);
    }
    __romPos += SIZEOF(.C35000);
    C35000_ROM_END = __romPos;
    C35000_VRAM_END = .;

    C3D800_ROM_START = __romPos;
    C3D800_VRAM = ADDR(.C3D800);
    .C3D800 : AT(C3D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C3D800_DATA_START = .;
        build/assets/smt1/data/C3D800.o(.data);
        C3D800_DATA_END = .;
        C3D800_DATA_SIZE = ABSOLUTE(C3D800_DATA_END - C3D800_DATA_START);
    }
    __romPos += SIZEOF(.C3D800);
    C3D800_ROM_END = __romPos;
    C3D800_VRAM_END = .;

    C46000_ROM_START = __romPos;
    C46000_VRAM = ADDR(.C46000);
    .C46000 : AT(C46000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C46000_DATA_START = .;
        build/assets/smt1/data/C46000.o(.data);
        C46000_DATA_END = .;
        C46000_DATA_SIZE = ABSOLUTE(C46000_DATA_END - C46000_DATA_START);
    }
    __romPos += SIZEOF(.C46000);
    C46000_ROM_END = __romPos;
    C46000_VRAM_END = .;

    C4E800_ROM_START = __romPos;
    C4E800_VRAM = ADDR(.C4E800);
    .C4E800 : AT(C4E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C4E800_DATA_START = .;
        build/assets/smt1/data/C4E800.o(.data);
        C4E800_DATA_END = .;
        C4E800_DATA_SIZE = ABSOLUTE(C4E800_DATA_END - C4E800_DATA_START);
    }
    __romPos += SIZEOF(.C4E800);
    C4E800_ROM_END = __romPos;
    C4E800_VRAM_END = .;

    C57000_ROM_START = __romPos;
    C57000_VRAM = ADDR(.C57000);
    .C57000 : AT(C57000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C57000_DATA_START = .;
        build/assets/smt1/data/C57000.o(.data);
        C57000_DATA_END = .;
        C57000_DATA_SIZE = ABSOLUTE(C57000_DATA_END - C57000_DATA_START);
    }
    __romPos += SIZEOF(.C57000);
    C57000_ROM_END = __romPos;
    C57000_VRAM_END = .;

    C5F800_ROM_START = __romPos;
    C5F800_VRAM = ADDR(.C5F800);
    .C5F800 : AT(C5F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C5F800_DATA_START = .;
        build/assets/smt1/data/C5F800.o(.data);
        C5F800_DATA_END = .;
        C5F800_DATA_SIZE = ABSOLUTE(C5F800_DATA_END - C5F800_DATA_START);
    }
    __romPos += SIZEOF(.C5F800);
    C5F800_ROM_END = __romPos;
    C5F800_VRAM_END = .;

    C68000_ROM_START = __romPos;
    C68000_VRAM = ADDR(.C68000);
    .C68000 : AT(C68000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C68000_DATA_START = .;
        build/assets/smt1/data/C68000.o(.data);
        C68000_DATA_END = .;
        C68000_DATA_SIZE = ABSOLUTE(C68000_DATA_END - C68000_DATA_START);
    }
    __romPos += SIZEOF(.C68000);
    C68000_ROM_END = __romPos;
    C68000_VRAM_END = .;

    C70800_ROM_START = __romPos;
    C70800_VRAM = ADDR(.C70800);
    .C70800 : AT(C70800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C70800_DATA_START = .;
        build/assets/smt1/data/C70800.o(.data);
        C70800_DATA_END = .;
        C70800_DATA_SIZE = ABSOLUTE(C70800_DATA_END - C70800_DATA_START);
    }
    __romPos += SIZEOF(.C70800);
    C70800_ROM_END = __romPos;
    C70800_VRAM_END = .;

    C79000_ROM_START = __romPos;
    C79000_VRAM = ADDR(.C79000);
    .C79000 : AT(C79000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C79000_DATA_START = .;
        build/assets/smt1/data/C79000.o(.data);
        C79000_DATA_END = .;
        C79000_DATA_SIZE = ABSOLUTE(C79000_DATA_END - C79000_DATA_START);
    }
    __romPos += SIZEOF(.C79000);
    C79000_ROM_END = __romPos;
    C79000_VRAM_END = .;

    C81800_ROM_START = __romPos;
    C81800_VRAM = ADDR(.C81800);
    .C81800 : AT(C81800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C81800_DATA_START = .;
        build/assets/smt1/data/C81800.o(.data);
        C81800_DATA_END = .;
        C81800_DATA_SIZE = ABSOLUTE(C81800_DATA_END - C81800_DATA_START);
    }
    __romPos += SIZEOF(.C81800);
    C81800_ROM_END = __romPos;
    C81800_VRAM_END = .;

    C8A000_ROM_START = __romPos;
    C8A000_VRAM = ADDR(.C8A000);
    .C8A000 : AT(C8A000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C8A000_DATA_START = .;
        build/assets/smt1/data/C8A000.o(.data);
        C8A000_DATA_END = .;
        C8A000_DATA_SIZE = ABSOLUTE(C8A000_DATA_END - C8A000_DATA_START);
    }
    __romPos += SIZEOF(.C8A000);
    C8A000_ROM_END = __romPos;
    C8A000_VRAM_END = .;

    C92800_ROM_START = __romPos;
    C92800_VRAM = ADDR(.C92800);
    .C92800 : AT(C92800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C92800_DATA_START = .;
        build/assets/smt1/data/C92800.o(.data);
        C92800_DATA_END = .;
        C92800_DATA_SIZE = ABSOLUTE(C92800_DATA_END - C92800_DATA_START);
    }
    __romPos += SIZEOF(.C92800);
    C92800_ROM_END = __romPos;
    C92800_VRAM_END = .;

    C9B000_ROM_START = __romPos;
    C9B000_VRAM = ADDR(.C9B000);
    .C9B000 : AT(C9B000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        C9B000_DATA_START = .;
        build/assets/smt1/data/C9B000.o(.data);
        C9B000_DATA_END = .;
        C9B000_DATA_SIZE = ABSOLUTE(C9B000_DATA_END - C9B000_DATA_START);
    }
    __romPos += SIZEOF(.C9B000);
    C9B000_ROM_END = __romPos;
    C9B000_VRAM_END = .;

    CA3800_ROM_START = __romPos;
    CA3800_VRAM = ADDR(.CA3800);
    .CA3800 : AT(CA3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CA3800_DATA_START = .;
        build/assets/smt1/data/CA3800.o(.data);
        CA3800_DATA_END = .;
        CA3800_DATA_SIZE = ABSOLUTE(CA3800_DATA_END - CA3800_DATA_START);
    }
    __romPos += SIZEOF(.CA3800);
    CA3800_ROM_END = __romPos;
    CA3800_VRAM_END = .;

    CAC000_ROM_START = __romPos;
    CAC000_VRAM = ADDR(.CAC000);
    .CAC000 : AT(CAC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CAC000_DATA_START = .;
        build/assets/smt1/data/CAC000.o(.data);
        CAC000_DATA_END = .;
        CAC000_DATA_SIZE = ABSOLUTE(CAC000_DATA_END - CAC000_DATA_START);
    }
    __romPos += SIZEOF(.CAC000);
    CAC000_ROM_END = __romPos;
    CAC000_VRAM_END = .;

    CB4800_ROM_START = __romPos;
    CB4800_VRAM = ADDR(.CB4800);
    .CB4800 : AT(CB4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CB4800_DATA_START = .;
        build/assets/smt1/data/CB4800.o(.data);
        CB4800_DATA_END = .;
        CB4800_DATA_SIZE = ABSOLUTE(CB4800_DATA_END - CB4800_DATA_START);
    }
    __romPos += SIZEOF(.CB4800);
    CB4800_ROM_END = __romPos;
    CB4800_VRAM_END = .;

    CBD000_ROM_START = __romPos;
    CBD000_VRAM = ADDR(.CBD000);
    .CBD000 : AT(CBD000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CBD000_DATA_START = .;
        build/assets/smt1/data/CBD000.o(.data);
        CBD000_DATA_END = .;
        CBD000_DATA_SIZE = ABSOLUTE(CBD000_DATA_END - CBD000_DATA_START);
    }
    __romPos += SIZEOF(.CBD000);
    CBD000_ROM_END = __romPos;
    CBD000_VRAM_END = .;

    CC5800_ROM_START = __romPos;
    CC5800_VRAM = ADDR(.CC5800);
    .CC5800 : AT(CC5800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CC5800_DATA_START = .;
        build/assets/smt1/data/CC5800.o(.data);
        CC5800_DATA_END = .;
        CC5800_DATA_SIZE = ABSOLUTE(CC5800_DATA_END - CC5800_DATA_START);
    }
    __romPos += SIZEOF(.CC5800);
    CC5800_ROM_END = __romPos;
    CC5800_VRAM_END = .;

    CCE000_ROM_START = __romPos;
    CCE000_VRAM = ADDR(.CCE000);
    .CCE000 : AT(CCE000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CCE000_DATA_START = .;
        build/assets/smt1/data/CCE000.o(.data);
        CCE000_DATA_END = .;
        CCE000_DATA_SIZE = ABSOLUTE(CCE000_DATA_END - CCE000_DATA_START);
    }
    __romPos += SIZEOF(.CCE000);
    CCE000_ROM_END = __romPos;
    CCE000_VRAM_END = .;

    CD6800_ROM_START = __romPos;
    CD6800_VRAM = ADDR(.CD6800);
    .CD6800 : AT(CD6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CD6800_DATA_START = .;
        build/assets/smt1/data/CD6800.o(.data);
        CD6800_DATA_END = .;
        CD6800_DATA_SIZE = ABSOLUTE(CD6800_DATA_END - CD6800_DATA_START);
    }
    __romPos += SIZEOF(.CD6800);
    CD6800_ROM_END = __romPos;
    CD6800_VRAM_END = .;

    CDF000_ROM_START = __romPos;
    CDF000_VRAM = ADDR(.CDF000);
    .CDF000 : AT(CDF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CDF000_DATA_START = .;
        build/assets/smt1/data/CDF000.o(.data);
        CDF000_DATA_END = .;
        CDF000_DATA_SIZE = ABSOLUTE(CDF000_DATA_END - CDF000_DATA_START);
    }
    __romPos += SIZEOF(.CDF000);
    CDF000_ROM_END = __romPos;
    CDF000_VRAM_END = .;

    CE7800_ROM_START = __romPos;
    CE7800_VRAM = ADDR(.CE7800);
    .CE7800 : AT(CE7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CE7800_DATA_START = .;
        build/assets/smt1/data/CE7800.o(.data);
        CE7800_DATA_END = .;
        CE7800_DATA_SIZE = ABSOLUTE(CE7800_DATA_END - CE7800_DATA_START);
    }
    __romPos += SIZEOF(.CE7800);
    CE7800_ROM_END = __romPos;
    CE7800_VRAM_END = .;

    CF0000_ROM_START = __romPos;
    CF0000_VRAM = ADDR(.CF0000);
    .CF0000 : AT(CF0000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CF0000_DATA_START = .;
        build/assets/smt1/data/CF0000.o(.data);
        CF0000_DATA_END = .;
        CF0000_DATA_SIZE = ABSOLUTE(CF0000_DATA_END - CF0000_DATA_START);
    }
    __romPos += SIZEOF(.CF0000);
    CF0000_ROM_END = __romPos;
    CF0000_VRAM_END = .;

    CF8800_ROM_START = __romPos;
    CF8800_VRAM = ADDR(.CF8800);
    .CF8800 : AT(CF8800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        CF8800_DATA_START = .;
        build/assets/smt1/data/CF8800.o(.data);
        CF8800_DATA_END = .;
        CF8800_DATA_SIZE = ABSOLUTE(CF8800_DATA_END - CF8800_DATA_START);
    }
    __romPos += SIZEOF(.CF8800);
    CF8800_ROM_END = __romPos;
    CF8800_VRAM_END = .;

    D01000_ROM_START = __romPos;
    D01000_VRAM = ADDR(.D01000);
    .D01000 : AT(D01000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D01000_DATA_START = .;
        build/assets/smt1/data/D01000.o(.data);
        D01000_DATA_END = .;
        D01000_DATA_SIZE = ABSOLUTE(D01000_DATA_END - D01000_DATA_START);
    }
    __romPos += SIZEOF(.D01000);
    D01000_ROM_END = __romPos;
    D01000_VRAM_END = .;

    D09800_ROM_START = __romPos;
    D09800_VRAM = ADDR(.D09800);
    .D09800 : AT(D09800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D09800_DATA_START = .;
        build/assets/smt1/data/D09800.o(.data);
        D09800_DATA_END = .;
        D09800_DATA_SIZE = ABSOLUTE(D09800_DATA_END - D09800_DATA_START);
    }
    __romPos += SIZEOF(.D09800);
    D09800_ROM_END = __romPos;
    D09800_VRAM_END = .;

    D12000_ROM_START = __romPos;
    D12000_VRAM = ADDR(.D12000);
    .D12000 : AT(D12000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D12000_DATA_START = .;
        build/assets/smt1/data/D12000.o(.data);
        D12000_DATA_END = .;
        D12000_DATA_SIZE = ABSOLUTE(D12000_DATA_END - D12000_DATA_START);
    }
    __romPos += SIZEOF(.D12000);
    D12000_ROM_END = __romPos;
    D12000_VRAM_END = .;

    D1A800_ROM_START = __romPos;
    D1A800_VRAM = ADDR(.D1A800);
    .D1A800 : AT(D1A800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D1A800_DATA_START = .;
        build/assets/smt1/data/D1A800.o(.data);
        D1A800_DATA_END = .;
        D1A800_DATA_SIZE = ABSOLUTE(D1A800_DATA_END - D1A800_DATA_START);
    }
    __romPos += SIZEOF(.D1A800);
    D1A800_ROM_END = __romPos;
    D1A800_VRAM_END = .;

    D23000_ROM_START = __romPos;
    D23000_VRAM = ADDR(.D23000);
    .D23000 : AT(D23000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D23000_DATA_START = .;
        build/assets/smt1/data/D23000.o(.data);
        D23000_DATA_END = .;
        D23000_DATA_SIZE = ABSOLUTE(D23000_DATA_END - D23000_DATA_START);
    }
    __romPos += SIZEOF(.D23000);
    D23000_ROM_END = __romPos;
    D23000_VRAM_END = .;

    D2B800_ROM_START = __romPos;
    D2B800_VRAM = ADDR(.D2B800);
    .D2B800 : AT(D2B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D2B800_DATA_START = .;
        build/assets/smt1/data/D2B800.o(.data);
        D2B800_DATA_END = .;
        D2B800_DATA_SIZE = ABSOLUTE(D2B800_DATA_END - D2B800_DATA_START);
    }
    __romPos += SIZEOF(.D2B800);
    D2B800_ROM_END = __romPos;
    D2B800_VRAM_END = .;

    D34000_ROM_START = __romPos;
    D34000_VRAM = ADDR(.D34000);
    .D34000 : AT(D34000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D34000_DATA_START = .;
        build/assets/smt1/data/D34000.o(.data);
        D34000_DATA_END = .;
        D34000_DATA_SIZE = ABSOLUTE(D34000_DATA_END - D34000_DATA_START);
    }
    __romPos += SIZEOF(.D34000);
    D34000_ROM_END = __romPos;
    D34000_VRAM_END = .;

    D3C800_ROM_START = __romPos;
    D3C800_VRAM = ADDR(.D3C800);
    .D3C800 : AT(D3C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D3C800_DATA_START = .;
        build/assets/smt1/data/D3C800.o(.data);
        D3C800_DATA_END = .;
        D3C800_DATA_SIZE = ABSOLUTE(D3C800_DATA_END - D3C800_DATA_START);
    }
    __romPos += SIZEOF(.D3C800);
    D3C800_ROM_END = __romPos;
    D3C800_VRAM_END = .;

    D45000_ROM_START = __romPos;
    D45000_VRAM = ADDR(.D45000);
    .D45000 : AT(D45000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D45000_DATA_START = .;
        build/assets/smt1/data/D45000.o(.data);
        D45000_DATA_END = .;
        D45000_DATA_SIZE = ABSOLUTE(D45000_DATA_END - D45000_DATA_START);
    }
    __romPos += SIZEOF(.D45000);
    D45000_ROM_END = __romPos;
    D45000_VRAM_END = .;

    D4D800_ROM_START = __romPos;
    D4D800_VRAM = ADDR(.D4D800);
    .D4D800 : AT(D4D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D4D800_DATA_START = .;
        build/assets/smt1/data/D4D800.o(.data);
        D4D800_DATA_END = .;
        D4D800_DATA_SIZE = ABSOLUTE(D4D800_DATA_END - D4D800_DATA_START);
    }
    __romPos += SIZEOF(.D4D800);
    D4D800_ROM_END = __romPos;
    D4D800_VRAM_END = .;

    D56000_ROM_START = __romPos;
    D56000_VRAM = ADDR(.D56000);
    .D56000 : AT(D56000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D56000_DATA_START = .;
        build/assets/smt1/data/D56000.o(.data);
        D56000_DATA_END = .;
        D56000_DATA_SIZE = ABSOLUTE(D56000_DATA_END - D56000_DATA_START);
    }
    __romPos += SIZEOF(.D56000);
    D56000_ROM_END = __romPos;
    D56000_VRAM_END = .;

    D5E800_ROM_START = __romPos;
    D5E800_VRAM = ADDR(.D5E800);
    .D5E800 : AT(D5E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D5E800_DATA_START = .;
        build/assets/smt1/data/D5E800.o(.data);
        D5E800_DATA_END = .;
        D5E800_DATA_SIZE = ABSOLUTE(D5E800_DATA_END - D5E800_DATA_START);
    }
    __romPos += SIZEOF(.D5E800);
    D5E800_ROM_END = __romPos;
    D5E800_VRAM_END = .;

    D67000_ROM_START = __romPos;
    D67000_VRAM = ADDR(.D67000);
    .D67000 : AT(D67000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D67000_DATA_START = .;
        build/assets/smt1/data/D67000.o(.data);
        D67000_DATA_END = .;
        D67000_DATA_SIZE = ABSOLUTE(D67000_DATA_END - D67000_DATA_START);
    }
    __romPos += SIZEOF(.D67000);
    D67000_ROM_END = __romPos;
    D67000_VRAM_END = .;

    D6F800_ROM_START = __romPos;
    D6F800_VRAM = ADDR(.D6F800);
    .D6F800 : AT(D6F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D6F800_DATA_START = .;
        build/assets/smt1/data/D6F800.o(.data);
        D6F800_DATA_END = .;
        D6F800_DATA_SIZE = ABSOLUTE(D6F800_DATA_END - D6F800_DATA_START);
    }
    __romPos += SIZEOF(.D6F800);
    D6F800_ROM_END = __romPos;
    D6F800_VRAM_END = .;

    D78000_ROM_START = __romPos;
    D78000_VRAM = ADDR(.D78000);
    .D78000 : AT(D78000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D78000_DATA_START = .;
        build/assets/smt1/data/D78000.o(.data);
        D78000_DATA_END = .;
        D78000_DATA_SIZE = ABSOLUTE(D78000_DATA_END - D78000_DATA_START);
    }
    __romPos += SIZEOF(.D78000);
    D78000_ROM_END = __romPos;
    D78000_VRAM_END = .;

    D80800_ROM_START = __romPos;
    D80800_VRAM = ADDR(.D80800);
    .D80800 : AT(D80800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D80800_DATA_START = .;
        build/assets/smt1/data/D80800.o(.data);
        D80800_DATA_END = .;
        D80800_DATA_SIZE = ABSOLUTE(D80800_DATA_END - D80800_DATA_START);
    }
    __romPos += SIZEOF(.D80800);
    D80800_ROM_END = __romPos;
    D80800_VRAM_END = .;

    D89000_ROM_START = __romPos;
    D89000_VRAM = ADDR(.D89000);
    .D89000 : AT(D89000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D89000_DATA_START = .;
        build/assets/smt1/data/D89000.o(.data);
        D89000_DATA_END = .;
        D89000_DATA_SIZE = ABSOLUTE(D89000_DATA_END - D89000_DATA_START);
    }
    __romPos += SIZEOF(.D89000);
    D89000_ROM_END = __romPos;
    D89000_VRAM_END = .;

    D91800_ROM_START = __romPos;
    D91800_VRAM = ADDR(.D91800);
    .D91800 : AT(D91800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D91800_DATA_START = .;
        build/assets/smt1/data/D91800.o(.data);
        D91800_DATA_END = .;
        D91800_DATA_SIZE = ABSOLUTE(D91800_DATA_END - D91800_DATA_START);
    }
    __romPos += SIZEOF(.D91800);
    D91800_ROM_END = __romPos;
    D91800_VRAM_END = .;

    D9A000_ROM_START = __romPos;
    D9A000_VRAM = ADDR(.D9A000);
    .D9A000 : AT(D9A000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        D9A000_DATA_START = .;
        build/assets/smt1/data/D9A000.o(.data);
        D9A000_DATA_END = .;
        D9A000_DATA_SIZE = ABSOLUTE(D9A000_DATA_END - D9A000_DATA_START);
    }
    __romPos += SIZEOF(.D9A000);
    D9A000_ROM_END = __romPos;
    D9A000_VRAM_END = .;

    DA2800_ROM_START = __romPos;
    DA2800_VRAM = ADDR(.DA2800);
    .DA2800 : AT(DA2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DA2800_DATA_START = .;
        build/assets/smt1/data/DA2800.o(.data);
        DA2800_DATA_END = .;
        DA2800_DATA_SIZE = ABSOLUTE(DA2800_DATA_END - DA2800_DATA_START);
    }
    __romPos += SIZEOF(.DA2800);
    DA2800_ROM_END = __romPos;
    DA2800_VRAM_END = .;

    DAB000_ROM_START = __romPos;
    DAB000_VRAM = ADDR(.DAB000);
    .DAB000 : AT(DAB000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DAB000_DATA_START = .;
        build/assets/smt1/data/DAB000.o(.data);
        DAB000_DATA_END = .;
        DAB000_DATA_SIZE = ABSOLUTE(DAB000_DATA_END - DAB000_DATA_START);
    }
    __romPos += SIZEOF(.DAB000);
    DAB000_ROM_END = __romPos;
    DAB000_VRAM_END = .;

    DB3800_ROM_START = __romPos;
    DB3800_VRAM = ADDR(.DB3800);
    .DB3800 : AT(DB3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DB3800_DATA_START = .;
        build/assets/smt1/data/DB3800.o(.data);
        DB3800_DATA_END = .;
        DB3800_DATA_SIZE = ABSOLUTE(DB3800_DATA_END - DB3800_DATA_START);
    }
    __romPos += SIZEOF(.DB3800);
    DB3800_ROM_END = __romPos;
    DB3800_VRAM_END = .;

    DBC000_ROM_START = __romPos;
    DBC000_VRAM = ADDR(.DBC000);
    .DBC000 : AT(DBC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DBC000_DATA_START = .;
        build/assets/smt1/data/DBC000.o(.data);
        DBC000_DATA_END = .;
        DBC000_DATA_SIZE = ABSOLUTE(DBC000_DATA_END - DBC000_DATA_START);
    }
    __romPos += SIZEOF(.DBC000);
    DBC000_ROM_END = __romPos;
    DBC000_VRAM_END = .;

    DC4800_ROM_START = __romPos;
    DC4800_VRAM = ADDR(.DC4800);
    .DC4800 : AT(DC4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DC4800_DATA_START = .;
        build/assets/smt1/data/DC4800.o(.data);
        DC4800_DATA_END = .;
        DC4800_DATA_SIZE = ABSOLUTE(DC4800_DATA_END - DC4800_DATA_START);
    }
    __romPos += SIZEOF(.DC4800);
    DC4800_ROM_END = __romPos;
    DC4800_VRAM_END = .;

    DCD000_ROM_START = __romPos;
    DCD000_VRAM = ADDR(.DCD000);
    .DCD000 : AT(DCD000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DCD000_DATA_START = .;
        build/assets/smt1/data/DCD000.o(.data);
        DCD000_DATA_END = .;
        DCD000_DATA_SIZE = ABSOLUTE(DCD000_DATA_END - DCD000_DATA_START);
    }
    __romPos += SIZEOF(.DCD000);
    DCD000_ROM_END = __romPos;
    DCD000_VRAM_END = .;

    DD5800_ROM_START = __romPos;
    DD5800_VRAM = ADDR(.DD5800);
    .DD5800 : AT(DD5800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DD5800_DATA_START = .;
        build/assets/smt1/data/DD5800.o(.data);
        DD5800_DATA_END = .;
        DD5800_DATA_SIZE = ABSOLUTE(DD5800_DATA_END - DD5800_DATA_START);
    }
    __romPos += SIZEOF(.DD5800);
    DD5800_ROM_END = __romPos;
    DD5800_VRAM_END = .;

    DDE000_ROM_START = __romPos;
    DDE000_VRAM = ADDR(.DDE000);
    .DDE000 : AT(DDE000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DDE000_DATA_START = .;
        build/assets/smt1/data/DDE000.o(.data);
        DDE000_DATA_END = .;
        DDE000_DATA_SIZE = ABSOLUTE(DDE000_DATA_END - DDE000_DATA_START);
    }
    __romPos += SIZEOF(.DDE000);
    DDE000_ROM_END = __romPos;
    DDE000_VRAM_END = .;

    DE6800_ROM_START = __romPos;
    DE6800_VRAM = ADDR(.DE6800);
    .DE6800 : AT(DE6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DE6800_DATA_START = .;
        build/assets/smt1/data/DE6800.o(.data);
        DE6800_DATA_END = .;
        DE6800_DATA_SIZE = ABSOLUTE(DE6800_DATA_END - DE6800_DATA_START);
    }
    __romPos += SIZEOF(.DE6800);
    DE6800_ROM_END = __romPos;
    DE6800_VRAM_END = .;

    DEF000_ROM_START = __romPos;
    DEF000_VRAM = ADDR(.DEF000);
    .DEF000 : AT(DEF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DEF000_DATA_START = .;
        build/assets/smt1/data/DEF000.o(.data);
        DEF000_DATA_END = .;
        DEF000_DATA_SIZE = ABSOLUTE(DEF000_DATA_END - DEF000_DATA_START);
    }
    __romPos += SIZEOF(.DEF000);
    DEF000_ROM_END = __romPos;
    DEF000_VRAM_END = .;

    DF7800_ROM_START = __romPos;
    DF7800_VRAM = ADDR(.DF7800);
    .DF7800 : AT(DF7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        DF7800_DATA_START = .;
        build/assets/smt1/data/DF7800.o(.data);
        DF7800_DATA_END = .;
        DF7800_DATA_SIZE = ABSOLUTE(DF7800_DATA_END - DF7800_DATA_START);
    }
    __romPos += SIZEOF(.DF7800);
    DF7800_ROM_END = __romPos;
    DF7800_VRAM_END = .;

    E00000_ROM_START = __romPos;
    E00000_VRAM = ADDR(.E00000);
    .E00000 : AT(E00000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E00000_DATA_START = .;
        build/assets/smt1/data/E00000.o(.data);
        E00000_DATA_END = .;
        E00000_DATA_SIZE = ABSOLUTE(E00000_DATA_END - E00000_DATA_START);
    }
    __romPos += SIZEOF(.E00000);
    E00000_ROM_END = __romPos;
    E00000_VRAM_END = .;

    E08800_ROM_START = __romPos;
    E08800_VRAM = ADDR(.E08800);
    .E08800 : AT(E08800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E08800_DATA_START = .;
        build/assets/smt1/data/E08800.o(.data);
        E08800_DATA_END = .;
        E08800_DATA_SIZE = ABSOLUTE(E08800_DATA_END - E08800_DATA_START);
    }
    __romPos += SIZEOF(.E08800);
    E08800_ROM_END = __romPos;
    E08800_VRAM_END = .;

    E11000_ROM_START = __romPos;
    E11000_VRAM = ADDR(.E11000);
    .E11000 : AT(E11000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E11000_DATA_START = .;
        build/assets/smt1/data/E11000.o(.data);
        E11000_DATA_END = .;
        E11000_DATA_SIZE = ABSOLUTE(E11000_DATA_END - E11000_DATA_START);
    }
    __romPos += SIZEOF(.E11000);
    E11000_ROM_END = __romPos;
    E11000_VRAM_END = .;

    E19800_ROM_START = __romPos;
    E19800_VRAM = ADDR(.E19800);
    .E19800 : AT(E19800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E19800_DATA_START = .;
        build/assets/smt1/data/E19800.o(.data);
        E19800_DATA_END = .;
        E19800_DATA_SIZE = ABSOLUTE(E19800_DATA_END - E19800_DATA_START);
    }
    __romPos += SIZEOF(.E19800);
    E19800_ROM_END = __romPos;
    E19800_VRAM_END = .;

    E22000_ROM_START = __romPos;
    E22000_VRAM = ADDR(.E22000);
    .E22000 : AT(E22000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E22000_DATA_START = .;
        build/assets/smt1/data/E22000.o(.data);
        E22000_DATA_END = .;
        E22000_DATA_SIZE = ABSOLUTE(E22000_DATA_END - E22000_DATA_START);
    }
    __romPos += SIZEOF(.E22000);
    E22000_ROM_END = __romPos;
    E22000_VRAM_END = .;

    E2A800_ROM_START = __romPos;
    E2A800_VRAM = ADDR(.E2A800);
    .E2A800 : AT(E2A800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E2A800_DATA_START = .;
        build/assets/smt1/data/E2A800.o(.data);
        E2A800_DATA_END = .;
        E2A800_DATA_SIZE = ABSOLUTE(E2A800_DATA_END - E2A800_DATA_START);
    }
    __romPos += SIZEOF(.E2A800);
    E2A800_ROM_END = __romPos;
    E2A800_VRAM_END = .;

    E33000_ROM_START = __romPos;
    E33000_VRAM = ADDR(.E33000);
    .E33000 : AT(E33000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E33000_DATA_START = .;
        build/assets/smt1/data/E33000.o(.data);
        E33000_DATA_END = .;
        E33000_DATA_SIZE = ABSOLUTE(E33000_DATA_END - E33000_DATA_START);
    }
    __romPos += SIZEOF(.E33000);
    E33000_ROM_END = __romPos;
    E33000_VRAM_END = .;

    E3B800_ROM_START = __romPos;
    E3B800_VRAM = ADDR(.E3B800);
    .E3B800 : AT(E3B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E3B800_DATA_START = .;
        build/assets/smt1/data/E3B800.o(.data);
        E3B800_DATA_END = .;
        E3B800_DATA_SIZE = ABSOLUTE(E3B800_DATA_END - E3B800_DATA_START);
    }
    __romPos += SIZEOF(.E3B800);
    E3B800_ROM_END = __romPos;
    E3B800_VRAM_END = .;

    E44000_ROM_START = __romPos;
    E44000_VRAM = ADDR(.E44000);
    .E44000 : AT(E44000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E44000_DATA_START = .;
        build/assets/smt1/data/E44000.o(.data);
        E44000_DATA_END = .;
        E44000_DATA_SIZE = ABSOLUTE(E44000_DATA_END - E44000_DATA_START);
    }
    __romPos += SIZEOF(.E44000);
    E44000_ROM_END = __romPos;
    E44000_VRAM_END = .;

    E4C800_ROM_START = __romPos;
    E4C800_VRAM = ADDR(.E4C800);
    .E4C800 : AT(E4C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E4C800_DATA_START = .;
        build/assets/smt1/data/E4C800.o(.data);
        E4C800_DATA_END = .;
        E4C800_DATA_SIZE = ABSOLUTE(E4C800_DATA_END - E4C800_DATA_START);
    }
    __romPos += SIZEOF(.E4C800);
    E4C800_ROM_END = __romPos;
    E4C800_VRAM_END = .;

    E55000_ROM_START = __romPos;
    E55000_VRAM = ADDR(.E55000);
    .E55000 : AT(E55000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E55000_DATA_START = .;
        build/assets/smt1/data/E55000.o(.data);
        E55000_DATA_END = .;
        E55000_DATA_SIZE = ABSOLUTE(E55000_DATA_END - E55000_DATA_START);
    }
    __romPos += SIZEOF(.E55000);
    E55000_ROM_END = __romPos;
    E55000_VRAM_END = .;

    E5D800_ROM_START = __romPos;
    E5D800_VRAM = ADDR(.E5D800);
    .E5D800 : AT(E5D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E5D800_DATA_START = .;
        build/assets/smt1/data/E5D800.o(.data);
        E5D800_DATA_END = .;
        E5D800_DATA_SIZE = ABSOLUTE(E5D800_DATA_END - E5D800_DATA_START);
    }
    __romPos += SIZEOF(.E5D800);
    E5D800_ROM_END = __romPos;
    E5D800_VRAM_END = .;

    E66000_ROM_START = __romPos;
    E66000_VRAM = ADDR(.E66000);
    .E66000 : AT(E66000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E66000_DATA_START = .;
        build/assets/smt1/data/E66000.o(.data);
        E66000_DATA_END = .;
        E66000_DATA_SIZE = ABSOLUTE(E66000_DATA_END - E66000_DATA_START);
    }
    __romPos += SIZEOF(.E66000);
    E66000_ROM_END = __romPos;
    E66000_VRAM_END = .;

    E6E800_ROM_START = __romPos;
    E6E800_VRAM = ADDR(.E6E800);
    .E6E800 : AT(E6E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E6E800_DATA_START = .;
        build/assets/smt1/data/E6E800.o(.data);
        E6E800_DATA_END = .;
        E6E800_DATA_SIZE = ABSOLUTE(E6E800_DATA_END - E6E800_DATA_START);
    }
    __romPos += SIZEOF(.E6E800);
    E6E800_ROM_END = __romPos;
    E6E800_VRAM_END = .;

    E77000_ROM_START = __romPos;
    E77000_VRAM = ADDR(.E77000);
    .E77000 : AT(E77000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E77000_DATA_START = .;
        build/assets/smt1/data/E77000.o(.data);
        E77000_DATA_END = .;
        E77000_DATA_SIZE = ABSOLUTE(E77000_DATA_END - E77000_DATA_START);
    }
    __romPos += SIZEOF(.E77000);
    E77000_ROM_END = __romPos;
    E77000_VRAM_END = .;

    E7F800_ROM_START = __romPos;
    E7F800_VRAM = ADDR(.E7F800);
    .E7F800 : AT(E7F800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E7F800_DATA_START = .;
        build/assets/smt1/data/E7F800.o(.data);
        E7F800_DATA_END = .;
        E7F800_DATA_SIZE = ABSOLUTE(E7F800_DATA_END - E7F800_DATA_START);
    }
    __romPos += SIZEOF(.E7F800);
    E7F800_ROM_END = __romPos;
    E7F800_VRAM_END = .;

    E88000_ROM_START = __romPos;
    E88000_VRAM = ADDR(.E88000);
    .E88000 : AT(E88000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E88000_DATA_START = .;
        build/assets/smt1/data/E88000.o(.data);
        E88000_DATA_END = .;
        E88000_DATA_SIZE = ABSOLUTE(E88000_DATA_END - E88000_DATA_START);
    }
    __romPos += SIZEOF(.E88000);
    E88000_ROM_END = __romPos;
    E88000_VRAM_END = .;

    E90800_ROM_START = __romPos;
    E90800_VRAM = ADDR(.E90800);
    .E90800 : AT(E90800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E90800_DATA_START = .;
        build/assets/smt1/data/E90800.o(.data);
        E90800_DATA_END = .;
        E90800_DATA_SIZE = ABSOLUTE(E90800_DATA_END - E90800_DATA_START);
    }
    __romPos += SIZEOF(.E90800);
    E90800_ROM_END = __romPos;
    E90800_VRAM_END = .;

    E99000_ROM_START = __romPos;
    E99000_VRAM = ADDR(.E99000);
    .E99000 : AT(E99000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        E99000_DATA_START = .;
        build/assets/smt1/data/E99000.o(.data);
        E99000_DATA_END = .;
        E99000_DATA_SIZE = ABSOLUTE(E99000_DATA_END - E99000_DATA_START);
    }
    __romPos += SIZEOF(.E99000);
    E99000_ROM_END = __romPos;
    E99000_VRAM_END = .;

    EA1800_ROM_START = __romPos;
    EA1800_VRAM = ADDR(.EA1800);
    .EA1800 : AT(EA1800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EA1800_DATA_START = .;
        build/assets/smt1/data/EA1800.o(.data);
        EA1800_DATA_END = .;
        EA1800_DATA_SIZE = ABSOLUTE(EA1800_DATA_END - EA1800_DATA_START);
    }
    __romPos += SIZEOF(.EA1800);
    EA1800_ROM_END = __romPos;
    EA1800_VRAM_END = .;

    EAA000_ROM_START = __romPos;
    EAA000_VRAM = ADDR(.EAA000);
    .EAA000 : AT(EAA000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EAA000_DATA_START = .;
        build/assets/smt1/data/EAA000.o(.data);
        EAA000_DATA_END = .;
        EAA000_DATA_SIZE = ABSOLUTE(EAA000_DATA_END - EAA000_DATA_START);
    }
    __romPos += SIZEOF(.EAA000);
    EAA000_ROM_END = __romPos;
    EAA000_VRAM_END = .;

    EB2800_ROM_START = __romPos;
    EB2800_VRAM = ADDR(.EB2800);
    .EB2800 : AT(EB2800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EB2800_DATA_START = .;
        build/assets/smt1/data/EB2800.o(.data);
        EB2800_DATA_END = .;
        EB2800_DATA_SIZE = ABSOLUTE(EB2800_DATA_END - EB2800_DATA_START);
    }
    __romPos += SIZEOF(.EB2800);
    EB2800_ROM_END = __romPos;
    EB2800_VRAM_END = .;

    EBB000_ROM_START = __romPos;
    EBB000_VRAM = ADDR(.EBB000);
    .EBB000 : AT(EBB000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EBB000_DATA_START = .;
        build/assets/smt1/data/EBB000.o(.data);
        EBB000_DATA_END = .;
        EBB000_DATA_SIZE = ABSOLUTE(EBB000_DATA_END - EBB000_DATA_START);
    }
    __romPos += SIZEOF(.EBB000);
    EBB000_ROM_END = __romPos;
    EBB000_VRAM_END = .;

    EC3800_ROM_START = __romPos;
    EC3800_VRAM = ADDR(.EC3800);
    .EC3800 : AT(EC3800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EC3800_DATA_START = .;
        build/assets/smt1/data/EC3800.o(.data);
        EC3800_DATA_END = .;
        EC3800_DATA_SIZE = ABSOLUTE(EC3800_DATA_END - EC3800_DATA_START);
    }
    __romPos += SIZEOF(.EC3800);
    EC3800_ROM_END = __romPos;
    EC3800_VRAM_END = .;

    ECC000_ROM_START = __romPos;
    ECC000_VRAM = ADDR(.ECC000);
    .ECC000 : AT(ECC000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        ECC000_DATA_START = .;
        build/assets/smt1/data/ECC000.o(.data);
        ECC000_DATA_END = .;
        ECC000_DATA_SIZE = ABSOLUTE(ECC000_DATA_END - ECC000_DATA_START);
    }
    __romPos += SIZEOF(.ECC000);
    ECC000_ROM_END = __romPos;
    ECC000_VRAM_END = .;

    ED4800_ROM_START = __romPos;
    ED4800_VRAM = ADDR(.ED4800);
    .ED4800 : AT(ED4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        ED4800_DATA_START = .;
        build/assets/smt1/data/ED4800.o(.data);
        ED4800_DATA_END = .;
        ED4800_DATA_SIZE = ABSOLUTE(ED4800_DATA_END - ED4800_DATA_START);
    }
    __romPos += SIZEOF(.ED4800);
    ED4800_ROM_END = __romPos;
    ED4800_VRAM_END = .;

    EDD000_ROM_START = __romPos;
    EDD000_VRAM = ADDR(.EDD000);
    .EDD000 : AT(EDD000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EDD000_DATA_START = .;
        build/assets/smt1/data/EDD000.o(.data);
        EDD000_DATA_END = .;
        EDD000_DATA_SIZE = ABSOLUTE(EDD000_DATA_END - EDD000_DATA_START);
    }
    __romPos += SIZEOF(.EDD000);
    EDD000_ROM_END = __romPos;
    EDD000_VRAM_END = .;

    EE5800_ROM_START = __romPos;
    EE5800_VRAM = ADDR(.EE5800);
    .EE5800 : AT(EE5800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EE5800_DATA_START = .;
        build/assets/smt1/data/EE5800.o(.data);
        EE5800_DATA_END = .;
        EE5800_DATA_SIZE = ABSOLUTE(EE5800_DATA_END - EE5800_DATA_START);
    }
    __romPos += SIZEOF(.EE5800);
    EE5800_ROM_END = __romPos;
    EE5800_VRAM_END = .;

    EEE000_ROM_START = __romPos;
    EEE000_VRAM = ADDR(.EEE000);
    .EEE000 : AT(EEE000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EEE000_DATA_START = .;
        build/assets/smt1/data/EEE000.o(.data);
        EEE000_DATA_END = .;
        EEE000_DATA_SIZE = ABSOLUTE(EEE000_DATA_END - EEE000_DATA_START);
    }
    __romPos += SIZEOF(.EEE000);
    EEE000_ROM_END = __romPos;
    EEE000_VRAM_END = .;

    EF6800_ROM_START = __romPos;
    EF6800_VRAM = ADDR(.EF6800);
    .EF6800 : AT(EF6800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EF6800_DATA_START = .;
        build/assets/smt1/data/EF6800.o(.data);
        EF6800_DATA_END = .;
        EF6800_DATA_SIZE = ABSOLUTE(EF6800_DATA_END - EF6800_DATA_START);
    }
    __romPos += SIZEOF(.EF6800);
    EF6800_ROM_END = __romPos;
    EF6800_VRAM_END = .;

    EFF000_ROM_START = __romPos;
    EFF000_VRAM = ADDR(.EFF000);
    .EFF000 : AT(EFF000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        EFF000_DATA_START = .;
        build/assets/smt1/data/EFF000.o(.data);
        EFF000_DATA_END = .;
        EFF000_DATA_SIZE = ABSOLUTE(EFF000_DATA_END - EFF000_DATA_START);
    }
    __romPos += SIZEOF(.EFF000);
    EFF000_ROM_END = __romPos;
    EFF000_VRAM_END = .;

    F07800_ROM_START = __romPos;
    F07800_VRAM = ADDR(.F07800);
    .F07800 : AT(F07800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F07800_DATA_START = .;
        build/assets/smt1/data/F07800.o(.data);
        F07800_DATA_END = .;
        F07800_DATA_SIZE = ABSOLUTE(F07800_DATA_END - F07800_DATA_START);
    }
    __romPos += SIZEOF(.F07800);
    F07800_ROM_END = __romPos;
    F07800_VRAM_END = .;

    F10000_ROM_START = __romPos;
    F10000_VRAM = ADDR(.F10000);
    .F10000 : AT(F10000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F10000_DATA_START = .;
        build/assets/smt1/data/F10000.o(.data);
        F10000_DATA_END = .;
        F10000_DATA_SIZE = ABSOLUTE(F10000_DATA_END - F10000_DATA_START);
    }
    __romPos += SIZEOF(.F10000);
    F10000_ROM_END = __romPos;
    F10000_VRAM_END = .;

    F18800_ROM_START = __romPos;
    F18800_VRAM = ADDR(.F18800);
    .F18800 : AT(F18800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F18800_DATA_START = .;
        build/assets/smt1/data/F18800.o(.data);
        F18800_DATA_END = .;
        F18800_DATA_SIZE = ABSOLUTE(F18800_DATA_END - F18800_DATA_START);
    }
    __romPos += SIZEOF(.F18800);
    F18800_ROM_END = __romPos;
    F18800_VRAM_END = .;

    F21000_ROM_START = __romPos;
    F21000_VRAM = ADDR(.F21000);
    .F21000 : AT(F21000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F21000_DATA_START = .;
        build/assets/smt1/data/F21000.o(.data);
        F21000_DATA_END = .;
        F21000_DATA_SIZE = ABSOLUTE(F21000_DATA_END - F21000_DATA_START);
    }
    __romPos += SIZEOF(.F21000);
    F21000_ROM_END = __romPos;
    F21000_VRAM_END = .;

    F29800_ROM_START = __romPos;
    F29800_VRAM = ADDR(.F29800);
    .F29800 : AT(F29800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F29800_DATA_START = .;
        build/assets/smt1/data/F29800.o(.data);
        F29800_DATA_END = .;
        F29800_DATA_SIZE = ABSOLUTE(F29800_DATA_END - F29800_DATA_START);
    }
    __romPos += SIZEOF(.F29800);
    F29800_ROM_END = __romPos;
    F29800_VRAM_END = .;

    F32000_ROM_START = __romPos;
    F32000_VRAM = ADDR(.F32000);
    .F32000 : AT(F32000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F32000_DATA_START = .;
        build/assets/smt1/data/F32000.o(.data);
        F32000_DATA_END = .;
        F32000_DATA_SIZE = ABSOLUTE(F32000_DATA_END - F32000_DATA_START);
    }
    __romPos += SIZEOF(.F32000);
    F32000_ROM_END = __romPos;
    F32000_VRAM_END = .;

    F3A800_ROM_START = __romPos;
    F3A800_VRAM = ADDR(.F3A800);
    .F3A800 : AT(F3A800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F3A800_DATA_START = .;
        build/assets/smt1/data/F3A800.o(.data);
        F3A800_DATA_END = .;
        F3A800_DATA_SIZE = ABSOLUTE(F3A800_DATA_END - F3A800_DATA_START);
    }
    __romPos += SIZEOF(.F3A800);
    F3A800_ROM_END = __romPos;
    F3A800_VRAM_END = .;

    F43000_ROM_START = __romPos;
    F43000_VRAM = ADDR(.F43000);
    .F43000 : AT(F43000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F43000_DATA_START = .;
        build/assets/smt1/data/F43000.o(.data);
        F43000_DATA_END = .;
        F43000_DATA_SIZE = ABSOLUTE(F43000_DATA_END - F43000_DATA_START);
    }
    __romPos += SIZEOF(.F43000);
    F43000_ROM_END = __romPos;
    F43000_VRAM_END = .;

    F4B800_ROM_START = __romPos;
    F4B800_VRAM = ADDR(.F4B800);
    .F4B800 : AT(F4B800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F4B800_DATA_START = .;
        build/assets/smt1/data/F4B800.o(.data);
        F4B800_DATA_END = .;
        F4B800_DATA_SIZE = ABSOLUTE(F4B800_DATA_END - F4B800_DATA_START);
    }
    __romPos += SIZEOF(.F4B800);
    F4B800_ROM_END = __romPos;
    F4B800_VRAM_END = .;

    F54000_ROM_START = __romPos;
    F54000_VRAM = ADDR(.F54000);
    .F54000 : AT(F54000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F54000_DATA_START = .;
        build/assets/smt1/data/F54000.o(.data);
        F54000_DATA_END = .;
        F54000_DATA_SIZE = ABSOLUTE(F54000_DATA_END - F54000_DATA_START);
    }
    __romPos += SIZEOF(.F54000);
    F54000_ROM_END = __romPos;
    F54000_VRAM_END = .;

    F5C800_ROM_START = __romPos;
    F5C800_VRAM = ADDR(.F5C800);
    .F5C800 : AT(F5C800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F5C800_DATA_START = .;
        build/assets/smt1/data/F5C800.o(.data);
        F5C800_DATA_END = .;
        F5C800_DATA_SIZE = ABSOLUTE(F5C800_DATA_END - F5C800_DATA_START);
    }
    __romPos += SIZEOF(.F5C800);
    F5C800_ROM_END = __romPos;
    F5C800_VRAM_END = .;

    F65000_ROM_START = __romPos;
    F65000_VRAM = ADDR(.F65000);
    .F65000 : AT(F65000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F65000_DATA_START = .;
        build/assets/smt1/data/F65000.o(.data);
        F65000_DATA_END = .;
        F65000_DATA_SIZE = ABSOLUTE(F65000_DATA_END - F65000_DATA_START);
    }
    __romPos += SIZEOF(.F65000);
    F65000_ROM_END = __romPos;
    F65000_VRAM_END = .;

    F6D800_ROM_START = __romPos;
    F6D800_VRAM = ADDR(.F6D800);
    .F6D800 : AT(F6D800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F6D800_DATA_START = .;
        build/assets/smt1/data/F6D800.o(.data);
        F6D800_DATA_END = .;
        F6D800_DATA_SIZE = ABSOLUTE(F6D800_DATA_END - F6D800_DATA_START);
    }
    __romPos += SIZEOF(.F6D800);
    F6D800_ROM_END = __romPos;
    F6D800_VRAM_END = .;

    F76000_ROM_START = __romPos;
    F76000_VRAM = ADDR(.F76000);
    .F76000 : AT(F76000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F76000_DATA_START = .;
        build/assets/smt1/data/F76000.o(.data);
        F76000_DATA_END = .;
        F76000_DATA_SIZE = ABSOLUTE(F76000_DATA_END - F76000_DATA_START);
    }
    __romPos += SIZEOF(.F76000);
    F76000_ROM_END = __romPos;
    F76000_VRAM_END = .;

    F7E800_ROM_START = __romPos;
    F7E800_VRAM = ADDR(.F7E800);
    .F7E800 : AT(F7E800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F7E800_DATA_START = .;
        build/assets/smt1/data/F7E800.o(.data);
        F7E800_DATA_END = .;
        F7E800_DATA_SIZE = ABSOLUTE(F7E800_DATA_END - F7E800_DATA_START);
    }
    __romPos += SIZEOF(.F7E800);
    F7E800_ROM_END = __romPos;
    F7E800_VRAM_END = .;

    F88000_ROM_START = __romPos;
    F88000_VRAM = ADDR(.F88000);
    .F88000 : AT(F88000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F88000_DATA_START = .;
        build/assets/smt1/data/F88000.o(.data);
        F88000_DATA_END = .;
        F88000_DATA_SIZE = ABSOLUTE(F88000_DATA_END - F88000_DATA_START);
    }
    __romPos += SIZEOF(.F88000);
    F88000_ROM_END = __romPos;
    F88000_VRAM_END = .;

    F91800_ROM_START = __romPos;
    F91800_VRAM = ADDR(.F91800);
    .F91800 : AT(F91800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F91800_DATA_START = .;
        build/assets/smt1/data/F91800.o(.data);
        F91800_DATA_END = .;
        F91800_DATA_SIZE = ABSOLUTE(F91800_DATA_END - F91800_DATA_START);
    }
    __romPos += SIZEOF(.F91800);
    F91800_ROM_END = __romPos;
    F91800_VRAM_END = .;

    F9B000_ROM_START = __romPos;
    F9B000_VRAM = ADDR(.F9B000);
    .F9B000 : AT(F9B000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        F9B000_DATA_START = .;
        build/assets/smt1/data/F9B000.o(.data);
        F9B000_DATA_END = .;
        F9B000_DATA_SIZE = ABSOLUTE(F9B000_DATA_END - F9B000_DATA_START);
    }
    __romPos += SIZEOF(.F9B000);
    F9B000_ROM_END = __romPos;
    F9B000_VRAM_END = .;

    FA4800_ROM_START = __romPos;
    FA4800_VRAM = ADDR(.FA4800);
    .FA4800 : AT(FA4800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FA4800_DATA_START = .;
        build/assets/smt1/data/FA4800.o(.data);
        FA4800_DATA_END = .;
        FA4800_DATA_SIZE = ABSOLUTE(FA4800_DATA_END - FA4800_DATA_START);
    }
    __romPos += SIZEOF(.FA4800);
    FA4800_ROM_END = __romPos;
    FA4800_VRAM_END = .;

    FAE000_ROM_START = __romPos;
    FAE000_VRAM = ADDR(.FAE000);
    .FAE000 : AT(FAE000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FAE000_DATA_START = .;
        build/assets/smt1/data/FAE000.o(.data);
        FAE000_DATA_END = .;
        FAE000_DATA_SIZE = ABSOLUTE(FAE000_DATA_END - FAE000_DATA_START);
    }
    __romPos += SIZEOF(.FAE000);
    FAE000_ROM_END = __romPos;
    FAE000_VRAM_END = .;

    FB7800_ROM_START = __romPos;
    FB7800_VRAM = ADDR(.FB7800);
    .FB7800 : AT(FB7800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FB7800_DATA_START = .;
        build/assets/smt1/data/FB7800.o(.data);
        FB7800_DATA_END = .;
        FB7800_DATA_SIZE = ABSOLUTE(FB7800_DATA_END - FB7800_DATA_START);
    }
    __romPos += SIZEOF(.FB7800);
    FB7800_ROM_END = __romPos;
    FB7800_VRAM_END = .;

    FC1000_ROM_START = __romPos;
    FC1000_VRAM = ADDR(.FC1000);
    .FC1000 : AT(FC1000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FC1000_DATA_START = .;
        build/assets/smt1/data/FC1000.o(.data);
        FC1000_DATA_END = .;
        FC1000_DATA_SIZE = ABSOLUTE(FC1000_DATA_END - FC1000_DATA_START);
    }
    __romPos += SIZEOF(.FC1000);
    FC1000_ROM_END = __romPos;
    FC1000_VRAM_END = .;

    FCA800_ROM_START = __romPos;
    FCA800_VRAM = ADDR(.FCA800);
    .FCA800 : AT(FCA800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FCA800_DATA_START = .;
        build/assets/smt1/data/FCA800.o(.data);
        FCA800_DATA_END = .;
        FCA800_DATA_SIZE = ABSOLUTE(FCA800_DATA_END - FCA800_DATA_START);
    }
    __romPos += SIZEOF(.FCA800);
    FCA800_ROM_END = __romPos;
    FCA800_VRAM_END = .;

    FD4000_ROM_START = __romPos;
    FD4000_VRAM = ADDR(.FD4000);
    .FD4000 : AT(FD4000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FD4000_DATA_START = .;
        build/assets/smt1/data/FD4000.o(.data);
        FD4000_DATA_END = .;
        FD4000_DATA_SIZE = ABSOLUTE(FD4000_DATA_END - FD4000_DATA_START);
    }
    __romPos += SIZEOF(.FD4000);
    FD4000_ROM_END = __romPos;
    FD4000_VRAM_END = .;

    FDD800_ROM_START = __romPos;
    FDD800_VRAM = ADDR(.FDD800);
    .FDD800 : AT(FDD800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FDD800_DATA_START = .;
        build/assets/smt1/data/FDD800.o(.data);
        FDD800_DATA_END = .;
        FDD800_DATA_SIZE = ABSOLUTE(FDD800_DATA_END - FDD800_DATA_START);
    }
    __romPos += SIZEOF(.FDD800);
    FDD800_ROM_END = __romPos;
    FDD800_VRAM_END = .;

    FE7000_ROM_START = __romPos;
    FE7000_VRAM = ADDR(.FE7000);
    .FE7000 : AT(FE7000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FE7000_DATA_START = .;
        build/assets/smt1/data/FE7000.o(.data);
        FE7000_DATA_END = .;
        FE7000_DATA_SIZE = ABSOLUTE(FE7000_DATA_END - FE7000_DATA_START);
    }
    __romPos += SIZEOF(.FE7000);
    FE7000_ROM_END = __romPos;
    FE7000_VRAM_END = .;

    FF0800_ROM_START = __romPos;
    FF0800_VRAM = ADDR(.FF0800);
    .FF0800 : AT(FF0800_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FF0800_DATA_START = .;
        build/assets/smt1/data/FF0800.o(.data);
        FF0800_DATA_END = .;
        FF0800_DATA_SIZE = ABSOLUTE(FF0800_DATA_END - FF0800_DATA_START);
    }
    __romPos += SIZEOF(.FF0800);
    FF0800_ROM_END = __romPos;
    FF0800_VRAM_END = .;

    FFA000_ROM_START = __romPos;
    FFA000_VRAM = ADDR(.FFA000);
    .FFA000 : AT(FFA000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        FFA000_DATA_START = .;
        build/assets/smt1/data/FFA000.o(.data);
        FFA000_DATA_END = .;
        FFA000_DATA_SIZE = ABSOLUTE(FFA000_DATA_END - FFA000_DATA_START);
    }
    __romPos += SIZEOF(.FFA000);
    FFA000_ROM_END = __romPos;
    FFA000_VRAM_END = .;

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

    _15A6000_ROM_START = __romPos;
    _15A6000_VRAM = ADDR(._15A6000);
    ._15A6000 : AT(_15A6000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _15A6000_DATA_START = .;
        build/assets/smt1/data/15A6000.o(.data);
        _15A6000_DATA_END = .;
        _15A6000_DATA_SIZE = ABSOLUTE(_15A6000_DATA_END - _15A6000_DATA_START);
    }
    __romPos += SIZEOF(._15A6000);
    _15A6000_ROM_END = __romPos;
    _15A6000_VRAM_END = .;

    _15B7000_ROM_START = __romPos;
    _15B7000_VRAM = ADDR(._15B7000);
    ._15B7000 : AT(_15B7000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _15B7000_DATA_START = .;
        build/assets/smt1/data/15B7000.o(.data);
        _15B7000_DATA_END = .;
        _15B7000_DATA_SIZE = ABSOLUTE(_15B7000_DATA_END - _15B7000_DATA_START);
    }
    __romPos += SIZEOF(._15B7000);
    _15B7000_ROM_END = __romPos;
    _15B7000_VRAM_END = .;

    _15CD000_ROM_START = __romPos;
    _15CD000_VRAM = ADDR(._15CD000);
    ._15CD000 : AT(_15CD000_ROM_START) SUBALIGN(2048)
    {
        FILL(0x00000000);
        _15CD000_DATA_START = .;
        build/assets/smt1/data/15CD000.o(.data);
        _15CD000_DATA_END = .;
        _15CD000_DATA_SIZE = ABSOLUTE(_15CD000_DATA_END - _15CD000_DATA_START);
    }
    __romPos += SIZEOF(._15CD000);
    _15CD000_ROM_END = __romPos;
    _15CD000_VRAM_END = .;

    /DISCARD/ :
    {
        *(*);
    }
}
