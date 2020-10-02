//
// Created by yaojian on 2020/9/26.
//

#include "stringbad.h"
#include <iostream>
#include <cstring>

using std::cout;

int StringBad::num_string = 0;

StringBad::StringBad() {
    len = 4;
    str = new char [4];
    std::strcpy(str, "C++");
    num_string++;
    cout << num_string << " : " << str << " default object create\n";
}

StringBad::StringBad(const char *st) {
    len = strlen(st);
    str = new char [len + 1];
    std::strcpy(str, st);
    num_string++;
    cout << num_string << " : " << str << " default object create\n";
}

StringBad::~StringBad() {
    cout << str << " object deleted ";
    --num_string;
    cout << num_string << " left\n";
    delete [] str;
}

std::ostream & operator << (std::ostream &os, const StringBad & st) {
    os << st.str;
    return os;
}