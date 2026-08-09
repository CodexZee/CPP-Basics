#include <iostream>

using namespace std;

int main()
{
    // ==================== Array Example ====================

    int temperatures[] = {28, 32, 35, 31};

    // ==================== Array Declaration & Assignment ====================

    int weeklySales[4];

    weeklySales[0] = 1250;
    weeklySales[1] = 980;
    weeklySales[2] = 1430;
    weeklySales[3] = 1175;

    cout << "Weekly Sales:" << endl;

    cout << weeklySales[0] << endl;
    cout << weeklySales[1] << endl;
    cout << weeklySales[2] << endl;
    cout << weeklySales[3] << endl;

    // ==================== Changing Array Values ====================

    temperatures[2] = 38;

    cout << "\nTemperature Records:" << endl;

    for (int index = 0; index < 4; index++)
    {
        cout << "Temperature " << index
             << ": " << temperatures[index] << endl;
    }

    // Quick Practice:
    // Try printing the same array using
    // a while loop and a do-while loop.

    // ==================== Pointers and Arrays ====================

    int *dataPointer = temperatures;

    cout << "\nPointer and Array:" << endl;

    cout << *(dataPointer++) << endl;
    cout << *(++dataPointer) << endl;

    // You can also access array elements through pointers:
    // cout << *(dataPointer) << endl;
    // cout << *(dataPointer + 1) << endl;
    // cout << *(dataPointer + 2) << endl;
    // cout << *(dataPointer + 3) << endl;

    return 0;
}
