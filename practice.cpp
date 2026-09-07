#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void one_compliment(void);
    void display(void);
};
void binary::read(void)
{
    cout << "Please enter binary numbers : ";
    cin >> s;

    cout << endl;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binnary formate...." << endl;
            exit(0);
        }
    }
}
void binary::one_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "Displaying your binary Numbers....!" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.display();

    b.one_compliment();
    b.display();

    return 0;
}