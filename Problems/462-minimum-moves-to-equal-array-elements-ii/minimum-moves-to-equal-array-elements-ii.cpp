class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int midN = nums[n/2];
        int moves = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != midN) {
                moves += abs(nums[i] - midN);
            }
        }
        return moves;
    }
};