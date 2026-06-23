#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    int *ptr = arr;
    int *prt2 = ptr + 10;

    cout << prt2 - ptr << endl;//sub between pointers

    cout << *(ptr + 1) << endl;
    cout << *(ptr + 3) << endl;//opp
    ptr++;
    cout << *ptr << endl;

    return 0;
}