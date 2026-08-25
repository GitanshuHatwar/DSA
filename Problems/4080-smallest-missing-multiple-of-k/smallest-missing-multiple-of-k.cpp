class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int i = 1;
        while (i < 102) {
            if (s.count(k * i)) {
                i++;
            } else
                {return k * i;}
        }
        return -1;
    }
};