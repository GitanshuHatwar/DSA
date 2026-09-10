class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int , int> freq;
        for( int n : nums){
            if(n%2 == 0){
                freq[n]++;
            }
        }
        int ans = -1;
        int maxFreq = 0;

        for(auto& [num , frq]: freq){
            if(frq > maxFreq || frq == maxFreq && num < ans){
                ans = num;
                maxFreq = frq;
            }
        }
        return ans;

    }
};