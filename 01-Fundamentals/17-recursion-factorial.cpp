#include <iostream>

using namespace std;

// ==================== Recursive Function ====================

int calculateFactorial(int value)
{
    // Base condition
    if (value <= 1)
    {
        return 1;
    }

    // Recursive call
    return value * calculateFactorial(value - 1);
}

int main()
{
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    cout << "Factorial of "
         << number
         << " = "
         << calculateFactorial(number)
         << endl;

    return 0;
}
