#include <Arduino.h>

#define ledpin PC0
int delay_time = 500;

void setup()
{
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  delay(delay_time);
  digitalWrite(ledpin, LOW);
  delay(delay_time);
}