class Solution {
public:
    int fib(int n) {
        int fibo = 0;
        if(n == 0 || n == 1){
            return n;
        }
        int cur = 1;
        int prev = 0;
        for(int i = 1 ; i < n;i++){
            fibo = cur + prev;
            prev = cur ;
            cur = fibo;
        }
        return fibo;
    }
};