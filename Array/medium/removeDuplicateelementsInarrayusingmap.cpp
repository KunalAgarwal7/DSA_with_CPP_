#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 3, 3};
    map<int,int> s;

    for (auto x : v)
    {
        s[x]++;
    }

    for (auto x : s)
    {
        cout << x.first << " ";
    }
}