// reverse a array using two pointer

#include <iostream>
using namespace std;

void rev(int arr[], int size)
{
    int end = size - 1;
    int temp;
    for (int i = 0; i < end; i++)
    {
        temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
    cout << "\nReversed array " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j];
    }
}

int main()
{
    int size = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << "Original array " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j];
    }
    rev(arr, size);
}