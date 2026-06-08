#include<iostream>

using namespace std;

int n = 5; 
int main(){
    for(int i = 0; i < n; i++ ){
        char ch = 'A';
        for(int j = 1 ; j <=n ;j++){
            cout<<ch;
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}