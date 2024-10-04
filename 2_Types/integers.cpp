#include "cstdio"

int main(){
    unsigned short a = 0b1010'1010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFF'FFFF'FFFF'FFFF;
    printf("%llu\n", d);
    unsigned int a2 = 3669732608;
    printf("%u\nYabba %x!\n", a2, a2);
}