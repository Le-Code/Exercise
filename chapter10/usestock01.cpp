//
// Created by yaojian on 2020/9/19.
//
#include <iostream>
#include "stock01.h"

int main() {
    Stock a;
    a.acquire("nanosmart", 20, 12.25);
    a.show();
    a.buy(20, 18.125);
    a.show();
    a.sell(400, 20);
    a.show();
    a.buy(100000, 40.125);
    a.show();
    a.sell(1000, 0.125);
    a.show();
    return 0;
}
