#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RUNCOMPARE

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        float a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int hdays = 0;
        for (int i = 0; i < n; i++)
        {
            float diff1 = a[i] / b[i];
            float diff2 = b[i] / a[i];
            if (diff1 >= 0.5 && diff2 >= 0.5)
            {
                hdays++;
            }
        }
        cout << hdays << endl;
    }
    return 0;
}