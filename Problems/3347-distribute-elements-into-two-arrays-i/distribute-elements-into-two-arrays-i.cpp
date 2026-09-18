class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1 = {0};
        vector<int> arr2 = {0};
        vector<int> result;

        arr1[0] = nums[0];
        arr2[0] = nums[1];
        int a = 0, j = 0;
        for (int i = 2; i < n; i++) {
            if (arr1[a] > arr2[j]) {
                arr1.push_back(nums[i]);
                a++;
            } else {
                arr2.push_back(nums[i]);
                j++;
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};