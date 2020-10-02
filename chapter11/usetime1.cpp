//
// Created by yaojian on 2020/9/23.
//
#include <iostream>
#include "mytime1.h"

int main() {
    using std::cout;
    using std::endl;
    Time planing;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planing time = ";
    planing.show();

    cout << "coding time = ";
    coding.show();

    cout << "fixing time = ";
    fixing.show();

    total = coding + fixing;
    cout << "coding + fixing = ";
    total.show();

    Time moreFixing(3, 28);
    cout << "more fixing time = ";
    moreFixing.show();

    total = moreFixing.operator+(total);
    cout << "moreFixing.operator+(total) = ";
    total.show();

    return 0;
}
