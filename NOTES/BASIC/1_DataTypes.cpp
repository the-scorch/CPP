#include <iostream>
#include <string>
#include <climits> // access of data type limits
#include <limits>  // same as above
using namespace std;

int main()
{

     cout << "This is Ashitabh Srivastava!\n"; // print anything

     cout << "Learning C++ coding language..\n"
          << endl; // next line

     cout << "Other \tEscape sequence \\ \"Double Quote\" \n\n";

     int myInteger = 19; // store integer
     myInteger = 21;     // overwrite previous value

     long myLongNum = 662256000; // store long integer

     float myFloatingNum = 62.35; // store decimal

     double eradius = 6E3; // store big decimal, Scientifitic number

     char myLetter = 'M'; // store single character
     myLetter = 'A';

     char dollar = 36; // ASCII value for character
     char rebout = 127;

     string myText = "Scorch"; // store text

     bool CodingFun = true;    // store as 0
     bool SmokingCool = false; // or 1

     cout << "\tVariables :-\n\n"
          << "Age - " << myInteger << "\nSeconds on Earth - " << myLongNum << "\nWeight - " << myFloatingNum << "\nEarth Radius - " << eradius << "\nLetter - " << myLetter << "\nDollar - " << dollar << rebout << "\nName - " << myText
          << "\nIs Coding Fun? - " << CodingFun << "\tIs Smoking Cool? - " << SmokingCool << "\n\n";

     const int minperhour = 60; // assign fixed value
     const double pi = 3.142857;
     const char firstlet = 'a';
     cout << "\n\nMinutes per Hour - " << minperhour << "\nValue of Pi - " << pi << "\nFirst Letter - " << firstlet << "\n\n";

     auto a12 = 1.23345; // automatic data type
     auto b12 = 'J';
     auto c12 = "Ashitabh";

     cout << a12 << "\t" << b12 << "\t" << c12 << endl;

     int p, q, r; // varaibles of same type
     p = q = r = 10;

     cout << "Same value for Multiple Varibles: " << p << ", " << q << ", " << r;

     cout << "\n\n";

     cout << "Size of char: " << sizeof(char) << " byte" << endl; // size of data type
     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
     cout << "Size of float: " << sizeof(float) << " bytes" << endl;
     cout << "Size of double: " << sizeof(double) << " bytes" << "\n\n";

     cout << "char ranges from: " << SCHAR_MIN << " to " << SCHAR_MAX << endl; // range of data type
     cout << "int ranges from: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
     cout << "float ranges from: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
     cout << "double ranges from: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << "\n\n";

     cout << "Size of short int: " << sizeof(short int) << " bytes" << endl; // data type modifiers
     cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
     cout << "Size of long double: " << sizeof(long double) << " bytes" << "\n\n";

     cout << "short int ranges from: " << numeric_limits<short int>::min() << " to " << numeric_limits<short int>::max() << endl;
     cout << "long long int ranges from: " << numeric_limits<long long int>::min() << " to " << numeric_limits<long long int>::max() << endl;
     cout << "long double ranges from: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;

     cout << "singned int ranges from: " << numeric_limits<signed int>::min() << " to " << numeric_limits<signed int>::max() << endl;        // deafault
     cout << "unsigned int ranges from: " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << "\n\n"; // store only positive values

     

     cout << "\tPrinting from User Input :-\n\n";
     
     double v;
     cout << "Type any Number: ";

     cin >> v; // user input
     cout << "Your Number is: " << v;

     long b;
     char c;
     double e;
     cout << "\n\nType any Number, Character & Decimal: ";

     scanf("%ld %c %lf", &b, &c, &e); // Large no. of Inputs
     printf("%ld\n%c\n%lf", b, c, e); // Large no. of Outputs

     return 0;
}