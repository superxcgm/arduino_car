#include "motor.h"
#include <Arduino.h>

void Motor::Init() {
    pinMode(pin_direction, OUTPUT);
    Stop();
}

void Motor::Forward() {
    auto direction = LOW;
    if (reverse) {
        direction = !direction;
    }
    digitalWrite(pin_direction, direction);
    analogWrite(pin_speed, speed);
}

void Motor::Stop() {
    analogWrite(pin_speed, 0);
}
