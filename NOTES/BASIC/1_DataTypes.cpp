#include <iostream>
#include <string>
#include <climits>  // access of data type limits
#include <limits>   // same as above
#include <typeinfo> // identify the data type
using namespace std;

int main()
{
     // Fundamental Data Types
     char myLetter = 'M'; // single character

     char dollar = 36; // ASCII value for character
     char rebout = 127;

     int myInteger = 19;         // integer
     myInteger = 21;             // overwrite value
     long myLongNum = 662256000; // long integer

     float myFloatingNum = 62.35; // decimal
     double eradius = 6E3;        // big decimal, Scientifitic number

     bool codfun = true;    // as 0
     bool smokcool = false; // or 1

     string myText = "Scorch"; // text

     cout << "\tVariables :-\n\n"
          << "\nLetter - " << myLetter << "\nDollar - " << dollar << rebout 
          << "Age - " << myInteger << "\nSeconds on Earth - " << myLongNum 
          << "\nWeight - "<< myFloatingNum << "\nEarth Radius - " << eradius 
          << "\nIs Coding Fun? - " << codfun << "\tIs Smoking Cool? - " << smokcool << "\nName - " << myText << "\n\n";

     auto a12 = 1.23345; // automatic data type
     auto b12 = 'J';
     auto c12 = "Ashitabh";

     cout << a12 << "\t" << b12 << "\t" << c12 << endl;

     int p, q, r; // varaibles of same type
     p = q = r = 10;

     cout << "Same value for Multiple Varibles: " << p << ", " << q << ", " << r << "\n\n";

     const int minperhour = 60; // assign fixed value
     const double pi = 3.142857;
     const char firstlet = 'a';

     cout << "\n\nMinutes per Hour - " << minperhour << "\nValue of Pi - " << pi << "\nFirst Letter - " << firstlet << "\n\n";

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
     cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;         // decrease the size & range
     cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl; // increase the size & range
     cout << "Size of long double: " << sizeof(long double) << " bytes" << "\n\n";   // used for more precision

     cout << "short int ranges from: " << numeric_limits<short int>::min() << " to " << numeric_limits<short int>::max() << endl;
     cout << "long long int ranges from: " << numeric_limits<long long int>::min() << " to " << numeric_limits<long long int>::max() << endl;
     cout << "long double ranges from: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;
     cout << "singned int ranges from: " << numeric_limits<signed int>::min() << " to " << numeric_limits<signed int>::max() << endl;        // deafault
     cout << "unsigned int ranges from: " << numeric_limits<unsigned int>::min() << " to " << numeric_limits<unsigned int>::max() << "\n\n"; // store only positive value

     // Type Casting
     double d = 12.3223;
     int i = static_cast<int>(d);

     cout << typeid(d).name() << "\t" << typeid(i).name() << endl; // access data type stored in variable

     // dynamic_cast - used in 11_Class.cpp

     return 0;
}