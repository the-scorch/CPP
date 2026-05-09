#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int x = 5; // Global Scope variable

void function() // void type
{
    cout << "My First Function" << "\t";
    return; // ends the function
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
} // But for Array: it passes the pointer to 1st element

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

void printArr(int arr[], int n, int start = 0) // Default Arguments - right to left
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

inline void function2() // requests compiler to bypass the overhead of function call
{
    int h = 24; // Local Scope variable
    cout << h << "\n\n";
}

void parray(int nums[4])
{
    for (int g = 0; g < 4; g++)
    {
        cout << nums[g] << ", ";
    }
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

    int arr[5] = {3, 6, 5, 7, 8};
    printArr(arr, 5);
    printArr(arr, 5, 3); // overwrites default arguments

    function2();
    cout << x << "\n\n";

    int nums[4] = {49, 94, 95, 43};
    parray(nums);
    cout << "\n\n";

    cout << ap(5, 11, 3) << "\n\n";

    cout << setbit(4, 9) << '\t' << "\n\n";

    // Inbuilt Math Functions
    cout << "Max of Two: " << max(20, 74) << "\t" << min(-2, -4) << endl;
    cout << "Square Root of 4761: " << sqrt(4761) << endl;
    cout << "Rounding to Nearest Integer: " << round(53.456) << endl;
    cout << "Rounding to Bigger integer: " << ceil(2.57) << endl;
    cout << "Rounding to Smaller integer: " << floor(2.57) << endl;
    cout << "Natural Logarithm of 9: " << log(9) << endl;
    cout << "Absoulte Value of -7: " << abs(-7) << "\n\n";

    return 0;
}