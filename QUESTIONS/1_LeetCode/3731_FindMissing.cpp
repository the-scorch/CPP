class Solution
{
public:
    vector<int> findMissingElements(vector<int> &nums)
    {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int mn = nums.front(), mx = nums.back();

        int j = 0;
        for (int i = mn; i <= mx; i++)
        {
            if (i != nums[j])
            {
                ans.push_back(i);
            }
            else
            {
                j++;
            }
        }

        return ans;
    }
};

// TC = O(R) - R = mx-mn+1
// SC = O(1) - Auxiliary Space, O(n) - Including Output Array