class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0, col = n - 1; // Start Point = 0,4 OR 4,0
        while (row < m && col >= 0)
        {
            int val = matrix[row][col];

            if (target == val)
                return true;
            else if (target > val)
                row++;
            else
                col--;
        }

        return false;
    }
};

// TC = O(m+n)
// SC = O(1)