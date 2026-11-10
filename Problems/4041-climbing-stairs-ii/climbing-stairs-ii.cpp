class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        int prev2 = 0, prev1 = 0, prev = 0;
        for (int i = 0; i < n; ++i) {
            // calculate the best from previous 3 steps;
            int nxt = min({prev2 + 9, prev1 + 4, prev + 1}) + costs[i];
            prev2 = prev1;
            prev1 = prev;
            prev = nxt;
        }
        return prev;
    }
};