class Solution
{
public:
    string lett[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    void solve(string dig, int idx, string out, vector<string> &res)
    {
        if (idx >= dig.size())
        {
            res.push_back(out);
            return;
        }

        int num = dig[idx] - '0';
        string let = lett[num];

        for (int i = 0; i < let.size(); i++)
        {
            out.push_back(let[i]);
            solve(dig, idx + 1, out, res);
            out.pop_back(); // BackTracking
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        string out;

        solve(digits, 0, out, res);

        return res;
    }
};