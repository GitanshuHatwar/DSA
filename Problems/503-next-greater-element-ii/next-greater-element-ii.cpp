class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for (int i = (2 * n) - 1 ; i >= 0; i--){
            int ci = i % n;
            while(st.size() && nums[ci] >= st.top()){
                st.pop();
            }
            if(st.size() && i < n){
                ans[i] = st.top();
            }
            st.push(nums[ci]);
        }
        return ans;
    }
};