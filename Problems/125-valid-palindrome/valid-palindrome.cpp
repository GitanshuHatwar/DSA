class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        

        for (char c : s) {
            if (isalnum(c)) {
                s1 += tolower(c);
            }
        }
        int st = 0;
        int end = s1.length() - 1;
        while (st < end) {
            if (s1[st] == s1[end]) {
                st++;
                end--;
            } else {
                return false;
            }
        }

        return true;
    }
};