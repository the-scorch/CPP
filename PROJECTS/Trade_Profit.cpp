#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the Buy Value: ";
    double b;
    cin >> b;

    cout << "Enter the Sell Value: ";
    double a;
    cin >> a;

    a -= 0.005 * a; // Groww Charges
    a -= 13.5;      // DP Charges

    cout << "\nAmount = " << a;

    double c = a - b;
    cout <<  "\n\nProfit = " << c;

    c -= 0.15 * c; // Short-Term CG Tax
    cout << "\n\nProfit After Tax = " << c;

    return 0;
}