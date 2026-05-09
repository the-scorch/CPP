#include <iostream>
using namespace std;

int rsum(int k)
{
    if (k > 0)
        return k + rsum(k - 1); // Recursive Call - to self
    else
        return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1); // Tail Recursion
}
int nCr(int n, int r)
{
    int num = fact(n);               // Recursive Call - to other function
    int den = fact(r) * fact(n - r); // Head Recursion

    return num / den;
}

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
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

    cout << nCr(8, 2) << "\n\n";

    cout << fibo(7) << "\n\n";

    return 0;
}