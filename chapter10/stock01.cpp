//
// Created by yaojian on 2020/9/19.
//
#include <iostream>
#include "stock01.h"

void Stock::acquire(const std::string & co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "number of shares not negatice" << std::endl;
        shares = 0;
    }else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "number of shares not negatice" << std::endl;
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        cout<<"number of shares can't be negative";
    }else if (num > shares) {
        cout<<"can't sell more than you have";
    }else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    std::cout<<"company" << company
             <<" shares: " <<shares <<"\n"
             <<" share price: "<<share_val<<"\n"
             <<" total worth: "<<total_val<<std::endl;
}
