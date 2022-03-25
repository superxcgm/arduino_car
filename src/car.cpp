#include <Arduino.h>
#include "car.h"

void Car::Setup() {
    wheels.Init();
}

void Car::Loop() {
    wheels.Forward();
    delay(500);
    wheels.Stop();
    delay(500);
}

