class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> neww(m + n);

        for (int i = 0; i < n; i++) {
            neww[i] = nums1[i];
        }
        for (int j = 0; j < m; j++) {
            neww[n + j] =  nums2[j];
        }
        sort(neww.begin(), neww.end());

        if ((n + m) % 2 != 0) {
            int mid = (n + m) / 2;
            return neww[mid];
        } else {
            int mid = (n + m) / 2;

            double mid1 =  (neww[mid] + neww[mid-1]) / 2.0;
            return mid1;
        }
    }
};