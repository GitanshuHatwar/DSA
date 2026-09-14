class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int temp = n ;
        while (n) {
            int dig = n % 10;
            rev = rev * 10 + dig;
            n = n / 10;
        }
        int maxx = max(temp , rev);
        int minn = min(temp , rev);
        return maxx - minn;
    }   
};