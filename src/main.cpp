#include <Arduino.h>

int led = 9; //donde va conectado el led

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  analogWrite(led, 255);
  delay(2000);
  analogWrite(led, 127);
  delay(2000);
  analogWrite(led, 0);
  delay(2000);
}