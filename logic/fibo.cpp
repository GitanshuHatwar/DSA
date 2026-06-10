#include <iostream>
using namespace std;

void fibo(int n)
{
    int n1 = 0;
    int n2 = 1;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cout << n1;
        temp = n1;
        n1 = n2;
        n2 = temp + n1 ;
    }
}

int main()
{
    int n;
    cout << "Enter the Number of series in fibonaccie"<<endl;
    cin >> n;
    fibo(n);
}
