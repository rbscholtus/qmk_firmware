# neodox

![neodox](https://ergomech.store/web/image/product.image/131/image_1024/NeoDox%20-%20Sandwich%20Style?unique=0f9419d)

This is the Ergomech Store's re-implementation of the famous Redox keyboard, fixing various drawbacks:

- The outer column is now 1U instead of 1.25U on the Redox, this helps users to easily find a suitable keycap set.
- Neodox uses the RP2040 so you can easily bring all the QMK features without worrying about memory.
- Type C port.
- OLED display and Rotary encoders, on both sides.

* QMK Firmware Maintainer: [Barend Scholtus](https://github.com/rbscholtus)
* Hardware Availability: [Ergomech Store](https://ergomech.store/shop/neodox-sandwich-style-exclusive-418)

Make example for this keyboard (after setting up your build environment):

    make neodox:default

Flashing example for this keyboard:

    make neodox:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
