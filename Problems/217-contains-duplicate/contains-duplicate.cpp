class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int , int > freq;
        for(int n : nums){
            freq[n]++;
        }
        
        for(auto &pair : freq){
            if(pair.second != 1){
                return true;
            }
        }
        return false;
    }
};