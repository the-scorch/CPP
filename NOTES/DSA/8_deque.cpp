#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // Double-Ended Queue : Insertion & Deletion from both side
    deque<char> line = {'P', 'Q', 'W', 'S', 'T'};
    for (char a : line) // for-each loop
    {
        cout << a << "\t";
    }
    cout << "\n\n";

    // Same functions as previous DS
    cout << line[1] << "\t" << line.at(3) << "\n";
    cout << line.front() << "\t" << line.back() << "\n";
    line.at(2) = 'R';
    cout << line.at(2) << "\n";
    cout << line.size() << "\t";
    cout << line.empty() << "\n\n";

    line.push_back('Y');  // add element at end
    line.push_front('O'); // add element at front
    cout << line.front() << "\t" << line.back() << "\n\n";

    line.pop_back();  // remove the last element
    line.pop_front(); // remove the first element
    cout << line.front() << "\t" << line.back() << "\n\n";

    line.erase(line.begin(), line.begin()+1); // inclusive, exclusive
    for (char a : line)
    {
        cout << a << "\t";
    }
    cout << "\n\n";

    return 0;
}