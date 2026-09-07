class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> neww(m + n);
         neww = nums1;
        neww.insert(neww.end(), nums2.begin(), nums2.end());

        sort(neww.begin(), neww.end());

        if ((n + m) % 2 != 0) {
            int mid = (n + m) / 2;
            return neww[mid];
        } else {
            int mid = (n + m) / 2;

            double mid1 = (neww[mid] + neww[mid - 1]) / 2.0;
            return mid1;
        }
    }
};