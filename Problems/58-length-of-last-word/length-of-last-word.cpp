class Solution {
public:
    int lengthOfLastWord(string s) {
        int Count = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                Count++;
            }
            if(s[i] == ' ' && Count > 0){
                return Count;
            }
            
        }
        return Count;
    }
};