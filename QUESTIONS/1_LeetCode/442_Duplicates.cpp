class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> dup;
        for (int i : nums)
        {
            int ind = abs(i) - 1;
            if (nums[ind] < 0)
            {
                dup.push_back(abs(i));
            }
            else
            {
                nums[ind] = -nums[ind];
            }
        }
        return dup;
    }
};