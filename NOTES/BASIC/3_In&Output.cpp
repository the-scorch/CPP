#include <iostream>
#include <iomanip> // setw, setprecision
using namespace std;

int main()
{
     // Output
     cout << "This is Ashitabh Srivastava!";     // print anything
     cout << " Learning C++ language..End of line" << endl;
     cout << "Another\tEscape sequence, \\Backward Slash, \"Double Quote\" \n\n";

     // Input
     cout << "\tPrinting from User Input :-\n";
     double v;
     cout << "Type any Decimal Number: ";
     cin >> v; // user input, space as terminator
     cout << "Entered Number: " << v << "\n\n";

     long b;
     char c;
     double e;
     cout << "Type any Number, Character & Decimal: ";

     scanf("%ld %c %lf", &b, &c, &e); // Large no. of Inputs
     printf("%ld\n%c\n%lf\n\n", b, c, e); // Large no. of Outputs

     // Error Handling
     int n1;
     cout << "Enter any Number (except Zero): ";
     cin >> n1;
     if (n1 == 0)
     {
          cerr << "Error!! Aren't You listening??" << "\n\n"; // immediate display of error
          return 1; // exit the program with error code 1
     }
     else
     {
          cout << "You entered: " << n1 << "\n\n";
     }

     // Output Modifiers
     cout << setw(10) << 42 << endl; // Set width to 10 for the next output

     cout << setprecision(3) << 3.14159 << endl; // Set precision to 3 for floating-point numbers
     cout.precision(5); // print the output upto desired digits

     cout << fixed << 3.14159 << endl; // Use fixed-point notation

     cout << scientific << 3.14159 << endl; // Use scientific notation

     cout << showpoint << 42.0 << "\n\n"; // Show the decimal point even for whole numbers

     return 0;
}