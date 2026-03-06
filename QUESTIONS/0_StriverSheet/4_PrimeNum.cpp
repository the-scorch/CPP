#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to check Prime: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "False";
        return 0;
    }

    bool chk = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            chk = false;
            break;
        }
    }

    cout << boolalpha << chk;

    return 0;
}