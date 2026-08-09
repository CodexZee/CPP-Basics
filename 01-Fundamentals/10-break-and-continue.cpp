#include <iostream>

using namespace std;

int main()
{
    // ==================== Break Statement ====================

    // The break statement immediately stops the loop.

    // for (int number = 10; number <= 50; number += 2)
    // {
    //     if (number == 28)
    //     {
    //         break;
    //     }

    //     cout << "Number: " << number << endl;
    // }

    // ==================== Continue Statement ====================

    // The continue statement skips the current iteration
    // and moves to the next iteration.

    for (int number = 5; number <= 35; number += 5)
    {
        if (number == 20)
        {
            continue;
        }

        cout << "Current Number: " << number << endl;
    }

    return 0;
}
