#include <iostream>
#include <string>
using namespace std;

int main()
{

     // Arithmetic
     int sum = 1 + 2;
     int sub = 6 - 2;
     int mul = 10 * 84;
     int div = 64 / 4; // gives Quotient
     int mod = 5 % 2;  // gives Remainder
     int a = 10;
     ++a; // +1 Before using the value
     int b = 10;
     b++; // +1 After using the value
     int c = 10;
     --c; // -1 Before using the value
     int d = 10;
     d--; // -1 After using the value

     cout << sum << "\t" << sub << "\t" << mul << "\t" << div << "\t" << mod << "\n"
          << a << "\t" << b << "\t" << c << "\t" << d << "\n\n";

     // Assignment
     int c1, c2, c3, c4, c5;
     c1 = c2 = c3 = c4 = c5 = 10;
     c1 += 7; // c1 = c1 + 7
     c2 -= 4; // c2 = c2 - 4
     c3 *= 2; // c3 = c3 * 2
     c4 /= 2; // c4 = c4 / 2
     c5 %= 3; // c5 = c5 % 3

     cout << c1 << "\t" << c2 << "\t" << c3 << "\t" << c4 << "\t" << c5 << "\n\n";

     // Bitwise
     int a1 = 6, b1 = 4;
     cout << (a1 & b1) << "\t"; // AND - Sets bits to 1 if both bits are 1
     cout << (a1 | b1) << "\t"; // OR - Sets bits to 1 if either of the bits is 1
     cout << (a1 ^ b1) << "\t"; // XOR - Sets bits to 1 if the bits are different
     cout << (a1 << 1) << "\t"; // Left Shift - Moves bits to the left
     cout << (a1 >> 1) << "\t"; // Right Shift - Moves bits to the right
     cout << ~(a1) << "\n\n";   // One’s Complement - change Binary digits 1 -> 0 & 0 -> 1

     // Relational - True = 1 | False = 0
     int i = 10;
     int j = 16;

     cout << (i < j) << "\t" << (i > j)                      // Smaller, Larger
          << "\t" << (i == j) << "\t" << (i != j)            // Equal, Not Equal
          << "\t" << (i <= j) << "\t" << (i >= j) << "\n\n"; // Less than or equal to, Greater than or equal to

     // Logical - Two Statements
     int k = 10;
     int l = 16;

     cout << (k > 9 && l < 15)                                                       // Both statements are true = 1
          << "\t" << (k > 9 || l < 15)                                               // One of the statements is true = 1
          << "\t" << (!(k > 9 && l < 15)) << "\t" << (!(k > 9 || l < 15)) << "\n\n"; // statement is False = 1

     return 0;
}