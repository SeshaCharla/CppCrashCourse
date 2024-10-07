#include <cstdio>
#include "ClockOfTheNow.h"

int main() {
    int* x ;
    *x = {};  // Can't do the bracket initialization here
    int a = *x;  // Creating a new variable with new memory address and assigning the value in x to it
    printf("pinter address: %p\n", x);
    printf("pointer value: %d\n", *x);
    printf("a: %d\n", a);
    a = 20;
    printf("pointer value: %d, a = %d\n", *x, a);
    printf("addres of a: %p\n", &a);
    // Gettysburg address
    int gettysburg {};
    int* gettysburg_address = &gettysburg;
    printf("gettysburg: %d\n", gettysburg);
    printf("gettysburg_address: %p\n", gettysburg_address);
    // Clock of the now
    ClockOfTheNow clock;
    ClockOfTheNow* clock_ptr = &clock;
    clock_ptr -> set_year(2020);
    printf("address of Clock: %p\n", clock_ptr);
    printf("year of clock: %d \n", clock.get_year());
}