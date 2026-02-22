class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x == 0)
            return true;
        if (x < 0)
            return false;

        string num = to_string(x);
        int n = num.size();
        int n1 = n / 2;

        string num1 = num.substr(0, n1); // left part
        string num2;                     // right part
        if (n % 2 == 0)
            num2 = num.substr(n1);
        else
            num2 = num.substr(n1 + 1);
        reverse(num2.begin(), num2.end());

        return num1 == num2;
    }
};