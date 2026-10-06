class Solution {
public:
    int minAddToMakeValid(string s) {
        int cOpen = 0;
        int cClose = 0;
        int ans = 0;
        for(char c :s){
            if(c == '('){
                cOpen++;
            }else{
                if(cOpen < 1){
                    ans++;
                }else{
                    cOpen--;
                }
                cClose++;
            }
        }
        return ans+cOpen;
    }
};