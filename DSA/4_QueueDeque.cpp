#include <iostream>
#include <string>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    // Queue

    queue<char> line; // Declaration

    line.push('Z');
    line.push('A');
    line.push('B');
    line.push('C');
    line.push('W');

    // queue funcions

    cout << line.front() << "\t" << line.back() << "\n";

    line.front() = 'Y'; // change the First element
    line.back() = 'D';  // change the Last element

    cout << line.front() << "\t" << line.back() << "\n\n";

    line.pop(); // Remove the first element

    cout << line.front() << "\n\n";

    // Deque

    deque<char> line2 = {'P', 'Q', 'W', 'S', 'T'}; // Declaration

    for (char a : line2) // printing the stack elements
    {
        cout << a << "\t";
    }

    cout << "\n\n";

    // deque functions

    cout << line2[1] << "\t" << line2.at(3) << "\n"; // gives the 2nd & 4th element (safer than [] operator)

    cout << line2.front() << "\t" << line2.back() << "\n"; // gives the first & last element

    line2.at(2) = 'R'; // change the 3rd element

    cout << line2.at(2) << "\n";

    line2.push_back('T');  // add element at the end
    line2.push_front('O'); // add element at the front

    cout << line2.front() << "\t" << line2.back() << "\n\n";

    line2.pop_back();  // remove the last element
    line2.pop_front(); // remove the first element

    cout << line2.front() << "\t" << line2.back() << "\n\n";

    cout << line2.size() << "\t"; // gives the size of the deque

    cout << line2.empty() << "\n\n"; // if No elements = 0, Else = 1

    return 0;
}