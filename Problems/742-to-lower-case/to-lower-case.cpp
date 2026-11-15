class Solution {
public:
    string toLowerCase(string s) {
        string newS = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                char nc = c + 32;
                newS += nc;
            } else {
                newS += c;
            }
        }
        return newS;
    }
};