#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN

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
        int count = 0, m = a[0];
        for (int k = 1; k < n; k++)
        {
            if (m > a[k])
            {
                m = a[k];
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (m < a[j])
            {
                a[j] = m;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}