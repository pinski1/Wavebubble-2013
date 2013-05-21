struct _program {
  unsigned int startFrequency;
  unsigned int stopFrequency;
  unsigned char offset;
  unsigned char magnitude;
};

struct _program getProgram(unsigned char progNum) {
	return 0;
}

void setProgram(void) {
	return;
}

void printProgram(unsigned int progNum) {
  
  struct _program thing = getProgram(progNum);  
  
  Serial.print("\n\nProgram id: ");
  Serial.print(progNum, DEC);
  Serial.print("\nBand 1\nStart Frequency: ");
  Serial.print(thing.startFrequency, DEC);
  Serial.print("MHz\nStop Frequency: ");
  Serial.print(thing.stopFrequency, DEC);
  Serial.print("MHz\nBand 2\nStart Frequency: ");
  Serial.print(thing.startFrequency, DEC);
  Serial.print("MHz\nStop Frequency: ");
  Serial.print(thing.stopFrequency, DEC);
  Serial.print("MHz\nProgram is ");
  if(thing.offset == 255 && thing.magnitude == 255) Serial.print("not ");
  Serial.print("tuned.\n");
  
  return;
}


void initLMX2433();
void setLMX2433();
void disLMX2433();


void setPotentiometers(unsigned char a, unsigned char b) {
	
	if(a != NULL)
	{
		digitalWrite(CS_POT, LOW);
		SPI.transfer(0xFC); // address A1=0, A0=0
		SPI.transfer(a);
		digitalWrite(CS_POT, HIGH);		
	}
	
	if(b != NULL)
	{
		digitalWrite(CS_POT, LOW);
		SPI.transfer(0xFD); // address A1=0, A0=1
		SPI.transfer(b);
		digitalWrite(CS_POT, HIGH);
	}
	
	return;
}
  
