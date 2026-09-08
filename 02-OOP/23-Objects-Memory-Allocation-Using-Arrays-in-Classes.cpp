#include <iostream>
using namespace std;
class shop
{
private:
    int ItemPrice[100];
    int ItemId[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void display(void);
};
void shop::setPrice(void)
{
    cout << "Enter the ID of Item NO. " << counter + 1 << " = " << endl;
    cin >> ItemId[counter];
    cout << "Enter the Price of Item : " << endl;
    cin >> ItemPrice[counter];
    counter++;
}
void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Item with ID " << ItemId[i] << " is " << ItemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.display();

    return 0;
}