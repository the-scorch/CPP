class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int jval = target - nums[i];
            if (mpp.count(jval))
            {
                return {i, mpp[jval]};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};