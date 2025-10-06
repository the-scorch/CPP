#include <iostream>
using namespace std;

int main()
{
   // while loop
   int a = 1;
   while (a < 7) // terminating condition
   {
      cout << a << "\t";
      a++;
   }
   cout << endl;

   // do-while loop
   int b = 7;
   do // executes once
   {
      cout << b << "\t";
   } while (b < 7); // then checks the condition
   cout << endl;

   int n;
   do
   {
      cout << "Enter a positive number: ";
      cin >> n;
   } while (n <= 0); // ensure user enters a positive number
   cout << "Entered number: " << n << "\n\n";

   // for-loop
   for (int c = 0; c < 10; c++) // initialization, condition, updation
   {
      cout << c << "\t";
   }
   cout << endl;

   for (int d = 2; d <= 20; d += 2)
   {
      cout << d << "\t";
   }
   cout << "\n\n";

   for (int h = 1; h < 10; h++)
   {
      if (h == 7)
      {
         break; // breaks out of loop
      }
      cout << h << "\t";
   }
   cout << endl;

   for (int h = 1; h < 10; h++)
   {
      if (h == 7)
      {
         continue; // skips current iteration
      }
      cout << h << "\t";
   }
   cout << "\n\n";

   // Nested loop
   for (int e = 6; e <= 8; e++)
   {
      cout << "External: " << e << "\n"; // Executes 3 times

      for (int f = 5; f <= 6; f++) // Executes 2*(3)= 6 times
      {
         cout << "Internal: " << f << "\n";
      }
   }
   cout << endl;

   for (int m = 0, n = 10; m < 7; m++, n--) // Multiple variables in for-loop
   {
      cout << "m : " << m << "\t" << "n: " << n << endl;
   }
   cout << endl;

   // Range based for-loop / for-each loop
   int nums[] = {1, 2, 3, 4, 5};

   for (int i : nums)
   {
      cout << i << " ";
   }
   cout << endl;

   for (auto &i : nums) // modify element using reference
   {
      i++;
   }
   for (auto i : nums)
   {
      cout << i << " ";
   }
   cout << "\n\n";

   /* Infinite loop
   while(true){
   }
   for(;;)
   {
   }*/

   // Pattern Printing
   int num1;
   cout << "Enter a number: ";
   cin >> num1;
   for (int i = 1; i <= num1; i++) // Half-Triangle
   {
      for (int j = 1; j <= i; j++)
      {
         cout << "*";
      }
      cout << endl;
   }
   cout << endl;

   int num2;
   cout << "Enter another number: ";
   cin >> num2;
   for (int i = num2; i >= 1; i--) // Inverted Half-Triangle
   {
      for (int j = i; j >= 1; j--)
      {
         cout << j << " ";
      }
      cout << endl;
   }
   cout << endl;

   int row, col;
   cout << "Enter No. of Row & Column: ";
   cin >> row >> col;
   char ch = 'A';
   for (int i = 1; i <= row; i++) // Square Box
   {
      for (int j = 1; j <= col; j++)
      {
         cout << ch << " ";
         ch++;
      }
      cout << endl;
   }
   cout << endl;

   int num3;
   cout << "Enter a number again: ";
   cin >> num3;
   for (int i = 1; i <= num3; i++) // TRIANGLE
   {
      for (int j = 1; j <= num3 - i; j++)
      {
         cout << " ";
      }
      for (int k = 0; k <= i; k++)
      {
         cout << char(65 + k);
      }
      for (int l = i - 1; l >= 0; l--)
      {
         cout << char(65 + l);
      }
      cout << endl;
   }

   return 0;
}