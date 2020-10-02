//
// Created by yaojian on 2020/9/20.
//

#ifndef EXERCISE_STOCK20_H
#define EXERCISE_STOCK20_H
#include <string>
class Stock20{
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
    const Stock20 & topVal(const Stock20 & s) const ;
};


#endif //EXERCISE_STOCK20_H
