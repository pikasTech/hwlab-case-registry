#include "board.h"
#define UART0_BASE 0x10009000u
#define KMI0_BASE 0x10006000u
#define KMI1_BASE 0x10007000u
#define LCD_BASE 0x10020000u
#define FRAMEBUFFER ((volatile uint16_t *)0x4c000000u)
#define PL111_TIMING0 0u
#define PL111_TIMING1 1u
#define PL111_TIMING2 2u
#define PL111_TIMING3 3u
#define PL111_UPBASE 4u
#define PL111_LPBASE 5u
#define PL111_CONTROL 6u
#define PL111_CONTROL_ENABLE 0x001u
#define PL111_CONTROL_BPP_16_565 (6u << 1)
#define PL111_CONTROL_BGR (1u << 8)
#define PL111_CONTROL_POWER 0x800u
#define KMI_STAT 1u
#define KMI_DATA 2u
#define KMI_STAT_RXFULL 0x01u
static volatile uint32_t *const uart = (volatile uint32_t *)UART0_BASE;
static volatile uint32_t *const kmi_keyboard = (volatile uint32_t *)KMI0_BASE;
static volatile uint32_t *const kmi_mouse = (volatile uint32_t *)KMI1_BASE;
static volatile uint32_t *const lcd = (volatile uint32_t *)LCD_BASE;
static uint32_t ticks;
static int32_t pointer_x = LCD_WIDTH / 2, pointer_y = LCD_HEIGHT / 2;
static uint8_t pointer_pressed;
static uint8_t ps2_packet[3];
static uint8_t ps2_count;
void board_uart_write(const char *text) {
    for (; *text; ++text) { while ((uart[6] & (1u << 5)) != 0u) {} uart[0] = (uint32_t)(unsigned char)*text; }
}
static void lcd_init(void) {
    lcd[PL111_TIMING0] = 0x9cu; /* ((156 + 4) * 4) = 640 pixels */
    lcd[PL111_TIMING1] = 0x1dfu; /* 480 rows */
    lcd[PL111_TIMING2] = 0u;
    lcd[PL111_TIMING3] = 0u;
    lcd[PL111_UPBASE] = (uint32_t)FRAMEBUFFER;
    lcd[PL111_LPBASE] = (uint32_t)FRAMEBUFFER;
    lcd[PL111_CONTROL] = PL111_CONTROL_POWER | PL111_CONTROL_BGR | PL111_CONTROL_BPP_16_565 | PL111_CONTROL_ENABLE;
}
void board_init(void) { for (uint32_t i = 0; i < LCD_WIDTH * LCD_HEIGHT; ++i) FRAMEBUFFER[i] = 0x07e0u; board_draw_baseline_primitives(); lcd_init(); board_uart_write("LVGL-QEMU-READY baseline=qemu-lcd-lvgl-v1\\r\\n"); }
void board_tick(uint32_t milliseconds) { ticks += milliseconds; }
void board_flush(const uint16_t *pixels, uint32_t x1, uint32_t y1, uint32_t x2, uint32_t y2) {
    for (uint32_t y = y1; y <= y2; ++y) for (uint32_t x = x1; x <= x2; ++x) FRAMEBUFFER[y * LCD_WIDTH + x] = pixels[(y - y1) * (x2 - x1 + 1u) + (x - x1)];
}
static void read_pointer_packet(void) {
    while ((kmi_mouse[KMI_STAT] & KMI_STAT_RXFULL) != 0u) {
        uint8_t byte = (uint8_t)kmi_mouse[KMI_DATA]; ps2_packet[ps2_count++] = byte;
        if (ps2_count == 3u) { pointer_pressed = (ps2_packet[0] & 1u) != 0u; pointer_x += (int8_t)ps2_packet[1]; pointer_y -= (int8_t)ps2_packet[2]; if (pointer_x < 0) pointer_x = 0; if (pointer_x >= (int32_t)LCD_WIDTH) pointer_x = LCD_WIDTH - 1; if (pointer_y < 0) pointer_y = 0; if (pointer_y >= (int32_t)LCD_HEIGHT) pointer_y = LCD_HEIGHT - 1; ps2_count = 0; }
    }
}
void board_input_read(int32_t *x, int32_t *y, uint8_t *pressed) {
    read_pointer_packet();
    while ((kmi_keyboard[KMI_STAT] & KMI_STAT_RXFULL) != 0u) { (void)kmi_keyboard[KMI_DATA]; pointer_pressed = 1u; }
    *x = pointer_x; *y = pointer_y; *pressed = pointer_pressed;
}

void board_draw_baseline_primitives(void) {
    for (uint32_t y = 80; y < 180; ++y) for (uint32_t x = 70; x < 270; ++x) FRAMEBUFFER[y * LCD_WIDTH + x] = 0xf800u;
    for (uint32_t y = 80; y < 180; ++y) for (uint32_t x = 370; x < 570; ++x) FRAMEBUFFER[y * LCD_WIDTH + x] = 0x001fu;
    for (uint32_t y = 220; y < 230; ++y) for (uint32_t x = 80; x < 560; ++x) FRAMEBUFFER[y * LCD_WIDTH + x] = 0xffffu;
}
