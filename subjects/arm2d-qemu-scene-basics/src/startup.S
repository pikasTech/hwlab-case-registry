.syntax unified
.cpu cortex-a9
.arm
.section .text.start, "ax"
.global _start
.type _start, %function
_start:
    ldr sp, =_stack_top
    bl main
1:
    wfi
    b 1b

