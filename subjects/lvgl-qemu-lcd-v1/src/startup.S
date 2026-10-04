.syntax unified
.cpu cortex-a9
.arm
.global _start
.section .text.startup
_start:
    b _reset
    b _fault
    b _fault
    b _fault
    b _fault
    b _fault
    b _fault
    b _fault
_reset:
    ldr r0, =_start
    mcr p15, 0, r0, c12, c0, 0
    ldr r0, =_sidata
    ldr r1, =_sdata
    ldr r2, =_edata
1:
    cmp r1, r2
    bcs 2f
    ldr r3, [r0], #4
    str r3, [r1], #4
    b 1b
2:
    ldr r1, =_sbss
    ldr r2, =_ebss
    mov r3, #0
3:
    cmp r1, r2
    bcs 4f
    str r3, [r1], #4
    b 3b
4:
    ldr sp, =_stack_top
    bl main
5:  b 5b

_fault:
    ldr r0, =0x10009000
    ldr r1, =_fault_msg
1:
    ldrb r2, [r1], #1
    cmp r2, #0
    strneb r2, [r0]
    bne 1b
2:  b 2b

.section .rodata
_fault_msg: .asciz "LVGL-FAULT\r\n"
