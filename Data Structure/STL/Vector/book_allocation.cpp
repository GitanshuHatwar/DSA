//(hard-problem)
// number of pages in books is given , number of students are given.
// find the minimum number of maximum pages that can be allocated to a student
// such that  the allocation of book is contigious . every student gets a book .

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int stu = 1, pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    
    if (stu > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
}

int main()
{
    vector<int> arr = {15, 17, 20};
    int n = arr.size(), m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}