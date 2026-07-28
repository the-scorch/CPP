class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> stt;
        stt.reserve(nums.size()); // gives size to stop rehasing for every new value

        for (int num : nums)
        {
            if (!stt.insert(num).second)
            { // only one hash look
                return true;
            }
            // insert() => first = iterator to value, second = bool as value insertion
        }

        return false;
    }
};

// TC = O(n^2), O(n)
// SC = O(n)