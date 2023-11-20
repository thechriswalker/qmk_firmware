# thechriswalke/mk5

![thechriswalker/mk5](https://thechriswalker.net/images/keyboard-mk5.jpg)

My personal keyboard project.

I wanted a nearly full sized board, but with a rotary encoder, split how I wanted
and with a little OLED for layers. I also wanted a dedicated shruggie button.

-   Keyboard Maintainer: [Chris Walker](https://github.com/thechriswalker)
-   Hardware Supported: Teensy++ 2.0 - hand built matrix
-   Hardware Availability: only one

Make example for this keyboard (after setting up your build environment):

    make thechriswalker-mk5:default

Flashing example for this keyboard:

    make thechriswalker-mk5:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

-   **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
-   **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
-   **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
