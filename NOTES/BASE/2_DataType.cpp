#include <iostream> // inuput & output
#include <string>
#include <climits>  // access data type limits
#include <limits>
#include <typeinfo> // identify data type
using namespace std;

int main()
{
     char myLetter = 'M'; // stores single character

     int myInteger = 19;         // integer
     myInteger = 21;             // overwrite value
     long myLongNum = 662256000; // long integer

     float myFloatingNum = 62.35; // decimal
     double eradius = 6E3;        // big decimal, scientifitic number

     bool codfun = true;    // 0
     bool smokcool = false; // 1

     string myText = "Scorch"; // text

     cout << "\n\tVariables :-\n"
          << "\nLetter - " << myLetter << "\nAge - " << myInteger
          << "\nSeconds on Earth - " << myLongNum << "\nWeight - " << myFloatingNum
          << "\nEarth Radius - " << eradius << "\nIs Coding Fun? - " << codfun << "\tIs Smoking Cool? - " << smokcool
          << "\nName - " << myText << "\n\n";

     auto a12 = 1.23345; // automatic data type
     auto b12 = 'J';
     auto c12 = "Ashitabh";
     cout << a12 << "\t" << b12 << "\t" << c12 << endl;

     const int minperhour = 60; // assign fixed value
     const double pi = 3.142857;
     const char firstlet = 'a';
     cout << "\nMinutes per Hour - " << minperhour << "\nValue of Pi - " << pi << "\nFirst Letter - " << firstlet << "\n\n";

     // Size of data types
     cout << "Size of char: " << sizeof(char) << " byte" << endl;
     cout << "Size of int: " << sizeof(int) << " bytes" << endl;
     cout << "Size of float: " << sizeof(float) << " bytes" << endl;
     cout << "Size of double: " << sizeof(double) << " bytes" << "\n\n";

     // Range of data types
     cout << "char ranges from: " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
     cout << "int ranges from: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
     cout << "float ranges from: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
     cout << "double ranges from: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << "\n\n";

     // Data Type Modifiers
     cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;         // decrease size & range
     cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl; // increase size & range
     cout << "Size of long double: " << sizeof(long double) << " bytes" << "\n\n";   // increase precision

     cout << "short int ranges from: " << numeric_limits<short int>::min() << " to " << numeric_limits<short int>::max() << endl;
     cout << "long long int ranges from: " << numeric_limits<long long int>::min() << " to " << numeric_limits<long long int>::max() << endl;
     cout << "long double ranges from: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;
     cout << "singned int ranges from: " << numeric_limits<signed int>::min() << " to " << numeric_limits<signed int>::max() << endl;        // deafault
     cout << "unsigned int ranges from: " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << "\n\n"; // store only positive value

     // Type Casting
     double mydoub = 12.3223;
     int myint = static_cast<int>(mydoub); // explicit conversion

     cout << typeid(mydoub).name() << "\t" << typeid(myint).name() << endl; // data type stored in variable

     int i1 = 'a';     // implicit conversion
     char dollar = 36; // ASCII values
     char rebout = 127;
     /*'0' = 48 … '9' = 57
     'A' = 65 … 'Z' = 90
     'a' = 97 … 'z' = 122
     Space = 32, Tab = 9, Newline = 108*/
     int a = 123456;
     char a1 = a; // can only store 64
     double d = 6.64221253124;
     int d1 = d;

     cout << "\nDollar - " << dollar << rebout << endl
          << i1 << '\t' << a1 << endl
          << d << '\t' << d1 << endl;

     return 0;
}