#include<iostream>

using namespace std;

int n = 3; 
int counter = 1;
int main(){
    for(int i = 0; i < n; i++ ){
        for(int j = 1 ; j <=n ;j++){
            cout<< counter <<" ";
            // cout<<" ";
            counter++;
        }
        cout<<endl;
    }
    return 0;
}