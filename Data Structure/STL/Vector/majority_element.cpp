// 169. Majority Element
//The majority element is the element that appears more than ⌊n / 2⌋ times.
//  You may assume that the majority element always exists in the array.


//brute force solution

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count;
        int max = nums.at(0);
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            count = 1;

            for (int j = i + 1; j < n; j++) {
                if (nums.at(i) == nums.at(j)) {
                    count++;

                    if (count > (n / 2)) {
                        max = nums.at(i);
                    }
                }
            }
        }

        return max;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution obj;
    int result = obj.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}