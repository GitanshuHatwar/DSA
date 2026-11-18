class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int XorA = 0;
        int XorB = 0;
        for (int a : arr1) {
            XorA = XorA ^ a;
        }
        for (int b : arr2) {
            XorB = XorB ^ b;
        }
        return XorA & XorB;
    }
};