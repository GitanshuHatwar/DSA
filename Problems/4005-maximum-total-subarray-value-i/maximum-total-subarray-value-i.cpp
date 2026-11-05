class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxN = nums[0];
        long long minN = nums[0];
        for(int i : nums){
            maxN = max(maxN , (long long)i);
            minN = min(minN , (long long)i);
        }
        return (maxN-minN)*k;
    }
};