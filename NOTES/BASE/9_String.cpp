#include <iostream>
#include <string>
#include <limits>
#include <regex>
#include <vector>
using namespace std;

vector<string> tokenize(const string str, const regex re)
{
     sregex_token_iterator it{str.begin(), str.end(), re, -1}; // spilts the string by regex, -1 = remove the matches, 0 = keep the matches
     vector<string> tokenized{it, {}};

     tokenized.erase(
         remove_if(tokenized.begin(), tokenized.end(), [](string const &s)
                   { return s.size() == 0; }), // remove empty strings
         tokenized.end());

     return tokenized;
}

int main()
{
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

     char pass[50];
     cout << "Enter Password of 8 characters: ";
     cin.read(pass, 8);                             // take defined no. of characters as input, space as terminator
     cout << "Saving this Pass = " << pass << endl; // 21032005

     char title[50];
     cout << "Enter Title of 10 characters: ";
     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the newline left in the buffer
     cin.getline(title, 10);                              // same as cin.read(), newline as terminator
     cout << "Saving this Title = " << title << "\n\n";   // THE LOSER

     // https://www.geeksforgeeks.org/stdstring-class-in-c/

     string line = "There--Are,No Accidents--~ Master,Oogway!";
     const regex re(R"([\s|,]+|--+)");

     const vector<string> tokenized = tokenize(line, re); // function call

     for (string token : tokenized)
     {
          cout << token << endl;
     }
     cout << endl;

     string hii = "Hello, Girl!";

     string her = hii.substr(7, 4); // substring - index, size
     cout << her << endl;

     int pos = hii.find(","); // index of character's first occurrence

     her = hii.substr(pos + 1); // all after character
     cout << her << endl;

     her = hii.substr(0, pos); // all before character
     cout << her << "\n\n";

     hii.replace(0, 5, "Hi"); // replace characters by index, size, string
     int n = hii.length();
     
     for (int i = 0; i < n; i++) // print all possible substrings
     {
          for (int j = 1; j <= n - i; j++)
          {
               cout << hii.substr(i, j) << endl;
          }
     }
     cout << endl;

     string nums = "1234";
     int m = nums.length();
     int sum = 0;
     for (int i = 0; i < m; i++) // print sum of all possible substrings
     {
          for (int j = 1; j <= m - i; j++)
          {
               string num = nums.substr(i, j);

               int num1 = stoi(num); // convert string to integer
               sum += num1;
          }
     }
     cout << "Sum of all possible substrings = " << sum << "\n\n";

     string UPgreet = "Hello, buddy!";
     transform(UPgreet.begin(), UPgreet.end(), UPgreet.begin(), ::toupper);
     
     cout << UPgreet << "\n\n";
     // isupper(), islower(), isdigit()
     // toupper(), tolower()
     // reverse(str.begin(), str.end());
     // str.reserver(size);
     // str.resize(size);
     // str.find(); Not Found == string::npos
     // str.append(count, char);
     //size_t nfst = str.find_first_not_of(ch); // finds first character that is not ch

     // stringstream, i, o

     return 0;
}