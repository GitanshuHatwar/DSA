class Solution {
public:
    int numrange(int n) {
        if(n == 0){
            return 0;
        }
        int minn = 9;
        int maxx = 0;

        while (n) {
            int digit = n % 10;
            minn = min(minn, digit);
            maxx = max(maxx, digit);
            n = n / 10;
        }
        return (maxx - minn);
    }
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int maxx = 0;
        int sum = 0 ; 
        for (int i = 0; i < n; i++) {
            maxx = max(maxx , numrange(nums[i]));
        }

        for(int j = 0; j < n ; j++){
            if(numrange(nums[j]) == maxx){
                sum += nums[j];
            }
        }
        return sum;
    }
};