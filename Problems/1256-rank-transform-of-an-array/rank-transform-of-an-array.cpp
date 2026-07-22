class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        for (int x : arr) {
            mp[x] = 0;
        }
        int rank = 1;
        for (auto& p : mp) {
            p.second = rank++;
        }
        vector<int> ans ;
        for (int i : arr) {
            ans.push_back(mp[i]);
        }

        return ans;
    }
};