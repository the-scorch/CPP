class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        return haystack.find(needle);
    }
};

// TC = O(n*m)
// SC = O(1)