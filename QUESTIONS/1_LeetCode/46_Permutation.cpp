class Solution
{
private:
    void solve(int idx, vector<int> nums, vector<vector<int>> &res)
    {
        if (idx >= nums.size())
        {
            res.push_back(nums);
            return;
        }

        for (int j = idx; j < nums.size(); j++)
        {
            swap(nums[idx], nums[j]);
            solve(idx + 1, nums, res);
            swap(nums[j], nums[idx]); // Backtracking
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return {nums};
        }
        if (nums.size() == 2)
        {
            vector<int> nums1 = nums;
            swap(nums1[0], nums1[1]);

            return {nums, nums1};
        }

        vector<vector<int>> res;
        solve(0, nums, res);

        return res;
    }
};