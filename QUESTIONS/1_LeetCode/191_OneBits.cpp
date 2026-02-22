class Solution
{
public:
    int hammingWeight(int n)
    {
        int one = 0;
        while (n)
        {
            if (n & 1)
            {
                one++;
            }
            n = n >> 1;
        }
        return one;
    }
};