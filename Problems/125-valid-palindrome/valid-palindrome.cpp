class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";

        for (char c : s) {
            if (isalnum(c)) {
                ans += tolower(c);
            }
        }
        int n = ans.length();
        int st = 0, end = n - 1 ;
        while (st < end) {
            if (ans[st] == ans[end]) {
                st++;
                end--;
            } else {
                return false;
            }
        }

        return true;
    }
};