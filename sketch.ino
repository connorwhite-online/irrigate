#include <DS3231.h>

int Relay = 4 // Pin Number

DS3231 rtc(SDA, SCL);

Time t;

// Setup Sketch Loop
void setup() {
  Serial.begin(9600);
  rtc.begin();
  pinMode(Relay, OUTPUT);
  digitalWrite(Relay, LOW);

  rtc.setDOW(1); // Day of week is set to Monday (1-7)
  rtc.setTime(12, 0, 0); // Time is set to 12:00:00 (24-hour format)
  rtc.setDate(6, 8, 2022); // Date is set to 8/6/2019 DD, MM, YYYY
}