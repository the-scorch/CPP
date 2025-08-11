#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "\tSimple Calculator\n\n";

        double a, b;
        char op;
        cout << "Enter Value1[Operator]Value2: ";
        cin >> a >> op >> b;
        char ask;
        int c;

        switch (op)
        {
        case '+':
                cout << fixed << setprecision(2) << "Sum = " << a + b << endl;
                cout << "Want to Add More in this?? (y/n) : ";
                cin >> ask;
                if(ask == 'y')
                cout << "Enter Value3: ";
                cin >> c;
                cout << fixed << setprecision(2) << "Sum = " << a + b + c << endl;
            break;

        case '-':
            cout << fixed << setprecision(2) << "Difference = " << a - b << endl;
            break;

        case '*':
            cout << fixed << setprecision(2) << "Product = " << a * b << endl;
            break;

        case '/':
            if (b != 0)
            {
                cout << fixed << setprecision(2) << "Quotient = " << a / b << endl;
            }
            else
            {
                cout << "Error: Undefined!" << endl;
            }
            break;

        case '%':
            if (b != 0)
            {
                cout << fixed << setprecision(2) << "Remainder = " << int(a) % int(b) << endl;
            }
            else
            {
                cout << "Error: Undefined!" << endl;
            }
            break;

        case '^':
            cout << fixed << setprecision(2) << "Result = " << pow(a, b) << endl;
            break;

        default:
            cout << "Error: Invalid operator!" << endl;
        }

        cout << "\nDo you want to Calculate again? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}