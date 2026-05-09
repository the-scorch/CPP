#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    auto res = [](int x) { // defining a lambda
        return x + x;
    };
    cout << res(5) << "\n\n";

    vector<int> v1, v2;

    auto byRef = [&](int m) { // Capture all external variables by reference
        v1.push_back(m);
        v2.push_back(m);
    };

    auto byVal = [=](int m) mutable { // Capture all external variables by value, mutable - to modify captured variable, as taken as constant
        v1.push_back(m);
        v2.push_back(m);
    };

    auto mixed = [&v1, v2](int m) mutable { // Capture v1 by reference and v2 by value
        v1.push_back(m);
        v2.push_back(m);
    };

    byRef(20);
    byVal(2347);
    mixed(10);

    print(v1);
    print(v2);

    return 0;
}