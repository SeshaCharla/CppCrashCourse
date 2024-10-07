#include "cstdio"
#include "doubly_linked_list.h"


int main() {
    Element l1(1, "l1"), l2(2, "l2"),
            l3(3, "l3"), l4(4, "l4"),
            l5(5, "l5"), l6(6, "l6");
    l1.next = &l6;
    l6.previous = &l1;
    l1.insert_after(&l2);
    l2.insert_after(&l3);
    l3.insert_after(&l4);
    l6.insert_before(&l5);

    for (Element* cursor = &l1; cursor; cursor = cursor->next) {
        printf("Element %s:%d\n", (cursor->prefix).c_str(), cursor->operating_number);
    }
    for (Element* cursor = &l6; cursor; cursor = cursor->previous) {
        printf("Element %s:%d\n", (cursor->prefix).c_str(), cursor->operating_number);
    }
}