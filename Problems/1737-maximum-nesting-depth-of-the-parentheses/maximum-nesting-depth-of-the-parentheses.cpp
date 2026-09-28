class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxC = INT_MIN;
        for(char c : s){
            if(c == '('){
                count++;
            }else if(c == ')'){
                count--;
            }
            maxC = max(maxC , count);
        }
        return maxC;
    }
};