#ifndef INCLUDE_WHEEL_H_
#define INCLUDE_WHEEL_H_

class Wheel {
    const int pin_direction;
    const int pin_speed;
    const bool reverse;
public:
    Wheel(int pin_direction, int pin_speed, bool reverse = false) : pin_direction(pin_direction), pin_speed(pin_speed),
                                                                    reverse(reverse) {}

    void Init();
};

#endif //INCLUDE_WHEEL_H_
