#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // ==================== Constants in C++ ====================

    const int maxScore = 100;

    cout<< "Maximum Score: " << maxScore <<endl;

    // Uncommenting the line below will cause an error
    // because 'maxScore' is a constant.
    // maxScore = 90;


    // ==================== Manipulators in C++ ====================

    int students = 7;
    int marks = 86;
    int totalMarks = 1245;

    cout << "Without setw:" << endl;
    cout << "Students: " << students << endl;
    cout << "Marks: " << marks << endl;
    cout << "Total Marks: " << totalMarks << endl;

    cout << "Using setw:" << endl;
    cout << "Students: " << setw(6) << students << endl;
    cout << "Marks: " << setw(6) << marks << endl;
    cout << "Total Marks: " << setw(6) << totalMarks << endl;


    // ==================== Operator Precedence ====================

    int firstNumber = 7;
    int secondNumber = 5;

    int result = (((firstNumber * 4) + secondNumber) - 20) + 65;

    cout << "\nOperator Precedence Result: " << result << endl;

    return 0;
}
