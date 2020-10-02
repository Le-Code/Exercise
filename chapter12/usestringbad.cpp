//
// Created by yaojian on 2020/9/26.
//
#include <iostream>
#include "stringbad.h"
using std::cout;
using std::endl;

void callme1(StringBad &);
void callme2(StringBad);
//缺少复制构造函数和赋值函数
int main() {
    using std::endl;
    {
        cout << "starting an inner block" <<endl;
        StringBad headLine1("headLine");
        StringBad headLine2("headLine2");
        StringBad sports("sports");

        cout << "headLine1: " << headLine1 << endl;
        cout << "headLine2: " << headLine2 << endl;
        cout << "sports: " << sports <<endl;
        callme1(headLine1);
        cout << "headLine1: " << headLine1 << endl;
        callme2(headLine2);
        cout << "headLine2: " << headLine2 << endl;
        cout << "initialize one object to another:" << endl;
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "assign one object to another:" << endl;
        StringBad knot;
        knot = headLine1;
        cout << "knot: " << knot << endl;
    }
    cout << "end of main()" << endl;

    return 0;
}

void callme1(StringBad & rsb) {
    cout << "string passed by reference: ";
    cout << rsb << endl;
}

void callme2(StringBad rsb) {
    cout << "string passed by value: ";
    cout << rsb << endl;
}
