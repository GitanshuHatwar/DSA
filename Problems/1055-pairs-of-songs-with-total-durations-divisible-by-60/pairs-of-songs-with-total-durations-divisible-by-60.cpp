class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int, int> cnt;
        int res = 0;

        for (int t : time) {
            int r = t % 60;
            int need = (60 - r)%60;

            res += cnt[need];
            cnt[r]++;
        }

        return res;
    }
};