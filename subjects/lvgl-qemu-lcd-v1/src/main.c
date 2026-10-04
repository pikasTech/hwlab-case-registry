#include "lvgl.h"
#include "board.h"
static uint16_t draw_buffer[LCD_WIDTH * LCD_HEIGHT] __attribute__((aligned(8)));
static uint8_t flush_reported;
static void flush_cb(lv_display_t *display, const lv_area_t *area, uint8_t *px_map) { (void)display; board_flush((const uint16_t *)px_map, (uint32_t)area->x1, (uint32_t)area->y1, (uint32_t)area->x2, (uint32_t)area->y2); lv_display_flush_ready(display); if (!flush_reported) { board_uart_write("LVGL-FLUSHED\r\n"); flush_reported = 1; } }
static void input_read(lv_indev_t *indev, lv_indev_data_t *data) { (void)indev; int32_t x, y; uint8_t pressed; board_input_read(&x, &y, &pressed); data->point.x = x; data->point.y = y; data->state = pressed ? LV_INDEV_STATE_PRESSED : LV_INDEV_STATE_RELEASED; }
int main(void) {
    board_init(); board_uart_write("LVGL-START\r\n"); lv_init(); board_uart_write("LVGL-INIT\r\n");
    lv_display_t *display = lv_display_create(LCD_WIDTH, LCD_HEIGHT); if (!display) { board_uart_write("LVGL-DISPLAY-NULL\r\n"); for (;;) {} } board_uart_write("LVGL-DISPLAY\r\n"); lv_display_set_buffers(display, draw_buffer, NULL, sizeof(draw_buffer), LV_DISPLAY_RENDER_MODE_FULL); lv_display_set_flush_cb(display, flush_cb); board_uart_write("LVGL-CB\r\n");
    lv_indev_t *pointer = lv_indev_create(); lv_indev_set_type(pointer, LV_INDEV_TYPE_POINTER); lv_indev_set_read_cb(pointer, input_read);
    lv_obj_set_style_bg_color(lv_screen_active(), lv_color_hex(0x18324a), 0);
    lv_obj_t *label = lv_label_create(lv_screen_active()); lv_label_set_text(label, "HWLAB LVGL QEMU LCD baseline"); lv_obj_align(label, LV_ALIGN_CENTER, 0, -20);
    lv_obj_t *button = lv_button_create(lv_screen_active()); lv_obj_align(button, LV_ALIGN_CENTER, 0, 35); lv_obj_t *button_label = lv_label_create(button); lv_label_set_text(button_label, "input ready"); lv_obj_center(button_label);
    board_uart_write("LVGL-REFRESH\r\n"); lv_refr_now(display); board_uart_write("LVGL-REFRESHED\r\n");
    for (;;) { lv_tick_inc(5); lv_timer_handler(); board_tick(5); }
}
