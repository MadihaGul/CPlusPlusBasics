// CPlusPlusBasics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;

    cout << "\n Enter first number:";
    cin >> firstNumber;
    cout << "\n Enter second number:";
    cin >> secondNumber;

    if (firstNumber > secondNumber)
    {
        cout << "The number " << firstNumber << " is greater than number " << secondNumber;
    }
    else if (secondNumber > firstNumber)
    {
        cout << "The number " << firstNumber << " is less than number " << secondNumber;
    }
    else
    {
        cout << "Both numbers are equal";
    }
      







}

