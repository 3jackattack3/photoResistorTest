#include <Arduino.h>

class Morse
{
  public:
    Morse(int pin);
    Morse(int pin, int unit);
    void light(int delayHigh, int delayLow);
    void dot();
    void dash();
    void code(String code);
  private:
    int _pin, _unit;
};

// Morse::Morse(int pin)
// {
//   Morse(pin, 500);
// }

Morse::Morse(int pin, int unit)
{
  pinMode(pin, OUTPUT);
  _unit = unit;
  _pin = pin;
}

void Morse::light(int delayHigh, int delayLow)
{
  digitalWrite(_pin, HIGH);
  delay(delayHigh);
  digitalWrite(_pin, LOW);
  delay(delayLow);
}

void Morse::dot()
{
  light(_unit, _unit);
}

void Morse::dash()
{
  light(3*_unit, _unit);
}

void Morse::code(String code)
{
  for(int i=0; i< (int) code.length(); i++)
  {
    if(code[i] == '.') dot();
    else if(code[i] == '-') dash();
  }
}
