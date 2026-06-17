//  Find the Max Profit that can be achived by buying and selling the stocks on seperate days 
// vector of size n is given for prices . such that buyed stock can be only sold in a future day.

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int Bestbuy = prices[0];
    int mp = 0; // #Max Profit

    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > Bestbuy)
        {
            mp = max(mp, prices[i] - Bestbuy);
        }
        Bestbuy = min(Bestbuy, prices[i]);
    }
    return mp;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 8, 6, 4};
   
    cout << maxProfit(prices);

     // output -> (Best buy = 1 , Best sell = 8 , MP = 7)
}