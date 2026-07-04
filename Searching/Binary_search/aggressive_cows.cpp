#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &dis, int n, int cows, int mid)
{
    int c = 1, lastStall = dis[0];
    for(int i = 1 ; i  < n ; i++){
        if(dis[i] - lastStall >= mid){
            c++;
            lastStall = dis[i];
        }
        if(c == cows){
            return true;
        }
    }
    return false;

}
int Cows(vector<int> &dis, int n, int cows)
{
    sort(dis.begin(), dis.end());
    int st = 1, end = dis[n-1] - dis[0];

    int ans = -1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(dis, n, cows, mid))
        {
            ans = max(ans, mid);
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> dis = {1, 2, 8, 4, 9};
    int cows = 3;
    int n = dis.size();
    cout << Cows(dis, n, cows) << endl;
    return 0;
}