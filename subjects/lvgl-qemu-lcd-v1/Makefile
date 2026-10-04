LVGL_DIR ?= third_party/lvgl
BUILD_DIR ?= build
CC := arm-none-eabi-gcc
OBJCOPY ?= arm-none-eabi-objcopy
CFLAGS := -mcpu=cortex-a9 -marm -mfloat-abi=soft -mno-unaligned-access -ffreestanding -fno-builtin -fdata-sections -ffunction-sections -Os -Wall -Wextra -I$(LVGL_DIR) -I. -Isrc -DLV_CONF_INCLUDE_SIMPLE
LDFLAGS := -mcpu=cortex-a9 -marm -nostartfiles -Wl,--gc-sections -Wl,-T,src/linker.ld
LVGL_SOURCES := $(shell test -d $(LVGL_DIR)/src && find $(LVGL_DIR)/src -name '*.c' -print)
PROJECT_SOURCES := src/main.c src/board.c src/syscalls.c src/lvgl_alloc.c

.PHONY: all clean source-lock
all: $(BUILD_DIR)/lvgl-qemu.elf $(BUILD_DIR)/lvgl-qemu.bin
$(BUILD_DIR):
	mkdir -p $@
$(BUILD_DIR)/lvgl-qemu.elf: $(PROJECT_SOURCES) src/startup.S src/linker.ld lv_conf.h | $(BUILD_DIR)
	@if test -z "$(LVGL_SOURCES)"; then echo 'LVGL_DIR must contain the locked upstream checkout' >&2; exit 2; fi
	$(CC) $(CFLAGS) $(PROJECT_SOURCES) src/startup.S $(LVGL_SOURCES) $(LDFLAGS) -o $@ -lgcc -lc -lnosys
$(BUILD_DIR)/lvgl-qemu.bin: $(BUILD_DIR)/lvgl-qemu.elf
	$(OBJCOPY) -O binary $< $@
clean:
	rm -rf $(BUILD_DIR)
source-lock:
	python3 scripts/verify-source-lock.py
