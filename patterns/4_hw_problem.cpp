#include<iostream>

using namespace std;

int n = 7; 
char ch = 'A';
int main(){
    for(int i = 0; i < n; i++ ){
        for(int j = 0 ; j <=i ;j++){
            cout<<ch;
        }
        ch++; 
        cout<<endl;
    }
    return 0;
}
/*
output -
 A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG

*/