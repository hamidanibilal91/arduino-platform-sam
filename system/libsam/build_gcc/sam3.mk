# Makefile for compiling libchip
.SUFFIXES: .o .a .c .s
SUB_MAKEFILES=debug.mk gcc.mk release.mk win.mk sam3s.mk

LIBNAME=libchip
TOOLCHAIN=gcc

ifeq ($(CHIP),)
$(error CHIP not defined)
endif

#CHIP_NAME=$(subst __,,$(CHIP))
#CHIP_NAME=$(subst __,,$(call lc,$(CHIP)))

#-------------------------------------------------------------------------------
# Path
#-------------------------------------------------------------------------------

# Output directories
#OUTPUT_BIN = ../lib
OUTPUT_BIN = ../../../cores/sam

# Libraries
PROJECT_BASE_PATH = ..
CMSIS_BASE_PATH = $(PROJECT_BASE_PATH)/../CMSIS/Include

ifeq ($(CHIP), __SAM3S4C__)
CHIP_NAME=sam3s4c
CHIP_SERIE=sam3s
else ifeq ($(CHIP), __SAM3U4E__)
CHIP_NAME=sam3u4e
CHIP_SERIE=sam3u
else ifeq ($(CHIP), __SAM3N4C__)
CHIP_NAME=sam3n4c
CHIP_SERIE=sam3n
else ifeq ($(CHIP), __SAM3X8H__)
CHIP_NAME=sam3x8h
CHIP_SERIE=sam3xa
else
endif

CMSIS_CHIP_PATH=$(PROJECT_BASE_PATH)/../cmsis/$(CHIP_SERIE)

#-------------------------------------------------------------------------------
# Files
#-------------------------------------------------------------------------------

vpath %.h $(PROJECT_BASE_PATH)/include $(PROJECT_BASE_PATH)/../cmsis/$(CHIP_SERIE)/include
vpath %.c $(PROJECT_BASE_PATH)/source $(CMSIS_BASE_PATH) $(CMSIS_CHIP_PATH)/source/templates $(CMSIS_CHIP_PATH)/source/templates

VPATH+=$(PROJECT_BASE_PATH)/source
VPATH+=$(CMSIS_BASE_PATH)
VPATH+=$(CMSIS_CHIP_PATH)/include
VPATH+=$(CMSIS_CHIP_PATH)/source/templates
VPATH+=$(CMSIS_CHIP_PATH)/source/templates/gcc

INCLUDES = -I$(PROJECT_BASE_PATH)
INCLUDES += -I$(PROJECT_BASE_PATH)/include
INCLUDES += -I$(CMSIS_BASE_PATH)
INCLUDES += -I$(CMSIS_CHIP_PATH)/include
INCLUDES += -I$(CMSIS_CHIP_PATH)/source/templates

#-------------------------------------------------------------------------------
ifdef DEBUG
include debug.mk
else
include release.mk
endif

#-------------------------------------------------------------------------------
# Tools
#-------------------------------------------------------------------------------

include $(TOOLCHAIN).mk

#-------------------------------------------------------------------------------
ifdef DEBUG
OUTPUT_OBJ=debug
OUTPUT_LIB=$(LIBNAME)_$(CHIP_NAME)_$(TOOLCHAIN)_dbg.a
else
OUTPUT_OBJ=release
OUTPUT_LIB=$(LIBNAME)_$(CHIP_NAME)_$(TOOLCHAIN)_rel.a
endif

OUTPUT_PATH=$(OUTPUT_OBJ)_$(CHIP_NAME)

#-------------------------------------------------------------------------------
# C source files and objects
#-------------------------------------------------------------------------------
C_SRC=$(wildcard $(PROJECT_BASE_PATH)/source/*.c)
C_SRC+=$(wildcard $(CMSIS_CHIP_PATH)/*.c)
C_SRC+=$(wildcard $(CMSIS_CHIP_PATH)/gcc*.c)

C_OBJ_TEMP=$(patsubst %.c, %.o, $(notdir $(C_SRC)))

# during development, remove some files
C_OBJ_FILTER=pio_it.o

C_OBJ=$(filter-out $(C_OBJ_FILTER), $(C_OBJ_TEMP))

#-------------------------------------------------------------------------------
# Assembler source files and objects
#-------------------------------------------------------------------------------
A_SRC=$(wildcard $(PROJECT_BASE_PATH)/source/*.s)
A_SRC+=$(wildcard $(CMSIS_BASE_PATH)/*.s)

A_OBJ_TEMP=$(patsubst %.s, %.o, $(notdir $(A_SRC)))

# during development, remove some files
A_OBJ_FILTER=

A_OBJ=$(filter-out $(A_OBJ_FILTER), $(A_OBJ_TEMP))

#-------------------------------------------------------------------------------
# Rules
#-------------------------------------------------------------------------------
all: $(CHIP)

$(CHIP): create_output $(OUTPUT_LIB)

.PHONY: create_output
create_output:
	@echo --- Preparing $(CHIP) files $(OUTPUT_PATH) $(OUTPUT_BIN)
#	@echo -------------------------
#	@echo *$(C_SRC)
#	@echo -------------------------
#	@echo *$(C_OBJ)
#	@echo -------------------------
#	@echo *$(addprefix $(OUTPUT_PATH)/, $(C_OBJ))
#	@echo -------------------------
#	@echo *$(A_SRC)
#	@echo -------------------------

	-@mkdir $(subst /,$(SEP),$(OUTPUT_BIN)) 1>NUL 2>&1
	-@mkdir $(OUTPUT_PATH) 1>NUL 2>&1

$(addprefix $(OUTPUT_PATH)/,$(C_OBJ)): $(OUTPUT_PATH)/%.o: %.c
#	"$(CC)" -v -c $(CFLAGS) -Wa,aln=$(subst .o,.s,$@) $< -o $@
	@"$(CC)" -c $(CFLAGS) $< -o $@

$(addprefix $(OUTPUT_PATH)/,$(A_OBJ)): $(OUTPUT_PATH)/%.o: %.s
	@"$(AS)" -c $(ASFLAGS) $< -o $@

$(OUTPUT_LIB): $(addprefix $(OUTPUT_PATH)/, $(C_OBJ)) $(addprefix $(OUTPUT_PATH)/, $(A_OBJ))
	@"$(AR)" -r "$(OUTPUT_BIN)/$@" $^
	@"$(NM)" "$(OUTPUT_BIN)/$@" > "$(OUTPUT_BIN)/$@.txt"

.PHONY: clean
clean:
	@echo --- Cleaning $(CHIP) files
	-@$(RM) $(OUTPUT_PATH) 1>NUL 2>&1
	-@$(RM) $(subst /,$(SEP),$(OUTPUT_BIN)/$(OUTPUT_LIB)) 1>NUL 2>&1
	-@$(RM) $(subst /,$(SEP),$(OUTPUT_BIN)/$(OUTPUT_LIB)).txt 1>NUL 2>&1

# dependencies
$(addprefix $(OUTPUT_PATH)/,$(C_OBJ)): $(OUTPUT_PATH)/%.o: $(PROJECT_BASE_PATH)/chip.h $(wildcard $(PROJECT_BASE_PATH)/include/*.h) $(wildcard $(CMSIS_BASE_PATH)/*.h)

