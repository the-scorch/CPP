class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        while(n > 0){
            s += (char)('0' + (n & 1));
            n >>= 1;
        }
        string s1 = s;
        reverse(s1.begin(), s1.end());
        int nflip=0, len=s.size();
        for(int i=0; i < len; i++){
            if(s[i] != s1[i]){
                nflip++;
            }
        }
        return nflip;
    }
};