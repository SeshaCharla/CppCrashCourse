#include <cstdio>
#include "ClockOfTheNow.h"

struct Avout {
    Avout(const char* name, long year_of_apert):
        name{name}, apert{year_of_apert} {

    }

    void annouce() const {
        printf("My name is %s and my year of apert is %ld\n", name, apert.get_year());
    }

    const char* name {"Erasmus"};
    ClockOfTheNow apert;
};

int main() {
    Avout raz{"Erasmas", 3010};
    Avout jad{"Jad", 3010};
    raz.annouce();
    jad.annouce();
}

