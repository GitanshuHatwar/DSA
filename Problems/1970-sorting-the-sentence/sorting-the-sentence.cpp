class Solution {
public:
    string sortSentence(string s) {

        vector<string> arr(10,"");

        for (int i = 0; i < s.size(); i++) {
            string temp;
            
            while (!isdigit(s[i])) {
                temp.push_back(s[i]);
                i++;
            }
            arr[s[i] - '0'] = temp;
            i++;
        }
        string ans;
        for (int i = 0; i < 10; i++) {
            if(arr[i].length() > 0){
                ans += arr[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};