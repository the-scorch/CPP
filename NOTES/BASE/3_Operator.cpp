#include <iostream>
#include <string>
#include <cmath>
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

     // Bitwise: Operates on Binary Digits
     int a1 = 6, b1 = 4;
     cout << "a1: " << a1 << '\t' << "b1: " << b1 << '\n';
     cout << "a1 & b1 : " << (a1 & b1) << '\t';   // AND: both 1 = 1
     cout << "a1 | b1 : " << (a1 | b1) << '\t';   // OR: either 1 = 1
     cout << "a1 ^ b1 : " << (a1 ^ b1) << '\t';   // XOR: different = 1
     cout << "~a1 : " << ~(a1) << '\t';           // NOT: 0 => 1, 1 => 0
     cout << "a1 << 1 : " << (a1 << 1) << '\t';   // Left Shift: moves to left (by 1)
     cout << "a1 >> 2 : " << (a1 >> 2) << "\n\n"; // Right Shift: moves to right (by 2)

     int num;
     cout << "Enter an Intger: ";
     cin >> num;
     int temp = abs(num);
     string bin = "";
     while (temp > 0) // convert to binary
     {
          bin = ((temp & 1) ? '1' : '0') + bin; // extract bit
          temp >>= 1;
     }
     if (num < 0)
     {
          while (bin.size() < 32)
          {
               bin = "0" + bin;
          }
          for (char &c : bin) // 1's complement
          {
               c = (c == '1') ? '0' : '1';
          }
          for (int i = bin.size() - 1; i >= 0; i--) // 2's complement
          {
               if (bin[i] == '0')
               {
                    bin[i] = '1';
                    break;
               }
               bin[i] = '0';
          }
     }
     cout << "Binary Form: " << bin << endl;

     string bin1;
     cout << "Enter a Binary string (1st bit for sign): ";
     cin >> bin1;
     int num1 = 0;
     int n = bin1.size();
     if (bin1[0] == '0') //+ve integer
     {
          for (int i = 0; i < n; i++)
          {
               if (bin1[n - 1 - i] == '1')
               {
                    num1 += pow(2, i);
               }
          }
     }
     else if (bin1[0] == '1') //-ve integer
     {
          string flipbin = bin1;
          for (char &c : flipbin) // 1's complement
          {
               c = (c == '1') ? '0' : '1';
          }
          for (int i = n - 1; i >= 0; i--) // 2's complement
          {
               if (flipbin[i] == '0')
               {
                    flipbin[i] = '1';
                    break;
               }
               flipbin[i] = '0';
          }
          for (int i = 0; i < n; i++)
          {
               if (flipbin[n - 1 - i] == '1')
               {
                    num1 += pow(2, i);
               }
          }
          num1 = -num1;
     }
     cout << "Integer: " << num1 << endl;

     return 0;
}