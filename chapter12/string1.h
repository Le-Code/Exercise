//
// Created by yaojian on 2020/9/28.
//

#ifndef EXERCISE_STRING1_H
#define EXERCISE_STRING1_H
#include <iostream>

class String {
private:
    char * str;
    int len;
    static int num_string;
    static const int CINLIM = 30; // 输入限制

public:
    String();
    String(const String & st);
    String(const char * s);
    ~String();

    //重载操作函数
    String & operator=(const String & st);
    String & operator=(const char * s);
    char & operator[](int i);
    const char & operator[](int i) const ;

    // 友元函数
    friend bool operator<(const String & st, const String & st2);
    friend bool operator>(const String & st, const String & st2);
    friend bool operator==(const String & st, const String & st2);
    friend std::ostream & operator<<(std::ostream & os, const String & st);
    friend std::istream & operator>>(std::istream & is, const String & st);

    // 静态方法
    static int how_many();
};


#endif //EXERCISE_STRING1_H
