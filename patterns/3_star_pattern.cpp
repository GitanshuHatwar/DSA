#include<iostream>

using namespace std;

int n = 7; 
int main(){
    for(int i = 0; i < n; i++ ){
        for(int j = 0 ; j <=i ;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}