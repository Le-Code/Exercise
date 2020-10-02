//
// Created by yaojian on 2020/9/20.
//
#include "stock10.h"
#include <iostream>

Stock10::Stock10() {
    std::cout<<"default constructor"<<std::endl;
    company = "no name";
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock10::Stock10(const std::string &co, long n, double pr) {
    std::cout<<"constructor using " <<co<<std::endl;
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

Stock10::~Stock10() {
    std::cout<<"bye "<<company<<std::endl;
}

void Stock10::buy(long num, double price) {
    if (num < 0) {
        std::cout << "number of shares not negatice" << std::endl;
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock10::sell(long num, double price) {
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

void Stock10::update(double price) {
    share_val = price;
    set_tot();
}

void Stock10::show() {
    std::cout<<"company" << company
             <<" shares: " <<shares <<"\n"
             <<" share price: "<<share_val<<"\n"
             <<" total worth: "<<total_val<<std::endl;
}
