// #solved using Kadane's algorithm

#include <iostream>
#include <Vector>
#include<climits>
using namespace std;

int maxsum(vector<int> &nums)
{
    int cursum = 0;
    int maxsum = INT_MIN;

    for (int n : nums)
    {
        cursum += n;
        maxsum = max(cursum, maxsum);

        if (cursum < 0)
        {
            cursum = 0;
        }
    }

    return maxsum;
}
int main()
{
    vector<int> nums = {-11,-21, -31, -4,-51};
    cout << maxsum(nums);
}