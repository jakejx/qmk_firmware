.PHONY: %

%:
	keymapviz -k sofle -t fancy -r keyboards/sofle/keymaps/jakejx/keymap.c -c keyboards/sofle/keymaps/jakejx/keymapviz.toml > /dev/null

OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
CONSOLE_ENABLE = no
EXTRAKEY_ENABLE = yes
WPM_ENABLE = yes
