#include <Arduino.h>
#include "car.h"

void Car::Setup() {
    wheels.Init();
    wheels.Forward();
    // use sr04 or IR to check if there is a wall in front, and stop forward
//    timer.Subscribe(/*  */, 50, Timer::kRepeatInf);
}

void Car::Loop() {
    timer.Tick();
}

