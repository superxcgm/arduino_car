
#ifndef INCLUDE_CAR_H_
#define INCLUDE_CAR_H_
#include "wheel.h"

class Car {
    Wheel wheel_left{4, 5};
    Wheel wheel_right{7, 6, true};
public:
    void Setup();
    void Loop();
};

#endif //INCLUDE_CAR_H_
