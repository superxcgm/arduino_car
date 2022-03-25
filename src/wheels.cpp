
#include "wheels.h"

void Wheels::Init() {
    motor_left.Init();
    motor_right.Init();
}

void Wheels::Forward() {
    motor_left.Forward();
    motor_right.Forward();
}

void Wheels::Stop() {
    motor_left.Stop();
    motor_right.Stop();
}

