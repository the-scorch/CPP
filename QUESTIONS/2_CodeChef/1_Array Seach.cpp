#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR?tab=statement

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> num;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        num.push_back(a);
    }

    auto it = find(num.begin(), num.end(), x);

    if (it != num.end())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}