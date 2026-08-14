class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0 ;
        int ans = 0 ;
        unordered_map<int , int> freq;

        for(int i = 0 ; i < s.size(); i++){
            freq[s[i]]++;
            while(freq[s[i]] > 2){
                freq[s[left]]--;
                left++;
            }
            ans = max(ans , i - left +1);
        }
        return ans;
    }
};