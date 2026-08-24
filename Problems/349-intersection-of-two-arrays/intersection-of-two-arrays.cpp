class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> myset(nums1.begin(),nums1.end());
        vector<int> result;

        for(int num : nums2){
            if(myset.find(num) != myset.end()){
                result.push_back(num);
                myset.erase(num);
            }
        }
        return result;
      
    }
};