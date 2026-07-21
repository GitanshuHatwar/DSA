#include <bits/stdc++.h>
using namespace std;

int gcdOfOddEvenSums(int n)
{
    int sumOdd = 0, sumEven = 0;
    int even = 2, odd = 1;

    for (int i = 0; i < n; i++)
    {
        sumEven = sumEven + even;
        even += 2;
        sumOdd = sumOdd + odd;
        odd += 2;
    }

    int a = max(sumEven, sumOdd);
    int b = min(sumEven, sumOdd);
    int rem = 0;

    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

// Driver (not needed on LeetCode)
int main()
{
    cout << gcdOfOddEvenSums(4);
    return 0;
}
