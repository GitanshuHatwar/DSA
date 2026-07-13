class Solution {
public:
    int gcd(int a, int b) {
        int gcd = 1;
        while (b) {
            int temp = b;
            b = a % b ;
            a = temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int Min = nums[0];
        int Max = nums[0];

        for (int i = 0; i < n; i++) {
            Min = min(Min, nums[i]);
            Max = max(Max, nums[i]);
        }
        return gcd(Min, Max);
    }
};