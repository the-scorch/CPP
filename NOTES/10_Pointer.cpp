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

    cout << bite << "\t" << null << "\n\n";

    // Memory Address

    char letter = 'z';
    string word = "What the";

    cout << &letter << "\t" << &word << "\n\n";

    // Pointer

    string vitc = "Ascorbic acid";
    string *ptrc;
    ptrc = &vitc;

    cout << vitc << "\n"
         << &vitc << " / " << ptrc << "\n\n";

    cout << *ptrc << "\n"; // * - Dereference Operator

    *ptrc = "C6H8O6"; // Modifying Pointer's Variable value

    cout << *ptrc << " / " << vitc;

    return 0;
}