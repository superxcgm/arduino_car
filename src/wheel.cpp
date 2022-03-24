#include "wheel.h"
#include <Arduino.h>

void Wheel::Init() {
    pinMode(pin_direction, OUTPUT);
    auto direction = LOW;
    if (reverse) {
        direction = !direction;
    }
    digitalWrite(pin_direction, direction);
    analogWrite(pin_speed, 100);
}
