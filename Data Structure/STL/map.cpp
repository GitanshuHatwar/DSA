#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<string, int> m;
    m["maggie"] = 50;
    m["pasta"] = 120;
    m["noodles"] = 100;

  
    for (auto p : m)
    {
        cout << p.first <<"  "<< p.second << endl;
    }
    return 0;
}