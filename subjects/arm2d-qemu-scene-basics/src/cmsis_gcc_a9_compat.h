#ifndef HWLAB_CMSIS_GCC_A9_COMPAT_H
#define HWLAB_CMSIS_GCC_A9_COMPAT_H

/* CMSIS 5 DSP spellings required by the locked Arm-2D v1.2.4 headers.
 * Cortex-A9 has the corresponding instructions, but arm_acle.h exposes
 * different names. Keep this adapter separate from upstream sources. */
#ifndef __ASSEMBLER__
#include <stdint.h>
#include <limits.h>

static inline int32_t __SMUAD(uint32_t a, uint32_t b) {
    int32_t result;
    __asm__("smuad %0, %1, %2" : "=r"(result) : "r"(a), "r"(b));
    return result;
}
static inline int64_t __SMLALD(uint32_t a, uint32_t b, int64_t acc) {
    uint32_t low = (uint32_t)acc;
    uint32_t high = (uint32_t)((uint64_t)acc >> 32);
    __asm__("smlald %0, %1, %2, %3" : "+r"(low), "+r"(high) : "r"(a), "r"(b));
    return (int64_t)(((uint64_t)high << 32) | low);
}
static inline int32_t __QADD(int32_t a, int32_t b) {
    int32_t result;
    __asm__("qadd %0, %1, %2" : "=r"(result) : "r"(a), "r"(b));
    return result;
}
static inline int32_t __QSUB(int32_t a, int32_t b) {
    int32_t result;
    __asm__("qsub %0, %1, %2" : "=r"(result) : "r"(a), "r"(b));
    return result;
}
#endif
#endif
