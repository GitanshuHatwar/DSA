#include<iostream>

using namespace std;
int main(){

    int  n = 7; 
    for(int i = 0; i < n  ; i++ ){
        //for spaces
        for(int j = 0; j < i ;j++){
         cout<<" ";   
        }
        //for values
        for(int j = 0 ; j <n-i ; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}

/*
output: -

1111111
 222222
  33333
   4444
    555
     66
      7

*/