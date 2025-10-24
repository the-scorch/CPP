class Solution
{
public:
    int mySqrt(int x)
    {
        int s = 0, e = x;
        int sol = 0;
        while (s <= e)
        {
            long long int v = s + (e - s) / 2;
            if (v * v == x)
            {
                return v;
            }
            else if (v * v < x)
            {
                ans = v;
                s = v + 1;
            }
            else if (v * v > x)
            {
                e = v - 1;
            }
        }
        return sol;
    }
};
// Addition by Love Babbar Bhaiya
double sqrtprecision(int n, int prec, int sol)
{
    double ans = sol;
    double deci = 1;
    for (int i = 0; i < prec; i++)
    {
        deci /= 10;
        for (double j = ans; j * j < n; j + deci)
        {
            ans = j;
        }
    }
    return ans;
}