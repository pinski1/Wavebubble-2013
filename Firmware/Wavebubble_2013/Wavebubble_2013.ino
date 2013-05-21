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
//define _MISO 14
//define _SCK 15
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

/* Global Variables */


/* Global Functions */


void setup(void) {
  
  pinMode(FL_CH_A, INPUT_PULLUP);
  pinMode(FL_CH_B, INPUT_PULLUP);
  pinMode(EN_VCO_A, OUTPUT);  
  pinMode(EN_VCO_B, OUTPUT);
  pinMode(EN_PA_A, OUTPUT);  
  pinMode(EN_PA_B, OUTPUT);
  
  pinMode(CP_OUT_A, INPUT);
  pinMode(CP_OUT_B, INPUT);
  
  pinMode(CS_PLL, OUTPUT);
  pinMode(CS_POT, OUTPUT);
  pinMode(SCK, OUTPUT);
  pinMode(MOSI, OUTPUT);
  pinMode(MISO, INPUT);
  
  pinMode(SCL, OUTPUT);
  pinMode(SDA, OUTPUT);
  pinMode(INT, INPUT);
  Wire.begin();
  
  pinMode(EN_CHG, INPUT);
  pinMode(FL_CHG, INPUT);

  digitalWrite(CS_POT, HIGH);
  digitalWrite(CS_PLL, HIGH);
  SPI.begin();
  
  Serial.begin(115200);
  
  unsigned char progNum = EEPROM.read(1023);
  

}

void loop(void) {
  
  //stuff
}



