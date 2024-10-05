#include "cstdio"

void taunt(){
    printf("You're a big guy.\n");
}

int main(){
    size_t size_c = sizeof(char);
    printf("char: %zd\n", size_c);
    size_t size_s = sizeof(short);
    printf("short: %zd\n", size_s);
    size_t size_i = sizeof(int);
    printf("int: %zd\n", size_i);
    size_t size_l = sizeof(long);
    printf("long: %zd\n", size_l);
    size_t size_ll = sizeof(long long);
    printf("long long: %zd\n", size_ll);
    size_t size_f = sizeof(float);
    printf("float: %zd\n", size_f);
    size_t size_d = sizeof(double);
    printf("double: %zd\n", size_d);
    taunt();
    return 0;
}