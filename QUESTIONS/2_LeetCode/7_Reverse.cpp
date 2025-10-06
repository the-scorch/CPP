class Solution
{
public:
    int reverse(int x)
    {
        int x1 = 0;
        while (x != 0)
        {
            int a = x % 10;
            if ((x1 > 2147483647 / 10) || (x1 < -2147483648 / 10))
            {
                return 0;
            }
            x1 = 10 * x1 + a;
            x /= 10;
        }
        return x1;
    }
};