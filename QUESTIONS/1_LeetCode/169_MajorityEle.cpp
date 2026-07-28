class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int cnd = 0;
        int cnt = 0;
        for (int num : nums)
        {
            if (cnt == 0)
            { // choose the candidate
                cnd = num;
            }

            if (cnd == num)
            { // same value
                cnt++;
            }
            else
            { // different value
                cnt--;
            }
        }

        return cnd;
    }
};

// Boyer-Moore Voting Algorithm
// TC = O(n)
// SC = O(1)