class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size() > k){
            string new_s = "";
            int sum = 0;
            for(int i = 0 ; i < s.size(); i++){
                int val = s[i] - '0';
                sum += val;
                if((i+1)%k == 0 || i == s.size() - 1){
                    new_s += to_string(sum);
                    sum = 0;
                }
            }
            s = new_s;
        }
        return s;
    }
};