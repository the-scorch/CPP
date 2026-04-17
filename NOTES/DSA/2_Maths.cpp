#include <bits/stdc++.h>
using namespace std;

// Eucledian Algorithm
// GCD - Greates Common Divisior
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Sieve of Erastothenes
    // TC = O(n*log(log n))
    // SC = O(n)
    vector<bool> prm(n, true);
    prm[0] = prm[1] = false;
    int cnt = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (prm[i])
        {
            cnt++;

            for (int j = i * i; j < n; j += i)
            {
                prm[j] = false;
            }
        }
    }
    cout << "No. of Primes before = " << cnt << "\n\n";

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD = " << gcd(a, b) << "\n\n";

    // Modulo Arithmetic - %
    int c = 1000;
    c %= 56; // Range = [0, n-1]
    cout << c << '\n';
    int d = 9999, e = 8888;
    int sum = (a + b) % 1000;
    int sum1 = (a % 1000) + (b % 1000);
    cout << sum << '\t' << sum1 << "\n\n"; // both are same

    // Fast Exponentation
    // TC = O(log n)
    int bas, exp;
    cout << "Enter Base & Power: ";
    cin >> bas >> exp;

    int res = 1;
    while (exp > 0)
    {
        if (n & 1)
        { // odd number
            res = res * bas;
        }

        bas = bas * bas; // base got squared
        exp >>= 1;       // hence, exponent got halved
    }
    cout << res << "\n\n";

    return 0;
}