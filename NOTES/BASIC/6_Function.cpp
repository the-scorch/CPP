#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void function() // Declare Function
{
    cout << "My First Function";
    return; // ends the function, but can't return a value here
}

void function1(string fname = "Ashitabh", int age = 19) // Adding Parameters
{
    cout << fname << " Srivastava - " << age << "\n";
}

int function1(int a)
{
    return 7 + a; // return Values
}

int function1(int b, int c)
{
    return b + c;
}

void swap(string &d, string &e) // Pass by Reference
{
    string f = d;
    d = e;
    e = f;
}

void function2()
{
    int h = 24, // Local Scope variable
        i = 10,
        j = 2017;

    cout << "\n\n"
         << h << "\t" << i << "\t" << j << "\t";
}

int x = 5; // Global Scope variable

// Arrays in function
void function3(int nums[4])
{
    for (int g = 0; g < 4; g++)
    {
        cout << nums[g] << ", ";
    }
}

// Recursion
int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{

    function(); // Call the Function

    cout << "\n\n";

    function1(); // with Default Parameters
    function1("Anshuman", 16);

    cout << "\n"
         << function1(8) << "\t" << function1(23, 46) << "\t";

    int z = function1(23, 27); // Store result in Variable
    cout << z << "\n\n";

    string fword = "You ";
    string lword = "Dumb ";

    cout << "Normal: " << fword << lword << "\n";

    swap(fword, lword);

    cout << "Swapped: " << fword << lword << "\n\n";

    int nums[4] = {49, 94, 95, 43};
    function3(nums);

    function2();
    cout << "\n"
         << x << "\n\n";

    cout << sum(1) << "\n"
         << sum(2) << "\n"
         << sum(3) << "\n"
         << sum(4) << "\n"
         << sum(5) << "\n"
         << sum(6) << "\n"
         << sum(7) << "\n"
         << sum(8) << "\n"
         << sum(9) << "\n"
         << sum(10) << "\n";

    return 0;
}