class Solution {
public:
    bool checkString(string s) {
        bool legit = true;
        for (char c : s) {
            if (c == 'b') {
                legit = false;
            }
            if (c == 'a' && legit == false) {
                return false;
            }
        }
        return true;
    }
};