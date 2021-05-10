USB_VID = 0x239A
USB_PID = 0x808E
USB_PRODUCT = "Espruino Pico"
USB_MANUFACTURER = "Espruino"

INTERNAL_FLASH_FILESYSTEM = 1

MCU_SERIES = F4
MCU_VARIANT = STM32F401xE
MCU_PACKAGE = UFQFPN48

LD_COMMON = boards/common_default.ld
# use for internal flash
LD_FILE = boards/STM32F401xd_fs.ld

# Disable ulab as we're nearly out of space on this board due to
# INTERNAL_FLASH_FILESYSTEM.  It can probably be reenabled if we enable
# lto for this port, and if other stuff hasn't been added in the
# meantime
CIRCUITPY_AUDIOCORE = 0
CIRCUITPY_AUDIOPWMIO = 0
CIRCUITPY_BUSDEVICE = 0
CIRCUITPY_BITMAPTOOLS = 0
CIRCUITPY_FRAMEBUFFERIO = 0
CIRCUITPY_ULAB = 0
CIRCUITPY_VECTORIO = 0

SUPEROPT_GC = 0
SUPEROPT_VM = 0

OPTIMIZATION_FLAGS = -Os
