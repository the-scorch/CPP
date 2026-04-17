class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0; // smallest prime no. = 2

        vector<bool> prm(n, true);
        prm[0] = prm[1] = false;
        int cnt = 0;
        for (int i = 2; i < n; i++)
        {
            if (prm[i])
            {
                cnt++;

                for (int j = 2 * i; j < n; j += i)
                {
                    prm[j] = false;
                }
            }
        }

        return cnt;
    }
};

// TC = O(n*log(log n))
// SC = O(n)