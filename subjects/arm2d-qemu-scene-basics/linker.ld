ENTRY(_start)
MEMORY {
    RAM (rwx) : ORIGIN = 0x60010000, LENGTH = 8M
}
_stack_top = ORIGIN(RAM) + LENGTH(RAM);
SECTIONS {
    . = ORIGIN(RAM);
    .text : { KEEP(*(.text.start)) *(.text*) } > RAM
    .rodata : { *(.rodata*) } > RAM
    .data : { *(.data*) } > RAM
    .bss (NOLOAD) : { *(.bss*) *(COMMON) } > RAM
}

