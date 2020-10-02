//
// Created by yaojian on 2020/9/26.
//

#ifndef EXERCISE_STRINGBAD_H
#define EXERCISE_STRINGBAD_H
#include <iostream>

class StringBad {
private:
    char * str;
    int len;
    static int num_string;
public:
    StringBad();
    StringBad(const char * st);
    ~StringBad();
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};


#endif //EXERCISE_STRINGBAD_H
