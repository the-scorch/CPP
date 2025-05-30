#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Reference Variable
    string snack = "Fast Foods";
    string &bite = snack; // Connecting the REF variable with OG variable

    int zero = 0;
    int &null = zero;

    cout << bite << "\t" << null << endl;

    int x = 10;
    int &ref = x;

    ref = 20;
    cout << "x = " << x << endl;

    x = 30;
    cout << "ref = " << ref << "\n\n";

    // Memory Address
    char letter = 'z';
    string word = "What the";

    cout << &letter << "\t" << &word << "\n\n";

    // Pointer
    string vitc = "Ascorbic acid";
    string *ptrc;
    ptrc = &vitc;

    cout << "Value: " << vitc << endl
         << "Address: " << ptrc << "\n\n";

    cout << *ptrc << endl; // Dereference Operator

    *ptrc = "C6H8O6"; // Modifying Pointer's Variable value
    cout << vitc << "\n\n";

    return 0;
}