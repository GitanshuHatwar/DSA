#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4, col = 3;
    int target = 8 ;
    //                                            |*| <- (3,2)  
    int arr[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    pair<int,int> p;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] == target){
                cout<<"Match found at "<<i+1<<" row , "<<j+1<<" column";
                p = {i,j};
            }
        }
    }
    // cout<<p.first <<" " << p.second <<endl ;

    return 0;
}