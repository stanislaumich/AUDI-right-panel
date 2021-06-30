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
int cnt=1;
void setup()
{
  initbeep();
  dshortbeep();
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
  Serial.print(gps.date.day());
  Serial.print(".");
  Serial.print(gps.date.month());
  Serial.print(".");
  Serial.print(gps.date.year());
  Serial.print("   ");
  Serial.print(gps.time.hour()+3);
  Serial.print(":");
  Serial.print(gps.time.minute());
  Serial.print(":");
  Serial.print(gps.time.second());
  Serial.print("   ");
  Serial.print(gps.speed.kmph());
  Serial.println();
  cnt+=1;
  if(cnt==60) {silentbeep();cnt=0;} 
  smartDelay(1000);
  
  if (millis() > 5000 && gps.charsProcessed() < 10)
    Serial.println(F("No GPS data received: check wiring"));
}