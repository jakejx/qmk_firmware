# Automatically update the keymap visualization when compiling
.PHONY: %
%:
	keymapviz -k moonlander -t fancy -r keyboards/moonlander/keymaps/jakejx/keymap.c -c keyboards/moonlander/keymaps/jakejx/keymapviz.toml > /dev/null
