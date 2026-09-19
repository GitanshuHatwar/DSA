class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> freq;
        for (auto num : nums) {
            freq[num]++;
        }
        sort(nums.begin(), nums.end(), [&freq](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;//descending order
            }
            return freq[a] < freq[b];
        });
        return nums;
    }
};