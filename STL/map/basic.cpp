#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 3, 4, 4, 5};

    map<int, int> m;
    for (auto x : v)
    {
        m[x]++;
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}
