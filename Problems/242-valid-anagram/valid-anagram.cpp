class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freqA(26, 0);
        for (char ch : s) {
            freqA[ch - 'a']++;
        }

        vector<int> freqB(26, 0);
        for (char chb : t) {
            freqB[chb - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            if (freqA[i] != freqB[i]) {
                return false;
            }
        }
        return true;
    }
};