#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    set<string> mySet = {"Alpha", "Beta", "Gamma", "Delta", "Epsilon"}; // Declaration - Sort strings in Ascending order (alphabetically)

    for(string str : mySet) // print all elements
    {
        cout << str << "\t";
    }

    cout << "\n";

    set<int> mySet2 = {1, 5, 4, 2, 3}; // Declaration - Sort integers in Ascending order (numerically)

    for(int i : mySet2) // print all elements
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    set<int, greater<int>> mySet3 = {1, 5, 4, 2, 3}; // Declaration - Sort integers in Descending order (numerically)

    for(int i : mySet3) // print all elements
    {
        cout << i << "\t";
    }

    return 0;
}    