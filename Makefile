SMT_BASENAME := smt

BUILD_DIR := build
TOOLS_DIR := tools
CONFIG_DIR := config

GAMES_DIR := game

SMT1_DIR := smt1
SMT2_DIR := smt2
SMTIF_DIR := smtif

ASM_DIR := asm
SMT1_ASM_DIR := $(ASM_DIR)/$(SMT1_DIR)/main
SMT1_ASM_DIRS := $(SMT1_ASM_DIR) $(SMT1_ASM_DIR)/libapi $(SMT1_ASM_DIR)/libetc $(SMT1_ASM_DIR)/libcd $(SMT1_ASM_DIR)/libc $(SMT1_ASM_DIR)/libgpu $(SMT1_ASM_DIR)/libspu $(SMT1_ASM_DIR)/libsnd $(SMT1_ASM_DIR)/libcard $(SMT1_ASM_DIR)/libpad $(SMT1_ASM_DIR)/libgte
SMT2_ASM_DIR := $(ASM_DIR)/$(SMT2_DIR)
SMTIF_ASM_DIR := $(ASM_DIR)/$(SMTIF_DIR)

SRC_DIR := src
SMT1_SRC_DIR := $(SRC_DIR)/$(SMT1_DIR)
SMT2_SRC_DIR := $(SRC_DIR)/$(SMT2_DIR)
SMTIF_SRC_DIR := $(SRC_DIR)/$(SMTIF_DIR)

ASSETS_DIR := dat
SMT1_ASSETS_DIR := $(ASSETS_DIR)/$(SMT1_DIR)
SMT2_ASSETS_DIR := $(ASSETS_DIR)/$(SMT2_DIR)
SMTIF_ASSETS_DIR := $(ASSETS_DIR)/$(SMTIF_DIR)

SMT1_S_FILES := $(foreach dir, $(SMT1_ASM_DIRS), $(wildcard $(dir)/*.s))

OBJECT_FILES := $(patsubst asm/%.s, build/asm/%.o, $(shell find asm -name "*.s"))
SOURCE_FILES := $(patsubst asm/%.s, src/%.c, $(shell find src -name "*.s"))

MAKE := make
WINE := wine

VENV_DIR       	?= .venv

ifneq ($(wildcard $(VENV_DIR)),)
PYTHON_BIN		:= $(realpath $(VENV_DIR))/bin/
endif
PYTHON          := $(PYTHON_BIN)python3
BLACK			:= $(PYTHON_BIN)black
PIP			 	:= $(realpath .)/$(VENV_DIR)/bin/pip3
SPLAT := $(PYTHON_BIN)splat
SPLIT := $(SPLAT) split

CROSS := mipsel-linux-gnu-
LD := $(CROSS)ld
AS := $(CROSS)as
MASPSX_DIR := $(TOOLS_DIR)/maspsx
M2C_DIR := $(TOOLS_DIR)/m2c
MASPSX := $(MASPSX_DIR)/maspsx.py
M2C := $(M2C_DIR)/m2c.py
PSXIMAGER_DIR := $(TOOLS_DIR)/psximager

AS_FLAGS += -Iinclude -march=r3000 -mtune=r3000 -no-pad-sections -O1 -G0
LD_FLAGS := -nostdlib --no-check-sections --noinhibit-exec
M2C_FLAGS := 

PSX_RIP := $(TOOLS_DIR)/psximager/src/psxrip.exe

DEPENDENCIES := $(M2C) $(MASPSX) $(PSX_RIP)

CC_PSYQ_40 := $(WINE) $(TOOLS_DIR)/psyq/psyq4.0/CC1PSX.EXE -quiet
CC_PSYQ_41 := $(WINE) $(TOOLS_DIR)/psyq/psyq4.1/CC1PSX.EXE -quiet
CC_PSYQ_43 := $(WINE) $(TOOLS_DIR)/psyq/psyq4.3/CC1PSX.EXE -quiet
CC_PSYQ_46 := $(WINE) $(TOOLS_DIR)/psyq/psyq4.6/CC1PSX.EXE -quiet

AS_PSYQ_40      := $(WINE) $(TOOLS_DIR)/psyq/psyq4.0/ASPSX.EXE -quiet
AS_PSYQ_41      := $(WINE) $(TOOLS_DIR)/psyq/psyq4.1/ASPSX.EXE -quiet
AS_PSYQ_43      := $(WINE) $(TOOLS_DIR)/psyq/psyq4.3/ASPSX.EXE -quiet
AS_PSYQ_46      := $(WINE) $(TOOLS_DIR)/psyq/psyq4.6/ASPSX_RODATA.EXE -quiet

AS_PSYQ         := $(AS_PSYQ_46)

extract:
	@$(PSX_RIP) $(GAMES_DIR)/smt1.cue $(GAMES_DIR)/$(SMT1_DIR) || echo "Warning: Unable to extract SMT1. Are the files named correctly?"
	@$(PSX_RIP) $(GAMES_DIR)/smt2.cue $(GAMES_DIR)/$(SMT2_DIR) || echo "Warning: Unable to extract SMT2. Are the files named correctly?"
	@$(PSX_RIP) $(GAMES_DIR)/smtif.cue $(GAMES_DIR)/$(SMTIF_DIR) || echo "Warning: Unable to extract SMTIF. Are the files named correctly?"

split:
	@$(SPLIT) $(CONFIG_DIR)/smt1.main.yaml
	@$(SPLIT) $(CONFIG_DIR)/smt1.data.yaml

assemble: $(OBJECT_FILES)

$(OBJECT_FILES): build/asm/%.o: asm/%.s
	@mkdir -p $(dir $@)
	@$(AS) $(AS_FLAGS) $< -o $@

.PHONY: build

build:
	$(LD) $(LD_FLAGS) -o build/slps_031.elf -T $(CONFIG_DIR)/smt1.main.ld -T $(CONFIG_DIR)/undefined_funcs_auto.smt1.main.txt -T $(CONFIG_DIR)/undefined_syms_auto.smt1.main.txt
	@objcopy -I elf32-big -O binary build/slps_031.elf build/SLPS_031.70

decompile: $(SOURCE_FILES)

$(SOURCE_FILES): src/%.c: asm/%.s
	@mkdir -p $(dir $@)
	@$(PYTHON) $(M2C) $(M2C_FLAGS) $< -o $@

.PHONY: python-dependencies
python-dependencies: $(VENV_DIR)
	$(PIP) install -r $(TOOLS_DIR)/requirements-python.txt

$(VENV_DIR):
	$(WHICH_PYTHON) -m venv $(VENV_DIR)

.PHONY: update-dependencies
update-dependencies: ##@ update tools and internal dependencies
update-dependencies: $(DEPENDENCIES)

$(M2C):
	git submodule init $(M2C_DIR)
	git submodule update $(M2C_DIR)
	$(PYTHON) -m pip install --upgrade pycparser
$(MASPSX):
	git submodule init $(MASPSX_DIR)
	git submodule update $(MASPSX_DIR)
$(PSX_RIP):
	git submodule init $(PSXIMAGER_DIR)
	git submodule update $(PSXIMAGER_DIR)
	cd $(PSXIMAGER_DIR) && bash ./bootstrap && bash ./configure && make