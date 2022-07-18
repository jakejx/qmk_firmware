.PHONY: %

%:
	keymapviz -k sofle -t fancy -r keyboards/sofle/keymaps/jakejxhrm/keymap.c -c keyboards/sofle/keymaps/jakejxhrm/keymapviz.toml > /dev/null

SRC += features/achordion.c

LTO_ENABLE = yes

OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
EXTRAKEY_ENABLE = yes
WPM_ENABLE = yes
CAPS_WORD_ENABLE = yes
MOUSEKEY_ENABLE = no
