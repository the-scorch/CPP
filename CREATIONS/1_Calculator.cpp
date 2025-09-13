#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "\n\tSimple Calculator\n\n";

        double a, b;
        char op;
        cout << "Enter Value1[Operator]Value2: ";
        cin >> a >> op >> b;

        char ask;
        do
        {
            if (ask == 'y' || ask == 'Y')
            {
                cout << "Enter [Operator]Value2: ";
                cin >> op >> b;
            }

            switch (op)
            {
            case '+':
                cout << fixed << setprecision(2) << "\tSum = " << a + b << endl;
                a = a + b;
                break;

            case '-':
                cout << fixed << setprecision(2) << "\tDifference = " << a - b << endl;
                a = a - b;
                break;

            case '*':
                cout << fixed << setprecision(2) << "\tProduct = " << a * b << endl;
                a = a * b;
                break;

            case '/':
                if (b != 0)
                {
                    cout << fixed << setprecision(2) << "\tQuotient = " << a / b << endl;
                    a = a / b;
                }
                else
                {
                    cout << "\tError: Undefined!" << endl;
                }
                break;

            case '%':
                if (b != 0)
                {
                    cout << fixed << setprecision(2) << "\tRemainder = " << int(a) % int(b) << endl;
                    a = int(a) % int(b);
                }
                else
                {
                    cout << "\tError: Undefined!" << endl;
                }
                break;

            case '^':
                cout << fixed << setprecision(2) << "\tResult = " << pow(a, b) << endl;
                a = pow(a, b);
                break;

            default:
                cout << "\tError: Invalid operator!" << endl;
            }

            cout << "\nWant to Calculate More with this? (y/n): ";
            cin >> ask;

        } while (ask == 'y' || ask == 'Y');

        cout << "\nWant to Calculate again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}