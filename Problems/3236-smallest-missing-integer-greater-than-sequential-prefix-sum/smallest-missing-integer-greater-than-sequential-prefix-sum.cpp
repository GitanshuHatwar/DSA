class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        bool flag = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1 && flag) {
                sum += nums[i];
            } else {
                flag = false;
            }
        }
        while (find(nums.begin(), nums.end(), sum) != nums.end()) {
            sum++;
        }
        return sum;
    }
};