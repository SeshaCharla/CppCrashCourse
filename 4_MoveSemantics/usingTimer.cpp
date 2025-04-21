//
// Created by Seshu on 4/21/2025.
//

#include "Timer.h"
#include <chrono>
#include <thread>

int main(){
    Timer T1("T1");
    std::this_thread::sleep_for(std::chrono::milliseconds(8000));
    Timer T1_copy(T1);
    std::this_thread::sleep_for(std::chrono::milliseconds(8000));
    Timer T1_moved(std::move(T1));
}
