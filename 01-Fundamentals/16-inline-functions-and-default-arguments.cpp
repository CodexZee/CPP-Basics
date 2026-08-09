#include <iostream>

using namespace std;

// ==================== Inline Function ====================

inline int multiplyValues(int firstValue, int secondValue)
{
    return firstValue * secondValue;
}

// ==================== Default Arguments ====================

double calculateBalance(double amount, double growthRate = 1.05)
{
    return amount * growthRate;
}

int main()
{
    int quantity = 8;
    int price = 25;

    cout << "Product: "
         << multiplyValues(quantity, price)
         << endl;

    double savings = 75000;

    cout << "\nStandard Plan:" << endl;

    cout << "Initial Amount: " << savings << " Rs" << endl;

    cout << "Amount after one year: "
         << calculateBalance(savings)
         << " Rs" << endl;

    cout << "\nPremium Plan:" << endl;

    cout << "Initial Amount: " << savings << " Rs" << endl;

    cout << "Amount after one year: "
         << calculateBalance(savings, 1.12)
         << " Rs" << endl;

    return 0;
}
