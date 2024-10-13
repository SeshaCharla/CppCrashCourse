#include <cstdio>

struct Tracer {
    Tracer(const char* name): name{ name } {
        printf("Tracer created: %s\n", name);
    }
    ~Tracer() {
        printf("%s destructed, \n", name);
    }
    private:
        const char* const name;
};


static Tracer t1{"Static Variable"};
thread_local Tracer t2{"Thread-local Static Variable"};

int main() {
    const auto t2_ptr = &t2;
    printf("A\n");
    Tracer t3{"Automatic Variable"};
    printf("B\n");
    const auto* t4 = new Tracer{"Dynamic Variable"};
    printf("C\n");
}