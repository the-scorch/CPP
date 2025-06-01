#include <iostream>
#include <string>
#include <cstddef> // for nullptr_t
#include <vector>
using namespace std;

int main()
{
     // Reference Variable
     string snack = "Fast Foods";
     string &bite = snack; // connect REF -> OG variable

     int zero = 0;
     int &null = zero;

     cout << bite << "\t" << null << endl;

     int x = 10;
     int &ref = x;

     ref = 20;
     cout << "x = " << x << endl;

     x = 30;
     cout << "ref = " << ref << endl;

     vector<int> vect{ 10, 20, 30, 40 };

    for (int &x : vect) {
        x = x + 5;
    }

    for (int x : vect) {
        cout << x << " ";
    }

     // Memory Address
     char letter = 'z';
     string word = "What the";

     cout << "\n\n" << &letter << "\t" << &word << "\n\n";

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

     cout << *ptrv << endl; // Dereference operator

     *ptrv = "C6H8O6"; // Modifying variable value
     cout << vitc << "\n\n";

     int *ptri;            // wild pointer (undefined behavior)
     char *ptrc = nullptr; // safer for initialization of empty pointer

     cout << "Size of pointer to int: " << sizeof(ptri) << " bytes" << endl; // size always same as per architecture
     cout << "Size of pointer to char: " << sizeof(ptrc) << " bytes" << "\n\n";

     nullptr_t np1, np2; // two variables of value = nullptr
     if (np1 >= np2)
          cout << "can compare" << endl;
     else
          cout << "can not compare" << endl;

     char *x = np1;
     if (x == nullptr)
          cout << "x is null" << "\n\n";
     else
          cout << "x is not null" << "\n\n";

     int var = 10;
     int *ptr1 = &var;
     int **ptr2 = &ptr1; // Double pointer

     cout << *ptr1 << endl;
     cout << **ptr2 << "\n\n"; // dereferencing

     return 0;
}