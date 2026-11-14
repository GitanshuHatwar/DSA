class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;
        for (int s = l; s <= r; s++) {
            for (int i = 0; i + s <= n; i++) {
                int sum = 0;
                for (int j = i; j < i + s; j++) {
                    sum += nums[j];
                }
                if (sum > 0 && sum < minSum) {
                    minSum = sum;
                }
            }
        }
        return minSum == INT_MAX ? -1 : minSum;
    }
};