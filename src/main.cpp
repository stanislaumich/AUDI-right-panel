#include <Arduino.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library
#include <SPI.h> 
#include <beep.cpp>
//#include<GyverUART.h>
#include "GyverTimer.h"
 //  https://arduino-kit.ru/blogs/blog/project_33
 // https://microkontroller.ru/arduino-projects/gps-spidometr-na-arduino-i-oled-displee-svoimi-rukami/


#define TFT_CS     10
#define TFT_RST    9  // you can also connect this to the Arduino reset
                      // in which case, set this #define pin to 0!
#define TFT_DC     8
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS,  TFT_DC, TFT_RST);



GTimer myTimer1(MS, 60000);

void setup() {
  // put your setup code here, to run once:
  initbeep();
  dshortbeep();
  //silentbeep();

  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  // Use this initializer (uncomment) if you're using a 1.44" TFT
  //tft.initR(INITR_144GREENTAB);   // initialize a ST7735S chip, black tab 
  tft.fillScreen(ST7735_BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextWrap(true);
  tft.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla sed malesuada et, malesuada sit amet turpis. Sed porttitor neque ut ante pretium vitae malesuada nunc bibendum. Nullam aliquet ultrices massa eu hendrerit. Ut sed nisi lorem. In vestibulum purus a tortor imperdiet posuere. ");
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (myTimer1.isReady())
    silentbeep();

}