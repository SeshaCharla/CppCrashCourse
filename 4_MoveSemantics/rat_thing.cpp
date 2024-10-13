#include <cstdio>

struct RatThing {
    static int rat_things_power;      // This command runs only on the first call of the program
    static void power_up_rat_thing(int nuclear_isotopes) {
        printf("Rat-thing power: %d\n", rat_things_power);
        rat_things_power = rat_things_power + nuclear_isotopes;
        const auto waste_heat = rat_things_power * 20;
        if (waste_heat > 10000) {
            printf("Warning! Hot doggie!\n");
        }
        printf("Rat-thing power: %d\n", rat_things_power);
    }
};

int RatThing::rat_things_power = 200;

int main() {
    RatThing::power_up_rat_thing(100);
    RatThing::power_up_rat_thing(500);

    // Array creation and deletion

    int* arry_ptr = new int[5];
    for (int i=0; i < 5; i++) {
        arry_ptr[i] = i;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arry_ptr[i]);
    }
    delete[] arry_ptr;
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arry_ptr[i]);
    } // printing deleted stuff spits out junk
}