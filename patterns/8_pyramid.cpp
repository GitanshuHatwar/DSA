#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        //spaces
        for (int j = 0; j< n - i - 1; j++)
        {
            cout <<" ";
        }

        // values in first half 
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        // values in second half
        for(int j = i ; j > 0 ;j--){
            cout<<j;
        }
        cout<<endl;

    }
    return 0;
}

/*
output : 
    1
   121
  12321
 1234321
123454321

*/