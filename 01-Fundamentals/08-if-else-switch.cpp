#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Enter your score: " << endl;
    cin >> score;

    // ==================== Selection Control Structure ====================
    // If - Else If - Else Ladder

    // if (score >= 0 && score < 40)
    // {
    //     cout << "You need more practice." << endl;
    // }
    // else if (score == 40)
    // {
    //     cout << "You have just passed!" << endl;
    // }
    // else if (score < 0)
    // {
    //     cout << "Invalid score." << endl;
    // }
    // else
    // {
    //     cout << "Great job! You passed." << endl;
    // }

    // ==================== Switch Case ====================

    switch (score)
    {
    case 50:
        cout << "Grade: C" << endl;
        break;

    case 70:
        cout << "Grade: B" << endl;
        break;

    case 90:
        cout << "Grade: A" << endl;
        break;

    case 100:
        cout << "Perfect Score!" << endl;
        break;

    default:
        cout << "No special score matched." << endl;
        break;
    }

    cout << "Switch case execution completed." << endl;

    return 0;
}
