#Wavebubble 2013#

Taking inspiration from Lady Ada's original [Wavebubble RC1 & RC1a](http://www.ladyada.net/make/wavebubble/) as well as the [Wavebubble 2010](http://www.ladyada.net/wiki/wavebubble/wave_bubble_2010).
The core idea with this updated version is to make it easier to construct & program. 


##The Ingredients##
* [ATMega32u4](http://www.atmel.com/devices/atmega32u4.aspx) - microcontroller to control everything, it's identical to an Arduino Leonardo.
* [BQ24090](http://www.ti.com/product/bq24090) - smart Li-Ion battery charger, 4 different charge rates; 0mA, 100mA, 500mA & 1000mA
* [NE555D](http://www.ti.com/product/ne555) - generates a sawtooth that will sweep the voltage controlled oscillators though the frequency bands.
* [AD8402](http://www.analog.com/en/digital-to-analog-converters/digital-potentiometers/ad8402/products/product.html) - digital pot to change the sweep
* [LT1935](http://www.linear.com/product/LT1935) - boost convertor with internal FET
* [LMX2433](http://www.ti.com/product/lmx2433) - dual wide band PLL
* [ROS-1300+](http://217.34.103.131/MCLStore/ModelInfoDisplay?13689571176480.16223337486135314) - voltage controlled oscillator, 300MHz to 1300MHz
* [ROS-2700-1819+](http://217.34.103.131/MCLStore/ModelInfoDisplay?13689571644150.74975494239517) - voltage controlled oscillator, 1300MHz to 3000MHz
* [GALI-84+](http://217.34.103.131/MCLStore/ModelInfoDisplay?13689572043150.38276159543605015) - wideband RF amplifier
* [MIC2506](http://www.micrel.com/index.php/en/products/power-management-ics/power-switching/usb-power-switches/article/56-mic2506.html) - dual power switch, used for powering VCOs & PAs

##Licence##
<a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/deed.en_US"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-sa/3.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-sa/3.0/deed.en_US">Creative Commons Attribution-ShareAlike 3.0 Unported License</a>.