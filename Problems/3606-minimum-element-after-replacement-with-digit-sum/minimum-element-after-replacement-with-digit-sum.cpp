class Solution {
public:
    int minElement(vector<int>& nums) {
        int minN = INT_MAX;
        for(int a : nums){
            int sum = 0;
            while(a){
                int dig = a%10;
                sum += dig;
                a = a/10;
            }
            minN = min(minN , sum);
        }
        return minN;
    }
};