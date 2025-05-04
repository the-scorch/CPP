#include <iostream>
#include <string>
using namespace std;

int main()
{

   // Switch

   int month = 7;
   switch (month)
   {
   case 1:
      cout << "January";
      break; // terminates if found true

   case 2:
      cout << "February";
      break;

   case 3:
      cout << "March";
      break;

   case 4:
      cout << "April";
      break;

   case 5:
      cout << "May";
      break;

   case 6:
      cout << "June";
      break;

   case 7:
      cout << "July";
      break;

   case 8:
      cout << "August";
      break;

   case 9:
      cout << "September";
      break;

   case 10:
      cout << "October";
      break;

   case 11:
      cout << "November";
      break;

   case 12:
      cout << "December";
      break;
   }

   int day = 3;
   switch (day)
   {
   case 6:
      cout << ", It's Saturday!";
      break;

   case 7:
      cout << ", It's Sunday!";
      break;

   default:
      cout << ", Wait for Weekend..\n\n";
   } // if nothing was found true

   return 0;
}