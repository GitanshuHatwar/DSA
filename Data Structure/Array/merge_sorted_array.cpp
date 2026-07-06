// 88. Merge Sorted Array(Easy)

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = n;
    for (int j = 0; j < n; j++)
    {
        nums1[i] = nums2[j];
        i++;
    }
    sort(nums1.begin(), nums1.end());
}

// Driver (not needed on LeetCode)
int main()
{
    vector<int> v1 = {1, 5, 4, 0, 0, 0};
    vector<int> v2 = {2, 6, 3};
    merge(v1, 6, v2, 3);
    for (int i : v1)
    {
        cout << i << " ";
    }
    return 0;
}