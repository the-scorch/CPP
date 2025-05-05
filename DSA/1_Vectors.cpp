#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> foods = {"Oats", "Eggs", "Milk", "Chicken", "Lassi"}; // Declaration

    for (string food : foods) // Printing all elements
    {
        cout << food << endl;
    }

    cout << endl
         << foods[1] << "\t" << foods[3]; // accessing elements by Index

    cout << "\n\n";

    // using Functions

    cout << foods.at(2)       // also by Index, but safer as shows error in out of range
         << foods[5] << endl; //<< foods.at(5) << endl;

    cout << foods.front();         // gives First element
    cout << foods.back(); // gives Last element

    cout << "";

    return 0;
}