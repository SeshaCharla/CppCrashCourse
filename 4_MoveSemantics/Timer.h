//
// Created by Seshu on 4/21/2025.
//

#ifndef MOVESEMANTICS_TIMER_H
#define MOVESEMANTICS_TIMER_H

#include <ctime>
#include <cstdio>
#include <cstring>
#include <utility>
#include <iostream>

struct Timer {
    Timer(std::string timer_name): name{timer_name} {
        std::time(&time_stamp);
    }

    ~Timer(){
        auto end_time = std::time(nullptr);
        if (end_time < time_stamp){
            end_time = 0;
        }
        timer_age = end_time - time_stamp;
        std::cout << "Timer name: " << name << "\n" << "Timer Age: " << timer_age << std::endl;
    }

    Timer(const Timer& other_timer):
        name{other_timer.name},
        time_stamp{other_timer.time_stamp} {
        name.append("_copy");
    }

    Timer(Timer&& other_timer) noexcept :
        name{other_timer.name},
        time_stamp{other_timer.time_stamp} {
        name.append("_moved");
        other_timer.time_stamp = 0;
    }

private:
    std::time_t time_stamp;
    std::time_t timer_age;
    std::string name;
};


#endif //MOVESEMANTICS_TIMER_H
