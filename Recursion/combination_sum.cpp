#include <vector>


class Solution
{
public:
    vector<vector<int>> ans; // 2 D vector to store our answer
    void solve(int i, vector<int> &arr, vector<int> &temp, int target)
    {

        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }

        if (i == arr.size())
            return;

        solve(i + 1, arr, temp, target);
---
        temp.push_back(arr[i]); // including ith element
        solve(i, arr, temp, target - arr[i]);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target)
    {

        vector<int> temp;

        solve(0, arr, temp, target); // calling function, and see we start from index zero

        return ans; // finally return the answer array
    }
};