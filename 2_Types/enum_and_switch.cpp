#include <cstdio>

enum class Race {
    Dinan,
    Teklan,
    Ivyn,
    Moiran,
    Camite,
    Julian,
    Aidan
};

int main() {
    Race race = Race::Julian;

    switch(race) {
        case Race::Dinan: {
            printf("You work hard.\n");
        }
        break;
        case Race::Teklan: {
            printf("You are very strong.\n");
        }
        break;
        case Race::Ivyn: {
            printf("You are a great leader.\n");
        }
        break;
        case Race::Moiran: {
            printf("My, how versatile you are!\n");
        }
        break;
        default: {
            printf("something else\n");
        }
    }
}