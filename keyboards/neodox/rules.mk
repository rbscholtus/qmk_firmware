# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040
BOARD = GENERIC_RP_RP2040

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight
AUDIO_SUPPORTED = no
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes
OLED_ENABLE = yes
LTO_ENABLE = yes

SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor
