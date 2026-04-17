// TC = O(n), n = length of chars
// SC = O(1)

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        if (chars.size() == 1)
            return 1;

        int i = 0; // reader pointer
        int j = 0; // writer pointer
        while (i < chars.size())
        {
            chars[j++] = chars[i]; // writes the character

            int cnt = 0;
            int k = i;
            while (k < chars.size() && chars[i] == chars[k])
            {
                cnt++; // counter of character
                k++;
            }

            if (cnt > 1)
            {
                string cnt1 = to_string(cnt);
                for (char c : cnt1)
                {
                    chars[j++] = c;
                }
            }

            i = k; // start of next unique character
        }

        return j;
    }
};