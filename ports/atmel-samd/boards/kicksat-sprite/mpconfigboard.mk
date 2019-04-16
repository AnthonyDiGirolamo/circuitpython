LD_FILE = boards/samd51x19-bootloader.ld
USB_VID = 0x04D8
USB_PID = 0xED94
USB_PRODUCT = "kicksat-sprite"
USB_MANUFACTURER = "maholli"

QSPI_FLASH_FILESYSTEM = 0
INTERNAL_FLASH_FILESYSTEM = 1
LONGINT_IMPL = MPZ

# No touch on SAMD51 yet
CIRCUITPY_TOUCHIO = 0
CIRCUITPY_AUDIOBUSIO = 0
CIRCUITPY_DISPLAYIO = 0

CHIP_VARIANT = SAMD51G19A
CHIP_FAMILY = samd51