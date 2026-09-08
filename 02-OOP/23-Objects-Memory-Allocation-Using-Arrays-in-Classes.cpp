#include <iostream>
using namespace std;
class bank
{
private:
    int acctBlnc[100];
    int acctID[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void GetInfo();
    void Displayinfo();
};
void bank::GetInfo()
{
    cout << "Enter the account ID of No. " << counter + 1 << " account ";
    cin >> acctID[counter];
    cout << "Enter the Balance of Account : ";
    cin >> acctBlnc[counter];
    counter++;
}
void bank::Displayinfo()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Balance of Account with ID " << acctID[i] << " is " << acctBlnc[i] << endl;
    }
}

int main()
{
    bank z;
    z.initCounter();
    z.GetInfo();
    z.GetInfo();
    z.GetInfo();
    z.GetInfo();
    z.GetInfo();
    z.Displayinfo();

    return 0;
}