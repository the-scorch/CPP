#include <bits/stdc++.h>
using namespace std;

int digcnt(int num)
{
    if (num == 0)
        return 1;
    int dig = 0;
    while (num)
    {
        dig++;
        num /= 10;
    }

    return dig;
}

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "NO";
        return 0;
    }

    string res = "NO";
    int dig = digcnt(num);
    int num1 = num, sum = 0;
    while (num1)
    {
        int n = num1 % 10;
        sum += pow(n, dig);
        num1 /= 10;
    }
    if (sum == num)
        res = "YES";

    cout << "Is an Armstrong Number?: " << res;

    return 0;
}