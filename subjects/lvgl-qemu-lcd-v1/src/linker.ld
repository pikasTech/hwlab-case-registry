ENTRY(_start)
MEMORY
{
  CODE (rx) : ORIGIN = 0x60000000, LENGTH = 1M
  RAM (rwx) : ORIGIN = 0x60100000, LENGTH = 15M
}
SECTIONS
{
  .text : { KEEP(*(.text.startup)) *(.text*) } > CODE
  .rodata : ALIGN(4) SUBALIGN(4) { *(.rodata*) } > CODE
  .data : { _sdata = .; *(.data*) _edata = .; } > RAM AT > CODE
  _sidata = LOADADDR(.data);
  .bss : { _sbss = .; *(.bss*) *(COMMON) _ebss = .; } > RAM
  . = ALIGN(8); _heap_start = .; . += 1M; _heap_end = .;
  . = ORIGIN(RAM) + LENGTH(RAM) - 16K; . += 16K; _stack_top = .;
}
