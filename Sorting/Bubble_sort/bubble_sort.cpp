#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    int n = arr.size();
    int temp = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    vector<int> arr = {1, 4, 2, 3, 5, 6};
    bubble_sort(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}