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
    string vitd3 = "Cholecalciferol";
    string *ptrv; // declaring a pointer variable

    ptrv = &vitd3;
    cout << "Value: " << vitd3 << endl
         << "Address: " << ptrv << "\n\n";

    ptrv = &vitc;
    cout << "Value: " << vitc << endl
         << "Address: " << ptrv << "\n\n";

    cout << *ptrv << endl; // Dereference Operator

    *ptrv = "C6H8O6"; // Modifying variable value
    cout << vitc << "\n\n";

    int *ptri; // wild pointer (undefined behavior)
    char *ptrc = NULL; // // NULL pointer, safer

    cout << "Size of pointer to int: " << sizeof(ptri) << " bytes" << endl; // size always same as per architecture
    cout << "Size of pointer to char: " << sizeof(ptrc) << " bytes" << "\n\n";

    return 0;
}