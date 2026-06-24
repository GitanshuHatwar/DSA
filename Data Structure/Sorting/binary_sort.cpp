#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> &array, int num)
{
    int start = 0;
    int end = array.size()-1;
    

    while (start <= end)
    {
        int mid = start + (end-start)/2; //optimization for start = end = INT_MAX

        if (array[mid] == num)
        {
            return mid;
        }
        else if (array[mid] > num)
        {
            end = mid - 1;
        }
        else if (array[mid] < num)
        {
            start = mid + 1;
        }
    }
     return -1;
}

int main()
{
    vector<int> array = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21};
    int num;

    cout << "Enter the number you want to search" << endl;
    cin >> num;

    cout << "The value was found at " << binary(array, num) << endl;

    return 0;
}
