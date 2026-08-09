#include <iostream>

using namespace std;

int main()
{
    /*
        Loops in C++:

        Three commonly used loops:
        1. For Loop
        2. While Loop
        3. Do-While Loop
    */

    // ==================== For Loop ====================

    // Syntax:
    // for (initialization; condition; updation)
    // {
    //     // loop body
    // }

    // Display numbers from 3 to 30
    // for (int counter = 3; counter <= 30; counter++)
    // {
    //     cout << counter << endl;
    // }

    // ==================== Infinite For Loop ====================

    // Example of an infinite loop:
    // for (int counter = 1; 25 <= 50; counter++)
    // {
    //     cout << counter << endl;
    // }

    // ==================== While Loop ====================

    // Syntax:
    // while (condition)
    // {
    //     // C++ statements
    // }

    // Display multiples of 3
    // int number = 3;

    // while (number <= 30)
    // {
    //     cout << number << endl;
    //     number += 3;
    // }

    // ==================== Infinite While Loop ====================

    // Example of an infinite loop:
    // int counter = 1;

    // while (true)
    // {
    //     cout << counter << endl;
    //     counter++;
    // }

    // ==================== Do-While Loop ====================

    // Syntax:
    // do
    // {
    //     // C++ statements
    // }
    // while (condition);

    // A do-while loop executes at least once.
    int value = 15;

    do
    {
        cout << "Current value: " << value << endl;
        value -= 3;

    } while (value > 15);

    return 0;
}
