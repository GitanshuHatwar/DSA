#include <bits/stdc++.h>
using namespace std;

int recbinary(vector<int> &nums, int num, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] > num)
        {
            return recbinary(nums, num, start, mid - 1);//if smaller
        }
        else if (nums[mid] < num)
        {
            return recbinary(nums, num, mid + 1, end);//if larger
        }
        else
        {
            return mid;
        }
    }
    return -1;//not found
}


int binary(vector<int> &nums, int num)
{
    int start = 0;
    int end = nums.size() - 1;
    return recbinary(nums, num, start, end);// recursive sorting function
}

int main()
{
    vector<int> nums = {1, 2, 4, 6, 8, 9, 11, 14, 17, 19};
    int num;
    cout << "Enter the number you want to search";
    cin >> num;
    cout << "The value is at " << binary(nums, num) << endl;//binary function call
    return 0;
}