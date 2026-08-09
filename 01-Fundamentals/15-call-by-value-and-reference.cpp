#include <iostream>

using namespace std;

// ==================== Sum Function ====================

int calculateSum(int first, int second)
{
    int total = first + second;
    return total;
}

// ==================== Call by Value ====================

// Changes made inside this function do not affect
// the original variables.

void swapByValue(int first, int second)
{
    int temporary = first;

    first = second;
    second = temporary;
}

// ==================== Call by Reference using Pointers ====================

void swapUsingPointers(int *first, int *second)
{
    int temporary = *first;

    *first = *second;
    *second = temporary;
}

// ==================== Call by Reference using References ====================

void swapUsingReferences(int &first, int &second)
{
    int temporary = first;

    first = second;
    second = temporary;
}

int main()
{
    int numberA = 12;
    int numberB = 27;

    cout << "Before swapping:" << endl;
    cout << "Number A: " << numberA << endl;
    cout << "Number B: " << numberB << endl;

    // Call by value:
    // swapByValue(numberA, numberB);

    // Call by reference using pointers:
    // swapUsingPointers(&numberA, &numberB);

    // Call by reference using reference variables:
    swapUsingReferences(numberA, numberB);

    cout << "\nAfter swapping:" << endl;
    cout << "Number A: " << numberA << endl;
    cout << "Number B: " << numberB << endl;

    cout << "\nSum: "
         << calculateSum(numberA, numberB)
         << endl;

    return 0;
}
