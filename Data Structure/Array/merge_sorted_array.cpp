// 88. Merge Sorted Array(Easy)

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    // base

    // int i = m;
    // for (int j = 0; j < n; j++)
    // {
    //     nums1[i] = nums2[j];
    //     i++;
    // }
    // sort(nums1.begin(), nums1.end());

    // Optimal Solution
    int end = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[end--] = nums1[i--];
        }
        else
        {
            nums1[end--] = nums2[j--];
        }
    }

    while (j >= 0)
    {
        nums1[end--] = nums2[j--];
    }
}
 
// Driver (not needed on LeetCode)
int main()
{
    vector<int> v1 = {1, 4, 5, 0, 0, 0};
    vector<int> v2 = {2, 3, 6};
    merge(v1, 3, v2, 3);
    for (int i : v1)
    {
        cout << i << " ";
    }
    return 0;
}