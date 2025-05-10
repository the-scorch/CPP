#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    set<string> mySet = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"}; // Declaration - Sort in Ascending order (default)

    for (string str : mySet) // sorted alphabetically
    {
        cout << str << "\t";
    }

    cout << "\n";

    set<int> mySet2 = {1, 5, 4, 2, 3};

    for (int i : mySet2) // sorted numerically
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    set<int, greater<int>> mySet3 = {1, 5, 4, 2, 3}; // Sort in Descending order

    for (int i : mySet3) // sorted numerically
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    set<string> mySet4 = {"Assassin Creed", " Batman's Night", "C", "Detroit", "Detroit", "Elden Ring"}; // ignores Duplicate values

    for (string str : mySet4)
    {
        cout << str << "\t"; // only stores Unique values
    }

    cout << "\n\n";

    set<double> mySet5 = {1, 3.14, 9.8, 1.38};

    for (double d : mySet5)
    {
        cout << d << "\t";
    }

    cout << endl;

    mySet5.insert(6.63); // add element in a set
    mySet5.insert(9.1);

    mySet5.erase(1); // remove a specific element from set

    for (double d : mySet5)
    {
        cout << d << "\t";
    }

    cout << "\n\n"
         << mySet5.size(); // gives the size of set
    cout << "\t"
         << mySet5.empty(); // if No elements = 0, Else = 1

    mySet5.clear(); // removes all elements of set

    cout << endl
         << mySet5.empty();

    return 0;
}