class Solution {
public:
    int prod(int num) {
        int sum = 1;
        while (num) {
            int dig = num % 10;
            sum *= dig;
            num = num / 10;
        }
        return sum;
    }
    int smallestNumber(int n, int t) {
        for (int i = n; i < n + 10; i++) {
            if(prod(i)%t == 0){
                return i;
            }  
        }
        return -1;
    }
};