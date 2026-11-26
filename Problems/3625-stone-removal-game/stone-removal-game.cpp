class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }

        int remove = 10;
        bool ans = true;;
        // n = n - remove;
        // remove--;
        while (remove) {
            if (n < remove) {
                if (ans == true) {
                    return false;
                } else {
                    return true;
                }
            }
            n = n - remove;
            remove--;
           ans = ans ? false : true;

        }
        return true;
    }
};