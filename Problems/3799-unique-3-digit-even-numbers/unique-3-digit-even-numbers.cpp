class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> fq (10,0);
        int res = 0 ;

        for(auto nums : digits){
            fq[nums]++;
        }

        for(int i = 1 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ;j++){
                for(int k = 0 ; k < 9 ;k+=2){
                    if(fq[i] == 0){
                        continue;
                    }
                    if(fq[j] < 1 + (i == j)){
                        continue;
                    }
                    if(fq[k] <  1 + (i==k) + (k==j)){
                        continue;
                    }
                    res++;
                }
            }
        }
        return res;
    }
};