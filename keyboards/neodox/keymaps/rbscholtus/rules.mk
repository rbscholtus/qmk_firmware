MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
COMBO_ENABLE = yes
WPM_ENABLE = yes
OS_DETECTION_ENABLE = yes

ifeq ($(strip $(OLED_ENABLE)), yes)
	SRC += oled.c
	SRC += luna.c
endif
