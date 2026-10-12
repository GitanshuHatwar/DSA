
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        
        const long long MOD = 1e9 + 7;
        int count[30] = {};
        for (int n : nums) {
            for (int b = 0; b < 30; b++) {
                count[b] += (n >> b) & 1;
            }
        }

        long long total = 0;

        for (int i = 0; i < k; i++) {
            long long row = 0;

            for (int b = 0; b < 30; b++) {
                if (count[b] > i) {
                    row |= 1LL << b;
                }
            }

            total = (total + row * row) % MOD;
        }

        return total;
    }
};
