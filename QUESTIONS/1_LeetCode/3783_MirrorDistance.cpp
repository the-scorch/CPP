class Solution
{
public:
    int mirrorDistance(int n)
    {
        int rev = 0;
        int n1 = n;
        while (n1)
        {
            int a = n1 % 10;
            rev = 10 * rev + a;
            n1 /= 10;
        }

        return abs(n - rev);
    }
};

// TC = O(logn)
// SC = O(1)