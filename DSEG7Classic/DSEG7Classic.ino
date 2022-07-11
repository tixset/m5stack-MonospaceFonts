#include <M5Stack.h>
#include "Fonts/DSEG7Classic_20px.h"
#include "Fonts/DSEG7Classic_22px.h"
#include "Fonts/DSEG7Classic_24px.h"
#include "Fonts/DSEG7Classic_26px.h"
#include "Fonts/DSEG7Classic_28px.h"
#include "Fonts/DSEG7Classic_36px.h"
#include "Fonts/DSEG7Classic_48px.h"
#include "Fonts/DSEG7Classic_64px.h"
#include "Fonts/DSEG7Classic_66px.h"

void setup() {
  // put your setup code here, to run once:
  M5.begin();
  M5.Lcd.setBrightness(10);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextDatum(TL_DATUM);
  M5.Lcd.setCursor(0,0);
  M5.Lcd.setTextColor(TFT_WHITE,TFT_BLACK);

  M5.Lcd.setFreeFont(&DSEG7Classic_20px);
  M5.Lcd.drawString("1234567890-:",0,0,1);
  M5.Lcd.setFreeFont(&DSEG7Classic_22px);
  M5.Lcd.drawString("1234567890-:",0,24,1);
  M5.Lcd.setFreeFont(&DSEG7Classic_24px);
  M5.Lcd.drawString("1234567890-:",0,50,1);
  M5.Lcd.setFreeFont(&DSEG7Classic_26px);
  M5.Lcd.drawString("1234567890-:",0,78,1);
  M5.Lcd.setFreeFont(&DSEG7Classic_28px);
  M5.Lcd.drawString("1234567890-:",0,106,1);
  M5.Lcd.setFreeFont(&DSEG7Classic_36px);
  M5.Lcd.drawString("1234567890-:",0,136,1);
  M5.Lcd.setFreeFont(&DSEG7Classic_48px);
  M5.Lcd.drawString("1234567890-:",0,174,1);
}

void loop() {
  // put your main code here, to run repeatedly:
}
