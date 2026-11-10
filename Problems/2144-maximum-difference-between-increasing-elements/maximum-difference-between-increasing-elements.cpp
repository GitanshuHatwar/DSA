class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minI = nums[0];
        int ans = -1;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] < minI){
                minI = nums[i];
            }  
            if(minI < nums[i]){
                ans = max((nums[i] - minI) , ans);
            }

        }
        return ans;
    }
};