#Wavebubble 2013#
Currently written in Arduino IDE v1.0.3 but should be compatable in all future versions.

As the Wavebubble 2013 contains an ATMega32u4 it is functionally identical to an [Arduino Leonardo](http://arduino.cc/en/Main/ArduinoBoardLeonardo). This means that editing, compiling and programming the firmware is very easy and can be done in the [Arduino IDE](http://arduino.cc/en/main/software). This should hopefully remove nearly all the problems currently experienced when making the previous version of Wavebubbles.

One of the core drivers for this version is to remove any strange software requirements, after all it is hard enough to procure all the parts and solder up a wavebubble, it needn't be hard to program it as well. Hopefully this will have the side benefit of granting easier access to modifying and improving the code to increase performance and add new features.

##Programming the Bootloader##
To do this you will need:
* Your Wavebubble 2013
* A programmer with a 6 pin ISP cable, you can use an AVRISP, AVR ISP mkII, USBtinyISP, USBasp.
* A computer with the Arduino IDE installed an the drivers for your chosen programmer.

1. Connect the programmer to the computer and the Wavebubble 2013.
2. Select the programmer from the dropdown list under "Programmer" in the "Tool" menu.
3. Select the Arduino Leonardo as the board: Tools > Board > Arduino Leonardo
4. Select Tools > Burn Bootloader to load the bootloader onto your Wavebubble 2013 board.
5. Wait for it to finish, then disconnect everything.
6. Plug the Wavebubble 2013 board directly into your computer.
7. Your PC will now ask you to load some divers. 
8. Point your OS to the "\arduino-1.0.3\drivers\" directory and follow the prompts.

##Programming the Firmware##

1. Ensure that the code you wish to program onto the Wavebubble 2013 is open in the Arduino IDE.
2. Go to "Tools", then select "Board" from the dropdown. Then select "Arduino Leonardo".
3. Ensure that you've selected the correct serial port in "Serial Port" from the drop down "Tool"
4. Select upload and wait for the computer to upload the program to the board.
