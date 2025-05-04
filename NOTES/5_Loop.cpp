#include <iostream>
#include <string>
using namespace std;

int main()
{

   int a = 1;
   while (a < 7) // executes till the condition is true
   {
      cout << a << "\t";
      a++;
   }

   cout << "\n";

   int b = 7;
   do // executes at least once
   {
      cout << b << "\t";
   } while (b < 7); // then checks the condition

   cout << "\n\n";

   for (int c = 0; c < 10; c++) // Variable, Condition, Action after an execution
   {
      cout << c << "\t";
   }

   cout << "\n";

   for (int d = 2; d <= 20; d += 2)
   {
      cout << d << "\t";
   }

   cout << "\n\n";

   for (int e = 6; e <= 8; e++)
   {
      cout << "External: " << e << "\n"; // Executes 3 times

      for (int f = 5; f <= 6; f++) // Executes (2*3)= 6 times
      {
         cout << "Internal: " << f << "\n";
      }
   }

   cout << "\n\n";

   int g = 1;
   while (g < 10)
   {
      if (g == 7)
      {
         g++;
         continue; // skips the current iteration
      }
      cout << g << "\t";
      g++;
   }

   cout << "\n";

   for (int h = 1; h < 10; h++)
   {
      if (h == 7)
      {
         break; // breaks the loop
      }
      cout << h << "\t";
   }

   return 0;
}