#include <stddef.h>
#include <stdint.h>
#include "lvgl.h"

/* A deterministic arena keeps the bare-metal smoke independent of newlib/TLSF. */
#define LVGL_ARENA_SIZE (2U * 1024U * 1024U)
static uint8_t lvgl_arena[LVGL_ARENA_SIZE] __attribute__((aligned(8)));
static size_t lvgl_arena_used;

void lv_mem_init(void) { lvgl_arena_used = 0; }
void lv_mem_deinit(void) { lvgl_arena_used = 0; }

void *lv_malloc_core(size_t size) {
    size_t aligned = (size + 7U) & ~7U;
    if (aligned > LVGL_ARENA_SIZE - lvgl_arena_used) return NULL;
    void *result = &lvgl_arena[lvgl_arena_used];
    lvgl_arena_used += aligned;
    return result;
}

void *lv_realloc_core(void *ptr, size_t size) {
    if (ptr == NULL) return lv_malloc_core(size);
    if (size == 0) return NULL;
    void *result = lv_malloc_core(size);
    if (result == NULL) return NULL;
    uint8_t *src = ptr;
    uint8_t *dst = result;
    for (size_t i = 0; i < size; i++) dst[i] = src[i];
    return result;
}

void lv_free_core(void *ptr) { (void)ptr; }

void lv_mem_monitor_core(lv_mem_monitor_t *mon) {
    mon->total_size = LVGL_ARENA_SIZE;
    mon->free_size = LVGL_ARENA_SIZE - lvgl_arena_used;
    mon->used_pct = (uint8_t)((lvgl_arena_used * 100U) / LVGL_ARENA_SIZE);
    mon->free_biggest_size = mon->free_size;
    mon->frag_pct = 0;
    mon->max_used = lvgl_arena_used;
}

lv_result_t lv_mem_test_core(void) { return LV_RESULT_OK; }
