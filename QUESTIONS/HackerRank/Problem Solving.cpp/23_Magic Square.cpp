#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/magic-square-forming/problem?isFullScreen=true

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */

int formingMagicSquare(vector<vector<int>> s)
{
    vector<int> cost;

    vector<int> range = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<vector<int>> mrows;
    int nrows = 0;
    for (int p = 0; p < 9; p++)
    {
        for (int q = 0; q < 9; q++)
        {
            for (int r = 0; r < 9; r++)
            {
                if (p != q && q != r && p != r)
                {
                    int sum = 0;
                    sum += range[p] + range[q] + range[r];
                    if (sum == 15)
                    {
                        mrows.push_back({range[p], range[q], range[r]});
                        nrows++;
                    }
                }
            }
        }
    }

    vector<vector<int>> magics;
    int ncols = 0;
    for (int p = 0; p < nrows; p++)
    {
        for (int q = 0; q < nrows; q++)
        {
            for (int r = 0; r < nrows; r++)
            {
                if (p != q && q != r && p != r)
                {
                    int pass = 0;
                    for (int s = 0; s < 3; s++)
                    {
                        int sum = 0;
                        sum += mrows[p][s] + mrows[q][s] + mrows[r][s];
                        if (sum == 15)
                        {
                            pass++;
                        }
                    }
                    int sum = 0;
                    sum += mrows[p][0] + mrows[q][1] + mrows[r][2];
                    if (sum == 15)
                    {
                        pass++;
                    }
                    sum = 0;
                    sum += mrows[p][2] + mrows[q][1] + mrows[r][0];
                    if (sum == 15)
                    {
                        pass++;
                    }
                    if (pass == 5)
                    {
                        vector<int> vals;
                        vals.insert(vals.end(), mrows[p].begin(), mrows[p].end());
                        vals.insert(vals.end(), mrows[q].begin(), mrows[q].end());
                        vals.insert(vals.end(), mrows[r].begin(), mrows[r].end());

                        sort(vals.begin(), vals.end());
                        bool perfect = true;
                        for (int q = 0; q < 9; q++)
                        {
                            if (vals[q] != q + 1)
                            {
                                perfect = false;
                                break;
                            }
                        }
                        if (!perfect)
                        {
                            continue;
                        }

                        magics.push_back(mrows[p]);
                        magics.push_back(mrows[q]);
                        magics.push_back(mrows[r]);
                        ncols += 3;
                    }
                }
            }
        }
    }

    for (int j = 0; j < (ncols - 2); j += 3)
    {
        int k = j + 1;
        int l = j + 2;
        int co1, co2, co3;
        co1 = co2 = co3 = 0;

        for (int m = 0; m < 3; m++)
        {
            co1 += abs(s[0][m] - magics[j][m]);
            co2 += abs(s[1][m] - magics[k][m]);
            co3 += abs(s[2][m] - magics[l][m]);
        }

        int cost1 = co1 + co2 + co3;
        cost.push_back(cost1);
    }

    int mincost = *min_element(cost.begin(), cost.end());

    return mincost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);

    for (int i = 0; i < 3; i++)
    {
        s[i].resize(3);

        string s_row_temp_temp;
        getline(cin, s_row_temp_temp);

        vector<string> s_row_temp = split(rtrim(s_row_temp_temp));

        for (int j = 0; j < 3; j++)
        {
            int s_row_item = stoi(s_row_temp[j]);

            s[i][j] = s_row_item;
        }
    }

    int result = formingMagicSquare(s);

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