class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) {
            return false;
        }

        int remove = 10;
        int chance = 1;
        n = n - remove;
        remove--;
        while (remove) {
            if (n < remove) {
                if (chance % 2 == 0) {
                    return false;
                } else {
                    return true;
                }
            }
            n = n - remove;
            remove--;
            chance++;
        }
        return true;
    }
};