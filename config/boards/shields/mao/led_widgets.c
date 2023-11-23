#include <zmk/led_widgets.h>
#include <zmk/endpoints_types.h>

const led_widget_t led_widgets[LED_EVENT_SIZE][6] = {
    [LED_EVENT_LAYER] = {
        WIDGET(1, priority = 20, period = 0, cmd_len = 1, CMD(0, 20, 12, 0)),
        WIDGET(2, priority = 20, period = 0, cmd_len = 1, CMD(0, 0, 0, 20)),
        WIDGET(3, priority = 20, period = 0, cmd_len = 1, CMD(0, 0, 20, 0)),
        WIDGET(4, priority = 20, period = 0, cmd_len = 1, CMD(0, 20, 0, 0)),
        WIDGET(5, priority = 20, period = 0, cmd_len = 1, CMD(0, 10, 37, 34)),
        WIDGET(6, priority = 20, period = 0, cmd_len = 1, CMD(0, 50, 15, 24)),
    },
};
