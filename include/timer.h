#ifndef INCLUDE_TIMER_H_
#define INCLUDE_TIMER_H_


#include <stdint.h>

class Timer {
public:
    using Func = void (*)();
    static constexpr int16_t kRepeatInf = -1;

private:
    struct Task {
        Func func;
        int16_t interval;
        int16_t repeat;
        unsigned long last_execute;
    };
    static constexpr int8_t MAX_LEN = 10;
    Task tasks[MAX_LEN] = {};
    int8_t task_len = 0;
public:
    bool Subscribe(Func func, int16_t interval, int16_t repeat);

    void Tick();
};

#endif //INCLUDE_TIMER_H_
