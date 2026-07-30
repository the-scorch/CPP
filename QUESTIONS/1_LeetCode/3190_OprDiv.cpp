class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int mno = 0;
        for (int num : nums)
        {
            int b = ceil((num * 1.0) / 3) * 3 - num;
            mno += min(num % 3, b);
        }

        return mno;
    }
};

// TC = O(n)
// SC = O(1)