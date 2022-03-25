#ifndef INCLUDE_WHEELS_H_
#define INCLUDE_WHEELS_H_
#include "motor.h"

class Wheels {
private:
    Motor motor_left{4, 5};
    Motor motor_right{7, 6, true};
public:
    void Init();

    void Stop();

    void Forward();

    void Backward();

    void TurnLeft();

    void TurnRight();

    // -180 ~ 180 degree
    void Turn(int angle);
};

#endif //INCLUDE_WHEELS_H_
