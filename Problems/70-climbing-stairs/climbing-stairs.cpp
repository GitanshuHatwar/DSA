class Solution {
public:
    int climbStairs(int n) {
        int a = 0 ;
        int b = 1 ;
        int step = 0 ;
        for(int i = 0 ; i < n ; i++){
            step = a + b ;
            a = b ;
            b = step ;
        }
        return step;
    }
};