class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for (char c : word) {
            ++freq[c - 'a'];
        }
        sort(freq.rbegin(), freq.rend());// rbegin and rend for non-increasing order
        int pushes=0;

        for(int i = 0 ; i < 26 ; i++){
            pushes += (i/8 + 1)*freq[i];
        }
        return pushes;
    }
};