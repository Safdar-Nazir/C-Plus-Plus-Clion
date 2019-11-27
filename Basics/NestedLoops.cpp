//
// Created by Safdar Nazir on 11/23/2019.
//

#include "NestedLoops.h"
#include <iostream>
using namespace std;

void NestedLoops::NestLoops() {
    // In Nested Loop one loop lies in another loop.

    // While Loop inside the For Loop.

    for (int i = 1; i < 5; i++) {
        cout<<"This is For Loop running for "<<i<<" times."<<endl;
        int k = 1;
        while (k < 6){
            cout<<"This is While Loop running for "<<k<<" times."<<endl;
            k++;
        }

    }

    // Similarly For loop can be placed inside the While. These things can also implemented on DoWhile Loop depending upon the scenario.
}