//
// Created by yaojian on 2020/9/24.
//
#include <iostream>
#include "mytime3.h"

int main() {
    using std::cout;
    using std::endl;

    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << "aida and tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "aida + tosca = " << temp << endl;

    temp = aida * 1.7;
    cout << "aida * 1.7 = " << temp <<endl;

    cout << "10.0 * tosca: " << 10.0 * tosca <<endl;

    return 0;
}