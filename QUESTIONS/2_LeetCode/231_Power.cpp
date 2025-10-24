class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else if (n % 2 != 0)
        {
            return 0;
        }
        else
        {
            for (int i = 1; i <= 30; i++)
            { // INT_MAX = 2^31-1
                if (n == pow(2, i))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
};