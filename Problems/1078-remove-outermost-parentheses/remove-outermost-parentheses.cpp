class Solution {
public:
    string removeOuterParentheses(string s) {

        string ans = "";
        int sOpen = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (sOpen > 0) {
                    ans += s[i];
                }
                sOpen++;
            } else {
                sOpen--;
                if (sOpen > 0) {
                    ans += s[i];
                }
            }
        }

        return ans;
    }
};