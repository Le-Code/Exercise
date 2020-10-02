//
// Created by yaojian on 2020/9/20.
//

#ifndef EXERCISE_STOCK10_H
#define EXERCISE_STOCK10_H
#include <string>

class Stock10{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() {
        total_val = share_val * shares;
    }

public:
    //two constructor
    Stock10();
    Stock10(const std::string & co, long n = 0, double pr = 0);
    ~Stock10();//析构函数
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif //EXERCISE_STOCK10_H
