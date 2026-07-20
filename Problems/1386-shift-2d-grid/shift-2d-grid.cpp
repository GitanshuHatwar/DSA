class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& num, int k) {
        
        int n = num.size();
        int m = num[0].size();
        while (k--) {
            vector<vector<int>> ans(n, vector<int>(m));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {

                    if (i == n - 1 && j == m - 1) {
                        ans[0][0] = num[i][j];
                    } else if (j == m - 1) {
                        ans[i + 1][0] = num[i][j];
                    } else {
                        ans[i][j + 1] = num[i][j];
                    }
                }
            }
            num = ans;
        }
        return num;
    }
};