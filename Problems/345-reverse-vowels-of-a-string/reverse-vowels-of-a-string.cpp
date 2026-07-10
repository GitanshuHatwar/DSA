class Solution {
public:
    string reverseVowels(string s) {
        int st = 0;
        int end = s.length() - 1;

        while (st < end) {
            char first = tolower(s[st]);
            char sec = tolower(s[end]);;

            if (first != 'a' && first != 'e' && first != 'i' && first != 'o' &&
               first != 'u') {
                st++;
            } else if (sec != 'a' && sec != 'e' && sec != 'i' &&
                       sec != 'o' && sec != 'u') {
                end--;
            } else {
                swap(s[st++], s[end--]);
            }
        }
        return s;
    }
};