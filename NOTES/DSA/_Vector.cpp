#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector<string> foods = {"Oats", "Eggs", "Lassi", "Chicken", "Milk"};
     for (string food : foods) // for-each loop
     {
          cout << food << "\t";
     }

     cout << endl
          << foods[1] << "\t" << foods[3] << "\n\n";

     // Vector Functions
     cout << foods.at(2) << endl; // also access by Index, but safer as shows error in out of range
     foods.at(2) = "Paneer";      // overwriting values
     cout << foods.at(2) << "\n\n";

     cout << foods.front()                   // gives First element
          << "\t" << foods.back() << "\n\n"; // gives Last element

     foods.push_back("Peanuts"); // add elements at end
     foods.push_back("Banana");
     for (string food : foods)
     {
          cout << food << "\t";
     }
     cout << endl;

     foods.pop_back(); // removes an element from end
     for (string food : foods)
     {
          cout << food << "\t";
     }
     cout << "\n\n";

     vector<int> nums;
     cout << nums.size()                   // gives the vector Size
          << "\t" << nums.empty() << endl; // if No elements = 0, Else = 0

     cout << foods.size() << "\t" << foods.empty() << "\n\n";

     // vector<string>::iterator it; any type
     auto it = foods.begin(); // Declare to first element
     cout << *it << "\t";
     it = foods.begin() + 1; // pointing to second element
     cout << *it << "\t";
     it = foods.end() - 1; // pointing to last element
     cout << *it << "\n\n";
     for (it = foods.begin(); it != foods.end(); it++)
     {
          if (*it == "Chicken")
          {
               it = foods.erase(it); // remove the element
          }
     }

     for (it = foods.begin(); it != foods.end(); it++) // for-loop using iterator
     {
          cout << *it << "\t";
     }
     cout << "\n\n";

     vector<string> shapes = {"Triangle", "Square", "Pentagon", "Hexagon", "Circle"};
     for (auto it1 = shapes.rbegin(); it1 != shapes.rend(); it1++) // reverse iterator for-loop
     {
          cout << *it1 << "\t";
     }
     cout << "\n\n";

     return 0;
}