#include <iostream>
#include <string>
using namespace std;

int main()
{
    int const voterAge = 18;
    int myAge;
    cout << "Enter your Age: ";
    cin >> myAge;

    if (myAge >= voterAge) // Base Condition
    {
        cout << "Old enough to Vote!\n\n";
    }
    else // if base condition found false
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
    else if (time < 1800) // if previous condition found false
    {
        cout << "Good Afternoon!" << "\n\n";
    }
    else
    {
        cout << "Good Evening!" << "\n\n";
    }

    int month, num = 1;
    cout << "Enter Month number: ";
    cin >> month;
    switch (month) // only int/char/enum type
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

    case 13:
        switch (num)
        {
            case 1:
            cout << "Added a 13th month or what??"
            break;
        }
        break;

    default: // if no condition was found true
        cout << "Haha, Nice Joke...\n\n";
    }

    int n;
    cout << "Enter an Integer: ";
    cin >> n;
    if (n % 2 == 0)
    {
        goto label1; // Jump to label1
    }
    else
    {
        goto label2; // Jump to label2
    }

label1:
    cout << "Even" << endl;
    return 0;

label2:
    cout << "Odd" << endl;

    return 0;
}