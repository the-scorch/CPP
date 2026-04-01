class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n; // no rotation needed
        if (k == 0)
            return; // edge case

        int cnt = 0;
        for (int j = 0; cnt < n; j++)
        { // for gcd(n, k) > 1
            int i = j, tmp = nums[j];

            do
            {
                int val = nums[(i + k) % nums.size()];
                nums[(i + k) % nums.size()] = tmp;
                i = (i + k) % nums.size();
                tmp = val;
                cnt++;
            } while (i != j);
        }
    }
};