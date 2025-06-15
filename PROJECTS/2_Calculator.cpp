#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char choice;
    do
    {
        cout << "\tSelf-Made Calculator\n\n";

        double a, b;
        char op;
        cout << "Enter Value1[Operator]Value2: ";
        cin >> a >> op >> b;

        switch (op)
        {
        case '+':
            cout << "Sum = " << a + b << endl;
            break;
        case '-':
            cout << "Difference = " << a - b << endl;
            break;
        case '*':
            cout << "Product = " << a * b << endl;
            break;
        case '/':
            if (b != 0)
            {
                cout << "Quotient = " << a / b << endl;
            }
            else
            {
                cout << "Error: Undefined!" << endl;
            }
            break;
        case '%':
            if (b != 0)
            {
                cout << "Remainder = " << int(a) % int(b) << endl;
            }
            else
            {
                cout << "Error: Undefined!" << endl;
            }
            break;
        case '^':
            cout << "Result = " << pow(a, b) << endl;
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