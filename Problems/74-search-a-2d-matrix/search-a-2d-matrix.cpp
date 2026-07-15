class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int st = 0, end = m - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target >= matrix[mid][0] && target <= matrix[mid][n - 1]) {
                int str = 0, endr = n - 1;
                while (str <= endr) {
                    int midr = str + (endr - str) / 2;
                    if (target == matrix[mid][midr]) {
                        return true;
                    } else if (target > matrix[mid][midr]) {
                        str = midr + 1;
                    } else {
                        endr = midr - 1;
                    }
                }
                return false;

            } else if (target >= matrix[mid][n - 1]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};