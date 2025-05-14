#include <iostream>
#include <string>
using namespace std; /*Header file Library for input/output objects, Names from standard library for variables*/

int main() // main function
{ 

     cout << "This is Ashitabh Srivastava!\n"; // to print text

     cout << "Learning C++ coding language..\n"
          << endl; // for Escape Sequence!

     cout << "Other \tEscape sequences \\ \"Double Quote\" \n\n";

     int myInteger = 19; // stores integers
     myInteger = 21;     // overwriting previous value

     long myLongNum = 662256000; // stores long integers

     float myFloatingNum = 62.35; // stores decimals

     double eradius = 6E3; // stores big decimals, Scientifitic number

     char myLetter = 'M'; // stores single character
     myLetter = 'A';

     char dollar = 36; // ASCII value for characters
     char rebout = 127;

     string myText = "Scorch"; // stores texts

     int change = (int)myLetter; // Changing data type of variable

     bool CodingFun = true; // stores as 0 or 1
     bool SmokingCool = false;

     cout << "\tVariables :-\n\n"
          << "Age - " << myInteger << "\nSeconds on Earth - " << myLongNum << "\nWeight - " << myFloatingNum << "\nEarth Radius - " << eradius << "\nLetter - " << myLetter << "\nDollar - " << dollar << rebout << "\nName - " << myText
          << "\nType Casting: " << change << "\tIs Coding Fun? - " << CodingFun << "\tIs Smoking Cool? - " << SmokingCool << "\n\n";

     int f = 2, g = 5;

     int p, q, r;
     p = q = r = 10;

     cout << "Variables of Same type: " << f << ", " << g << "\nSame value of Multiples: " << p << ", " << q << ", " << r;

     const int minperhour = 60; // for fixed value
     const double pi = 3.142857;
     const char firstlet = 'a';
     cout << "\n\nMinutes per Hour - " << minperhour << "\nValue of Pi - " << pi << "\nFirst Letter - " << firstlet << "\n\n";

     auto a12 = 1.23345; // auto for automatic data type
     auto b12 = 'J';
     auto c12 = "Ashitabh";

     cout << a12 << endl
          << b12 << endl
          << c12 << endl;

     cout << "\n\n\tPrinting from User Input :-\n\n";
     double v;
     cout << "Type any Number: ";

     cin >> v; // for user input

     cout << "Your Number is: " << v;

     long b;
     char c;
     double e;
     cout << "\n\nType any values of Number, Character & Decimal: ";

     scanf("%ld %c %lf", &b, &c, &e); // Larger no. of Inputs

     printf("%ld\n%c\n%lf", b, c, e); // Larger no. of Outputs

     return 0; // returns something & ends the main function
}