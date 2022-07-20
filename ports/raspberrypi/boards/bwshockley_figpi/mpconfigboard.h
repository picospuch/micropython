#define MICROPY_HW_BOARD_NAME "Fig Pi"
#define MICROPY_HW_MCU_NAME "rp2040"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO13)
#define CIRCUITPY_STATUS_LED_POWER (&pin_GPIO1)

#define CIRCUITPY_BOARD_I2C         (2)
#define CIRCUITPY_BOARD_I2C_PIN     {{.scl = &pin_GPIO17, .sda = &pin_GPIO16}, \
                                     {.scl = &pin_GPIO19, .sda = &pin_GPIO18}}

#define CIRCUITPY_BOARD_SPI         (1)
#define CIRCUITPY_BOARD_SPI_PIN     {{.clock = &pin_GPIO6, .mosi = &pin_GPIO7, .miso = &pin_GPIO4}}

#define CIRCUITPY_BOARD_UART        (1)
#define CIRCUITPY_BOARD_UART_PIN    {{.tx = &pin_GPIO28, .rx = &pin_GPIO29}}
