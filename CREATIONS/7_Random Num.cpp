#include <iostream>
#include <cstdlib> //For rand() and srand()
#include <ctime>   //For time()
using namespace std;

int main()
{
    char choice;
    cout << "\nWant a Random Number in 0-9? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        srand(time(0)); // Different No. each time the program runs
        do
        {
            int randomnum = rand() % 10; // for range of 0 and 9

            cout << randomnum;
            switch (randomnum)
            {
            case 1:
                cout << " | Unity";
                break;

            case 2:
                cout << " | Bi";
                break;

            case 3:
                cout << " | Tri";
                break;

            case 4:
                cout << " | Quad";
                break;

            case 5:
                cout << " | Penta";
                break;

            case 6:
                cout << " | Hexa";
                break;

            case 7:
                cout << " | Hepta";
                break;

            case 8:
                cout << " | Octa";
                break;

            case 9:
                cout << " | Nona";
                break;

            default:
                cout << " | Null";
                break;
            }

            cout << "\nWant a Number again? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        if (choice == 'n' || choice == 'N')
        {
            cout << "\n\tSee you..thanks for using My program :)" << endl;
        }
    }

    else
    {
        cout << "\n\tTHE END";
    }

    return 0;
}