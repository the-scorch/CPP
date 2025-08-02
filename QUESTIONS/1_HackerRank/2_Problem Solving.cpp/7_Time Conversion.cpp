#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{

    string m = s;

    if (m[8] == 'A')
    {
        if (m[0] == '1' && m[1] == '2')
        {
            m[0] = '0';
            m[1] = '0';
        }
    }

    else if (m[8] = 'P')
    {
        if (m[0] == '1' && m[1] == '2')
        {
        }
        else
        {
            m[0] += 1;
            m[1] += 2;
        }
    }

    m.erase(8, 2);
    return m;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}