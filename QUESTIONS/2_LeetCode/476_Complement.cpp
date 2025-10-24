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
        unsigned int one = (1u << bits) - 1;
        return one ^ num;
    }
};
// same as Q.1009