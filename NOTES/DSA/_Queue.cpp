#include <iostream>
#include <string>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    //Queue
    queue<char> line;

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
    deque<char> line1 = {'P', 'Q', 'W', 'S', 'T'};

    for (char a : line1) // printing the stack elements
    {
        cout << a << "\t";
    }

    cout << "\n\n";

    // deque functions

    cout << line1[1] << "\t" << line1.at(3) << "\n"; // gives the 2nd & 4th element (safer than [] operator)

    cout << line1.front() << "\t" << line1.back() << "\n"; // gives the first & last element

    line1.at(2) = 'R'; // change the 3rd element

    cout << line1.at(2) << "\n";

    line1.push_back('T');  // add element at the end
    line1.push_front('O'); // add element at the front

    cout << line1.front() << "\t" << line1.back() << "\n\n";

    line1.pop_back();  // remove the last element
    line1.pop_front(); // remove the first element

    cout << line1.front() << "\t" << line1.back() << "\n\n";

    cout << line1.size() << "\t"; // gives the size of the deque

    cout << line1.empty() << "\n\n"; // if No elements = 1, Else = 0

    return 0;
}