#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &arr, int n, int p, int maxPaint)
{
    int painter = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= maxPaint)
        {
            time += arr[i];
        }
        else
        {
            painter++;
            time = arr[i];
        }
    }
    if (painter <= p)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int painter(vector<int> &arr, int n, int p)
{
    int ans = -1;
    int sum = 0, maxVal = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, p, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {40, 20, 30, 10};
    int p = 2;
    int n = arr.size();

    cout << painter(arr, n, p) << endl;
    return 0;
}