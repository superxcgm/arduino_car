#include "timer.h"
#include <Arduino.h>

bool Timer::Subscribe(Timer::Func func, int16_t interval, int16_t repeat) {
    if (task_len >= MAX_LEN) {
        return false;
    }
    tasks[task_len++] = Task{func, interval, repeat, 0};
    return true;
}

void Timer::Tick() {
    auto now = millis();
    for (int i = 0; i < task_len; i++) {
        auto &task = tasks[i];
        if (now - task.last_execute >= task.interval) {
            task.last_execute = now;
            task.func();
        }
    }
}
