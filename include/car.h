
#ifndef INCLUDE_CAR_H_
#define INCLUDE_CAR_H_
#include "motor.h"
#include "wheels.h"
#include "timer.h"

class Car {
    Wheels wheels;
    Timer timer;
public:
    void Setup();
    void Loop();
};

#endif //INCLUDE_CAR_H_
