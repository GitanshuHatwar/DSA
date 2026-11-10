#include <string>
#include <bitset>

class Solution {
public:
    bool isPalindromic(std::string s) {
        std::string str = "";

        //Convert each character to an 8-bit binary string and concatenate;
        for (char c : s) {
            str +=bitset<8>(c).to_string();
        }

        // Check for palindrome
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
