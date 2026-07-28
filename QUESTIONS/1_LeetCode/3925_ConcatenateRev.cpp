class Solution
{
public:
    vector<int> concatWithReverse(vector<int> &nums)
    {
        vector<int> ans;
        for (int num : nums)
        {
            ans.push_back(num);
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};

// TC = O(n)
// SC = O(1) excluding the output array