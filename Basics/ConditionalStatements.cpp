//
// Created by Safdar Nazir on 11/23/2019.
//

#include "ConditionalStatements.h"
#include <iostream>
using namespace std;

void ConditionalStatements::Conditional() {
     // If Else Statements
    int a ;
    cout<<"Please Enter a Number: ";
    cin>>a;
    if (a < 10){
        cout<<"You have entered a number which is less than 10."<<endl;
    } else{
        cout<<"The Number you have entered is greater than 10."<<endl;
    }

    // Switch Statement

    int b;
    cout<<"Please enter a Number: ";
    cin>>b;
    switch (b%5){
        case 0:
            cout<<"The Number is divisible by 5.";
            break;
        case 1:
            cout<<"The number you have entered is not divisible by 5. When we divide it by 5. There is a remainder of 1.";
            break;
        case 2:
            cout<<"The number you have entered is not divisible by 5. When we divide it by 5. There is a remainder of 2.";
            break;
        case 3:
            cout<<"The number you have entered is not divisible by 5. When we divide it by 5. There is a remainder of 3.";
            break;
        case 4:
            cout<<"The number you have entered is not divisible by 5. When we divide it by 5. There is a remainder of 4.";
            break;
        default:
            cout<<"Invalid Input.";
            break;
    }
}
