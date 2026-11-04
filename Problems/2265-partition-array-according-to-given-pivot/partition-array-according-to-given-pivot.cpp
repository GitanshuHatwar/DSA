class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        vector<int> middle;
        vector<int> greater;
        for (int a : nums) {
            if (a < pivot) {
                ans.push_back(a);
            } else if (a > pivot) {
                greater.push_back(a);
            } else {
                middle.push_back(a);
            }
        }
        ans.insert(ans.end(), middle.begin(), middle.end());
        ans.insert(ans.end(), greater.begin(), greater.end());
        return ans;
    }
};