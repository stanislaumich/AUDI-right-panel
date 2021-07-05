#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <beep.cpp>
#include "TimeLib.h"
//#include "DS1307RTC.h"
/*
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
*/

//#define USE_MICRO_WIRE
#include "GyverOLED.h"
GyverOLED oled(0x3C);
//GyverOLED<SSD1306_128x64, OLED_NO_BUFFER> oled;


//#define SCREEN_WIDTH 128 // OLED display width, in pixels
//#define SCREEN_HEIGHT 32 // OLED display height, in pixels
#define OLED_RESET     -1 
//#define SCREEN_ADDRESS 0x3D ///7A   78

//Adafruit_SSD1306 display(OLED_RESET);
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
/*
  display.clearDisplay(); // очистка дисплея
  display.setTextSize(2); // установка размера шрифта
  display.setTextColor(WHITE); // установка цвета текста
  display.setCursor(0, 0); // установка курсора в позицию X = 0; Y = 0
  display.print (speed); // записываем в буфер дисплея нашу фразу
  display.display(); // и её выводим на экран
  */
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
/*
    display.clearDisplay(); // очистка дисплея
  display.setTextSize(2); // установка размера шрифта
  display.setTextColor(WHITE); // установка цвета текста
  display.setCursor(0, 0); // установка курсора в позицию X = 0; Y = 0
  display.print (stm.Hour); 
  display.print(":");  
  display.print(stm.Minute);
  display.print(":");  
  display.println(stm.Second);
  display.display(); // и её выводим на экран
*/
 
}

int cnt=1;
void setup()
{
  initbeep();
  //dshortbeep();
oled.init(OLED128x64,900);
  oled.clear();
  oled.home();
  //oled.setScale(3);
  oled.scale2X();

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

/*
 display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
   // инициализация дисплея по интерфейсу I2C, адрес 0x3C для обычного дисплея 128-674
   //
  display.clearDisplay(); // очистка дисплея
  display.setTextSize(3); // установка размера шрифта
  display.setTextColor(WHITE); // установка цвета текста
  display.setCursor(0, 0); // установка курсора в позицию X = 0; Y = 0
  display.print ("Hello, world!"); // записываем в буфер дисплея нашу фразу
  display.display(); // и её выводим на экран
 
*/
  oled.println("HELLO!!!");
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
  
  stm.Day=gps.date.day();
  stm.Month=gps.date.month();
  stm.Year=CalendarYrToTm(gps.date.year());
  stm.Hour=gps.time.hour()+3;
  stm.Minute=gps.time.minute();
  stm.Second=gps.time.second();
  if(stm.Minute==0&&stm.Second==0){
      //RTC.write(stm);
  }
  cnt+=1;
  if(cnt==60) {silentbeep();cnt=0;}
  /*
   Вывод скорости и прочего раз в секунду
   */
  //if (RTC.read(stm)) {
     
    DisplayDatetime(stm);
    DisplaySpeed(); 
   //}

/*
  */ 
  smartDelay(1000);
  
  if (millis() > 5000 && gps.charsProcessed() < 10)
    Serial.println(F("GPS LOST!!!"));
}