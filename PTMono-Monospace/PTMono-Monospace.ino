#include <M5Stack.h>
#include "Fonts/PTMono_12px.h"
#include "Fonts/PTMono_14px.h"
#include "Fonts/PTMono_16px.h"
#include "Fonts/PTMono_18px.h"
#include "Fonts/PTMono_20px.h"
#include "Fonts/PTMono_22px.h"
#include "Fonts/PTMono_24px.h"
#include "Fonts/PTMono_26px.h"
#include "Fonts/PTMono_28px.h"
#include "Fonts/PTMono_36px.h"

void setup() {
  // put your setup code here, to run once:
  M5.begin();
  M5.Lcd.setBrightness(150);
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextDatum(TL_DATUM);
  M5.Lcd.setCursor(0,0);
  M5.Lcd.setTextColor(TFT_WHITE,TFT_BLACK);

  M5.Lcd.setFreeFont(&PTMono_12px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,0,1);
  M5.Lcd.setFreeFont(&PTMono_14px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,12,1);
  M5.Lcd.setFreeFont(&PTMono_16px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,26,1);
  M5.Lcd.setFreeFont(&PTMono_18px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,42,1);
  M5.Lcd.setFreeFont(&PTMono_20px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,60,1);
  M5.Lcd.setFreeFont(&PTMono_22px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,80,1);
  M5.Lcd.setFreeFont(&PTMono_24px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,102,1);
  M5.Lcd.setFreeFont(&PTMono_26px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,126,1);
  M5.Lcd.setFreeFont(&PTMono_28px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,152,1);
  M5.Lcd.setFreeFont(&PTMono_36px);
  M5.Lcd.drawString("-=.,абвгдАБВГДЩ123",0,180,1);
}

void loop() {
  // put your main code here, to run repeatedly:
}
