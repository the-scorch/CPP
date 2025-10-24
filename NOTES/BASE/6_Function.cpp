#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void function() // void type
{
    cout << "My First Function" << "\t";
    return; // can only end the function
}

int function1() // return type
{
    return 7; // return Values
}

bool checkeven(int a)
{
    if (a ^ 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int fsum(int a, int b) // Pass by Value: modify value's copy
{
    return a + b;
}//But for Array: it passes the pointer to 1st element

int fsum(int a, int b, int c) // Function Overloading
{
    return a + b + c;
}

void swap(string &d, string &e) // Pass by Reference: modify orignal value
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

void parray(int nums[4])
{
    for (int g = 0; g < 4; g++)
    {
        cout << nums[g] << ", ";
    }
}

int rsum(int k)
{
    if (k > 0)
    {
        return k + rsum(k - 1); // Recursion
    }
    else
    {
        return 0;
    }
}

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}

int ap(int a, int n, int d)
{
    return a + (n - 1) * d;
}

int setbit(int a, int b)
{
    int one = 0;
    while (a != 0 || b != 0)
    {
        if (a & 1)
        {
            one++;
        }
        a >>= 1;
        if (b & 1)
        {
            one++;
        }
        b >>= 1;
    }
    return one;
}

int fibo(int n)
{
    if(n==0 || n==1){
        return n;
    }
    else {
        return fibo(n-1)+fibo(n-2);
    }
}

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

    function(); // Call Function
    cout << function1() << "\n\n";

    cout << checkeven(6) << "\n\n";

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

    cout << nCr(8, 2) << '\t' << ap(5, 11, 3) << "\n\n";

    cout << setbit(4, 9) << '\t' << fibo(7) << "\n\n";

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