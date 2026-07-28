class Solution
{
public:
    int maxFreqSum(string s)
    {
        vector<int> vow(26, 0);
        vector<int> con(26, 0);

        string vowel = "aeiou";
        for (char c : s)
        {
            if (vowel.find(c) != string::npos)
            {
                vow[c - 'a']++;
            }
            else
            {
                con[c - 'a']++;
            }
        }

        int mxf = *max_element(vow.begin(), vow.end());
        mxf += *max_element(con.begin(), con.end());

        return mxf;
    }
};

// TC = O(n)
// SC = O(1)