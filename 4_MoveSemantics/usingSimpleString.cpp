#include "SimpleString.h"
#include <utility>

void foo(SimpleString& x){
    x.append_line("Change lost");
}

int main() {
    SimpleString string {15};
    if (!string.append_line("adfsfasf")) {
        printf("Appending string is too long");
    }
    else {
        string.print("appended string");
    }

    SimpleString string_copy {string};
    string_copy.print("copy string: ");

    foo(string_copy);
    string_copy.print("after foo: ");

    auto str_diff_copy = string_copy;
    str_diff_copy.print("new copy: ");

    auto str_mv {std::move(str_diff_copy)};
    str_diff_copy.print("nothin: ");
    str_mv.print("somthing: ");
}