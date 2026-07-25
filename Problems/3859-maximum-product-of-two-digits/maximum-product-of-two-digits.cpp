class Solution {
public:
    int maxProduct(int n) {
        vector<int>sorted;
        int dig = 0;
        while(n){
            int dig = n % 10 ;
            sorted.push_back(dig);
            n = n / 10;
        }
        sort(sorted.begin(),sorted.end());
        int i = sorted.size() - 1;

        return  sorted[i] * sorted[i-1];
        
    }
};