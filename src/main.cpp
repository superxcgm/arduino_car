#include <Arduino.h>
#include "car.h"

Car car;

void setup() {
    car.Setup();
}


void loop() {
    car.Loop();
}