class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        int i = 1;
        int num = 0;
        while(n){
            int dig = n % 10;
            n = n / 10;
            if(dig != 0){
                sum += dig;
                num = num + dig * i;
                i *= 10;
            }
        }
        return 1LL*sum * num;
    }
};