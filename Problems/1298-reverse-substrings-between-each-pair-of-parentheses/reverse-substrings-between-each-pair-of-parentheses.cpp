class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> idx;
        string res;
        for (char c : s) {
            if (c == '(') {
                idx.push(res.length());
            } else if (c == ')') {
                int st = idx.top();
                idx.pop();
                reverse(res.begin() + st, res.end());
            } else {
                res += c;
            }
        }
        return res;
    }
};