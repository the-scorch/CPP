#include <iostream>
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
     int c = 10;
     --c;
     int b = 10;
     b++; // +1 After using the value
     int d = 10;
     d--;

     cout << sum << '\t' << sub << '\t' << mul << '\t' << div << '\t' << 64.43 / 4 << '\n'
          << mod << '\t' << a << '\t' << b << '\t' << c << '\t' << d << "\n\n";

     // Assignment
     int c1, c2, c3, c4, c5;
     c1 = c2 = c3 = c4 = c5 = 10;
     c1 += 7; // c1 = c1 + 7
     c2 -= 4;
     c3 *= 2;
     c4 /= 2;
     c5 %= 3;

     cout << c1 << '\t' << c2 << '\t' << c3 << '\t' << c4 << '\t' << c5 << "\n\n";

     // Bitwise
     int a1 = 6, b1 = 4;
     cout << (a1 & b1) << '\t'; // AND: if both Bits are 1 => set Bits = 1
     cout << (a1 | b1) << '\t'; // OR: if either Bit is 1 => set Bits = 1
     cout << (a1 ^ b1) << '\t'; // XOR: if Bits are different => set Bits = 1
     cout << (a1 << 1) << '\t'; // Left Shift: moves bits to left (by 1)
     cout << (a1 >> 2) << '\t'; // Right Shift: Moves bits to right (by 2)
     cout << ~(a1) << "\n\n";   // Complement: change Binary digits: 1 -> 0, 0 -> 1

     // Relational: True = 1, False = 0
     int i = 10;
     int j = 16;

     cout << (i < j) << '\t' << (i > j)                      // Smaller, Greater
          << '\t' << (i == j) << '\t' << (i != j)            // Equal, Not Equal
          << '\t' << (i <= j) << '\t' << (i >= j) << "\n\n"; // Less than or equal, Greater than or equal

     // Logical: Two statements
     int k = 10;
     int l = 16;

     cout << (k > 9 && l < 15)                                                       // AND: Both true = 1, else 0
          << '\t' << (k > 9 || l < 15)                                               // OR: Either true = 1, else 0
          << '\t' << (!(k > 9 && l < 15)) << '\t' << (!(k > 9 || l < 15)) << "\n\n"; // NOT: False = 1, True = 0

     return 0;
}