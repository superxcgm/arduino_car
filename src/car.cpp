#include <Arduino.h>
#include "car.h"
#include <HCSR04.h>

UltraSonicDistanceSensor sensor(2, 3);

static Car *car;

void foo() {
    int distance = (int)sensor.measureDistanceCm();
    Serial.println(distance);
    if (distance != -1 && distance < 30) {
        Serial.println("stop");
        car->wheels.Stop();
    } else {
        Serial.println("forward");
        car->wheels.Forward();
    }
}

void Car::Setup() {
    car = this;
    Serial.begin(9600);
    wheels.Init();

    wheels.Forward();
    // use sr04 or IR to check if there is a wall in front, and stop forward
    timer.Subscribe(foo, 500, Timer::kRepeatInf);
}

void Car::Loop() {
    timer.Tick();
}
