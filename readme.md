# handwired/biba60

![handwired/biba60] https://imgur.com/a/dkdIPVk

*A short description of the keyboard/project*

* Keyboard Maintainer: [Daniel Biba](https://github.com/danbiba)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make handwired/biba60:default

Flashing example for this keyboard:

    make handwired/biba60:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available


Bill of Materials
    Diodes (x60): https://www.amazon.com/dp/B079KJ91JZ/?coliid=IU9YRLAUD8BYV&colid=GI9LV354TQGI&psc=1&ref_
    Pro Mico Boards (x2): https://www.amazon.com/dp/B0B6HYLC44/?coliid=I2J23DRCUG601T&colid=GI9LV354TQGI&psc=1&ref_
    LED Light Strips: https://www.amazon.com/dp/B01CDTED80/?coliid=I2PFQBWAX38YSN&colid=GI9LV354TQGI&psc=1&ref_
    Switches (Epomake Wisteria Tactiles x60): https://www.amazon.com/dp/B0BZYG13Q5/?coliid=I11VNZPVFJJRM6&colid=GI9LV354TQGI&psc=1&ref_
    2.5mm TRS cable (1x): https://www.amazon.com/dp/B09XXFYGXP?psc=1&ref=ppx_yo2ov_dt_b_product_details
