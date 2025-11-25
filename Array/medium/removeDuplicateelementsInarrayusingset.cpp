#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 2, 3, 3};
    set<int> s;

    for (auto x : v)
    {
        s.insert(x);
    }

    for (auto x : s)
    {
        cout << x << " ";
    }
}