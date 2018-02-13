#include <Arduino.h>

class Blink
{
  public:
    Blink(int pin);
    void flash();
  private:
    int _pin;
};

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blink::flash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(500);
}
