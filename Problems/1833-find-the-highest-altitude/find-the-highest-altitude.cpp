class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxH = 0;
        for(int i = 0 ; i < gain.size() ;i++){
            int height = height + gain[i];
            maxH = max(height, maxH);
        }
        return maxH;
    }
};