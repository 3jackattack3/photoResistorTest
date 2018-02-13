#include <Arduino.h>

class Blink
{
  public:
    Blink(int pin);
    void flash(int delayHigh, int delayLow);
  private:
    int _pin;
};

Blink::Blink(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blink::flash(int delayHigh, int delayLow)
{
  digitalWrite(_pin, HIGH);
  delay(delayHigh);
  digitalWrite(_pin, LOW);
  delay(delayLow);
}

//here are some changes here too :)
//more changes! MUAHAHAHAHAHA :)
