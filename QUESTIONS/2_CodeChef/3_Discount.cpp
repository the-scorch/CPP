#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        int nodis = 0, dis = x;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            nodis += a[i];
            dis += (a[i] <= y) ? 0 : a[i] - y;
        }
        string choice = (nodis <= dis) ? "NO COUPON" : "COUPON";
        cout << choice << endl;
    }
    return 0;
}