//
//  main.cpp
//  test_project
//
//  Created by Christian Barrera on 12/21/17.
//  Copyright © 2017 Christian Barrera. All rights reserved.
//

//#include <iostream>
//#include "binaryTrees.hpp"
//using namespace std;

/*
int factorial (int n)
{
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}*/

//int factorial (int i) {
//    int n, val = 1;
//    for(n = i; n > 1; n--)
//        val *= n;
//    return val;
//}
//
//int main () {
//    cout<<factorial(6);
//    cout<<CountBits(1100);
//    return 0;
//}

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
int main ()
{
    int outer = 5;
    while (outer >= 1)
    {
        int inner = 5;
        while (inner >= outer)
            cout << inner-- << " ";
        cout << "\n";
        --outer;
    }
    
    return 0;
}
*/
//
//int main()
//{
//    while (true)
//    {
//        cout << "Enter 0 to exit or anything else to continue: ";
//        int num;
//        cin >> num;
//
//        if (num == 0)
//            break;
//
//    }
//
//    cout << "We're out!\n";
//
//    return 0;
//}

double getDouble()
{
    while (true)
    {
        cout << "Enter a double value: ";
        double x;
        cin >> x;
        
        // Check for failed extraction
        if (cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            cin.clear();  // puts us back in 'normal' operation mode
            cin.ignore(32767, '\n'); // and remove the bad input
            cout << "Oops, that input is invalid.  Please try again.\n";
        }
        else
        {
            cin.ignore(32767, '\n');  // remove any extraneous input
            // the user can't enter a meaningless double value, so we don't need
            // to worry about validating that
            
            return x;
        }
    }
}

char getOperator()
{
    while (true)
    {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        char op;
        std::cin >> op;
        cin.ignore(32767,'\n');
        if (op == '+' || op == '-' || op == '*' || op == '/')
            return op;
        else
            cout << "Oops, that input is invalid.  Please try again.\n";
    }
}

void printResult(double x, char op, double y)
{
    switch (op) {
        case '+':
            cout << x << " + " << y << " is " << x + y << '\n';
            break;
        case '-':
            cout << x << " - " << y << " is " << x - y << '\n';
            break;
        case '*':
            cout << x << " * " << y << " is " << x * y << '\n';
            break;
        case '/':
            cout << x << " / " << y << " is " << x / y << '\n';
            break;
        default:
            cout << "Something went wrong: printResult() got an invalid operator.";
    }
//    if (op == '+')
//        std::cout << x << " + " << y << " is " << x + y << '\n';
//    else if (op == '-')
//        std::cout << x << " - " << y << " is " << x - y << '\n';
//    else if (op == '*')
//        std::cout << x << " * " << y << " is " << x * y << '\n';
//    else if (op == '/')
//        std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
    double x = getDouble();
    char op = getOperator();
    double y = getDouble();

    printResult(x, op, y);

    return 0;
}

//int main()
//{
//    int16_t x { 0 };
//    cout << "Enter a number between -32768 and 32767: ";
//    cin >> x;
//
//    int16_t y { 0 };
//    cout << "Enter another number between -32768 and 32767: ";
//    cin >> y;
//
//    cout << "The sum is: " << x + y << '\n';
//    return 0;
//}

