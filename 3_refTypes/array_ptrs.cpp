#include <cstdio>

struct College {
    char name[256];
};

void print_name(College* college_ptr) {
        printf("collage name is:  %s \n", college_ptr->name);
};

void print_names(College* college_ptr, size_t n) {
    College* clg;
    for (size_t i{}; i<n; i++) {
        clg = college_ptr+i;
        printf("college name is: %s \n", clg->name);
    }
}


int main() {
    College best_colleges[] = {"Magdelen", "Nulfed", "Kellog"};
    for (College a : best_colleges) {
        print_name(&a);
    }
    print_names(best_colleges, sizeof(best_colleges)/sizeof(College));
    print_name(best_colleges+5); // Out-of-bounds error -- You get the skynet
}