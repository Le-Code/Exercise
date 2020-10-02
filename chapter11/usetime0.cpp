//
// Created by yaojian on 2020/9/23.
//
#include <iostream>
#include "mytime0.h"

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

    total = coding.sum(fixing);
    cout << "coding.sum(fixing) = ";
    total.show();

    return 0;
}
