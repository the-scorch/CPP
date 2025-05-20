#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main()
{

     // C-style strings (array of characters)

     string greet1 = "Hey, wayd?";
     char greet2[] = "Hey, wayd?"; // Alt. method to declare string

     greet1.erase(6, 3); // Erases 3 characters from index 6

     cout << greet1 << "\n"
          << greet2 << "\n\n";

     string greet = "Hello!";
     string firstname = "Ashitabh ";
     string lastname = "Srivastava.";
     string Fullname = firstname + lastname; // Simply combines the strings

     string first = "Concatenate ";
     string last = "String!";
     string full = first.append(last); // Combines the two strings

     cout << greet << ", This is " << Fullname << "\nThis is " << full << "\n\n";

     string txt = "abcdefhijklnopqrstvwxyz";

     cout << txt << "\t- Total characters in this = " << txt.length() // Gives the length of string
          << "\n\n";

     string q = "Ashetavh";
     q[3] = 'i';    // Changing value in string
     q.at(6) = 'b'; // Same work as above, but safer

     cout << q << "\n"
          << q[0] << "\t" << q[6] << "\t" << q[q.length() - 1] << "\n\n";

     string txt1 = "We use backslash for \"Special\" \\ \'Quotes\' in the text.";

     cout << txt1 << "\n\n";

     string fullName;
     cout << "Type your Full Name: ";
     getline(cin, fullName); // take whole line as input, newline as terminator
     cout << "Your name is: " << fullName << endl;

     char pass[16];
     cout << "Enter Password of 8 characters: ";
     cin.read(pass, 8); // take defined no. of characters as input, space as terminator
     cout << "Saving this Pass = " << pass << endl; // 21032005

     char title[20];
     cout << "Enter the Title: ";
     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the newline left in the buffer
     cin.getline(title, 10); // same as cin.read(), newline as terminator
     cout << "Saving this Title = " << title << endl; // THE LOSER
     

     return 0;
}