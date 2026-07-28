class Solution
{
public:
    int digitFrequencyScore(int n)
    {
        int scr = 0;

        unordered_map<int, int> freq;
        while (n)
        {
            int a = n % 10;
            freq[a]++;
            n /= 10;
        }
        for (auto &[dig, frq] : freq)
        {
            scr += dig * frq;
        }

        return scr;
    }
};

// TC = O(logn) no. of digits
// SC = O(1) only digits 0-9 as keys