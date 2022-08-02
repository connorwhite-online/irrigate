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
}