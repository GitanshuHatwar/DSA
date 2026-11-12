class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int SI = 1;
        int SD = 1;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                SI++;
                SD = 1;
            }
            if (nums[i] > nums[i + 1]) {
                SD++;
                SI = 1;
            }
            if(nums[i] == nums[i+1]){
                SD = SI = 1;
            }
            ans = max(ans,max(SD, SI));
        }
        return ans;
    }
};