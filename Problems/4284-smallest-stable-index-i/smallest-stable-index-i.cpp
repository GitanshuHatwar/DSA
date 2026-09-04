class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        int mn = INT_MAX;
        vector<int> suff(n);

        for (int i = n - 1; i >= 0; i--) {
            mn = min(mn, nums[i]);
            suff[i] = mn;
        }

        int mx = INT_MIN;

        for (int j = 0; j < n; j++) {
            mx = max(mx, nums[j]);

            int solution = mx - suff[j];

            if (solution <= k) {
                return j;
            }
        }

        return -1;
    }
};