#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
     // Map - key, value

     map<int, string> suspect = {{101, "Unknown"}, {213, "Ashitabh Srivastava"}, {804, "Pranaw Prakash"}, {102, "Deceased"}}; // Declaration
     // sorted in ascending order as per key (default)

     cout << "Suspect 213: " << suspect[101]; // accessing Values - by Keys
     cout << endl
          << "Sespect 084: " << suspect.at(102); // same fn. but safer

     cout << "\n\n";

     suspect[410] = "Anshuman Srivastava"; // add elements to map
     suspect.insert({811, "Harsh Gupta"}); // same fn. but sylish

     suspect.insert({811, "Bokka Gupta"}); // keys - always Unique, will be assigned once

     suspect.erase(101); // removes the specific element
     suspect.erase(102);

     for (auto sus : suspect)
     {
          cout << "Suspect " << sus.first // access keys
               << ": " << sus.second      // access values
               << endl;
     }
     cout << "\n";

     cout << suspect.size() // gives the size of map
          << "\t"
          << suspect.empty(); // if No elements = 1, Else = 0

     suspect.clear(); // removes all elements of map

     cout << endl
          << suspect.empty();

     cout << endl
          << suspect.count(103); // check existence of value - by key

     cout << "\n\n";

     map<int, string, greater<int>> suspect1 = {{101, "Unknown"}, {213, "Ashitabh Srivastava"}, {
                                                                                                    103,
                                                                                                    "Nobody",
                                                                                                }}; // Declaration                                                                                                                                 // sort in descending order as per key
     // sorted in descending order as per key

     for (auto sus : suspect1)
     {
          cout << "Suspect " << sus.first
               << ": " << sus.second
               << endl;
     }

     return 0;
}