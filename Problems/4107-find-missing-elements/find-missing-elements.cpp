class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans = {};
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int st = nums[0];
        int end = nums[n - 1];
        int i = 0;

        while (st < end) {
            if (nums[i] == st) {
                i++;
                st++;
            } else {
                ans.push_back(st);
                st++;
            }
        }

        return ans;
    }
};