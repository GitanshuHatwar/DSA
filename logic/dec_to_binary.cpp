#include<iostream>
using namespace std;

int convert(int numb){
    int rem ;
    int ans = 0 ; 
    int pow = 1;

    while(numb>0){
        rem = numb%2;
        numb = numb/2;
        ans = ans+(rem*pow);
        pow = pow*10;
    }
    return ans;

}

int main(){
    int numb ;
    cout<<"Enter the number ";
    cin >> numb;

    cout<< convert(numb);
}