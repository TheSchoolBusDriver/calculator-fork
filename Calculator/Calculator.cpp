// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include<iostream>
using namespace std;

// class definition
class Calculator
{
public:
    int a, b;

    int add_no()
    {
        return a + b;
    }
    int sub_no()
    {
        return a - b;
    }
    int div_no()
    {
        return a / b;
    }
    int mul_no()
    {
        return a * b;
    }


};

// main function
int main()
{
    Calculator o;

    // accessing public datamember outside class
    cout << "Enter first no: " << "\n";
    cin >> o.a;
    cout << "Enter Second no: " << "\n";
    cin >> o.b;

    cout << "first no is: " << o.a << "\n";
    cout << "second no is: " << o.b << "\n";

    cout << "Addition is: " << o.add_no() << "\n";
    cout << "Subtraction is: " << o.sub_no() << "\n";
    cout << "multiplication is: " << o.mul_no() << "\n";
    cout << "division is: " << o.div_no();
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
