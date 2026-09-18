class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int ,int> freq;
        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }
        for(auto j : freq){
            if(j.second %2 != 0){
                return 0;
            }
        }
        return 1;
    }
};