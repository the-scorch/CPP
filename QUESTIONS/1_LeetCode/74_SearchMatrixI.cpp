class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int beg = 0, end = m * n - 1; // index based on linear array
        // Binary Search - TC = O(log(n))
        while (beg <= end)
        {
            int mid = beg + (end - beg) / 2;
            int val = matrix[mid / n][mid % n]; // used only n -> visualizing as 1D Array row wise

            if (target == val)
                return true;
            else if (target > val)
                beg = mid + 1;
            else
                end = mid - 1;
        }

        return false;
    }
};

// TC = O(log(m*n))
// SC = O(1)