class Solution
{
public:
    int findComplement(int num)
    {
        if (num == 0) // edge case
        {
            return 1;
        }
        int bits = 0, num1 = num;
        while (num1 > 0)
        {
            bits++;
            num1 >>= 1;
        }
        unsigned int one = (1u << bits) - 1; // 1<<3 = 1000, minus 1 = 0111 (all 1s mask)
        return one ^ num;                    // 0111 ^ 101 = 010
    }
};
// same as Q.1009