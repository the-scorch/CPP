#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

   // while loop
   int a;
   while (a < 7) // terminating condition for loop
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

   // for loop
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
         break; // breaks the loop
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

   for (int e = 6; e <= 8; e++) // Nested loop
   {
      cout << "External: " << e << "\n"; // Executes 3 times

      for (int f = 5; f <= 6; f++) // Executes 2*(3)= 6 times
      {
         cout << "Internal: " << f << "\n";
      }
   }
   cout << endl;

   for (int m = 0, n = 10; m < 7; m++, n--) // Multiple variables in for loop
   {
      cout << "m : " << m << "\t" << "n: " << n << endl;
   }
   cout << endl;

   // Range-based for loop
   int nums[] = {1, 2, 3, 4, 5};

   for (int i : nums)
   {
      cout << i << " ";
   }
   cout << endl;

   vector<int> v = {1, 2, 3, 4, 5};

   for (auto &i : v) // modify element using reference
   {
      i++;
   }

   for (auto i : v)
   {
      cout << i << " ";
   }
   cout << "\n\n";

   /* Infinite loop
   for(;;)
   {
      cout << "Infinite..";
   }*/

   return 0;
}