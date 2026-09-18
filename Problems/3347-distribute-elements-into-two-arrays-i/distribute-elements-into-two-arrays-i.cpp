class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};
        
        int a = 0, j = 0;
        for (int i = 2; i < nums.size(); i++) {
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