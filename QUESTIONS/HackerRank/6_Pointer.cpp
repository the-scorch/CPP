#include <bits/stdc++.h>
using namespace std;

void fun(int *x, int *y)
{
    int temp = *x;
    *x = *x + *y;
    *y = abs(temp - *y);
}

int main()
{
    int a, b;
    cin >> a >> b;
    fun(&a, &b);
    cout << a << endl
         << b;
    return 0;
}