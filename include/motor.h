#ifndef INCLUDE_MOTOR_H_
#define INCLUDE_MOTOR_H_

class Motor {
    const int pin_direction;
    const int pin_speed;
    const bool reverse;
    const int speed = 80;
public:
    Motor(int pin_direction, int pin_speed, bool reverse = false) : pin_direction(pin_direction), pin_speed(pin_speed),
                                                                    reverse(reverse) {}

    void Init();

    void Forward();

    void Stop();
};

#endif //INCLUDE_MOTOR_H_
