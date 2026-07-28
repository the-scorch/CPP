class Solution
{
public:
    int romanToInt(string s)
    {
        int rom[128] = {};
        rom['I'] = 1;
        rom['V'] = 5;
        rom['X'] = 10;
        rom['L'] = 50;
        rom['C'] = 100;
        rom['D'] = 500;
        rom['M'] = 1000;

        int n = s.size();
        int num = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int val = rom[s[i]];
            num += val;

            if (i != 0 && rom[s[i - 1]] < val) // more symbols left to scan
            {
                num -= rom[s[i - 1]];
                i--;
            }
        }

        return num;
    }
};

// TC = O(n)
// SC = O(1)