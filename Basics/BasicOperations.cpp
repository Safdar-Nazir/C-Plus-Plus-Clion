//
// Created by Safdar Nazir on 11/23/2019.
//

#include "BasicOperations.h"
#include <iostream>
using namespace std;

void BasicOperations::Operations() {
    int x, y;
    std::cout << "Enter two Integer Values: ";
    std::cin >> x >> y;
    std::cout<<"Here is the Sum of these Integers: "<<x+y<<endl;
    std::cout<<"Here is the Difference of these Integers: "<<x-y<<endl;
    std::cout<<"Here is the Multiplication of these Integers: "<<x*y<<endl;
    std::cout<<"Here is the Division of these Integers: "<<x/y<<endl;

}
