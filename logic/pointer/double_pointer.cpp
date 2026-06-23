#include <bits/stdc++.h>
using namespace std;

void change(int &b)
{ // using alias
    b = 10090;
}
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptptr = &ptr;

    cout << **(ptptr) << endl; // using double pointer;
    change(a);
    cout << *(ptr); // value changed in main after passing by alias

    return 0;
}