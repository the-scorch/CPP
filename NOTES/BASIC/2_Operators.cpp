#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Arithmetic Operators
    int sum = 1 + 2;
    int sub = 6 - 2;
    int mul = 10 * 84;
    int div = 64 / 4; // gives Quotient
    int mod = 5 % 2;  // gives Remainder

    // Increment Operator
    int a = 10;
    ++a; // Pre - Increase by 1 before using the value
    int b = 10;
    b++; // Post - Increase by 1 after using the value

    // Decrement Operator
    int c = 10;
    --c; // Pre - Decrease by 1 before using the value
    int d = 10;
    d--; // Post - Decrease by 1 after using the value

    cout << sum << "\t" << sub << "\t" << mul << "\t" << div << "\t" << mod << "\n"
         << a << "\t" << b << "\t" << c << "\t" << d << "\n\n";

    // Assign Operators
    int c1, c2, c3, c4, c5;
    c1 = c2 = c3 = c4 = c5 = 10;
    c1 += 7; // c1 = c1 + 7
    c2 -= 4; // c2 = c2 - 4
    c3 *= 2; // c3 = c3 * 2
    c4 /= 2; // c4 = c4 / 2
    c5 %= 3; // c5 = c5 % 3

    int d1 = 9;
    d1 &= 3; // Bitwise AND - Sets bits to 1 if both bits are 1
    int e = 9;
    e |= 3; // Bitwise OR - Sets bits to 1 if either of the bits is 1
    int f = 9;
    f ^= 3; // Bitwise XOR - Sets bits to 1 if the bits are different
    int g = 9;
    g >>= 3; // Right Shift - Moves bits to the right
    int h = 9;
    h <<= 3; // Left Shift - Moves bits to the left

    cout << c1 << "\t" << c2 << "\t" << c3 << "\t" << c4 << "\t" << c5
         << "\n"
         << d1 << "\t" << e << "\t" << f << "\t" << g << "\t" << h << "\n\n";

    // Comparison Operators - True(1) or False(0)
    int i = 10;
    int j = 16;

    cout << (i < j) << "\t" << (i > j)                      // Smaller, Larger
         << "\t" << (i == j) << "\t" << (i != j)            // Equal, Not Equal
         << "\t" << (i <= j) << "\t" << (i >= j) << "\n\n"; // Less than or equal to, Greater than or equal to

    // Logical Operators - Two Statements
    int k = 10;
    int l = 16;

    cout << (k > 9 && l < 15)         // And - Both statements are true
         << "\t" << (k > 9 || l < 15) // Or - One of the statements is true
         << "\t" << (!(k > 9 && l < 15)) << "\t" << (!(k > 9 || l < 15)) << "\n\n";

    return 0;
}