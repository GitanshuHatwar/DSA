class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> neww;
        neww = nums1;
        neww.insert(neww.end(), nums2.begin(), nums2.end());

        sort(neww.begin(), neww.end());
        int size = neww.size();
        if (size % 2 != 0) {
            int mid = size / 2;
            return neww[mid];
        } else {
            int mid = size / 2;

            double mid1 = (neww[mid] + neww[mid - 1]) / 2.0;
            return mid1;
        }
    }
};