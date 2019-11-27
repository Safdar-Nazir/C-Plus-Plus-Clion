//
// Created by Safdar Nazir on 11/23/2019.
//

#include "Loops.h"
#include <iostream>
using namespace std;
void Loops::Loop() {
    // For Loop
    // It will run 10 times and output values in ascending order.

    cout<<"For Loop"<<endl;
    for (int i = 1; i < 11 ; i++) {
        cout<<i<<endl;
    }

    // While
    // This will also run 10 times but output values in descending order.
    int j = 10;
    cout<<"While Loop"<<endl;
    while (j > 0)
    {
        cout<<j<<endl;
        j--;
    }

    // DoWhile Loop
    // This will run only for 5 times and outputs values in ascending order.
    int k = 1;
    cout<<"Do While Loop"<<endl;
    do{
        cout<<k<<endl;
        k++;
    }while (k<6);
}