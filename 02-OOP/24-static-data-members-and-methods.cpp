#include <iostream>
using namespace std;
// Student Registration System
class Student
{
private:
    int RollNumber;
    int static TotalStudents;

public:
    void static ShowTotalStudents()
    {
        cout << "Total students are " << TotalStudents << endl;
    }
    void setData();
    void showData();
};
void Student::setData()
{
    cout << "Enter the student's Roll_Number : ";
    cin >> RollNumber;
    TotalStudents++;
}
void Student::showData()
{
    cout << "The Roll_Number of student is " << RollNumber << " and Total students are " << TotalStudents << endl;
}
int Student::TotalStudents;

int main()
{
    Student ali, hamza, usman, waseem, zeeshan;

    ali.setData();
    ali.showData();
    Student::ShowTotalStudents();

    hamza.setData();
    hamza.showData();
    Student::ShowTotalStudents();

    usman.setData();
    usman.showData();
    Student::ShowTotalStudents();

    waseem.setData();
    waseem.showData();
    Student::ShowTotalStudents();

    zeeshan.setData();
    zeeshan.showData();
    Student::ShowTotalStudents();

    return 0;
}