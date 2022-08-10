// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

// class definition
class Calculator
{
    public:
        int a, b;

        inline int add_no()
        {
            return a + b;
        }
        inline int sub_no()
        {
            return a - b;
        }
        inline int div_no()
        {
            return a / b;
        }
        inline int mul_no()
        {
            return a * b;
        }
};

// main function
int main()
{
    Calculator calc;

    // accessing public datamember outside class
    cout << "Enter first number: " << "\n";
    cin >> calc.a;
    cout << "Enter second number: " << "\n";
    cin >> calc.b;

    cout << "First number is: " << calc.a << "\n";
    cout << "Second number is: " << calc.b << "\n";

    cout << "Addition is: " << calc.add_no() << "\n";
    cout << "Subtraction is: " << calc.sub_no() << "\n";
    cout << "Multiplication is: " << calc.mul_no() << "\n";
    cout << "Division is: " << calc.div_no();

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