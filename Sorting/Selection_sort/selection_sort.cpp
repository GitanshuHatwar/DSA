#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr)
{
    int n = arr.size();
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {   int min = i;
        for (int j = i+1; j < n; j++)
        {   
            if(arr[min] > arr[j]){
                min = j ;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min]= temp;
    }
}

int main()
{
    vector<int> arr = {1, 2, 4, 3, 12, 6};
    selection_sort(arr);

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}