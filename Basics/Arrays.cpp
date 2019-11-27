//
// Created by Safdar Nazir on 11/27/2019.
//

#include "Arrays.h"
#include <iostream>
using namespace std;
void Arrays::Array() {

    // Default Input

    int Brr[5] = {2, 45, 6, 12, 9};
    cout<<"Here is the output of the Default Array: ";
    for (int j = 0; j < 5; ++j) {
        cout<<Brr[j]<<"    ";
    }



    // User Input
    cout<<endl;
    int Arr[6];
    cout<<"Enter the Value for an Array: ";
    for (int i = 0; i < 6; ++i) {
        cin>>Arr[i];
    }

    cout<<"Here is the output of the User Defined Array: ";
    for (int k = 0; k < 6; ++k) {
        cout<<Arr[k]<<"    ";
    }
}
