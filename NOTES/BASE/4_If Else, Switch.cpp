#include <iostream>
#include <string>
using namespace std;

int main()
{
    int const voterAge = 18;
    int myAge;
    cout << "Enter your Age: ";
    cin >> myAge;

    if (myAge >= voterAge) // Condition
    {
        cout << "Old enough to Vote!\n\n";
    }
    else // if condition is false
    {
        cout << "Not old enough to Vote.\n\n";
    }

    int time;
    cout << "Enter time in 24 hr format: ";
    cin >> time;

    if (time < 1200)
    {
        cout << "Good Morning!" << "\n\n";
    }
    else if (time < 1800) // 2nd condition, if 1st is false
    {
        cout << "Good Afternoon!" << "\n\n";
    }
    else
    {
        cout << "Good Evening!" << "\n\n";
    }

    int month;
    cout << "Enter Month number: ";
    cin >> month;
    switch (month) // only integer or enum type
    {
    case 1:
        cout << "January";
        break; // terminates if found true

    case 2:
        cout << "February" << "\n\n";
        break;

    case 3:
        cout << "March" << "\n\n";
        break;

    case 4:
        cout << "April" << "\n\n";
        break;

    case 5:
        cout << "May" << "\n\n";
        break;

    case 6:
        cout << "June" << "\n\n";
        break;

    case 7:
        cout << "July" << "\n\n";
        break;

    case 8:
        cout << "August" << "\n\n";
        break;

    case 9:
        cout << "September" << "\n\n";
        break;

    case 10:
        cout << "October" << "\n\n";
        break;

    case 11:
        cout << "November" << "\n\n";
        break;

    case 12:
        cout << "December" << "\n\n";
        break;
        default: // if no condition was true
        cout << "Haha, Nice Joke...\n\n";
    }

    int n;
    cout << "Enter an Integer: ";
    cin >> n;
    if (n % 2 == 0) {
        goto label1; // Skipping to label1
    }
    else {
        goto label2; // Skipping to label2
    }

label1:
    cout << "Even" << endl;
    return 0;

label2:
    cout << "Odd" << endl;

    return 0;
}