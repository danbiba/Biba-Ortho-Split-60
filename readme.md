# handwired/biba60

![](https://i.imgur.com/y4LSuKU.jpeg)
![](https://i.imgur.com/w4r3J1u.jpeg)

A 60% Ortholiner keyboard that can be used in a traditional form factor or split.

* Keyboard Maintainer: [Daniel Biba](https://github.com/danbiba)
* Hardware Supported: Arduino Pro Micro
* Hardware Availability: 3D Printable

## Keymap

Default Layer

![](images/biba-ortho-split-60-(default-layer).jpg)


Lower Layer

![](images/biba-ortho-split-60-(lower-layer1).jpg)


Raise Layer

![](images/biba-ortho-split-60-(raise-layer).jpg)


Adjust Layer

![](images/biba-ortho-split-60-(adjust-layer).jpg)


Function Layer

![](images/biba-ortho-split-60-(function-layer).jpg)


Inkscape Layer

![](images/biba-ortho-split-60-(inkscape-layer).jpg)


## Setup
Place the code posted here in your qmk_firmware/keyboards/handwired/biba60 folder

Make example for this keyboard (after setting up your build environment):

    qmk compile -kb handwired/biba60 -km default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* Lower + 0,0 (if only one board is plugged in it defaults to the LEFT)
* Adjust + 0,0
* Short out pins RST and GND on the Pro Micro

## Bill of Materials
Diodes (x60): https://www.amazon.com/dp/B079KJ91JZ/?coliid=IU9YRLAUD8BYV&colid=GI9LV354TQGI&psc=1&ref_
    
Pro Mico Boards (x2): https://www.amazon.com/dp/B0B6HYLC44/?coliid=I2J23DRCUG601T&colid=GI9LV354TQGI&psc=1&ref_
    
LED Light Strips: https://www.amazon.com/dp/B01CDTED80/?coliid=I2PFQBWAX38YSN&colid=GI9LV354TQGI&psc=1&ref_
    
Switches (Epomake Wisteria Tactiles x60): https://www.amazon.com/dp/B0BZYG13Q5/?coliid=I11VNZPVFJJRM6&colid=GI9LV354TQGI&psc=1&ref_
    
2.5mm TRS cable (1x): https://www.amazon.com/dp/B09XXFYGXP?psc=1&ref=ppx_yo2ov_dt_b_product_details
    
Magnets 2x6mm (x16): https://www.amazon.com/dp/B0CCXGGTLC?psc=1&ref=ppx_yo2ov_dt_b_product_details

## Assembly

* Import the STL files in the Case folder to your favorite slicer. You will need to print the left and right plates along with the left and right cases. My keyboard was printed on an Ender 3 v3 SE. A smart thing to do is print the plates with 100% infill for a little extra strength.

* Test fit all the parts before paint (if you decide to paint) Depending on the printer the plates may warp a little, a hairdryer and a little bending should straighten them out, however the screws that assemble the case will do most of the work for you.

* Add the 2x6mm magnets to the middle of each case if you plan on having that functionality. Be careful to orient them the correct way, you may need to put a mark on each one to keep it the right way. Super glue works great to secure them in place.

![](https://i.imgur.com/zlIkq7a.jpeg)

* If you decide to paint the case, make sure to take your time, sand every piece and make sure to use a tough clear coat to protect it from rubbing off over time.

![](https://i.imgur.com/Vrs4s8h.jpeg)

* Populate the plates with the switches you're gonna use. At this point I also added some rubber feet to the bottoms to make sure everything is sitting flat.

![](https://i.imgur.com/D9tDANE.jpeg)

* Add the standoffs into the holes at the bottom of the cases, add the 2.5mm TRS connectors to each side. I make sure the pro micros fit in the slots on the back of each case. I used some PLA scraps and my soldering iron to secure everything in place once I was happy with how it was fitting.

![](https://i.imgur.com/odhtBsY.jpeg) 

* Time to handwire your switches. I used some scrap 16awg wire I had and used a drill to make it nice and straight after stripping. I also use a sharpie to label the rows and columns on the rear so I get them right when wiring to the Pro Micro. Another important part is to make sure the orientation of the diodes is correct, otherwise they will not function correctly.

![](https://i.imgur.com/LylF4uO.jpeg)

* After all the switches are wired, time to connect each matrix to it's corresponding Pro Micro.  I also added a strip of LEDs in each side for a way to show which layer I'm using. Both sides are wired exactly the same way: 
    ### Columns are wired to pins "D4", "C6", "D7", "E6", "B4", and "B5"
    ### Rows are wired to pins "F4", "F5", "F6", "F7", and "B1"
    ### The 2.5mm connectors are wired together with the "VCC", "GND" and "D0" pins
    ### The LED lights use "VCC", "GND" and "D1" pins

  ![](https://i.imgur.com/wkiNOkX.jpeg)

* Flash each Pro Micro with the same .HEX file, once they are connected to each other they will know which board does what. You may need to short the "RST" and "GND" pins to enter the bootloader if the Pro Micros have never been flashed, otherwise you can hold the key at 4,4 (Lower Layer) then press the key at 0,0 (QK_BOOT) to enter the bootloader. Connect the 2 halves together with a 2.5 TRS cable, plug the keyboard into your PC with a USB C cable and enjoy!

![](https://i.imgur.com/SRCwL41.jpeg)

