# Adafruit
USB_VID = 0x239A
# Allocated for Winterbloom Sol
# https://github.com/adafruit/circuitpython/issues/2217
USB_PID = 0x8062
USB_PRODUCT = "Sol"
USB_MANUFACTURER = "Winterbloom"
USB_INTERFACE_NAME = "Sol"

CHIP_VARIANT = SAMD51J20A
CHIP_FAMILY = samd51

QSPI_FLASH_FILESYSTEM = 1
EXTERNAL_FLASH_DEVICES = "GD25Q64C, W25Q32JVxQ"
LONGINT_IMPL = MPZ

# Disable modules that are unusable on this special-purpose board.
CIRCUITPY_AUDIOBUSIO = 0
CIRCUITPY_AUDIOIO = 0
CIRCUITPY_BITMAPTOOLS = 0
CIRCUITPY_BLEIO_HCI = 0
CIRCUITPY_DISPLAYIO = 0
CIRCUITPY_FRAMEBUFFERIO = 0
CIRCUITPY_KEYPAD = 0
CIRCUITPY_I2CPERIPHERAL = 0
CIRCUITPY_TOUCHIO = 0
CIRCUITPY_RGBMATRIX = 0
CIRCUITPY_PS2IO = 0
CIRCUITPY_USB_HID = 0

# Enable micropython.native
CIRCUITPY_ENABLE_MPY_NATIVE = 1
