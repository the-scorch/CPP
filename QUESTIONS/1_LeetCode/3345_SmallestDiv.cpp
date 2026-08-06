class Solution
{
public:
    int smallestNumber(int n, int t)
    {
        int ans = 0;

        while (true)
        { // O(m)
            int prd = 1, n1 = n;
            ;
            while (n1)
            {                    // O(logn)
                int a = n1 % 10; // gets the digit
                prd *= a;        // adds to product
                n1 /= 10;
            }

            if (prd % t == 0)
            {
                ans = n;
                break;
            }

            n++;
        }

        return ans;
    }
};

// TC = O(mlogn)
// SC = O(logn)