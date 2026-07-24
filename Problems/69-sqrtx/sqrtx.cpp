class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
            return x;
        }

        int st = 0, end = x-1;
        int mid = -1;
        while (st <= end) {
            mid = st + (end - st) / 2;
            long long sqrt = 1LL*mid * mid ;
            if((sqrt) == x){
                return mid;
            }else if(sqrt > x){
                end = mid -1 ;
            }else{
                st = mid +1;
            }
        }
        return end;
    }
};