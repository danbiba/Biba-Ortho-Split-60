# handwired/biba60

![](https://i.imgur.com/y4LSuKU.jpeg)
A 60% Ortholiner keyboard that can be used in a traditional form factor or split.

* Keyboard Maintainer: [Daniel Biba](https://github.com/danbiba)
* Hardware Supported: Arduino Pro Micro
* Hardware Availability: 3D Printable

SETUP:
Place the code posted here in your qmk_firmare/keyboards/handwired/biba60 folder

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb handwired/biba60 -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* Lower + 0,0 (if only one board is plugged in it defaults to the LEFT)
* Adjust + 0,0
* Short out pins RST and GND on the Pro Micro

Bill of Materials:
Diodes (x60): https://www.amazon.com/dp/B079KJ91JZ/?coliid=IU9YRLAUD8BYV&colid=GI9LV354TQGI&psc=1&ref_
    
Pro Mico Boards (x2): https://www.amazon.com/dp/B0B6HYLC44/?coliid=I2J23DRCUG601T&colid=GI9LV354TQGI&psc=1&ref_
    
LED Light Strips: https://www.amazon.com/dp/B01CDTED80/?coliid=I2PFQBWAX38YSN&colid=GI9LV354TQGI&psc=1&ref_
    
Switches (Epomake Wisteria Tactiles x60): https://www.amazon.com/dp/B0BZYG13Q5/?coliid=I11VNZPVFJJRM6&colid=GI9LV354TQGI&psc=1&ref_
    
2.5mm TRS cable (1x): https://www.amazon.com/dp/B09XXFYGXP?psc=1&ref=ppx_yo2ov_dt_b_product_details
    
Magnets 2x6mm (x16): https://www.amazon.com/dp/B0CCXGGTLC?psc=1&ref=ppx_yo2ov_dt_b_product_details
