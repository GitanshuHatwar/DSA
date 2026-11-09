class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n = words.size();
        string ans ="";
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (char c : words[i]) {
                // int ch = c - 97;
                sum += weights[c - 97];
            }
            int r = sum % 26;
            char w = (26 - r) + 96;
            ans += w;
        }
        return ans;
    }
};