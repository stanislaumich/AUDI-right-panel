#include <Arduino.h>
#include <beep.cpp>
//#include<GyverUART.h>
#include "GyverTimer.h"
 //  https://arduino-kit.ru/blogs/blog/project_33
 // https://microkontroller.ru/arduino-projects/gps-spidometr-na-arduino-i-oled-displee-svoimi-rukami/



GTimer myTimer1(MS, 60000);

void setup() {
  // put your setup code here, to run once:
  initbeep();
  dshortbeep();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (myTimer1.isReady())
    shortbeep();

}