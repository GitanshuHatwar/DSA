class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int Ls[3] = {-1, -1, -1};
        for (int i = 0; i < s.size(); i++) {
            Ls[s[i] - 'a'] = i;
            if (Ls[0] != -1 && Ls[1] != -1 && Ls[2] != -1) {
                count = count + (1 + min({Ls[0], Ls[1], Ls[2]}));
            }
        }
        return count;
    }
};