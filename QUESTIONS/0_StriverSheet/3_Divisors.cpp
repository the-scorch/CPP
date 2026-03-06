#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    vector<int> A;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            A.push_back(i);
    }

    for (int a : A)
        cout << a << " ";

    return 0;
}