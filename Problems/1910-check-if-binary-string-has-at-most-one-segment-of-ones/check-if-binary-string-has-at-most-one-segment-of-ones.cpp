class Solution {
public:
    bool checkOnesSegment(string s) {
        bool check = true;
        for(int i = 0 ; i < s.size()-1; i++){
            if(s[i] == '1' && s[i+1] == '0'){
               check = false; 
            }
            if(s[i+1] =='1' && check == false){
                return false;
            }
        }
        return true;
    }
};