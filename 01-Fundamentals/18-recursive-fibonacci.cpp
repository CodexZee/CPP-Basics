#include <iostream>

using namespace std;

// ==================== Recursive Fibonacci Function ====================

int fibonacciValue(int position)
{
    if (position < 2)
    {
        return 1;
    }

    return fibonacciValue(position - 2) + fibonacciValue(position - 1);
}

int main()
{
    int termNumber;

    cout << "Enter the Fibonacci position: ";
    cin >> termNumber;

    cout << "Fibonacci value at position "
         << termNumber
         << " is: "
         << fibonacciValue(termNumber)
         << endl;

    return 0;
}
