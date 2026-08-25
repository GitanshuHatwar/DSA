class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int even[26] = {0};
        int odd[26] = {0};

        int even2[26] = {0};
        int odd2[26] = {0};

        for (int i = 0; i < s1.size(); i++) {
            if (i % 2 == 0) {
                even[s1[i] - 'a']++;
            } else {
                odd[s1[i] - 'a']++;
            }
        }
        for (int i = 0; i < s2.size(); i++) {
            if (i % 2 == 0) {
                even2[s2[i] - 'a']++;
            } else {
                odd2[s2[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (even[i] != even2[i] || odd[i] != odd2[i]) {
                return false;
            }
        }
        return true;
    }
};