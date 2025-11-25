#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 3, 1, 9, 9, 7};

    map<int, int> m;

    for (auto x : v)
    {
        m[x]++;
    }
    
    for (auto x : m)
    {
        cout << x.first << " " << x.second;
        cout << endl;
    }
}