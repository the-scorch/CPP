#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{

    stack<string> cake;

    cake.push("Bread"); // add elements from last
    cake.push("Cream");
    cake.push("Chocolate");
    cake.push("Choco-chips");
    cake.push("Waffles");

    // stack Functions

    cout << cake.top() << endl; // gives the top element (last added)

    cake.top() = "Cherries"; // changing the top element

    cout << cake.top() << "\n\n";

    cake.pop(); // removes the top element

    cout << cake.top() << "\n\n";

    stack<int> bakery;

    cout << bakery.size()           // gives the stack Size
         << "\t" << bakery.empty(); // tells stack has elements = 1 OR not = 0

    cout << endl
         << cake.size()
         << "\t" << cake.empty();

    cout << "\n\n";

    return 0;
}