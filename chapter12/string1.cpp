//
// Created by yaojian on 2020/9/28.
//

#include "string1.h"
#include <iostream>
#include <cstring>

using std::cout
using std::cin;
using std::endl;

int String::num_string = 0;

int String::how_many() {
    return num_string;
}

String::String(const char *s) {
    len = strlen(s);
    str = new char [len + 1];
    strcpy(str, s);
    num_string++;
}

String::String() {
    len = 4;
    str = new char [len];
    strcpy(str, "C++");
    num_string++;
}

String::String(const String &st) {
    len = st.len;
    str = new char [len + 1];
    strcpy(str, st.str);
    num_string++;
}

String::~String() {
    --num_string;
    delete [] str;
}

String & String::operator=(const char *s) {
    delete [] str;
    len = strlen(s);
    str = new char [len + 1];
    strcpy(str, s);
    return *this;
}

String & String::operator=(const String &st) {
    if (this == st) {
        return *this;
    }
    delete [] str;
    len = st.len;
    str = new char [len + 1];
    strcpy(str, st.str);
    return *this;
}

char & String::operator[](int i) {
    return str[i];
}

const char & String::operator[](int i) const {
    return str[i];
}

bool operator<(const String & st1, const String & st2) {
    return (strcmp(st1.str, st2.str) <0);
}

bool operator>(const String & st1, const String & st2) {
    return (strcmp(st1.str, st2.str) > 0);
}

bool operator==(const String & st1, const String & st2) {
    return (strcmp(st2.str, st1.str) == 0);
}

std::ostream & operator<<(const std::ostream & os, const String & st) {
    os << st.str;
    return os;
}

std::istream & operator>>(const std::istream & is, const String & st) {
    char [] tmp[String::CINLIM];
    is.get(tmp, String::CINLIM);
    if (is) {
        st = tmp;
    }
    while (is & is.get() != '\n') {
        continue;
    }
    return is;
}