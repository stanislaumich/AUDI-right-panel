#include <TinyGPS++.h>
#include <SoftwareSerial.h>
#include <beep.cpp>
/*
работает без сбоев
*/
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

void SetTimeDate(int dd,int dm,int dy,int th,int tm,int ts){
    Serial.println("SET!!!");
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
  Serial.print(gps.satellites.value());
  Serial.print("   ");
  int dd=gps.date.day()
  Serial.print(dd);
  Serial.print(".");

  int dm=gps.date.month();
  Serial.print(dm);
  Serial.print(".");

  int dy=gps.date.year();
  Serial.print(dy);
  Serial.print("   ");

  int th=gps.time.hour()+3;
  Serial.print(th);
  Serial.print(":");

  int tm=gps.time.minute();
  Serial.print(tm);
  Serial.print(":");

  int ts=gps.time.second();
  Serial.print(ts);

  if(ts==0&&tm==0){
      SetTimeDate(dd,dm,dy,th,tm,ts);
  }

  Serial.print("   ");
  Serial.print(gps.speed.kmph());
  Serial.println();
  cnt+=1;
  if(cnt==60) {silentbeep();cnt=0;}
  /*
   Вывод скорости и прочего раз в секунду

  */ 
  smartDelay(1000);
  
  if (millis() > 5000 && gps.charsProcessed() < 10)
    Serial.println(F("GPS LOST!!!"));
}