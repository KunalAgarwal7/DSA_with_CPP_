#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {4, 5, 7, 8, 9, 6, 3, 4};

    vector<int> c;
    for (auto x : v)
    {
        c.push_back(x);
    }

    for (auto x : c)
    {
        cout << x << " ";
    }
}