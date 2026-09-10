class Solution {
public:
    long long countCommas(long long n) {
        long long res = 0;
        long long p = 1000;
        if(n < 1000){
            return 0;
        }
        while(p<=n){
            res += n-p +1;
            p  = p * 1000;
        }
        return res;
    }
};