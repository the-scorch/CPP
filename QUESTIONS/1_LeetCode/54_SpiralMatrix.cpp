class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int ttl = n * m; // total elements
        int cnt = 0;

        vector<int> A;
        int top = 0, lef = 0, bot = n - 1, rig = m - 1;
        while (cnt < ttl)
        {
            // left to right - row
            for (int i = lef; i <= rig && cnt < ttl; i++)
            {
                A.push_back(matrix[top][i]);
                cnt++;
            }
            top++;

            // top to bottom - col
            for (int i = top; i <= bot && cnt < ttl; i++)
            {
                A.push_back(matrix[i][rig]);
                cnt++;
            }
            rig--;

            // right to left - row
            for (int i = rig; i >= lef && cnt < ttl; i--)
            {
                A.push_back(matrix[bot][i]);
                cnt++;
            }
            bot--;

            // bottom to top - col
            for (int i = bot; i >= top && cnt < ttl; i--)
            {
                A.push_back(matrix[i][lef]);
                cnt++;
            }
            lef++;
        }

        return A;
    }
};

// TC = O(n*m)
// SC = O(n*m)