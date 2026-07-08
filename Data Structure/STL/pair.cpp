#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<char, int> p = {'a', 1};
    cout << p.first << endl;

    vector<pair<int, int>> vec = {{1, 2}, {3, 4}, {4, 5}};

    vec.push_back({4, 5});
    vec.emplace_back(4, 5);

    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}