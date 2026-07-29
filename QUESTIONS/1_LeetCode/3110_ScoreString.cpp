class Solution
{
public:
    int scoreOfString(string s)
    {
        int scr = 0;
        int n = s.size();
        for (int i = 0; i < n - 1; i++)
        {
            scr += abs((int)s[i] - (int)s[i + 1]);
        }

        return scr;
    }
};

// TC = O(n)
// SC = O(1)