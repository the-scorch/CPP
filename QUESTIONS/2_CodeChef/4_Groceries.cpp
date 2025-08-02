#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/KITCHENCOST

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int cost = 0;
        for (int k = 0; k < n; k++)
        {
            if (x <= a[k])
            {
                cost += b[k];
            }
        }
        cout << cost << endl;
    }
    return 0;
}