#include "RTClib.h"

RTC_DS1307 rtc;

void setup() {
  Serial.begin(9600);

  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    Serial.flush();
    while (1) delay(10);
  }

  if (!rtc.isrunning()) {
    Serial.println("RTC is NOT running, let's set the time!");
  }
  
  rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); // sets the RTC to the datatime of the compilation of this program
  //rtc.adjust(DateTime(2025, 1, 9, 23, 55, 0)); // sets the RTC to the specific datatime (9 of Jan 2025 11:55PM)
}

void loop() {

  DateTime now = rtc.now();

    Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println();
}
