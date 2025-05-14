#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Conditions

    int myAge;
    cout << "Enter your Age: ";
    cin >> myAge;

    int const voterAge = 18;

    if (myAge >= voterAge)
    {
        cout << "Old enough to Vote!\n\n";
    }
    else
    {
        cout << "Not old enough to Vote.\n\n";
    }

    int time = 19;
    cout << "Time is 1900 hrs, ";
    if (time < 12)
    {
        cout << "Good Morning!";
    }
    else if (time < 18)
    {
        cout << "Good Afternoon!";
    }
    else
    {
        cout << "Good Evening!";
    }

    // Shortcut if statement

    int time1;
    cout << "\n\nEnter hour of time in 24 hr format: ";
    cin >> time1;
    string result = (time1 < 18) ? "Good Day!" : "Good Evening!";
    cout << "\t" << result << "\n\n";

    return 0;
}