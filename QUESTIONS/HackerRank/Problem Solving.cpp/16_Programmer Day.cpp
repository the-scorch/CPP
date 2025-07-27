#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year)
{
    string date = "00.00.0000";

    string y = to_string(year);
    for (int i = 6; i <= 9; i++)
    {
        date[i] = y[i - 6];
    }

    if (year == 1918)
    {
        date[0] = '2';
        date[1] = '6';
        date[4] = '9';
    }

    else if (year < 1918)
    {
        date[0] = '1';
        date[4] = '9';

        if (year % 4 == 0)
        {
            date[1] = '2';
        }

        else
        {
            date[1] = '3';
        }
    }

    else if (year > 1918)
    {
        date[0] = '1';
        date[4] = '9';

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            date[1] = '2';
        }

        else
        {
            date[1] = '3';
        }
    }

    return date;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
