class Solution
{
private:
    void solve(int i, vector<int> nums, vector<int> out, vector<vector<int>> &ans)
    {
        // Base Case
        if (i >= nums.size())
        {
            ans.push_back(out);

            return;
        }

        // Exclude
        solve(i + 1, nums, out, ans);

        // Include
        int a = nums[i];
        out.push_back(a);
        solve(i + 1, nums, out, ans);
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> out;
        solve(0, nums, out, ans);

        return ans;
    }
};