//
// Created by yaojian on 2020/9/24.
//

#ifndef EXERCISE_NYTIME3_H
#define EXERCISE_NYTIME3_H
#include <iostream>

class Time {
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void reset(int h = 0, int m = 0);
    Time operator+(const Time & t) const ;
    Time operator-(const Time & t) const ;
    Time operator*(double n) const ;
    friend Time operator*(double m, const Time & t) {
        return t * m;
    }
    friend std::ostream & operator<<(std::ostream & os, const Time & t);
};


#endif //EXERCISE_NYTIME3_H
