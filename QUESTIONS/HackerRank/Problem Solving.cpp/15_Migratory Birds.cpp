#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr)
{
    int htype = 0;

    int t1, t2, t3, t4, t5;
    t1 = t2 = t3 = t4 = t5 = 0;

    for (long unsigned int i = 0; i < arr.size(); i++)
    {
        int type = arr.at(i);

        switch (type)
        {

        case 1:
            t1++;
            break;

        case 2:
            t2++;
            break;

        case 3:
            t3++;
            break;

        case 4:
            t4++;
            break;

        case 5:
            t5++;
            break;
        }
    }

    int maxf1 = (t1 > t2) ? ((t3 > t1) ? t3 : t1) : ((t3 > t2) ? t3 : t2);
    int maxf = (maxf1 > t4) ? ((maxf1 > t5) ? maxf1 : t5) : ((t4 > t5) ? t4 : t5);

    if (maxf == t1)
    {
        htype = 1;
    }

    else if (maxf == t2)
    {
        htype = 2;
    }

    else if (maxf == t3)
    {
        htype = 3;
    }

    else if (maxf == t4)
    {
        htype = 4;
    }

    else if (maxf == t5)
    {
        htype = 5;
    }

    return htype;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

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

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
