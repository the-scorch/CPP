#include <iostream>
#include <string>
#include <cstddef> // for nullptr_t
#include <vector>
using namespace std;

void printar(int (&arr)[], int n) // Pass array by refrence in Function (prevents Array Decay in the case of Pass by Value)
{
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
}

int main()
{
     // Memory Address
     char letter = 'z';
     string word = "What the";
     cout << &letter << "\t" << &word << "\n\n"; // Address of - operator

     // References
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

     vector<int> vect{10, 20, 30, 40};
     for (int &x : vect)
     {
          x = x + 5;
     }

     for (int x : vect)
     {
          cout << x << " ";
     }
     cout << "\n\n";

     // Pointer
     string vitc = "Ascorbic acid";
     string vitd3 = "Cholecalciferol";
     string *ptrv; // wild pointer (not recommended)

     ptrv = &vitd3;
     cout << "Value: " << vitd3 << endl
          << "Address: " << ptrv << "\n\n";

     ptrv = &vitc; // reinitialization of pointer
     cout << "Value: " << vitc << endl
          << "Address: " << ptrv << "\n\n";
     cout << *ptrv << endl; // Dereference operator

     *ptrv = "C6H8O6"; // Modifying variable value
     cout << vitc << "\n\n";

     int *ptri;                                                                 // wild pointer (undefined behavior)
     char *ptrc = nullptr;                                                      // safer for initialization of empty pointer
     cout << "Size of pointer to int: " << sizeof(ptri) << " bytes" << endl;    // size always same as per architecture
     cout << "Size of pointer to char: " << sizeof(ptrc) << " bytes" << "\n\n"; // pointer always stores Address (irrespective of data type)

     int *pnt1;
     {
          int x = 5;
          pnt1 = &x;
          cout << pnt1 << '\n';
     } // x destroyed
     // pnt1 is now dangling pointer (undefined behaviour)

     nullptr_t np1, np2; // two variables of value = nullptr
     if (np1 == np2)
          cout << "can compare" << endl;
     else
          cout << "can not compare" << endl;

     char *g = np1;
     if (g == nullptr)
          cout << "x is null" << "\n\n";
     else
          cout << "x is not null" << "\n\n";

     int var = 10;
     int *ptr1 = &var;
     int **ptr2 = &ptr1;  // Double pointer
     int ***ptr3 = &ptr2; // Triple pointer
     cout << var << '\t' << &var << '\n';
     cout << ptr1 << '\t' << *ptr1 << '\n';
     cout << ptr2 << '\t' << **ptr2 << '\n';
     cout << ptr3 << '\t' << ***ptr3 << "\n\n";

     int arr[3] = {5, 10, 15};
     cout << arr << '\t' << &arr << '\t' << &arr[0] << '\n'; // address to first element of array
     cout << *arr << '\t' << arr[0] << '\n';
     int *p = arr;
     cout << p << '\t' << *p << '\n';
     cout << *arr + 1 << '\t' << *(arr + 1) << '\n';
     
     // Internal working of the Index access
     // arr[i] = *(arr + i) <=> i[arr] = *(i + arr)
     cout << arr[1] << '\t' << 1[arr] << "\n\n";

     int (*ptr)[3] = &arr; // to whole array
     cout << ptr << '\n';
     for (int i = 0; i < 3; i++)
     {
          cout << (*ptr)[i] << "\t";
     }
     cout << "\n\n";

     printar(arr, 3); // Passing array to function
     cout << "\n\n";

     int num = 5;
     int *pnt = &num;
     cout << pnt << '\t' << *pnt << '\n';
     cout << pnt + 1 << '\t' << ++(*pnt) << "\n\n"; // Increase the address as per Data type size, Increase the pointed value

     // Memory Address can Not be Changed
     // Because it gets assigned in the Symbol Table
     // int arr[10];
     // arr = arr + 1; WRONG
     // But once they are stored in pointer -> it can be Changed
     // int *ptr = arr;
     // ptr = ptr + 1; CORRECT

     return 0;
}