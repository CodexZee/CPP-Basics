#include <iostream>

using namespace std;

int main()
{
    // ==================== Pointers in C++ ====================

    // A pointer stores the memory address of another variable.

    int score = 85;
    int *scorePointer = &score;

    // ==================== Address-of Operator (&) ====================

    cout << "Address of score: "
         << &score << endl;

    cout << "Address stored in scorePointer: "
         << scorePointer << endl;

    // ==================== Dereference Operator (*) ====================

    cout << "Value stored at scorePointer: "
         << *scorePointer << endl;

    // ==================== Pointer to Pointer ====================

    int **doublePointer = &scorePointer;

    cout << "\nAddress of scorePointer: "
         << &scorePointer << endl;

    cout << "Address stored in doublePointer: "
         << doublePointer << endl;

    cout << "Value stored at doublePointer: "
         << *doublePointer << endl;

    cout << "Original value through doublePointer: "
         << **doublePointer << endl;

    return 0;
}
