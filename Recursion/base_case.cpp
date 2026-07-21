#include <bits/stdc++.h>
using namespace std;

void table(int n, int val)
{
    if (val == 10)
    {
        cout << n * val;
        return;
    }
    cout << n * val << endl;
    table(n, val + 1);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{

    int n;
    cout << "enter the Numbr" << endl;
    cin >> n;
    table(n, 2);
    cout << "\nFactorial of N is" << endl;
    cout << factorial(n);
    return 0;
}