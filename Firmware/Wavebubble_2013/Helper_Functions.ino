/* Program */

struct _program {
	union {
		struct {
			struct {
				unsigned int startFreq;
				unsigned int stopFreq;
				unsigned char offset;
				unsigned char magnitude;
			} lowBand;
			struct {
				unsigned int startFreq;
				unsigned int stopFreq;
				unsigned char offset;
				unsigned char magnitude;
			} highBand;
		};
		unsigned char all[12];
	};
};

//so it'd be newProg.lowBand.startFreq = 800; newProg.lowBand.stopFreq = 1200; etc

struct _program getProgram(unsigned char progNum) {
struct _program temp;

	EEPROM.read()
  
  return temp;
}

void setProgram(void) {
	return;
}

void printProgram(unsigned int progNum) {
  
  struct _program thing = getProgram(progNum);  
  
  Serial.print("\n\nProgram id: ");
  Serial.print(progNum, DEC);
  Serial.print("\nLow Band\nStart Frequency: ");
  Serial.print(thing.lowBand.startFreq, DEC);
  Serial.print("MHz\nStop Frequency: ");
  Serial.print(thing.lowBand.stopFreq, DEC);
  Serial.print("MHz\nHigh Band\nStart Frequency: ");
  Serial.print(thing.highBand.startFreq, DEC);
  Serial.print("MHz\nStop Frequency: ");
  Serial.print(thing.highBand.stopFreq, DEC);
  Serial.print("MHz\nProgram is ");
  if((thing.lowBand.offset == 255 && thing.lowBand.magnitude == 255) || (thing.highBand.offset == 255 && thing.highBand.magnitude == 255)) Serial.print("not ");
  Serial.print("tuned.\n");
  
  return;
}


/* LMX2433 PLL & Tuning */

void initLMX2433();
void setLMX2433();
void disLMX2433();

void setPotentiometer(unsigned char address, unsigned char value) {
	
	digitalWrite(CS_POT, LOW);
	SPI.transfer(0xF0 | address);
	SPI.transfer(value);
	digitalWrite(CS_POT, HIGH);	

	return;
}


/* Serial User Interface */
enum _statusUI{
	intro,
	menu,
	newProgram,
	tuneProgram,
	listProgram,
	delProgram,
	help,
	selfTest
	};
  
void serialUserInterface(void) {

	/*
		Try an have an event driven menu using status enumerations
		Ensure to include a built in test (BIT) optionfor running self checks on the hardware
			includes ensuring the tuning works, no flags are set when enabling channels etc
	*/
}

void builtInTest(void) {
  // print version numbers
  Serial.write(0x0C); // new page
  Serial.print("Built In self-Test\n\nFirmware verson: ");
  Serial.print(VERSION_MAJOR, DEC);
  Serial.print(".");
  Serial.print(VERSION_MINOR, DEC);
  Serial.print(".");
  Serial.print(VERSION_PATCH, DEC);
  
  // get updated charging status
  Serial.print("\n\nThe Wavebubble 2013 is currently ");
  switch (chargeStatus)
  {
      case none:
        Serial.print("not charging.");
        break;
      case usbLow:
        Serial.print("charging at 100mA.");
        break;
      case usbHigh:
        Serial.print("charging at 500mA.");
        break;
      case usbCharger:
        Serial.print("charging at 1000mA.");
        break;
      case complete:
        Serial.print("completed charging.");
        break;
      default:
        Serial.print("in an unknown charging state.");
        break;
  }
 
  // get updated bandLow status
  Serial.print("\n\nThe low band is currently ");
  switch (bandLow)
  {
      case idle:
        Serial.print("idle.");
        break;
      case fault:
        Serial.print("experiencing a fault.");
        break;
      case enabledVCO:
        Serial.print("only enabling the VCO.");
        break;
      case enabledPA:
        Serial.print("only enabling the PA.");
        break;
      case enabledBand:
        Serial.print("enabled and transmitting.");
        break;
      default:
        Serial.print("in an unknown state.");
        break;
  }
  
  // get updated bandHigh status
  Serial.print("\nThe high band is currently ");
  switch (bandHigh)
  {
      case idle:
        Serial.print("idle.");
        break;
      case fault:
        Serial.print("experiencing a fault.");
        break;
      case enabledVCO:
        Serial.print("only enabling the VCO.");
        break;
      case enabledPA:
        Serial.print("only enabling the PA.");
        break;
      case enabledBand:
        Serial.print("enabled and transmitting.");
        break;
      default:
        Serial.print("in an unknown state.");
        break;
  }
  
  Serial.print("\n\nThe current program is number: ");
  Serial.print(progNum, DEC);
  printProgram(progNum);
  
  // take over the outputs
  // check the frequency range of the low band
  // check the frequency range of the high band
  
  Serial.print("Built In self-Test is complete.");
  return;  
}

