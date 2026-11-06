class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int found = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > nums[(i+1)%n]){
                found++;
            }
        }
        if(found <=1){
            return true;
        }
        return false;
    }
};