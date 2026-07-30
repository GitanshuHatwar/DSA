class Solution {
public:
    int minOperations(string s) {
        int Zcount = 0, Ocount = 0 ;
        for (int i = 0; i < s.size(); i++) { // zeros
            if (s[i] == '1' && i % 2 == 0) {
                Zcount++;
            }
            if (s[i] == '0' && i % 2 != 0) {
                Zcount++;
            }
        }
        // ones
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0' && i % 2 == 0) {
                Ocount++;
            }
            if (s[i] == '1' && i % 2 != 0) {
                Ocount++;
            }
        }
        return min(Zcount , Ocount);
    }
};