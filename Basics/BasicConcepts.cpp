//
// Created by Safdar Nazir on 11/23/2019.
//

#include "BasicConcepts.h"
#include <iostream>
using namespace std;

void BasicConcepts::Basic()
{
    //Just Output
    std::cout << "Hello, World!" << std::endl;

    //Input and Output
    int a;
    std::cout << "Please Enter an Integer Value: ";
    std::cin >> a;
    std::cout << "Here is what you have typed: " << a << std::endl;

    //Taking two inputs in a Single Line
    int x, y;
    std::cout << "Enter two Integer Values: ";
    std::cin >> x >> y;
    std::cout<<"Here is what you have typed: "<<x<<" and "<<y<<endl;
}

