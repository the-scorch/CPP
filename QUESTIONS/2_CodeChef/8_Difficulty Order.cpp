#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RATINGINPRAC

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }
        string answer = "Yes";
        for (int j = 0; j < n - 1; j++)
        {
            if (d[j] > d[j + 1])
            {
                answer = "No";
                break;
            }
        }
        cout << answer << endl;
    }
}