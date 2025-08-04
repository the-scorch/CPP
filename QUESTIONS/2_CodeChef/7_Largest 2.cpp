#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND?tab=statement

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l1 = 0, l2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (l1 < a[j])
            {
                l1 = a[j];
            }
        }
        for (int k = 0; k < n; k++)
        {
            if (l2 < a[k] && l1 != a[k])
            {
                l2 = a[k];
            }
        }
        cout << (l1 + l2) << endl;
    }
    return 0;
}