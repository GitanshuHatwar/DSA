#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        bool isPalindrome(string s) {
        string ans = "";
        
        for (char c : s) {
            if (isalpha(c)) {
                ans += tolower(c);
            }
        }
        for(char j : ans){
            cout<<j;
        }
        int n = ans.length();
        int st = 0, end = n - 1 ;
        while (st < end) {
            if (ans[st] == ans[end]) {
                st++;
                end++;
            } else {
                return false;
            }
        }

        return true;
    }
};


// Driver (not needed on LeetCode)
int main() {
    Solution sc ;
    string s = "A man, a plan, a canal: Panama";
    cout<<sc.isPalindrome(s);
    return 0;
}