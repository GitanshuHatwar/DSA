#include <iostream>
#include <vector>
using namespace std;

void revv(vector<int> &nums)
{
    int end = nums.size() - 1;
    int temp;
    for (int n = 0; n < end; n++)
    {
        temp = nums.at(n);
        nums.at(n) = nums.at(end);
        nums.at(end) = temp;
        end--;
    }
    cout << "Vector after reverse is " << endl;
    for (int n : nums)
    {
        cout << " " << n;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 67, 8};
    revv(nums);
}