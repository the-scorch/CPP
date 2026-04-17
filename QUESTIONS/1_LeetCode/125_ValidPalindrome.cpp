class Solution
{
public:
    bool isPalindrome(string s)
    {
        string S1 = "";
        if (S1 == s)
            return true; // empyt string is always palindrome

        for (char &c : s)
        {
            if (isupper(c))
                c = tolower(c); // converting uppercase letters to lowercase
        }
        int i = 0;
        while (i < s.size())
        {
            if (islower(s[i]) || isdigit(s[i]))
                S1.push_back(s[i]); // removing non-alphanumeric characters
            i++;
        }

        int j = 0, k = S1.size() - 1;
        while (j < k)
        {
            if (S1[j] != S1[k])
            {
                return false;
            }
            else
            {
                j++;
                k--;
            }
        }

        return true;
    }
};