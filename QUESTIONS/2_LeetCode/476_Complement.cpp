class Solution
{
public:
    int findComplement(int num)
    {
        if (n == 0)
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