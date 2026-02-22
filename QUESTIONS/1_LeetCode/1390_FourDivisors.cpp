class Solution
{
public:
    int sumFourDivisors(vector<int> &nums)
    {
        int ans = 0;
        for (int no : nums)
        {
            int ndiv = 0, sum = 0;
            for (int i = 1; i * i <= no; i++)
            { // Optimized to O(root no)
                if (no % i == 0)
                {
                    int j = no / i; // Next Element of Divisor Pair
                    if (i == j)
                    { // Perfect Square
                        ndiv++;
                        sum += i;
                    }
                    else
                    { // Two Divisors
                        ndiv += 2;
                        sum += i + j;
                    }
                }
                if (ndiv > 4)
                { // Break early
                    break;
                }
            }
            if (ndiv == 4)
            {
                ans += sum;
            }
        }
        return ans;
    }
};