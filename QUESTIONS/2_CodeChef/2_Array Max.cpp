#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A?tab=statement

int maxh(int n)
{
    int tallest = 0;
    for (int j = 0; j < n; j++)
    {
        int h;
        cin >> h;
        tallest = max(tallest, h);
    }

    return tallest;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << maxh(n) << endl;
    }

    return 0;
}