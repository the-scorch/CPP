#include <iostream>
#include <cstdlib> //For rand() and srand()
#include <ctime>   //For time()
using namespace std;

int main()
{
    char choice;

    cout << "\nDo you want a Random Number from 1 to 10? (y/n): ";
    cin >> choice;
    cout << endl;

    if (choice == 'y' || choice == 'Y')
    {
        do
        {
            srand(time(0)); // Different No. each time the program runs

            int randomnum = rand() % 11; // between 0 and 10

            cout << randomnum;

            cout << "\nDo you want to Repeat? (y/n): ";
            cin >> choice;
            cout << endl;

        } while (choice == 'y' || choice == 'Y');
    }

    else
    {
        cout << "Then, What are You doing here!?";
    }

    return 0;
}