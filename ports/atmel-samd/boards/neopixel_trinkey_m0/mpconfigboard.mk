USB_VID = 0x239A
USB_PID = 0x80F0
USB_PRODUCT = "NeoPixel Trinkey M0"
USB_MANUFACTURER = "Adafruit Industries LLC"

CHIP_VARIANT = SAMD21E18A
CHIP_FAMILY = samd21

INTERNAL_FLASH_FILESYSTEM = 1
LONGINT_IMPL = NONE

CIRCUITPY_FULL_BUILD = 0

CIRCUITPY_ANALOGIO = 0
CIRCUITPY_ROTARYIO = 0
CIRCUITPY_RTC = 0
CIRCUITPY_PULSEIO = 0
CIRCUITPY_PWMIO = 0
CIRCUITPY_AUDIOCORE = 0
CIRCUITPY_BUSIO = 0

CIRCUITPY_PIXELBUF = 1
CIRCUITPY_USB_MIDI = 1
CIRCUITPY_TOUCHIO = 1

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_HID
