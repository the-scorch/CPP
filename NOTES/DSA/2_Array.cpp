#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Array : container for same type of data
    array<int, 5> A = {5, 1, 7, 8, 2};

    cout << A[2] << " "; // access elements by Index
    cout << A.at(4) << '\n'; // safer access for out of Bounds
    cout << A.empty() << '\n'; // True if array has No elements
    cout << A.front() << " " << A.back() << '\n'; // gives First & Last element

    return 0;
}