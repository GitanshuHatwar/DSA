class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> v;
        vector<int> ans;
        int a, b;
        int n = grid.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
                if (v.find(grid[i][j]) != v.end()) {
                    a = grid[i][j];
                    ans.push_back(a);
                }

                v.insert(grid[i][j]);
            }
        }
        int expsum = (n * n) * (n * n + 1) / 2;
        b = (expsum + a) - sum;
        ans.push_back(b);

        return ans;
    }
};