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


