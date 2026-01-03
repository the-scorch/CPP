class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = (nums.size())/2;
        unordered_set<int> see;
        for(int x : nums){
            if(see.count(x)) return x;
            see.insert(x);
        }
        return -1;
    }
};