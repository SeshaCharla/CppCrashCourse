#include "cstdio"
#include "ClockOfTheNow.h"

void add_year(ClockOfTheNow& clock) {
    clock.set_year(clock.get_year()+1);
}

int main() {
    ClockOfTheNow clock;
    printf("The year %d\n", clock.get_year());
    add_year(clock);
    printf("The year %d\n", clock.get_year());
}
