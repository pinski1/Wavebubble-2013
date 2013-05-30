#Wavebubble 2013#

Taking inspiration from Lady Ada's original [Wavebubble RC1 & RC1a](http://www.ladyada.net/make/wavebubble/) as well as the [Wavebubble 2010](http://www.ladyada.net/wiki/wavebubble/wave_bubble_2010).
The core idea with this updated version is to make it easier to construct & program. 

##Building One##
As Radio Frequency (RF) jammers or inhibitors legal status varies from region to region there is a good chance that Wavebubble 2013s will never be available to buy as a finished product. Nor is it likely that they will be available as a kit. However by releasing the files it should be possible to build one for personal use.

###The Ingredients###
* [ATMega32u4](http://www.atmel.com/devices/atmega32u4.aspx) - microcontroller to control everything, it's identical to an Arduino Leonardo.
* [BQ24090](http://www.ti.com/product/bq24090) - smart Li-Ion battery charger, 4 different charge rates; 0mA, 100mA, 500mA & 1000mA
* [NE555D](http://www.ti.com/product/ne555) - generates a sawtooth that will sweep the voltage controlled oscillators though the frequency bands.
* [AD8402](http://www.analog.com/en/digital-to-analog-converters/digital-potentiometers/ad8402/products/product.html) - digital pot to change the sweep
* [LT1935](http://www.linear.com/product/LT1935) - boost convertor with internal FET
* [LMX2433](http://www.ti.com/product/lmx2433) - dual wide band PLL
* [ROS-1300+](http://217.34.103.131/pdfs/ROS-1300+.pdf) - voltage controlled oscillator, 300MHz to 1300MHz
* [ROS-2700-1819+](http://217.34.103.131/pdfs/ROS-2700-1819+.pdf) - voltage controlled oscillator, 1300MHz to 3000MHz
* [GALI-84+](http://217.34.103.131/pdfs/GALI-84+.pdf) - wideband RF amplifier
* [MIC2506](http://www.micrel.com/index.php/en/products/power-management-ics/power-switching/usb-power-switches/article/56-mic2506.html) - dual power switch, used for powering VCOs & PAs

The full list of parts required will be listed in the Bill of Materials (BoM) in the Hardware folder.

###Build Instructions###
There are none at present. However typical surface mount guidelines apply, start with the smallest pitch devices and finish with the larger devices. The Wavebubble 2013 is designed as a single sided board so it should be possible to solder in a reflow oven.


##Support##
Try the Arduino [forums](http://forum.arduino.cc/) for problems relating to programming and burning the bootloader.

Try the Adafruit Wavebubble [forums](http://forums.adafruit.com/viewforum.php?f=16) for problems relating to the hardware.

##Credits##
Thanks to Lady Ada for the original design as well as the regular posters in the Adafruit Wavebubble forums.

##Licence##
<a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/deed.en_US"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-sa/3.0/88x31.png" /></a><br /><span xmlns:dct="http://purl.org/dc/terms/" property="dct:title">Wavebubble 2013</span> is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/deed.en_US">Creative Commons Attribution-ShareAlike 3.0 Unported License</a>.