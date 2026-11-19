class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());

        int c1 = nums[n - 2] - nums[0];
        int c2 = nums[n - 1] - nums[1];
        int c3 = nums[n] - nums[2];

        return min({c1, c2, c3});
    }
};