#include <iostream>

using namespace std;

// ==================== Structure with typedef ====================

typedef struct Student
{
    int rollNumber;
    char section;
    float percentage;

} StudentInfo;

// ==================== Union ====================

union Product
{
    int quantity;
    char category;
    float price;
};

int main()
{
    // ==================== Enum ====================

    enum Status
    {
        pending,
        processing,
        completed
    };

    Status currentStatus = completed;

    cout << "Is the task completed? "
         << (currentStatus == completed) << endl;

    // You can also access enum values directly:
    // cout << pending << endl;
    // cout << processing << endl;
    // cout << completed << endl;

    // ==================== Union Example ====================

    Product item;

    item.quantity = 25;

    cout << "\nProduct Quantity: "
         << item.quantity << endl;

    item.category = 'A';

    cout << "Product Category: "
         << item.category << endl;

    // ==================== Structure Example ====================

    StudentInfo student;

    student.rollNumber = 27;
    student.section = 'B';
    student.percentage = 87.5;

    cout << "\nStudent Information:" << endl;

    cout << "Roll Number: "
         << student.rollNumber << endl;

    cout << "Section: "
         << student.section << endl;

    cout << "Percentage: "
         << student.percentage << endl;

    return 0;
}
