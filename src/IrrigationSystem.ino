#include "RTClib.h"

RTC_DS1307 rtc;

const int PUMP_PIN = 12;

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

  pinMode(PUMP_PIN, OUTPUT);
}

void loop() {

  DateTime now = rtc.now();

  // the pump turns on every day at 9PM for 5 seconds
  if (now.hour() == 21 && now.minute() == 00 && now.second() > 0 && now.second() < 5) {
    digitalWrite(PUMP_PIN, HIGH);
  } else {
    digitalWrite(PUMP_PIN, LOW);
  }
}
