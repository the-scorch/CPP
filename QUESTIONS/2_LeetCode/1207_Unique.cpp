class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mpp;
        for(int i : arr){
            mpp[i]++;
        }
        set<int> freq;
        for(auto it : mpp){
            freq.insert(it.second);
        }
        if(mpp.size() == freq.size()){
            return true;
        }
        return false;
    }
};