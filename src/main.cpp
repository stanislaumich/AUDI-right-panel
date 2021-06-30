#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <beep.cpp>
#include "TimeLib.h"
#include "DS1307RTC.h"

tmElements_t stm;

#define difspeed 0.2

static const int RXPin = 2, TXPin = 3;
static const uint32_t GPSBaud = 9600;

TinyGPSPlus gps;

SoftwareSerial ss(RXPin, TXPin);

static void smartDelay(unsigned long ms)
{
  unsigned long start = millis();
  do 
  {
    while (ss.available())
      gps.encode(ss.read());
  } while (millis() - start < ms);
}

float prevspeed=.0;
void DisplaySpeed(){
  float speed=gps.speed.kmph();  
  if(abs(speed-prevspeed)>difspeed){  
  Serial.print(gps.satellites.value());
  Serial.print("   ");
  Serial.print(speed);
  Serial.print("  --  ");
  prevspeed=speed;
  }
}

void DisplayDatetime(tmElements_t stm){
  Serial.print(stm.Day);
  Serial.print(".");  
  Serial.print(stm.Month);
  Serial.print(".");  
  Serial.print(tmYearToCalendar(stm.Year));
  Serial.print("   ");  
  Serial.print(stm.Hour);
  Serial.print(":");  
  Serial.print(stm.Minute);
  Serial.print(":");  
  Serial.println(stm.Second);
}

int cnt=1;
void setup()
{
  initbeep();
  dshortbeep();
/*
  tft.initR(INITR_BLACKTAB);   // initialize a ST7735S chip, black tab
  // Use this initializer (uncomment) if you're using a 1.44" TFT
  //tft.initR(INITR_144GREENTAB);   // initialize a ST7735S chip, black tab 
  tft.fillScreen(ST7735_BLACK);
  tft.setCursor(0, 0);
  tft.setTextColor(ST7735_WHITE);
  tft.setTextWrap(true);
  tft.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla sed malesuada et, malesuada sit amet turpis. Sed porttitor neque ut ante pretium vitae malesuada nunc bibendum. Nullam aliquet ultrices massa eu hendrerit. Ut sed nisi lorem. In vestibulum purus a tortor imperdiet posuere. ");
 */


  Serial.begin(115200);
  ss.begin(GPSBaud);
/*
 Ожидаем старта 
*/ 
  smartDelay(1000);
  if(gps.date.day()==0){Serial.println("Waiting for GPS...");};
  smartDelay(1000);

  Serial.println();
  }

void loop()
{
  DisplaySpeed();
  stm.Day=gps.date.day();
  stm.Month=gps.date.month();
  stm.Year=CalendarYrToTm(gps.date.year());
  stm.Hour=gps.time.hour()+3;
  stm.Minute=gps.time.minute();
  stm.Second=gps.time.second();
  if(stm.Minute==0&&stm.Second==0){
      RTC.write(stm);
  }
  cnt+=1;
  if(cnt==60) {silentbeep();cnt=0;}
  /*
   Вывод скорости и прочего раз в секунду
   */
  //if (RTC.read(stm)) {
     
    DisplayDatetime(stm); 
   //}

/*
  */ 
  smartDelay(1000);
  
  if (millis() > 5000 && gps.charsProcessed() < 10)
    Serial.println(F("GPS LOST!!!"));
}