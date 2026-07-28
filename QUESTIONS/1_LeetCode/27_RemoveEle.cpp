class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int n = nums.size();

        // nums[i] <= 50, but val <= 100
        if (val > 50)
        {
            return n;
        }

        int i = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};

// TC = O(n);
// SC = O(1)