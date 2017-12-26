//
//  main.cpp
//  test_project
//
//  Created by Christian Barrera on 12/21/17.
//  Copyright © 2017 Christian Barrera. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int input;
    
    while(true) {
        cin >> input;
        if (input > 10) {
            break;
        }   else if (abs(input) % 2 == 1) {
            cout<<(input/3+1)*3;
        }   else {
            for (int a = 0; a < input; a++ ) {
                cout<< "Hello";
            }
        }
    }
    return 0;
}
