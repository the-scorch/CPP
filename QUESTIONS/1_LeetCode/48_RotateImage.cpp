class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int n1 = (n - 1) / 2;

        if (n == 1)
            return;

        int beg = 0;     // start index
        int end = n - 1; // last index

        while (beg < end)
        { // O(n/2), n/2 = layers in matrix
            int i = beg;
            while (i < end)
            { // O(n/2)
                int &one = matrix[beg][i];
                int &two = matrix[i][end];
                int &thr = matrix[end][end - (i - beg)]; // distance inside layer = i-beg
                int &fur = matrix[end - (i - beg)][beg];

                int temp = one;
                one = fur;
                fur = thr;
                thr = two;
                two = temp;

                i++;
            }
            beg++;
            end--;
        }
    }
};

// TC = O(n^2)
// SC = O(1)