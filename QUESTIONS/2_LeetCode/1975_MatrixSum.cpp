class Solution
{
public:
    long long maxMatrixSum(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), minv = INT_MAX;
        long long sum = 0, neg = 0;
        for (auto &row : matrix)
        {
            for (int e : row)
            {
                if (e < 0)
                    neg++;
                e = abs(e);
                sum += e;
                minv = min(minv, e);
            }
        }
        sum = (neg % 2 == 0) ? sum : sum - 2LL * minv;
        return sum;
    }
};