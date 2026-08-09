#include <iostream>

using namespace std;

int globalNumber = 68;

int main()
{
    // ************* Built-in Data Types *************

    // int firstValue, secondValue, total;
    // cout << "Enter the first value: " << endl;
    // cin >> firstValue;
    // cout << "Enter the second value: " << endl;
    // cin >> secondValue;
    // total = firstValue + secondValue;
    // cout << "The total is " << total << endl;
    // cout << "The global number is " << ::globalNumber;


    // ************* Float, Double and Long Double Literals *************

    // float decimalValue = 27.8F;
    // long double largeDecimal = 27.8L;
    // cout << "The size of 27.8 is " << sizeof(27.8) << endl;
    // cout << "The size of 27.8f is " << sizeof(27.8f) << endl;
    // cout << "The size of 27.8F is " << sizeof(27.8F) << endl;
    // cout << "The size of 27.8l is " << sizeof(27.8l) << endl;
    // cout << "The size of 27.8L is " << sizeof(27.8L) << endl;
    // cout << "The value of decimalValue is " << decimalValue << endl
    //      << "The value of largeDecimal is " << largeDecimal;


    // ************* Reference Variables *************

    // float originalValue = 620;
    // float &aliasValue = originalValue;
    // cout << originalValue << endl;
    // cout << aliasValue << endl;


    // ************* Type Casting *************

    int wholeValue = 72;
    float decimalNumber = 38.75;

    cout << "The value of wholeValue is "
         << (float)wholeValue << endl;

    cout << "The value of wholeValue is "
         << float(wholeValue) << endl;

    cout << "The value of decimalNumber is "
         << (int)decimalNumber << endl;

    cout << "The value of decimalNumber is "
         << int(decimalNumber) << endl;

    int convertedNumber = int(decimalNumber);

    cout << "The expression result is "
         << wholeValue + decimalNumber << endl;

    cout << "The expression result is "
         << wholeValue + int(decimalNumber) << endl;

    cout << "The expression result is "
         << wholeValue + (int)decimalNumber << endl;

    return 0;
}
