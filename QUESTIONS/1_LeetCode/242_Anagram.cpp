class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        vector<int> A(26, 0), B(26, 0);

        for (char c : s)
        {
            A[c - 'a']++;
        }
        for (char c : t)
        {
            B[c - 'a']++;
        }

        if (A == B)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// TC = O(n)
// SC = O(1)