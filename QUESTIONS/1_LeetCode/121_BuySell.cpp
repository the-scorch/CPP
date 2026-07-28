class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int prf = 0;
        int mn = INT_MAX;
        for (int prc : prices)
        {
            mn = min(prc, mn);
            prf = max(prc - mn, prf);
        }

        return prf;
    }
};

// TC = O(n)
// SC = O(1)