class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>& dig = digits;
        int n = dig.size();
        if (dig[n-1] != 9) {
            dig[n-1]++;
            return dig;
        }
        else{
            while(n >0 && digits[n-1] == 9){
                digits[n-1] = 0;
                n--;
            }
            if(n == 0){
                dig.insert(dig.begin(), 1);
            }
            else{
                dig[n-1]++;
            }
            return dig;
        }
        return {};
    }
};