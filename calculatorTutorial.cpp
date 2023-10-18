// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    std::cout << "The calculator programm welcomes you!\n";

    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Please enter operation to perfom. Format: |x + y|,  |x - y|, |x * y|, |x / y|" << std::endl;

    Calculator c;

    while (true) {

        std::cout << "\nInput value x = ";
        std:: cin >> x;

        std::cout << "\n\nInput operator (-, +, *, /): ";
        std::cin >> oper;

        std::cout << "\n\nInput value y = ";
        std::cin >> y;

        result = c.Calculate(x, oper, y);

        std::cout << "\n\nResult " << x << " " << oper << " " << y << " = " << result << std::endl;

    }


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
