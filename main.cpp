#include <iostream>

struct User{
    int id;
};

void f(){
    std::cout<<"hello";
}

void swap(const int &a, const int &b){
}

int main() {
    long a = 1;
    long b = 2;
    swap(1+2, b);
    std::cout<<a<<", "<<b;
}