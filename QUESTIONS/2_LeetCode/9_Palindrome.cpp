class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0) return true;
        if(x < 0) return false;
       string num = to_string(x);
        size_t n = num.length();
        int n1 = n/2;

        if(n%2 == 0){
            string num1 = num.substr(0, n1);
            string num2 = num.substr(n1);
            reverse(num2.begin(), num2.end());
            return num1 == num2;
        }
        
        else{
            string num1 = num.substr(0, n1);
            string num2 = num.substr(n1+1);
            reverse(num2.begin(), num2.end());
            return num1 == num2;
        }
    }
};