//
// Created by yaojian on 2020/9/20.
//
#include <iostream>
#include "stock10.h"

int main() {
    {
        using std::cout;
        cout<<"using constructor to create new object\n";
        Stock10 stock10("company", 10, 12.6);
        stock10.show();
        Stock10 stock101 = Stock10("boffo", 12, 33);
        stock101.show();

        cout<<"assign stock10 to stock101\n";
        stock101 = stock10;
        cout<<"list stock10 and stock101\n";
        stock10.show();
        stock101.show();

        cout<<"suing a constructor ti reset an object\n";
        stock10 = Stock10("niffty", 11, 111);
        cout<<"revised stock10\n";
        stock10.show();
    }
}


