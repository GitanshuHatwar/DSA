class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int , int> freq;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] %2 == 0){
                freq[nums[i]]++;
            }
        }
        int ans = -1;
        int maxFreq = 0;

        for(auto [num , frq]: freq){
            if(frq > maxFreq || frq == maxFreq && num < ans){
                ans = num;
                maxFreq = frq;
            }
        }
        return ans;

    }
};