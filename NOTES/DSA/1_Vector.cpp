#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
     vector<string> foods = {"Oats", "Eggs", "Lassi", "Chicken", "Milk"}; // Declaration

     for (string food : foods) // for-each loop
     {
          cout << food << "\t";
     }

     cout << endl
          << foods[1] << "\t" << foods[3]; // access elements by Index

     cout << "\n\n";

     // vector Functions

     cout << foods.at(2); /* also access by Index, but safer as shows error in out of range
    << foods[5] << endl << foods.at(5) << endl;*/

     foods.at(2) = "Paneer"; // changing values
     cout << endl
          << foods.at(2);

     cout << "\n\n";

     cout << foods.front()         // gives First element
          << "\t" << foods.back(); // gives Last element

     cout << "\n\n";

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

     cout << nums.size()           // gives the vector Size
          << "\t" << nums.empty(); // if No elements = 0, Else = 0

     cout << endl
          << foods.size() << "\t" << foods.empty();

     cout << "\n\n";

     // Iterator

     //vector<string>::iterator it; 
     auto it = foods.begin(); // Declaration

     it = foods.begin(); // pointing to first element
     cout << *it << "\t";

     it = foods.begin() + 1; // pointing to second element
     cout << *it << "\t";

     it = foods.end() - 1; // pointing to last element
     cout << *it << "\n\n";

     for(it; it != foods.end(); it++) // using iterator in for loop
     {
          cout << *it << "\t";
     }



     return 0;
}