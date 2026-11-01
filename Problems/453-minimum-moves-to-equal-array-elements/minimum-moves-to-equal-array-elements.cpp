class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int minn = nums[0];

        int moves = 0;
        for (int i = 0; i < nums.size(); i++) {
           if(nums[i] != minn){
            moves += nums[i] - minn;
           }
        }
        return moves;
    }
};