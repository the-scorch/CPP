class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if (s1.size() > s2.size())
            return false;

        vector<int> A(26, 0), B(26, 0);
        for (int i = 0; i < s1.size(); i++)
        { // counting frequencies of first s1.size() letters of both strings
            A[s1[i] - 'a']++;
            B[s2[i] - 'a']++;
        }
        if (A == B)
            return true;

        // Sliding Window
        for (int i = s1.size(); i < s2.size(); i++)
        {
            B[s2[i] - 'a']++;               // add one from right
            B[s2[(i - s1.size())] - 'a']--; // remove one from left (moving window)

            if (A == B)
                return true;
        }

        return false;
    }
};