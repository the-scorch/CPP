class Solution
{
public:
    double check_diff(double t_y, vector<vector<int>> &squares)
    {
        double lower = 0, higher = 0, zero = 0;
        for (auto &s : squares)
        {
            double y = s[1], l = s[2];
            higher += max(zero, (y + l - max(y, t_y)) * l);
            lower += max(zero, (min(y + l, t_y) - y) * l);
        }
        return higher - lower;
    }
    double separateSquares(vector<vector<int>> &squares)
    {
        double low = 0, high = 1e9;
        double e = 0.00001;
        while (low + e < high)
        {
            double mid = (high + low) / 2;
            double diff = check_diff(mid, squares);
            if (diff > 0)
                low = mid;
            else
                high = mid;
        }
        return high;
    }
};