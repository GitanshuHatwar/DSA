class Solution {
public:
    string toLowerCase(string s) {
        string newS = "";
        for(char c : s ){
            if(c > 64 && c < 91){
                char nc = c + 32;
                newS += nc;
            }
            else{
                newS += c;
            }
        }
        return  newS;
    }
};