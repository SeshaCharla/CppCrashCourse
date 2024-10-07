//
// Created by seshu on 10/6/24.
//

#ifndef DOUBLY_LINKED_LIST_CPP_H
#define DOUBLY_LINKED_LIST_CPP_H

#include <string>

struct Element {
    Element(short num, std::string str):
            prefix{str}, operating_number{num} {
        next = nullptr;
        previous = nullptr;
    }
    Element* next{};
    Element* previous{};
    void insert_after(Element* new_element) {
        this->next->previous = new_element;
        new_element->next = this->next;
        new_element->previous = this;
        this->next = new_element;
    }
    void insert_before(Element* new_element) {
        this->previous->next = new_element;
        new_element->previous = this->previous;
        this->previous = new_element;
        new_element->next = this;
    }
    std::string prefix;
    short operating_number;
};



#endif //DOUBLY_LINKED_LIST_CPP_H
