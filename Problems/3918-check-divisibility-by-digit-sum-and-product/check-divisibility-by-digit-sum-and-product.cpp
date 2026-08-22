class Solution {
public:
    bool checkDivisibility(int n) {
        int digsum = 0;
        int prodsum = 1;
        int temp = n;
        while (n) {
            int dig = n % 10;
            digsum += dig;
            prodsum = prodsum * dig;
            n = n / 10;
        }
        if (temp % (digsum + prodsum) == 0) {
            return true;
        }
        return false;
    }
};