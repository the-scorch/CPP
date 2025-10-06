class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int pro = 1, sum = 0;
        while (n)
        {
            int a = n % 10;
            sum += a;
            pro *= a;
            n /= 10;
        }
        int dif = pro - sum;
        return dif;
    }
};