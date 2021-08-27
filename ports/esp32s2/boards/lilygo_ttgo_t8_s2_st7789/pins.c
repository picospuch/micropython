#include "shared-bindings/board/__init__.h"
#include "shared-module/displayio/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
    { MP_ROM_QSTR(MP_QSTR_board_id), MP_ROM_PTR(&board_module_id_obj) },

    { MP_ROM_QSTR(MP_QSTR_IO0), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_IO1), MP_ROM_PTR(&pin_GPIO1) },
    { MP_ROM_QSTR(MP_QSTR_IO2), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_IO3), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_IO4), MP_ROM_PTR(&pin_GPIO4) },
    { MP_ROM_QSTR(MP_QSTR_IO5), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_IO6), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_IO7), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_IO8), MP_ROM_PTR(&pin_GPIO8) },

    { MP_ROM_QSTR(MP_QSTR_IO11), MP_ROM_PTR(&pin_GPIO11) },
    { MP_ROM_QSTR(MP_QSTR_IO12), MP_ROM_PTR(&pin_GPIO12) },
    { MP_ROM_QSTR(MP_QSTR_IO13), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_IO15), MP_ROM_PTR(&pin_GPIO15) },
    { MP_ROM_QSTR(MP_QSTR_IO16), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_IO17), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_IO18), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_IO19), MP_ROM_PTR(&pin_GPIO19) },
    { MP_ROM_QSTR(MP_QSTR_IO20), MP_ROM_PTR(&pin_GPIO20) },
    { MP_ROM_QSTR(MP_QSTR_IO21), MP_ROM_PTR(&pin_GPIO21) },

    { MP_ROM_QSTR(MP_QSTR_IO39), MP_ROM_PTR(&pin_GPIO39) },
    { MP_ROM_QSTR(MP_QSTR_IO40), MP_ROM_PTR(&pin_GPIO40) },
    { MP_ROM_QSTR(MP_QSTR_IO41), MP_ROM_PTR(&pin_GPIO41) },
    { MP_ROM_QSTR(MP_QSTR_IO42), MP_ROM_PTR(&pin_GPIO42) },
    { MP_ROM_QSTR(MP_QSTR_IO45), MP_ROM_PTR(&pin_GPIO45) },
    { MP_ROM_QSTR(MP_QSTR_IO46), MP_ROM_PTR(&pin_GPIO46) },

    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO43) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO44) },
    { MP_ROM_QSTR(MP_QSTR_TX1), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_RX1), MP_ROM_PTR(&pin_GPIO18) },

    // SD Card
    { MP_ROM_QSTR(MP_QSTR_SD_MISO), MP_ROM_PTR(&pin_GPIO13) },
    { MP_ROM_QSTR(MP_QSTR_SD_MOSI), MP_ROM_PTR(&pin_GPIO11) },
    { MP_ROM_QSTR(MP_QSTR_SD_CLK), MP_ROM_PTR(&pin_GPIO12) },
    { MP_ROM_QSTR(MP_QSTR_SD_CS), MP_ROM_PTR(&pin_GPIO10) },

    // 1.14 inch LCD ST7789
    { MP_ROM_QSTR(MP_QSTR_LCD_MOSI), MP_ROM_PTR(&pin_GPIO35) },
    { MP_ROM_QSTR(MP_QSTR_LCD_CLK), MP_ROM_PTR(&pin_GPIO36) },
    { MP_ROM_QSTR(MP_QSTR_LCD_CS), MP_ROM_PTR(&pin_GPIO34) },
    { MP_ROM_QSTR(MP_QSTR_LCD_RST), MP_ROM_PTR(&pin_GPIO38) },
    { MP_ROM_QSTR(MP_QSTR_LCD_BCKL), MP_ROM_PTR(&pin_GPIO33) },
    { MP_ROM_QSTR(MP_QSTR_LCD_D_C), MP_ROM_PTR(&pin_GPIO37) },
    { MP_ROM_QSTR(MP_QSTR_DISPLAY), MP_ROM_PTR(&displays[0].display) },

    // Peripheral Power control
    { MP_ROM_QSTR(MP_QSTR_PE_POWER), MP_ROM_PTR(&pin_GPIO14) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
