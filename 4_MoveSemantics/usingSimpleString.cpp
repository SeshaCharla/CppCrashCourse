#include "SimpleString.h"


int main() {
    SimpleString string {15};
    if (!string.append_line("adfsfasf")) {
        printf("Appending string is too long");
    }
    else {
        string.print("appended string");
    }
}