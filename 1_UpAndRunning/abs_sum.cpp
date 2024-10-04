#include <cstdio>

int absolute_value(int x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

int sum(int x, int y) {
    return x + y;
}

int main() {
    int x = -5;
    int y = 10;
    printf("The absolute value of %d is %d\n", x, absolute_value(x));
    printf("The sum of %d and %d is %d\n", x, y, sum(x, y));
    return 0;
}