#include <iostream>

using namespace std;

// ==================== Function Prototypes ====================

// Syntax:
// return-type function-name(arguments);

// Different valid function declarations:
// int calculateTotal(int x, int y);
// int calculateTotal(int, int);

// void showMessage();
// void showMessage(void);

int calculateTotal(int, int);
void showMessage();

int main()
{
    int firstInput;
    int secondInput;

    cout << "Enter first value: ";
    cin >> firstInput;

    cout << "Enter second value: ";
    cin >> secondInput;

    // firstInput and secondInput are actual parameters.

    cout << "Calculated Total: "
         << calculateTotal(firstInput, secondInput)
         << endl;

    showMessage();

    return 0;
}

// ==================== Function Definition ====================

int calculateTotal(int valueOne, int valueTwo)
{
    // valueOne and valueTwo are formal parameters.

    int result = valueOne + valueTwo;

    return result;
}

// ==================== Void Function ====================

void showMessage()
{
    cout << "C++ practice session completed successfully!" << endl;
}
