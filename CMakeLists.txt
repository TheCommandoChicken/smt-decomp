cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER_WORKS ON)
project(smt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (WIN32)
    set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
    set(CMAKE_BUILD_TYPE Debug)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
    set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=address")

    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-implicit-function-declaration")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-incompatible-pointer-types")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-int-conversion")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-return-mismatch")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-return-type")
endif()

if (CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-implicit-function-declaration")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-return-type")
endif()

set(SOURCE_FILES_SMT1_MAIN
    src/smt1/main/dungeon
src/smt1/main/dungeon/dgraph.c
src/smt1/main/dungeon/dmap.c
src/smt1/main/dungeon/dmap.h
src/smt1/main/dungeon/dungeon.c
src/smt1/main/dungeon/dungeon_other.c
src/smt1/main/dungeon/dunk.c
src/smt1/main/dungeon/dunk1.c
src/smt1/main/dungeon/dunk2.c
src/smt1/main/graph
src/smt1/main/graph/graph.c
src/smt1/main/graph/grid_bg.c
src/smt1/main/graph/overlay.c
src/smt1/main/graph/unk.c
src/smt1/main/lib
src/smt1/main/dat.c
src/smt1/main/field.c
src/smt1/main/graph.c
src/smt1/data/intro.c
src/smt1/main/main.c
src/smt1/main/misc.h
src/smt1/main/object.c
src/smt1/main/overlay.c
src/smt1/main/pad.c
src/smt1/main/sound.c
src/smt1/main/unk.c
src/smt1/main/unk3.c
)

add_library(core ${SOURCE_FILES_SMT1_MAIN})

target_include_directories(core PUBLIC
    include
)
