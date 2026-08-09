#include <iostream>

using namespace std;

// ==================== Function Overloading ====================

// Function with two parameters
int calculateSum(int first, int second)
{
    cout << "Using the two-parameter function" << endl;
    return first + second;
}

// Function with three parameters
int calculateSum(int first, int second, int third)
{
    cout << "Using the three-parameter function" << endl;
    return first + second + third;
}

// ==================== Volume Calculations ====================

// Volume of a cylinder
// radius = r, height = h
double calculateVolume(double radius, int height)
{
    return 3.14159 * radius * radius * height;
}

// Volume of a cube
// side = length of one side
int calculateVolume(int side)
{
    return side * side * side;
}

int main()
{
    cout << "Sum of 12 and 8: "
         << calculateSum(12, 8)
         << endl;

    cout << "\nSum of 5, 11 and 14: "
         << calculateSum(5, 11, 14)
         << endl;

    cout << "\nCylinder Volume: "
         << calculateVolume(4.0, 7)
         << endl;

    cout << "Cube Volume: "
         << calculateVolume(6)
         << endl;

    return 0;
}
