#include <iostream>
#include <limits>
#include <iomanip> // setw, setprecision...
using namespace std;

int main()
{
     // Output
     cout << "This is Ashitabh Srivastava!"; // print anything
     cout << " Learning C++ language..End of line" << endl;
     cout << "Another\tEscape sequence, \\Backward Slash, \"Double Quote\" \n\n";

     // Input
     cout << "\tPrinting from User Input :-\n";
     double v;
     cout << "Type any Number: ";
     cin >> v; // user input
     cout << "Entered Number: " << v << "\n\n";

     long b;
     char c;
     double e;
     cout << "Type any Number, Character & Decimal: ";

     scanf("%ld %c %lf", &b, &c, &e);     // large no. of Inputs
     printf("%ld\n%c\n%lf\n\n", b, c, e); // large no. of Outputs

     // Output stream Modifiers
     cout << setw(10) << 2342 << endl; // width for next output

     cout << setprecision(3) << 3.14159 << endl; // precision to 3 for next output
     cout.precision(5); // another way
     cout << 3.14159 << endl;

     cout << fixed << 3.14159 << endl; // fixed-point notation

     cout << scientific << 3.14159 << endl; // scientific notation

     cout << showpoint << 42.0 << "\n\n"; // always show the decimal point (even for whole numbers)

     // Input stream Modifiers
     char x, y;

     cout << "Type a character: ";
     cin >> ws >> x; // ignore leading whitespace, default

     cin.ignore(numeric_limits<streamsize>::max(), '\n');

     cout << "Type another character: ";
     cin >> noskipws >> y; // don't skip whitespace

     cout << "x: " << x << ", y: " << y << "\n\n";

     // Boolean Manipulators
     bool answer = true;

     cout << boolalpha << "Is C++ fun? " << answer << endl; // print true/false
     cout << noboolalpha << "Position of C++? " << answer << "\n\n"; // print 1/0

     // Error Handling
     int n1;
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     cout << "Enter any Number (except Zero): ";
     cin >> n1;
     if (n1 == 0)
     {
          cerr << "Error!! Aren't You listening??" << "\n\n"; // immediate display of error
          return 1;                                           // exit the program with error code 1
     }
     else
     {
          cout << "You entered: " << n1 << "\n\n";
     }

     return 0;
}