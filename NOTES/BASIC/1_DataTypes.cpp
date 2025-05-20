#include <iostream>
#include <string>
#include <climits> // access of data type limits
#include <limits>  // same as above
#include <typeinfo> // identify the data type
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

     cout << "Same value for Multiple Varibles: " << p << ", " << q << ", " << r << "\n\n";

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

     double d = 12.3223;
     auto i = static_cast<int>(d); //type-casting

     cout << typeid(d).name() << "\t" << typeid(i).name() << endl;

     // dynamic_cast - used in 11_Class.cpp

     cout << "\tPrinting from User Input :-\n";
     double v;
     cout << "Type any Decimal Number: ";
     
     cin >> v; // user input, space as terminator
     cout.precision(5); // print the output upto desired digits
     cout << "Your Number upto 5 digits: " << v << "\n\n";

     long b;
     char c;
     double e;
     cout << "Type any Number, Character & Decimal: ";
     
     scanf("%ld %c %lf", &b, &c, &e); // Large no. of Inputs
     printf("%ld\n%c\n%lf", b, c, e); // Large no. of Outputs

     cout << "\n\n";

     int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if (n2 == 0) {
        cerr << "Error: Division by zero!" << endl; // Displaying error using cerr
        return 1;
    }
    
    cout << "Result: " << n1 / n2 << "\n\n";

    cout << "Hello" << endl; // Output a new line and flush the stream

    cout << setw(10) << 42 << endl; // Set width to 10 for the next output

    cout << setprecision(3) << 3.14159 << endl; // Set precision to 3 for floating-point numbers

    cout << fixed << 3.14159 << endl; // Use fixed-point notation

    cout << scientific << 3.14159 << endl; // Use scientific notation

    cout << showpoint << 42.0 << "\n\n"; // Show the decimal point even for whole numbers

     return 0;
}