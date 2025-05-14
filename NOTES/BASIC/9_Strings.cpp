#include <iostream>
#include <string>
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

     // cin takes space as terminator

     string fullName;
     cout << "Type your Full Name: ";
     cin.ignore();           // To ignore the newline character left in the input buffer
     getline(cin, fullName); // take whole line as input
     cout << "Your name is: " << fullName << "\n\n";

     return 0;
}