#include <Arduino.h> 
//  Раскомментируйте для программной реализации шины I2C:              //
//  #define pin_SW_SDA 3                                               // Назначение любого вывода Arduino для работы в качестве линии SDA программной шины I2C.
//  #define pin_SW_SCL 9                                               // Назначение любого вывода Arduino для работы в качестве линии SCL программной шины I2C.
//  Раскомментируйте для совместимости с большинством плат:            //
//  #include <Wire.h>                                                  // Библиотека iarduino_OLED_txt будет использовать методы и функции библиотеки Wire.
//  Ссылки для ознакомления:                                           //
//  Подробная информация о подключении модуля к шине I2C:              // http://wiki.iarduino.ru/page/i2c_connection/
//  Подробная информация о функциях и методах библиотеки:              // http://wiki.iarduino.ru/page/OLED_trema/
//  Библиотека  iarduino_OLED_txt (текстовая) экономит ОЗУ:            // http://iarduino.ru/file/341.html
//  Бибилиотека iarduino_OLED     (графическая):                       // http://iarduino.ru/file/340.html
                                                                       // 
#include <iarduino_OLED_txt.h>                                         // Подключаем библиотеку iarduino_OLED_txt.
iarduino_OLED_txt myOLED(0x3D);                                        // Объявляем объект myOLED, указывая адрес дисплея на шине I2C: 0x3C или 0x3D.
//#include "font_orbitum_20.h"                                                                       //
//extern uint8_t MediumFont[];                                           // Подключаем шрифт MediumFont.
extern uint8_t MegaNumbers[];
uint32_t       i;                                                      // Объявляем переменную для хранения времени прошедшего с момента старта скетча.
int            h, m, s;                                                // Объявляем переменную для хранения времени в часах, минутах и секундах.
                                                                       //
void setup(){                                                          //
    myOLED.begin();                                                    // Инициируем работу с дисплеем.
    myOLED.setFont(MegaNumbers);//MediumFont                                        // Указываем шрифт который требуется использовать для вывода цифр и текста.
}                                                                      //
void loop(){                                                           //
    i=millis();                                                        // Получаем количество миллисекунд прошедшее с момента старта скетча.
    if(i%1000==0){ delay(1);                                           // Выполняем скетч 1 раз в секунду. Так как условие истинно в течении 1 миллисекунды, то устанавливаем задержку в 1 миллисекунду.
        i/=1000; h=i/60/60%24; m=i/60%60; s=i%60;                      // Рассчитываем часы, минуты и секунды.
                                   myOLED.setCursor(16,5);             // Устанавливаем курсор в 16 столбец 4 строки.
        //if(h<10){myOLED.print(0);} myOLED.print(h);                    // Выводим часы прошедшие с момента старта скетча, в формате ЧЧ.
        //                           myOLED.print(":");                  // Выводим текст состоящий из одного символа «:»
        //if(m<10){myOLED.print(0);} myOLED.print(m);                    // Выводим минуты прошедшие с момента старта скетча, в формате ММ.
        //                           myOLED.print(":");                  // Выводим текст состоящий из одного символа «:»
        if(s<10){myOLED.print(0);} myOLED.print(s);                    // Выводим секунды прошедшие с момента старта скетча, в формате СС.
    }                                                                  //
}                                                                      //
                                                                       //