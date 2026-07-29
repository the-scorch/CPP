class Solution
{
public:
    vector<int> recoverOrder(vector<int> &order, vector<int> &friends)
    {
        vector<int> ans;
        for (int o : order)
        { // n
            if (binary_search(friends.begin(), friends.end(), o))
            { // logm
                ans.push_back(o);
            }
        }

        return ans;
    }
};

// TC = O(nlogm)
// SC = O(n), Auxillary Space = O(1)