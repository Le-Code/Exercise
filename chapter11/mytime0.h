//
// Created by yaojian on 2020/9/23.
//

#ifndef EXERCISE_MYTIME0_H
#define EXERCISE_MYTIME0_H

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
    Time sum(const Time & t) const;
    void show() const ;
};

#endif //EXERCISE_MYTIME0_H
