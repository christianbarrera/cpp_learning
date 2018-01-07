//
//  main.cpp
//  Calculator
//
//  Created by Christian Barrera on 1/6/18.
//  Copyright © 2018 Christian Barrera. All rights reserved.
//

#include <iostream>
using namespace std;

void getOperator() {
    string ans = "0";
    string first_num;
    char input_operator;
    string second_num;
    
    while (true) {
        cout << "Please input the first number or 'ans': ";
        cin >> first_num;
        if (first_num == "ans") {
            first_num = ans;
        } else if (first_num == "q") {
            break;
        }
        cout << endl << "Please input a mathematical operator ('q' to quit): ";
        cin >> input_operator;
        if (input_operator == 'q') {
            break;
        }
        cout << endl << "Please enter the second number of 'ans': ";
        cin >> second_num;
        if (second_num == "ans") {
            second_num = ans;
        } else if (second_num == "q") {
            break;
        }
        
        switch (input_operator) {
            case '+':
                ans = to_string(stof(first_num) + stof(second_num));
                cout << "ans = " << ans << endl;
                break;
            case '-':
                ans = to_string(stof(first_num) - stof(second_num));
                cout << "ans = " << ans << endl;
                break;
            case '*':
                ans = to_string(stof(first_num) * stof(second_num));
                cout << "ans = " << ans << endl;
                break;
            case '/':
                ans = to_string(stof(first_num) / stof(second_num));
                cout << "ans = " << ans << endl;
                break;
            default:
                cout << "Please enter a valid math operator. " << endl;
        }
        cout << ans << endl;
    }
    cout << endl << "Goodbye" << endl;
}

int main() {
    getOperator();
    return 0;
}
