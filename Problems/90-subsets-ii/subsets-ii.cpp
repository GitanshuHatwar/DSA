class Solution {
public:
    void getSubset(vector<int>& nums, vector<int>& ans, int i,
                   vector<vector<int>>& subsets) {
        if (i == nums.size()) {
            subsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getSubset(nums, ans, i + 1, subsets);

        ans.pop_back();

        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx++;
        }

        getSubset(nums, ans, idx, subsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> subsets;
        vector<int> ans;

        getSubset(nums, ans , 0 ,subsets);
        return subsets;
    }
};