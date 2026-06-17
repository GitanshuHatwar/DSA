#include <iostream>
#include <vector>
using namespace std; 

int maxArea(vector<int> &height)
{
    int n = height.size();

    int h = 0;
    int maxW = 0;
    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        int width = right - left;
        h = min(height.at(right), height.at(left));

        maxW = max(maxW, (width * h));

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxW;
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(height);
}