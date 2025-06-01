#include <iostream>
#include <string>
#include <cmath> // math functions
#include <vector>
#include <algorithm> // lambda functions
using namespace std;

void function() // void type
{
    cout << "My First Function" << "\t";
    return; // can't return a value here
}

int function1() // return type
{
    return 7; // return Values
}

int fsum(int a, int b) // Pass by Value, modify the copy of value
{
    return a + b;
}

int fsum(int a, int b, int c) // Function Overloading
{
    return a + b + c;
}

void swap(string &d, string &e) // Pass by Reference , allows modify of orignal value
{
    string f = d;
    d = e;
    e = f;
}

void intro(string fname, int age = 19) // Default parameters, starts from right
{
    cout << fname << " Srivastava - " << age << "\n";
}

inline void function2() // suggests compiler to bypass the overhead of function call
{
    int h = 24, // Local Scope variable
        i = 10,
        j = 2017;

    cout << endl
         << h << "\t" << i << "\t" << j << endl;
}

int x = 5; // Global Scope variable

// Arrays in function
void parray(int nums[4])
{
    for (int g = 0; g < 4; g++)
    {
        cout << nums[g] << ", ";
    }
}

// Recursion
int rsum(int k)
{
    if (k > 0)
    {
        return k + rsum(k - 1);
    }
    else
    {
        return 0;
    }
};

void print(vector<int> v) {
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{

    function(); // Call Function
    cout << function1() << "\n\n";

    cout << fsum(23, 46) << "\t";
    int z = fsum(29, 27, 69); // Store result in Variable
    cout << z << endl;

    string fword = "You ";
    string lword = "Dumb ";
    cout << "Normal: " << fword << lword << endl;

    swap(fword, lword);
    cout << "Swapped: " << fword << lword << "\n\n";

    intro("Ashitabh");
    intro("Anshuman", 16); // overwrite default parameters

    function2();
    cout << x << "\n\n";

    int nums[4] = {49, 94, 95, 43};
    parray(nums);

    cout << "\n\n";

    cout << "Input: 1 = " << rsum(1) << endl
         << "Input: 2 = " << rsum(2) << endl
         << "Input: 3 = " << rsum(3) << endl
         << "Input: 4 = " << rsum(4) << endl
         << "Input: 5 = " << rsum(5) << endl
         << "Input: 6 = " << rsum(6) << endl
         << "Input: 7 = " << rsum(7) << endl
         << "Input: 8 = " << rsum(8) << endl
         << "Input: 9 = " << rsum(9) << endl
         << "Input: 10 = " << rsum(10) << "\n\n";

    // Inbuilt Math Functions
    cout << "Max of Two: " << max(20, 74) << "\t" << min(-2, -4) << endl;

    cout << "Square Root of 4761: " << sqrt(4761) << endl;

    cout << "Rounding of 53.456: " << round(53.456) << endl;

    cout << "Natural Logarithm of 9: " << log(9) << endl;

    cout << "Absoulte Value of -7: " << abs(-7) << "\n\n"; // gives absolute value

    // Lambda Expresssion
    auto res = [](int x) { // defining a lambda
        return x + x;
    };
    cout << res(5) << "\n\n";

    vector<int> v1, v2;

    auto byRef = [&] (int m) { // Capture all external variables by reference
        v1.push_back(m);
        v2.push_back(m);
    };
    
    auto byVal = [=] (int m) mutable { // Capture all external variables by value, mutable - to modify captured variable, as taken as constant
        v1.push_back(m);
        v2.push_back(m);
    };
    
    auto mixed = [&v1, v2] (int m) mutable { // Capture v1 by reference and v2 by value
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