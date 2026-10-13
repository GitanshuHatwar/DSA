class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            // int val = nums[i];
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        long long sumS = 0;
        for (int j = 0; j < (n / 2); j++) {
            sumS += nums[j];
        }
        for (int k = (n / 2); k < n; k++) {
            sumS = sumS - nums[k];
        }
        return abs(sumS);
    }
};