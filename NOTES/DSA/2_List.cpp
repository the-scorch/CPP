#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{

    list<int> todo = {20, 3, 4, 5, 6, 7, 8, 90}; // Declaration

    for (int i : todo) // for-each loop
    {
        cout << i << "\t";
    }
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    // list Functions

    cout << todo.front() << "\t" << todo.back(); // gives First and Last element

    cout << endl;

    todo.front() = 2; // changing values
    todo.back() = 9;

    cout << todo.front() << "\t" << todo.back();

    cout << "\n\n";

    todo.push_front(1); // add elements at front
    todo.push_front(0);

    todo.push_back(10); // add elements at end
    todo.push_back(11);

    todo.pop_front(); // removes an element from front = 0
    todo.pop_back();  // removes an element from end = 11

    for (int i : todo)
    {
        cout << i << "\t";
    }

    cout << "\n\n";

    list<string> texts;

    cout << texts.size()           // gives the list Size
         << "\t" << texts.empty(); // if No elements = 1, Else = 0

    cout << endl;

    cout << todo.size()
         << "\t" << todo.empty();

    cout << "\n\n";

    return 0;
}