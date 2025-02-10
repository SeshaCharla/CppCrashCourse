#include <cstdio>
#include <stdexcept>

struct SuperClass {
    int x;
};

struct SubClass : SuperClass {
    int y;
    int foo() {
        return x+y;
    }
};

bool is_odd(int x) noexcept {
    return 1 == (x%2);
}

// void hari_kari() noexcept {
    // throw std::runtime_error("Goodbye, cruel world!");
// }


int main() {
    SuperClass s1;
    s1.x = 10;

    SubClass s2;
    s2.x = 10;
    s2.y = 20;
    printf("%d\n", s2.foo());

    printf("%d\n", is_odd(s2.foo()));

    // hari_kari();
}