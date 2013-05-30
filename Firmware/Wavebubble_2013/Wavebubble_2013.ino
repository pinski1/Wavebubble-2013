/**
 *
 *
 *
 */
#include <EEPROM.h>
#include <SPI.h>
#include <Wire.h>

#define VERSION_MAJOR 0
#define VERSION_MINOR 1
#define VERSION_PATCH 0

/* Pin Map */
#define CS_POT 0
#define CS_PLL 17
//define MOSI 16
//define MISO 14
//define SCK 15
#define EN_CHG 0
#define FL_CHG 0
//define SDA 2
//define SCL 3
#define INT 4
#define FL_CH_A 0
#define FL_CH_B 0
#define EN_VCO_A 0
#define EN_VCO_B 0
#define EN_PA_A 0
#define EN_PA_B 0
#define CP_OUT_A A0
#define CP_OUT_B A0
#define DC_ADJ_A 0
#define DC_ADJ_B 0
#define STATUS 0

/* Global Variables */
enum _chargeStatus {none, usbLow, usbHigh, usbCharger, complete} chargeStatus;
enum _outputStatus {idle, fault, enabledVCO, enabledPA, enabledBand} bandLow, bandHigh;
unsigned char progNum = 0xFF;

/* Global Functions */


void setup(void) {

  pinMode(FL_CH_A, INPUT_PULLUP);
  pinMode(FL_CH_B, INPUT_PULLUP);
  pinMode(EN_VCO_A, OUTPUT);  
  pinMode(EN_VCO_B, OUTPUT);
  pinMode(EN_PA_A, OUTPUT);  
  pinMode(EN_PA_B, OUTPUT);
  pinMode(DC_ADJ_A, OUTPUT);
  pinMode(DC_ADJ_B, OUTPUT);

  pinMode(CP_OUT_A, INPUT);
  pinMode(CP_OUT_B, INPUT);

  pinMode(CS_PLL, OUTPUT);
  pinMode(CS_POT, OUTPUT);
  pinMode(SCK, OUTPUT);
  pinMode(MOSI, OUTPUT);
  pinMode(MISO, INPUT);

  pinMode(STATUS, OUTPUT);
  digitalWrite(STATUS, LOW);

  pinMode(SCL, OUTPUT);
  pinMode(SDA, OUTPUT);
  pinMode(INT, INPUT);
  Wire.begin();

  pinMode(EN_CHG, INPUT);
  pinMode(FL_CHG, INPUT_PULLUP);

  digitalWrite(CS_POT, HIGH);
  digitalWrite(CS_PLL, HIGH);
  SPI.begin();

  Serial.begin(115200);

  chargeStatus = none;
  bandLow = idle;
  bandHigh = idle;

  progNum = EEPROM.read(1023);
  EEPROM.write(1023, progNum + 1);
  for(int i = 0; i < progNum; i++)
  {
    digitalWrite(STATUS, HIGH);
    delay(500);
    digitalWrite(STATUS, LOW);
    delay(500);
  }

  digitalWrite(0, LOW); // set 555

  setPotentiometer(0, 0); // set pots
  setPotentiometer(1, 0);

  analogWrite(DC_ADJ_A, 0);// set PWM
  analogWrite(DC_ADJ_B, 0);// set PWM

  digitalWrite(EN_VCO_A, HIGH); // set VCOs
  digitalWrite(EN_VCO_B, HIGH);

  digitalWrite(EN_PA_A, HIGH); // set PAs
  digitalWrite(EN_PA_B, HIGH);

  bandLow = enabledBand;
  bandHigh = enabledBand;

  // disable PLL

}

void loop(void) {

  //stuff
}





